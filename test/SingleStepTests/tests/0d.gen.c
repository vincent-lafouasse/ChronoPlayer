#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_0D, _0D_0000) {
    const struct CPU_State initial_cpu = {.pc=0x8ba0, .a=0xfd, .x=0xf7, .y=0x9b, .sp=0x2d, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0x8ba0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8ba1, .a=0xfd, .x=0xf7, .y=0x9b, .sp=0x2c, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x0f}, {.addr=0x8ba0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8ba0, .value=0x0d, .type=IO_READ},
        {.addr=0x8ba1, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0001) {
    const struct CPU_State initial_cpu = {.pc=0x1ae8, .a=0xae, .x=0x06, .y=0x7c, .sp=0x67, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x1ae8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1ae9, .a=0xae, .x=0x06, .y=0x7c, .sp=0x66, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x10}, {.addr=0x1ae8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1ae8, .value=0x0d, .type=IO_READ},
        {.addr=0x1ae9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0002) {
    const struct CPU_State initial_cpu = {.pc=0x2b6e, .a=0x1d, .x=0x87, .y=0x5b, .sp=0xa5, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x2b6e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2b6f, .a=0x1d, .x=0x87, .y=0x5b, .sp=0xa4, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x3d}, {.addr=0x2b6e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2b6e, .value=0x0d, .type=IO_READ},
        {.addr=0x2b6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x3d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0003) {
    const struct CPU_State initial_cpu = {.pc=0x319d, .a=0x8d, .x=0x5c, .y=0x74, .sp=0x13, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x319d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x319e, .a=0x8d, .x=0x5c, .y=0x74, .sp=0x12, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x44}, {.addr=0x319d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x319d, .value=0x0d, .type=IO_READ},
        {.addr=0x319e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0004) {
    const struct CPU_State initial_cpu = {.pc=0xb68a, .a=0xdb, .x=0xa6, .y=0xb6, .sp=0x6b, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0xb68a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb68b, .a=0xdb, .x=0xa6, .y=0xb6, .sp=0x6a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xe9}, {.addr=0xb68a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb68a, .value=0x0d, .type=IO_READ},
        {.addr=0xb68b, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0005) {
    const struct CPU_State initial_cpu = {.pc=0x1273, .a=0x4c, .x=0xd9, .y=0x70, .sp=0x7c, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x1273, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1274, .a=0x4c, .x=0xd9, .y=0x70, .sp=0x7b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xf9}, {.addr=0x1273, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1273, .value=0x0d, .type=IO_READ},
        {.addr=0x1274, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0006) {
    const struct CPU_State initial_cpu = {.pc=0x09b7, .a=0x73, .x=0x04, .y=0x54, .sp=0xeb, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x09b7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x09b8, .a=0x73, .x=0x04, .y=0x54, .sp=0xea, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xc6}, {.addr=0x09b7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x09b7, .value=0x0d, .type=IO_READ},
        {.addr=0x09b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0007) {
    const struct CPU_State initial_cpu = {.pc=0xebe0, .a=0xc7, .x=0xb5, .y=0x8b, .sp=0x2e, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0xebe0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xebe1, .a=0xc7, .x=0xb5, .y=0x8b, .sp=0x2d, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x93}, {.addr=0xebe0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xebe0, .value=0x0d, .type=IO_READ},
        {.addr=0xebe1, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0008) {
    const struct CPU_State initial_cpu = {.pc=0x9c14, .a=0x3a, .x=0x76, .y=0x95, .sp=0x3d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0x9c14, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9c15, .a=0x3a, .x=0x76, .y=0x95, .sp=0x3c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xd9}, {.addr=0x9c14, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9c14, .value=0x0d, .type=IO_READ},
        {.addr=0x9c15, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0009) {
    const struct CPU_State initial_cpu = {.pc=0xf3dd, .a=0x93, .x=0x3d, .y=0x78, .sp=0x6c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0xf3dd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf3de, .a=0x93, .x=0x3d, .y=0x78, .sp=0x6b, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x7a}, {.addr=0xf3dd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf3dd, .value=0x0d, .type=IO_READ},
        {.addr=0xf3de, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_000A) {
    const struct CPU_State initial_cpu = {.pc=0x0e60, .a=0xc8, .x=0xc2, .y=0x07, .sp=0x09, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x0e60, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0e61, .a=0xc8, .x=0xc2, .y=0x07, .sp=0x08, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xe8}, {.addr=0x0e60, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0e60, .value=0x0d, .type=IO_READ},
        {.addr=0x0e61, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_000B) {
    const struct CPU_State initial_cpu = {.pc=0xd1f0, .a=0xe9, .x=0x10, .y=0xc1, .sp=0x59, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0xd1f0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd1f1, .a=0xe9, .x=0x10, .y=0xc1, .sp=0x58, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x9a}, {.addr=0xd1f0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd1f0, .value=0x0d, .type=IO_READ},
        {.addr=0xd1f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_000C) {
    const struct CPU_State initial_cpu = {.pc=0x42b6, .a=0xb2, .x=0x36, .y=0xa8, .sp=0x70, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0x42b6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x42b7, .a=0xb2, .x=0x36, .y=0xa8, .sp=0x6f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xcd}, {.addr=0x42b6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x42b6, .value=0x0d, .type=IO_READ},
        {.addr=0x42b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_000D) {
    const struct CPU_State initial_cpu = {.pc=0x9539, .a=0x7c, .x=0xb1, .y=0x11, .sp=0x50, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x9539, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x953a, .a=0x7c, .x=0xb1, .y=0x11, .sp=0x4f, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x32}, {.addr=0x9539, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9539, .value=0x0d, .type=IO_READ},
        {.addr=0x953a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_000E) {
    const struct CPU_State initial_cpu = {.pc=0xcbce, .a=0x9a, .x=0xdf, .y=0x6b, .sp=0x00, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0xcbce, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcbcf, .a=0x9a, .x=0xdf, .y=0x6b, .sp=0xff, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xb8}, {.addr=0xcbce, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcbce, .value=0x0d, .type=IO_READ},
        {.addr=0xcbcf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_000F) {
    const struct CPU_State initial_cpu = {.pc=0x5d7c, .a=0x4d, .x=0x76, .y=0x27, .sp=0x71, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0x5d7c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5d7d, .a=0x4d, .x=0x76, .y=0x27, .sp=0x70, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x09}, {.addr=0x5d7c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5d7c, .value=0x0d, .type=IO_READ},
        {.addr=0x5d7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0010) {
    const struct CPU_State initial_cpu = {.pc=0x313a, .a=0xd3, .x=0x52, .y=0x0b, .sp=0x3f, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0x313a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x313b, .a=0xd3, .x=0x52, .y=0x0b, .sp=0x3e, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x4f}, {.addr=0x313a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x313a, .value=0x0d, .type=IO_READ},
        {.addr=0x313b, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0011) {
    const struct CPU_State initial_cpu = {.pc=0x27c7, .a=0x47, .x=0xd1, .y=0x54, .sp=0x69, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0x27c7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x27c8, .a=0x47, .x=0xd1, .y=0x54, .sp=0x68, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0xc0}, {.addr=0x27c7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x27c7, .value=0x0d, .type=IO_READ},
        {.addr=0x27c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0012) {
    const struct CPU_State initial_cpu = {.pc=0x3efb, .a=0xa8, .x=0xe6, .y=0x7e, .sp=0x8d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x3efb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3efc, .a=0xa8, .x=0xe6, .y=0x7e, .sp=0x8c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xf4}, {.addr=0x3efb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3efb, .value=0x0d, .type=IO_READ},
        {.addr=0x3efc, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0013) {
    const struct CPU_State initial_cpu = {.pc=0x0fe5, .a=0x66, .x=0x87, .y=0xbc, .sp=0x0f, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0x0fe5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0fe6, .a=0x66, .x=0x87, .y=0xbc, .sp=0x0e, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x43}, {.addr=0x0fe5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0fe5, .value=0x0d, .type=IO_READ},
        {.addr=0x0fe6, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0014) {
    const struct CPU_State initial_cpu = {.pc=0xa262, .a=0x0f, .x=0xb3, .y=0x8f, .sp=0xe9, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0xa262, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa263, .a=0x0f, .x=0xb3, .y=0x8f, .sp=0xe8, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xb7}, {.addr=0xa262, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa262, .value=0x0d, .type=IO_READ},
        {.addr=0xa263, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0015) {
    const struct CPU_State initial_cpu = {.pc=0xdce3, .a=0x71, .x=0xb9, .y=0x1b, .sp=0x85, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0xdce3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdce4, .a=0x71, .x=0xb9, .y=0x1b, .sp=0x84, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xb9}, {.addr=0xdce3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdce3, .value=0x0d, .type=IO_READ},
        {.addr=0xdce4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0016) {
    const struct CPU_State initial_cpu = {.pc=0xff17, .a=0x8d, .x=0x25, .y=0x7a, .sp=0x7d, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xff17, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xff18, .a=0x8d, .x=0x25, .y=0x7a, .sp=0x7c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xbd}, {.addr=0xff17, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xff17, .value=0x0d, .type=IO_READ},
        {.addr=0xff18, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0017) {
    const struct CPU_State initial_cpu = {.pc=0xfcec, .a=0xe9, .x=0xc0, .y=0xfc, .sp=0x29, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0xfcec, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfced, .a=0xe9, .x=0xc0, .y=0xfc, .sp=0x28, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xbd}, {.addr=0xfcec, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfcec, .value=0x0d, .type=IO_READ},
        {.addr=0xfced, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0018) {
    const struct CPU_State initial_cpu = {.pc=0x3fd4, .a=0x23, .x=0x62, .y=0xb9, .sp=0x35, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x3fd4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3fd5, .a=0x23, .x=0x62, .y=0xb9, .sp=0x34, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x5c}, {.addr=0x3fd4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3fd4, .value=0x0d, .type=IO_READ},
        {.addr=0x3fd5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0019) {
    const struct CPU_State initial_cpu = {.pc=0x361b, .a=0x96, .x=0xdc, .y=0xa7, .sp=0x01, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0x361b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x361c, .a=0x96, .x=0xdc, .y=0xa7, .sp=0x00, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x54}, {.addr=0x361b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x361b, .value=0x0d, .type=IO_READ},
        {.addr=0x361c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_001A) {
    const struct CPU_State initial_cpu = {.pc=0xca60, .a=0xc2, .x=0x5f, .y=0xf7, .sp=0xb9, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0xca60, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xca61, .a=0xc2, .x=0x5f, .y=0xf7, .sp=0xb8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xa0}, {.addr=0xca60, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xca60, .value=0x0d, .type=IO_READ},
        {.addr=0xca61, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_001B) {
    const struct CPU_State initial_cpu = {.pc=0x0990, .a=0x3a, .x=0x01, .y=0x61, .sp=0xcb, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0x0990, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0991, .a=0x3a, .x=0x01, .y=0x61, .sp=0xca, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x1b}, {.addr=0x0990, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0990, .value=0x0d, .type=IO_READ},
        {.addr=0x0991, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_001C) {
    const struct CPU_State initial_cpu = {.pc=0xb20e, .a=0xf9, .x=0xec, .y=0x40, .sp=0x47, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0xb20e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb20f, .a=0xf9, .x=0xec, .y=0x40, .sp=0x46, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xc7}, {.addr=0xb20e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb20e, .value=0x0d, .type=IO_READ},
        {.addr=0xb20f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_001D) {
    const struct CPU_State initial_cpu = {.pc=0x7dd9, .a=0xc0, .x=0x00, .y=0xf1, .sp=0x11, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x7dd9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7dda, .a=0xc0, .x=0x00, .y=0xf1, .sp=0x10, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xb2}, {.addr=0x7dd9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7dd9, .value=0x0d, .type=IO_READ},
        {.addr=0x7dda, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_001E) {
    const struct CPU_State initial_cpu = {.pc=0x1514, .a=0xef, .x=0xca, .y=0x8a, .sp=0xd9, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0x1514, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1515, .a=0xef, .x=0xca, .y=0x8a, .sp=0xd8, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x93}, {.addr=0x1514, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1514, .value=0x0d, .type=IO_READ},
        {.addr=0x1515, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_001F) {
    const struct CPU_State initial_cpu = {.pc=0x52cd, .a=0xdd, .x=0xbf, .y=0x43, .sp=0x30, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0x52cd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x52ce, .a=0xdd, .x=0xbf, .y=0x43, .sp=0x2f, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x72}, {.addr=0x52cd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x52cd, .value=0x0d, .type=IO_READ},
        {.addr=0x52ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x72, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0020) {
    const struct CPU_State initial_cpu = {.pc=0x5631, .a=0x92, .x=0xd8, .y=0xa7, .sp=0x94, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x5631, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5632, .a=0x92, .x=0xd8, .y=0xa7, .sp=0x93, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xc4}, {.addr=0x5631, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5631, .value=0x0d, .type=IO_READ},
        {.addr=0x5632, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xc4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0021) {
    const struct CPU_State initial_cpu = {.pc=0x7e4f, .a=0x69, .x=0xdb, .y=0x30, .sp=0xd1, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x7e4f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7e50, .a=0x69, .x=0xdb, .y=0x30, .sp=0xd0, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x19}, {.addr=0x7e4f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7e4f, .value=0x0d, .type=IO_READ},
        {.addr=0x7e50, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0022) {
    const struct CPU_State initial_cpu = {.pc=0x1f6b, .a=0x23, .x=0xdf, .y=0x09, .sp=0x00, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0x1f6b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1f6c, .a=0x23, .x=0xdf, .y=0x09, .sp=0xff, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x5b}, {.addr=0x1f6b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1f6b, .value=0x0d, .type=IO_READ},
        {.addr=0x1f6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0023) {
    const struct CPU_State initial_cpu = {.pc=0xffea, .a=0xd5, .x=0xf5, .y=0x67, .sp=0x9d, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x00}, {.addr=0xffea, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xffeb, .a=0xd5, .x=0xf5, .y=0x67, .sp=0x9c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x0d}, {.addr=0xffea, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xffea, .value=0x0d, .type=IO_READ},
        {.addr=0xffeb, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0024) {
    const struct CPU_State initial_cpu = {.pc=0xbb7e, .a=0xff, .x=0xb1, .y=0xf4, .sp=0x4b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0xbb7e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbb7f, .a=0xff, .x=0xb1, .y=0xf4, .sp=0x4a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xdc}, {.addr=0xbb7e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbb7e, .value=0x0d, .type=IO_READ},
        {.addr=0xbb7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0025) {
    const struct CPU_State initial_cpu = {.pc=0x2395, .a=0x78, .x=0x5e, .y=0xf9, .sp=0xca, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x2395, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2396, .a=0x78, .x=0x5e, .y=0xf9, .sp=0xc9, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x62}, {.addr=0x2395, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2395, .value=0x0d, .type=IO_READ},
        {.addr=0x2396, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0026) {
    const struct CPU_State initial_cpu = {.pc=0xe9fb, .a=0x1c, .x=0x56, .y=0x72, .sp=0x77, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x00}, {.addr=0xe9fb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe9fc, .a=0x1c, .x=0x56, .y=0x72, .sp=0x76, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x04}, {.addr=0xe9fb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe9fb, .value=0x0d, .type=IO_READ},
        {.addr=0xe9fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0027) {
    const struct CPU_State initial_cpu = {.pc=0x5d9b, .a=0xfc, .x=0x37, .y=0x96, .sp=0x32, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0x5d9b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5d9c, .a=0xfc, .x=0x37, .y=0x96, .sp=0x31, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xce}, {.addr=0x5d9b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5d9b, .value=0x0d, .type=IO_READ},
        {.addr=0x5d9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0028) {
    const struct CPU_State initial_cpu = {.pc=0xf671, .a=0xf9, .x=0x5b, .y=0x01, .sp=0x63, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0xf671, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf672, .a=0xf9, .x=0x5b, .y=0x01, .sp=0x62, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xbc}, {.addr=0xf671, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf671, .value=0x0d, .type=IO_READ},
        {.addr=0xf672, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0029) {
    const struct CPU_State initial_cpu = {.pc=0x0226, .a=0x63, .x=0x1a, .y=0xd0, .sp=0xc1, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x0226, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0227, .a=0x63, .x=0x1a, .y=0xd0, .sp=0xc0, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x3b}, {.addr=0x0226, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0226, .value=0x0d, .type=IO_READ},
        {.addr=0x0227, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_002A) {
    const struct CPU_State initial_cpu = {.pc=0xe77f, .a=0x01, .x=0xcf, .y=0x67, .sp=0x55, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0xe77f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe780, .a=0x01, .x=0xcf, .y=0x67, .sp=0x54, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x0a}, {.addr=0xe77f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe77f, .value=0x0d, .type=IO_READ},
        {.addr=0xe780, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_002B) {
    const struct CPU_State initial_cpu = {.pc=0xe869, .a=0x80, .x=0x6d, .y=0x75, .sp=0x86, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0xe869, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe86a, .a=0x80, .x=0x6d, .y=0x75, .sp=0x85, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xe7}, {.addr=0xe869, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe869, .value=0x0d, .type=IO_READ},
        {.addr=0xe86a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_002C) {
    const struct CPU_State initial_cpu = {.pc=0x840b, .a=0xa6, .x=0x49, .y=0x8a, .sp=0x4d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0x840b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x840c, .a=0xa6, .x=0x49, .y=0x8a, .sp=0x4c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xf4}, {.addr=0x840b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x840b, .value=0x0d, .type=IO_READ},
        {.addr=0x840c, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_002D) {
    const struct CPU_State initial_cpu = {.pc=0xd40c, .a=0xad, .x=0x2d, .y=0xd4, .sp=0x47, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0xd40c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd40d, .a=0xad, .x=0x2d, .y=0xd4, .sp=0x46, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xa9}, {.addr=0xd40c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd40c, .value=0x0d, .type=IO_READ},
        {.addr=0xd40d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_002E) {
    const struct CPU_State initial_cpu = {.pc=0x81c2, .a=0x52, .x=0x52, .y=0x7e, .sp=0xa5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x81c2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x81c3, .a=0x52, .x=0x52, .y=0x7e, .sp=0xa4, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x32}, {.addr=0x81c2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x81c2, .value=0x0d, .type=IO_READ},
        {.addr=0x81c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_002F) {
    const struct CPU_State initial_cpu = {.pc=0xe282, .a=0xfa, .x=0x36, .y=0xb9, .sp=0x95, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x00}, {.addr=0xe282, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe283, .a=0xfa, .x=0x36, .y=0xb9, .sp=0x94, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x0b}, {.addr=0xe282, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe282, .value=0x0d, .type=IO_READ},
        {.addr=0xe283, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x0b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0030) {
    const struct CPU_State initial_cpu = {.pc=0x8de2, .a=0x08, .x=0x6b, .y=0x91, .sp=0x98, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x8de2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8de3, .a=0x08, .x=0x6b, .y=0x91, .sp=0x97, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x7c}, {.addr=0x8de2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8de2, .value=0x0d, .type=IO_READ},
        {.addr=0x8de3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0031) {
    const struct CPU_State initial_cpu = {.pc=0x3dc2, .a=0xcf, .x=0xee, .y=0xd8, .sp=0xfc, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x3dc2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3dc3, .a=0xcf, .x=0xee, .y=0xd8, .sp=0xfb, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x22}, {.addr=0x3dc2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3dc2, .value=0x0d, .type=IO_READ},
        {.addr=0x3dc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x22, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0032) {
    const struct CPU_State initial_cpu = {.pc=0x3914, .a=0xd9, .x=0x8d, .y=0x1b, .sp=0x68, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0x3914, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3915, .a=0xd9, .x=0x8d, .y=0x1b, .sp=0x67, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x38}, {.addr=0x3914, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3914, .value=0x0d, .type=IO_READ},
        {.addr=0x3915, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x38, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0033) {
    const struct CPU_State initial_cpu = {.pc=0x1077, .a=0xfd, .x=0x21, .y=0x5c, .sp=0x38, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x1077, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1078, .a=0xfd, .x=0x21, .y=0x5c, .sp=0x37, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x9d}, {.addr=0x1077, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1077, .value=0x0d, .type=IO_READ},
        {.addr=0x1078, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0034) {
    const struct CPU_State initial_cpu = {.pc=0x9c55, .a=0x34, .x=0x71, .y=0x27, .sp=0x9b, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x9c55, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9c56, .a=0x34, .x=0x71, .y=0x27, .sp=0x9a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xcc}, {.addr=0x9c55, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9c55, .value=0x0d, .type=IO_READ},
        {.addr=0x9c56, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0035) {
    const struct CPU_State initial_cpu = {.pc=0x64ac, .a=0x92, .x=0xc1, .y=0x3c, .sp=0x1f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0x64ac, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x64ad, .a=0x92, .x=0xc1, .y=0x3c, .sp=0x1e, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xfe}, {.addr=0x64ac, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x64ac, .value=0x0d, .type=IO_READ},
        {.addr=0x64ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0036) {
    const struct CPU_State initial_cpu = {.pc=0xa7c1, .a=0x90, .x=0x68, .y=0x85, .sp=0x93, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0xa7c1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa7c2, .a=0x90, .x=0x68, .y=0x85, .sp=0x92, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xee}, {.addr=0xa7c1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa7c1, .value=0x0d, .type=IO_READ},
        {.addr=0xa7c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0037) {
    const struct CPU_State initial_cpu = {.pc=0x9fad, .a=0x53, .x=0x08, .y=0xa6, .sp=0x0e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0x9fad, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9fae, .a=0x53, .x=0x08, .y=0xa6, .sp=0x0d, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x86}, {.addr=0x9fad, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9fad, .value=0x0d, .type=IO_READ},
        {.addr=0x9fae, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0038) {
    const struct CPU_State initial_cpu = {.pc=0x79f6, .a=0x2d, .x=0x64, .y=0x18, .sp=0x6c, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0x79f6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x79f7, .a=0x2d, .x=0x64, .y=0x18, .sp=0x6b, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x2b}, {.addr=0x79f6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x79f6, .value=0x0d, .type=IO_READ},
        {.addr=0x79f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0039) {
    const struct CPU_State initial_cpu = {.pc=0xe5a4, .a=0xb4, .x=0xe3, .y=0xbd, .sp=0x04, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xe5a4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe5a5, .a=0xb4, .x=0xe3, .y=0xbd, .sp=0x03, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xe0}, {.addr=0xe5a4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe5a4, .value=0x0d, .type=IO_READ},
        {.addr=0xe5a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_003A) {
    const struct CPU_State initial_cpu = {.pc=0x4585, .a=0x7e, .x=0x25, .y=0x04, .sp=0xcd, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0x4585, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4586, .a=0x7e, .x=0x25, .y=0x04, .sp=0xcc, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xc2}, {.addr=0x4585, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4585, .value=0x0d, .type=IO_READ},
        {.addr=0x4586, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_003B) {
    const struct CPU_State initial_cpu = {.pc=0x4d7a, .a=0x77, .x=0xa9, .y=0x16, .sp=0x64, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x4d7a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4d7b, .a=0x77, .x=0xa9, .y=0x16, .sp=0x63, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x11}, {.addr=0x4d7a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4d7a, .value=0x0d, .type=IO_READ},
        {.addr=0x4d7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_003C) {
    const struct CPU_State initial_cpu = {.pc=0x3ce3, .a=0x5b, .x=0x50, .y=0x3a, .sp=0x8e, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x3ce3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3ce4, .a=0x5b, .x=0x50, .y=0x3a, .sp=0x8d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x98}, {.addr=0x3ce3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3ce3, .value=0x0d, .type=IO_READ},
        {.addr=0x3ce4, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_003D) {
    const struct CPU_State initial_cpu = {.pc=0x1ff4, .a=0x33, .x=0xf9, .y=0xba, .sp=0x7a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x1ff4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1ff5, .a=0x33, .x=0xf9, .y=0xba, .sp=0x79, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x2b}, {.addr=0x1ff4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1ff4, .value=0x0d, .type=IO_READ},
        {.addr=0x1ff5, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_003E) {
    const struct CPU_State initial_cpu = {.pc=0x174b, .a=0x1a, .x=0xad, .y=0x17, .sp=0x5f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x174b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x174c, .a=0x1a, .x=0xad, .y=0x17, .sp=0x5e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xdc}, {.addr=0x174b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x174b, .value=0x0d, .type=IO_READ},
        {.addr=0x174c, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_003F) {
    const struct CPU_State initial_cpu = {.pc=0x20b6, .a=0xdb, .x=0xee, .y=0xe9, .sp=0xfe, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0x20b6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x20b7, .a=0xdb, .x=0xee, .y=0xe9, .sp=0xfd, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x2a}, {.addr=0x20b6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x20b6, .value=0x0d, .type=IO_READ},
        {.addr=0x20b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0040) {
    const struct CPU_State initial_cpu = {.pc=0x20fa, .a=0x12, .x=0xeb, .y=0x7a, .sp=0x69, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0x20fa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x20fb, .a=0x12, .x=0xeb, .y=0x7a, .sp=0x68, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x66}, {.addr=0x20fa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x20fa, .value=0x0d, .type=IO_READ},
        {.addr=0x20fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0041) {
    const struct CPU_State initial_cpu = {.pc=0x8bcc, .a=0x17, .x=0xa5, .y=0xcc, .sp=0xe9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x8bcc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8bcd, .a=0x17, .x=0xa5, .y=0xcc, .sp=0xe8, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xeb}, {.addr=0x8bcc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8bcc, .value=0x0d, .type=IO_READ},
        {.addr=0x8bcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0042) {
    const struct CPU_State initial_cpu = {.pc=0xc394, .a=0x7c, .x=0x5a, .y=0xf6, .sp=0x54, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0xc394, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc395, .a=0x7c, .x=0x5a, .y=0xf6, .sp=0x53, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x6e}, {.addr=0xc394, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc394, .value=0x0d, .type=IO_READ},
        {.addr=0xc395, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0043) {
    const struct CPU_State initial_cpu = {.pc=0xe900, .a=0x89, .x=0xda, .y=0x48, .sp=0x6c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0xe900, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe901, .a=0x89, .x=0xda, .y=0x48, .sp=0x6b, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x0a}, {.addr=0xe900, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe900, .value=0x0d, .type=IO_READ},
        {.addr=0xe901, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0044) {
    const struct CPU_State initial_cpu = {.pc=0xa3b4, .a=0xa3, .x=0xa7, .y=0x6a, .sp=0xf0, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0xa3b4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa3b5, .a=0xa3, .x=0xa7, .y=0x6a, .sp=0xef, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x89}, {.addr=0xa3b4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa3b4, .value=0x0d, .type=IO_READ},
        {.addr=0xa3b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x89, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0045) {
    const struct CPU_State initial_cpu = {.pc=0x67da, .a=0x8d, .x=0x56, .y=0x4c, .sp=0xc4, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x67da, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x67db, .a=0x8d, .x=0x56, .y=0x4c, .sp=0xc3, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x9f}, {.addr=0x67da, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x67da, .value=0x0d, .type=IO_READ},
        {.addr=0x67db, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x9f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0046) {
    const struct CPU_State initial_cpu = {.pc=0x6148, .a=0x72, .x=0x22, .y=0x89, .sp=0x31, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0x6148, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6149, .a=0x72, .x=0x22, .y=0x89, .sp=0x30, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x42}, {.addr=0x6148, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6148, .value=0x0d, .type=IO_READ},
        {.addr=0x6149, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0047) {
    const struct CPU_State initial_cpu = {.pc=0xdda7, .a=0x7b, .x=0xa4, .y=0x64, .sp=0x19, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0xdda7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdda8, .a=0x7b, .x=0xa4, .y=0x64, .sp=0x18, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x97}, {.addr=0xdda7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdda7, .value=0x0d, .type=IO_READ},
        {.addr=0xdda8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0048) {
    const struct CPU_State initial_cpu = {.pc=0x63d3, .a=0xeb, .x=0x04, .y=0x56, .sp=0x99, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x63d3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x63d4, .a=0xeb, .x=0x04, .y=0x56, .sp=0x98, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x13}, {.addr=0x63d3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x63d3, .value=0x0d, .type=IO_READ},
        {.addr=0x63d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0049) {
    const struct CPU_State initial_cpu = {.pc=0x04c2, .a=0x14, .x=0xe4, .y=0x90, .sp=0xce, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x04c2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x04c3, .a=0x14, .x=0xe4, .y=0x90, .sp=0xcd, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x06}, {.addr=0x04c2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x04c2, .value=0x0d, .type=IO_READ},
        {.addr=0x04c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_004A) {
    const struct CPU_State initial_cpu = {.pc=0xc12a, .a=0x49, .x=0xa5, .y=0x10, .sp=0x57, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0xc12a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc12b, .a=0x49, .x=0xa5, .y=0x10, .sp=0x56, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x67}, {.addr=0xc12a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc12a, .value=0x0d, .type=IO_READ},
        {.addr=0xc12b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_004B) {
    const struct CPU_State initial_cpu = {.pc=0x3f85, .a=0xe8, .x=0x15, .y=0x77, .sp=0xe8, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0x3f85, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3f86, .a=0xe8, .x=0x15, .y=0x77, .sp=0xe7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xb5}, {.addr=0x3f85, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3f85, .value=0x0d, .type=IO_READ},
        {.addr=0x3f86, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_004C) {
    const struct CPU_State initial_cpu = {.pc=0xe1fd, .a=0x1b, .x=0x7f, .y=0x27, .sp=0x0e, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0xe1fd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe1fe, .a=0x1b, .x=0x7f, .y=0x27, .sp=0x0d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x4d}, {.addr=0xe1fd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe1fd, .value=0x0d, .type=IO_READ},
        {.addr=0xe1fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0x4d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_004D) {
    const struct CPU_State initial_cpu = {.pc=0x399e, .a=0xcd, .x=0xaf, .y=0x45, .sp=0x0f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0x399e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x399f, .a=0xcd, .x=0xaf, .y=0x45, .sp=0x0e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x85}, {.addr=0x399e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x399e, .value=0x0d, .type=IO_READ},
        {.addr=0x399f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_004E) {
    const struct CPU_State initial_cpu = {.pc=0x0c60, .a=0x20, .x=0xbe, .y=0xe9, .sp=0xdb, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0x0c60, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0c61, .a=0x20, .x=0xbe, .y=0xe9, .sp=0xda, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x26}, {.addr=0x0c60, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0c60, .value=0x0d, .type=IO_READ},
        {.addr=0x0c61, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_004F) {
    const struct CPU_State initial_cpu = {.pc=0x4a6c, .a=0xc8, .x=0x72, .y=0x0d, .sp=0x07, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x4a6c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4a6d, .a=0xc8, .x=0x72, .y=0x0d, .sp=0x06, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xe1}, {.addr=0x4a6c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4a6c, .value=0x0d, .type=IO_READ},
        {.addr=0x4a6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0050) {
    const struct CPU_State initial_cpu = {.pc=0x933b, .a=0x44, .x=0x87, .y=0x44, .sp=0xa4, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0x933b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x933c, .a=0x44, .x=0x87, .y=0x44, .sp=0xa3, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xaf}, {.addr=0x933b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x933b, .value=0x0d, .type=IO_READ},
        {.addr=0x933c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0051) {
    const struct CPU_State initial_cpu = {.pc=0x8b3d, .a=0x87, .x=0x7f, .y=0x9b, .sp=0x4e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x8b3d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8b3e, .a=0x87, .x=0x7f, .y=0x9b, .sp=0x4d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x95}, {.addr=0x8b3d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8b3d, .value=0x0d, .type=IO_READ},
        {.addr=0x8b3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0052) {
    const struct CPU_State initial_cpu = {.pc=0x9043, .a=0xac, .x=0xeb, .y=0x9e, .sp=0x8d, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x9043, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9044, .a=0xac, .x=0xeb, .y=0x9e, .sp=0x8c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xd8}, {.addr=0x9043, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9043, .value=0x0d, .type=IO_READ},
        {.addr=0x9044, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0053) {
    const struct CPU_State initial_cpu = {.pc=0x213e, .a=0x6d, .x=0xfd, .y=0x94, .sp=0xd6, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0x213e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x213f, .a=0x6d, .x=0xfd, .y=0x94, .sp=0xd5, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x54}, {.addr=0x213e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x213e, .value=0x0d, .type=IO_READ},
        {.addr=0x213f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0054) {
    const struct CPU_State initial_cpu = {.pc=0x7cba, .a=0xba, .x=0x0b, .y=0x09, .sp=0x2a, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0x7cba, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7cbb, .a=0xba, .x=0x0b, .y=0x09, .sp=0x29, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xbf}, {.addr=0x7cba, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7cba, .value=0x0d, .type=IO_READ},
        {.addr=0x7cbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0055) {
    const struct CPU_State initial_cpu = {.pc=0xdf38, .a=0x42, .x=0xf5, .y=0x90, .sp=0xab, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0xdf38, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdf39, .a=0x42, .x=0xf5, .y=0x90, .sp=0xaa, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x5b}, {.addr=0xdf38, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdf38, .value=0x0d, .type=IO_READ},
        {.addr=0xdf39, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0056) {
    const struct CPU_State initial_cpu = {.pc=0x4506, .a=0x60, .x=0x27, .y=0xeb, .sp=0x37, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0x4506, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4507, .a=0x60, .x=0x27, .y=0xeb, .sp=0x36, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xdb}, {.addr=0x4506, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4506, .value=0x0d, .type=IO_READ},
        {.addr=0x4507, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0057) {
    const struct CPU_State initial_cpu = {.pc=0xa86a, .a=0x40, .x=0x74, .y=0xa5, .sp=0x75, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0xa86a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa86b, .a=0x40, .x=0x74, .y=0xa5, .sp=0x74, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x2c}, {.addr=0xa86a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa86a, .value=0x0d, .type=IO_READ},
        {.addr=0xa86b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0058) {
    const struct CPU_State initial_cpu = {.pc=0x86f1, .a=0x78, .x=0xf2, .y=0x8c, .sp=0xef, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x86f1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x86f2, .a=0x78, .x=0xf2, .y=0x8c, .sp=0xee, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x6a}, {.addr=0x86f1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x86f1, .value=0x0d, .type=IO_READ},
        {.addr=0x86f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0059) {
    const struct CPU_State initial_cpu = {.pc=0xa0d5, .a=0x3c, .x=0x9b, .y=0xcd, .sp=0xb8, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xa0d5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa0d6, .a=0x3c, .x=0x9b, .y=0xcd, .sp=0xb7, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x63}, {.addr=0xa0d5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa0d5, .value=0x0d, .type=IO_READ},
        {.addr=0xa0d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_005A) {
    const struct CPU_State initial_cpu = {.pc=0xf1a4, .a=0x22, .x=0x2c, .y=0xea, .sp=0x13, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0xf1a4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf1a5, .a=0x22, .x=0x2c, .y=0xea, .sp=0x12, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xe3}, {.addr=0xf1a4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf1a4, .value=0x0d, .type=IO_READ},
        {.addr=0xf1a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_005B) {
    const struct CPU_State initial_cpu = {.pc=0x07ff, .a=0x52, .x=0x60, .y=0xa2, .sp=0xdf, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x07ff, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0800, .a=0x52, .x=0x60, .y=0xa2, .sp=0xde, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xe4}, {.addr=0x07ff, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x07ff, .value=0x0d, .type=IO_READ},
        {.addr=0x0800, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_005C) {
    const struct CPU_State initial_cpu = {.pc=0x8876, .a=0xb3, .x=0x61, .y=0xed, .sp=0x65, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0x8876, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8877, .a=0xb3, .x=0x61, .y=0xed, .sp=0x64, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xea}, {.addr=0x8876, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8876, .value=0x0d, .type=IO_READ},
        {.addr=0x8877, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_005D) {
    const struct CPU_State initial_cpu = {.pc=0x1f60, .a=0xad, .x=0x25, .y=0x77, .sp=0xbd, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x1f60, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1f61, .a=0xad, .x=0x25, .y=0x77, .sp=0xbc, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x97}, {.addr=0x1f60, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1f60, .value=0x0d, .type=IO_READ},
        {.addr=0x1f61, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_005E) {
    const struct CPU_State initial_cpu = {.pc=0x2c26, .a=0xf2, .x=0xe6, .y=0xb5, .sp=0x7d, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0x2c26, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2c27, .a=0xf2, .x=0xe6, .y=0xb5, .sp=0x7c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xa9}, {.addr=0x2c26, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2c26, .value=0x0d, .type=IO_READ},
        {.addr=0x2c27, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_005F) {
    const struct CPU_State initial_cpu = {.pc=0xd348, .a=0x36, .x=0x57, .y=0x3e, .sp=0xb6, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xd348, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd349, .a=0x36, .x=0x57, .y=0x3e, .sp=0xb5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x10}, {.addr=0xd348, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd348, .value=0x0d, .type=IO_READ},
        {.addr=0xd349, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0060) {
    const struct CPU_State initial_cpu = {.pc=0x1525, .a=0xda, .x=0xc4, .y=0x24, .sp=0x3c, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x1525, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1526, .a=0xda, .x=0xc4, .y=0x24, .sp=0x3b, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x4a}, {.addr=0x1525, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1525, .value=0x0d, .type=IO_READ},
        {.addr=0x1526, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0061) {
    const struct CPU_State initial_cpu = {.pc=0x0100, .a=0x51, .x=0xd9, .y=0x6f, .sp=0xa1, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x0d}, {.addr=0x01a1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0101, .a=0x51, .x=0xd9, .y=0x6f, .sp=0xa0, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x0d}, {.addr=0x01a1, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x0100, .value=0x0d, .type=IO_READ},
        {.addr=0x0101, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0062) {
    const struct CPU_State initial_cpu = {.pc=0x89fd, .a=0xa9, .x=0x53, .y=0x0a, .sp=0xc1, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x89fd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x89fe, .a=0xa9, .x=0x53, .y=0x0a, .sp=0xc0, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x12}, {.addr=0x89fd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x89fd, .value=0x0d, .type=IO_READ},
        {.addr=0x89fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0063) {
    const struct CPU_State initial_cpu = {.pc=0xfcb2, .a=0x12, .x=0xf8, .y=0x0e, .sp=0xb6, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xfcb2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfcb3, .a=0x12, .x=0xf8, .y=0x0e, .sp=0xb5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x65}, {.addr=0xfcb2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfcb2, .value=0x0d, .type=IO_READ},
        {.addr=0xfcb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0064) {
    const struct CPU_State initial_cpu = {.pc=0x1f7c, .a=0xad, .x=0xc4, .y=0xb5, .sp=0xbb, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x1f7c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1f7d, .a=0xad, .x=0xc4, .y=0xb5, .sp=0xba, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x6c}, {.addr=0x1f7c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1f7c, .value=0x0d, .type=IO_READ},
        {.addr=0x1f7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0065) {
    const struct CPU_State initial_cpu = {.pc=0xdaf3, .a=0x84, .x=0x1c, .y=0x9e, .sp=0x2b, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0xdaf3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdaf4, .a=0x84, .x=0x1c, .y=0x9e, .sp=0x2a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x1c}, {.addr=0xdaf3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdaf3, .value=0x0d, .type=IO_READ},
        {.addr=0xdaf4, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0066) {
    const struct CPU_State initial_cpu = {.pc=0xaa90, .a=0xd1, .x=0x1d, .y=0x0d, .sp=0xc4, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xaa90, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xaa91, .a=0xd1, .x=0x1d, .y=0x0d, .sp=0xc3, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x0d}, {.addr=0xaa90, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xaa90, .value=0x0d, .type=IO_READ},
        {.addr=0xaa91, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0067) {
    const struct CPU_State initial_cpu = {.pc=0xea54, .a=0x56, .x=0x82, .y=0xe3, .sp=0x35, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0xea54, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xea55, .a=0x56, .x=0x82, .y=0xe3, .sp=0x34, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x58}, {.addr=0xea54, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xea54, .value=0x0d, .type=IO_READ},
        {.addr=0xea55, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0068) {
    const struct CPU_State initial_cpu = {.pc=0x306c, .a=0x85, .x=0xe3, .y=0x51, .sp=0x47, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x306c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x306d, .a=0x85, .x=0xe3, .y=0x51, .sp=0x46, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x99}, {.addr=0x306c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x306c, .value=0x0d, .type=IO_READ},
        {.addr=0x306d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0069) {
    const struct CPU_State initial_cpu = {.pc=0x2c9c, .a=0x30, .x=0x52, .y=0x76, .sp=0xe4, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x2c9c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2c9d, .a=0x30, .x=0x52, .y=0x76, .sp=0xe3, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x45}, {.addr=0x2c9c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2c9c, .value=0x0d, .type=IO_READ},
        {.addr=0x2c9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x45, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_006A) {
    const struct CPU_State initial_cpu = {.pc=0x8317, .a=0x74, .x=0xb5, .y=0x53, .sp=0x62, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0x8317, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8318, .a=0x74, .x=0xb5, .y=0x53, .sp=0x61, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x10}, {.addr=0x8317, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8317, .value=0x0d, .type=IO_READ},
        {.addr=0x8318, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_006B) {
    const struct CPU_State initial_cpu = {.pc=0x76ee, .a=0x1d, .x=0x83, .y=0x8e, .sp=0x80, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x76ee, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x76ef, .a=0x1d, .x=0x83, .y=0x8e, .sp=0x7f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xe1}, {.addr=0x76ee, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x76ee, .value=0x0d, .type=IO_READ},
        {.addr=0x76ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_006C) {
    const struct CPU_State initial_cpu = {.pc=0x02a8, .a=0x3d, .x=0xbf, .y=0xaf, .sp=0x88, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0x02a8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x02a9, .a=0x3d, .x=0xbf, .y=0xaf, .sp=0x87, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xd7}, {.addr=0x02a8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x02a8, .value=0x0d, .type=IO_READ},
        {.addr=0x02a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_006D) {
    const struct CPU_State initial_cpu = {.pc=0x15af, .a=0x48, .x=0xe6, .y=0x74, .sp=0xe3, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x15af, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x15b0, .a=0x48, .x=0xe6, .y=0x74, .sp=0xe2, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xc0}, {.addr=0x15af, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x15af, .value=0x0d, .type=IO_READ},
        {.addr=0x15b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_006E) {
    const struct CPU_State initial_cpu = {.pc=0xe512, .a=0xa9, .x=0x9c, .y=0x09, .sp=0x90, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x00}, {.addr=0xe512, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe513, .a=0xa9, .x=0x9c, .y=0x09, .sp=0x8f, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x96}, {.addr=0xe512, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe512, .value=0x0d, .type=IO_READ},
        {.addr=0xe513, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_006F) {
    const struct CPU_State initial_cpu = {.pc=0x1699, .a=0xb1, .x=0x75, .y=0xc5, .sp=0x02, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0x1699, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x169a, .a=0xb1, .x=0x75, .y=0xc5, .sp=0x01, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xa1}, {.addr=0x1699, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1699, .value=0x0d, .type=IO_READ},
        {.addr=0x169a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0070) {
    const struct CPU_State initial_cpu = {.pc=0xe291, .a=0x39, .x=0x7d, .y=0x6f, .sp=0x7b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0xe291, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe292, .a=0x39, .x=0x7d, .y=0x6f, .sp=0x7a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x84}, {.addr=0xe291, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe291, .value=0x0d, .type=IO_READ},
        {.addr=0xe292, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0071) {
    const struct CPU_State initial_cpu = {.pc=0x824e, .a=0xa6, .x=0x4a, .y=0x49, .sp=0x6f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x824e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x824f, .a=0xa6, .x=0x4a, .y=0x49, .sp=0x6e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x4d}, {.addr=0x824e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x824e, .value=0x0d, .type=IO_READ},
        {.addr=0x824f, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x4d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0072) {
    const struct CPU_State initial_cpu = {.pc=0xc0d1, .a=0xcf, .x=0xef, .y=0x26, .sp=0x08, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xc0d1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc0d2, .a=0xcf, .x=0xef, .y=0x26, .sp=0x07, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x08}, {.addr=0xc0d1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc0d1, .value=0x0d, .type=IO_READ},
        {.addr=0xc0d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0073) {
    const struct CPU_State initial_cpu = {.pc=0xeeff, .a=0x3e, .x=0x4d, .y=0x49, .sp=0x7d, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xeeff, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xef00, .a=0x3e, .x=0x4d, .y=0x49, .sp=0x7c, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x0a}, {.addr=0xeeff, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xeeff, .value=0x0d, .type=IO_READ},
        {.addr=0xef00, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0074) {
    const struct CPU_State initial_cpu = {.pc=0x7444, .a=0x09, .x=0xed, .y=0x41, .sp=0x67, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x7444, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7445, .a=0x09, .x=0xed, .y=0x41, .sp=0x66, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x94}, {.addr=0x7444, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7444, .value=0x0d, .type=IO_READ},
        {.addr=0x7445, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0075) {
    const struct CPU_State initial_cpu = {.pc=0xd0a7, .a=0x49, .x=0x58, .y=0xdd, .sp=0x8f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0xd0a7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd0a8, .a=0x49, .x=0x58, .y=0xdd, .sp=0x8e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x61}, {.addr=0xd0a7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd0a7, .value=0x0d, .type=IO_READ},
        {.addr=0xd0a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x61, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0076) {
    const struct CPU_State initial_cpu = {.pc=0xe5a6, .a=0xb2, .x=0x55, .y=0xf0, .sp=0x61, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0xe5a6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe5a7, .a=0xb2, .x=0x55, .y=0xf0, .sp=0x60, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x8a}, {.addr=0xe5a6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe5a6, .value=0x0d, .type=IO_READ},
        {.addr=0xe5a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x8a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0077) {
    const struct CPU_State initial_cpu = {.pc=0xffec, .a=0xab, .x=0x09, .y=0x05, .sp=0x8f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0xffec, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xffed, .a=0xab, .x=0x09, .y=0x05, .sp=0x8e, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x03}, {.addr=0xffec, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xffec, .value=0x0d, .type=IO_READ},
        {.addr=0xffed, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0078) {
    const struct CPU_State initial_cpu = {.pc=0x9fb6, .a=0x76, .x=0x57, .y=0xef, .sp=0xc4, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x9fb6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9fb7, .a=0x76, .x=0x57, .y=0xef, .sp=0xc3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xcc}, {.addr=0x9fb6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9fb6, .value=0x0d, .type=IO_READ},
        {.addr=0x9fb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0079) {
    const struct CPU_State initial_cpu = {.pc=0x2218, .a=0x5d, .x=0x4f, .y=0x86, .sp=0xc8, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0x2218, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2219, .a=0x5d, .x=0x4f, .y=0x86, .sp=0xc7, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xbf}, {.addr=0x2218, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2218, .value=0x0d, .type=IO_READ},
        {.addr=0x2219, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_007A) {
    const struct CPU_State initial_cpu = {.pc=0xc7ee, .a=0x1a, .x=0x96, .y=0x20, .sp=0x67, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xc7ee, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc7ef, .a=0x1a, .x=0x96, .y=0x20, .sp=0x66, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x63}, {.addr=0xc7ee, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc7ee, .value=0x0d, .type=IO_READ},
        {.addr=0xc7ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_007B) {
    const struct CPU_State initial_cpu = {.pc=0x22b4, .a=0x33, .x=0x3c, .y=0x8d, .sp=0x10, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x22b4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x22b5, .a=0x33, .x=0x3c, .y=0x8d, .sp=0x0f, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x06}, {.addr=0x22b4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x22b4, .value=0x0d, .type=IO_READ},
        {.addr=0x22b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_007C) {
    const struct CPU_State initial_cpu = {.pc=0x5963, .a=0x94, .x=0xfb, .y=0x20, .sp=0xc1, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x5963, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5964, .a=0x94, .x=0xfb, .y=0x20, .sp=0xc0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x40}, {.addr=0x5963, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5963, .value=0x0d, .type=IO_READ},
        {.addr=0x5964, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_007D) {
    const struct CPU_State initial_cpu = {.pc=0xe994, .a=0x51, .x=0x09, .y=0x31, .sp=0x47, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0xe994, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe995, .a=0x51, .x=0x09, .y=0x31, .sp=0x46, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x2e}, {.addr=0xe994, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe994, .value=0x0d, .type=IO_READ},
        {.addr=0xe995, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_007E) {
    const struct CPU_State initial_cpu = {.pc=0x03e3, .a=0x36, .x=0x6b, .y=0x5c, .sp=0x12, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0x03e3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x03e4, .a=0x36, .x=0x6b, .y=0x5c, .sp=0x11, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xd2}, {.addr=0x03e3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x03e3, .value=0x0d, .type=IO_READ},
        {.addr=0x03e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_007F) {
    const struct CPU_State initial_cpu = {.pc=0x5cd2, .a=0x1e, .x=0xb2, .y=0x65, .sp=0xb1, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x5cd2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5cd3, .a=0x1e, .x=0xb2, .y=0x65, .sp=0xb0, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x7f}, {.addr=0x5cd2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5cd2, .value=0x0d, .type=IO_READ},
        {.addr=0x5cd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0080) {
    const struct CPU_State initial_cpu = {.pc=0x4655, .a=0xb3, .x=0x8a, .y=0xb6, .sp=0xa6, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0x4655, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4656, .a=0xb3, .x=0x8a, .y=0xb6, .sp=0xa5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x94}, {.addr=0x4655, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4655, .value=0x0d, .type=IO_READ},
        {.addr=0x4656, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0081) {
    const struct CPU_State initial_cpu = {.pc=0x85d1, .a=0x25, .x=0xaf, .y=0x20, .sp=0xb3, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x85d1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x85d2, .a=0x25, .x=0xaf, .y=0x20, .sp=0xb2, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xfb}, {.addr=0x85d1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x85d1, .value=0x0d, .type=IO_READ},
        {.addr=0x85d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0082) {
    const struct CPU_State initial_cpu = {.pc=0x2996, .a=0x0c, .x=0xf7, .y=0x69, .sp=0xb0, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x2996, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2997, .a=0x0c, .x=0xf7, .y=0x69, .sp=0xaf, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x11}, {.addr=0x2996, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2996, .value=0x0d, .type=IO_READ},
        {.addr=0x2997, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0083) {
    const struct CPU_State initial_cpu = {.pc=0x5b4e, .a=0x5e, .x=0x29, .y=0x7a, .sp=0x34, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x5b4e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5b4f, .a=0x5e, .x=0x29, .y=0x7a, .sp=0x33, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x58}, {.addr=0x5b4e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5b4e, .value=0x0d, .type=IO_READ},
        {.addr=0x5b4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0084) {
    const struct CPU_State initial_cpu = {.pc=0xd83d, .a=0x5e, .x=0x69, .y=0xf3, .sp=0xd8, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0xd83d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd83e, .a=0x5e, .x=0x69, .y=0xf3, .sp=0xd7, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x7e}, {.addr=0xd83d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd83d, .value=0x0d, .type=IO_READ},
        {.addr=0xd83e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0085) {
    const struct CPU_State initial_cpu = {.pc=0xbced, .a=0xd6, .x=0xe8, .y=0xa9, .sp=0xe2, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0xbced, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbcee, .a=0xd6, .x=0xe8, .y=0xa9, .sp=0xe1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x48}, {.addr=0xbced, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbced, .value=0x0d, .type=IO_READ},
        {.addr=0xbcee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0086) {
    const struct CPU_State initial_cpu = {.pc=0x044f, .a=0x4f, .x=0xde, .y=0x27, .sp=0x29, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0x044f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0450, .a=0x4f, .x=0xde, .y=0x27, .sp=0x28, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x09}, {.addr=0x044f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x044f, .value=0x0d, .type=IO_READ},
        {.addr=0x0450, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0087) {
    const struct CPU_State initial_cpu = {.pc=0x2c1a, .a=0x14, .x=0xd6, .y=0xa3, .sp=0x04, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x2c1a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2c1b, .a=0x14, .x=0xd6, .y=0xa3, .sp=0x03, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x10}, {.addr=0x2c1a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2c1a, .value=0x0d, .type=IO_READ},
        {.addr=0x2c1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0088) {
    const struct CPU_State initial_cpu = {.pc=0x31ba, .a=0x51, .x=0x22, .y=0x90, .sp=0x33, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x31ba, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x31bb, .a=0x51, .x=0x22, .y=0x90, .sp=0x32, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x2a}, {.addr=0x31ba, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x31ba, .value=0x0d, .type=IO_READ},
        {.addr=0x31bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0089) {
    const struct CPU_State initial_cpu = {.pc=0xa82f, .a=0xb4, .x=0x8c, .y=0xba, .sp=0xc9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0xa82f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa830, .a=0xb4, .x=0x8c, .y=0xba, .sp=0xc8, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x0d}, {.addr=0xa82f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa82f, .value=0x0d, .type=IO_READ},
        {.addr=0xa830, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_008A) {
    const struct CPU_State initial_cpu = {.pc=0xc625, .a=0x16, .x=0xd2, .y=0x06, .sp=0x7f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0xc625, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc626, .a=0x16, .x=0xd2, .y=0x06, .sp=0x7e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x48}, {.addr=0xc625, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc625, .value=0x0d, .type=IO_READ},
        {.addr=0xc626, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_008B) {
    const struct CPU_State initial_cpu = {.pc=0xe7e0, .a=0x9d, .x=0x42, .y=0xa9, .sp=0xb2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0xe7e0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe7e1, .a=0x9d, .x=0x42, .y=0xa9, .sp=0xb1, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xee}, {.addr=0xe7e0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe7e0, .value=0x0d, .type=IO_READ},
        {.addr=0xe7e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_008C) {
    const struct CPU_State initial_cpu = {.pc=0x93d1, .a=0x3c, .x=0xb1, .y=0xc6, .sp=0x56, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0x93d1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x93d2, .a=0x3c, .x=0xb1, .y=0xc6, .sp=0x55, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xb2}, {.addr=0x93d1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x93d1, .value=0x0d, .type=IO_READ},
        {.addr=0x93d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_008D) {
    const struct CPU_State initial_cpu = {.pc=0xdbb9, .a=0x54, .x=0x2a, .y=0x01, .sp=0xfe, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0xdbb9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdbba, .a=0x54, .x=0x2a, .y=0x01, .sp=0xfd, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x92}, {.addr=0xdbb9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdbb9, .value=0x0d, .type=IO_READ},
        {.addr=0xdbba, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_008E) {
    const struct CPU_State initial_cpu = {.pc=0x8b2d, .a=0x65, .x=0x02, .y=0x91, .sp=0xe8, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0x8b2d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8b2e, .a=0x65, .x=0x02, .y=0x91, .sp=0xe7, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x9e}, {.addr=0x8b2d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8b2d, .value=0x0d, .type=IO_READ},
        {.addr=0x8b2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_008F) {
    const struct CPU_State initial_cpu = {.pc=0x434c, .a=0x3b, .x=0x53, .y=0xbd, .sp=0xc6, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0x434c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x434d, .a=0x3b, .x=0x53, .y=0xbd, .sp=0xc5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x1d}, {.addr=0x434c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x434c, .value=0x0d, .type=IO_READ},
        {.addr=0x434d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0090) {
    const struct CPU_State initial_cpu = {.pc=0x8a92, .a=0x44, .x=0xb5, .y=0x5e, .sp=0xae, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0x8a92, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8a93, .a=0x44, .x=0xb5, .y=0x5e, .sp=0xad, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xbe}, {.addr=0x8a92, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8a92, .value=0x0d, .type=IO_READ},
        {.addr=0x8a93, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0091) {
    const struct CPU_State initial_cpu = {.pc=0xf6e4, .a=0xd3, .x=0xd9, .y=0x33, .sp=0x6e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0xf6e4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf6e5, .a=0xd3, .x=0xd9, .y=0x33, .sp=0x6d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x38}, {.addr=0xf6e4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf6e4, .value=0x0d, .type=IO_READ},
        {.addr=0xf6e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x38, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0092) {
    const struct CPU_State initial_cpu = {.pc=0x1a82, .a=0xde, .x=0xed, .y=0xa5, .sp=0x37, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0x1a82, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1a83, .a=0xde, .x=0xed, .y=0xa5, .sp=0x36, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xdf}, {.addr=0x1a82, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1a82, .value=0x0d, .type=IO_READ},
        {.addr=0x1a83, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0093) {
    const struct CPU_State initial_cpu = {.pc=0x772b, .a=0xcf, .x=0x73, .y=0x47, .sp=0x2d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0x772b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x772c, .a=0xcf, .x=0x73, .y=0x47, .sp=0x2c, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xa3}, {.addr=0x772b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x772b, .value=0x0d, .type=IO_READ},
        {.addr=0x772c, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0094) {
    const struct CPU_State initial_cpu = {.pc=0xf56c, .a=0x31, .x=0x94, .y=0x02, .sp=0xd4, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0xf56c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf56d, .a=0x31, .x=0x94, .y=0x02, .sp=0xd3, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x93}, {.addr=0xf56c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf56c, .value=0x0d, .type=IO_READ},
        {.addr=0xf56d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0095) {
    const struct CPU_State initial_cpu = {.pc=0x4b64, .a=0xf2, .x=0x41, .y=0x12, .sp=0x6b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0x4b64, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4b65, .a=0xf2, .x=0x41, .y=0x12, .sp=0x6a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x21}, {.addr=0x4b64, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4b64, .value=0x0d, .type=IO_READ},
        {.addr=0x4b65, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0096) {
    const struct CPU_State initial_cpu = {.pc=0x014d, .a=0xd9, .x=0x96, .y=0x83, .sp=0x9c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x0d}, {.addr=0x019c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x014e, .a=0xd9, .x=0x96, .y=0x83, .sp=0x9b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x0d}, {.addr=0x019c, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x014d, .value=0x0d, .type=IO_READ},
        {.addr=0x014e, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0097) {
    const struct CPU_State initial_cpu = {.pc=0xa27e, .a=0x28, .x=0xf4, .y=0x1e, .sp=0xd0, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0xa27e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa27f, .a=0x28, .x=0xf4, .y=0x1e, .sp=0xcf, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xac}, {.addr=0xa27e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa27e, .value=0x0d, .type=IO_READ},
        {.addr=0xa27f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0098) {
    const struct CPU_State initial_cpu = {.pc=0x61dd, .a=0x6b, .x=0x5f, .y=0xca, .sp=0x21, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x61dd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x61de, .a=0x6b, .x=0x5f, .y=0xca, .sp=0x20, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x67}, {.addr=0x61dd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x61dd, .value=0x0d, .type=IO_READ},
        {.addr=0x61de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0099) {
    const struct CPU_State initial_cpu = {.pc=0xff10, .a=0xb4, .x=0xf7, .y=0xa6, .sp=0x7b, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0xff10, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xff11, .a=0xb4, .x=0xf7, .y=0xa6, .sp=0x7a, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xc6}, {.addr=0xff10, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xff10, .value=0x0d, .type=IO_READ},
        {.addr=0xff11, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_009A) {
    const struct CPU_State initial_cpu = {.pc=0x1ea5, .a=0x2c, .x=0x27, .y=0x5a, .sp=0x1d, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0x1ea5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1ea6, .a=0x2c, .x=0x27, .y=0x5a, .sp=0x1c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x60}, {.addr=0x1ea5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1ea5, .value=0x0d, .type=IO_READ},
        {.addr=0x1ea6, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_009B) {
    const struct CPU_State initial_cpu = {.pc=0x5085, .a=0x0a, .x=0xae, .y=0x6d, .sp=0xf0, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0x5085, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5086, .a=0x0a, .x=0xae, .y=0x6d, .sp=0xef, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xcd}, {.addr=0x5085, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5085, .value=0x0d, .type=IO_READ},
        {.addr=0x5086, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_009C) {
    const struct CPU_State initial_cpu = {.pc=0xd035, .a=0x04, .x=0xaa, .y=0x32, .sp=0xfd, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0xd035, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd036, .a=0x04, .x=0xaa, .y=0x32, .sp=0xfc, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x99}, {.addr=0xd035, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd035, .value=0x0d, .type=IO_READ},
        {.addr=0xd036, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_009D) {
    const struct CPU_State initial_cpu = {.pc=0xcacb, .a=0x7c, .x=0x8d, .y=0xbb, .sp=0xd7, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0xcacb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcacc, .a=0x7c, .x=0x8d, .y=0xbb, .sp=0xd6, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x58}, {.addr=0xcacb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcacb, .value=0x0d, .type=IO_READ},
        {.addr=0xcacc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_009E) {
    const struct CPU_State initial_cpu = {.pc=0x6ece, .a=0x10, .x=0xb8, .y=0x94, .sp=0x2a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0x6ece, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6ecf, .a=0x10, .x=0xb8, .y=0x94, .sp=0x29, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x79}, {.addr=0x6ece, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6ece, .value=0x0d, .type=IO_READ},
        {.addr=0x6ecf, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_009F) {
    const struct CPU_State initial_cpu = {.pc=0x6f8d, .a=0x99, .x=0xed, .y=0xc8, .sp=0x71, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0x6f8d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6f8e, .a=0x99, .x=0xed, .y=0xc8, .sp=0x70, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xa5}, {.addr=0x6f8d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6f8d, .value=0x0d, .type=IO_READ},
        {.addr=0x6f8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xa5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xaae5, .a=0x17, .x=0x70, .y=0x6c, .sp=0x5f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0xaae5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xaae6, .a=0x17, .x=0x70, .y=0x6c, .sp=0x5e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x1c}, {.addr=0xaae5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xaae5, .value=0x0d, .type=IO_READ},
        {.addr=0xaae6, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x7b50, .a=0x34, .x=0x3b, .y=0x7a, .sp=0x98, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x7b50, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7b51, .a=0x34, .x=0x3b, .y=0x7a, .sp=0x97, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x9f}, {.addr=0x7b50, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7b50, .value=0x0d, .type=IO_READ},
        {.addr=0x7b51, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x9f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x691c, .a=0x15, .x=0xa4, .y=0x43, .sp=0x00, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0x691c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x691d, .a=0x15, .x=0xa4, .y=0x43, .sp=0xff, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xf3}, {.addr=0x691c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x691c, .value=0x0d, .type=IO_READ},
        {.addr=0x691d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xf4cc, .a=0x4f, .x=0x8f, .y=0xd1, .sp=0x92, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0xf4cc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf4cd, .a=0x4f, .x=0x8f, .y=0xd1, .sp=0x91, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x21}, {.addr=0xf4cc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf4cc, .value=0x0d, .type=IO_READ},
        {.addr=0xf4cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xf207, .a=0x12, .x=0x65, .y=0x1a, .sp=0x63, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0xf207, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf208, .a=0x12, .x=0x65, .y=0x1a, .sp=0x62, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xc6}, {.addr=0xf207, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf207, .value=0x0d, .type=IO_READ},
        {.addr=0xf208, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x51b8, .a=0x4a, .x=0xf6, .y=0x62, .sp=0x41, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x51b8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x51b9, .a=0x4a, .x=0xf6, .y=0x62, .sp=0x40, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x77}, {.addr=0x51b8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x51b8, .value=0x0d, .type=IO_READ},
        {.addr=0x51b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x6c88, .a=0xdc, .x=0x50, .y=0xea, .sp=0xb3, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x6c88, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6c89, .a=0xdc, .x=0x50, .y=0xea, .sp=0xb2, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x07}, {.addr=0x6c88, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6c88, .value=0x0d, .type=IO_READ},
        {.addr=0x6c89, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x6f9e, .a=0xc1, .x=0x07, .y=0xcc, .sp=0xf0, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0x6f9e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6f9f, .a=0xc1, .x=0x07, .y=0xcc, .sp=0xef, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xe1}, {.addr=0x6f9e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6f9e, .value=0x0d, .type=IO_READ},
        {.addr=0x6f9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x72f4, .a=0x47, .x=0x69, .y=0x38, .sp=0x57, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x72f4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x72f5, .a=0x47, .x=0x69, .y=0x38, .sp=0x56, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x77}, {.addr=0x72f4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x72f4, .value=0x0d, .type=IO_READ},
        {.addr=0x72f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x762f, .a=0x43, .x=0x8b, .y=0x7f, .sp=0xd1, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x762f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7630, .a=0x43, .x=0x8b, .y=0x7f, .sp=0xd0, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xb6}, {.addr=0x762f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x762f, .value=0x0d, .type=IO_READ},
        {.addr=0x7630, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xb6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x3407, .a=0xf7, .x=0x1b, .y=0xdc, .sp=0x0a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x3407, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3408, .a=0xf7, .x=0x1b, .y=0xdc, .sp=0x09, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x63}, {.addr=0x3407, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3407, .value=0x0d, .type=IO_READ},
        {.addr=0x3408, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xa9cd, .a=0xe3, .x=0x9a, .y=0x26, .sp=0x30, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0xa9cd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa9ce, .a=0xe3, .x=0x9a, .y=0x26, .sp=0x2f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x84}, {.addr=0xa9cd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa9cd, .value=0x0d, .type=IO_READ},
        {.addr=0xa9ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x69e7, .a=0xb0, .x=0x22, .y=0x2c, .sp=0xa0, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x69e7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x69e8, .a=0xb0, .x=0x22, .y=0x2c, .sp=0x9f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x6c}, {.addr=0x69e7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x69e7, .value=0x0d, .type=IO_READ},
        {.addr=0x69e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xc7de, .a=0x6f, .x=0x62, .y=0x16, .sp=0x0a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0xc7de, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc7df, .a=0x6f, .x=0x62, .y=0x16, .sp=0x09, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xb1}, {.addr=0xc7de, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc7de, .value=0x0d, .type=IO_READ},
        {.addr=0xc7df, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x7685, .a=0x91, .x=0x32, .y=0xe0, .sp=0x24, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0x7685, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7686, .a=0x91, .x=0x32, .y=0xe0, .sp=0x23, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xce}, {.addr=0x7685, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7685, .value=0x0d, .type=IO_READ},
        {.addr=0x7686, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x171d, .a=0x7b, .x=0xf3, .y=0x86, .sp=0xf9, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0x171d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x171e, .a=0x7b, .x=0xf3, .y=0x86, .sp=0xf8, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x93}, {.addr=0x171d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x171d, .value=0x0d, .type=IO_READ},
        {.addr=0x171e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x8048, .a=0xcc, .x=0x2e, .y=0xbb, .sp=0xf8, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x8048, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8049, .a=0xcc, .x=0x2e, .y=0xbb, .sp=0xf7, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x13}, {.addr=0x8048, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8048, .value=0x0d, .type=IO_READ},
        {.addr=0x8049, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xcfc7, .a=0xfb, .x=0x1b, .y=0x89, .sp=0x04, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xcfc7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcfc8, .a=0xfb, .x=0x1b, .y=0x89, .sp=0x03, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x63}, {.addr=0xcfc7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcfc7, .value=0x0d, .type=IO_READ},
        {.addr=0xcfc8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x1a27, .a=0xdb, .x=0x35, .y=0xcd, .sp=0x6f, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x1a27, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1a28, .a=0xdb, .x=0x35, .y=0xcd, .sp=0x6e, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x4f}, {.addr=0x1a27, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1a27, .value=0x0d, .type=IO_READ},
        {.addr=0x1a28, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x35b3, .a=0x73, .x=0xab, .y=0x56, .sp=0x8a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x35b3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x35b4, .a=0x73, .x=0xab, .y=0x56, .sp=0x89, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x74}, {.addr=0x35b3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x35b3, .value=0x0d, .type=IO_READ},
        {.addr=0x35b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xb6ee, .a=0x65, .x=0x79, .y=0xe5, .sp=0xb0, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0xb6ee, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb6ef, .a=0x65, .x=0x79, .y=0xe5, .sp=0xaf, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x82}, {.addr=0xb6ee, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb6ee, .value=0x0d, .type=IO_READ},
        {.addr=0xb6ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x82, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xee92, .a=0xd6, .x=0x42, .y=0x85, .sp=0x7d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xee92, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xee93, .a=0xd6, .x=0x42, .y=0x85, .sp=0x7c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xd1}, {.addr=0xee92, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xee92, .value=0x0d, .type=IO_READ},
        {.addr=0xee93, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xdac9, .a=0x13, .x=0xd0, .y=0x93, .sp=0xef, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0xdac9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdaca, .a=0x13, .x=0xd0, .y=0x93, .sp=0xee, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xbe}, {.addr=0xdac9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdac9, .value=0x0d, .type=IO_READ},
        {.addr=0xdaca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x9c81, .a=0xd7, .x=0xfd, .y=0x21, .sp=0x32, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0x9c81, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9c82, .a=0xd7, .x=0xfd, .y=0x21, .sp=0x31, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x74}, {.addr=0x9c81, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9c81, .value=0x0d, .type=IO_READ},
        {.addr=0x9c82, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xc60d, .a=0xca, .x=0x71, .y=0x7c, .sp=0x60, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0xc60d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc60e, .a=0xca, .x=0x71, .y=0x7c, .sp=0x5f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xb1}, {.addr=0xc60d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc60d, .value=0x0d, .type=IO_READ},
        {.addr=0xc60e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xf6d0, .a=0x71, .x=0x93, .y=0x92, .sp=0x1f, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0xf6d0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf6d1, .a=0x71, .x=0x93, .y=0x92, .sp=0x1e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x49}, {.addr=0xf6d0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf6d0, .value=0x0d, .type=IO_READ},
        {.addr=0xf6d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x95df, .a=0x94, .x=0xe3, .y=0x36, .sp=0x6f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x95df, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x95e0, .a=0x94, .x=0xe3, .y=0x36, .sp=0x6e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x04}, {.addr=0x95df, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x95df, .value=0x0d, .type=IO_READ},
        {.addr=0x95e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x77a9, .a=0x68, .x=0x59, .y=0xe1, .sp=0xa4, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0x77a9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x77aa, .a=0x68, .x=0x59, .y=0xe1, .sp=0xa3, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x83}, {.addr=0x77a9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x77a9, .value=0x0d, .type=IO_READ},
        {.addr=0x77aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x16f8, .a=0x73, .x=0x1f, .y=0xf3, .sp=0xb2, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x16f8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x16f9, .a=0x73, .x=0x1f, .y=0xf3, .sp=0xb1, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x47}, {.addr=0x16f8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x16f8, .value=0x0d, .type=IO_READ},
        {.addr=0x16f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x47, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xd0ff, .a=0xcd, .x=0xb2, .y=0xfe, .sp=0xd4, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0xd0ff, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd100, .a=0xcd, .x=0xb2, .y=0xfe, .sp=0xd3, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xd5}, {.addr=0xd0ff, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd0ff, .value=0x0d, .type=IO_READ},
        {.addr=0xd100, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x0ee1, .a=0x3d, .x=0xa9, .y=0x8b, .sp=0x45, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x0ee1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0ee2, .a=0x3d, .x=0xa9, .y=0x8b, .sp=0x44, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xd4}, {.addr=0x0ee1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0ee1, .value=0x0d, .type=IO_READ},
        {.addr=0x0ee2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xd4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x9cfa, .a=0x41, .x=0x46, .y=0x7c, .sp=0xb7, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x9cfa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9cfb, .a=0x41, .x=0x46, .y=0x7c, .sp=0xb6, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x83}, {.addr=0x9cfa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9cfa, .value=0x0d, .type=IO_READ},
        {.addr=0x9cfb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x4d4e, .a=0x60, .x=0x0c, .y=0xe1, .sp=0xb2, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x4d4e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4d4f, .a=0x60, .x=0x0c, .y=0xe1, .sp=0xb1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x69}, {.addr=0x4d4e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4d4e, .value=0x0d, .type=IO_READ},
        {.addr=0x4d4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x9d36, .a=0xa3, .x=0x7a, .y=0xfc, .sp=0x13, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x9d36, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9d37, .a=0xa3, .x=0x7a, .y=0xfc, .sp=0x12, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x6e}, {.addr=0x9d36, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9d36, .value=0x0d, .type=IO_READ},
        {.addr=0x9d37, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x269a, .a=0x15, .x=0xe1, .y=0x31, .sp=0x19, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0x269a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x269b, .a=0x15, .x=0xe1, .y=0x31, .sp=0x18, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xb8}, {.addr=0x269a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x269a, .value=0x0d, .type=IO_READ},
        {.addr=0x269b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x7ed0, .a=0x7c, .x=0x9a, .y=0x33, .sp=0xd9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0x7ed0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7ed1, .a=0x7c, .x=0x9a, .y=0x33, .sp=0xd8, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x5b}, {.addr=0x7ed0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7ed0, .value=0x0d, .type=IO_READ},
        {.addr=0x7ed1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x3a13, .a=0xd2, .x=0xc6, .y=0x8b, .sp=0x43, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x3a13, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3a14, .a=0xd2, .x=0xc6, .y=0x8b, .sp=0x42, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x38}, {.addr=0x3a13, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3a13, .value=0x0d, .type=IO_READ},
        {.addr=0x3a14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x38, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xf56f, .a=0x7a, .x=0x27, .y=0x05, .sp=0x7d, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xf56f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf570, .a=0x7a, .x=0x27, .y=0x05, .sp=0x7c, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x32}, {.addr=0xf56f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf56f, .value=0x0d, .type=IO_READ},
        {.addr=0xf570, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x6161, .a=0x72, .x=0x66, .y=0xd9, .sp=0x59, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x6161, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6162, .a=0x72, .x=0x66, .y=0xd9, .sp=0x58, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xef}, {.addr=0x6161, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6161, .value=0x0d, .type=IO_READ},
        {.addr=0x6162, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x79b3, .a=0xe7, .x=0x49, .y=0x20, .sp=0x44, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x79b3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x79b4, .a=0xe7, .x=0x49, .y=0x20, .sp=0x43, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x67}, {.addr=0x79b3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x79b3, .value=0x0d, .type=IO_READ},
        {.addr=0x79b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xe4d1, .a=0x5f, .x=0xd9, .y=0xcb, .sp=0xb8, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xe4d1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe4d2, .a=0x5f, .x=0xd9, .y=0xcb, .sp=0xb7, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xdb}, {.addr=0xe4d1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe4d1, .value=0x0d, .type=IO_READ},
        {.addr=0xe4d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xa806, .a=0x22, .x=0x1a, .y=0x11, .sp=0xd9, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xa806, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa807, .a=0x22, .x=0x1a, .y=0x11, .sp=0xd8, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xaf}, {.addr=0xa806, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa806, .value=0x0d, .type=IO_READ},
        {.addr=0xa807, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x0a91, .a=0xd1, .x=0xb5, .y=0x06, .sp=0xe2, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x0a91, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0a92, .a=0xd1, .x=0xb5, .y=0x06, .sp=0xe1, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xaa}, {.addr=0x0a91, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0a91, .value=0x0d, .type=IO_READ},
        {.addr=0x0a92, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x23aa, .a=0x4b, .x=0xd2, .y=0xf8, .sp=0x23, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x23aa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x23ab, .a=0x4b, .x=0xd2, .y=0xf8, .sp=0x22, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x54}, {.addr=0x23aa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x23aa, .value=0x0d, .type=IO_READ},
        {.addr=0x23ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x2aa6, .a=0xb5, .x=0x5a, .y=0x32, .sp=0x29, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0x2aa6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2aa7, .a=0xb5, .x=0x5a, .y=0x32, .sp=0x28, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xb7}, {.addr=0x2aa6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2aa6, .value=0x0d, .type=IO_READ},
        {.addr=0x2aa7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x4f88, .a=0x02, .x=0x59, .y=0x47, .sp=0xb9, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x4f88, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4f89, .a=0x02, .x=0x59, .y=0x47, .sp=0xb8, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x73}, {.addr=0x4f88, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4f88, .value=0x0d, .type=IO_READ},
        {.addr=0x4f89, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x39e4, .a=0xf9, .x=0xa5, .y=0x86, .sp=0x82, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x39e4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x39e5, .a=0xf9, .x=0xa5, .y=0x86, .sp=0x81, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x67}, {.addr=0x39e4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x39e4, .value=0x0d, .type=IO_READ},
        {.addr=0x39e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xe1a1, .a=0x70, .x=0x62, .y=0x38, .sp=0xe6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0xe1a1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe1a2, .a=0x70, .x=0x62, .y=0x38, .sp=0xe5, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x7a}, {.addr=0xe1a1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe1a1, .value=0x0d, .type=IO_READ},
        {.addr=0xe1a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x6a9b, .a=0xf2, .x=0x98, .y=0x1c, .sp=0x6d, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0x6a9b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6a9c, .a=0xf2, .x=0x98, .y=0x1c, .sp=0x6c, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x4a}, {.addr=0x6a9b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6a9b, .value=0x0d, .type=IO_READ},
        {.addr=0x6a9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x39c6, .a=0x58, .x=0x60, .y=0x51, .sp=0xc7, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x39c6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x39c7, .a=0x58, .x=0x60, .y=0x51, .sp=0xc6, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xd5}, {.addr=0x39c6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x39c6, .value=0x0d, .type=IO_READ},
        {.addr=0x39c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xc58e, .a=0xa9, .x=0x43, .y=0x45, .sp=0x8b, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0xc58e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc58f, .a=0xa9, .x=0x43, .y=0x45, .sp=0x8a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x91}, {.addr=0xc58e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc58e, .value=0x0d, .type=IO_READ},
        {.addr=0xc58f, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xdd40, .a=0xf1, .x=0xce, .y=0x64, .sp=0x1c, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0xdd40, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdd41, .a=0xf1, .x=0xce, .y=0x64, .sp=0x1b, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x63}, {.addr=0xdd40, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdd40, .value=0x0d, .type=IO_READ},
        {.addr=0xdd41, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x5cd1, .a=0xee, .x=0xdc, .y=0x53, .sp=0xf3, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0x5cd1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5cd2, .a=0xee, .x=0xdc, .y=0x53, .sp=0xf2, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xa0}, {.addr=0x5cd1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5cd1, .value=0x0d, .type=IO_READ},
        {.addr=0x5cd2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xaa03, .a=0x20, .x=0x2a, .y=0xdf, .sp=0x4c, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0xaa03, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xaa04, .a=0x20, .x=0x2a, .y=0xdf, .sp=0x4b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x8c}, {.addr=0xaa03, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xaa03, .value=0x0d, .type=IO_READ},
        {.addr=0xaa04, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x8c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xea9b, .a=0xea, .x=0xfe, .y=0x0a, .sp=0x88, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0xea9b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xea9c, .a=0xea, .x=0xfe, .y=0x0a, .sp=0x87, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x80}, {.addr=0xea9b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xea9b, .value=0x0d, .type=IO_READ},
        {.addr=0xea9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x80, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xc003, .a=0xc3, .x=0x12, .y=0x56, .sp=0x7a, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xc003, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc004, .a=0xc3, .x=0x12, .y=0x56, .sp=0x79, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x87}, {.addr=0xc003, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc003, .value=0x0d, .type=IO_READ},
        {.addr=0xc004, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x92dc, .a=0x7f, .x=0xfb, .y=0xb4, .sp=0x92, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0x92dc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x92dd, .a=0x7f, .x=0xfb, .y=0xb4, .sp=0x91, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xfb}, {.addr=0x92dc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x92dc, .value=0x0d, .type=IO_READ},
        {.addr=0x92dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x4a65, .a=0x2d, .x=0x7f, .y=0x8a, .sp=0xa1, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x4a65, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4a66, .a=0x2d, .x=0x7f, .y=0x8a, .sp=0xa0, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xa7}, {.addr=0x4a65, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4a65, .value=0x0d, .type=IO_READ},
        {.addr=0x4a66, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x2f35, .a=0x05, .x=0x96, .y=0x88, .sp=0x24, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0x2f35, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2f36, .a=0x05, .x=0x96, .y=0x88, .sp=0x23, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xc1}, {.addr=0x2f35, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2f35, .value=0x0d, .type=IO_READ},
        {.addr=0x2f36, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xbf9b, .a=0xd2, .x=0x6b, .y=0xeb, .sp=0xc9, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0xbf9b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbf9c, .a=0xd2, .x=0x6b, .y=0xeb, .sp=0xc8, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x0f}, {.addr=0xbf9b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbf9b, .value=0x0d, .type=IO_READ},
        {.addr=0xbf9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xf237, .a=0x6b, .x=0xfd, .y=0x39, .sp=0x14, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0xf237, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf238, .a=0x6b, .x=0xfd, .y=0x39, .sp=0x13, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xc0}, {.addr=0xf237, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf237, .value=0x0d, .type=IO_READ},
        {.addr=0xf238, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x3199, .a=0x0d, .x=0x0c, .y=0xd2, .sp=0x3e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x3199, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x319a, .a=0x0d, .x=0x0c, .y=0xd2, .sp=0x3d, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x33}, {.addr=0x3199, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3199, .value=0x0d, .type=IO_READ},
        {.addr=0x319a, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x5983, .a=0x63, .x=0x7f, .y=0xb8, .sp=0xb0, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x5983, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5984, .a=0x63, .x=0x7f, .y=0xb8, .sp=0xaf, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x33}, {.addr=0x5983, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5983, .value=0x0d, .type=IO_READ},
        {.addr=0x5984, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xb6a6, .a=0xf9, .x=0x2e, .y=0xb2, .sp=0xd9, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xb6a6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb6a7, .a=0xf9, .x=0x2e, .y=0xb2, .sp=0xd8, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xe1}, {.addr=0xb6a6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb6a6, .value=0x0d, .type=IO_READ},
        {.addr=0xb6a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x059e, .a=0x8e, .x=0x28, .y=0x5b, .sp=0xa8, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x059e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x059f, .a=0x8e, .x=0x28, .y=0x5b, .sp=0xa7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x9d}, {.addr=0x059e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x059e, .value=0x0d, .type=IO_READ},
        {.addr=0x059f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xbc6a, .a=0xe4, .x=0x59, .y=0x20, .sp=0xd4, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0xbc6a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbc6b, .a=0xe4, .x=0x59, .y=0x20, .sp=0xd3, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x8f}, {.addr=0xbc6a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbc6a, .value=0x0d, .type=IO_READ},
        {.addr=0xbc6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x1555, .a=0xae, .x=0x49, .y=0x1a, .sp=0x65, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0x1555, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1556, .a=0xae, .x=0x49, .y=0x1a, .sp=0x64, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x74}, {.addr=0x1555, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1555, .value=0x0d, .type=IO_READ},
        {.addr=0x1556, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xc627, .a=0xad, .x=0xe9, .y=0xb2, .sp=0xb0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0xc627, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc628, .a=0xad, .x=0xe9, .y=0xb2, .sp=0xaf, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x28}, {.addr=0xc627, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc627, .value=0x0d, .type=IO_READ},
        {.addr=0xc628, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xadf6, .a=0x27, .x=0x5b, .y=0xca, .sp=0x6a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0xadf6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xadf7, .a=0x27, .x=0x5b, .y=0xca, .sp=0x69, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x25}, {.addr=0xadf6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xadf6, .value=0x0d, .type=IO_READ},
        {.addr=0xadf7, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xded4, .a=0x85, .x=0xd8, .y=0x8e, .sp=0x91, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0xded4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xded5, .a=0x85, .x=0xd8, .y=0x8e, .sp=0x90, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xe0}, {.addr=0xded4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xded4, .value=0x0d, .type=IO_READ},
        {.addr=0xded5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x2aa1, .a=0x39, .x=0xd6, .y=0x5e, .sp=0x96, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x2aa1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2aa2, .a=0x39, .x=0xd6, .y=0x5e, .sp=0x95, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x7f}, {.addr=0x2aa1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2aa1, .value=0x0d, .type=IO_READ},
        {.addr=0x2aa2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x5d39, .a=0x17, .x=0x6b, .y=0x1a, .sp=0xe8, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0x5d39, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5d3a, .a=0x17, .x=0x6b, .y=0x1a, .sp=0xe7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x1d}, {.addr=0x5d39, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5d39, .value=0x0d, .type=IO_READ},
        {.addr=0x5d3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x9fa9, .a=0x9e, .x=0x2a, .y=0x43, .sp=0x08, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0x9fa9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9faa, .a=0x9e, .x=0x2a, .y=0x43, .sp=0x07, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x41}, {.addr=0x9fa9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9fa9, .value=0x0d, .type=IO_READ},
        {.addr=0x9faa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x687e, .a=0x13, .x=0xc3, .y=0x3d, .sp=0xe2, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x687e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x687f, .a=0x13, .x=0xc3, .y=0x3d, .sp=0xe1, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x0a}, {.addr=0x687e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x687e, .value=0x0d, .type=IO_READ},
        {.addr=0x687f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x4eca, .a=0x77, .x=0x65, .y=0xc7, .sp=0x99, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x4eca, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4ecb, .a=0x77, .x=0x65, .y=0xc7, .sp=0x98, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xe4}, {.addr=0x4eca, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4eca, .value=0x0d, .type=IO_READ},
        {.addr=0x4ecb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x63de, .a=0xa8, .x=0x65, .y=0x6e, .sp=0x44, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x63de, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x63df, .a=0xa8, .x=0x65, .y=0x6e, .sp=0x43, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x98}, {.addr=0x63de, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x63de, .value=0x0d, .type=IO_READ},
        {.addr=0x63df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x5272, .a=0xe6, .x=0x9b, .y=0xd7, .sp=0x2b, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x5272, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5273, .a=0xe6, .x=0x9b, .y=0xd7, .sp=0x2a, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xf3}, {.addr=0x5272, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5272, .value=0x0d, .type=IO_READ},
        {.addr=0x5273, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x40b4, .a=0x78, .x=0x0c, .y=0xd7, .sp=0x7a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x40b4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x40b5, .a=0x78, .x=0x0c, .y=0xd7, .sp=0x79, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x5d}, {.addr=0x40b4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x40b4, .value=0x0d, .type=IO_READ},
        {.addr=0x40b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x79a0, .a=0x38, .x=0x50, .y=0x8f, .sp=0xd9, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0x79a0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x79a1, .a=0x38, .x=0x50, .y=0x8f, .sp=0xd8, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xea}, {.addr=0x79a0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x79a0, .value=0x0d, .type=IO_READ},
        {.addr=0x79a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xabcd, .a=0xf7, .x=0x46, .y=0x2f, .sp=0x14, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0xabcd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xabce, .a=0xf7, .x=0x46, .y=0x2f, .sp=0x13, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x5c}, {.addr=0xabcd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xabcd, .value=0x0d, .type=IO_READ},
        {.addr=0xabce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x24f5, .a=0x0f, .x=0xb7, .y=0xc1, .sp=0x6a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0x24f5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x24f6, .a=0x0f, .x=0xb7, .y=0xc1, .sp=0x69, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x12}, {.addr=0x24f5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x24f5, .value=0x0d, .type=IO_READ},
        {.addr=0x24f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x510c, .a=0xb4, .x=0xab, .y=0x2c, .sp=0xa0, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x510c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x510d, .a=0xb4, .x=0xab, .y=0x2c, .sp=0x9f, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xdb}, {.addr=0x510c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x510c, .value=0x0d, .type=IO_READ},
        {.addr=0x510d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x6736, .a=0x75, .x=0x10, .y=0x5d, .sp=0xc4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x6736, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6737, .a=0x75, .x=0x10, .y=0x5d, .sp=0xc3, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x67}, {.addr=0x6736, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6736, .value=0x0d, .type=IO_READ},
        {.addr=0x6737, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x81c6, .a=0x47, .x=0xed, .y=0xe0, .sp=0x8d, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x81c6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x81c7, .a=0x47, .x=0xed, .y=0xe0, .sp=0x8c, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xb7}, {.addr=0x81c6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x81c6, .value=0x0d, .type=IO_READ},
        {.addr=0x81c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x6c3c, .a=0x1a, .x=0x36, .y=0x13, .sp=0x17, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0x6c3c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6c3d, .a=0x1a, .x=0x36, .y=0x13, .sp=0x16, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x18}, {.addr=0x6c3c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6c3c, .value=0x0d, .type=IO_READ},
        {.addr=0x6c3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xb4c2, .a=0x93, .x=0xcd, .y=0xa4, .sp=0x2c, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0xb4c2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb4c3, .a=0x93, .x=0xcd, .y=0xa4, .sp=0x2b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xf1}, {.addr=0xb4c2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb4c2, .value=0x0d, .type=IO_READ},
        {.addr=0xb4c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xf1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x787e, .a=0x48, .x=0x43, .y=0x5c, .sp=0x57, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x787e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x787f, .a=0x48, .x=0x43, .y=0x5c, .sp=0x56, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x34}, {.addr=0x787e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x787e, .value=0x0d, .type=IO_READ},
        {.addr=0x787f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xe431, .a=0x28, .x=0x12, .y=0x32, .sp=0x42, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0xe431, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe432, .a=0x28, .x=0x12, .y=0x32, .sp=0x41, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x51}, {.addr=0xe431, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe431, .value=0x0d, .type=IO_READ},
        {.addr=0xe432, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x51, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x89e2, .a=0x35, .x=0xb5, .y=0x08, .sp=0x7e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x00}, {.addr=0x89e2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x89e3, .a=0x35, .x=0xb5, .y=0x08, .sp=0x7d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x31}, {.addr=0x89e2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x89e2, .value=0x0d, .type=IO_READ},
        {.addr=0x89e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x311f, .a=0x8c, .x=0x58, .y=0xd9, .sp=0xb4, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x311f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3120, .a=0x8c, .x=0x58, .y=0xd9, .sp=0xb3, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x5f}, {.addr=0x311f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x311f, .value=0x0d, .type=IO_READ},
        {.addr=0x3120, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x8be3, .a=0xc6, .x=0x5f, .y=0xb5, .sp=0x10, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x8be3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8be4, .a=0xc6, .x=0x5f, .y=0xb5, .sp=0x0f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x19}, {.addr=0x8be3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8be3, .value=0x0d, .type=IO_READ},
        {.addr=0x8be4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xc4de, .a=0x26, .x=0x20, .y=0xf5, .sp=0x66, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0xc4de, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc4df, .a=0x26, .x=0x20, .y=0xf5, .sp=0x65, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xd6}, {.addr=0xc4de, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc4de, .value=0x0d, .type=IO_READ},
        {.addr=0xc4df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x8706, .a=0x70, .x=0x07, .y=0xc0, .sp=0x01, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0x8706, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8707, .a=0x70, .x=0x07, .y=0xc0, .sp=0x00, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x20}, {.addr=0x8706, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8706, .value=0x0d, .type=IO_READ},
        {.addr=0x8707, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xc171, .a=0x59, .x=0x24, .y=0xe4, .sp=0xf1, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0xc171, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc172, .a=0x59, .x=0x24, .y=0xe4, .sp=0xf0, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xcc}, {.addr=0xc171, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc171, .value=0x0d, .type=IO_READ},
        {.addr=0xc172, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x9237, .a=0x28, .x=0xc4, .y=0xbb, .sp=0x9b, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x9237, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9238, .a=0x28, .x=0xc4, .y=0xbb, .sp=0x9a, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xeb}, {.addr=0x9237, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9237, .value=0x0d, .type=IO_READ},
        {.addr=0x9238, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x1f65, .a=0x2d, .x=0xf9, .y=0xed, .sp=0x2e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x1f65, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1f66, .a=0x2d, .x=0xf9, .y=0xed, .sp=0x2d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xc9}, {.addr=0x1f65, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1f65, .value=0x0d, .type=IO_READ},
        {.addr=0x1f66, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0100) {
    const struct CPU_State initial_cpu = {.pc=0x5903, .a=0x0c, .x=0xac, .y=0x37, .sp=0x8d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x5903, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5904, .a=0x0c, .x=0xac, .y=0x37, .sp=0x8c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x75}, {.addr=0x5903, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5903, .value=0x0d, .type=IO_READ},
        {.addr=0x5904, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0101) {
    const struct CPU_State initial_cpu = {.pc=0xe9cf, .a=0x63, .x=0xdf, .y=0xbe, .sp=0xb0, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0xe9cf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe9d0, .a=0x63, .x=0xdf, .y=0xbe, .sp=0xaf, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xc9}, {.addr=0xe9cf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe9cf, .value=0x0d, .type=IO_READ},
        {.addr=0xe9d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0102) {
    const struct CPU_State initial_cpu = {.pc=0x58aa, .a=0xaf, .x=0xb0, .y=0x70, .sp=0x7c, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x58aa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x58ab, .a=0xaf, .x=0xb0, .y=0x70, .sp=0x7b, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x13}, {.addr=0x58aa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x58aa, .value=0x0d, .type=IO_READ},
        {.addr=0x58ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0103) {
    const struct CPU_State initial_cpu = {.pc=0xb536, .a=0x20, .x=0x96, .y=0x69, .sp=0x2b, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0xb536, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb537, .a=0x20, .x=0x96, .y=0x69, .sp=0x2a, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xfa}, {.addr=0xb536, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb536, .value=0x0d, .type=IO_READ},
        {.addr=0xb537, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0104) {
    const struct CPU_State initial_cpu = {.pc=0x26da, .a=0x11, .x=0xa3, .y=0x49, .sp=0x7f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x26da, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x26db, .a=0x11, .x=0xa3, .y=0x49, .sp=0x7e, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x7e}, {.addr=0x26da, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x26da, .value=0x0d, .type=IO_READ},
        {.addr=0x26db, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0105) {
    const struct CPU_State initial_cpu = {.pc=0x1182, .a=0x67, .x=0x78, .y=0xea, .sp=0x1c, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0x1182, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1183, .a=0x67, .x=0x78, .y=0xea, .sp=0x1b, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xce}, {.addr=0x1182, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1182, .value=0x0d, .type=IO_READ},
        {.addr=0x1183, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0106) {
    const struct CPU_State initial_cpu = {.pc=0xdf8d, .a=0x6c, .x=0x82, .y=0x1b, .sp=0x1f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0xdf8d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdf8e, .a=0x6c, .x=0x82, .y=0x1b, .sp=0x1e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x6e}, {.addr=0xdf8d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdf8d, .value=0x0d, .type=IO_READ},
        {.addr=0xdf8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0107) {
    const struct CPU_State initial_cpu = {.pc=0x93f7, .a=0x63, .x=0x9b, .y=0xf8, .sp=0x83, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0x93f7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x93f8, .a=0x63, .x=0x9b, .y=0xf8, .sp=0x82, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x45}, {.addr=0x93f7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x93f7, .value=0x0d, .type=IO_READ},
        {.addr=0x93f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x45, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0108) {
    const struct CPU_State initial_cpu = {.pc=0x5c4a, .a=0xa7, .x=0xef, .y=0x43, .sp=0x14, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0x5c4a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5c4b, .a=0xa7, .x=0xef, .y=0x43, .sp=0x13, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x1e}, {.addr=0x5c4a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5c4a, .value=0x0d, .type=IO_READ},
        {.addr=0x5c4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0109) {
    const struct CPU_State initial_cpu = {.pc=0x6e65, .a=0xc7, .x=0xc2, .y=0x20, .sp=0x79, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x6e65, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6e66, .a=0xc7, .x=0xc2, .y=0x20, .sp=0x78, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x6e}, {.addr=0x6e65, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6e65, .value=0x0d, .type=IO_READ},
        {.addr=0x6e66, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_010A) {
    const struct CPU_State initial_cpu = {.pc=0xdf9a, .a=0x12, .x=0x3b, .y=0x03, .sp=0xd0, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0xdf9a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdf9b, .a=0x12, .x=0x3b, .y=0x03, .sp=0xcf, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x76}, {.addr=0xdf9a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdf9a, .value=0x0d, .type=IO_READ},
        {.addr=0xdf9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_010B) {
    const struct CPU_State initial_cpu = {.pc=0x1180, .a=0xcd, .x=0xe0, .y=0x6e, .sp=0x84, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0x1180, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1181, .a=0xcd, .x=0xe0, .y=0x6e, .sp=0x83, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xe5}, {.addr=0x1180, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1180, .value=0x0d, .type=IO_READ},
        {.addr=0x1181, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_010C) {
    const struct CPU_State initial_cpu = {.pc=0xef6d, .a=0x42, .x=0xbb, .y=0xa0, .sp=0x82, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0xef6d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xef6e, .a=0x42, .x=0xbb, .y=0xa0, .sp=0x81, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xc6}, {.addr=0xef6d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xef6d, .value=0x0d, .type=IO_READ},
        {.addr=0xef6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_010D) {
    const struct CPU_State initial_cpu = {.pc=0x030a, .a=0xfb, .x=0x0c, .y=0xd2, .sp=0xcc, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x030a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x030b, .a=0xfb, .x=0x0c, .y=0xd2, .sp=0xcb, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xeb}, {.addr=0x030a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x030a, .value=0x0d, .type=IO_READ},
        {.addr=0x030b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_010E) {
    const struct CPU_State initial_cpu = {.pc=0xaa0e, .a=0xc7, .x=0x7a, .y=0x65, .sp=0x70, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0xaa0e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xaa0f, .a=0xc7, .x=0x7a, .y=0x65, .sp=0x6f, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x9b}, {.addr=0xaa0e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xaa0e, .value=0x0d, .type=IO_READ},
        {.addr=0xaa0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_010F) {
    const struct CPU_State initial_cpu = {.pc=0xa48d, .a=0x97, .x=0xc5, .y=0xef, .sp=0xea, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0xa48d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa48e, .a=0x97, .x=0xc5, .y=0xef, .sp=0xe9, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xba}, {.addr=0xa48d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa48d, .value=0x0d, .type=IO_READ},
        {.addr=0xa48e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xba, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0110) {
    const struct CPU_State initial_cpu = {.pc=0xddf3, .a=0x5b, .x=0x43, .y=0x33, .sp=0x4e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0xddf3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xddf4, .a=0x5b, .x=0x43, .y=0x33, .sp=0x4d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x85}, {.addr=0xddf3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xddf3, .value=0x0d, .type=IO_READ},
        {.addr=0xddf4, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0111) {
    const struct CPU_State initial_cpu = {.pc=0xf6f6, .a=0xb7, .x=0xd3, .y=0xcf, .sp=0x7e, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x00}, {.addr=0xf6f6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf6f7, .a=0xb7, .x=0xd3, .y=0xcf, .sp=0x7d, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x0e}, {.addr=0xf6f6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf6f6, .value=0x0d, .type=IO_READ},
        {.addr=0xf6f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0112) {
    const struct CPU_State initial_cpu = {.pc=0xcbd8, .a=0x29, .x=0x13, .y=0x56, .sp=0xb9, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0xcbd8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcbd9, .a=0x29, .x=0x13, .y=0x56, .sp=0xb8, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x96}, {.addr=0xcbd8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcbd8, .value=0x0d, .type=IO_READ},
        {.addr=0xcbd9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0113) {
    const struct CPU_State initial_cpu = {.pc=0xb5db, .a=0x2b, .x=0x11, .y=0x4a, .sp=0xde, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0xb5db, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb5dc, .a=0x2b, .x=0x11, .y=0x4a, .sp=0xdd, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x73}, {.addr=0xb5db, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb5db, .value=0x0d, .type=IO_READ},
        {.addr=0xb5dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0114) {
    const struct CPU_State initial_cpu = {.pc=0xb7a8, .a=0xf8, .x=0x89, .y=0xa7, .sp=0xc7, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0xb7a8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb7a9, .a=0xf8, .x=0x89, .y=0xa7, .sp=0xc6, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xb2}, {.addr=0xb7a8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb7a8, .value=0x0d, .type=IO_READ},
        {.addr=0xb7a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0115) {
    const struct CPU_State initial_cpu = {.pc=0x0536, .a=0xd0, .x=0xbe, .y=0xc8, .sp=0xf5, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0x0536, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0537, .a=0xd0, .x=0xbe, .y=0xc8, .sp=0xf4, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xb4}, {.addr=0x0536, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0536, .value=0x0d, .type=IO_READ},
        {.addr=0x0537, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0116) {
    const struct CPU_State initial_cpu = {.pc=0x2484, .a=0xf1, .x=0x0a, .y=0x9c, .sp=0xa4, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0x2484, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2485, .a=0xf1, .x=0x0a, .y=0x9c, .sp=0xa3, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xf5}, {.addr=0x2484, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2484, .value=0x0d, .type=IO_READ},
        {.addr=0x2485, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0117) {
    const struct CPU_State initial_cpu = {.pc=0x61c3, .a=0xf9, .x=0x7b, .y=0x38, .sp=0x37, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0x61c3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x61c4, .a=0xf9, .x=0x7b, .y=0x38, .sp=0x36, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xb4}, {.addr=0x61c3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x61c3, .value=0x0d, .type=IO_READ},
        {.addr=0x61c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0118) {
    const struct CPU_State initial_cpu = {.pc=0x3b5d, .a=0x2a, .x=0xec, .y=0x87, .sp=0x8f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x3b5d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3b5e, .a=0x2a, .x=0xec, .y=0x87, .sp=0x8e, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x5a}, {.addr=0x3b5d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3b5d, .value=0x0d, .type=IO_READ},
        {.addr=0x3b5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0119) {
    const struct CPU_State initial_cpu = {.pc=0x29cb, .a=0xf5, .x=0xea, .y=0x7f, .sp=0x5f, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x29cb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x29cc, .a=0xf5, .x=0xea, .y=0x7f, .sp=0x5e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x91}, {.addr=0x29cb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x29cb, .value=0x0d, .type=IO_READ},
        {.addr=0x29cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_011A) {
    const struct CPU_State initial_cpu = {.pc=0x3fef, .a=0x51, .x=0xf3, .y=0x11, .sp=0xf7, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0x3fef, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3ff0, .a=0x51, .x=0xf3, .y=0x11, .sp=0xf6, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xa9}, {.addr=0x3fef, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3fef, .value=0x0d, .type=IO_READ},
        {.addr=0x3ff0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_011B) {
    const struct CPU_State initial_cpu = {.pc=0x0768, .a=0xaa, .x=0x89, .y=0xab, .sp=0xbe, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0x0768, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0769, .a=0xaa, .x=0x89, .y=0xab, .sp=0xbd, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x1a}, {.addr=0x0768, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0768, .value=0x0d, .type=IO_READ},
        {.addr=0x0769, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_011C) {
    const struct CPU_State initial_cpu = {.pc=0xea21, .a=0x1d, .x=0x47, .y=0xca, .sp=0x87, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0xea21, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xea22, .a=0x1d, .x=0x47, .y=0xca, .sp=0x86, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x9a}, {.addr=0xea21, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xea21, .value=0x0d, .type=IO_READ},
        {.addr=0xea22, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_011D) {
    const struct CPU_State initial_cpu = {.pc=0xfc47, .a=0x13, .x=0x8f, .y=0x1f, .sp=0x8a, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0xfc47, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfc48, .a=0x13, .x=0x8f, .y=0x1f, .sp=0x89, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x27}, {.addr=0xfc47, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfc47, .value=0x0d, .type=IO_READ},
        {.addr=0xfc48, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_011E) {
    const struct CPU_State initial_cpu = {.pc=0x05e8, .a=0xf2, .x=0x3a, .y=0x02, .sp=0xee, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x05e8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x05e9, .a=0xf2, .x=0x3a, .y=0x02, .sp=0xed, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x7b}, {.addr=0x05e8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x05e8, .value=0x0d, .type=IO_READ},
        {.addr=0x05e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_011F) {
    const struct CPU_State initial_cpu = {.pc=0xe13a, .a=0xe3, .x=0x64, .y=0x36, .sp=0x6d, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0xe13a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe13b, .a=0xe3, .x=0x64, .y=0x36, .sp=0x6c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xb4}, {.addr=0xe13a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe13a, .value=0x0d, .type=IO_READ},
        {.addr=0xe13b, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0120) {
    const struct CPU_State initial_cpu = {.pc=0xfb74, .a=0xbf, .x=0xdd, .y=0xe0, .sp=0xb8, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xfb74, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfb75, .a=0xbf, .x=0xdd, .y=0xe0, .sp=0xb7, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xfa}, {.addr=0xfb74, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfb74, .value=0x0d, .type=IO_READ},
        {.addr=0xfb75, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0121) {
    const struct CPU_State initial_cpu = {.pc=0x8b80, .a=0x2e, .x=0x90, .y=0x8f, .sp=0xc0, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x8b80, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8b81, .a=0x2e, .x=0x90, .y=0x8f, .sp=0xbf, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xc5}, {.addr=0x8b80, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8b80, .value=0x0d, .type=IO_READ},
        {.addr=0x8b81, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0122) {
    const struct CPU_State initial_cpu = {.pc=0x4885, .a=0xe3, .x=0x21, .y=0xfc, .sp=0x3f, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0x4885, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4886, .a=0xe3, .x=0x21, .y=0xfc, .sp=0x3e, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x22}, {.addr=0x4885, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4885, .value=0x0d, .type=IO_READ},
        {.addr=0x4886, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x22, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0123) {
    const struct CPU_State initial_cpu = {.pc=0x2f70, .a=0xda, .x=0xa1, .y=0xce, .sp=0x20, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0x2f70, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2f71, .a=0xda, .x=0xa1, .y=0xce, .sp=0x1f, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x03}, {.addr=0x2f70, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2f70, .value=0x0d, .type=IO_READ},
        {.addr=0x2f71, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0124) {
    const struct CPU_State initial_cpu = {.pc=0xd8fe, .a=0x38, .x=0xb2, .y=0xdb, .sp=0xeb, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0xd8fe, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd8ff, .a=0x38, .x=0xb2, .y=0xdb, .sp=0xea, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x4a}, {.addr=0xd8fe, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd8fe, .value=0x0d, .type=IO_READ},
        {.addr=0xd8ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0125) {
    const struct CPU_State initial_cpu = {.pc=0xe55e, .a=0x5d, .x=0x10, .y=0x08, .sp=0xd9, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xe55e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe55f, .a=0x5d, .x=0x10, .y=0x08, .sp=0xd8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x31}, {.addr=0xe55e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe55e, .value=0x0d, .type=IO_READ},
        {.addr=0xe55f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0126) {
    const struct CPU_State initial_cpu = {.pc=0xa5bd, .a=0x14, .x=0x57, .y=0x4a, .sp=0x36, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0xa5bd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa5be, .a=0x14, .x=0x57, .y=0x4a, .sp=0x35, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xe2}, {.addr=0xa5bd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa5bd, .value=0x0d, .type=IO_READ},
        {.addr=0xa5be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0127) {
    const struct CPU_State initial_cpu = {.pc=0xc801, .a=0x7a, .x=0x89, .y=0xa1, .sp=0x5b, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0xc801, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc802, .a=0x7a, .x=0x89, .y=0xa1, .sp=0x5a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xe8}, {.addr=0xc801, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc801, .value=0x0d, .type=IO_READ},
        {.addr=0xc802, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0128) {
    const struct CPU_State initial_cpu = {.pc=0xe308, .a=0xf7, .x=0xa6, .y=0xcc, .sp=0x80, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0xe308, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe309, .a=0xf7, .x=0xa6, .y=0xcc, .sp=0x7f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xbd}, {.addr=0xe308, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe308, .value=0x0d, .type=IO_READ},
        {.addr=0xe309, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0129) {
    const struct CPU_State initial_cpu = {.pc=0xc997, .a=0x81, .x=0x74, .y=0xce, .sp=0xf1, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0xc997, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc998, .a=0x81, .x=0x74, .y=0xce, .sp=0xf0, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xf0}, {.addr=0xc997, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc997, .value=0x0d, .type=IO_READ},
        {.addr=0xc998, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_012A) {
    const struct CPU_State initial_cpu = {.pc=0xe363, .a=0x57, .x=0x9c, .y=0xd3, .sp=0xc9, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0xe363, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe364, .a=0x57, .x=0x9c, .y=0xd3, .sp=0xc8, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x1b}, {.addr=0xe363, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe363, .value=0x0d, .type=IO_READ},
        {.addr=0xe364, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_012B) {
    const struct CPU_State initial_cpu = {.pc=0xc7d6, .a=0x29, .x=0x32, .y=0x1d, .sp=0xce, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0xc7d6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc7d7, .a=0x29, .x=0x32, .y=0x1d, .sp=0xcd, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x65}, {.addr=0xc7d6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc7d6, .value=0x0d, .type=IO_READ},
        {.addr=0xc7d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_012C) {
    const struct CPU_State initial_cpu = {.pc=0x446e, .a=0x50, .x=0xc2, .y=0xfe, .sp=0x2e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x446e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x446f, .a=0x50, .x=0xc2, .y=0xfe, .sp=0x2d, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x26}, {.addr=0x446e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x446e, .value=0x0d, .type=IO_READ},
        {.addr=0x446f, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_012D) {
    const struct CPU_State initial_cpu = {.pc=0xe12d, .a=0x8f, .x=0x50, .y=0xc9, .sp=0xc4, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xe12d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe12e, .a=0x8f, .x=0x50, .y=0xc9, .sp=0xc3, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x4f}, {.addr=0xe12d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe12d, .value=0x0d, .type=IO_READ},
        {.addr=0xe12e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_012E) {
    const struct CPU_State initial_cpu = {.pc=0xab98, .a=0x15, .x=0xe4, .y=0xce, .sp=0x62, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0xab98, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xab99, .a=0x15, .x=0xe4, .y=0xce, .sp=0x61, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x70}, {.addr=0xab98, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xab98, .value=0x0d, .type=IO_READ},
        {.addr=0xab99, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_012F) {
    const struct CPU_State initial_cpu = {.pc=0x5da9, .a=0x4c, .x=0xad, .y=0x46, .sp=0x6f, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x5da9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5daa, .a=0x4c, .x=0xad, .y=0x46, .sp=0x6e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x55}, {.addr=0x5da9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5da9, .value=0x0d, .type=IO_READ},
        {.addr=0x5daa, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0130) {
    const struct CPU_State initial_cpu = {.pc=0xd17d, .a=0xb2, .x=0x2d, .y=0x27, .sp=0x44, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0xd17d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd17e, .a=0xb2, .x=0x2d, .y=0x27, .sp=0x43, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xd7}, {.addr=0xd17d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd17d, .value=0x0d, .type=IO_READ},
        {.addr=0xd17e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0131) {
    const struct CPU_State initial_cpu = {.pc=0xe599, .a=0x59, .x=0xee, .y=0xa7, .sp=0xe2, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0xe599, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe59a, .a=0x59, .x=0xee, .y=0xa7, .sp=0xe1, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xf9}, {.addr=0xe599, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe599, .value=0x0d, .type=IO_READ},
        {.addr=0xe59a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0132) {
    const struct CPU_State initial_cpu = {.pc=0x4017, .a=0xef, .x=0xb6, .y=0x02, .sp=0xee, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x4017, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4018, .a=0xef, .x=0xb6, .y=0x02, .sp=0xed, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x76}, {.addr=0x4017, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4017, .value=0x0d, .type=IO_READ},
        {.addr=0x4018, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0133) {
    const struct CPU_State initial_cpu = {.pc=0x458a, .a=0x4a, .x=0x90, .y=0x8c, .sp=0x76, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0x458a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x458b, .a=0x4a, .x=0x90, .y=0x8c, .sp=0x75, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x8e}, {.addr=0x458a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x458a, .value=0x0d, .type=IO_READ},
        {.addr=0x458b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0134) {
    const struct CPU_State initial_cpu = {.pc=0xd40e, .a=0xb7, .x=0x1b, .y=0xd2, .sp=0x84, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0xd40e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd40f, .a=0xb7, .x=0x1b, .y=0xd2, .sp=0x83, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x6b}, {.addr=0xd40e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd40e, .value=0x0d, .type=IO_READ},
        {.addr=0xd40f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0135) {
    const struct CPU_State initial_cpu = {.pc=0xd9fd, .a=0xd4, .x=0x5b, .y=0x2c, .sp=0xb7, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0xd9fd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd9fe, .a=0xd4, .x=0x5b, .y=0x2c, .sp=0xb6, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x17}, {.addr=0xd9fd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd9fd, .value=0x0d, .type=IO_READ},
        {.addr=0xd9fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0136) {
    const struct CPU_State initial_cpu = {.pc=0x7b91, .a=0x5f, .x=0x96, .y=0xe1, .sp=0x82, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x7b91, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7b92, .a=0x5f, .x=0x96, .y=0xe1, .sp=0x81, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x88}, {.addr=0x7b91, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7b91, .value=0x0d, .type=IO_READ},
        {.addr=0x7b92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0137) {
    const struct CPU_State initial_cpu = {.pc=0xe88e, .a=0x39, .x=0xce, .y=0x45, .sp=0xcf, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0xe88e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe88f, .a=0x39, .x=0xce, .y=0x45, .sp=0xce, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xc8}, {.addr=0xe88e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe88e, .value=0x0d, .type=IO_READ},
        {.addr=0xe88f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0138) {
    const struct CPU_State initial_cpu = {.pc=0x8bea, .a=0x67, .x=0xac, .y=0x1f, .sp=0x23, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x8bea, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8beb, .a=0x67, .x=0xac, .y=0x1f, .sp=0x22, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xd2}, {.addr=0x8bea, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8bea, .value=0x0d, .type=IO_READ},
        {.addr=0x8beb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0139) {
    const struct CPU_State initial_cpu = {.pc=0x38e6, .a=0x31, .x=0xc9, .y=0xa2, .sp=0x88, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0x38e6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x38e7, .a=0x31, .x=0xc9, .y=0xa2, .sp=0x87, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xbb}, {.addr=0x38e6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x38e6, .value=0x0d, .type=IO_READ},
        {.addr=0x38e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_013A) {
    const struct CPU_State initial_cpu = {.pc=0xa0fc, .a=0xcb, .x=0x3f, .y=0x8e, .sp=0xd5, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x00}, {.addr=0xa0fc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa0fd, .a=0xcb, .x=0x3f, .y=0x8e, .sp=0xd4, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x0d}, {.addr=0xa0fc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa0fc, .value=0x0d, .type=IO_READ},
        {.addr=0xa0fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_013B) {
    const struct CPU_State initial_cpu = {.pc=0xb0bc, .a=0xfc, .x=0x25, .y=0x49, .sp=0x1e, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x00}, {.addr=0xb0bc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb0bd, .a=0xfc, .x=0x25, .y=0x49, .sp=0x1d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0xbc}, {.addr=0xb0bc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb0bc, .value=0x0d, .type=IO_READ},
        {.addr=0xb0bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_013C) {
    const struct CPU_State initial_cpu = {.pc=0x2430, .a=0x96, .x=0x90, .y=0x97, .sp=0xdb, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0x2430, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2431, .a=0x96, .x=0x90, .y=0x97, .sp=0xda, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x63}, {.addr=0x2430, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2430, .value=0x0d, .type=IO_READ},
        {.addr=0x2431, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_013D) {
    const struct CPU_State initial_cpu = {.pc=0xe011, .a=0xe3, .x=0x89, .y=0x2c, .sp=0xcf, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0xe011, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe012, .a=0xe3, .x=0x89, .y=0x2c, .sp=0xce, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x08}, {.addr=0xe011, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe011, .value=0x0d, .type=IO_READ},
        {.addr=0xe012, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_013E) {
    const struct CPU_State initial_cpu = {.pc=0xbfb7, .a=0x68, .x=0x5a, .y=0x3b, .sp=0x25, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0xbfb7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbfb8, .a=0x68, .x=0x5a, .y=0x3b, .sp=0x24, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x18}, {.addr=0xbfb7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbfb7, .value=0x0d, .type=IO_READ},
        {.addr=0xbfb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_013F) {
    const struct CPU_State initial_cpu = {.pc=0x9bf7, .a=0x2c, .x=0x84, .y=0x13, .sp=0x57, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x9bf7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9bf8, .a=0x2c, .x=0x84, .y=0x13, .sp=0x56, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x30}, {.addr=0x9bf7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9bf7, .value=0x0d, .type=IO_READ},
        {.addr=0x9bf8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0140) {
    const struct CPU_State initial_cpu = {.pc=0x2811, .a=0x4c, .x=0x24, .y=0x8a, .sp=0x88, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0x2811, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2812, .a=0x4c, .x=0x24, .y=0x8a, .sp=0x87, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xf2}, {.addr=0x2811, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2811, .value=0x0d, .type=IO_READ},
        {.addr=0x2812, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0141) {
    const struct CPU_State initial_cpu = {.pc=0xa32d, .a=0xf5, .x=0x25, .y=0xd6, .sp=0xd8, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0xa32d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa32e, .a=0xf5, .x=0x25, .y=0xd6, .sp=0xd7, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x7a}, {.addr=0xa32d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa32d, .value=0x0d, .type=IO_READ},
        {.addr=0xa32e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0142) {
    const struct CPU_State initial_cpu = {.pc=0x71c1, .a=0x14, .x=0x3b, .y=0xff, .sp=0xa4, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0x71c1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x71c2, .a=0x14, .x=0x3b, .y=0xff, .sp=0xa3, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x6b}, {.addr=0x71c1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x71c1, .value=0x0d, .type=IO_READ},
        {.addr=0x71c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0143) {
    const struct CPU_State initial_cpu = {.pc=0xa61c, .a=0x10, .x=0xc6, .y=0x8d, .sp=0x11, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0xa61c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa61d, .a=0x10, .x=0xc6, .y=0x8d, .sp=0x10, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xf4}, {.addr=0xa61c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa61c, .value=0x0d, .type=IO_READ},
        {.addr=0xa61d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0144) {
    const struct CPU_State initial_cpu = {.pc=0xaac4, .a=0xd9, .x=0xab, .y=0x6f, .sp=0xd9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xaac4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xaac5, .a=0xd9, .x=0xab, .y=0x6f, .sp=0xd8, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xeb}, {.addr=0xaac4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xaac4, .value=0x0d, .type=IO_READ},
        {.addr=0xaac5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0145) {
    const struct CPU_State initial_cpu = {.pc=0x3aa2, .a=0xa4, .x=0x19, .y=0xe7, .sp=0x76, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0x3aa2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3aa3, .a=0xa4, .x=0x19, .y=0xe7, .sp=0x75, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x35}, {.addr=0x3aa2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3aa2, .value=0x0d, .type=IO_READ},
        {.addr=0x3aa3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0146) {
    const struct CPU_State initial_cpu = {.pc=0xf45e, .a=0x5f, .x=0x28, .y=0x46, .sp=0xdb, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0xf45e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf45f, .a=0x5f, .x=0x28, .y=0x46, .sp=0xda, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x79}, {.addr=0xf45e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf45e, .value=0x0d, .type=IO_READ},
        {.addr=0xf45f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0147) {
    const struct CPU_State initial_cpu = {.pc=0x28df, .a=0x46, .x=0xe2, .y=0xe1, .sp=0x6e, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x28df, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x28e0, .a=0x46, .x=0xe2, .y=0xe1, .sp=0x6d, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x42}, {.addr=0x28df, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x28df, .value=0x0d, .type=IO_READ},
        {.addr=0x28e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0148) {
    const struct CPU_State initial_cpu = {.pc=0x2c0c, .a=0x7c, .x=0x02, .y=0x63, .sp=0x2e, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x2c0c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2c0d, .a=0x7c, .x=0x02, .y=0x63, .sp=0x2d, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x27}, {.addr=0x2c0c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2c0c, .value=0x0d, .type=IO_READ},
        {.addr=0x2c0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0149) {
    const struct CPU_State initial_cpu = {.pc=0xdb64, .a=0xab, .x=0x06, .y=0x37, .sp=0x17, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0xdb64, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdb65, .a=0xab, .x=0x06, .y=0x37, .sp=0x16, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xc0}, {.addr=0xdb64, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdb64, .value=0x0d, .type=IO_READ},
        {.addr=0xdb65, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_014A) {
    const struct CPU_State initial_cpu = {.pc=0x2a5d, .a=0x50, .x=0x8f, .y=0xea, .sp=0xb3, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x2a5d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2a5e, .a=0x50, .x=0x8f, .y=0xea, .sp=0xb2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x90}, {.addr=0x2a5d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2a5d, .value=0x0d, .type=IO_READ},
        {.addr=0x2a5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_014B) {
    const struct CPU_State initial_cpu = {.pc=0x9708, .a=0x04, .x=0x74, .y=0xb3, .sp=0x65, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0x9708, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9709, .a=0x04, .x=0x74, .y=0xb3, .sp=0x64, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x90}, {.addr=0x9708, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9708, .value=0x0d, .type=IO_READ},
        {.addr=0x9709, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_014C) {
    const struct CPU_State initial_cpu = {.pc=0x4753, .a=0xf3, .x=0x93, .y=0xee, .sp=0x37, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0x4753, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4754, .a=0xf3, .x=0x93, .y=0xee, .sp=0x36, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x7e}, {.addr=0x4753, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4753, .value=0x0d, .type=IO_READ},
        {.addr=0x4754, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_014D) {
    const struct CPU_State initial_cpu = {.pc=0xd02a, .a=0x54, .x=0x6b, .y=0xa1, .sp=0xff, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0xd02a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd02b, .a=0x54, .x=0x6b, .y=0xa1, .sp=0xfe, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x10}, {.addr=0xd02a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd02a, .value=0x0d, .type=IO_READ},
        {.addr=0xd02b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_014E) {
    const struct CPU_State initial_cpu = {.pc=0xdbe1, .a=0x09, .x=0xec, .y=0xda, .sp=0xb8, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xdbe1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdbe2, .a=0x09, .x=0xec, .y=0xda, .sp=0xb7, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x07}, {.addr=0xdbe1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdbe1, .value=0x0d, .type=IO_READ},
        {.addr=0xdbe2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_014F) {
    const struct CPU_State initial_cpu = {.pc=0xad55, .a=0x7b, .x=0x50, .y=0x23, .sp=0x71, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0xad55, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xad56, .a=0x7b, .x=0x50, .y=0x23, .sp=0x70, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xee}, {.addr=0xad55, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xad55, .value=0x0d, .type=IO_READ},
        {.addr=0xad56, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0150) {
    const struct CPU_State initial_cpu = {.pc=0xca4a, .a=0x13, .x=0x87, .y=0x0f, .sp=0x0e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0xca4a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xca4b, .a=0x13, .x=0x87, .y=0x0f, .sp=0x0d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xed}, {.addr=0xca4a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xca4a, .value=0x0d, .type=IO_READ},
        {.addr=0xca4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0151) {
    const struct CPU_State initial_cpu = {.pc=0xd7c5, .a=0x06, .x=0x74, .y=0xd8, .sp=0x51, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0xd7c5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd7c6, .a=0x06, .x=0x74, .y=0xd8, .sp=0x50, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x30}, {.addr=0xd7c5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd7c5, .value=0x0d, .type=IO_READ},
        {.addr=0xd7c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0152) {
    const struct CPU_State initial_cpu = {.pc=0x59ff, .a=0xd1, .x=0xcd, .y=0x09, .sp=0xad, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x59ff, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5a00, .a=0xd1, .x=0xcd, .y=0x09, .sp=0xac, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x1b}, {.addr=0x59ff, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x59ff, .value=0x0d, .type=IO_READ},
        {.addr=0x5a00, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0153) {
    const struct CPU_State initial_cpu = {.pc=0xe498, .a=0xdc, .x=0x8e, .y=0xfa, .sp=0xd1, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0xe498, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe499, .a=0xdc, .x=0x8e, .y=0xfa, .sp=0xd0, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x62}, {.addr=0xe498, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe498, .value=0x0d, .type=IO_READ},
        {.addr=0xe499, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0154) {
    const struct CPU_State initial_cpu = {.pc=0x85d1, .a=0x81, .x=0x14, .y=0x60, .sp=0x35, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x85d1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x85d2, .a=0x81, .x=0x14, .y=0x60, .sp=0x34, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x6d}, {.addr=0x85d1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x85d1, .value=0x0d, .type=IO_READ},
        {.addr=0x85d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0155) {
    const struct CPU_State initial_cpu = {.pc=0xdf50, .a=0x02, .x=0xed, .y=0x69, .sp=0x42, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0xdf50, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdf51, .a=0x02, .x=0xed, .y=0x69, .sp=0x41, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xa9}, {.addr=0xdf50, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdf50, .value=0x0d, .type=IO_READ},
        {.addr=0xdf51, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0156) {
    const struct CPU_State initial_cpu = {.pc=0x46ef, .a=0x47, .x=0x61, .y=0x93, .sp=0x10, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x46ef, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x46f0, .a=0x47, .x=0x61, .y=0x93, .sp=0x0f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x2c}, {.addr=0x46ef, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x46ef, .value=0x0d, .type=IO_READ},
        {.addr=0x46f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0157) {
    const struct CPU_State initial_cpu = {.pc=0x34d1, .a=0x89, .x=0x4f, .y=0xa2, .sp=0x19, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0x34d1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x34d2, .a=0x89, .x=0x4f, .y=0xa2, .sp=0x18, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x25}, {.addr=0x34d1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x34d1, .value=0x0d, .type=IO_READ},
        {.addr=0x34d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0158) {
    const struct CPU_State initial_cpu = {.pc=0xd79f, .a=0x28, .x=0x54, .y=0xe1, .sp=0x55, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0xd79f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd7a0, .a=0x28, .x=0x54, .y=0xe1, .sp=0x54, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x28}, {.addr=0xd79f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd79f, .value=0x0d, .type=IO_READ},
        {.addr=0xd7a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0159) {
    const struct CPU_State initial_cpu = {.pc=0x9af8, .a=0x77, .x=0x85, .y=0x6d, .sp=0x6d, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0x9af8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9af9, .a=0x77, .x=0x85, .y=0x6d, .sp=0x6c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x01}, {.addr=0x9af8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9af8, .value=0x0d, .type=IO_READ},
        {.addr=0x9af9, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_015A) {
    const struct CPU_State initial_cpu = {.pc=0x5dab, .a=0x23, .x=0x91, .y=0xa1, .sp=0xa7, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x5dab, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5dac, .a=0x23, .x=0x91, .y=0xa1, .sp=0xa6, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xfd}, {.addr=0x5dab, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5dab, .value=0x0d, .type=IO_READ},
        {.addr=0x5dac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_015B) {
    const struct CPU_State initial_cpu = {.pc=0x43db, .a=0x0d, .x=0xee, .y=0x3a, .sp=0x85, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x43db, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x43dc, .a=0x0d, .x=0xee, .y=0x3a, .sp=0x84, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x10}, {.addr=0x43db, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x43db, .value=0x0d, .type=IO_READ},
        {.addr=0x43dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_015C) {
    const struct CPU_State initial_cpu = {.pc=0x5731, .a=0xab, .x=0xc4, .y=0xe9, .sp=0x03, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x00}, {.addr=0x5731, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5732, .a=0xab, .x=0xc4, .y=0xe9, .sp=0x02, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xd1}, {.addr=0x5731, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5731, .value=0x0d, .type=IO_READ},
        {.addr=0x5732, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_015D) {
    const struct CPU_State initial_cpu = {.pc=0xb74d, .a=0x36, .x=0xfb, .y=0x3c, .sp=0x33, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0xb74d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb74e, .a=0x36, .x=0xfb, .y=0x3c, .sp=0x32, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x82}, {.addr=0xb74d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb74d, .value=0x0d, .type=IO_READ},
        {.addr=0xb74e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x82, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_015E) {
    const struct CPU_State initial_cpu = {.pc=0x544f, .a=0xf6, .x=0x18, .y=0x21, .sp=0x11, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x544f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5450, .a=0xf6, .x=0x18, .y=0x21, .sp=0x10, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x90}, {.addr=0x544f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x544f, .value=0x0d, .type=IO_READ},
        {.addr=0x5450, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_015F) {
    const struct CPU_State initial_cpu = {.pc=0xe1bc, .a=0x39, .x=0x32, .y=0x2c, .sp=0x30, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0xe1bc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe1bd, .a=0x39, .x=0x32, .y=0x2c, .sp=0x2f, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x7f}, {.addr=0xe1bc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe1bc, .value=0x0d, .type=IO_READ},
        {.addr=0xe1bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0160) {
    const struct CPU_State initial_cpu = {.pc=0xde0a, .a=0xed, .x=0xc9, .y=0x8c, .sp=0x0c, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0xde0a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xde0b, .a=0xed, .x=0xc9, .y=0x8c, .sp=0x0b, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x5e}, {.addr=0xde0a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xde0a, .value=0x0d, .type=IO_READ},
        {.addr=0xde0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0161) {
    const struct CPU_State initial_cpu = {.pc=0xc14b, .a=0xd0, .x=0x83, .y=0x41, .sp=0x9f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0xc14b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc14c, .a=0xd0, .x=0x83, .y=0x41, .sp=0x9e, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xe8}, {.addr=0xc14b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc14b, .value=0x0d, .type=IO_READ},
        {.addr=0xc14c, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0162) {
    const struct CPU_State initial_cpu = {.pc=0x773a, .a=0x35, .x=0xdd, .y=0xf8, .sp=0x94, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x773a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x773b, .a=0x35, .x=0xdd, .y=0xf8, .sp=0x93, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xb4}, {.addr=0x773a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x773a, .value=0x0d, .type=IO_READ},
        {.addr=0x773b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0163) {
    const struct CPU_State initial_cpu = {.pc=0x3f88, .a=0x4b, .x=0x6c, .y=0x9d, .sp=0x53, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0x3f88, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3f89, .a=0x4b, .x=0x6c, .y=0x9d, .sp=0x52, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x8b}, {.addr=0x3f88, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3f88, .value=0x0d, .type=IO_READ},
        {.addr=0x3f89, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0164) {
    const struct CPU_State initial_cpu = {.pc=0xb5de, .a=0xea, .x=0xb3, .y=0xe5, .sp=0x89, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0xb5de, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb5df, .a=0xea, .x=0xb3, .y=0xe5, .sp=0x88, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xf9}, {.addr=0xb5de, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb5de, .value=0x0d, .type=IO_READ},
        {.addr=0xb5df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0165) {
    const struct CPU_State initial_cpu = {.pc=0x46e1, .a=0x77, .x=0x41, .y=0x16, .sp=0xfd, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x46e1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x46e2, .a=0x77, .x=0x41, .y=0x16, .sp=0xfc, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x5b}, {.addr=0x46e1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x46e1, .value=0x0d, .type=IO_READ},
        {.addr=0x46e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0166) {
    const struct CPU_State initial_cpu = {.pc=0x80d0, .a=0x66, .x=0x4e, .y=0x9a, .sp=0x53, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0x80d0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x80d1, .a=0x66, .x=0x4e, .y=0x9a, .sp=0x52, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xbf}, {.addr=0x80d0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x80d0, .value=0x0d, .type=IO_READ},
        {.addr=0x80d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0167) {
    const struct CPU_State initial_cpu = {.pc=0xb2c4, .a=0xa3, .x=0x34, .y=0x56, .sp=0x7b, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0xb2c4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb2c5, .a=0xa3, .x=0x34, .y=0x56, .sp=0x7a, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x3e}, {.addr=0xb2c4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb2c4, .value=0x0d, .type=IO_READ},
        {.addr=0xb2c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0168) {
    const struct CPU_State initial_cpu = {.pc=0xd2fe, .a=0x53, .x=0x44, .y=0xce, .sp=0x92, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0xd2fe, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd2ff, .a=0x53, .x=0x44, .y=0xce, .sp=0x91, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xe6}, {.addr=0xd2fe, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd2fe, .value=0x0d, .type=IO_READ},
        {.addr=0xd2ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0169) {
    const struct CPU_State initial_cpu = {.pc=0x6a4b, .a=0xf6, .x=0x03, .y=0xf5, .sp=0x73, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0x6a4b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6a4c, .a=0xf6, .x=0x03, .y=0xf5, .sp=0x72, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xda}, {.addr=0x6a4b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6a4b, .value=0x0d, .type=IO_READ},
        {.addr=0x6a4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_016A) {
    const struct CPU_State initial_cpu = {.pc=0xaf37, .a=0x95, .x=0x65, .y=0x7c, .sp=0x92, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0xaf37, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xaf38, .a=0x95, .x=0x65, .y=0x7c, .sp=0x91, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xa9}, {.addr=0xaf37, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xaf37, .value=0x0d, .type=IO_READ},
        {.addr=0xaf38, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_016B) {
    const struct CPU_State initial_cpu = {.pc=0x90a9, .a=0x4c, .x=0xbf, .y=0xdd, .sp=0xd1, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x90a9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x90aa, .a=0x4c, .x=0xbf, .y=0xdd, .sp=0xd0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xa8}, {.addr=0x90a9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x90a9, .value=0x0d, .type=IO_READ},
        {.addr=0x90aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_016C) {
    const struct CPU_State initial_cpu = {.pc=0x98ef, .a=0x0c, .x=0x9b, .y=0x50, .sp=0x63, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0x98ef, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x98f0, .a=0x0c, .x=0x9b, .y=0x50, .sp=0x62, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xfe}, {.addr=0x98ef, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x98ef, .value=0x0d, .type=IO_READ},
        {.addr=0x98f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_016D) {
    const struct CPU_State initial_cpu = {.pc=0x6b46, .a=0x10, .x=0xeb, .y=0x5c, .sp=0x23, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x6b46, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6b47, .a=0x10, .x=0xeb, .y=0x5c, .sp=0x22, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xe4}, {.addr=0x6b46, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6b46, .value=0x0d, .type=IO_READ},
        {.addr=0x6b47, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_016E) {
    const struct CPU_State initial_cpu = {.pc=0x03d8, .a=0x3a, .x=0x81, .y=0x3a, .sp=0xca, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x03d8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x03d9, .a=0x3a, .x=0x81, .y=0x3a, .sp=0xc9, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x9a}, {.addr=0x03d8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x03d8, .value=0x0d, .type=IO_READ},
        {.addr=0x03d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_016F) {
    const struct CPU_State initial_cpu = {.pc=0x81d5, .a=0xc0, .x=0xc0, .y=0x84, .sp=0xbc, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x81d5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x81d6, .a=0xc0, .x=0xc0, .y=0x84, .sp=0xbb, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x99}, {.addr=0x81d5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x81d5, .value=0x0d, .type=IO_READ},
        {.addr=0x81d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0170) {
    const struct CPU_State initial_cpu = {.pc=0x598b, .a=0x42, .x=0x3a, .y=0xca, .sp=0xc9, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0x598b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x598c, .a=0x42, .x=0x3a, .y=0xca, .sp=0xc8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x20}, {.addr=0x598b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x598b, .value=0x0d, .type=IO_READ},
        {.addr=0x598c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0171) {
    const struct CPU_State initial_cpu = {.pc=0x81c3, .a=0x4a, .x=0xaf, .y=0x71, .sp=0xe6, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x81c3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x81c4, .a=0x4a, .x=0xaf, .y=0x71, .sp=0xe5, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x1b}, {.addr=0x81c3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x81c3, .value=0x0d, .type=IO_READ},
        {.addr=0x81c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0172) {
    const struct CPU_State initial_cpu = {.pc=0x1d7e, .a=0x26, .x=0xaa, .y=0x4d, .sp=0x20, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0x1d7e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1d7f, .a=0x26, .x=0xaa, .y=0x4d, .sp=0x1f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x79}, {.addr=0x1d7e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1d7e, .value=0x0d, .type=IO_READ},
        {.addr=0x1d7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0173) {
    const struct CPU_State initial_cpu = {.pc=0xc977, .a=0xb3, .x=0xfe, .y=0xd4, .sp=0x12, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xc977, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc978, .a=0xb3, .x=0xfe, .y=0xd4, .sp=0x11, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xc3}, {.addr=0xc977, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc977, .value=0x0d, .type=IO_READ},
        {.addr=0xc978, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0174) {
    const struct CPU_State initial_cpu = {.pc=0xe4ca, .a=0xfe, .x=0x0f, .y=0x72, .sp=0x7a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xe4ca, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe4cb, .a=0xfe, .x=0x0f, .y=0x72, .sp=0x79, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x20}, {.addr=0xe4ca, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe4ca, .value=0x0d, .type=IO_READ},
        {.addr=0xe4cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0175) {
    const struct CPU_State initial_cpu = {.pc=0x11aa, .a=0xdf, .x=0xb9, .y=0x03, .sp=0x50, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x11aa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x11ab, .a=0xdf, .x=0xb9, .y=0x03, .sp=0x4f, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x36}, {.addr=0x11aa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x11aa, .value=0x0d, .type=IO_READ},
        {.addr=0x11ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0176) {
    const struct CPU_State initial_cpu = {.pc=0x8f2e, .a=0xc2, .x=0x7b, .y=0x4d, .sp=0xfa, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0x8f2e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8f2f, .a=0xc2, .x=0x7b, .y=0x4d, .sp=0xf9, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x4b}, {.addr=0x8f2e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8f2e, .value=0x0d, .type=IO_READ},
        {.addr=0x8f2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0177) {
    const struct CPU_State initial_cpu = {.pc=0x4c90, .a=0x0f, .x=0x79, .y=0x08, .sp=0xd1, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x4c90, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4c91, .a=0x0f, .x=0x79, .y=0x08, .sp=0xd0, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xe5}, {.addr=0x4c90, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4c90, .value=0x0d, .type=IO_READ},
        {.addr=0x4c91, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0178) {
    const struct CPU_State initial_cpu = {.pc=0xcb7c, .a=0x92, .x=0x76, .y=0x5c, .sp=0xc1, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0xcb7c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcb7d, .a=0x92, .x=0x76, .y=0x5c, .sp=0xc0, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xd4}, {.addr=0xcb7c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcb7c, .value=0x0d, .type=IO_READ},
        {.addr=0xcb7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xd4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0179) {
    const struct CPU_State initial_cpu = {.pc=0x473d, .a=0x4d, .x=0xd8, .y=0xe4, .sp=0xe6, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x473d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x473e, .a=0x4d, .x=0xd8, .y=0xe4, .sp=0xe5, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x12}, {.addr=0x473d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x473d, .value=0x0d, .type=IO_READ},
        {.addr=0x473e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_017A) {
    const struct CPU_State initial_cpu = {.pc=0x42d9, .a=0x9e, .x=0xcc, .y=0xbb, .sp=0xea, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0x42d9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x42da, .a=0x9e, .x=0xcc, .y=0xbb, .sp=0xe9, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x1e}, {.addr=0x42d9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x42d9, .value=0x0d, .type=IO_READ},
        {.addr=0x42da, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_017B) {
    const struct CPU_State initial_cpu = {.pc=0x0c14, .a=0x9c, .x=0xe6, .y=0xed, .sp=0x1e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x00}, {.addr=0x0c14, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0c15, .a=0x9c, .x=0xe6, .y=0xed, .sp=0x1d, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x17}, {.addr=0x0c14, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0c14, .value=0x0d, .type=IO_READ},
        {.addr=0x0c15, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_017C) {
    const struct CPU_State initial_cpu = {.pc=0x45e5, .a=0x0d, .x=0x11, .y=0x08, .sp=0x99, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x45e5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x45e6, .a=0x0d, .x=0x11, .y=0x08, .sp=0x98, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x26}, {.addr=0x45e5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x45e5, .value=0x0d, .type=IO_READ},
        {.addr=0x45e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_017D) {
    const struct CPU_State initial_cpu = {.pc=0x1112, .a=0xc0, .x=0x5e, .y=0xea, .sp=0x8e, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x1112, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1113, .a=0xc0, .x=0x5e, .y=0xea, .sp=0x8d, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x1b}, {.addr=0x1112, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1112, .value=0x0d, .type=IO_READ},
        {.addr=0x1113, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_017E) {
    const struct CPU_State initial_cpu = {.pc=0xbd18, .a=0x38, .x=0xf3, .y=0xfe, .sp=0x7b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0xbd18, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbd19, .a=0x38, .x=0xf3, .y=0xfe, .sp=0x7a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xc9}, {.addr=0xbd18, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbd18, .value=0x0d, .type=IO_READ},
        {.addr=0xbd19, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_017F) {
    const struct CPU_State initial_cpu = {.pc=0x0743, .a=0xe0, .x=0xe0, .y=0xc9, .sp=0x52, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x0743, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0744, .a=0xe0, .x=0xe0, .y=0xc9, .sp=0x51, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xb4}, {.addr=0x0743, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0743, .value=0x0d, .type=IO_READ},
        {.addr=0x0744, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0180) {
    const struct CPU_State initial_cpu = {.pc=0xb759, .a=0xdd, .x=0xb3, .y=0x34, .sp=0xd1, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0xb759, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb75a, .a=0xdd, .x=0xb3, .y=0x34, .sp=0xd0, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xb7}, {.addr=0xb759, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb759, .value=0x0d, .type=IO_READ},
        {.addr=0xb75a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0181) {
    const struct CPU_State initial_cpu = {.pc=0xfa13, .a=0x6f, .x=0x59, .y=0x44, .sp=0xaa, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0xfa13, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfa14, .a=0x6f, .x=0x59, .y=0x44, .sp=0xa9, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x42}, {.addr=0xfa13, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfa13, .value=0x0d, .type=IO_READ},
        {.addr=0xfa14, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0182) {
    const struct CPU_State initial_cpu = {.pc=0x02eb, .a=0xd6, .x=0x2a, .y=0x87, .sp=0x1f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0x02eb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x02ec, .a=0xd6, .x=0x2a, .y=0x87, .sp=0x1e, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x4a}, {.addr=0x02eb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x02eb, .value=0x0d, .type=IO_READ},
        {.addr=0x02ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0183) {
    const struct CPU_State initial_cpu = {.pc=0xf5c0, .a=0x16, .x=0x9c, .y=0x9b, .sp=0x3d, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0xf5c0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf5c1, .a=0x16, .x=0x9c, .y=0x9b, .sp=0x3c, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xfe}, {.addr=0xf5c0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf5c0, .value=0x0d, .type=IO_READ},
        {.addr=0xf5c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0184) {
    const struct CPU_State initial_cpu = {.pc=0x0ab4, .a=0x6f, .x=0xa7, .y=0xb8, .sp=0x7b, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0x0ab4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0ab5, .a=0x6f, .x=0xa7, .y=0xb8, .sp=0x7a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xcc}, {.addr=0x0ab4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0ab4, .value=0x0d, .type=IO_READ},
        {.addr=0x0ab5, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0185) {
    const struct CPU_State initial_cpu = {.pc=0xb92b, .a=0x4b, .x=0xaf, .y=0x7d, .sp=0x85, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0xb92b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb92c, .a=0x4b, .x=0xaf, .y=0x7d, .sp=0x84, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xb2}, {.addr=0xb92b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb92b, .value=0x0d, .type=IO_READ},
        {.addr=0xb92c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0186) {
    const struct CPU_State initial_cpu = {.pc=0xb041, .a=0x13, .x=0x21, .y=0xc7, .sp=0x1f, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0xb041, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb042, .a=0x13, .x=0x21, .y=0xc7, .sp=0x1e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xa0}, {.addr=0xb041, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb041, .value=0x0d, .type=IO_READ},
        {.addr=0xb042, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0187) {
    const struct CPU_State initial_cpu = {.pc=0xc75c, .a=0x32, .x=0x52, .y=0x86, .sp=0x32, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0xc75c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc75d, .a=0x32, .x=0x52, .y=0x86, .sp=0x31, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x3a}, {.addr=0xc75c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc75c, .value=0x0d, .type=IO_READ},
        {.addr=0xc75d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x3a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0188) {
    const struct CPU_State initial_cpu = {.pc=0x4e70, .a=0x90, .x=0xde, .y=0xac, .sp=0x8c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x4e70, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4e71, .a=0x90, .x=0xde, .y=0xac, .sp=0x8b, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xe2}, {.addr=0x4e70, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4e70, .value=0x0d, .type=IO_READ},
        {.addr=0x4e71, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0189) {
    const struct CPU_State initial_cpu = {.pc=0x844d, .a=0x31, .x=0xb9, .y=0xde, .sp=0xaf, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x844d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x844e, .a=0x31, .x=0xb9, .y=0xde, .sp=0xae, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x1b}, {.addr=0x844d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x844d, .value=0x0d, .type=IO_READ},
        {.addr=0x844e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_018A) {
    const struct CPU_State initial_cpu = {.pc=0x7e6c, .a=0x78, .x=0x56, .y=0x08, .sp=0x90, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x00}, {.addr=0x7e6c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7e6d, .a=0x78, .x=0x56, .y=0x08, .sp=0x8f, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x7b}, {.addr=0x7e6c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7e6c, .value=0x0d, .type=IO_READ},
        {.addr=0x7e6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_018B) {
    const struct CPU_State initial_cpu = {.pc=0xa152, .a=0xee, .x=0xa6, .y=0x18, .sp=0x9e, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0xa152, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa153, .a=0xee, .x=0xa6, .y=0x18, .sp=0x9d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xd1}, {.addr=0xa152, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa152, .value=0x0d, .type=IO_READ},
        {.addr=0xa153, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_018C) {
    const struct CPU_State initial_cpu = {.pc=0x1f6b, .a=0x61, .x=0x9d, .y=0x06, .sp=0x8c, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x1f6b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1f6c, .a=0x61, .x=0x9d, .y=0x06, .sp=0x8b, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xf6}, {.addr=0x1f6b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1f6b, .value=0x0d, .type=IO_READ},
        {.addr=0x1f6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_018D) {
    const struct CPU_State initial_cpu = {.pc=0x8a84, .a=0x86, .x=0xc3, .y=0x2b, .sp=0x81, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0x8a84, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8a85, .a=0x86, .x=0xc3, .y=0x2b, .sp=0x80, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x13}, {.addr=0x8a84, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8a84, .value=0x0d, .type=IO_READ},
        {.addr=0x8a85, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_018E) {
    const struct CPU_State initial_cpu = {.pc=0xf3a7, .a=0xe7, .x=0xa6, .y=0xa4, .sp=0x3a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0xf3a7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf3a8, .a=0xe7, .x=0xa6, .y=0xa4, .sp=0x39, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x26}, {.addr=0xf3a7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf3a7, .value=0x0d, .type=IO_READ},
        {.addr=0xf3a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_018F) {
    const struct CPU_State initial_cpu = {.pc=0x663a, .a=0xfb, .x=0x4e, .y=0xb6, .sp=0xe3, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x663a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x663b, .a=0xfb, .x=0x4e, .y=0xb6, .sp=0xe2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xb5}, {.addr=0x663a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x663a, .value=0x0d, .type=IO_READ},
        {.addr=0x663b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0190) {
    const struct CPU_State initial_cpu = {.pc=0xce0f, .a=0xa0, .x=0xf8, .y=0x21, .sp=0xdd, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x00}, {.addr=0xce0f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xce10, .a=0xa0, .x=0xf8, .y=0x21, .sp=0xdc, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xd8}, {.addr=0xce0f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xce0f, .value=0x0d, .type=IO_READ},
        {.addr=0xce10, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0191) {
    const struct CPU_State initial_cpu = {.pc=0x9658, .a=0xd4, .x=0x4f, .y=0x24, .sp=0xcf, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0x9658, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9659, .a=0xd4, .x=0x4f, .y=0x24, .sp=0xce, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x66}, {.addr=0x9658, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9658, .value=0x0d, .type=IO_READ},
        {.addr=0x9659, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0192) {
    const struct CPU_State initial_cpu = {.pc=0x7509, .a=0xfc, .x=0x73, .y=0x26, .sp=0xf8, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x7509, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x750a, .a=0xfc, .x=0x73, .y=0x26, .sp=0xf7, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xc5}, {.addr=0x7509, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7509, .value=0x0d, .type=IO_READ},
        {.addr=0x750a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0193) {
    const struct CPU_State initial_cpu = {.pc=0x0e43, .a=0xb7, .x=0xb5, .y=0xb6, .sp=0xb8, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x0e43, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0e44, .a=0xb7, .x=0xb5, .y=0xb6, .sp=0xb7, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xbd}, {.addr=0x0e43, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0e43, .value=0x0d, .type=IO_READ},
        {.addr=0x0e44, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0194) {
    const struct CPU_State initial_cpu = {.pc=0xe362, .a=0xde, .x=0xc3, .y=0xc7, .sp=0x1e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x00}, {.addr=0xe362, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe363, .a=0xde, .x=0xc3, .y=0xc7, .sp=0x1d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x8c}, {.addr=0xe362, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe362, .value=0x0d, .type=IO_READ},
        {.addr=0xe363, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x8c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0195) {
    const struct CPU_State initial_cpu = {.pc=0x3458, .a=0x0a, .x=0xd8, .y=0x28, .sp=0xd1, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x3458, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3459, .a=0x0a, .x=0xd8, .y=0x28, .sp=0xd0, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x36}, {.addr=0x3458, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3458, .value=0x0d, .type=IO_READ},
        {.addr=0x3459, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0196) {
    const struct CPU_State initial_cpu = {.pc=0x8638, .a=0xb2, .x=0x24, .y=0x09, .sp=0x91, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0x8638, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8639, .a=0xb2, .x=0x24, .y=0x09, .sp=0x90, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xb7}, {.addr=0x8638, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8638, .value=0x0d, .type=IO_READ},
        {.addr=0x8639, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0197) {
    const struct CPU_State initial_cpu = {.pc=0x5964, .a=0x6f, .x=0x0b, .y=0xea, .sp=0xb3, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x5964, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5965, .a=0x6f, .x=0x0b, .y=0xea, .sp=0xb2, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xa4}, {.addr=0x5964, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5964, .value=0x0d, .type=IO_READ},
        {.addr=0x5965, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0198) {
    const struct CPU_State initial_cpu = {.pc=0x9ef5, .a=0x53, .x=0xcc, .y=0x6c, .sp=0xcd, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0x9ef5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9ef6, .a=0x53, .x=0xcc, .y=0x6c, .sp=0xcc, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x85}, {.addr=0x9ef5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9ef5, .value=0x0d, .type=IO_READ},
        {.addr=0x9ef6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0199) {
    const struct CPU_State initial_cpu = {.pc=0xf70c, .a=0xd4, .x=0x21, .y=0x2c, .sp=0xf3, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0xf70c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf70d, .a=0xd4, .x=0x21, .y=0x2c, .sp=0xf2, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x0c}, {.addr=0xf70c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf70c, .value=0x0d, .type=IO_READ},
        {.addr=0xf70d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_019A) {
    const struct CPU_State initial_cpu = {.pc=0x2b2e, .a=0x85, .x=0xb4, .y=0xd6, .sp=0x82, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x2b2e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2b2f, .a=0x85, .x=0xb4, .y=0xd6, .sp=0x81, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x86}, {.addr=0x2b2e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2b2e, .value=0x0d, .type=IO_READ},
        {.addr=0x2b2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_019B) {
    const struct CPU_State initial_cpu = {.pc=0x9f39, .a=0x07, .x=0x02, .y=0xf4, .sp=0x84, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0x9f39, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9f3a, .a=0x07, .x=0x02, .y=0xf4, .sp=0x83, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x38}, {.addr=0x9f39, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9f39, .value=0x0d, .type=IO_READ},
        {.addr=0x9f3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x38, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_019C) {
    const struct CPU_State initial_cpu = {.pc=0x63de, .a=0xe5, .x=0x00, .y=0xa8, .sp=0xe4, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x63de, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x63df, .a=0xe5, .x=0x00, .y=0xa8, .sp=0xe3, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xe3}, {.addr=0x63de, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x63de, .value=0x0d, .type=IO_READ},
        {.addr=0x63df, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_019D) {
    const struct CPU_State initial_cpu = {.pc=0x16dc, .a=0x1e, .x=0x6d, .y=0x70, .sp=0x6f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x16dc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x16dd, .a=0x1e, .x=0x6d, .y=0x70, .sp=0x6e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x48}, {.addr=0x16dc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x16dc, .value=0x0d, .type=IO_READ},
        {.addr=0x16dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_019E) {
    const struct CPU_State initial_cpu = {.pc=0x8b5c, .a=0xf9, .x=0x30, .y=0x46, .sp=0xd5, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x00}, {.addr=0x8b5c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8b5d, .a=0xf9, .x=0x30, .y=0x46, .sp=0xd4, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xda}, {.addr=0x8b5c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8b5c, .value=0x0d, .type=IO_READ},
        {.addr=0x8b5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_019F) {
    const struct CPU_State initial_cpu = {.pc=0xfd2e, .a=0xa0, .x=0x35, .y=0x8d, .sp=0x67, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xfd2e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfd2f, .a=0xa0, .x=0x35, .y=0x8d, .sp=0x66, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xf9}, {.addr=0xfd2e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfd2e, .value=0x0d, .type=IO_READ},
        {.addr=0xfd2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x8ee0, .a=0xe3, .x=0x61, .y=0xad, .sp=0xd8, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0x8ee0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8ee1, .a=0xe3, .x=0x61, .y=0xad, .sp=0xd7, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x65}, {.addr=0x8ee0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8ee0, .value=0x0d, .type=IO_READ},
        {.addr=0x8ee1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xb09c, .a=0x89, .x=0xdc, .y=0x74, .sp=0x26, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0xb09c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb09d, .a=0x89, .x=0xdc, .y=0x74, .sp=0x25, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x38}, {.addr=0xb09c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb09c, .value=0x0d, .type=IO_READ},
        {.addr=0xb09d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x38, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xfaf0, .a=0xe3, .x=0x82, .y=0xb6, .sp=0x14, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0xfaf0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfaf1, .a=0xe3, .x=0x82, .y=0xb6, .sp=0x13, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x5c}, {.addr=0xfaf0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfaf0, .value=0x0d, .type=IO_READ},
        {.addr=0xfaf1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x3787, .a=0x29, .x=0xee, .y=0xc4, .sp=0x71, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0x3787, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3788, .a=0x29, .x=0xee, .y=0xc4, .sp=0x70, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x48}, {.addr=0x3787, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3787, .value=0x0d, .type=IO_READ},
        {.addr=0x3788, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xc9aa, .a=0x71, .x=0x36, .y=0x73, .sp=0x46, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xc9aa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc9ab, .a=0x71, .x=0x36, .y=0x73, .sp=0x45, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x64}, {.addr=0xc9aa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc9aa, .value=0x0d, .type=IO_READ},
        {.addr=0xc9ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x6e58, .a=0xbf, .x=0xf5, .y=0x50, .sp=0xb0, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x6e58, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6e59, .a=0xbf, .x=0xf5, .y=0x50, .sp=0xaf, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x68}, {.addr=0x6e58, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6e58, .value=0x0d, .type=IO_READ},
        {.addr=0x6e59, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xfbd2, .a=0xcd, .x=0xed, .y=0x21, .sp=0x68, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0xfbd2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfbd3, .a=0xcd, .x=0xed, .y=0x21, .sp=0x67, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x60}, {.addr=0xfbd2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfbd2, .value=0x0d, .type=IO_READ},
        {.addr=0xfbd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x0aeb, .a=0x4f, .x=0xc9, .y=0xf6, .sp=0x1b, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x0aeb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0aec, .a=0x4f, .x=0xc9, .y=0xf6, .sp=0x1a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x36}, {.addr=0x0aeb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0aeb, .value=0x0d, .type=IO_READ},
        {.addr=0x0aec, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x86a2, .a=0xf5, .x=0x51, .y=0xf2, .sp=0x26, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x86a2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x86a3, .a=0xf5, .x=0x51, .y=0xf2, .sp=0x25, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x9c}, {.addr=0x86a2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x86a2, .value=0x0d, .type=IO_READ},
        {.addr=0x86a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x8caa, .a=0x63, .x=0x4d, .y=0xdd, .sp=0xc2, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x8caa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8cab, .a=0x63, .x=0x4d, .y=0xdd, .sp=0xc1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x6d}, {.addr=0x8caa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8caa, .value=0x0d, .type=IO_READ},
        {.addr=0x8cab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x1b4f, .a=0xf9, .x=0x11, .y=0xe2, .sp=0x3d, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0x1b4f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1b50, .a=0xf9, .x=0x11, .y=0xe2, .sp=0x3c, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xff}, {.addr=0x1b4f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1b4f, .value=0x0d, .type=IO_READ},
        {.addr=0x1b50, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x0aeb, .a=0x7e, .x=0x8e, .y=0x2b, .sp=0xe5, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0x0aeb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0aec, .a=0x7e, .x=0x8e, .y=0x2b, .sp=0xe4, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x6f}, {.addr=0x0aeb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0aeb, .value=0x0d, .type=IO_READ},
        {.addr=0x0aec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xf6f4, .a=0x38, .x=0x00, .y=0x21, .sp=0x9a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0xf6f4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf6f5, .a=0x38, .x=0x00, .y=0x21, .sp=0x99, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x37}, {.addr=0xf6f4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf6f4, .value=0x0d, .type=IO_READ},
        {.addr=0xf6f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xe682, .a=0x3d, .x=0x04, .y=0xaa, .sp=0x53, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xe682, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe683, .a=0x3d, .x=0x04, .y=0xaa, .sp=0x52, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x96}, {.addr=0xe682, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe682, .value=0x0d, .type=IO_READ},
        {.addr=0xe683, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x1d4e, .a=0x35, .x=0x32, .y=0x8b, .sp=0xbe, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0x1d4e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1d4f, .a=0x35, .x=0x32, .y=0x8b, .sp=0xbd, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xae}, {.addr=0x1d4e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1d4e, .value=0x0d, .type=IO_READ},
        {.addr=0x1d4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xa72c, .a=0xfe, .x=0x3e, .y=0x37, .sp=0xb8, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xa72c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa72d, .a=0xfe, .x=0x3e, .y=0x37, .sp=0xb7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x1d}, {.addr=0xa72c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa72c, .value=0x0d, .type=IO_READ},
        {.addr=0xa72d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x0679, .a=0x21, .x=0x08, .y=0x43, .sp=0xfd, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x0679, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x067a, .a=0x21, .x=0x08, .y=0x43, .sp=0xfc, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x9d}, {.addr=0x0679, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0679, .value=0x0d, .type=IO_READ},
        {.addr=0x067a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xc7b3, .a=0x67, .x=0x27, .y=0xe2, .sp=0x39, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0xc7b3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc7b4, .a=0x67, .x=0x27, .y=0xe2, .sp=0x38, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x72}, {.addr=0xc7b3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc7b3, .value=0x0d, .type=IO_READ},
        {.addr=0xc7b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x72, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x86c3, .a=0x69, .x=0x6a, .y=0xb2, .sp=0xa5, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x86c3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x86c4, .a=0x69, .x=0x6a, .y=0xb2, .sp=0xa4, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xae}, {.addr=0x86c3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x86c3, .value=0x0d, .type=IO_READ},
        {.addr=0x86c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x513d, .a=0x19, .x=0x97, .y=0xed, .sp=0x30, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0x513d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x513e, .a=0x19, .x=0x97, .y=0xed, .sp=0x2f, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xeb}, {.addr=0x513d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x513d, .value=0x0d, .type=IO_READ},
        {.addr=0x513e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x920c, .a=0xf8, .x=0xc9, .y=0x90, .sp=0xe4, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x920c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x920d, .a=0xf8, .x=0xc9, .y=0x90, .sp=0xe3, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xd3}, {.addr=0x920c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x920c, .value=0x0d, .type=IO_READ},
        {.addr=0x920d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x25ea, .a=0x03, .x=0x5e, .y=0x15, .sp=0xe6, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x25ea, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x25eb, .a=0x03, .x=0x5e, .y=0x15, .sp=0xe5, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xd7}, {.addr=0x25ea, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x25ea, .value=0x0d, .type=IO_READ},
        {.addr=0x25eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xd7e8, .a=0x9e, .x=0xdf, .y=0x50, .sp=0xbe, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0xd7e8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd7e9, .a=0x9e, .x=0xdf, .y=0x50, .sp=0xbd, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x7e}, {.addr=0xd7e8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd7e8, .value=0x0d, .type=IO_READ},
        {.addr=0xd7e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xbd46, .a=0x64, .x=0xec, .y=0x9e, .sp=0xb8, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xbd46, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbd47, .a=0x64, .x=0xec, .y=0x9e, .sp=0xb7, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x02}, {.addr=0xbd46, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbd46, .value=0x0d, .type=IO_READ},
        {.addr=0xbd47, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xaad1, .a=0x8c, .x=0x9f, .y=0x7c, .sp=0x4a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0xaad1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xaad2, .a=0x8c, .x=0x9f, .y=0x7c, .sp=0x49, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x48}, {.addr=0xaad1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xaad1, .value=0x0d, .type=IO_READ},
        {.addr=0xaad2, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xb25f, .a=0xd4, .x=0x7e, .y=0x4f, .sp=0x42, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0xb25f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb260, .a=0xd4, .x=0x7e, .y=0x4f, .sp=0x41, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x86}, {.addr=0xb25f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb25f, .value=0x0d, .type=IO_READ},
        {.addr=0xb260, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x6593, .a=0x0e, .x=0xc7, .y=0xea, .sp=0xec, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0x6593, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6594, .a=0x0e, .x=0xc7, .y=0xea, .sp=0xeb, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x6a}, {.addr=0x6593, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6593, .value=0x0d, .type=IO_READ},
        {.addr=0x6594, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x984e, .a=0x95, .x=0x6c, .y=0xec, .sp=0x43, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x984e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x984f, .a=0x95, .x=0x6c, .y=0xec, .sp=0x42, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xa1}, {.addr=0x984e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x984e, .value=0x0d, .type=IO_READ},
        {.addr=0x984f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xede3, .a=0xdd, .x=0xa2, .y=0xfe, .sp=0x4d, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0xede3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xede4, .a=0xdd, .x=0xa2, .y=0xfe, .sp=0x4c, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xde}, {.addr=0xede3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xede3, .value=0x0d, .type=IO_READ},
        {.addr=0xede4, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x80f6, .a=0xba, .x=0x55, .y=0xcf, .sp=0xb1, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x80f6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x80f7, .a=0xba, .x=0x55, .y=0xcf, .sp=0xb0, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xb8}, {.addr=0x80f6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x80f6, .value=0x0d, .type=IO_READ},
        {.addr=0x80f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x6011, .a=0xaf, .x=0xda, .y=0x7c, .sp=0xd7, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0x6011, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6012, .a=0xaf, .x=0xda, .y=0x7c, .sp=0xd6, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xb2}, {.addr=0x6011, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6011, .value=0x0d, .type=IO_READ},
        {.addr=0x6012, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x509f, .a=0xe0, .x=0xd1, .y=0x2c, .sp=0xf7, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0x509f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x50a0, .a=0xe0, .x=0xd1, .y=0x2c, .sp=0xf6, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xaf}, {.addr=0x509f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x509f, .value=0x0d, .type=IO_READ},
        {.addr=0x50a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xb57c, .a=0x23, .x=0x4d, .y=0x2c, .sp=0xae, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0xb57c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb57d, .a=0x23, .x=0x4d, .y=0x2c, .sp=0xad, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x10}, {.addr=0xb57c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb57c, .value=0x0d, .type=IO_READ},
        {.addr=0xb57d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x5dc6, .a=0x2a, .x=0x06, .y=0x3c, .sp=0x4c, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0x5dc6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5dc7, .a=0x2a, .x=0x06, .y=0x3c, .sp=0x4b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x5c}, {.addr=0x5dc6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5dc6, .value=0x0d, .type=IO_READ},
        {.addr=0x5dc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x13d7, .a=0x7d, .x=0x31, .y=0x67, .sp=0x75, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x13d7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x13d8, .a=0x7d, .x=0x31, .y=0x67, .sp=0x74, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xd6}, {.addr=0x13d7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x13d7, .value=0x0d, .type=IO_READ},
        {.addr=0x13d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x24b9, .a=0x98, .x=0x14, .y=0xd8, .sp=0xae, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0x24b9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x24ba, .a=0x98, .x=0x14, .y=0xd8, .sp=0xad, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x77}, {.addr=0x24b9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x24b9, .value=0x0d, .type=IO_READ},
        {.addr=0x24ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x3f37, .a=0x5d, .x=0x2d, .y=0x67, .sp=0xde, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x3f37, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3f38, .a=0x5d, .x=0x2d, .y=0x67, .sp=0xdd, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xf6}, {.addr=0x3f37, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3f37, .value=0x0d, .type=IO_READ},
        {.addr=0x3f38, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x361c, .a=0xfd, .x=0xa0, .y=0x7a, .sp=0x05, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x361c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x361d, .a=0xfd, .x=0xa0, .y=0x7a, .sp=0x04, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xa3}, {.addr=0x361c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x361c, .value=0x0d, .type=IO_READ},
        {.addr=0x361d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xf325, .a=0xa9, .x=0x5b, .y=0xbe, .sp=0xe9, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0xf325, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf326, .a=0xa9, .x=0x5b, .y=0xbe, .sp=0xe8, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x70}, {.addr=0xf325, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf325, .value=0x0d, .type=IO_READ},
        {.addr=0xf326, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x8194, .a=0x5e, .x=0x95, .y=0xb3, .sp=0x9c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0x8194, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8195, .a=0x5e, .x=0x95, .y=0xb3, .sp=0x9b, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xe2}, {.addr=0x8194, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8194, .value=0x0d, .type=IO_READ},
        {.addr=0x8195, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x1a59, .a=0xa0, .x=0xc8, .y=0x4c, .sp=0xc3, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x1a59, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1a5a, .a=0xa0, .x=0xc8, .y=0x4c, .sp=0xc2, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xc8}, {.addr=0x1a59, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1a59, .value=0x0d, .type=IO_READ},
        {.addr=0x1a5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x764d, .a=0x0e, .x=0x29, .y=0x09, .sp=0xd4, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x764d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x764e, .a=0x0e, .x=0x29, .y=0x09, .sp=0xd3, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xaa}, {.addr=0x764d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x764d, .value=0x0d, .type=IO_READ},
        {.addr=0x764e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x2b40, .a=0x74, .x=0x9c, .y=0x60, .sp=0xe0, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x2b40, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2b41, .a=0x74, .x=0x9c, .y=0x60, .sp=0xdf, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x6c}, {.addr=0x2b40, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2b40, .value=0x0d, .type=IO_READ},
        {.addr=0x2b41, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xfb22, .a=0x1f, .x=0xf3, .y=0xe1, .sp=0xc5, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0xfb22, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfb23, .a=0x1f, .x=0xf3, .y=0xe1, .sp=0xc4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x2d}, {.addr=0xfb22, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfb22, .value=0x0d, .type=IO_READ},
        {.addr=0xfb23, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x1819, .a=0xea, .x=0x98, .y=0x1b, .sp=0x89, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x1819, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x181a, .a=0xea, .x=0x98, .y=0x1b, .sp=0x88, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xae}, {.addr=0x1819, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1819, .value=0x0d, .type=IO_READ},
        {.addr=0x181a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x3c50, .a=0x36, .x=0xf1, .y=0xf9, .sp=0xd7, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0x3c50, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3c51, .a=0x36, .x=0xf1, .y=0xf9, .sp=0xd6, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xd3}, {.addr=0x3c50, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3c50, .value=0x0d, .type=IO_READ},
        {.addr=0x3c51, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x72d9, .a=0x16, .x=0xf9, .y=0x93, .sp=0xb6, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0x72d9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x72da, .a=0x16, .x=0xf9, .y=0x93, .sp=0xb5, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x22}, {.addr=0x72d9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x72d9, .value=0x0d, .type=IO_READ},
        {.addr=0x72da, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x22, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x2f8a, .a=0xb9, .x=0xba, .y=0xb6, .sp=0x45, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x2f8a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2f8b, .a=0xb9, .x=0xba, .y=0xb6, .sp=0x44, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x80}, {.addr=0x2f8a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2f8a, .value=0x0d, .type=IO_READ},
        {.addr=0x2f8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x80, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x4ef4, .a=0xc9, .x=0x2d, .y=0xe8, .sp=0xbf, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0x4ef4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4ef5, .a=0xc9, .x=0x2d, .y=0xe8, .sp=0xbe, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xc6}, {.addr=0x4ef4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4ef4, .value=0x0d, .type=IO_READ},
        {.addr=0x4ef5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xac95, .a=0xed, .x=0xf5, .y=0xfa, .sp=0x0f, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0xac95, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xac96, .a=0xed, .x=0xf5, .y=0xfa, .sp=0x0e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x4c}, {.addr=0xac95, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xac95, .value=0x0d, .type=IO_READ},
        {.addr=0xac96, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x28ae, .a=0xde, .x=0x66, .y=0x14, .sp=0x7f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x28ae, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x28af, .a=0xde, .x=0x66, .y=0x14, .sp=0x7e, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x2b}, {.addr=0x28ae, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x28ae, .value=0x0d, .type=IO_READ},
        {.addr=0x28af, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xb5c4, .a=0xa3, .x=0x58, .y=0x13, .sp=0xc0, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0xb5c4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb5c5, .a=0xa3, .x=0x58, .y=0x13, .sp=0xbf, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x21}, {.addr=0xb5c4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb5c4, .value=0x0d, .type=IO_READ},
        {.addr=0xb5c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xd509, .a=0xdc, .x=0x4e, .y=0x47, .sp=0x3f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0xd509, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd50a, .a=0xdc, .x=0x4e, .y=0x47, .sp=0x3e, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x97}, {.addr=0xd509, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd509, .value=0x0d, .type=IO_READ},
        {.addr=0xd50a, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x999a, .a=0x28, .x=0x32, .y=0x33, .sp=0xa6, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0x999a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x999b, .a=0x28, .x=0x32, .y=0x33, .sp=0xa5, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0xac}, {.addr=0x999a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x999a, .value=0x0d, .type=IO_READ},
        {.addr=0x999b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x8b0e, .a=0xc4, .x=0x76, .y=0x18, .sp=0x41, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x8b0e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8b0f, .a=0xc4, .x=0x76, .y=0x18, .sp=0x40, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xe9}, {.addr=0x8b0e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8b0e, .value=0x0d, .type=IO_READ},
        {.addr=0x8b0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xd86d, .a=0xfb, .x=0x1d, .y=0xc5, .sp=0x07, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0xd86d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd86e, .a=0xfb, .x=0x1d, .y=0xc5, .sp=0x06, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xb9}, {.addr=0xd86d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd86d, .value=0x0d, .type=IO_READ},
        {.addr=0xd86e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xb8d7, .a=0x8f, .x=0x7a, .y=0x28, .sp=0x98, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0xb8d7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb8d8, .a=0x8f, .x=0x7a, .y=0x28, .sp=0x97, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x82}, {.addr=0xb8d7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb8d7, .value=0x0d, .type=IO_READ},
        {.addr=0xb8d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x82, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x3e25, .a=0xc0, .x=0xd7, .y=0x91, .sp=0xeb, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x3e25, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3e26, .a=0xc0, .x=0xd7, .y=0x91, .sp=0xea, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x69}, {.addr=0x3e25, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3e25, .value=0x0d, .type=IO_READ},
        {.addr=0x3e26, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x7e73, .a=0x2f, .x=0xa4, .y=0x03, .sp=0xa3, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0x7e73, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7e74, .a=0x2f, .x=0xa4, .y=0x03, .sp=0xa2, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x05}, {.addr=0x7e73, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7e73, .value=0x0d, .type=IO_READ},
        {.addr=0x7e74, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x3871, .a=0xc3, .x=0x8e, .y=0x52, .sp=0x17, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0x3871, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3872, .a=0xc3, .x=0x8e, .y=0x52, .sp=0x16, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x55}, {.addr=0x3871, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3871, .value=0x0d, .type=IO_READ},
        {.addr=0x3872, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xc2fa, .a=0x51, .x=0xf3, .y=0x64, .sp=0x04, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xc2fa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc2fb, .a=0x51, .x=0xf3, .y=0x64, .sp=0x03, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xa9}, {.addr=0xc2fa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc2fa, .value=0x0d, .type=IO_READ},
        {.addr=0xc2fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x672d, .a=0xee, .x=0xcb, .y=0x52, .sp=0xc4, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x672d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x672e, .a=0xee, .x=0xcb, .y=0x52, .sp=0xc3, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x4b}, {.addr=0x672d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x672d, .value=0x0d, .type=IO_READ},
        {.addr=0x672e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xb7fe, .a=0x68, .x=0xb6, .y=0x70, .sp=0x53, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xb7fe, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb7ff, .a=0x68, .x=0xb6, .y=0x70, .sp=0x52, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xc6}, {.addr=0xb7fe, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb7fe, .value=0x0d, .type=IO_READ},
        {.addr=0xb7ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xa89a, .a=0x55, .x=0x66, .y=0x1e, .sp=0x19, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0xa89a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa89b, .a=0x55, .x=0x66, .y=0x1e, .sp=0x18, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xe0}, {.addr=0xa89a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa89a, .value=0x0d, .type=IO_READ},
        {.addr=0xa89b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xc650, .a=0xc2, .x=0x08, .y=0xe9, .sp=0xd8, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0xc650, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc651, .a=0xc2, .x=0x08, .y=0xe9, .sp=0xd7, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x78}, {.addr=0xc650, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc650, .value=0x0d, .type=IO_READ},
        {.addr=0xc651, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x78, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x4acd, .a=0x8a, .x=0x05, .y=0xf2, .sp=0x57, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x4acd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4ace, .a=0x8a, .x=0x05, .y=0xf2, .sp=0x56, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x02}, {.addr=0x4acd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4acd, .value=0x0d, .type=IO_READ},
        {.addr=0x4ace, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x80e5, .a=0x78, .x=0xba, .y=0x1f, .sp=0x2f, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x80e5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x80e6, .a=0x78, .x=0xba, .y=0x1f, .sp=0x2e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x0d}, {.addr=0x80e5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x80e5, .value=0x0d, .type=IO_READ},
        {.addr=0x80e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xd52f, .a=0xd9, .x=0x5b, .y=0xeb, .sp=0x0a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0xd52f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd530, .a=0xd9, .x=0x5b, .y=0xeb, .sp=0x09, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x5d}, {.addr=0xd52f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd52f, .value=0x0d, .type=IO_READ},
        {.addr=0xd530, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xcce4, .a=0xe7, .x=0x31, .y=0xb5, .sp=0xfc, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xcce4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcce5, .a=0xe7, .x=0x31, .y=0xb5, .sp=0xfb, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x91}, {.addr=0xcce4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcce4, .value=0x0d, .type=IO_READ},
        {.addr=0xcce5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xcf28, .a=0xaa, .x=0x6f, .y=0x11, .sp=0xc9, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0xcf28, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcf29, .a=0xaa, .x=0x6f, .y=0x11, .sp=0xc8, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x3a}, {.addr=0xcf28, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcf28, .value=0x0d, .type=IO_READ},
        {.addr=0xcf29, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x3a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x2fa1, .a=0xb7, .x=0x00, .y=0x5b, .sp=0x26, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x2fa1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2fa2, .a=0xb7, .x=0x00, .y=0x5b, .sp=0x25, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x13}, {.addr=0x2fa1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2fa1, .value=0x0d, .type=IO_READ},
        {.addr=0x2fa2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xcf50, .a=0x9a, .x=0xf4, .y=0xf8, .sp=0xa8, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0xcf50, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcf51, .a=0x9a, .x=0xf4, .y=0xf8, .sp=0xa7, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xc2}, {.addr=0xcf50, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcf50, .value=0x0d, .type=IO_READ},
        {.addr=0xcf51, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xb3cd, .a=0xe1, .x=0xc4, .y=0xb5, .sp=0x2b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0xb3cd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb3ce, .a=0xe1, .x=0xc4, .y=0xb5, .sp=0x2a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xb8}, {.addr=0xb3cd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb3cd, .value=0x0d, .type=IO_READ},
        {.addr=0xb3ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xcc5d, .a=0x36, .x=0x00, .y=0xf0, .sp=0xa7, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0xcc5d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcc5e, .a=0x36, .x=0x00, .y=0xf0, .sp=0xa6, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x8b}, {.addr=0xcc5d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcc5d, .value=0x0d, .type=IO_READ},
        {.addr=0xcc5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x9e27, .a=0x98, .x=0x4e, .y=0xc6, .sp=0x43, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x9e27, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9e28, .a=0x98, .x=0x4e, .y=0xc6, .sp=0x42, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x3e}, {.addr=0x9e27, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9e27, .value=0x0d, .type=IO_READ},
        {.addr=0x9e28, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x8c42, .a=0x7e, .x=0x4c, .y=0x38, .sp=0x5c, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0x8c42, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8c43, .a=0x7e, .x=0x4c, .y=0x38, .sp=0x5b, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xd7}, {.addr=0x8c42, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8c42, .value=0x0d, .type=IO_READ},
        {.addr=0x8c43, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x05a4, .a=0xaf, .x=0x9e, .y=0xf5, .sp=0xf6, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x00}, {.addr=0x05a4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x05a5, .a=0xaf, .x=0x9e, .y=0xf5, .sp=0xf5, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xb2}, {.addr=0x05a4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x05a4, .value=0x0d, .type=IO_READ},
        {.addr=0x05a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xc4e3, .a=0xaa, .x=0x97, .y=0xbd, .sp=0xbc, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0xc4e3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc4e4, .a=0xaa, .x=0x97, .y=0xbd, .sp=0xbb, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x3f}, {.addr=0xc4e3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc4e3, .value=0x0d, .type=IO_READ},
        {.addr=0xc4e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x28c1, .a=0x83, .x=0x3c, .y=0x2b, .sp=0xee, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x28c1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x28c2, .a=0x83, .x=0x3c, .y=0x2b, .sp=0xed, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x68}, {.addr=0x28c1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x28c1, .value=0x0d, .type=IO_READ},
        {.addr=0x28c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xf114, .a=0xcf, .x=0x4c, .y=0xbe, .sp=0x8c, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0xf114, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf115, .a=0xcf, .x=0x4c, .y=0xbe, .sp=0x8b, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xfe}, {.addr=0xf114, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf114, .value=0x0d, .type=IO_READ},
        {.addr=0xf115, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xc4a2, .a=0x4d, .x=0x91, .y=0xe5, .sp=0x73, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0xc4a2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc4a3, .a=0x4d, .x=0x91, .y=0xe5, .sp=0x72, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x98}, {.addr=0xc4a2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc4a2, .value=0x0d, .type=IO_READ},
        {.addr=0xc4a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xa952, .a=0x51, .x=0x88, .y=0xbe, .sp=0x1f, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0xa952, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa953, .a=0x51, .x=0x88, .y=0xbe, .sp=0x1e, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x7b}, {.addr=0xa952, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa952, .value=0x0d, .type=IO_READ},
        {.addr=0xa953, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x4d94, .a=0xe1, .x=0x1a, .y=0xde, .sp=0xe1, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0x4d94, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4d95, .a=0xe1, .x=0x1a, .y=0xde, .sp=0xe0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x88}, {.addr=0x4d94, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4d94, .value=0x0d, .type=IO_READ},
        {.addr=0x4d95, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xf4d5, .a=0x30, .x=0x14, .y=0x6b, .sp=0x79, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0xf4d5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf4d6, .a=0x30, .x=0x14, .y=0x6b, .sp=0x78, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x1a}, {.addr=0xf4d5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf4d5, .value=0x0d, .type=IO_READ},
        {.addr=0xf4d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xedfd, .a=0x7d, .x=0x32, .y=0x43, .sp=0xec, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0xedfd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xedfe, .a=0x7d, .x=0x32, .y=0x43, .sp=0xeb, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x56}, {.addr=0xedfd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xedfd, .value=0x0d, .type=IO_READ},
        {.addr=0xedfe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x0a74, .a=0x9f, .x=0x8f, .y=0x99, .sp=0x8e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x0a74, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0a75, .a=0x9f, .x=0x8f, .y=0x99, .sp=0x8d, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x4c}, {.addr=0x0a74, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0a74, .value=0x0d, .type=IO_READ},
        {.addr=0x0a75, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xe802, .a=0x2b, .x=0x45, .y=0x65, .sp=0x48, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0xe802, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe803, .a=0x2b, .x=0x45, .y=0x65, .sp=0x47, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xa6}, {.addr=0xe802, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe802, .value=0x0d, .type=IO_READ},
        {.addr=0xe803, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0xa6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xa35a, .a=0xde, .x=0x4f, .y=0x20, .sp=0x11, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0xa35a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa35b, .a=0xde, .x=0x4f, .y=0x20, .sp=0x10, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x3e}, {.addr=0xa35a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa35a, .value=0x0d, .type=IO_READ},
        {.addr=0xa35b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x2460, .a=0xd1, .x=0x10, .y=0x7d, .sp=0x8c, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x2460, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2461, .a=0xd1, .x=0x10, .y=0x7d, .sp=0x8b, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x12}, {.addr=0x2460, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2460, .value=0x0d, .type=IO_READ},
        {.addr=0x2461, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xabff, .a=0xfd, .x=0x93, .y=0x83, .sp=0xeb, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0xabff, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xac00, .a=0xfd, .x=0x93, .y=0x83, .sp=0xea, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x36}, {.addr=0xabff, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xabff, .value=0x0d, .type=IO_READ},
        {.addr=0xac00, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x4eee, .a=0x96, .x=0x54, .y=0x7f, .sp=0x85, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x4eee, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4eef, .a=0x96, .x=0x54, .y=0x7f, .sp=0x84, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x68}, {.addr=0x4eee, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4eee, .value=0x0d, .type=IO_READ},
        {.addr=0x4eef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x1954, .a=0x2e, .x=0xee, .y=0x77, .sp=0xbe, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0x1954, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1955, .a=0x2e, .x=0xee, .y=0x77, .sp=0xbd, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x0c}, {.addr=0x1954, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1954, .value=0x0d, .type=IO_READ},
        {.addr=0x1955, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x508e, .a=0x5e, .x=0xac, .y=0x07, .sp=0x59, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x508e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x508f, .a=0x5e, .x=0xac, .y=0x07, .sp=0x58, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xe0}, {.addr=0x508e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x508e, .value=0x0d, .type=IO_READ},
        {.addr=0x508f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x5eb8, .a=0xc2, .x=0xb3, .y=0xaa, .sp=0xad, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x5eb8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5eb9, .a=0xc2, .x=0xb3, .y=0xaa, .sp=0xac, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xdc}, {.addr=0x5eb8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5eb8, .value=0x0d, .type=IO_READ},
        {.addr=0x5eb9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x8b09, .a=0xca, .x=0x1d, .y=0x41, .sp=0x95, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x00}, {.addr=0x8b09, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8b0a, .a=0xca, .x=0x1d, .y=0x41, .sp=0x94, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x54}, {.addr=0x8b09, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8b09, .value=0x0d, .type=IO_READ},
        {.addr=0x8b0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xf8d9, .a=0x82, .x=0x00, .y=0x19, .sp=0x8f, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0xf8d9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf8da, .a=0x82, .x=0x00, .y=0x19, .sp=0x8e, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x1e}, {.addr=0xf8d9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf8d9, .value=0x0d, .type=IO_READ},
        {.addr=0xf8da, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0200) {
    const struct CPU_State initial_cpu = {.pc=0xd839, .a=0x0b, .x=0x50, .y=0x21, .sp=0xb6, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xd839, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd83a, .a=0x0b, .x=0x50, .y=0x21, .sp=0xb5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x65}, {.addr=0xd839, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd839, .value=0x0d, .type=IO_READ},
        {.addr=0xd83a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0201) {
    const struct CPU_State initial_cpu = {.pc=0xfd1f, .a=0x50, .x=0x4d, .y=0x59, .sp=0xb2, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0xfd1f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfd20, .a=0x50, .x=0x4d, .y=0x59, .sp=0xb1, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xdc}, {.addr=0xfd1f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfd1f, .value=0x0d, .type=IO_READ},
        {.addr=0xfd20, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0202) {
    const struct CPU_State initial_cpu = {.pc=0x4884, .a=0x7a, .x=0x4b, .y=0xe0, .sp=0xa0, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x4884, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4885, .a=0x7a, .x=0x4b, .y=0xe0, .sp=0x9f, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xad}, {.addr=0x4884, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4884, .value=0x0d, .type=IO_READ},
        {.addr=0x4885, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xad, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0203) {
    const struct CPU_State initial_cpu = {.pc=0x2a8d, .a=0x2a, .x=0x9a, .y=0xb0, .sp=0x4e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x2a8d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2a8e, .a=0x2a, .x=0x9a, .y=0xb0, .sp=0x4d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x5c}, {.addr=0x2a8d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2a8d, .value=0x0d, .type=IO_READ},
        {.addr=0x2a8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0204) {
    const struct CPU_State initial_cpu = {.pc=0x7dee, .a=0x06, .x=0x65, .y=0xc9, .sp=0x74, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x7dee, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7def, .a=0x06, .x=0x65, .y=0xc9, .sp=0x73, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x24}, {.addr=0x7dee, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7dee, .value=0x0d, .type=IO_READ},
        {.addr=0x7def, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0205) {
    const struct CPU_State initial_cpu = {.pc=0x4cb5, .a=0xb7, .x=0x81, .y=0x3b, .sp=0xce, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x4cb5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4cb6, .a=0xb7, .x=0x81, .y=0x3b, .sp=0xcd, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xaa}, {.addr=0x4cb5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4cb5, .value=0x0d, .type=IO_READ},
        {.addr=0x4cb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0206) {
    const struct CPU_State initial_cpu = {.pc=0x5122, .a=0x10, .x=0x5f, .y=0x10, .sp=0x10, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x5122, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5123, .a=0x10, .x=0x5f, .y=0x10, .sp=0x0f, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xb2}, {.addr=0x5122, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5122, .value=0x0d, .type=IO_READ},
        {.addr=0x5123, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0207) {
    const struct CPU_State initial_cpu = {.pc=0x6a69, .a=0x9b, .x=0x88, .y=0xf7, .sp=0x20, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0x6a69, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6a6a, .a=0x9b, .x=0x88, .y=0xf7, .sp=0x1f, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xe6}, {.addr=0x6a69, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6a69, .value=0x0d, .type=IO_READ},
        {.addr=0x6a6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0208) {
    const struct CPU_State initial_cpu = {.pc=0xe98d, .a=0xe9, .x=0x7a, .y=0x4c, .sp=0xc1, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0xe98d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe98e, .a=0xe9, .x=0x7a, .y=0x4c, .sp=0xc0, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x5e}, {.addr=0xe98d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe98d, .value=0x0d, .type=IO_READ},
        {.addr=0xe98e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0209) {
    const struct CPU_State initial_cpu = {.pc=0xbdc2, .a=0x27, .x=0x00, .y=0x07, .sp=0x2f, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0xbdc2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbdc3, .a=0x27, .x=0x00, .y=0x07, .sp=0x2e, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x43}, {.addr=0xbdc2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbdc2, .value=0x0d, .type=IO_READ},
        {.addr=0xbdc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_020A) {
    const struct CPU_State initial_cpu = {.pc=0xb96e, .a=0xa6, .x=0x1e, .y=0x44, .sp=0xa4, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0xb96e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb96f, .a=0xa6, .x=0x1e, .y=0x44, .sp=0xa3, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xa2}, {.addr=0xb96e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb96e, .value=0x0d, .type=IO_READ},
        {.addr=0xb96f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_020B) {
    const struct CPU_State initial_cpu = {.pc=0x2ab8, .a=0xd1, .x=0x1b, .y=0x0b, .sp=0xd3, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x2ab8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2ab9, .a=0xd1, .x=0x1b, .y=0x0b, .sp=0xd2, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x6b}, {.addr=0x2ab8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2ab8, .value=0x0d, .type=IO_READ},
        {.addr=0x2ab9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_020C) {
    const struct CPU_State initial_cpu = {.pc=0xc4ba, .a=0x5e, .x=0xeb, .y=0xee, .sp=0xfb, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0xc4ba, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc4bb, .a=0x5e, .x=0xeb, .y=0xee, .sp=0xfa, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x76}, {.addr=0xc4ba, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc4ba, .value=0x0d, .type=IO_READ},
        {.addr=0xc4bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_020D) {
    const struct CPU_State initial_cpu = {.pc=0xd429, .a=0xe8, .x=0x81, .y=0x3e, .sp=0xde, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0xd429, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd42a, .a=0xe8, .x=0x81, .y=0x3e, .sp=0xdd, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x34}, {.addr=0xd429, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd429, .value=0x0d, .type=IO_READ},
        {.addr=0xd42a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_020E) {
    const struct CPU_State initial_cpu = {.pc=0xc058, .a=0xc3, .x=0x63, .y=0x9c, .sp=0xd9, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xc058, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc059, .a=0xc3, .x=0x63, .y=0x9c, .sp=0xd8, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x87}, {.addr=0xc058, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc058, .value=0x0d, .type=IO_READ},
        {.addr=0xc059, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_020F) {
    const struct CPU_State initial_cpu = {.pc=0x22d8, .a=0x0b, .x=0xcc, .y=0xfd, .sp=0xe6, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x22d8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x22d9, .a=0x0b, .x=0xcc, .y=0xfd, .sp=0xe5, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x56}, {.addr=0x22d8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x22d8, .value=0x0d, .type=IO_READ},
        {.addr=0x22d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0210) {
    const struct CPU_State initial_cpu = {.pc=0x4efe, .a=0x9f, .x=0x64, .y=0x0b, .sp=0x87, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x4efe, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4eff, .a=0x9f, .x=0x64, .y=0x0b, .sp=0x86, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x69}, {.addr=0x4efe, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4efe, .value=0x0d, .type=IO_READ},
        {.addr=0x4eff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0211) {
    const struct CPU_State initial_cpu = {.pc=0x10bf, .a=0x9b, .x=0x05, .y=0x6f, .sp=0x7d, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0x10bf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x10c0, .a=0x9b, .x=0x05, .y=0x6f, .sp=0x7c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xf5}, {.addr=0x10bf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x10bf, .value=0x0d, .type=IO_READ},
        {.addr=0x10c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0212) {
    const struct CPU_State initial_cpu = {.pc=0x5e3c, .a=0xc1, .x=0x2e, .y=0x29, .sp=0x2c, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x5e3c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5e3d, .a=0xc1, .x=0x2e, .y=0x29, .sp=0x2b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x49}, {.addr=0x5e3c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5e3c, .value=0x0d, .type=IO_READ},
        {.addr=0x5e3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0213) {
    const struct CPU_State initial_cpu = {.pc=0xe657, .a=0x23, .x=0xbc, .y=0x9e, .sp=0xf2, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0xe657, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe658, .a=0x23, .x=0xbc, .y=0x9e, .sp=0xf1, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x42}, {.addr=0xe657, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe657, .value=0x0d, .type=IO_READ},
        {.addr=0xe658, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0214) {
    const struct CPU_State initial_cpu = {.pc=0x86dc, .a=0x6f, .x=0x4c, .y=0x4c, .sp=0x0a, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x86dc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x86dd, .a=0x6f, .x=0x4c, .y=0x4c, .sp=0x09, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xff}, {.addr=0x86dc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x86dc, .value=0x0d, .type=IO_READ},
        {.addr=0x86dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0215) {
    const struct CPU_State initial_cpu = {.pc=0xeb81, .a=0xcd, .x=0xb9, .y=0xc9, .sp=0x47, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0xeb81, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xeb82, .a=0xcd, .x=0xb9, .y=0xc9, .sp=0x46, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x06}, {.addr=0xeb81, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xeb81, .value=0x0d, .type=IO_READ},
        {.addr=0xeb82, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0216) {
    const struct CPU_State initial_cpu = {.pc=0x81bd, .a=0xcc, .x=0x76, .y=0x70, .sp=0x17, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0x81bd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x81be, .a=0xcc, .x=0x76, .y=0x70, .sp=0x16, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xaa}, {.addr=0x81bd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x81bd, .value=0x0d, .type=IO_READ},
        {.addr=0x81be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0217) {
    const struct CPU_State initial_cpu = {.pc=0xa435, .a=0xe5, .x=0x15, .y=0x49, .sp=0xc0, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0xa435, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa436, .a=0xe5, .x=0x15, .y=0x49, .sp=0xbf, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x02}, {.addr=0xa435, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa435, .value=0x0d, .type=IO_READ},
        {.addr=0xa436, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0218) {
    const struct CPU_State initial_cpu = {.pc=0xca02, .a=0x59, .x=0x33, .y=0xc1, .sp=0x3b, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0xca02, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xca03, .a=0x59, .x=0x33, .y=0xc1, .sp=0x3a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x79}, {.addr=0xca02, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xca02, .value=0x0d, .type=IO_READ},
        {.addr=0xca03, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0219) {
    const struct CPU_State initial_cpu = {.pc=0x89cd, .a=0x93, .x=0x1a, .y=0xa2, .sp=0xc0, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x89cd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x89ce, .a=0x93, .x=0x1a, .y=0xa2, .sp=0xbf, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x78}, {.addr=0x89cd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x89cd, .value=0x0d, .type=IO_READ},
        {.addr=0x89ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x78, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_021A) {
    const struct CPU_State initial_cpu = {.pc=0x4286, .a=0x8a, .x=0x57, .y=0xef, .sp=0x31, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0x4286, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4287, .a=0x8a, .x=0x57, .y=0xef, .sp=0x30, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x23}, {.addr=0x4286, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4286, .value=0x0d, .type=IO_READ},
        {.addr=0x4287, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_021B) {
    const struct CPU_State initial_cpu = {.pc=0x3178, .a=0xae, .x=0x8f, .y=0x0c, .sp=0xfc, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x3178, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3179, .a=0xae, .x=0x8f, .y=0x0c, .sp=0xfb, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xe5}, {.addr=0x3178, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3178, .value=0x0d, .type=IO_READ},
        {.addr=0x3179, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_021C) {
    const struct CPU_State initial_cpu = {.pc=0x18c8, .a=0x93, .x=0xf7, .y=0x91, .sp=0x03, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x00}, {.addr=0x18c8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x18c9, .a=0x93, .x=0xf7, .y=0x91, .sp=0x02, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x85}, {.addr=0x18c8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x18c8, .value=0x0d, .type=IO_READ},
        {.addr=0x18c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_021D) {
    const struct CPU_State initial_cpu = {.pc=0xaf82, .a=0x56, .x=0xb1, .y=0x19, .sp=0x2f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0xaf82, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xaf83, .a=0x56, .x=0xb1, .y=0x19, .sp=0x2e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x48}, {.addr=0xaf82, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xaf82, .value=0x0d, .type=IO_READ},
        {.addr=0xaf83, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_021E) {
    const struct CPU_State initial_cpu = {.pc=0x4f18, .a=0x0b, .x=0x16, .y=0xfd, .sp=0x3f, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0x4f18, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4f19, .a=0x0b, .x=0x16, .y=0xfd, .sp=0x3e, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x8e}, {.addr=0x4f18, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4f18, .value=0x0d, .type=IO_READ},
        {.addr=0x4f19, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_021F) {
    const struct CPU_State initial_cpu = {.pc=0x7767, .a=0x9b, .x=0xff, .y=0xe4, .sp=0xb9, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x7767, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7768, .a=0x9b, .x=0xff, .y=0xe4, .sp=0xb8, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x22}, {.addr=0x7767, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7767, .value=0x0d, .type=IO_READ},
        {.addr=0x7768, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x22, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0220) {
    const struct CPU_State initial_cpu = {.pc=0x44c7, .a=0xff, .x=0xd5, .y=0xf2, .sp=0x47, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x44c7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x44c8, .a=0xff, .x=0xd5, .y=0xf2, .sp=0x46, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xa9}, {.addr=0x44c7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x44c7, .value=0x0d, .type=IO_READ},
        {.addr=0x44c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0221) {
    const struct CPU_State initial_cpu = {.pc=0x970a, .a=0xdb, .x=0x13, .y=0x58, .sp=0x95, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x00}, {.addr=0x970a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x970b, .a=0xdb, .x=0x13, .y=0x58, .sp=0x94, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x23}, {.addr=0x970a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x970a, .value=0x0d, .type=IO_READ},
        {.addr=0x970b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0222) {
    const struct CPU_State initial_cpu = {.pc=0xfcdc, .a=0xad, .x=0x51, .y=0xa3, .sp=0xc6, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0xfcdc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfcdd, .a=0xad, .x=0x51, .y=0xa3, .sp=0xc5, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x56}, {.addr=0xfcdc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfcdc, .value=0x0d, .type=IO_READ},
        {.addr=0xfcdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0223) {
    const struct CPU_State initial_cpu = {.pc=0xbf89, .a=0x33, .x=0x7d, .y=0xe9, .sp=0xd6, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0xbf89, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbf8a, .a=0x33, .x=0x7d, .y=0xe9, .sp=0xd5, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x76}, {.addr=0xbf89, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbf89, .value=0x0d, .type=IO_READ},
        {.addr=0xbf8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0224) {
    const struct CPU_State initial_cpu = {.pc=0x135f, .a=0x47, .x=0xba, .y=0x95, .sp=0x24, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0x135f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1360, .a=0x47, .x=0xba, .y=0x95, .sp=0x23, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x71}, {.addr=0x135f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x135f, .value=0x0d, .type=IO_READ},
        {.addr=0x1360, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0225) {
    const struct CPU_State initial_cpu = {.pc=0xede0, .a=0x71, .x=0x80, .y=0x48, .sp=0x7b, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0xede0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xede1, .a=0x71, .x=0x80, .y=0x48, .sp=0x7a, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x08}, {.addr=0xede0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xede0, .value=0x0d, .type=IO_READ},
        {.addr=0xede1, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0226) {
    const struct CPU_State initial_cpu = {.pc=0xa130, .a=0x1d, .x=0x98, .y=0x43, .sp=0xf0, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0xa130, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa131, .a=0x1d, .x=0x98, .y=0x43, .sp=0xef, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xeb}, {.addr=0xa130, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa130, .value=0x0d, .type=IO_READ},
        {.addr=0xa131, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0227) {
    const struct CPU_State initial_cpu = {.pc=0xbcdd, .a=0x51, .x=0x0c, .y=0x25, .sp=0x5e, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0xbcdd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbcde, .a=0x51, .x=0x0c, .y=0x25, .sp=0x5d, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xdb}, {.addr=0xbcdd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbcdd, .value=0x0d, .type=IO_READ},
        {.addr=0xbcde, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0228) {
    const struct CPU_State initial_cpu = {.pc=0xa514, .a=0x0c, .x=0x73, .y=0xec, .sp=0x67, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xa514, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa515, .a=0x0c, .x=0x73, .y=0xec, .sp=0x66, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x0e}, {.addr=0xa514, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa514, .value=0x0d, .type=IO_READ},
        {.addr=0xa515, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0229) {
    const struct CPU_State initial_cpu = {.pc=0x6c8f, .a=0x4c, .x=0x4c, .y=0x9f, .sp=0x55, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0x6c8f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6c90, .a=0x4c, .x=0x4c, .y=0x9f, .sp=0x54, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x29}, {.addr=0x6c8f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6c8f, .value=0x0d, .type=IO_READ},
        {.addr=0x6c90, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_022A) {
    const struct CPU_State initial_cpu = {.pc=0x0824, .a=0x72, .x=0xc0, .y=0x10, .sp=0x06, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x0824, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0825, .a=0x72, .x=0xc0, .y=0x10, .sp=0x05, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x4e}, {.addr=0x0824, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0824, .value=0x0d, .type=IO_READ},
        {.addr=0x0825, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_022B) {
    const struct CPU_State initial_cpu = {.pc=0xe47f, .a=0x94, .x=0xb1, .y=0xd1, .sp=0xc7, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0xe47f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe480, .a=0x94, .x=0xb1, .y=0xd1, .sp=0xc6, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x32}, {.addr=0xe47f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe47f, .value=0x0d, .type=IO_READ},
        {.addr=0xe480, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_022C) {
    const struct CPU_State initial_cpu = {.pc=0x2d8d, .a=0x1a, .x=0x0e, .y=0x13, .sp=0xfa, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0x2d8d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2d8e, .a=0x1a, .x=0x0e, .y=0x13, .sp=0xf9, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xc6}, {.addr=0x2d8d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2d8d, .value=0x0d, .type=IO_READ},
        {.addr=0x2d8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_022D) {
    const struct CPU_State initial_cpu = {.pc=0x8840, .a=0x67, .x=0x53, .y=0x1e, .sp=0x05, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x8840, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8841, .a=0x67, .x=0x53, .y=0x1e, .sp=0x04, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x83}, {.addr=0x8840, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8840, .value=0x0d, .type=IO_READ},
        {.addr=0x8841, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_022E) {
    const struct CPU_State initial_cpu = {.pc=0xd1fa, .a=0x71, .x=0x95, .y=0x85, .sp=0x6f, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0xd1fa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd1fb, .a=0x71, .x=0x95, .y=0x85, .sp=0x6e, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xa2}, {.addr=0xd1fa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd1fa, .value=0x0d, .type=IO_READ},
        {.addr=0xd1fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_022F) {
    const struct CPU_State initial_cpu = {.pc=0xa16a, .a=0x5b, .x=0x03, .y=0x96, .sp=0x36, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0xa16a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa16b, .a=0x5b, .x=0x03, .y=0x96, .sp=0x35, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x36}, {.addr=0xa16a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa16a, .value=0x0d, .type=IO_READ},
        {.addr=0xa16b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0230) {
    const struct CPU_State initial_cpu = {.pc=0xe794, .a=0xe7, .x=0x3b, .y=0x40, .sp=0x87, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0xe794, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe795, .a=0xe7, .x=0x3b, .y=0x40, .sp=0x86, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x16}, {.addr=0xe794, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe794, .value=0x0d, .type=IO_READ},
        {.addr=0xe795, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0231) {
    const struct CPU_State initial_cpu = {.pc=0x256c, .a=0xa9, .x=0x6f, .y=0xe7, .sp=0x22, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x256c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x256d, .a=0xa9, .x=0x6f, .y=0xe7, .sp=0x21, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x76}, {.addr=0x256c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x256c, .value=0x0d, .type=IO_READ},
        {.addr=0x256d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0232) {
    const struct CPU_State initial_cpu = {.pc=0xc10c, .a=0xec, .x=0xd1, .y=0xd7, .sp=0x18, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0xc10c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc10d, .a=0xec, .x=0xd1, .y=0xd7, .sp=0x17, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xbb}, {.addr=0xc10c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc10c, .value=0x0d, .type=IO_READ},
        {.addr=0xc10d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0233) {
    const struct CPU_State initial_cpu = {.pc=0xbbfe, .a=0x05, .x=0xc9, .y=0xd5, .sp=0x56, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0xbbfe, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbbff, .a=0x05, .x=0xc9, .y=0xd5, .sp=0x55, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xcf}, {.addr=0xbbfe, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbbfe, .value=0x0d, .type=IO_READ},
        {.addr=0xbbff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0234) {
    const struct CPU_State initial_cpu = {.pc=0x10e1, .a=0xb6, .x=0x77, .y=0xa4, .sp=0xef, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x10e1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x10e2, .a=0xb6, .x=0x77, .y=0xa4, .sp=0xee, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x49}, {.addr=0x10e1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x10e1, .value=0x0d, .type=IO_READ},
        {.addr=0x10e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0235) {
    const struct CPU_State initial_cpu = {.pc=0xf330, .a=0x98, .x=0xd6, .y=0x26, .sp=0xa8, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0xf330, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf331, .a=0x98, .x=0xd6, .y=0x26, .sp=0xa7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x35}, {.addr=0xf330, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf330, .value=0x0d, .type=IO_READ},
        {.addr=0xf331, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0236) {
    const struct CPU_State initial_cpu = {.pc=0x8db7, .a=0xec, .x=0x87, .y=0x84, .sp=0xe9, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x8db7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8db8, .a=0xec, .x=0x87, .y=0x84, .sp=0xe8, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x88}, {.addr=0x8db7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8db7, .value=0x0d, .type=IO_READ},
        {.addr=0x8db8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0237) {
    const struct CPU_State initial_cpu = {.pc=0xfc29, .a=0x0f, .x=0xaa, .y=0x1e, .sp=0x7d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xfc29, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfc2a, .a=0x0f, .x=0xaa, .y=0x1e, .sp=0x7c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xe5}, {.addr=0xfc29, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfc29, .value=0x0d, .type=IO_READ},
        {.addr=0xfc2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0238) {
    const struct CPU_State initial_cpu = {.pc=0x8cbd, .a=0xa7, .x=0x96, .y=0x5a, .sp=0x40, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0x8cbd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8cbe, .a=0xa7, .x=0x96, .y=0x5a, .sp=0x3f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xe1}, {.addr=0x8cbd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8cbd, .value=0x0d, .type=IO_READ},
        {.addr=0x8cbe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0239) {
    const struct CPU_State initial_cpu = {.pc=0xd3b5, .a=0x30, .x=0x11, .y=0x63, .sp=0xd6, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0xd3b5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd3b6, .a=0x30, .x=0x11, .y=0x63, .sp=0xd5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x5c}, {.addr=0xd3b5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd3b5, .value=0x0d, .type=IO_READ},
        {.addr=0xd3b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_023A) {
    const struct CPU_State initial_cpu = {.pc=0x48aa, .a=0x4c, .x=0xfa, .y=0xe2, .sp=0xb2, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x48aa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x48ab, .a=0x4c, .x=0xfa, .y=0xe2, .sp=0xb1, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x2c}, {.addr=0x48aa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x48aa, .value=0x0d, .type=IO_READ},
        {.addr=0x48ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_023B) {
    const struct CPU_State initial_cpu = {.pc=0xc4f6, .a=0xd4, .x=0xd0, .y=0x57, .sp=0xc4, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xc4f6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc4f7, .a=0xd4, .x=0xd0, .y=0x57, .sp=0xc3, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x35}, {.addr=0xc4f6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc4f6, .value=0x0d, .type=IO_READ},
        {.addr=0xc4f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_023C) {
    const struct CPU_State initial_cpu = {.pc=0x7873, .a=0x52, .x=0xc4, .y=0x83, .sp=0x6e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x7873, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7874, .a=0x52, .x=0xc4, .y=0x83, .sp=0x6d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x0d}, {.addr=0x7873, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7873, .value=0x0d, .type=IO_READ},
        {.addr=0x7874, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_023D) {
    const struct CPU_State initial_cpu = {.pc=0xf9fa, .a=0x28, .x=0x71, .y=0x80, .sp=0x1d, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0xf9fa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf9fb, .a=0x28, .x=0x71, .y=0x80, .sp=0x1c, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xbf}, {.addr=0xf9fa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf9fa, .value=0x0d, .type=IO_READ},
        {.addr=0xf9fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_023E) {
    const struct CPU_State initial_cpu = {.pc=0xe40e, .a=0xbb, .x=0x27, .y=0xc5, .sp=0xd8, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0xe40e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe40f, .a=0xbb, .x=0x27, .y=0xc5, .sp=0xd7, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xd5}, {.addr=0xe40e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe40e, .value=0x0d, .type=IO_READ},
        {.addr=0xe40f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_023F) {
    const struct CPU_State initial_cpu = {.pc=0xfd29, .a=0x84, .x=0xc5, .y=0x03, .sp=0x7c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0xfd29, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfd2a, .a=0x84, .x=0xc5, .y=0x03, .sp=0x7b, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x7a}, {.addr=0xfd29, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfd29, .value=0x0d, .type=IO_READ},
        {.addr=0xfd2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0240) {
    const struct CPU_State initial_cpu = {.pc=0xe137, .a=0x44, .x=0xe8, .y=0x34, .sp=0xea, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0xe137, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe138, .a=0x44, .x=0xe8, .y=0x34, .sp=0xe9, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x94}, {.addr=0xe137, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe137, .value=0x0d, .type=IO_READ},
        {.addr=0xe138, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0241) {
    const struct CPU_State initial_cpu = {.pc=0x83d7, .a=0xad, .x=0x09, .y=0xc1, .sp=0x6f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x83d7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x83d8, .a=0xad, .x=0x09, .y=0xc1, .sp=0x6e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x29}, {.addr=0x83d7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x83d7, .value=0x0d, .type=IO_READ},
        {.addr=0x83d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0242) {
    const struct CPU_State initial_cpu = {.pc=0x2dd5, .a=0xf1, .x=0x06, .y=0x74, .sp=0x50, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x2dd5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2dd6, .a=0xf1, .x=0x06, .y=0x74, .sp=0x4f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x34}, {.addr=0x2dd5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2dd5, .value=0x0d, .type=IO_READ},
        {.addr=0x2dd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0243) {
    const struct CPU_State initial_cpu = {.pc=0xeb66, .a=0xfc, .x=0x61, .y=0xad, .sp=0x2b, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0xeb66, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xeb67, .a=0xfc, .x=0x61, .y=0xad, .sp=0x2a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xa4}, {.addr=0xeb66, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xeb66, .value=0x0d, .type=IO_READ},
        {.addr=0xeb67, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0244) {
    const struct CPU_State initial_cpu = {.pc=0xf607, .a=0x83, .x=0x62, .y=0x42, .sp=0xd7, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0xf607, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf608, .a=0x83, .x=0x62, .y=0x42, .sp=0xd6, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x2b}, {.addr=0xf607, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf607, .value=0x0d, .type=IO_READ},
        {.addr=0xf608, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0245) {
    const struct CPU_State initial_cpu = {.pc=0x06d3, .a=0x1f, .x=0xa7, .y=0x19, .sp=0x71, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0x06d3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x06d4, .a=0x1f, .x=0xa7, .y=0x19, .sp=0x70, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xa7}, {.addr=0x06d3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x06d3, .value=0x0d, .type=IO_READ},
        {.addr=0x06d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0246) {
    const struct CPU_State initial_cpu = {.pc=0x84c3, .a=0x66, .x=0xc7, .y=0x6e, .sp=0xce, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x84c3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x84c4, .a=0x66, .x=0xc7, .y=0x6e, .sp=0xcd, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x9f}, {.addr=0x84c3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x84c3, .value=0x0d, .type=IO_READ},
        {.addr=0x84c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x9f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0247) {
    const struct CPU_State initial_cpu = {.pc=0x8e09, .a=0x27, .x=0x9a, .y=0x11, .sp=0xc6, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0x8e09, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8e0a, .a=0x27, .x=0x9a, .y=0x11, .sp=0xc5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x65}, {.addr=0x8e09, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8e09, .value=0x0d, .type=IO_READ},
        {.addr=0x8e0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0248) {
    const struct CPU_State initial_cpu = {.pc=0xfb18, .a=0xfa, .x=0x05, .y=0x1f, .sp=0x9f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0xfb18, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfb19, .a=0xfa, .x=0x05, .y=0x1f, .sp=0x9e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x8d}, {.addr=0xfb18, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfb18, .value=0x0d, .type=IO_READ},
        {.addr=0xfb19, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0249) {
    const struct CPU_State initial_cpu = {.pc=0x7f6a, .a=0x63, .x=0x8f, .y=0x05, .sp=0x9a, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x7f6a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7f6b, .a=0x63, .x=0x8f, .y=0x05, .sp=0x99, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xef}, {.addr=0x7f6a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7f6a, .value=0x0d, .type=IO_READ},
        {.addr=0x7f6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_024A) {
    const struct CPU_State initial_cpu = {.pc=0x6231, .a=0xdc, .x=0x33, .y=0x5f, .sp=0x51, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0x6231, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6232, .a=0xdc, .x=0x33, .y=0x5f, .sp=0x50, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x43}, {.addr=0x6231, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6231, .value=0x0d, .type=IO_READ},
        {.addr=0x6232, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_024B) {
    const struct CPU_State initial_cpu = {.pc=0xbda1, .a=0x43, .x=0x26, .y=0x97, .sp=0x98, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0xbda1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbda2, .a=0x43, .x=0x26, .y=0x97, .sp=0x97, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x84}, {.addr=0xbda1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbda1, .value=0x0d, .type=IO_READ},
        {.addr=0xbda2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_024C) {
    const struct CPU_State initial_cpu = {.pc=0xcbd2, .a=0x22, .x=0x1c, .y=0x16, .sp=0xcc, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0xcbd2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcbd3, .a=0x22, .x=0x1c, .y=0x16, .sp=0xcb, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xdd}, {.addr=0xcbd2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcbd2, .value=0x0d, .type=IO_READ},
        {.addr=0xcbd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_024D) {
    const struct CPU_State initial_cpu = {.pc=0x5a7e, .a=0xe4, .x=0xf6, .y=0x5d, .sp=0x55, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0x5a7e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5a7f, .a=0xe4, .x=0xf6, .y=0x5d, .sp=0x54, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x12}, {.addr=0x5a7e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5a7e, .value=0x0d, .type=IO_READ},
        {.addr=0x5a7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_024E) {
    const struct CPU_State initial_cpu = {.pc=0x6d80, .a=0x65, .x=0x75, .y=0xd4, .sp=0xcc, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x6d80, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6d81, .a=0x65, .x=0x75, .y=0xd4, .sp=0xcb, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x76}, {.addr=0x6d80, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6d80, .value=0x0d, .type=IO_READ},
        {.addr=0x6d81, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_024F) {
    const struct CPU_State initial_cpu = {.pc=0x15ee, .a=0xba, .x=0xab, .y=0x46, .sp=0xaa, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0x15ee, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x15ef, .a=0xba, .x=0xab, .y=0x46, .sp=0xa9, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xc0}, {.addr=0x15ee, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x15ee, .value=0x0d, .type=IO_READ},
        {.addr=0x15ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0250) {
    const struct CPU_State initial_cpu = {.pc=0x4ea5, .a=0xd3, .x=0x1f, .y=0x3a, .sp=0x91, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0x4ea5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4ea6, .a=0xd3, .x=0x1f, .y=0x3a, .sp=0x90, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x87}, {.addr=0x4ea5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4ea5, .value=0x0d, .type=IO_READ},
        {.addr=0x4ea6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0251) {
    const struct CPU_State initial_cpu = {.pc=0xae35, .a=0xa2, .x=0x3c, .y=0x9d, .sp=0xe4, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0xae35, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xae36, .a=0xa2, .x=0x3c, .y=0x9d, .sp=0xe3, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xe7}, {.addr=0xae35, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xae35, .value=0x0d, .type=IO_READ},
        {.addr=0xae36, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0252) {
    const struct CPU_State initial_cpu = {.pc=0xa2d6, .a=0x4e, .x=0xa5, .y=0x18, .sp=0x97, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x00}, {.addr=0xa2d6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa2d7, .a=0x4e, .x=0xa5, .y=0x18, .sp=0x96, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x9d}, {.addr=0xa2d6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa2d6, .value=0x0d, .type=IO_READ},
        {.addr=0xa2d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0253) {
    const struct CPU_State initial_cpu = {.pc=0x7297, .a=0xdb, .x=0xce, .y=0xfb, .sp=0xfc, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x7297, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7298, .a=0xdb, .x=0xce, .y=0xfb, .sp=0xfb, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x6f}, {.addr=0x7297, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7297, .value=0x0d, .type=IO_READ},
        {.addr=0x7298, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0254) {
    const struct CPU_State initial_cpu = {.pc=0x09bf, .a=0xe4, .x=0x38, .y=0x81, .sp=0x97, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x00}, {.addr=0x09bf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x09c0, .a=0xe4, .x=0x38, .y=0x81, .sp=0x96, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xd5}, {.addr=0x09bf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x09bf, .value=0x0d, .type=IO_READ},
        {.addr=0x09c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0255) {
    const struct CPU_State initial_cpu = {.pc=0x5b40, .a=0x94, .x=0x78, .y=0x70, .sp=0xfb, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x5b40, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5b41, .a=0x94, .x=0x78, .y=0x70, .sp=0xfa, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xc9}, {.addr=0x5b40, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5b40, .value=0x0d, .type=IO_READ},
        {.addr=0x5b41, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0256) {
    const struct CPU_State initial_cpu = {.pc=0xdb8d, .a=0xfc, .x=0xdd, .y=0x31, .sp=0x78, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xdb8d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdb8e, .a=0xfc, .x=0xdd, .y=0x31, .sp=0x77, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xd5}, {.addr=0xdb8d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdb8d, .value=0x0d, .type=IO_READ},
        {.addr=0xdb8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0257) {
    const struct CPU_State initial_cpu = {.pc=0xca28, .a=0x62, .x=0x14, .y=0x24, .sp=0x7a, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xca28, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xca29, .a=0x62, .x=0x14, .y=0x24, .sp=0x79, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x95}, {.addr=0xca28, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xca28, .value=0x0d, .type=IO_READ},
        {.addr=0xca29, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0258) {
    const struct CPU_State initial_cpu = {.pc=0xa480, .a=0x77, .x=0x92, .y=0x33, .sp=0xe5, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0xa480, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa481, .a=0x77, .x=0x92, .y=0x33, .sp=0xe4, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x1e}, {.addr=0xa480, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa480, .value=0x0d, .type=IO_READ},
        {.addr=0xa481, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0259) {
    const struct CPU_State initial_cpu = {.pc=0x6037, .a=0xb7, .x=0xc3, .y=0xdb, .sp=0x2a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0x6037, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6038, .a=0xb7, .x=0xc3, .y=0xdb, .sp=0x29, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x3b}, {.addr=0x6037, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6037, .value=0x0d, .type=IO_READ},
        {.addr=0x6038, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_025A) {
    const struct CPU_State initial_cpu = {.pc=0xb182, .a=0xfc, .x=0xe1, .y=0x26, .sp=0xc3, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0xb182, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb183, .a=0xfc, .x=0xe1, .y=0x26, .sp=0xc2, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x7c}, {.addr=0xb182, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb182, .value=0x0d, .type=IO_READ},
        {.addr=0xb183, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_025B) {
    const struct CPU_State initial_cpu = {.pc=0x490d, .a=0xa9, .x=0x92, .y=0xd8, .sp=0xef, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x490d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x490e, .a=0xa9, .x=0x92, .y=0xd8, .sp=0xee, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xf8}, {.addr=0x490d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x490d, .value=0x0d, .type=IO_READ},
        {.addr=0x490e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xf8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_025C) {
    const struct CPU_State initial_cpu = {.pc=0x7c74, .a=0x4d, .x=0x26, .y=0xd8, .sp=0x4a, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x7c74, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7c75, .a=0x4d, .x=0x26, .y=0xd8, .sp=0x49, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x55}, {.addr=0x7c74, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7c74, .value=0x0d, .type=IO_READ},
        {.addr=0x7c75, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_025D) {
    const struct CPU_State initial_cpu = {.pc=0xdf83, .a=0xa8, .x=0xb5, .y=0xd0, .sp=0xdf, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xdf83, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdf84, .a=0xa8, .x=0xb5, .y=0xd0, .sp=0xde, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x5c}, {.addr=0xdf83, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdf83, .value=0x0d, .type=IO_READ},
        {.addr=0xdf84, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_025E) {
    const struct CPU_State initial_cpu = {.pc=0x7021, .a=0xf6, .x=0x50, .y=0x07, .sp=0xbd, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x7021, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7022, .a=0xf6, .x=0x50, .y=0x07, .sp=0xbc, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x29}, {.addr=0x7021, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7021, .value=0x0d, .type=IO_READ},
        {.addr=0x7022, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_025F) {
    const struct CPU_State initial_cpu = {.pc=0x28f3, .a=0x10, .x=0x89, .y=0xb2, .sp=0x11, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x28f3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x28f4, .a=0x10, .x=0x89, .y=0xb2, .sp=0x10, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xe3}, {.addr=0x28f3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x28f3, .value=0x0d, .type=IO_READ},
        {.addr=0x28f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0260) {
    const struct CPU_State initial_cpu = {.pc=0x83c6, .a=0x8e, .x=0xff, .y=0x45, .sp=0x4e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x83c6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x83c7, .a=0x8e, .x=0xff, .y=0x45, .sp=0x4d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x38}, {.addr=0x83c6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x83c6, .value=0x0d, .type=IO_READ},
        {.addr=0x83c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x38, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0261) {
    const struct CPU_State initial_cpu = {.pc=0x0611, .a=0xf7, .x=0xc4, .y=0x3d, .sp=0xa3, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0x0611, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0612, .a=0xf7, .x=0xc4, .y=0x3d, .sp=0xa2, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x1d}, {.addr=0x0611, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0611, .value=0x0d, .type=IO_READ},
        {.addr=0x0612, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0262) {
    const struct CPU_State initial_cpu = {.pc=0xa107, .a=0xf0, .x=0x9c, .y=0xdc, .sp=0x51, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0xa107, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa108, .a=0xf0, .x=0x9c, .y=0xdc, .sp=0x50, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xfe}, {.addr=0xa107, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa107, .value=0x0d, .type=IO_READ},
        {.addr=0xa108, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0263) {
    const struct CPU_State initial_cpu = {.pc=0x131a, .a=0x7c, .x=0xd1, .y=0x0d, .sp=0xc0, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x131a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x131b, .a=0x7c, .x=0xd1, .y=0x0d, .sp=0xbf, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x69}, {.addr=0x131a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x131a, .value=0x0d, .type=IO_READ},
        {.addr=0x131b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0264) {
    const struct CPU_State initial_cpu = {.pc=0x84de, .a=0x51, .x=0x86, .y=0x4e, .sp=0xc7, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x84de, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x84df, .a=0x51, .x=0x86, .y=0x4e, .sp=0xc6, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xdc}, {.addr=0x84de, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x84de, .value=0x0d, .type=IO_READ},
        {.addr=0x84df, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0265) {
    const struct CPU_State initial_cpu = {.pc=0x7405, .a=0x91, .x=0x26, .y=0xff, .sp=0x29, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0x7405, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7406, .a=0x91, .x=0x26, .y=0xff, .sp=0x28, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xdd}, {.addr=0x7405, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7405, .value=0x0d, .type=IO_READ},
        {.addr=0x7406, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0266) {
    const struct CPU_State initial_cpu = {.pc=0x2345, .a=0xcb, .x=0xc8, .y=0xe5, .sp=0x9a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x2345, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2346, .a=0xcb, .x=0xc8, .y=0xe5, .sp=0x99, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x74}, {.addr=0x2345, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2345, .value=0x0d, .type=IO_READ},
        {.addr=0x2346, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0267) {
    const struct CPU_State initial_cpu = {.pc=0x4cef, .a=0xf6, .x=0x93, .y=0xb0, .sp=0x47, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x4cef, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4cf0, .a=0xf6, .x=0x93, .y=0xb0, .sp=0x46, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x69}, {.addr=0x4cef, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4cef, .value=0x0d, .type=IO_READ},
        {.addr=0x4cf0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0268) {
    const struct CPU_State initial_cpu = {.pc=0x1531, .a=0xbb, .x=0x7a, .y=0x95, .sp=0xe6, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x1531, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1532, .a=0xbb, .x=0x7a, .y=0x95, .sp=0xe5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xd4}, {.addr=0x1531, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1531, .value=0x0d, .type=IO_READ},
        {.addr=0x1532, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0xd4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0269) {
    const struct CPU_State initial_cpu = {.pc=0x9f7f, .a=0x8c, .x=0x9a, .y=0x32, .sp=0xae, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0x9f7f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9f80, .a=0x8c, .x=0x9a, .y=0x32, .sp=0xad, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x09}, {.addr=0x9f7f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9f7f, .value=0x0d, .type=IO_READ},
        {.addr=0x9f80, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_026A) {
    const struct CPU_State initial_cpu = {.pc=0xebe5, .a=0x79, .x=0x2b, .y=0x0f, .sp=0xa4, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0xebe5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xebe6, .a=0x79, .x=0x2b, .y=0x0f, .sp=0xa3, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xab}, {.addr=0xebe5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xebe5, .value=0x0d, .type=IO_READ},
        {.addr=0xebe6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xab, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_026B) {
    const struct CPU_State initial_cpu = {.pc=0x827b, .a=0x1a, .x=0xc2, .y=0x64, .sp=0x88, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0x827b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x827c, .a=0x1a, .x=0xc2, .y=0x64, .sp=0x87, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x45}, {.addr=0x827b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x827b, .value=0x0d, .type=IO_READ},
        {.addr=0x827c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x45, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_026C) {
    const struct CPU_State initial_cpu = {.pc=0x2b25, .a=0x74, .x=0x23, .y=0x87, .sp=0x94, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x2b25, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2b26, .a=0x74, .x=0x23, .y=0x87, .sp=0x93, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x37}, {.addr=0x2b25, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2b25, .value=0x0d, .type=IO_READ},
        {.addr=0x2b26, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_026D) {
    const struct CPU_State initial_cpu = {.pc=0x1846, .a=0x3f, .x=0x30, .y=0xb1, .sp=0x18, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x1846, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1847, .a=0x3f, .x=0x30, .y=0xb1, .sp=0x17, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x6a}, {.addr=0x1846, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1846, .value=0x0d, .type=IO_READ},
        {.addr=0x1847, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_026E) {
    const struct CPU_State initial_cpu = {.pc=0x8594, .a=0x9c, .x=0xf3, .y=0xb9, .sp=0xc7, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x8594, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8595, .a=0x9c, .x=0xf3, .y=0xb9, .sp=0xc6, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xe0}, {.addr=0x8594, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8594, .value=0x0d, .type=IO_READ},
        {.addr=0x8595, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_026F) {
    const struct CPU_State initial_cpu = {.pc=0x457f, .a=0xc4, .x=0x47, .y=0xcd, .sp=0x2e, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x457f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4580, .a=0xc4, .x=0x47, .y=0xcd, .sp=0x2d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xd1}, {.addr=0x457f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x457f, .value=0x0d, .type=IO_READ},
        {.addr=0x4580, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0270) {
    const struct CPU_State initial_cpu = {.pc=0x4cb1, .a=0xf4, .x=0x4d, .y=0x8d, .sp=0xb6, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0x4cb1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4cb2, .a=0xf4, .x=0x4d, .y=0x8d, .sp=0xb5, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xa1}, {.addr=0x4cb1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4cb1, .value=0x0d, .type=IO_READ},
        {.addr=0x4cb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0271) {
    const struct CPU_State initial_cpu = {.pc=0x294e, .a=0xb5, .x=0x21, .y=0x8c, .sp=0xb2, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x294e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x294f, .a=0xb5, .x=0x21, .y=0x8c, .sp=0xb1, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x23}, {.addr=0x294e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x294e, .value=0x0d, .type=IO_READ},
        {.addr=0x294f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0272) {
    const struct CPU_State initial_cpu = {.pc=0x3709, .a=0xe4, .x=0xa0, .y=0xcb, .sp=0x9b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x3709, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x370a, .a=0xe4, .x=0xa0, .y=0xcb, .sp=0x9a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x7d}, {.addr=0x3709, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3709, .value=0x0d, .type=IO_READ},
        {.addr=0x370a, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0273) {
    const struct CPU_State initial_cpu = {.pc=0x958e, .a=0x82, .x=0xc4, .y=0xc7, .sp=0x1a, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x00}, {.addr=0x958e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x958f, .a=0x82, .x=0xc4, .y=0xc7, .sp=0x19, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x4b}, {.addr=0x958e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x958e, .value=0x0d, .type=IO_READ},
        {.addr=0x958f, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0274) {
    const struct CPU_State initial_cpu = {.pc=0x4339, .a=0x54, .x=0x36, .y=0xf2, .sp=0xf7, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0x4339, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x433a, .a=0x54, .x=0x36, .y=0xf2, .sp=0xf6, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x97}, {.addr=0x4339, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4339, .value=0x0d, .type=IO_READ},
        {.addr=0x433a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0275) {
    const struct CPU_State initial_cpu = {.pc=0x74b1, .a=0x05, .x=0x65, .y=0x63, .sp=0xa7, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x74b1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x74b2, .a=0x05, .x=0x65, .y=0x63, .sp=0xa6, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xed}, {.addr=0x74b1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x74b1, .value=0x0d, .type=IO_READ},
        {.addr=0x74b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0276) {
    const struct CPU_State initial_cpu = {.pc=0x2bb1, .a=0xb2, .x=0xd9, .y=0x28, .sp=0xa1, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x2bb1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2bb2, .a=0xb2, .x=0xd9, .y=0x28, .sp=0xa0, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x81}, {.addr=0x2bb1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2bb1, .value=0x0d, .type=IO_READ},
        {.addr=0x2bb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0277) {
    const struct CPU_State initial_cpu = {.pc=0xf0c8, .a=0x53, .x=0x41, .y=0x24, .sp=0xb7, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0xf0c8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf0c9, .a=0x53, .x=0x41, .y=0x24, .sp=0xb6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x61}, {.addr=0xf0c8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf0c8, .value=0x0d, .type=IO_READ},
        {.addr=0xf0c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x61, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0278) {
    const struct CPU_State initial_cpu = {.pc=0x2deb, .a=0xa5, .x=0xf4, .y=0x4f, .sp=0x81, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0x2deb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2dec, .a=0xa5, .x=0xf4, .y=0x4f, .sp=0x80, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xc7}, {.addr=0x2deb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2deb, .value=0x0d, .type=IO_READ},
        {.addr=0x2dec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0279) {
    const struct CPU_State initial_cpu = {.pc=0xe85e, .a=0xaa, .x=0x6c, .y=0x51, .sp=0x7f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0xe85e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe85f, .a=0xaa, .x=0x6c, .y=0x51, .sp=0x7e, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x4e}, {.addr=0xe85e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe85e, .value=0x0d, .type=IO_READ},
        {.addr=0xe85f, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_027A) {
    const struct CPU_State initial_cpu = {.pc=0x2974, .a=0xca, .x=0x80, .y=0xec, .sp=0xe9, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x2974, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2975, .a=0xca, .x=0x80, .y=0xec, .sp=0xe8, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x3e}, {.addr=0x2974, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2974, .value=0x0d, .type=IO_READ},
        {.addr=0x2975, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_027B) {
    const struct CPU_State initial_cpu = {.pc=0x9348, .a=0x41, .x=0xf4, .y=0x72, .sp=0x8c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x9348, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9349, .a=0x41, .x=0xf4, .y=0x72, .sp=0x8b, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x93}, {.addr=0x9348, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9348, .value=0x0d, .type=IO_READ},
        {.addr=0x9349, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_027C) {
    const struct CPU_State initial_cpu = {.pc=0x0a3c, .a=0x29, .x=0x0a, .y=0x42, .sp=0x51, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0x0a3c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0a3d, .a=0x29, .x=0x0a, .y=0x42, .sp=0x50, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xdf}, {.addr=0x0a3c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0a3c, .value=0x0d, .type=IO_READ},
        {.addr=0x0a3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_027D) {
    const struct CPU_State initial_cpu = {.pc=0x70dc, .a=0x6e, .x=0x1e, .y=0xf6, .sp=0xc4, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x70dc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x70dd, .a=0x6e, .x=0x1e, .y=0xf6, .sp=0xc3, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xb3}, {.addr=0x70dc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x70dc, .value=0x0d, .type=IO_READ},
        {.addr=0x70dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_027E) {
    const struct CPU_State initial_cpu = {.pc=0xd1da, .a=0x2e, .x=0x31, .y=0x22, .sp=0x20, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0xd1da, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd1db, .a=0x2e, .x=0x31, .y=0x22, .sp=0x1f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x2c}, {.addr=0xd1da, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd1da, .value=0x0d, .type=IO_READ},
        {.addr=0xd1db, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_027F) {
    const struct CPU_State initial_cpu = {.pc=0x99b3, .a=0x20, .x=0x06, .y=0x07, .sp=0x71, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0x99b3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x99b4, .a=0x20, .x=0x06, .y=0x07, .sp=0x70, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x3a}, {.addr=0x99b3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x99b3, .value=0x0d, .type=IO_READ},
        {.addr=0x99b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x3a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0280) {
    const struct CPU_State initial_cpu = {.pc=0xfb39, .a=0x94, .x=0xe4, .y=0x78, .sp=0xbe, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0xfb39, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfb3a, .a=0x94, .x=0xe4, .y=0x78, .sp=0xbd, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xb9}, {.addr=0xfb39, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfb39, .value=0x0d, .type=IO_READ},
        {.addr=0xfb3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0281) {
    const struct CPU_State initial_cpu = {.pc=0x632b, .a=0xca, .x=0xb2, .y=0x24, .sp=0xec, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0x632b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x632c, .a=0xca, .x=0xb2, .y=0x24, .sp=0xeb, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x19}, {.addr=0x632b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x632b, .value=0x0d, .type=IO_READ},
        {.addr=0x632c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0282) {
    const struct CPU_State initial_cpu = {.pc=0x0a27, .a=0xae, .x=0x54, .y=0xc2, .sp=0x17, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0x0a27, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0a28, .a=0xae, .x=0x54, .y=0xc2, .sp=0x16, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x6a}, {.addr=0x0a27, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0a27, .value=0x0d, .type=IO_READ},
        {.addr=0x0a28, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0283) {
    const struct CPU_State initial_cpu = {.pc=0xa25a, .a=0x0e, .x=0xf3, .y=0xfe, .sp=0xd2, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0xa25a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa25b, .a=0x0e, .x=0xf3, .y=0xfe, .sp=0xd1, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x76}, {.addr=0xa25a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa25a, .value=0x0d, .type=IO_READ},
        {.addr=0xa25b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0284) {
    const struct CPU_State initial_cpu = {.pc=0x8e78, .a=0x99, .x=0xeb, .y=0x0b, .sp=0xa9, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0x8e78, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8e79, .a=0x99, .x=0xeb, .y=0x0b, .sp=0xa8, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x32}, {.addr=0x8e78, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8e78, .value=0x0d, .type=IO_READ},
        {.addr=0x8e79, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0285) {
    const struct CPU_State initial_cpu = {.pc=0xfe5b, .a=0x20, .x=0xb4, .y=0x99, .sp=0xcd, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0xfe5b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfe5c, .a=0x20, .x=0xb4, .y=0x99, .sp=0xcc, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xbb}, {.addr=0xfe5b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfe5b, .value=0x0d, .type=IO_READ},
        {.addr=0xfe5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0286) {
    const struct CPU_State initial_cpu = {.pc=0xd75b, .a=0x08, .x=0x51, .y=0x11, .sp=0x7d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xd75b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd75c, .a=0x08, .x=0x51, .y=0x11, .sp=0x7c, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x1e}, {.addr=0xd75b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd75b, .value=0x0d, .type=IO_READ},
        {.addr=0xd75c, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0287) {
    const struct CPU_State initial_cpu = {.pc=0x9ce0, .a=0x1c, .x=0xd4, .y=0xc0, .sp=0x9a, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x9ce0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9ce1, .a=0x1c, .x=0xd4, .y=0xc0, .sp=0x99, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xd4}, {.addr=0x9ce0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9ce0, .value=0x0d, .type=IO_READ},
        {.addr=0x9ce1, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xd4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0288) {
    const struct CPU_State initial_cpu = {.pc=0xe4ba, .a=0xf9, .x=0x79, .y=0x52, .sp=0x9b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0xe4ba, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe4bb, .a=0xf9, .x=0x79, .y=0x52, .sp=0x9a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xb7}, {.addr=0xe4ba, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe4ba, .value=0x0d, .type=IO_READ},
        {.addr=0xe4bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0289) {
    const struct CPU_State initial_cpu = {.pc=0xa4a1, .a=0xeb, .x=0x84, .y=0xaa, .sp=0x68, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0xa4a1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa4a2, .a=0xeb, .x=0x84, .y=0xaa, .sp=0x67, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x1c}, {.addr=0xa4a1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa4a1, .value=0x0d, .type=IO_READ},
        {.addr=0xa4a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_028A) {
    const struct CPU_State initial_cpu = {.pc=0xb203, .a=0x21, .x=0x93, .y=0xb2, .sp=0x72, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0xb203, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb204, .a=0x21, .x=0x93, .y=0xb2, .sp=0x71, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xf7}, {.addr=0xb203, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb203, .value=0x0d, .type=IO_READ},
        {.addr=0xb204, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_028B) {
    const struct CPU_State initial_cpu = {.pc=0x9069, .a=0x7a, .x=0x64, .y=0x57, .sp=0x36, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0x9069, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x906a, .a=0x7a, .x=0x64, .y=0x57, .sp=0x35, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x26}, {.addr=0x9069, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9069, .value=0x0d, .type=IO_READ},
        {.addr=0x906a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_028C) {
    const struct CPU_State initial_cpu = {.pc=0xacdb, .a=0x06, .x=0xd5, .y=0xe0, .sp=0xe6, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0xacdb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xacdc, .a=0x06, .x=0xd5, .y=0xe0, .sp=0xe5, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xc1}, {.addr=0xacdb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xacdb, .value=0x0d, .type=IO_READ},
        {.addr=0xacdc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_028D) {
    const struct CPU_State initial_cpu = {.pc=0xca62, .a=0x45, .x=0x52, .y=0xae, .sp=0x7d, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xca62, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xca63, .a=0x45, .x=0x52, .y=0xae, .sp=0x7c, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xd2}, {.addr=0xca62, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xca62, .value=0x0d, .type=IO_READ},
        {.addr=0xca63, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_028E) {
    const struct CPU_State initial_cpu = {.pc=0x8ca7, .a=0xf7, .x=0xed, .y=0xf4, .sp=0x8e, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x8ca7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8ca8, .a=0xf7, .x=0xed, .y=0xf4, .sp=0x8d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x3c}, {.addr=0x8ca7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8ca7, .value=0x0d, .type=IO_READ},
        {.addr=0x8ca8, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x3c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_028F) {
    const struct CPU_State initial_cpu = {.pc=0xa92b, .a=0xc7, .x=0xd6, .y=0xff, .sp=0x1c, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0xa92b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa92c, .a=0xc7, .x=0xd6, .y=0xff, .sp=0x1b, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x28}, {.addr=0xa92b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa92b, .value=0x0d, .type=IO_READ},
        {.addr=0xa92c, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0290) {
    const struct CPU_State initial_cpu = {.pc=0x0bdc, .a=0xf2, .x=0xec, .y=0xee, .sp=0xc3, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x0bdc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0bdd, .a=0xf2, .x=0xec, .y=0xee, .sp=0xc2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x41}, {.addr=0x0bdc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0bdc, .value=0x0d, .type=IO_READ},
        {.addr=0x0bdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0291) {
    const struct CPU_State initial_cpu = {.pc=0x1ab0, .a=0x2a, .x=0x2c, .y=0x76, .sp=0xb6, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0x1ab0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1ab1, .a=0x2a, .x=0x2c, .y=0x76, .sp=0xb5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x7d}, {.addr=0x1ab0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1ab0, .value=0x0d, .type=IO_READ},
        {.addr=0x1ab1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0292) {
    const struct CPU_State initial_cpu = {.pc=0x02aa, .a=0x4a, .x=0x16, .y=0xf0, .sp=0x80, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x02aa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x02ab, .a=0x4a, .x=0x16, .y=0xf0, .sp=0x7f, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x12}, {.addr=0x02aa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x02aa, .value=0x0d, .type=IO_READ},
        {.addr=0x02ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0293) {
    const struct CPU_State initial_cpu = {.pc=0x1331, .a=0x61, .x=0x70, .y=0x14, .sp=0xf4, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0x1331, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1332, .a=0x61, .x=0x70, .y=0x14, .sp=0xf3, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xd1}, {.addr=0x1331, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1331, .value=0x0d, .type=IO_READ},
        {.addr=0x1332, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0294) {
    const struct CPU_State initial_cpu = {.pc=0xae18, .a=0x78, .x=0x4c, .y=0xd6, .sp=0x33, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0xae18, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xae19, .a=0x78, .x=0x4c, .y=0xd6, .sp=0x32, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x55}, {.addr=0xae18, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xae18, .value=0x0d, .type=IO_READ},
        {.addr=0xae19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0295) {
    const struct CPU_State initial_cpu = {.pc=0x50d9, .a=0x6d, .x=0xe8, .y=0xe4, .sp=0x35, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x50d9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x50da, .a=0x6d, .x=0xe8, .y=0xe4, .sp=0x34, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x70}, {.addr=0x50d9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x50d9, .value=0x0d, .type=IO_READ},
        {.addr=0x50da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0296) {
    const struct CPU_State initial_cpu = {.pc=0x5ad5, .a=0x8e, .x=0xbf, .y=0x04, .sp=0x2f, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x5ad5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5ad6, .a=0x8e, .x=0xbf, .y=0x04, .sp=0x2e, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x52}, {.addr=0x5ad5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5ad5, .value=0x0d, .type=IO_READ},
        {.addr=0x5ad6, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0297) {
    const struct CPU_State initial_cpu = {.pc=0x30c6, .a=0x98, .x=0xfb, .y=0xa2, .sp=0xaf, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x30c6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x30c7, .a=0x98, .x=0xfb, .y=0xa2, .sp=0xae, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x4b}, {.addr=0x30c6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x30c6, .value=0x0d, .type=IO_READ},
        {.addr=0x30c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0298) {
    const struct CPU_State initial_cpu = {.pc=0x2166, .a=0x12, .x=0xff, .y=0x2f, .sp=0x6d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0x2166, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2167, .a=0x12, .x=0xff, .y=0x2f, .sp=0x6c, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xf7}, {.addr=0x2166, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2166, .value=0x0d, .type=IO_READ},
        {.addr=0x2167, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0299) {
    const struct CPU_State initial_cpu = {.pc=0x0a2a, .a=0x28, .x=0x29, .y=0x23, .sp=0x79, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x0a2a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0a2b, .a=0x28, .x=0x29, .y=0x23, .sp=0x78, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x9e}, {.addr=0x0a2a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0a2a, .value=0x0d, .type=IO_READ},
        {.addr=0x0a2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_029A) {
    const struct CPU_State initial_cpu = {.pc=0xe342, .a=0x44, .x=0x3d, .y=0xfa, .sp=0x0c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0xe342, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe343, .a=0x44, .x=0x3d, .y=0xfa, .sp=0x0b, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x40}, {.addr=0xe342, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe342, .value=0x0d, .type=IO_READ},
        {.addr=0xe343, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_029B) {
    const struct CPU_State initial_cpu = {.pc=0x9475, .a=0xb0, .x=0x5b, .y=0x46, .sp=0xd1, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x9475, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9476, .a=0xb0, .x=0x5b, .y=0x46, .sp=0xd0, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xda}, {.addr=0x9475, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9475, .value=0x0d, .type=IO_READ},
        {.addr=0x9476, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_029C) {
    const struct CPU_State initial_cpu = {.pc=0xc7ad, .a=0x51, .x=0x55, .y=0xb1, .sp=0x17, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0xc7ad, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc7ae, .a=0x51, .x=0x55, .y=0xb1, .sp=0x16, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x55}, {.addr=0xc7ad, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc7ad, .value=0x0d, .type=IO_READ},
        {.addr=0xc7ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_029D) {
    const struct CPU_State initial_cpu = {.pc=0x55bc, .a=0x60, .x=0xb3, .y=0xfd, .sp=0x64, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x55bc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x55bd, .a=0x60, .x=0xb3, .y=0xfd, .sp=0x63, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xa8}, {.addr=0x55bc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x55bc, .value=0x0d, .type=IO_READ},
        {.addr=0x55bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_029E) {
    const struct CPU_State initial_cpu = {.pc=0x753f, .a=0x61, .x=0xe8, .y=0x3a, .sp=0x85, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x753f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7540, .a=0x61, .x=0xe8, .y=0x3a, .sp=0x84, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x8b}, {.addr=0x753f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x753f, .value=0x0d, .type=IO_READ},
        {.addr=0x7540, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_029F) {
    const struct CPU_State initial_cpu = {.pc=0x77f4, .a=0x0e, .x=0xfa, .y=0x38, .sp=0x24, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0x77f4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x77f5, .a=0x0e, .x=0xfa, .y=0x38, .sp=0x23, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xc7}, {.addr=0x77f4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x77f4, .value=0x0d, .type=IO_READ},
        {.addr=0x77f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x6d88, .a=0x2f, .x=0x90, .y=0x20, .sp=0x08, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0x6d88, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6d89, .a=0x2f, .x=0x90, .y=0x20, .sp=0x07, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x99}, {.addr=0x6d88, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6d88, .value=0x0d, .type=IO_READ},
        {.addr=0x6d89, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xbd13, .a=0xf8, .x=0x44, .y=0x70, .sp=0x47, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0xbd13, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbd14, .a=0xf8, .x=0x44, .y=0x70, .sp=0x46, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xdc}, {.addr=0xbd13, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbd13, .value=0x0d, .type=IO_READ},
        {.addr=0xbd14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x6118, .a=0xfb, .x=0x62, .y=0x19, .sp=0x72, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0x6118, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6119, .a=0xfb, .x=0x62, .y=0x19, .sp=0x71, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x16}, {.addr=0x6118, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6118, .value=0x0d, .type=IO_READ},
        {.addr=0x6119, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xf50e, .a=0x9f, .x=0x46, .y=0x4c, .sp=0xbc, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0xf50e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf50f, .a=0x9f, .x=0x46, .y=0x4c, .sp=0xbb, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xd3}, {.addr=0xf50e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf50e, .value=0x0d, .type=IO_READ},
        {.addr=0xf50f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x9fd0, .a=0x3c, .x=0x32, .y=0x96, .sp=0xba, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x9fd0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9fd1, .a=0x3c, .x=0x32, .y=0x96, .sp=0xb9, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xe2}, {.addr=0x9fd0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9fd0, .value=0x0d, .type=IO_READ},
        {.addr=0x9fd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x353e, .a=0xc7, .x=0x78, .y=0x2a, .sp=0xea, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0x353e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x353f, .a=0xc7, .x=0x78, .y=0x2a, .sp=0xe9, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x81}, {.addr=0x353e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x353e, .value=0x0d, .type=IO_READ},
        {.addr=0x353f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xe6e6, .a=0x75, .x=0x3a, .y=0x2b, .sp=0x35, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0xe6e6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe6e7, .a=0x75, .x=0x3a, .y=0x2b, .sp=0x34, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xc6}, {.addr=0xe6e6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe6e6, .value=0x0d, .type=IO_READ},
        {.addr=0xe6e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x37ca, .a=0x56, .x=0xdf, .y=0x5a, .sp=0xf6, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x00}, {.addr=0x37ca, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x37cb, .a=0x56, .x=0xdf, .y=0x5a, .sp=0xf5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x8c}, {.addr=0x37ca, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x37ca, .value=0x0d, .type=IO_READ},
        {.addr=0x37cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x8c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x4218, .a=0xee, .x=0x93, .y=0x91, .sp=0x62, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0x4218, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4219, .a=0xee, .x=0x93, .y=0x91, .sp=0x61, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xd0}, {.addr=0x4218, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4218, .value=0x0d, .type=IO_READ},
        {.addr=0x4219, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xd0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x1abb, .a=0xdf, .x=0x4b, .y=0xdd, .sp=0x89, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x1abb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1abc, .a=0xdf, .x=0x4b, .y=0xdd, .sp=0x88, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x67}, {.addr=0x1abb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1abb, .value=0x0d, .type=IO_READ},
        {.addr=0x1abc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x1145, .a=0xc2, .x=0x7a, .y=0x3a, .sp=0x07, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x1145, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1146, .a=0xc2, .x=0x7a, .y=0x3a, .sp=0x06, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x7b}, {.addr=0x1145, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1145, .value=0x0d, .type=IO_READ},
        {.addr=0x1146, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x34e2, .a=0xdb, .x=0x44, .y=0xe6, .sp=0xc4, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x34e2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x34e3, .a=0xdb, .x=0x44, .y=0xe6, .sp=0xc3, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x48}, {.addr=0x34e2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x34e2, .value=0x0d, .type=IO_READ},
        {.addr=0x34e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xd297, .a=0x9f, .x=0x56, .y=0x33, .sp=0x12, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xd297, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd298, .a=0x9f, .x=0x56, .y=0x33, .sp=0x11, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xd1}, {.addr=0xd297, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd297, .value=0x0d, .type=IO_READ},
        {.addr=0xd298, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xdb77, .a=0x44, .x=0x9f, .y=0xa2, .sp=0x0d, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x00}, {.addr=0xdb77, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdb78, .a=0x44, .x=0x9f, .y=0xa2, .sp=0x0c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x84}, {.addr=0xdb77, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdb77, .value=0x0d, .type=IO_READ},
        {.addr=0xdb78, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x681d, .a=0x9e, .x=0xf1, .y=0x50, .sp=0xbc, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x681d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x681e, .a=0x9e, .x=0xf1, .y=0x50, .sp=0xbb, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xf2}, {.addr=0x681d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x681d, .value=0x0d, .type=IO_READ},
        {.addr=0x681e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x33ee, .a=0x11, .x=0x91, .y=0x83, .sp=0x11, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x33ee, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x33ef, .a=0x11, .x=0x91, .y=0x83, .sp=0x10, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xd4}, {.addr=0x33ee, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x33ee, .value=0x0d, .type=IO_READ},
        {.addr=0x33ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xd4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x1dcf, .a=0xc0, .x=0x1d, .y=0xb7, .sp=0x57, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x1dcf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1dd0, .a=0xc0, .x=0x1d, .y=0xb7, .sp=0x56, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x56}, {.addr=0x1dcf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1dcf, .value=0x0d, .type=IO_READ},
        {.addr=0x1dd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x9150, .a=0xe5, .x=0x72, .y=0xdf, .sp=0x72, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0x9150, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9151, .a=0xe5, .x=0x72, .y=0xdf, .sp=0x71, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xe7}, {.addr=0x9150, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9150, .value=0x0d, .type=IO_READ},
        {.addr=0x9151, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x1040, .a=0x37, .x=0x25, .y=0xf5, .sp=0x94, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x1040, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1041, .a=0x37, .x=0x25, .y=0xf5, .sp=0x93, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x26}, {.addr=0x1040, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1040, .value=0x0d, .type=IO_READ},
        {.addr=0x1041, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x0746, .a=0x12, .x=0xcf, .y=0x1a, .sp=0x29, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0x0746, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0747, .a=0x12, .x=0xcf, .y=0x1a, .sp=0x28, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x93}, {.addr=0x0746, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0746, .value=0x0d, .type=IO_READ},
        {.addr=0x0747, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xa25f, .a=0x17, .x=0x70, .y=0x4a, .sp=0x25, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0xa25f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa260, .a=0x17, .x=0x70, .y=0x4a, .sp=0x24, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xdd}, {.addr=0xa25f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa25f, .value=0x0d, .type=IO_READ},
        {.addr=0xa260, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xe08f, .a=0x92, .x=0xe3, .y=0x0c, .sp=0x1c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0xe08f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe090, .a=0x92, .x=0xe3, .y=0x0c, .sp=0x1b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xd8}, {.addr=0xe08f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe08f, .value=0x0d, .type=IO_READ},
        {.addr=0xe090, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xa5f6, .a=0xaa, .x=0xeb, .y=0x91, .sp=0x93, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0xa5f6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa5f7, .a=0xaa, .x=0xeb, .y=0x91, .sp=0x92, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x1d}, {.addr=0xa5f6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa5f6, .value=0x0d, .type=IO_READ},
        {.addr=0xa5f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x3faf, .a=0x2d, .x=0x27, .y=0xc3, .sp=0x7f, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x3faf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3fb0, .a=0x2d, .x=0x27, .y=0xc3, .sp=0x7e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x15}, {.addr=0x3faf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3faf, .value=0x0d, .type=IO_READ},
        {.addr=0x3fb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xe309, .a=0xee, .x=0xf8, .y=0x76, .sp=0xf5, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0xe309, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe30a, .a=0xee, .x=0xf8, .y=0x76, .sp=0xf4, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xcf}, {.addr=0xe309, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe309, .value=0x0d, .type=IO_READ},
        {.addr=0xe30a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xe1f9, .a=0xeb, .x=0xac, .y=0x0c, .sp=0x3c, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0xe1f9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe1fa, .a=0xeb, .x=0xac, .y=0x0c, .sp=0x3b, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xbb}, {.addr=0xe1f9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe1f9, .value=0x0d, .type=IO_READ},
        {.addr=0xe1fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x8097, .a=0xb7, .x=0xdc, .y=0x45, .sp=0xb8, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x8097, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8098, .a=0xb7, .x=0xdc, .y=0x45, .sp=0xb7, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xc9}, {.addr=0x8097, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8097, .value=0x0d, .type=IO_READ},
        {.addr=0x8098, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xd3a8, .a=0x2d, .x=0x25, .y=0xbe, .sp=0xcf, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0xd3a8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd3a9, .a=0x2d, .x=0x25, .y=0xbe, .sp=0xce, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x6a}, {.addr=0xd3a8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd3a8, .value=0x0d, .type=IO_READ},
        {.addr=0xd3a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xf72d, .a=0xfb, .x=0x65, .y=0x83, .sp=0x22, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0xf72d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf72e, .a=0xfb, .x=0x65, .y=0x83, .sp=0x21, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xce}, {.addr=0xf72d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf72d, .value=0x0d, .type=IO_READ},
        {.addr=0xf72e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xd47f, .a=0xc9, .x=0x1b, .y=0x86, .sp=0xf2, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0xd47f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd480, .a=0xc9, .x=0x1b, .y=0x86, .sp=0xf1, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xc2}, {.addr=0xd47f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd47f, .value=0x0d, .type=IO_READ},
        {.addr=0xd480, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xa96f, .a=0x23, .x=0x36, .y=0xa6, .sp=0x0e, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0xa96f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa970, .a=0x23, .x=0x36, .y=0xa6, .sp=0x0d, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xcb}, {.addr=0xa96f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa96f, .value=0x0d, .type=IO_READ},
        {.addr=0xa970, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0xcb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x5d4c, .a=0x67, .x=0x83, .y=0xc5, .sp=0xcc, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x5d4c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5d4d, .a=0x67, .x=0x83, .y=0xc5, .sp=0xcb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xd8}, {.addr=0x5d4c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5d4c, .value=0x0d, .type=IO_READ},
        {.addr=0x5d4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x0933, .a=0xe8, .x=0xc0, .y=0xa4, .sp=0x7a, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x0933, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0934, .a=0xe8, .x=0xc0, .y=0xa4, .sp=0x79, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x57}, {.addr=0x0933, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0933, .value=0x0d, .type=IO_READ},
        {.addr=0x0934, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x015e, .a=0xe4, .x=0x87, .y=0xac, .sp=0xb3, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x0d}, {.addr=0x01b3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x015f, .a=0xe4, .x=0x87, .y=0xac, .sp=0xb2, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x0d}, {.addr=0x01b3, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x015e, .value=0x0d, .type=IO_READ},
        {.addr=0x015f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xbd6f, .a=0xcd, .x=0x6e, .y=0xb7, .sp=0x1e, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x00}, {.addr=0xbd6f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbd70, .a=0xcd, .x=0x6e, .y=0xb7, .sp=0x1d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x44}, {.addr=0xbd6f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbd6f, .value=0x0d, .type=IO_READ},
        {.addr=0xbd70, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xc75d, .a=0x8a, .x=0x6d, .y=0x19, .sp=0xfa, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0xc75d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc75e, .a=0x8a, .x=0x6d, .y=0x19, .sp=0xf9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x65}, {.addr=0xc75d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc75d, .value=0x0d, .type=IO_READ},
        {.addr=0xc75e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x1351, .a=0xcd, .x=0x72, .y=0x77, .sp=0x6c, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0x1351, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1352, .a=0xcd, .x=0x72, .y=0x77, .sp=0x6b, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x9a}, {.addr=0x1351, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1351, .value=0x0d, .type=IO_READ},
        {.addr=0x1352, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x351e, .a=0xf1, .x=0xe6, .y=0xcc, .sp=0xfb, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x351e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x351f, .a=0xf1, .x=0xe6, .y=0xcc, .sp=0xfa, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x06}, {.addr=0x351e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x351e, .value=0x0d, .type=IO_READ},
        {.addr=0x351f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xddec, .a=0x30, .x=0x4a, .y=0x43, .sp=0xb1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0xddec, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdded, .a=0x30, .x=0x4a, .y=0x43, .sp=0xb0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x6d}, {.addr=0xddec, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xddec, .value=0x0d, .type=IO_READ},
        {.addr=0xdded, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x5522, .a=0xdb, .x=0x57, .y=0xde, .sp=0xf8, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x5522, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5523, .a=0xdb, .x=0x57, .y=0xde, .sp=0xf7, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xfc}, {.addr=0x5522, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5522, .value=0x0d, .type=IO_READ},
        {.addr=0x5523, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x9dcb, .a=0x00, .x=0xfa, .y=0xfd, .sp=0xe4, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x9dcb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9dcc, .a=0x00, .x=0xfa, .y=0xfd, .sp=0xe3, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xf2}, {.addr=0x9dcb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9dcb, .value=0x0d, .type=IO_READ},
        {.addr=0x9dcc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x7222, .a=0x68, .x=0x3c, .y=0x69, .sp=0x25, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0x7222, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7223, .a=0x68, .x=0x3c, .y=0x69, .sp=0x24, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x1b}, {.addr=0x7222, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7222, .value=0x0d, .type=IO_READ},
        {.addr=0x7223, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x1887, .a=0x1a, .x=0x42, .y=0x6e, .sp=0x86, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0x1887, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1888, .a=0x1a, .x=0x42, .y=0x6e, .sp=0x85, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x39}, {.addr=0x1887, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1887, .value=0x0d, .type=IO_READ},
        {.addr=0x1888, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x39, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x6edd, .a=0x02, .x=0x80, .y=0xbe, .sp=0xcd, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0x6edd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6ede, .a=0x02, .x=0x80, .y=0xbe, .sp=0xcc, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x6e}, {.addr=0x6edd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6edd, .value=0x0d, .type=IO_READ},
        {.addr=0x6ede, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x4494, .a=0x67, .x=0x9d, .y=0xfd, .sp=0x78, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x4494, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4495, .a=0x67, .x=0x9d, .y=0xfd, .sp=0x77, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x97}, {.addr=0x4494, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4494, .value=0x0d, .type=IO_READ},
        {.addr=0x4495, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x516f, .a=0x11, .x=0x0c, .y=0x92, .sp=0xc7, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x516f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5170, .a=0x11, .x=0x0c, .y=0x92, .sp=0xc6, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xfb}, {.addr=0x516f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x516f, .value=0x0d, .type=IO_READ},
        {.addr=0x5170, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xbc2f, .a=0xa1, .x=0x09, .y=0xd6, .sp=0x51, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0xbc2f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbc30, .a=0xa1, .x=0x09, .y=0xd6, .sp=0x50, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x4f}, {.addr=0xbc2f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbc2f, .value=0x0d, .type=IO_READ},
        {.addr=0xbc30, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xcfa3, .a=0xf4, .x=0xca, .y=0x0a, .sp=0x86, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0xcfa3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcfa4, .a=0xf4, .x=0xca, .y=0x0a, .sp=0x85, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x20}, {.addr=0xcfa3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcfa3, .value=0x0d, .type=IO_READ},
        {.addr=0xcfa4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xa4f8, .a=0x00, .x=0xe7, .y=0x58, .sp=0xda, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0xa4f8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa4f9, .a=0x00, .x=0xe7, .y=0x58, .sp=0xd9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xa4}, {.addr=0xa4f8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa4f8, .value=0x0d, .type=IO_READ},
        {.addr=0xa4f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xc1be, .a=0x4a, .x=0x73, .y=0x21, .sp=0xbf, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0xc1be, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc1bf, .a=0x4a, .x=0x73, .y=0x21, .sp=0xbe, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x1c}, {.addr=0xc1be, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc1be, .value=0x0d, .type=IO_READ},
        {.addr=0xc1bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x5a56, .a=0x5c, .x=0xc9, .y=0xee, .sp=0x66, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0x5a56, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5a57, .a=0x5c, .x=0xc9, .y=0xee, .sp=0x65, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x27}, {.addr=0x5a56, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5a56, .value=0x0d, .type=IO_READ},
        {.addr=0x5a57, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xaea7, .a=0x3c, .x=0x54, .y=0x4f, .sp=0xf9, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0xaea7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xaea8, .a=0x3c, .x=0x54, .y=0x4f, .sp=0xf8, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x9e}, {.addr=0xaea7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xaea7, .value=0x0d, .type=IO_READ},
        {.addr=0xaea8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x82a5, .a=0x86, .x=0x5e, .y=0xc3, .sp=0x9b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x82a5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x82a6, .a=0x86, .x=0x5e, .y=0xc3, .sp=0x9a, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xaf}, {.addr=0x82a5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x82a5, .value=0x0d, .type=IO_READ},
        {.addr=0x82a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xb15d, .a=0x59, .x=0xe1, .y=0x64, .sp=0x31, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0xb15d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb15e, .a=0x59, .x=0xe1, .y=0x64, .sp=0x30, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x6a}, {.addr=0xb15d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb15d, .value=0x0d, .type=IO_READ},
        {.addr=0xb15e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xc42d, .a=0x91, .x=0x08, .y=0xca, .sp=0x78, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xc42d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc42e, .a=0x91, .x=0x08, .y=0xca, .sp=0x77, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xfe}, {.addr=0xc42d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc42d, .value=0x0d, .type=IO_READ},
        {.addr=0xc42e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xe161, .a=0x8c, .x=0x91, .y=0x75, .sp=0x5d, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x00}, {.addr=0xe161, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe162, .a=0x8c, .x=0x91, .y=0x75, .sp=0x5c, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x76}, {.addr=0xe161, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe161, .value=0x0d, .type=IO_READ},
        {.addr=0xe162, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xc361, .a=0x6c, .x=0xf8, .y=0x9f, .sp=0x67, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xc361, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc362, .a=0x6c, .x=0xf8, .y=0x9f, .sp=0x66, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x58}, {.addr=0xc361, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc361, .value=0x0d, .type=IO_READ},
        {.addr=0xc362, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xda79, .a=0x65, .x=0xf3, .y=0xe1, .sp=0xfc, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xda79, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xda7a, .a=0x65, .x=0xf3, .y=0xe1, .sp=0xfb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x60}, {.addr=0xda79, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xda79, .value=0x0d, .type=IO_READ},
        {.addr=0xda7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xc0ac, .a=0x93, .x=0xe8, .y=0x80, .sp=0x8e, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0xc0ac, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc0ad, .a=0x93, .x=0xe8, .y=0x80, .sp=0x8d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x81}, {.addr=0xc0ac, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc0ac, .value=0x0d, .type=IO_READ},
        {.addr=0xc0ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x54cb, .a=0x3c, .x=0x2a, .y=0xa9, .sp=0xac, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0x54cb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x54cc, .a=0x3c, .x=0x2a, .y=0xa9, .sp=0xab, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x57}, {.addr=0x54cb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x54cb, .value=0x0d, .type=IO_READ},
        {.addr=0x54cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x7218, .a=0xab, .x=0x4c, .y=0x65, .sp=0xbb, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x7218, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7219, .a=0xab, .x=0x4c, .y=0x65, .sp=0xba, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x9e}, {.addr=0x7218, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7218, .value=0x0d, .type=IO_READ},
        {.addr=0x7219, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x54d3, .a=0xb2, .x=0xd1, .y=0x08, .sp=0x48, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0x54d3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x54d4, .a=0xb2, .x=0xd1, .y=0x08, .sp=0x47, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xd9}, {.addr=0x54d3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x54d3, .value=0x0d, .type=IO_READ},
        {.addr=0x54d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x3e0e, .a=0xf1, .x=0x19, .y=0x42, .sp=0x2d, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0x3e0e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3e0f, .a=0xf1, .x=0x19, .y=0x42, .sp=0x2c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xd8}, {.addr=0x3e0e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3e0e, .value=0x0d, .type=IO_READ},
        {.addr=0x3e0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x9fc2, .a=0xfb, .x=0x34, .y=0xe0, .sp=0xc7, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x9fc2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9fc3, .a=0xfb, .x=0x34, .y=0xe0, .sp=0xc6, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xe3}, {.addr=0x9fc2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9fc2, .value=0x0d, .type=IO_READ},
        {.addr=0x9fc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x99da, .a=0xed, .x=0xff, .y=0xa5, .sp=0x8d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x99da, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x99db, .a=0xed, .x=0xff, .y=0xa5, .sp=0x8c, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x77}, {.addr=0x99da, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x99da, .value=0x0d, .type=IO_READ},
        {.addr=0x99db, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xab85, .a=0xed, .x=0xfa, .y=0xfb, .sp=0xa6, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0xab85, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xab86, .a=0xed, .x=0xfa, .y=0xfb, .sp=0xa5, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x86}, {.addr=0xab85, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xab85, .value=0x0d, .type=IO_READ},
        {.addr=0xab86, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x7685, .a=0x89, .x=0x7b, .y=0x53, .sp=0xff, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0x7685, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7686, .a=0x89, .x=0x7b, .y=0x53, .sp=0xfe, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x47}, {.addr=0x7685, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7685, .value=0x0d, .type=IO_READ},
        {.addr=0x7686, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x47, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xc035, .a=0xcd, .x=0x12, .y=0xf8, .sp=0x16, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0xc035, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc036, .a=0xcd, .x=0x12, .y=0xf8, .sp=0x15, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x0a}, {.addr=0xc035, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc035, .value=0x0d, .type=IO_READ},
        {.addr=0xc036, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xc164, .a=0xfc, .x=0x5e, .y=0x3a, .sp=0xee, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0xc164, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc165, .a=0xfc, .x=0x5e, .y=0x3a, .sp=0xed, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xe1}, {.addr=0xc164, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc164, .value=0x0d, .type=IO_READ},
        {.addr=0xc165, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xc296, .a=0x6b, .x=0x10, .y=0xfa, .sp=0xfd, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0xc296, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc297, .a=0x6b, .x=0x10, .y=0xfa, .sp=0xfc, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x14}, {.addr=0xc296, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc296, .value=0x0d, .type=IO_READ},
        {.addr=0xc297, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x14, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x0221, .a=0x14, .x=0xd2, .y=0xd1, .sp=0xe2, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x0221, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0222, .a=0x14, .x=0xd2, .y=0xd1, .sp=0xe1, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x42}, {.addr=0x0221, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0221, .value=0x0d, .type=IO_READ},
        {.addr=0x0222, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x5990, .a=0x80, .x=0xaa, .y=0x5a, .sp=0x2c, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x5990, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5991, .a=0x80, .x=0xaa, .y=0x5a, .sp=0x2b, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x43}, {.addr=0x5990, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5990, .value=0x0d, .type=IO_READ},
        {.addr=0x5991, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x3cf0, .a=0x00, .x=0xf9, .y=0xc3, .sp=0xbf, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0x3cf0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3cf1, .a=0x00, .x=0xf9, .y=0xc3, .sp=0xbe, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xfa}, {.addr=0x3cf0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3cf0, .value=0x0d, .type=IO_READ},
        {.addr=0x3cf1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x5698, .a=0xe4, .x=0xe4, .y=0xbc, .sp=0xbf, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0x5698, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5699, .a=0xe4, .x=0xe4, .y=0xbc, .sp=0xbe, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xd7}, {.addr=0x5698, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5698, .value=0x0d, .type=IO_READ},
        {.addr=0x5699, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xe6a4, .a=0x23, .x=0x45, .y=0x6e, .sp=0xd2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0xe6a4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe6a5, .a=0x23, .x=0x45, .y=0x6e, .sp=0xd1, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xee}, {.addr=0xe6a4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe6a4, .value=0x0d, .type=IO_READ},
        {.addr=0xe6a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x5067, .a=0xd5, .x=0xd6, .y=0x8c, .sp=0x39, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0x5067, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5068, .a=0xd5, .x=0xd6, .y=0x8c, .sp=0x38, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x08}, {.addr=0x5067, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5067, .value=0x0d, .type=IO_READ},
        {.addr=0x5068, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x5c70, .a=0xad, .x=0x00, .y=0xf0, .sp=0xf3, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0x5c70, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5c71, .a=0xad, .x=0x00, .y=0xf0, .sp=0xf2, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xc4}, {.addr=0x5c70, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5c70, .value=0x0d, .type=IO_READ},
        {.addr=0x5c71, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xc4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x1ec4, .a=0xeb, .x=0xe3, .y=0xf9, .sp=0x0a, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x1ec4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1ec5, .a=0xeb, .x=0xe3, .y=0xf9, .sp=0x09, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x93}, {.addr=0x1ec4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1ec4, .value=0x0d, .type=IO_READ},
        {.addr=0x1ec5, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xad9f, .a=0x12, .x=0x7a, .y=0x70, .sp=0x9e, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0xad9f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xada0, .a=0x12, .x=0x7a, .y=0x70, .sp=0x9d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x15}, {.addr=0xad9f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xad9f, .value=0x0d, .type=IO_READ},
        {.addr=0xada0, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x44ef, .a=0x5f, .x=0x03, .y=0x80, .sp=0x23, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x44ef, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x44f0, .a=0x5f, .x=0x03, .y=0x80, .sp=0x22, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x81}, {.addr=0x44ef, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x44ef, .value=0x0d, .type=IO_READ},
        {.addr=0x44f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x585d, .a=0x51, .x=0x11, .y=0xa5, .sp=0xb4, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x585d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x585e, .a=0x51, .x=0x11, .y=0xa5, .sp=0xb3, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x2f}, {.addr=0x585d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x585d, .value=0x0d, .type=IO_READ},
        {.addr=0x585e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xb3f4, .a=0x4e, .x=0xd9, .y=0x07, .sp=0x6b, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0xb3f4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb3f5, .a=0x4e, .x=0xd9, .y=0x07, .sp=0x6a, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xaa}, {.addr=0xb3f4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb3f4, .value=0x0d, .type=IO_READ},
        {.addr=0xb3f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xce38, .a=0x40, .x=0x8a, .y=0x08, .sp=0x04, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xce38, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xce39, .a=0x40, .x=0x8a, .y=0x08, .sp=0x03, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xde}, {.addr=0xce38, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xce38, .value=0x0d, .type=IO_READ},
        {.addr=0xce39, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xdf12, .a=0xce, .x=0x31, .y=0xc0, .sp=0x72, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0xdf12, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdf13, .a=0xce, .x=0x31, .y=0xc0, .sp=0x71, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x87}, {.addr=0xdf12, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdf12, .value=0x0d, .type=IO_READ},
        {.addr=0xdf13, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x35bc, .a=0x20, .x=0x69, .y=0xc9, .sp=0x0f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0x35bc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x35bd, .a=0x20, .x=0x69, .y=0xc9, .sp=0x0e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0xa9}, {.addr=0x35bc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x35bc, .value=0x0d, .type=IO_READ},
        {.addr=0x35bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x8e70, .a=0xd7, .x=0x8f, .y=0xc8, .sp=0xe5, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0x8e70, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8e71, .a=0xd7, .x=0x8f, .y=0xc8, .sp=0xe4, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x24}, {.addr=0x8e70, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8e70, .value=0x0d, .type=IO_READ},
        {.addr=0x8e71, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x17ac, .a=0x20, .x=0x80, .y=0xe9, .sp=0x27, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0x17ac, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x17ad, .a=0x20, .x=0x80, .y=0xe9, .sp=0x26, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x19}, {.addr=0x17ac, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x17ac, .value=0x0d, .type=IO_READ},
        {.addr=0x17ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x4950, .a=0xd0, .x=0xde, .y=0x65, .sp=0x44, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x4950, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4951, .a=0xd0, .x=0xde, .y=0x65, .sp=0x43, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x53}, {.addr=0x4950, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4950, .value=0x0d, .type=IO_READ},
        {.addr=0x4951, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xbc00, .a=0xfc, .x=0xe1, .y=0xcc, .sp=0x06, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0xbc00, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbc01, .a=0xfc, .x=0xe1, .y=0xcc, .sp=0x05, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x5d}, {.addr=0xbc00, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbc00, .value=0x0d, .type=IO_READ},
        {.addr=0xbc01, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xf001, .a=0x28, .x=0xc0, .y=0x26, .sp=0x16, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0xf001, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf002, .a=0x28, .x=0xc0, .y=0x26, .sp=0x15, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x4a}, {.addr=0xf001, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf001, .value=0x0d, .type=IO_READ},
        {.addr=0xf002, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x2db9, .a=0xf2, .x=0x60, .y=0x1a, .sp=0x23, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x2db9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2dba, .a=0xf2, .x=0x60, .y=0x1a, .sp=0x22, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x08}, {.addr=0x2db9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2db9, .value=0x0d, .type=IO_READ},
        {.addr=0x2dba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x875c, .a=0x42, .x=0x3a, .y=0xfa, .sp=0x1b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x875c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x875d, .a=0x42, .x=0x3a, .y=0xfa, .sp=0x1a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x21}, {.addr=0x875c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x875c, .value=0x0d, .type=IO_READ},
        {.addr=0x875d, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x7647, .a=0x65, .x=0xe7, .y=0xc9, .sp=0x61, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0x7647, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7648, .a=0x65, .x=0xe7, .y=0xc9, .sp=0x60, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x58}, {.addr=0x7647, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7647, .value=0x0d, .type=IO_READ},
        {.addr=0x7648, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xe5c9, .a=0x3b, .x=0xd9, .y=0x80, .sp=0x52, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0xe5c9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe5ca, .a=0x3b, .x=0xd9, .y=0x80, .sp=0x51, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xff}, {.addr=0xe5c9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe5c9, .value=0x0d, .type=IO_READ},
        {.addr=0xe5ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x1bee, .a=0x7f, .x=0x72, .y=0x2a, .sp=0x38, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x1bee, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1bef, .a=0x7f, .x=0x72, .y=0x2a, .sp=0x37, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x0f}, {.addr=0x1bee, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1bee, .value=0x0d, .type=IO_READ},
        {.addr=0x1bef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x491b, .a=0x04, .x=0xfc, .y=0x5a, .sp=0xc5, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0x491b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x491c, .a=0x04, .x=0xfc, .y=0x5a, .sp=0xc4, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x26}, {.addr=0x491b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x491b, .value=0x0d, .type=IO_READ},
        {.addr=0x491c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0300) {
    const struct CPU_State initial_cpu = {.pc=0xfb1e, .a=0x42, .x=0x4a, .y=0xfa, .sp=0xcf, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0xfb1e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfb1f, .a=0x42, .x=0x4a, .y=0xfa, .sp=0xce, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xbd}, {.addr=0xfb1e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfb1e, .value=0x0d, .type=IO_READ},
        {.addr=0xfb1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0301) {
    const struct CPU_State initial_cpu = {.pc=0x983a, .a=0x2e, .x=0xb8, .y=0xc9, .sp=0x89, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x983a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x983b, .a=0x2e, .x=0xb8, .y=0xc9, .sp=0x88, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x30}, {.addr=0x983a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x983a, .value=0x0d, .type=IO_READ},
        {.addr=0x983b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0302) {
    const struct CPU_State initial_cpu = {.pc=0x3e0b, .a=0xd5, .x=0x76, .y=0x41, .sp=0x6d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0x3e0b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3e0c, .a=0xd5, .x=0x76, .y=0x41, .sp=0x6c, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x9b}, {.addr=0x3e0b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3e0b, .value=0x0d, .type=IO_READ},
        {.addr=0x3e0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0303) {
    const struct CPU_State initial_cpu = {.pc=0x3394, .a=0x3c, .x=0x05, .y=0xe7, .sp=0x3d, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0x3394, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3395, .a=0x3c, .x=0x05, .y=0xe7, .sp=0x3c, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x83}, {.addr=0x3394, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3394, .value=0x0d, .type=IO_READ},
        {.addr=0x3395, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0304) {
    const struct CPU_State initial_cpu = {.pc=0xdbc4, .a=0x5c, .x=0xa6, .y=0xf7, .sp=0x44, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0xdbc4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdbc5, .a=0x5c, .x=0xa6, .y=0xf7, .sp=0x43, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xab}, {.addr=0xdbc4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdbc4, .value=0x0d, .type=IO_READ},
        {.addr=0xdbc5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xab, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0305) {
    const struct CPU_State initial_cpu = {.pc=0xa72f, .a=0x92, .x=0x61, .y=0x82, .sp=0xc1, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0xa72f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa730, .a=0x92, .x=0x61, .y=0x82, .sp=0xc0, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xe3}, {.addr=0xa72f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa72f, .value=0x0d, .type=IO_READ},
        {.addr=0xa730, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0306) {
    const struct CPU_State initial_cpu = {.pc=0xc145, .a=0x7b, .x=0x96, .y=0x73, .sp=0x59, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0xc145, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc146, .a=0x7b, .x=0x96, .y=0x73, .sp=0x58, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x50}, {.addr=0xc145, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc145, .value=0x0d, .type=IO_READ},
        {.addr=0xc146, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x50, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0307) {
    const struct CPU_State initial_cpu = {.pc=0xe669, .a=0x4c, .x=0x53, .y=0xd4, .sp=0x41, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0xe669, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe66a, .a=0x4c, .x=0x53, .y=0xd4, .sp=0x40, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x47}, {.addr=0xe669, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe669, .value=0x0d, .type=IO_READ},
        {.addr=0xe66a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x47, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0308) {
    const struct CPU_State initial_cpu = {.pc=0x20d5, .a=0x87, .x=0xce, .y=0xe7, .sp=0xc9, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0x20d5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x20d6, .a=0x87, .x=0xce, .y=0xe7, .sp=0xc8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x71}, {.addr=0x20d5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x20d5, .value=0x0d, .type=IO_READ},
        {.addr=0x20d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0309) {
    const struct CPU_State initial_cpu = {.pc=0x42da, .a=0x25, .x=0xcc, .y=0x21, .sp=0xcb, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0x42da, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x42db, .a=0x25, .x=0xcc, .y=0x21, .sp=0xca, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x8e}, {.addr=0x42da, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x42da, .value=0x0d, .type=IO_READ},
        {.addr=0x42db, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_030A) {
    const struct CPU_State initial_cpu = {.pc=0x448d, .a=0x3f, .x=0x11, .y=0x2c, .sp=0xb8, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x448d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x448e, .a=0x3f, .x=0x11, .y=0x2c, .sp=0xb7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xc8}, {.addr=0x448d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x448d, .value=0x0d, .type=IO_READ},
        {.addr=0x448e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_030B) {
    const struct CPU_State initial_cpu = {.pc=0x6c8f, .a=0x37, .x=0x60, .y=0xa1, .sp=0xf6, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x00}, {.addr=0x6c8f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6c90, .a=0x37, .x=0x60, .y=0xa1, .sp=0xf5, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xac}, {.addr=0x6c8f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6c8f, .value=0x0d, .type=IO_READ},
        {.addr=0x6c90, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_030C) {
    const struct CPU_State initial_cpu = {.pc=0x3cd5, .a=0xa8, .x=0xe3, .y=0x7e, .sp=0x54, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0x3cd5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3cd6, .a=0xa8, .x=0xe3, .y=0x7e, .sp=0x53, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x7d}, {.addr=0x3cd5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3cd5, .value=0x0d, .type=IO_READ},
        {.addr=0x3cd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_030D) {
    const struct CPU_State initial_cpu = {.pc=0x7658, .a=0x6d, .x=0xee, .y=0x59, .sp=0x7a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x7658, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7659, .a=0x6d, .x=0xee, .y=0x59, .sp=0x79, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x5f}, {.addr=0x7658, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7658, .value=0x0d, .type=IO_READ},
        {.addr=0x7659, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_030E) {
    const struct CPU_State initial_cpu = {.pc=0xecac, .a=0xf3, .x=0x44, .y=0x27, .sp=0x13, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0xecac, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xecad, .a=0xf3, .x=0x44, .y=0x27, .sp=0x12, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x7e}, {.addr=0xecac, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xecac, .value=0x0d, .type=IO_READ},
        {.addr=0xecad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_030F) {
    const struct CPU_State initial_cpu = {.pc=0xde0c, .a=0xf6, .x=0xc5, .y=0x64, .sp=0xee, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0xde0c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xde0d, .a=0xf6, .x=0xc5, .y=0x64, .sp=0xed, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x27}, {.addr=0xde0c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xde0c, .value=0x0d, .type=IO_READ},
        {.addr=0xde0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0310) {
    const struct CPU_State initial_cpu = {.pc=0x5674, .a=0xb6, .x=0x95, .y=0xaa, .sp=0xdf, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x5674, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5675, .a=0xb6, .x=0x95, .y=0xaa, .sp=0xde, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xf0}, {.addr=0x5674, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5674, .value=0x0d, .type=IO_READ},
        {.addr=0x5675, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0311) {
    const struct CPU_State initial_cpu = {.pc=0xa372, .a=0x34, .x=0x06, .y=0xb2, .sp=0x42, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0xa372, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa373, .a=0x34, .x=0x06, .y=0xb2, .sp=0x41, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x13}, {.addr=0xa372, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa372, .value=0x0d, .type=IO_READ},
        {.addr=0xa373, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0312) {
    const struct CPU_State initial_cpu = {.pc=0xc212, .a=0x21, .x=0xe1, .y=0x25, .sp=0xf2, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0xc212, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc213, .a=0x21, .x=0xe1, .y=0x25, .sp=0xf1, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xd6}, {.addr=0xc212, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc212, .value=0x0d, .type=IO_READ},
        {.addr=0xc213, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0313) {
    const struct CPU_State initial_cpu = {.pc=0xadaf, .a=0x0d, .x=0x08, .y=0x95, .sp=0x6e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0xadaf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xadb0, .a=0x0d, .x=0x08, .y=0x95, .sp=0x6d, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x66}, {.addr=0xadaf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xadaf, .value=0x0d, .type=IO_READ},
        {.addr=0xadb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0314) {
    const struct CPU_State initial_cpu = {.pc=0xe425, .a=0x97, .x=0x6d, .y=0x96, .sp=0x73, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0xe425, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe426, .a=0x97, .x=0x6d, .y=0x96, .sp=0x72, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xcb}, {.addr=0xe425, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe425, .value=0x0d, .type=IO_READ},
        {.addr=0xe426, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xcb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0315) {
    const struct CPU_State initial_cpu = {.pc=0xc759, .a=0xab, .x=0x2f, .y=0x6b, .sp=0xd9, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xc759, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc75a, .a=0xab, .x=0x2f, .y=0x6b, .sp=0xd8, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xbb}, {.addr=0xc759, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc759, .value=0x0d, .type=IO_READ},
        {.addr=0xc75a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0316) {
    const struct CPU_State initial_cpu = {.pc=0x152d, .a=0xbd, .x=0x34, .y=0xa0, .sp=0xd3, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x152d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x152e, .a=0xbd, .x=0x34, .y=0xa0, .sp=0xd2, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x42}, {.addr=0x152d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x152d, .value=0x0d, .type=IO_READ},
        {.addr=0x152e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0317) {
    const struct CPU_State initial_cpu = {.pc=0x1273, .a=0x8a, .x=0x95, .y=0x22, .sp=0x1d, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0x1273, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1274, .a=0x8a, .x=0x95, .y=0x22, .sp=0x1c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xc9}, {.addr=0x1273, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1273, .value=0x0d, .type=IO_READ},
        {.addr=0x1274, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0318) {
    const struct CPU_State initial_cpu = {.pc=0x93ce, .a=0x36, .x=0xf7, .y=0x3b, .sp=0xeb, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x93ce, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x93cf, .a=0x36, .x=0xf7, .y=0x3b, .sp=0xea, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xfc}, {.addr=0x93ce, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x93ce, .value=0x0d, .type=IO_READ},
        {.addr=0x93cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0319) {
    const struct CPU_State initial_cpu = {.pc=0x2c5a, .a=0x11, .x=0x88, .y=0xc5, .sp=0x3c, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x2c5a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2c5b, .a=0x11, .x=0x88, .y=0xc5, .sp=0x3b, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x1e}, {.addr=0x2c5a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2c5a, .value=0x0d, .type=IO_READ},
        {.addr=0x2c5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_031A) {
    const struct CPU_State initial_cpu = {.pc=0x5458, .a=0x96, .x=0xde, .y=0x46, .sp=0xf1, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x5458, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5459, .a=0x96, .x=0xde, .y=0x46, .sp=0xf0, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x8b}, {.addr=0x5458, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5458, .value=0x0d, .type=IO_READ},
        {.addr=0x5459, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_031B) {
    const struct CPU_State initial_cpu = {.pc=0x9819, .a=0xdf, .x=0xbd, .y=0x57, .sp=0x1a, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x00}, {.addr=0x9819, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x981a, .a=0xdf, .x=0xbd, .y=0x57, .sp=0x19, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xa5}, {.addr=0x9819, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9819, .value=0x0d, .type=IO_READ},
        {.addr=0x981a, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0xa5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_031C) {
    const struct CPU_State initial_cpu = {.pc=0x7f9d, .a=0x63, .x=0x81, .y=0x6c, .sp=0x67, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x7f9d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7f9e, .a=0x63, .x=0x81, .y=0x6c, .sp=0x66, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x71}, {.addr=0x7f9d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7f9d, .value=0x0d, .type=IO_READ},
        {.addr=0x7f9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_031D) {
    const struct CPU_State initial_cpu = {.pc=0xbe80, .a=0x48, .x=0x24, .y=0x79, .sp=0x13, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0xbe80, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbe81, .a=0x48, .x=0x24, .y=0x79, .sp=0x12, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x25}, {.addr=0xbe80, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbe80, .value=0x0d, .type=IO_READ},
        {.addr=0xbe81, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_031E) {
    const struct CPU_State initial_cpu = {.pc=0x252d, .a=0x00, .x=0x14, .y=0xc5, .sp=0x4f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0x252d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x252e, .a=0x00, .x=0x14, .y=0xc5, .sp=0x4e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xe1}, {.addr=0x252d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x252d, .value=0x0d, .type=IO_READ},
        {.addr=0x252e, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_031F) {
    const struct CPU_State initial_cpu = {.pc=0xcdd2, .a=0x64, .x=0x16, .y=0xfa, .sp=0x59, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0xcdd2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcdd3, .a=0x64, .x=0x16, .y=0xfa, .sp=0x58, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x9e}, {.addr=0xcdd2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcdd2, .value=0x0d, .type=IO_READ},
        {.addr=0xcdd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0320) {
    const struct CPU_State initial_cpu = {.pc=0xceba, .a=0x81, .x=0x3b, .y=0xff, .sp=0x4a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0xceba, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcebb, .a=0x81, .x=0x3b, .y=0xff, .sp=0x49, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x6e}, {.addr=0xceba, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xceba, .value=0x0d, .type=IO_READ},
        {.addr=0xcebb, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0321) {
    const struct CPU_State initial_cpu = {.pc=0x7fa7, .a=0x34, .x=0xe6, .y=0xf4, .sp=0x96, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x7fa7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7fa8, .a=0x34, .x=0xe6, .y=0xf4, .sp=0x95, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x20}, {.addr=0x7fa7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7fa7, .value=0x0d, .type=IO_READ},
        {.addr=0x7fa8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0322) {
    const struct CPU_State initial_cpu = {.pc=0x64e0, .a=0x05, .x=0xe0, .y=0x3c, .sp=0x88, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0x64e0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x64e1, .a=0x05, .x=0xe0, .y=0x3c, .sp=0x87, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xf6}, {.addr=0x64e0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x64e0, .value=0x0d, .type=IO_READ},
        {.addr=0x64e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0323) {
    const struct CPU_State initial_cpu = {.pc=0x9a6a, .a=0xd5, .x=0xec, .y=0x51, .sp=0x6e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x9a6a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9a6b, .a=0xd5, .x=0xec, .y=0x51, .sp=0x6d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x0d}, {.addr=0x9a6a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9a6a, .value=0x0d, .type=IO_READ},
        {.addr=0x9a6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0324) {
    const struct CPU_State initial_cpu = {.pc=0x63cb, .a=0x0c, .x=0x79, .y=0x2e, .sp=0xd2, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0x63cb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x63cc, .a=0x0c, .x=0x79, .y=0x2e, .sp=0xd1, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xce}, {.addr=0x63cb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x63cb, .value=0x0d, .type=IO_READ},
        {.addr=0x63cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0325) {
    const struct CPU_State initial_cpu = {.pc=0x53a9, .a=0xdc, .x=0xe4, .y=0xee, .sp=0xe4, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x53a9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x53aa, .a=0xdc, .x=0xe4, .y=0xee, .sp=0xe3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x75}, {.addr=0x53a9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x53a9, .value=0x0d, .type=IO_READ},
        {.addr=0x53aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0326) {
    const struct CPU_State initial_cpu = {.pc=0x522c, .a=0x7c, .x=0x58, .y=0x7d, .sp=0x33, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x522c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x522d, .a=0x7c, .x=0x58, .y=0x7d, .sp=0x32, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x8d}, {.addr=0x522c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x522c, .value=0x0d, .type=IO_READ},
        {.addr=0x522d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0327) {
    const struct CPU_State initial_cpu = {.pc=0x7e7b, .a=0x93, .x=0x9a, .y=0xee, .sp=0x6f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x7e7b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7e7c, .a=0x93, .x=0x9a, .y=0xee, .sp=0x6e, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x7d}, {.addr=0x7e7b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7e7b, .value=0x0d, .type=IO_READ},
        {.addr=0x7e7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0328) {
    const struct CPU_State initial_cpu = {.pc=0xd7b4, .a=0x61, .x=0x9a, .y=0x61, .sp=0x42, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0xd7b4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd7b5, .a=0x61, .x=0x9a, .y=0x61, .sp=0x41, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x6c}, {.addr=0xd7b4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd7b4, .value=0x0d, .type=IO_READ},
        {.addr=0xd7b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0329) {
    const struct CPU_State initial_cpu = {.pc=0xcc6a, .a=0x2c, .x=0xcc, .y=0x1a, .sp=0x82, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0xcc6a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcc6b, .a=0x2c, .x=0xcc, .y=0x1a, .sp=0x81, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x8e}, {.addr=0xcc6a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcc6a, .value=0x0d, .type=IO_READ},
        {.addr=0xcc6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_032A) {
    const struct CPU_State initial_cpu = {.pc=0x175d, .a=0x40, .x=0x6b, .y=0x7a, .sp=0x84, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0x175d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x175e, .a=0x40, .x=0x6b, .y=0x7a, .sp=0x83, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xe3}, {.addr=0x175d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x175d, .value=0x0d, .type=IO_READ},
        {.addr=0x175e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_032B) {
    const struct CPU_State initial_cpu = {.pc=0xf24c, .a=0x42, .x=0x64, .y=0x42, .sp=0x0b, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0xf24c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf24d, .a=0x42, .x=0x64, .y=0x42, .sp=0x0a, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x03}, {.addr=0xf24c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf24c, .value=0x0d, .type=IO_READ},
        {.addr=0xf24d, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_032C) {
    const struct CPU_State initial_cpu = {.pc=0xcc3a, .a=0xaf, .x=0x47, .y=0x11, .sp=0x7a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xcc3a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcc3b, .a=0xaf, .x=0x47, .y=0x11, .sp=0x79, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x17}, {.addr=0xcc3a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcc3a, .value=0x0d, .type=IO_READ},
        {.addr=0xcc3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_032D) {
    const struct CPU_State initial_cpu = {.pc=0x0f6b, .a=0xbe, .x=0xf9, .y=0xe2, .sp=0xfd, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x0f6b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0f6c, .a=0xbe, .x=0xf9, .y=0xe2, .sp=0xfc, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xfa}, {.addr=0x0f6b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0f6b, .value=0x0d, .type=IO_READ},
        {.addr=0x0f6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_032E) {
    const struct CPU_State initial_cpu = {.pc=0xda92, .a=0x22, .x=0x3b, .y=0x14, .sp=0x27, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0xda92, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xda93, .a=0x22, .x=0x3b, .y=0x14, .sp=0x26, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xf0}, {.addr=0xda92, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xda92, .value=0x0d, .type=IO_READ},
        {.addr=0xda93, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_032F) {
    const struct CPU_State initial_cpu = {.pc=0xa3ea, .a=0xce, .x=0x68, .y=0xfe, .sp=0xb4, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0xa3ea, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa3eb, .a=0xce, .x=0x68, .y=0xfe, .sp=0xb3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xac}, {.addr=0xa3ea, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa3ea, .value=0x0d, .type=IO_READ},
        {.addr=0xa3eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0330) {
    const struct CPU_State initial_cpu = {.pc=0xb8e7, .a=0x85, .x=0xd6, .y=0x90, .sp=0x33, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0xb8e7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb8e8, .a=0x85, .x=0xd6, .y=0x90, .sp=0x32, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xd5}, {.addr=0xb8e7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb8e7, .value=0x0d, .type=IO_READ},
        {.addr=0xb8e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0331) {
    const struct CPU_State initial_cpu = {.pc=0x5186, .a=0x5b, .x=0x84, .y=0xee, .sp=0x46, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0x5186, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5187, .a=0x5b, .x=0x84, .y=0xee, .sp=0x45, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x5a}, {.addr=0x5186, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5186, .value=0x0d, .type=IO_READ},
        {.addr=0x5187, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0332) {
    const struct CPU_State initial_cpu = {.pc=0x1298, .a=0x1d, .x=0x65, .y=0xab, .sp=0x4a, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x1298, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1299, .a=0x1d, .x=0x65, .y=0xab, .sp=0x49, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x2a}, {.addr=0x1298, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1298, .value=0x0d, .type=IO_READ},
        {.addr=0x1299, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0333) {
    const struct CPU_State initial_cpu = {.pc=0x8b69, .a=0x3d, .x=0xb6, .y=0xa3, .sp=0xc2, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x8b69, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8b6a, .a=0x3d, .x=0xb6, .y=0xa3, .sp=0xc1, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x1e}, {.addr=0x8b69, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8b69, .value=0x0d, .type=IO_READ},
        {.addr=0x8b6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0334) {
    const struct CPU_State initial_cpu = {.pc=0xea7e, .a=0x07, .x=0xfb, .y=0xf6, .sp=0x3b, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0xea7e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xea7f, .a=0x07, .x=0xfb, .y=0xf6, .sp=0x3a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x30}, {.addr=0xea7e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xea7e, .value=0x0d, .type=IO_READ},
        {.addr=0xea7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0335) {
    const struct CPU_State initial_cpu = {.pc=0x190d, .a=0x1a, .x=0x7a, .y=0xf4, .sp=0x92, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0x190d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x190e, .a=0x1a, .x=0x7a, .y=0xf4, .sp=0x91, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xa4}, {.addr=0x190d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x190d, .value=0x0d, .type=IO_READ},
        {.addr=0x190e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0336) {
    const struct CPU_State initial_cpu = {.pc=0x390e, .a=0x65, .x=0x7e, .y=0x27, .sp=0x58, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0x390e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x390f, .a=0x65, .x=0x7e, .y=0x27, .sp=0x57, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xfa}, {.addr=0x390e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x390e, .value=0x0d, .type=IO_READ},
        {.addr=0x390f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0337) {
    const struct CPU_State initial_cpu = {.pc=0x1d22, .a=0x11, .x=0xb2, .y=0xc7, .sp=0x04, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x1d22, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1d23, .a=0x11, .x=0xb2, .y=0xc7, .sp=0x03, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x1d22, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1d22, .value=0x0d, .type=IO_READ},
        {.addr=0x1d23, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0338) {
    const struct CPU_State initial_cpu = {.pc=0x4046, .a=0xf6, .x=0x45, .y=0x24, .sp=0x98, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x4046, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4047, .a=0xf6, .x=0x45, .y=0x24, .sp=0x97, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xe4}, {.addr=0x4046, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4046, .value=0x0d, .type=IO_READ},
        {.addr=0x4047, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0339) {
    const struct CPU_State initial_cpu = {.pc=0x8be9, .a=0x71, .x=0x1c, .y=0x8e, .sp=0xce, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x8be9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8bea, .a=0x71, .x=0x1c, .y=0x8e, .sp=0xcd, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x23}, {.addr=0x8be9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8be9, .value=0x0d, .type=IO_READ},
        {.addr=0x8bea, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_033A) {
    const struct CPU_State initial_cpu = {.pc=0x417d, .a=0xb9, .x=0xed, .y=0x29, .sp=0x5b, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0x417d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x417e, .a=0xb9, .x=0xed, .y=0x29, .sp=0x5a, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xe5}, {.addr=0x417d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x417d, .value=0x0d, .type=IO_READ},
        {.addr=0x417e, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_033B) {
    const struct CPU_State initial_cpu = {.pc=0x0d0a, .a=0x37, .x=0xdd, .y=0xae, .sp=0xbd, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x0d0a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0d0b, .a=0x37, .x=0xdd, .y=0xae, .sp=0xbc, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xb9}, {.addr=0x0d0a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0d0a, .value=0x0d, .type=IO_READ},
        {.addr=0x0d0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_033C) {
    const struct CPU_State initial_cpu = {.pc=0x1c5c, .a=0x9e, .x=0x39, .y=0xa2, .sp=0xb7, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x1c5c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1c5d, .a=0x9e, .x=0x39, .y=0xa2, .sp=0xb6, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xdd}, {.addr=0x1c5c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1c5c, .value=0x0d, .type=IO_READ},
        {.addr=0x1c5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_033D) {
    const struct CPU_State initial_cpu = {.pc=0xe5e4, .a=0xd8, .x=0x81, .y=0x89, .sp=0xd5, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x00}, {.addr=0xe5e4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe5e5, .a=0xd8, .x=0x81, .y=0x89, .sp=0xd4, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x33}, {.addr=0xe5e4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe5e4, .value=0x0d, .type=IO_READ},
        {.addr=0xe5e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_033E) {
    const struct CPU_State initial_cpu = {.pc=0xb736, .a=0xb2, .x=0xc3, .y=0x5b, .sp=0x9c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0xb736, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb737, .a=0xb2, .x=0xc3, .y=0x5b, .sp=0x9b, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x6b}, {.addr=0xb736, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb736, .value=0x0d, .type=IO_READ},
        {.addr=0xb737, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_033F) {
    const struct CPU_State initial_cpu = {.pc=0xd01a, .a=0xc5, .x=0x4b, .y=0x63, .sp=0x9e, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0xd01a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd01b, .a=0xc5, .x=0x4b, .y=0x63, .sp=0x9d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x05}, {.addr=0xd01a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd01a, .value=0x0d, .type=IO_READ},
        {.addr=0xd01b, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0340) {
    const struct CPU_State initial_cpu = {.pc=0x0017, .a=0x53, .x=0x0c, .y=0x2f, .sp=0xe7, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x0d}, {.addr=0x01e7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0018, .a=0x53, .x=0x0c, .y=0x2f, .sp=0xe6, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x0d}, {.addr=0x01e7, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x0017, .value=0x0d, .type=IO_READ},
        {.addr=0x0018, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0341) {
    const struct CPU_State initial_cpu = {.pc=0xa9b5, .a=0x1a, .x=0x2f, .y=0xe8, .sp=0x6c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0xa9b5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa9b6, .a=0x1a, .x=0x2f, .y=0xe8, .sp=0x6b, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x52}, {.addr=0xa9b5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa9b5, .value=0x0d, .type=IO_READ},
        {.addr=0xa9b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0342) {
    const struct CPU_State initial_cpu = {.pc=0x50d1, .a=0xc0, .x=0x4a, .y=0x98, .sp=0x04, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x50d1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x50d2, .a=0xc0, .x=0x4a, .y=0x98, .sp=0x03, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x2b}, {.addr=0x50d1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x50d1, .value=0x0d, .type=IO_READ},
        {.addr=0x50d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0343) {
    const struct CPU_State initial_cpu = {.pc=0x1933, .a=0xfc, .x=0x50, .y=0xe5, .sp=0x6b, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0x1933, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1934, .a=0xfc, .x=0x50, .y=0xe5, .sp=0x6a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xd1}, {.addr=0x1933, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1933, .value=0x0d, .type=IO_READ},
        {.addr=0x1934, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0344) {
    const struct CPU_State initial_cpu = {.pc=0x3c29, .a=0x3d, .x=0x93, .y=0x17, .sp=0x38, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x3c29, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3c2a, .a=0x3d, .x=0x93, .y=0x17, .sp=0x37, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xb0}, {.addr=0x3c29, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3c29, .value=0x0d, .type=IO_READ},
        {.addr=0x3c2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0345) {
    const struct CPU_State initial_cpu = {.pc=0x91ac, .a=0xfa, .x=0xa5, .y=0x82, .sp=0x87, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x91ac, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x91ad, .a=0xfa, .x=0xa5, .y=0x82, .sp=0x86, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x32}, {.addr=0x91ac, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x91ac, .value=0x0d, .type=IO_READ},
        {.addr=0x91ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0346) {
    const struct CPU_State initial_cpu = {.pc=0x0ce8, .a=0x50, .x=0xbb, .y=0x7f, .sp=0xce, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x0ce8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0ce9, .a=0x50, .x=0xbb, .y=0x7f, .sp=0xcd, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xca}, {.addr=0x0ce8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0ce8, .value=0x0d, .type=IO_READ},
        {.addr=0x0ce9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0347) {
    const struct CPU_State initial_cpu = {.pc=0x6caa, .a=0xfc, .x=0xfe, .y=0x0c, .sp=0x25, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0x6caa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6cab, .a=0xfc, .x=0xfe, .y=0x0c, .sp=0x24, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x73}, {.addr=0x6caa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6caa, .value=0x0d, .type=IO_READ},
        {.addr=0x6cab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0348) {
    const struct CPU_State initial_cpu = {.pc=0xc8be, .a=0xef, .x=0x8f, .y=0x48, .sp=0xe1, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0xc8be, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc8bf, .a=0xef, .x=0x8f, .y=0x48, .sp=0xe0, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xf5}, {.addr=0xc8be, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc8be, .value=0x0d, .type=IO_READ},
        {.addr=0xc8bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0349) {
    const struct CPU_State initial_cpu = {.pc=0x87aa, .a=0x6a, .x=0x7b, .y=0xa1, .sp=0xb5, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0x87aa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x87ab, .a=0x6a, .x=0x7b, .y=0xa1, .sp=0xb4, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x81}, {.addr=0x87aa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x87aa, .value=0x0d, .type=IO_READ},
        {.addr=0x87ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_034A) {
    const struct CPU_State initial_cpu = {.pc=0x90a3, .a=0x18, .x=0xc9, .y=0xc5, .sp=0x91, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0x90a3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x90a4, .a=0x18, .x=0xc9, .y=0xc5, .sp=0x90, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x26}, {.addr=0x90a3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x90a3, .value=0x0d, .type=IO_READ},
        {.addr=0x90a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_034B) {
    const struct CPU_State initial_cpu = {.pc=0x33cf, .a=0x75, .x=0x54, .y=0x75, .sp=0x33, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x33cf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x33d0, .a=0x75, .x=0x54, .y=0x75, .sp=0x32, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x9f}, {.addr=0x33cf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x33cf, .value=0x0d, .type=IO_READ},
        {.addr=0x33d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x9f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_034C) {
    const struct CPU_State initial_cpu = {.pc=0x3534, .a=0x23, .x=0x09, .y=0x44, .sp=0x33, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x3534, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3535, .a=0x23, .x=0x09, .y=0x44, .sp=0x32, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x75}, {.addr=0x3534, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3534, .value=0x0d, .type=IO_READ},
        {.addr=0x3535, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_034D) {
    const struct CPU_State initial_cpu = {.pc=0x56ee, .a=0x6c, .x=0x95, .y=0x62, .sp=0xc1, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x56ee, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x56ef, .a=0x6c, .x=0x95, .y=0x62, .sp=0xc0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x10}, {.addr=0x56ee, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x56ee, .value=0x0d, .type=IO_READ},
        {.addr=0x56ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_034E) {
    const struct CPU_State initial_cpu = {.pc=0xc154, .a=0x9b, .x=0x51, .y=0x8e, .sp=0xa8, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0xc154, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc155, .a=0x9b, .x=0x51, .y=0x8e, .sp=0xa7, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xdf}, {.addr=0xc154, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc154, .value=0x0d, .type=IO_READ},
        {.addr=0xc155, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_034F) {
    const struct CPU_State initial_cpu = {.pc=0x9056, .a=0xdc, .x=0x71, .y=0x8e, .sp=0x61, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0x9056, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9057, .a=0xdc, .x=0x71, .y=0x8e, .sp=0x60, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x11}, {.addr=0x9056, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9056, .value=0x0d, .type=IO_READ},
        {.addr=0x9057, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0350) {
    const struct CPU_State initial_cpu = {.pc=0x0324, .a=0x0b, .x=0xd6, .y=0xe8, .sp=0xd1, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x0324, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0325, .a=0x0b, .x=0xd6, .y=0xe8, .sp=0xd0, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x22}, {.addr=0x0324, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0324, .value=0x0d, .type=IO_READ},
        {.addr=0x0325, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x22, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0351) {
    const struct CPU_State initial_cpu = {.pc=0x0f52, .a=0x47, .x=0xfa, .y=0x49, .sp=0xd6, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0x0f52, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0f53, .a=0x47, .x=0xfa, .y=0x49, .sp=0xd5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x19}, {.addr=0x0f52, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0f52, .value=0x0d, .type=IO_READ},
        {.addr=0x0f53, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0352) {
    const struct CPU_State initial_cpu = {.pc=0x45e0, .a=0xd8, .x=0x9b, .y=0x99, .sp=0x36, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0x45e0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x45e1, .a=0xd8, .x=0x9b, .y=0x99, .sp=0x35, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x80}, {.addr=0x45e0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x45e0, .value=0x0d, .type=IO_READ},
        {.addr=0x45e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x80, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0353) {
    const struct CPU_State initial_cpu = {.pc=0xd589, .a=0xcc, .x=0xaf, .y=0xc9, .sp=0x2e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0xd589, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd58a, .a=0xcc, .x=0xaf, .y=0xc9, .sp=0x2d, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xcf}, {.addr=0xd589, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd589, .value=0x0d, .type=IO_READ},
        {.addr=0xd58a, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0354) {
    const struct CPU_State initial_cpu = {.pc=0xc971, .a=0x9b, .x=0x02, .y=0x58, .sp=0x39, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0xc971, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc972, .a=0x9b, .x=0x02, .y=0x58, .sp=0x38, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xc2}, {.addr=0xc971, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc971, .value=0x0d, .type=IO_READ},
        {.addr=0xc972, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0355) {
    const struct CPU_State initial_cpu = {.pc=0x4ffd, .a=0x3e, .x=0x09, .y=0xf1, .sp=0x4c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0x4ffd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4ffe, .a=0x3e, .x=0x09, .y=0xf1, .sp=0x4b, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x16}, {.addr=0x4ffd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4ffd, .value=0x0d, .type=IO_READ},
        {.addr=0x4ffe, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0356) {
    const struct CPU_State initial_cpu = {.pc=0xf8b3, .a=0xf0, .x=0xcf, .y=0x4c, .sp=0x4d, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0xf8b3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf8b4, .a=0xf0, .x=0xcf, .y=0x4c, .sp=0x4c, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x9a}, {.addr=0xf8b3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf8b3, .value=0x0d, .type=IO_READ},
        {.addr=0xf8b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0357) {
    const struct CPU_State initial_cpu = {.pc=0x7438, .a=0x35, .x=0x92, .y=0x02, .sp=0x30, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0x7438, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7439, .a=0x35, .x=0x92, .y=0x02, .sp=0x2f, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x16}, {.addr=0x7438, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7438, .value=0x0d, .type=IO_READ},
        {.addr=0x7439, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0358) {
    const struct CPU_State initial_cpu = {.pc=0x4586, .a=0x9f, .x=0xc8, .y=0x8c, .sp=0x14, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0x4586, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4587, .a=0x9f, .x=0xc8, .y=0x8c, .sp=0x13, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xf5}, {.addr=0x4586, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4586, .value=0x0d, .type=IO_READ},
        {.addr=0x4587, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0359) {
    const struct CPU_State initial_cpu = {.pc=0xbd1c, .a=0x96, .x=0x45, .y=0x5e, .sp=0xe4, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0xbd1c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbd1d, .a=0x96, .x=0x45, .y=0x5e, .sp=0xe3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x21}, {.addr=0xbd1c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbd1c, .value=0x0d, .type=IO_READ},
        {.addr=0xbd1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_035A) {
    const struct CPU_State initial_cpu = {.pc=0x827b, .a=0xc8, .x=0xf8, .y=0xb1, .sp=0x70, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0x827b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x827c, .a=0xc8, .x=0xf8, .y=0xb1, .sp=0x6f, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xbf}, {.addr=0x827b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x827b, .value=0x0d, .type=IO_READ},
        {.addr=0x827c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_035B) {
    const struct CPU_State initial_cpu = {.pc=0x42e3, .a=0x4b, .x=0x1f, .y=0x03, .sp=0x25, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0x42e3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x42e4, .a=0x4b, .x=0x1f, .y=0x03, .sp=0x24, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x79}, {.addr=0x42e3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x42e3, .value=0x0d, .type=IO_READ},
        {.addr=0x42e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_035C) {
    const struct CPU_State initial_cpu = {.pc=0x730e, .a=0x43, .x=0x0b, .y=0x36, .sp=0x22, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x730e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x730f, .a=0x43, .x=0x0b, .y=0x36, .sp=0x21, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x4f}, {.addr=0x730e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x730e, .value=0x0d, .type=IO_READ},
        {.addr=0x730f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_035D) {
    const struct CPU_State initial_cpu = {.pc=0x6de4, .a=0xd9, .x=0x1c, .y=0x50, .sp=0xa1, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x6de4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6de5, .a=0xd9, .x=0x1c, .y=0x50, .sp=0xa0, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xa5}, {.addr=0x6de4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6de4, .value=0x0d, .type=IO_READ},
        {.addr=0x6de5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xa5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_035E) {
    const struct CPU_State initial_cpu = {.pc=0xe6cb, .a=0x75, .x=0xa8, .y=0x43, .sp=0xa8, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0xe6cb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe6cc, .a=0x75, .x=0xa8, .y=0x43, .sp=0xa7, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xe9}, {.addr=0xe6cb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe6cb, .value=0x0d, .type=IO_READ},
        {.addr=0xe6cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_035F) {
    const struct CPU_State initial_cpu = {.pc=0x4335, .a=0x6e, .x=0x72, .y=0xbd, .sp=0xe0, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x4335, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4336, .a=0x6e, .x=0x72, .y=0xbd, .sp=0xdf, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x33}, {.addr=0x4335, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4335, .value=0x0d, .type=IO_READ},
        {.addr=0x4336, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0360) {
    const struct CPU_State initial_cpu = {.pc=0x31a1, .a=0x3e, .x=0xbc, .y=0x1a, .sp=0x57, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x31a1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x31a2, .a=0x3e, .x=0xbc, .y=0x1a, .sp=0x56, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x1b}, {.addr=0x31a1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x31a1, .value=0x0d, .type=IO_READ},
        {.addr=0x31a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0361) {
    const struct CPU_State initial_cpu = {.pc=0x0aa0, .a=0xeb, .x=0x8a, .y=0xba, .sp=0xd9, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0x0aa0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0aa1, .a=0xeb, .x=0x8a, .y=0xba, .sp=0xd8, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x29}, {.addr=0x0aa0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0aa0, .value=0x0d, .type=IO_READ},
        {.addr=0x0aa1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0362) {
    const struct CPU_State initial_cpu = {.pc=0x9045, .a=0x5a, .x=0x68, .y=0xe9, .sp=0x6d, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0x9045, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9046, .a=0x5a, .x=0x68, .y=0xe9, .sp=0x6c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x15}, {.addr=0x9045, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9045, .value=0x0d, .type=IO_READ},
        {.addr=0x9046, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0363) {
    const struct CPU_State initial_cpu = {.pc=0x1152, .a=0x97, .x=0x06, .y=0x19, .sp=0x69, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0x1152, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1153, .a=0x97, .x=0x06, .y=0x19, .sp=0x68, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x97}, {.addr=0x1152, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1152, .value=0x0d, .type=IO_READ},
        {.addr=0x1153, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0364) {
    const struct CPU_State initial_cpu = {.pc=0x916d, .a=0xad, .x=0x7c, .y=0x60, .sp=0x45, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x916d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x916e, .a=0xad, .x=0x7c, .y=0x60, .sp=0x44, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xa1}, {.addr=0x916d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x916d, .value=0x0d, .type=IO_READ},
        {.addr=0x916e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0365) {
    const struct CPU_State initial_cpu = {.pc=0x01ac, .a=0x5e, .x=0x6d, .y=0xc9, .sp=0x1d, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0x01ac, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x01ad, .a=0x5e, .x=0x6d, .y=0xc9, .sp=0x1c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xd8}, {.addr=0x01ac, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x01ac, .value=0x0d, .type=IO_READ},
        {.addr=0x01ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0366) {
    const struct CPU_State initial_cpu = {.pc=0x6473, .a=0x62, .x=0xc6, .y=0x78, .sp=0x8d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x6473, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6474, .a=0x62, .x=0xc6, .y=0x78, .sp=0x8c, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x7a}, {.addr=0x6473, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6473, .value=0x0d, .type=IO_READ},
        {.addr=0x6474, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0367) {
    const struct CPU_State initial_cpu = {.pc=0xf37b, .a=0xd5, .x=0x0b, .y=0x30, .sp=0x39, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0xf37b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf37c, .a=0xd5, .x=0x0b, .y=0x30, .sp=0x38, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x2a}, {.addr=0xf37b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf37b, .value=0x0d, .type=IO_READ},
        {.addr=0xf37c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0368) {
    const struct CPU_State initial_cpu = {.pc=0x7dc7, .a=0x01, .x=0xf5, .y=0x46, .sp=0xb4, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x7dc7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7dc8, .a=0x01, .x=0xf5, .y=0x46, .sp=0xb3, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x26}, {.addr=0x7dc7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7dc7, .value=0x0d, .type=IO_READ},
        {.addr=0x7dc8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0369) {
    const struct CPU_State initial_cpu = {.pc=0x1000, .a=0x37, .x=0xda, .y=0x66, .sp=0x72, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0x1000, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1001, .a=0x37, .x=0xda, .y=0x66, .sp=0x71, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xcd}, {.addr=0x1000, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1000, .value=0x0d, .type=IO_READ},
        {.addr=0x1001, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_036A) {
    const struct CPU_State initial_cpu = {.pc=0x7500, .a=0xc9, .x=0x8a, .y=0x2b, .sp=0xdd, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x00}, {.addr=0x7500, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7501, .a=0xc9, .x=0x8a, .y=0x2b, .sp=0xdc, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xf4}, {.addr=0x7500, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7500, .value=0x0d, .type=IO_READ},
        {.addr=0x7501, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_036B) {
    const struct CPU_State initial_cpu = {.pc=0xd10f, .a=0x1e, .x=0xd9, .y=0xed, .sp=0x66, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0xd10f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd110, .a=0x1e, .x=0xd9, .y=0xed, .sp=0x65, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xe3}, {.addr=0xd10f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd10f, .value=0x0d, .type=IO_READ},
        {.addr=0xd110, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_036C) {
    const struct CPU_State initial_cpu = {.pc=0x2faa, .a=0xd9, .x=0x76, .y=0x9c, .sp=0xd9, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0x2faa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2fab, .a=0xd9, .x=0x76, .y=0x9c, .sp=0xd8, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x02}, {.addr=0x2faa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2faa, .value=0x0d, .type=IO_READ},
        {.addr=0x2fab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_036D) {
    const struct CPU_State initial_cpu = {.pc=0x7917, .a=0x86, .x=0xd0, .y=0x10, .sp=0x39, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0x7917, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7918, .a=0x86, .x=0xd0, .y=0x10, .sp=0x38, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xe8}, {.addr=0x7917, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7917, .value=0x0d, .type=IO_READ},
        {.addr=0x7918, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_036E) {
    const struct CPU_State initial_cpu = {.pc=0x8be8, .a=0xe6, .x=0x69, .y=0x06, .sp=0x9a, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x8be8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8be9, .a=0xe6, .x=0x69, .y=0x06, .sp=0x99, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xad}, {.addr=0x8be8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8be8, .value=0x0d, .type=IO_READ},
        {.addr=0x8be9, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xad, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_036F) {
    const struct CPU_State initial_cpu = {.pc=0x6fdb, .a=0x33, .x=0x4d, .y=0x22, .sp=0x31, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0x6fdb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6fdc, .a=0x33, .x=0x4d, .y=0x22, .sp=0x30, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xa3}, {.addr=0x6fdb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6fdb, .value=0x0d, .type=IO_READ},
        {.addr=0x6fdc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0370) {
    const struct CPU_State initial_cpu = {.pc=0x6568, .a=0xed, .x=0xed, .y=0x19, .sp=0x70, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0x6568, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6569, .a=0xed, .x=0xed, .y=0x19, .sp=0x6f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x68}, {.addr=0x6568, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6568, .value=0x0d, .type=IO_READ},
        {.addr=0x6569, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0371) {
    const struct CPU_State initial_cpu = {.pc=0xe9cf, .a=0xba, .x=0x8b, .y=0x32, .sp=0xc5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0xe9cf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe9d0, .a=0xba, .x=0x8b, .y=0x32, .sp=0xc4, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xfe}, {.addr=0xe9cf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe9cf, .value=0x0d, .type=IO_READ},
        {.addr=0xe9d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0372) {
    const struct CPU_State initial_cpu = {.pc=0x192b, .a=0x28, .x=0x55, .y=0x50, .sp=0x20, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0x192b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x192c, .a=0x28, .x=0x55, .y=0x50, .sp=0x1f, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x96}, {.addr=0x192b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x192b, .value=0x0d, .type=IO_READ},
        {.addr=0x192c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0373) {
    const struct CPU_State initial_cpu = {.pc=0xf940, .a=0x23, .x=0x16, .y=0xf3, .sp=0x2c, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0xf940, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf941, .a=0x23, .x=0x16, .y=0xf3, .sp=0x2b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xb9}, {.addr=0xf940, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf940, .value=0x0d, .type=IO_READ},
        {.addr=0xf941, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0374) {
    const struct CPU_State initial_cpu = {.pc=0x30b1, .a=0x02, .x=0x93, .y=0xd5, .sp=0x3c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x30b1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x30b2, .a=0x02, .x=0x93, .y=0xd5, .sp=0x3b, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x52}, {.addr=0x30b1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x30b1, .value=0x0d, .type=IO_READ},
        {.addr=0x30b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0375) {
    const struct CPU_State initial_cpu = {.pc=0x09af, .a=0x1d, .x=0xb0, .y=0x3b, .sp=0x18, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x09af, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x09b0, .a=0x1d, .x=0xb0, .y=0x3b, .sp=0x17, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x4b}, {.addr=0x09af, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x09af, .value=0x0d, .type=IO_READ},
        {.addr=0x09b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0376) {
    const struct CPU_State initial_cpu = {.pc=0xf8bb, .a=0xf6, .x=0x00, .y=0x69, .sp=0x67, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xf8bb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf8bc, .a=0xf6, .x=0x00, .y=0x69, .sp=0x66, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xfa}, {.addr=0xf8bb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf8bb, .value=0x0d, .type=IO_READ},
        {.addr=0xf8bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0377) {
    const struct CPU_State initial_cpu = {.pc=0x7713, .a=0x0a, .x=0x54, .y=0x54, .sp=0x16, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x7713, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7714, .a=0x0a, .x=0x54, .y=0x54, .sp=0x15, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x20}, {.addr=0x7713, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7713, .value=0x0d, .type=IO_READ},
        {.addr=0x7714, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0378) {
    const struct CPU_State initial_cpu = {.pc=0x61e4, .a=0xf7, .x=0xf9, .y=0xff, .sp=0x35, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x61e4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x61e5, .a=0xf7, .x=0xf9, .y=0xff, .sp=0x34, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x1e}, {.addr=0x61e4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x61e4, .value=0x0d, .type=IO_READ},
        {.addr=0x61e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0379) {
    const struct CPU_State initial_cpu = {.pc=0x5704, .a=0x16, .x=0x85, .y=0xca, .sp=0x60, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0x5704, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5705, .a=0x16, .x=0x85, .y=0xca, .sp=0x5f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xf4}, {.addr=0x5704, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5704, .value=0x0d, .type=IO_READ},
        {.addr=0x5705, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_037A) {
    const struct CPU_State initial_cpu = {.pc=0x6713, .a=0xa4, .x=0x43, .y=0xe4, .sp=0xa2, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0x6713, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6714, .a=0xa4, .x=0x43, .y=0xe4, .sp=0xa1, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x9a}, {.addr=0x6713, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6713, .value=0x0d, .type=IO_READ},
        {.addr=0x6714, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_037B) {
    const struct CPU_State initial_cpu = {.pc=0x1031, .a=0x9b, .x=0xee, .y=0xf4, .sp=0x9b, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x1031, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1032, .a=0x9b, .x=0xee, .y=0xf4, .sp=0x9a, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x02}, {.addr=0x1031, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1031, .value=0x0d, .type=IO_READ},
        {.addr=0x1032, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_037C) {
    const struct CPU_State initial_cpu = {.pc=0xbb31, .a=0xb0, .x=0xc0, .y=0xec, .sp=0xd3, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0xbb31, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbb32, .a=0xb0, .x=0xc0, .y=0xec, .sp=0xd2, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x8d}, {.addr=0xbb31, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbb31, .value=0x0d, .type=IO_READ},
        {.addr=0xbb32, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_037D) {
    const struct CPU_State initial_cpu = {.pc=0x2e3f, .a=0x69, .x=0x68, .y=0xeb, .sp=0xaf, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x2e3f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2e40, .a=0x69, .x=0x68, .y=0xeb, .sp=0xae, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xb3}, {.addr=0x2e3f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2e3f, .value=0x0d, .type=IO_READ},
        {.addr=0x2e40, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_037E) {
    const struct CPU_State initial_cpu = {.pc=0xf794, .a=0x4c, .x=0xe1, .y=0xb8, .sp=0x46, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xf794, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf795, .a=0x4c, .x=0xe1, .y=0xb8, .sp=0x45, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x50}, {.addr=0xf794, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf794, .value=0x0d, .type=IO_READ},
        {.addr=0xf795, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x50, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_037F) {
    const struct CPU_State initial_cpu = {.pc=0x374c, .a=0x63, .x=0xa4, .y=0x65, .sp=0xda, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0x374c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x374d, .a=0x63, .x=0xa4, .y=0x65, .sp=0xd9, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x8e}, {.addr=0x374c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x374c, .value=0x0d, .type=IO_READ},
        {.addr=0x374d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0380) {
    const struct CPU_State initial_cpu = {.pc=0x2d30, .a=0x35, .x=0xed, .y=0x72, .sp=0x25, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0x2d30, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2d31, .a=0x35, .x=0xed, .y=0x72, .sp=0x24, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xd9}, {.addr=0x2d30, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2d30, .value=0x0d, .type=IO_READ},
        {.addr=0x2d31, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0381) {
    const struct CPU_State initial_cpu = {.pc=0x41b1, .a=0xf6, .x=0x70, .y=0x80, .sp=0x46, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0x41b1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x41b2, .a=0xf6, .x=0x70, .y=0x80, .sp=0x45, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x70}, {.addr=0x41b1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x41b1, .value=0x0d, .type=IO_READ},
        {.addr=0x41b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0382) {
    const struct CPU_State initial_cpu = {.pc=0x2fc6, .a=0xfb, .x=0xfb, .y=0xf9, .sp=0xda, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0x2fc6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2fc7, .a=0xfb, .x=0xfb, .y=0xf9, .sp=0xd9, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xb6}, {.addr=0x2fc6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2fc6, .value=0x0d, .type=IO_READ},
        {.addr=0x2fc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xb6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0383) {
    const struct CPU_State initial_cpu = {.pc=0x8d36, .a=0x2f, .x=0xe3, .y=0xec, .sp=0x90, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x00}, {.addr=0x8d36, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8d37, .a=0x2f, .x=0xe3, .y=0xec, .sp=0x8f, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xea}, {.addr=0x8d36, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8d36, .value=0x0d, .type=IO_READ},
        {.addr=0x8d37, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0384) {
    const struct CPU_State initial_cpu = {.pc=0xeea1, .a=0x7e, .x=0xfc, .y=0xd6, .sp=0x98, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0xeea1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xeea2, .a=0x7e, .x=0xfc, .y=0xd6, .sp=0x97, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x52}, {.addr=0xeea1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xeea1, .value=0x0d, .type=IO_READ},
        {.addr=0xeea2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0385) {
    const struct CPU_State initial_cpu = {.pc=0x5952, .a=0xba, .x=0xe9, .y=0x21, .sp=0x91, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0x5952, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5953, .a=0xba, .x=0xe9, .y=0x21, .sp=0x90, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x90}, {.addr=0x5952, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5952, .value=0x0d, .type=IO_READ},
        {.addr=0x5953, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0386) {
    const struct CPU_State initial_cpu = {.pc=0x9179, .a=0xbe, .x=0x59, .y=0x42, .sp=0x89, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x9179, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x917a, .a=0xbe, .x=0x59, .y=0x42, .sp=0x88, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xe1}, {.addr=0x9179, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9179, .value=0x0d, .type=IO_READ},
        {.addr=0x917a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0387) {
    const struct CPU_State initial_cpu = {.pc=0xca98, .a=0x14, .x=0x50, .y=0xef, .sp=0x6f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0xca98, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xca99, .a=0x14, .x=0x50, .y=0xef, .sp=0x6e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x0c}, {.addr=0xca98, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xca98, .value=0x0d, .type=IO_READ},
        {.addr=0xca99, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0388) {
    const struct CPU_State initial_cpu = {.pc=0x6f4c, .a=0xb0, .x=0xf7, .y=0x1d, .sp=0xa0, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x6f4c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6f4d, .a=0xb0, .x=0xf7, .y=0x1d, .sp=0x9f, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x8f}, {.addr=0x6f4c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6f4c, .value=0x0d, .type=IO_READ},
        {.addr=0x6f4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0389) {
    const struct CPU_State initial_cpu = {.pc=0x9c3f, .a=0x94, .x=0x81, .y=0xef, .sp=0x1b, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x9c3f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9c40, .a=0x94, .x=0x81, .y=0xef, .sp=0x1a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xf5}, {.addr=0x9c3f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9c3f, .value=0x0d, .type=IO_READ},
        {.addr=0x9c40, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_038A) {
    const struct CPU_State initial_cpu = {.pc=0xc8b0, .a=0xfe, .x=0x91, .y=0x87, .sp=0x01, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0xc8b0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc8b1, .a=0xfe, .x=0x91, .y=0x87, .sp=0x00, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xac}, {.addr=0xc8b0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc8b0, .value=0x0d, .type=IO_READ},
        {.addr=0xc8b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_038B) {
    const struct CPU_State initial_cpu = {.pc=0x9c64, .a=0x16, .x=0x53, .y=0xb6, .sp=0x2f, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x9c64, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9c65, .a=0x16, .x=0x53, .y=0xb6, .sp=0x2e, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x53}, {.addr=0x9c64, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9c64, .value=0x0d, .type=IO_READ},
        {.addr=0x9c65, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_038C) {
    const struct CPU_State initial_cpu = {.pc=0x2489, .a=0xfd, .x=0x0d, .y=0x5b, .sp=0x3c, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x2489, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x248a, .a=0xfd, .x=0x0d, .y=0x5b, .sp=0x3b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x65}, {.addr=0x2489, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2489, .value=0x0d, .type=IO_READ},
        {.addr=0x248a, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_038D) {
    const struct CPU_State initial_cpu = {.pc=0x0437, .a=0x10, .x=0x68, .y=0xcd, .sp=0x39, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0x0437, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0438, .a=0x10, .x=0x68, .y=0xcd, .sp=0x38, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x30}, {.addr=0x0437, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0437, .value=0x0d, .type=IO_READ},
        {.addr=0x0438, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_038E) {
    const struct CPU_State initial_cpu = {.pc=0x46c3, .a=0x83, .x=0xbd, .y=0xcf, .sp=0x83, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0x46c3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x46c4, .a=0x83, .x=0xbd, .y=0xcf, .sp=0x82, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xe6}, {.addr=0x46c3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x46c3, .value=0x0d, .type=IO_READ},
        {.addr=0x46c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_038F) {
    const struct CPU_State initial_cpu = {.pc=0x8416, .a=0x79, .x=0x0b, .y=0xda, .sp=0x2b, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x8416, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8417, .a=0x79, .x=0x0b, .y=0xda, .sp=0x2a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x65}, {.addr=0x8416, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8416, .value=0x0d, .type=IO_READ},
        {.addr=0x8417, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0390) {
    const struct CPU_State initial_cpu = {.pc=0x06e1, .a=0xc5, .x=0x29, .y=0x30, .sp=0xae, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0x06e1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x06e2, .a=0xc5, .x=0x29, .y=0x30, .sp=0xad, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x2d}, {.addr=0x06e1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x06e1, .value=0x0d, .type=IO_READ},
        {.addr=0x06e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0391) {
    const struct CPU_State initial_cpu = {.pc=0x2e04, .a=0xcf, .x=0x79, .y=0x7f, .sp=0xf0, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0x2e04, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2e05, .a=0xcf, .x=0x79, .y=0x7f, .sp=0xef, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xbf}, {.addr=0x2e04, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2e04, .value=0x0d, .type=IO_READ},
        {.addr=0x2e05, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0392) {
    const struct CPU_State initial_cpu = {.pc=0x0bb2, .a=0x59, .x=0xde, .y=0x6d, .sp=0x3a, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0x0bb2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0bb3, .a=0x59, .x=0xde, .y=0x6d, .sp=0x39, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xa2}, {.addr=0x0bb2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0bb2, .value=0x0d, .type=IO_READ},
        {.addr=0x0bb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0393) {
    const struct CPU_State initial_cpu = {.pc=0xb706, .a=0x00, .x=0x49, .y=0x92, .sp=0x43, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0xb706, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb707, .a=0x00, .x=0x49, .y=0x92, .sp=0x42, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xb0}, {.addr=0xb706, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb706, .value=0x0d, .type=IO_READ},
        {.addr=0xb707, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0394) {
    const struct CPU_State initial_cpu = {.pc=0xfc37, .a=0xaa, .x=0x8c, .y=0xfc, .sp=0xff, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0xfc37, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfc38, .a=0xaa, .x=0x8c, .y=0xfc, .sp=0xfe, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xde}, {.addr=0xfc37, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfc37, .value=0x0d, .type=IO_READ},
        {.addr=0xfc38, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0395) {
    const struct CPU_State initial_cpu = {.pc=0x0339, .a=0xf7, .x=0xfa, .y=0xfd, .sp=0xb9, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x0339, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x033a, .a=0xf7, .x=0xfa, .y=0xfd, .sp=0xb8, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x37}, {.addr=0x0339, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0339, .value=0x0d, .type=IO_READ},
        {.addr=0x033a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0396) {
    const struct CPU_State initial_cpu = {.pc=0x46b4, .a=0xe0, .x=0x38, .y=0x64, .sp=0xeb, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x46b4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x46b5, .a=0xe0, .x=0x38, .y=0x64, .sp=0xea, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xb2}, {.addr=0x46b4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x46b4, .value=0x0d, .type=IO_READ},
        {.addr=0x46b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0397) {
    const struct CPU_State initial_cpu = {.pc=0x3b0a, .a=0x12, .x=0x35, .y=0x4b, .sp=0xee, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x3b0a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3b0b, .a=0x12, .x=0x35, .y=0x4b, .sp=0xed, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x64}, {.addr=0x3b0a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3b0a, .value=0x0d, .type=IO_READ},
        {.addr=0x3b0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0398) {
    const struct CPU_State initial_cpu = {.pc=0x7921, .a=0x75, .x=0x9c, .y=0xf8, .sp=0x8f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x7921, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7922, .a=0x75, .x=0x9c, .y=0xf8, .sp=0x8e, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x12}, {.addr=0x7921, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7921, .value=0x0d, .type=IO_READ},
        {.addr=0x7922, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_0399) {
    const struct CPU_State initial_cpu = {.pc=0x9111, .a=0x4c, .x=0xfe, .y=0xa0, .sp=0x9a, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x9111, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9112, .a=0x4c, .x=0xfe, .y=0xa0, .sp=0x99, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x41}, {.addr=0x9111, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9111, .value=0x0d, .type=IO_READ},
        {.addr=0x9112, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_039A) {
    const struct CPU_State initial_cpu = {.pc=0x981c, .a=0xe8, .x=0x95, .y=0xf1, .sp=0x1c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0x981c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x981d, .a=0xe8, .x=0x95, .y=0xf1, .sp=0x1b, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xd1}, {.addr=0x981c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x981c, .value=0x0d, .type=IO_READ},
        {.addr=0x981d, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_039B) {
    const struct CPU_State initial_cpu = {.pc=0x9f04, .a=0x62, .x=0x98, .y=0xa9, .sp=0xc7, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x9f04, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9f05, .a=0x62, .x=0x98, .y=0xa9, .sp=0xc6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x9c}, {.addr=0x9f04, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9f04, .value=0x0d, .type=IO_READ},
        {.addr=0x9f05, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_039C) {
    const struct CPU_State initial_cpu = {.pc=0xad4a, .a=0x6e, .x=0x97, .y=0x29, .sp=0x04, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xad4a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xad4b, .a=0x6e, .x=0x97, .y=0x29, .sp=0x03, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xb4}, {.addr=0xad4a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xad4a, .value=0x0d, .type=IO_READ},
        {.addr=0xad4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_039D) {
    const struct CPU_State initial_cpu = {.pc=0xc6d1, .a=0xe4, .x=0x9e, .y=0x96, .sp=0x37, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0xc6d1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc6d2, .a=0xe4, .x=0x9e, .y=0x96, .sp=0x36, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x93}, {.addr=0xc6d1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc6d1, .value=0x0d, .type=IO_READ},
        {.addr=0xc6d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_039E) {
    const struct CPU_State initial_cpu = {.pc=0xf6aa, .a=0x28, .x=0xea, .y=0xc4, .sp=0xfe, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0xf6aa, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf6ab, .a=0x28, .x=0xea, .y=0xc4, .sp=0xfd, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xe9}, {.addr=0xf6aa, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf6aa, .value=0x0d, .type=IO_READ},
        {.addr=0xf6ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_039F) {
    const struct CPU_State initial_cpu = {.pc=0x66c2, .a=0xbb, .x=0xf8, .y=0x86, .sp=0xe4, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x66c2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x66c3, .a=0xbb, .x=0xf8, .y=0x86, .sp=0xe3, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xb9}, {.addr=0x66c2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x66c2, .value=0x0d, .type=IO_READ},
        {.addr=0x66c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x1f5d, .a=0x22, .x=0xbb, .y=0x15, .sp=0xab, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0x1f5d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1f5e, .a=0x22, .x=0xbb, .y=0x15, .sp=0xaa, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x0e}, {.addr=0x1f5d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1f5d, .value=0x0d, .type=IO_READ},
        {.addr=0x1f5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x82ec, .a=0xcf, .x=0x16, .y=0x14, .sp=0x10, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x82ec, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x82ed, .a=0xcf, .x=0x16, .y=0x14, .sp=0x0f, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xce}, {.addr=0x82ec, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x82ec, .value=0x0d, .type=IO_READ},
        {.addr=0x82ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x3ac6, .a=0x95, .x=0x8b, .y=0x17, .sp=0xc7, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x3ac6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3ac7, .a=0x95, .x=0x8b, .y=0x17, .sp=0xc6, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xe2}, {.addr=0x3ac6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3ac6, .value=0x0d, .type=IO_READ},
        {.addr=0x3ac7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x8fbc, .a=0x4d, .x=0x0c, .y=0x09, .sp=0x8a, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x8fbc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8fbd, .a=0x4d, .x=0x0c, .y=0x09, .sp=0x89, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xf2}, {.addr=0x8fbc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8fbc, .value=0x0d, .type=IO_READ},
        {.addr=0x8fbd, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x9ce6, .a=0x04, .x=0xe4, .y=0x90, .sp=0x55, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0x9ce6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9ce7, .a=0x04, .x=0xe4, .y=0x90, .sp=0x54, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xd2}, {.addr=0x9ce6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9ce6, .value=0x0d, .type=IO_READ},
        {.addr=0x9ce7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xcd31, .a=0x0c, .x=0xe1, .y=0x1b, .sp=0x99, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0xcd31, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcd32, .a=0x0c, .x=0xe1, .y=0x1b, .sp=0x98, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x66}, {.addr=0xcd31, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcd31, .value=0x0d, .type=IO_READ},
        {.addr=0xcd32, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x8b43, .a=0xf9, .x=0xd3, .y=0xaa, .sp=0x90, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x00}, {.addr=0x8b43, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8b44, .a=0xf9, .x=0xd3, .y=0xaa, .sp=0x8f, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x36}, {.addr=0x8b43, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8b43, .value=0x0d, .type=IO_READ},
        {.addr=0x8b44, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x8407, .a=0x3c, .x=0x07, .y=0x71, .sp=0x15, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0x8407, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8408, .a=0x3c, .x=0x07, .y=0x71, .sp=0x14, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x85}, {.addr=0x8407, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8407, .value=0x0d, .type=IO_READ},
        {.addr=0x8408, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x3709, .a=0xcd, .x=0xb7, .y=0xc1, .sp=0x06, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x3709, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x370a, .a=0xcd, .x=0xb7, .y=0xc1, .sp=0x05, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x68}, {.addr=0x3709, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3709, .value=0x0d, .type=IO_READ},
        {.addr=0x370a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x1421, .a=0xab, .x=0xf6, .y=0x67, .sp=0x66, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0x1421, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1422, .a=0xab, .x=0xf6, .y=0x67, .sp=0x65, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x5b}, {.addr=0x1421, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1421, .value=0x0d, .type=IO_READ},
        {.addr=0x1422, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x83cd, .a=0xec, .x=0x95, .y=0xaa, .sp=0x1b, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x83cd, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x83ce, .a=0xec, .x=0x95, .y=0xaa, .sp=0x1a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x04}, {.addr=0x83cd, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x83cd, .value=0x0d, .type=IO_READ},
        {.addr=0x83ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x27e0, .a=0xd7, .x=0x53, .y=0x45, .sp=0x9a, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x27e0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x27e1, .a=0xd7, .x=0x53, .y=0x45, .sp=0x99, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xf0}, {.addr=0x27e0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x27e0, .value=0x0d, .type=IO_READ},
        {.addr=0x27e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xead7, .a=0x7d, .x=0xea, .y=0xcf, .sp=0x8c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0xead7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xead8, .a=0x7d, .x=0xea, .y=0xcf, .sp=0x8b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x70}, {.addr=0xead7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xead7, .value=0x0d, .type=IO_READ},
        {.addr=0xead8, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x7f75, .a=0xb0, .x=0xea, .y=0xd0, .sp=0x9c, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0x7f75, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7f76, .a=0xb0, .x=0xea, .y=0xd0, .sp=0x9b, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x26}, {.addr=0x7f75, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7f75, .value=0x0d, .type=IO_READ},
        {.addr=0x7f76, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x1b09, .a=0xcd, .x=0x52, .y=0xfe, .sp=0xe0, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x1b09, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1b0a, .a=0xcd, .x=0x52, .y=0xfe, .sp=0xdf, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x26}, {.addr=0x1b09, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1b09, .value=0x0d, .type=IO_READ},
        {.addr=0x1b0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xe7d8, .a=0x90, .x=0x67, .y=0xc1, .sp=0xea, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0xe7d8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe7d9, .a=0x90, .x=0x67, .y=0xc1, .sp=0xe9, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x15}, {.addr=0xe7d8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe7d8, .value=0x0d, .type=IO_READ},
        {.addr=0xe7d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x53f2, .a=0x6d, .x=0x09, .y=0x8d, .sp=0xc9, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0x53f2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x53f3, .a=0x6d, .x=0x09, .y=0x8d, .sp=0xc8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x40}, {.addr=0x53f2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x53f2, .value=0x0d, .type=IO_READ},
        {.addr=0x53f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x3a18, .a=0x0b, .x=0x7c, .y=0x0f, .sp=0x94, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x3a18, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3a19, .a=0x0b, .x=0x7c, .y=0x0f, .sp=0x93, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x1c}, {.addr=0x3a18, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3a18, .value=0x0d, .type=IO_READ},
        {.addr=0x3a19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x5948, .a=0xff, .x=0xef, .y=0x3d, .sp=0x8a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x5948, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5949, .a=0xff, .x=0xef, .y=0x3d, .sp=0x89, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x92}, {.addr=0x5948, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5948, .value=0x0d, .type=IO_READ},
        {.addr=0x5949, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xfc4a, .a=0x39, .x=0x76, .y=0x50, .sp=0x3e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0xfc4a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfc4b, .a=0x39, .x=0x76, .y=0x50, .sp=0x3d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x85}, {.addr=0xfc4a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfc4a, .value=0x0d, .type=IO_READ},
        {.addr=0xfc4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x968c, .a=0x89, .x=0x66, .y=0x4f, .sp=0xb3, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x968c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x968d, .a=0x89, .x=0x66, .y=0x4f, .sp=0xb2, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x77}, {.addr=0x968c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x968c, .value=0x0d, .type=IO_READ},
        {.addr=0x968d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x2271, .a=0x6c, .x=0xb1, .y=0x14, .sp=0x43, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x2271, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2272, .a=0x6c, .x=0xb1, .y=0x14, .sp=0x42, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x84}, {.addr=0x2271, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2271, .value=0x0d, .type=IO_READ},
        {.addr=0x2272, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xd836, .a=0xeb, .x=0xdd, .y=0xce, .sp=0x85, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0xd836, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd837, .a=0xeb, .x=0xdd, .y=0xce, .sp=0x84, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x1a}, {.addr=0xd836, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd836, .value=0x0d, .type=IO_READ},
        {.addr=0xd837, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xcb15, .a=0xf1, .x=0x0e, .y=0x12, .sp=0x2b, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0xcb15, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcb16, .a=0xf1, .x=0x0e, .y=0x12, .sp=0x2a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xd1}, {.addr=0xcb15, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcb15, .value=0x0d, .type=IO_READ},
        {.addr=0xcb16, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x7d11, .a=0x2e, .x=0x76, .y=0x93, .sp=0xc5, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0x7d11, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7d12, .a=0x2e, .x=0x76, .y=0x93, .sp=0xc4, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x1b}, {.addr=0x7d11, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7d11, .value=0x0d, .type=IO_READ},
        {.addr=0x7d12, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x7b1b, .a=0xa9, .x=0x49, .y=0x07, .sp=0x2b, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x7b1b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7b1c, .a=0xa9, .x=0x49, .y=0x07, .sp=0x2a, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xb2}, {.addr=0x7b1b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7b1b, .value=0x0d, .type=IO_READ},
        {.addr=0x7b1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x5750, .a=0xdd, .x=0x63, .y=0x35, .sp=0xde, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x5750, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5751, .a=0xdd, .x=0x63, .y=0x35, .sp=0xdd, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x08}, {.addr=0x5750, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5750, .value=0x0d, .type=IO_READ},
        {.addr=0x5751, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x3c98, .a=0x07, .x=0x12, .y=0x13, .sp=0x37, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0x3c98, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3c99, .a=0x07, .x=0x12, .y=0x13, .sp=0x36, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x94}, {.addr=0x3c98, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3c98, .value=0x0d, .type=IO_READ},
        {.addr=0x3c99, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x54c4, .a=0x7d, .x=0x88, .y=0x70, .sp=0xbc, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x54c4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x54c5, .a=0x7d, .x=0x88, .y=0x70, .sp=0xbb, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x5d}, {.addr=0x54c4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x54c4, .value=0x0d, .type=IO_READ},
        {.addr=0x54c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xe96f, .a=0xa9, .x=0x96, .y=0x64, .sp=0x22, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0xe96f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe970, .a=0xa9, .x=0x96, .y=0x64, .sp=0x21, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xfa}, {.addr=0xe96f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe96f, .value=0x0d, .type=IO_READ},
        {.addr=0xe970, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xf5d9, .a=0xba, .x=0x23, .y=0xcb, .sp=0x51, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0xf5d9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf5da, .a=0xba, .x=0x23, .y=0xcb, .sp=0x50, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x49}, {.addr=0xf5d9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf5d9, .value=0x0d, .type=IO_READ},
        {.addr=0xf5da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xb95d, .a=0x53, .x=0xfc, .y=0x4d, .sp=0xa1, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0xb95d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb95e, .a=0x53, .x=0xfc, .y=0x4d, .sp=0xa0, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x5d}, {.addr=0xb95d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb95d, .value=0x0d, .type=IO_READ},
        {.addr=0xb95e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x2ca1, .a=0x94, .x=0x0d, .y=0xb5, .sp=0xb8, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x2ca1, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2ca2, .a=0x94, .x=0x0d, .y=0xb5, .sp=0xb7, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x44}, {.addr=0x2ca1, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2ca1, .value=0x0d, .type=IO_READ},
        {.addr=0x2ca2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x1731, .a=0x0a, .x=0xd0, .y=0xd5, .sp=0x3a, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0x1731, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1732, .a=0x0a, .x=0xd0, .y=0xd5, .sp=0x39, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x0c}, {.addr=0x1731, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1731, .value=0x0d, .type=IO_READ},
        {.addr=0x1732, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xe15a, .a=0x89, .x=0xeb, .y=0x4a, .sp=0x13, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0xe15a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe15b, .a=0x89, .x=0xeb, .y=0x4a, .sp=0x12, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x46}, {.addr=0xe15a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe15a, .value=0x0d, .type=IO_READ},
        {.addr=0xe15b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xc42a, .a=0x71, .x=0x64, .y=0x29, .sp=0x28, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0xc42a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc42b, .a=0x71, .x=0x64, .y=0x29, .sp=0x27, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x21}, {.addr=0xc42a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc42a, .value=0x0d, .type=IO_READ},
        {.addr=0xc42b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xb49c, .a=0x07, .x=0x68, .y=0xd3, .sp=0x1b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0xb49c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb49d, .a=0x07, .x=0x68, .y=0xd3, .sp=0x1a, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xc7}, {.addr=0xb49c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb49c, .value=0x0d, .type=IO_READ},
        {.addr=0xb49d, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xbf39, .a=0xb9, .x=0x4a, .y=0x3f, .sp=0xa9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0xbf39, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbf3a, .a=0xb9, .x=0x4a, .y=0x3f, .sp=0xa8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x1d}, {.addr=0xbf39, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbf39, .value=0x0d, .type=IO_READ},
        {.addr=0xbf3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xd014, .a=0x15, .x=0x24, .y=0xcb, .sp=0xc6, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0xd014, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd015, .a=0x15, .x=0x24, .y=0xcb, .sp=0xc5, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xa3}, {.addr=0xd014, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd014, .value=0x0d, .type=IO_READ},
        {.addr=0xd015, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xd391, .a=0x44, .x=0x96, .y=0x31, .sp=0x7a, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xd391, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd392, .a=0x44, .x=0x96, .y=0x31, .sp=0x79, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xf1}, {.addr=0xd391, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd391, .value=0x0d, .type=IO_READ},
        {.addr=0xd392, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0xf1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xdde9, .a=0xfd, .x=0x41, .y=0x21, .sp=0x77, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x00}, {.addr=0xdde9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xddea, .a=0xfd, .x=0x41, .y=0x21, .sp=0x76, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x35}, {.addr=0xdde9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdde9, .value=0x0d, .type=IO_READ},
        {.addr=0xddea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x4aa2, .a=0xf6, .x=0x0e, .y=0x7c, .sp=0xa8, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x4aa2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4aa3, .a=0xf6, .x=0x0e, .y=0x7c, .sp=0xa7, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x9e}, {.addr=0x4aa2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4aa2, .value=0x0d, .type=IO_READ},
        {.addr=0x4aa3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x8067, .a=0x24, .x=0x98, .y=0xc4, .sp=0x0e, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0x8067, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8068, .a=0x24, .x=0x98, .y=0xc4, .sp=0x0d, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xad}, {.addr=0x8067, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8067, .value=0x0d, .type=IO_READ},
        {.addr=0x8068, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0xad, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x9d6a, .a=0xb9, .x=0x75, .y=0x94, .sp=0x9f, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0x9d6a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9d6b, .a=0xb9, .x=0x75, .y=0x94, .sp=0x9e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xb0}, {.addr=0x9d6a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9d6a, .value=0x0d, .type=IO_READ},
        {.addr=0x9d6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x4816, .a=0x41, .x=0x54, .y=0xf8, .sp=0x1f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0x4816, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4817, .a=0x41, .x=0x54, .y=0xf8, .sp=0x1e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xf1}, {.addr=0x4816, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4816, .value=0x0d, .type=IO_READ},
        {.addr=0x4817, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xf1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x7ea8, .a=0xd7, .x=0xcf, .y=0x01, .sp=0x9a, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x7ea8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7ea9, .a=0xd7, .x=0xcf, .y=0x01, .sp=0x99, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xed}, {.addr=0x7ea8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7ea8, .value=0x0d, .type=IO_READ},
        {.addr=0x7ea9, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xde81, .a=0xf7, .x=0xa6, .y=0xca, .sp=0x08, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xde81, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xde82, .a=0xf7, .x=0xa6, .y=0xca, .sp=0x07, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xbc}, {.addr=0xde81, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xde81, .value=0x0d, .type=IO_READ},
        {.addr=0xde82, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x0af8, .a=0xa6, .x=0x0e, .y=0x63, .sp=0x10, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x0af8, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0af9, .a=0xa6, .x=0x0e, .y=0x63, .sp=0x0f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x68}, {.addr=0x0af8, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0af8, .value=0x0d, .type=IO_READ},
        {.addr=0x0af9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x1fab, .a=0x00, .x=0x61, .y=0xcd, .sp=0x80, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x1fab, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1fac, .a=0x00, .x=0x61, .y=0xcd, .sp=0x7f, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x37}, {.addr=0x1fab, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1fab, .value=0x0d, .type=IO_READ},
        {.addr=0x1fac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xf5a2, .a=0xc2, .x=0x3f, .y=0x49, .sp=0x86, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0xf5a2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf5a3, .a=0xc2, .x=0x3f, .y=0x49, .sp=0x85, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xec}, {.addr=0xf5a2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf5a2, .value=0x0d, .type=IO_READ},
        {.addr=0xf5a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x9448, .a=0x5d, .x=0x12, .y=0x36, .sp=0x98, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x9448, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9449, .a=0x5d, .x=0x12, .y=0x36, .sp=0x97, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x16}, {.addr=0x9448, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9448, .value=0x0d, .type=IO_READ},
        {.addr=0x9449, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x2b6d, .a=0xfe, .x=0x24, .y=0x18, .sp=0x13, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x2b6d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2b6e, .a=0xfe, .x=0x24, .y=0x18, .sp=0x12, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x67}, {.addr=0x2b6d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2b6d, .value=0x0d, .type=IO_READ},
        {.addr=0x2b6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x49ec, .a=0x39, .x=0x07, .y=0xb1, .sp=0x53, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0x49ec, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x49ed, .a=0x39, .x=0x07, .y=0xb1, .sp=0x52, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x86}, {.addr=0x49ec, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x49ec, .value=0x0d, .type=IO_READ},
        {.addr=0x49ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x542b, .a=0xe5, .x=0xd3, .y=0x57, .sp=0x35, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x542b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x542c, .a=0xe5, .x=0xd3, .y=0x57, .sp=0x34, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x4d}, {.addr=0x542b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x542b, .value=0x0d, .type=IO_READ},
        {.addr=0x542c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x4d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xf514, .a=0x80, .x=0x1e, .y=0xfb, .sp=0xf1, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0xf514, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf515, .a=0x80, .x=0x1e, .y=0xfb, .sp=0xf0, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x99}, {.addr=0xf514, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf514, .value=0x0d, .type=IO_READ},
        {.addr=0xf515, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xff55, .a=0x82, .x=0xbc, .y=0x89, .sp=0xe0, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0xff55, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xff56, .a=0x82, .x=0xbc, .y=0x89, .sp=0xdf, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xab}, {.addr=0xff55, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xff55, .value=0x0d, .type=IO_READ},
        {.addr=0xff56, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xab, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xb647, .a=0x02, .x=0x75, .y=0x34, .sp=0x8e, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0xb647, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb648, .a=0x02, .x=0x75, .y=0x34, .sp=0x8d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xc0}, {.addr=0xb647, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb647, .value=0x0d, .type=IO_READ},
        {.addr=0xb648, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x53fc, .a=0x12, .x=0xf6, .y=0xaf, .sp=0xa4, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0x53fc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x53fd, .a=0x12, .x=0xf6, .y=0xaf, .sp=0xa3, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x04}, {.addr=0x53fc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x53fc, .value=0x0d, .type=IO_READ},
        {.addr=0x53fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x8afc, .a=0x10, .x=0x6b, .y=0x2a, .sp=0xdb, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0x8afc, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8afd, .a=0x10, .x=0x6b, .y=0x2a, .sp=0xda, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x06}, {.addr=0x8afc, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8afc, .value=0x0d, .type=IO_READ},
        {.addr=0x8afd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xbb8b, .a=0xfd, .x=0xfc, .y=0xe3, .sp=0xa9, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0xbb8b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbb8c, .a=0xfd, .x=0xfc, .y=0xe3, .sp=0xa8, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x35}, {.addr=0xbb8b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbb8b, .value=0x0d, .type=IO_READ},
        {.addr=0xbb8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x16d3, .a=0x82, .x=0xeb, .y=0x32, .sp=0xda, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0x16d3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x16d4, .a=0x82, .x=0xeb, .y=0x32, .sp=0xd9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x41}, {.addr=0x16d3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x16d3, .value=0x0d, .type=IO_READ},
        {.addr=0x16d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x4989, .a=0x8c, .x=0x82, .y=0x0d, .sp=0xee, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x4989, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x498a, .a=0x8c, .x=0x82, .y=0x0d, .sp=0xed, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x97}, {.addr=0x4989, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4989, .value=0x0d, .type=IO_READ},
        {.addr=0x498a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x1a24, .a=0xed, .x=0xe4, .y=0x22, .sp=0x7c, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x1a24, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1a25, .a=0xed, .x=0xe4, .y=0x22, .sp=0x7b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xc5}, {.addr=0x1a24, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1a24, .value=0x0d, .type=IO_READ},
        {.addr=0x1a25, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x10bb, .a=0xa2, .x=0x18, .y=0x60, .sp=0x28, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x10bb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x10bc, .a=0xa2, .x=0x18, .y=0x60, .sp=0x27, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xbc}, {.addr=0x10bb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x10bb, .value=0x0d, .type=IO_READ},
        {.addr=0x10bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x1153, .a=0x1c, .x=0xe6, .y=0xf4, .sp=0xbb, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x1153, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1154, .a=0x1c, .x=0xe6, .y=0xf4, .sp=0xba, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x65}, {.addr=0x1153, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1153, .value=0x0d, .type=IO_READ},
        {.addr=0x1154, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x3d98, .a=0xe5, .x=0x3e, .y=0xce, .sp=0x02, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0x3d98, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3d99, .a=0xe5, .x=0x3e, .y=0xce, .sp=0x01, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x98}, {.addr=0x3d98, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3d98, .value=0x0d, .type=IO_READ},
        {.addr=0x3d99, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xcf22, .a=0x0c, .x=0xbb, .y=0x9e, .sp=0x97, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x00}, {.addr=0xcf22, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcf23, .a=0x0c, .x=0xbb, .y=0x9e, .sp=0x96, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x06}, {.addr=0xcf22, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcf22, .value=0x0d, .type=IO_READ},
        {.addr=0xcf23, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x84d4, .a=0x3d, .x=0x50, .y=0x70, .sp=0xfc, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x84d4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x84d5, .a=0x3d, .x=0x50, .y=0x70, .sp=0xfb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x39}, {.addr=0x84d4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x84d4, .value=0x0d, .type=IO_READ},
        {.addr=0x84d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x39, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x7b77, .a=0x45, .x=0xac, .y=0xd3, .sp=0x7a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x7b77, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7b78, .a=0x45, .x=0xac, .y=0xd3, .sp=0x79, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xdb}, {.addr=0x7b77, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7b77, .value=0x0d, .type=IO_READ},
        {.addr=0x7b78, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xc712, .a=0x46, .x=0xe7, .y=0x5b, .sp=0x81, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0xc712, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc713, .a=0x46, .x=0xe7, .y=0x5b, .sp=0x80, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xbd}, {.addr=0xc712, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc712, .value=0x0d, .type=IO_READ},
        {.addr=0xc713, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xc1e9, .a=0x07, .x=0x3a, .y=0xdd, .sp=0xf4, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0xc1e9, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc1ea, .a=0x07, .x=0x3a, .y=0xdd, .sp=0xf3, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x36}, {.addr=0xc1e9, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc1e9, .value=0x0d, .type=IO_READ},
        {.addr=0xc1ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_0D, _0D_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xbfc2, .a=0xdb, .x=0x67, .y=0x5a, .sp=0x19, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0xbfc2, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbfc3, .a=0xdb, .x=0x67, .y=0x5a, .sp=0x18, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xd2}, {.addr=0xbfc2, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbfc2, .value=0x0d, .type=IO_READ},
        {.addr=0xbfc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("0D 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
