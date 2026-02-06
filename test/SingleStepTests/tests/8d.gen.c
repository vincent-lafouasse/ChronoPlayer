#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_8D, _8D_0000) {
    const struct CPU_State initial_cpu = {.pc=0x6c4c, .a=0xea, .x=0x04, .y=0xfb, .sp=0x73, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x6c4c, .value=0x8d}, {.addr=0x6c4d, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x6c4e, .a=0xea, .x=0x04, .y=0xf7, .sp=0x73, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6c4c, .value=0x8d}, {.addr=0x6c4d, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x6c4c, .value=0x8d, .type=IO_READ},
        {.addr=0x6c4d, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0001) {
    const struct CPU_State initial_cpu = {.pc=0x4a76, .a=0x08, .x=0x1a, .y=0x20, .sp=0x10, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x4a76, .value=0x8d}, {.addr=0x4a77, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4a78, .a=0x08, .x=0x1a, .y=0x5c, .sp=0x10, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4a76, .value=0x8d}, {.addr=0x4a77, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4a76, .value=0x8d, .type=IO_READ},
        {.addr=0x4a77, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0002) {
    const struct CPU_State initial_cpu = {.pc=0x777d, .a=0x8e, .x=0x6a, .y=0xd7, .sp=0xb4, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x777d, .value=0x8d}, {.addr=0x777e, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x777f, .a=0x8e, .x=0x6a, .y=0x61, .sp=0xb4, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x777d, .value=0x8d}, {.addr=0x777e, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x777d, .value=0x8d, .type=IO_READ},
        {.addr=0x777e, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0003) {
    const struct CPU_State initial_cpu = {.pc=0x4d84, .a=0x2f, .x=0x1e, .y=0xeb, .sp=0x99, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x4d84, .value=0x8d}, {.addr=0x4d85, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x4d86, .a=0x2f, .x=0x1e, .y=0x0c, .sp=0x99, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4d84, .value=0x8d}, {.addr=0x4d85, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x4d84, .value=0x8d, .type=IO_READ},
        {.addr=0x4d85, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0004) {
    const struct CPU_State initial_cpu = {.pc=0x70ea, .a=0xa3, .x=0x5e, .y=0x10, .sp=0x2a, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x70ea, .value=0x8d}, {.addr=0x70eb, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x70ec, .a=0xa3, .x=0x5e, .y=0x4f, .sp=0x2a, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x70ea, .value=0x8d}, {.addr=0x70eb, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x70ea, .value=0x8d, .type=IO_READ},
        {.addr=0x70eb, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0005) {
    const struct CPU_State initial_cpu = {.pc=0x0e7a, .a=0xb7, .x=0xc2, .y=0x53, .sp=0xf2, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0e7a, .value=0x8d}, {.addr=0x0e7b, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x0e7c, .a=0xb7, .x=0xc2, .y=0x36, .sp=0xf2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0e7a, .value=0x8d}, {.addr=0x0e7b, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x0e7a, .value=0x8d, .type=IO_READ},
        {.addr=0x0e7b, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0006) {
    const struct CPU_State initial_cpu = {.pc=0x2638, .a=0x99, .x=0xff, .y=0x00, .sp=0x9a, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2638, .value=0x8d}, {.addr=0x2639, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x263a, .a=0x99, .x=0xff, .y=0x25, .sp=0x9a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2638, .value=0x8d}, {.addr=0x2639, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x2638, .value=0x8d, .type=IO_READ},
        {.addr=0x2639, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0007) {
    const struct CPU_State initial_cpu = {.pc=0xa2f1, .a=0x30, .x=0x51, .y=0x31, .sp=0xf9, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xa2f1, .value=0x8d}, {.addr=0xa2f2, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xa2f3, .a=0x30, .x=0x51, .y=0xc8, .sp=0xf9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa2f1, .value=0x8d}, {.addr=0xa2f2, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xa2f1, .value=0x8d, .type=IO_READ},
        {.addr=0xa2f2, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0008) {
    const struct CPU_State initial_cpu = {.pc=0x56e3, .a=0x02, .x=0xdc, .y=0xd5, .sp=0x0f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x56e3, .value=0x8d}, {.addr=0x56e4, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x56e5, .a=0x02, .x=0xdc, .y=0x5e, .sp=0x0f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x56e3, .value=0x8d}, {.addr=0x56e4, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x56e3, .value=0x8d, .type=IO_READ},
        {.addr=0x56e4, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0009) {
    const struct CPU_State initial_cpu = {.pc=0xe7d4, .a=0x5a, .x=0x25, .y=0x2c, .sp=0xbf, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xe7d4, .value=0x8d}, {.addr=0xe7d5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe7d6, .a=0x5a, .x=0x25, .y=0x26, .sp=0xbf, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe7d4, .value=0x8d}, {.addr=0xe7d5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe7d4, .value=0x8d, .type=IO_READ},
        {.addr=0xe7d5, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_000A) {
    const struct CPU_State initial_cpu = {.pc=0xd63d, .a=0x04, .x=0x50, .y=0x3a, .sp=0xc6, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xd63d, .value=0x8d}, {.addr=0xd63e, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xd63f, .a=0x04, .x=0x50, .y=0xfe, .sp=0xc6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd63d, .value=0x8d}, {.addr=0xd63e, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xd63d, .value=0x8d, .type=IO_READ},
        {.addr=0xd63e, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_000B) {
    const struct CPU_State initial_cpu = {.pc=0xfc44, .a=0x49, .x=0x2f, .y=0x8c, .sp=0xaf, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xfc44, .value=0x8d}, {.addr=0xfc45, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xfc46, .a=0x49, .x=0x2f, .y=0xa9, .sp=0xaf, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xfc44, .value=0x8d}, {.addr=0xfc45, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xfc44, .value=0x8d, .type=IO_READ},
        {.addr=0xfc45, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_000C) {
    const struct CPU_State initial_cpu = {.pc=0x2152, .a=0x5d, .x=0x28, .y=0x0e, .sp=0xcc, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x2152, .value=0x8d}, {.addr=0x2153, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x2154, .a=0x5d, .x=0x28, .y=0x8d, .sp=0xcc, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2152, .value=0x8d}, {.addr=0x2153, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x2152, .value=0x8d, .type=IO_READ},
        {.addr=0x2153, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_000D) {
    const struct CPU_State initial_cpu = {.pc=0x1744, .a=0xd1, .x=0xad, .y=0x84, .sp=0x1b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x1744, .value=0x8d}, {.addr=0x1745, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1746, .a=0xd1, .x=0xad, .y=0x9d, .sp=0x1b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x1744, .value=0x8d}, {.addr=0x1745, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1744, .value=0x8d, .type=IO_READ},
        {.addr=0x1745, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_000E) {
    const struct CPU_State initial_cpu = {.pc=0xb324, .a=0xaa, .x=0x74, .y=0x04, .sp=0x46, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xb324, .value=0x8d}, {.addr=0xb325, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xb326, .a=0xaa, .x=0x74, .y=0x8d, .sp=0x46, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb324, .value=0x8d}, {.addr=0xb325, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xb324, .value=0x8d, .type=IO_READ},
        {.addr=0xb325, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_000F) {
    const struct CPU_State initial_cpu = {.pc=0x6244, .a=0x19, .x=0x23, .y=0x39, .sp=0x91, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x6244, .value=0x8d}, {.addr=0x6245, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x6246, .a=0x19, .x=0x23, .y=0xfb, .sp=0x91, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6244, .value=0x8d}, {.addr=0x6245, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x6244, .value=0x8d, .type=IO_READ},
        {.addr=0x6245, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0010) {
    const struct CPU_State initial_cpu = {.pc=0x4c01, .a=0xc2, .x=0xd8, .y=0x73, .sp=0xeb, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x4c01, .value=0x8d}, {.addr=0x4c02, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x4c03, .a=0xc2, .x=0xd8, .y=0x1b, .sp=0xeb, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x4c01, .value=0x8d}, {.addr=0x4c02, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x4c01, .value=0x8d, .type=IO_READ},
        {.addr=0x4c02, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0011) {
    const struct CPU_State initial_cpu = {.pc=0xee08, .a=0x50, .x=0xe0, .y=0xb9, .sp=0x07, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xee08, .value=0x8d}, {.addr=0xee09, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xee0a, .a=0x50, .x=0xe0, .y=0xcc, .sp=0x07, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xee08, .value=0x8d}, {.addr=0xee09, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xee08, .value=0x8d, .type=IO_READ},
        {.addr=0xee09, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0012) {
    const struct CPU_State initial_cpu = {.pc=0x5c3f, .a=0xf5, .x=0x70, .y=0x90, .sp=0xf5, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5c3f, .value=0x8d}, {.addr=0x5c40, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x5c41, .a=0xf5, .x=0x70, .y=0xa1, .sp=0xf5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5c3f, .value=0x8d}, {.addr=0x5c40, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x5c3f, .value=0x8d, .type=IO_READ},
        {.addr=0x5c40, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0013) {
    const struct CPU_State initial_cpu = {.pc=0xca05, .a=0x9f, .x=0x7c, .y=0x95, .sp=0x89, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xca05, .value=0x8d}, {.addr=0xca06, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xca07, .a=0x9f, .x=0x7c, .y=0x42, .sp=0x89, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xca05, .value=0x8d}, {.addr=0xca06, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xca05, .value=0x8d, .type=IO_READ},
        {.addr=0xca06, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0014) {
    const struct CPU_State initial_cpu = {.pc=0xcaa4, .a=0xb7, .x=0x09, .y=0x24, .sp=0xa4, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa4, .value=0x8d}, {.addr=0xcaa5, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xcaa6, .a=0xb7, .x=0x09, .y=0x99, .sp=0xa4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xcaa4, .value=0x8d}, {.addr=0xcaa5, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xcaa4, .value=0x8d, .type=IO_READ},
        {.addr=0xcaa5, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0015) {
    const struct CPU_State initial_cpu = {.pc=0xf539, .a=0xf7, .x=0x69, .y=0x00, .sp=0x1a, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xf539, .value=0x8d}, {.addr=0xf53a, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xf53b, .a=0xf7, .x=0x69, .y=0x39, .sp=0x1a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf539, .value=0x8d}, {.addr=0xf53a, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xf539, .value=0x8d, .type=IO_READ},
        {.addr=0xf53a, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0016) {
    const struct CPU_State initial_cpu = {.pc=0x9a39, .a=0x66, .x=0xb2, .y=0x20, .sp=0xa2, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x9a39, .value=0x8d}, {.addr=0x9a3a, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x9a3b, .a=0x66, .x=0xb2, .y=0xf5, .sp=0xa2, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9a39, .value=0x8d}, {.addr=0x9a3a, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x9a39, .value=0x8d, .type=IO_READ},
        {.addr=0x9a3a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0017) {
    const struct CPU_State initial_cpu = {.pc=0x76ac, .a=0x26, .x=0x02, .y=0x48, .sp=0x73, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x76ac, .value=0x8d}, {.addr=0x76ad, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x76ae, .a=0x26, .x=0x02, .y=0x70, .sp=0x73, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x76ac, .value=0x8d}, {.addr=0x76ad, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x76ac, .value=0x8d, .type=IO_READ},
        {.addr=0x76ad, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0018) {
    const struct CPU_State initial_cpu = {.pc=0x1c57, .a=0xfd, .x=0xd0, .y=0xd9, .sp=0x09, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x1c57, .value=0x8d}, {.addr=0x1c58, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x1c59, .a=0xfd, .x=0xd0, .y=0x34, .sp=0x09, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1c57, .value=0x8d}, {.addr=0x1c58, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x1c57, .value=0x8d, .type=IO_READ},
        {.addr=0x1c58, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0019) {
    const struct CPU_State initial_cpu = {.pc=0xaa4d, .a=0xd9, .x=0xf9, .y=0xc5, .sp=0x3d, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xaa4d, .value=0x8d}, {.addr=0xaa4e, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xaa4f, .a=0xd9, .x=0xf9, .y=0x48, .sp=0x3d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xaa4d, .value=0x8d}, {.addr=0xaa4e, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xaa4d, .value=0x8d, .type=IO_READ},
        {.addr=0xaa4e, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_001A) {
    const struct CPU_State initial_cpu = {.pc=0x48df, .a=0x96, .x=0x54, .y=0xad, .sp=0xa0, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x48df, .value=0x8d}, {.addr=0x48e0, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x48e1, .a=0x96, .x=0x54, .y=0xc4, .sp=0xa0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x48df, .value=0x8d}, {.addr=0x48e0, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x48df, .value=0x8d, .type=IO_READ},
        {.addr=0x48e0, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_001B) {
    const struct CPU_State initial_cpu = {.pc=0x654c, .a=0x56, .x=0xb0, .y=0x9f, .sp=0x7c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x654c, .value=0x8d}, {.addr=0x654d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x654e, .a=0x56, .x=0xb0, .y=0x3d, .sp=0x7c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x654c, .value=0x8d}, {.addr=0x654d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x654c, .value=0x8d, .type=IO_READ},
        {.addr=0x654d, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_001C) {
    const struct CPU_State initial_cpu = {.pc=0x2c1a, .a=0x25, .x=0x38, .y=0x87, .sp=0xd6, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x2c1a, .value=0x8d}, {.addr=0x2c1b, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x2c1c, .a=0x25, .x=0x38, .y=0x08, .sp=0xd6, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2c1a, .value=0x8d}, {.addr=0x2c1b, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x2c1a, .value=0x8d, .type=IO_READ},
        {.addr=0x2c1b, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_001D) {
    const struct CPU_State initial_cpu = {.pc=0xc19b, .a=0xbf, .x=0xff, .y=0xb8, .sp=0xd6, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xc19b, .value=0x8d}, {.addr=0xc19c, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xc19d, .a=0xbf, .x=0xff, .y=0xeb, .sp=0xd6, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xc19b, .value=0x8d}, {.addr=0xc19c, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xc19b, .value=0x8d, .type=IO_READ},
        {.addr=0xc19c, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_001E) {
    const struct CPU_State initial_cpu = {.pc=0x4376, .a=0x94, .x=0x47, .y=0xa6, .sp=0x3b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x4376, .value=0x8d}, {.addr=0x4377, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x4378, .a=0x94, .x=0x47, .y=0xd4, .sp=0x3b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x4376, .value=0x8d}, {.addr=0x4377, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x4376, .value=0x8d, .type=IO_READ},
        {.addr=0x4377, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_001F) {
    const struct CPU_State initial_cpu = {.pc=0x4487, .a=0x9f, .x=0x33, .y=0x16, .sp=0xe6, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x4487, .value=0x8d}, {.addr=0x4488, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x4489, .a=0x9f, .x=0x33, .y=0x63, .sp=0xe6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x4487, .value=0x8d}, {.addr=0x4488, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x4487, .value=0x8d, .type=IO_READ},
        {.addr=0x4488, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0020) {
    const struct CPU_State initial_cpu = {.pc=0xfb8a, .a=0x00, .x=0x5e, .y=0xe8, .sp=0x6c, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xfb8a, .value=0x8d}, {.addr=0xfb8b, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xfb8c, .a=0x00, .x=0x5e, .y=0x58, .sp=0x6c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xfb8a, .value=0x8d}, {.addr=0xfb8b, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xfb8a, .value=0x8d, .type=IO_READ},
        {.addr=0xfb8b, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0021) {
    const struct CPU_State initial_cpu = {.pc=0x0893, .a=0x27, .x=0xf7, .y=0x3f, .sp=0x13, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0893, .value=0x8d}, {.addr=0x0894, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x0895, .a=0x27, .x=0xf7, .y=0x43, .sp=0x13, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0893, .value=0x8d}, {.addr=0x0894, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x0893, .value=0x8d, .type=IO_READ},
        {.addr=0x0894, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0022) {
    const struct CPU_State initial_cpu = {.pc=0x4285, .a=0x04, .x=0x42, .y=0x57, .sp=0x67, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x4285, .value=0x8d}, {.addr=0x4286, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x4287, .a=0x04, .x=0x42, .y=0x67, .sp=0x67, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4285, .value=0x8d}, {.addr=0x4286, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x4285, .value=0x8d, .type=IO_READ},
        {.addr=0x4286, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0023) {
    const struct CPU_State initial_cpu = {.pc=0xbb45, .a=0x9d, .x=0xdf, .y=0x7a, .sp=0x54, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xbb45, .value=0x8d}, {.addr=0xbb46, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xbb47, .a=0x9d, .x=0xdf, .y=0x42, .sp=0x54, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xbb45, .value=0x8d}, {.addr=0xbb46, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xbb45, .value=0x8d, .type=IO_READ},
        {.addr=0xbb46, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0024) {
    const struct CPU_State initial_cpu = {.pc=0x8db5, .a=0x10, .x=0x90, .y=0xde, .sp=0x45, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x8db5, .value=0x8d}, {.addr=0x8db6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8db7, .a=0x10, .x=0x90, .y=0xdf, .sp=0x45, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8db5, .value=0x8d}, {.addr=0x8db6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8db5, .value=0x8d, .type=IO_READ},
        {.addr=0x8db6, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0025) {
    const struct CPU_State initial_cpu = {.pc=0xad78, .a=0xdc, .x=0x33, .y=0xe9, .sp=0x39, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xad78, .value=0x8d}, {.addr=0xad79, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xad7a, .a=0xdc, .x=0x33, .y=0x12, .sp=0x39, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xad78, .value=0x8d}, {.addr=0xad79, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xad78, .value=0x8d, .type=IO_READ},
        {.addr=0xad79, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0026) {
    const struct CPU_State initial_cpu = {.pc=0xaf44, .a=0x5e, .x=0x51, .y=0x7a, .sp=0x9a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xaf44, .value=0x8d}, {.addr=0xaf45, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xaf46, .a=0x5e, .x=0x51, .y=0xd5, .sp=0x9a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xaf44, .value=0x8d}, {.addr=0xaf45, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xaf44, .value=0x8d, .type=IO_READ},
        {.addr=0xaf45, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0027) {
    const struct CPU_State initial_cpu = {.pc=0xcec0, .a=0xe2, .x=0xba, .y=0x9b, .sp=0xb0, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xcec0, .value=0x8d}, {.addr=0xcec1, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xcec2, .a=0xe2, .x=0xba, .y=0x18, .sp=0xb0, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xcec0, .value=0x8d}, {.addr=0xcec1, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xcec0, .value=0x8d, .type=IO_READ},
        {.addr=0xcec1, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0028) {
    const struct CPU_State initial_cpu = {.pc=0x7b1f, .a=0xf8, .x=0x61, .y=0x3b, .sp=0x40, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x7b1f, .value=0x8d}, {.addr=0x7b20, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x7b21, .a=0xf8, .x=0x61, .y=0x59, .sp=0x40, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x7b1f, .value=0x8d}, {.addr=0x7b20, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x7b1f, .value=0x8d, .type=IO_READ},
        {.addr=0x7b20, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0029) {
    const struct CPU_State initial_cpu = {.pc=0x3483, .a=0xb7, .x=0x0a, .y=0xf5, .sp=0x1c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x3483, .value=0x8d}, {.addr=0x3484, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x3485, .a=0xb7, .x=0x0a, .y=0x35, .sp=0x1c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x3483, .value=0x8d}, {.addr=0x3484, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x3483, .value=0x8d, .type=IO_READ},
        {.addr=0x3484, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_002A) {
    const struct CPU_State initial_cpu = {.pc=0x57c9, .a=0x73, .x=0xde, .y=0x96, .sp=0x2d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x57c9, .value=0x8d}, {.addr=0x57ca, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x57cb, .a=0x73, .x=0xde, .y=0x4a, .sp=0x2d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x57c9, .value=0x8d}, {.addr=0x57ca, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x57c9, .value=0x8d, .type=IO_READ},
        {.addr=0x57ca, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_002B) {
    const struct CPU_State initial_cpu = {.pc=0xb093, .a=0x32, .x=0xe1, .y=0xe3, .sp=0x24, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb093, .value=0x8d}, {.addr=0xb094, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xb095, .a=0x32, .x=0xe1, .y=0xd9, .sp=0x24, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb093, .value=0x8d}, {.addr=0xb094, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xb093, .value=0x8d, .type=IO_READ},
        {.addr=0xb094, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_002C) {
    const struct CPU_State initial_cpu = {.pc=0x86c4, .a=0xf6, .x=0xd9, .y=0x06, .sp=0x5a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x86c4, .value=0x8d}, {.addr=0x86c5, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x86c6, .a=0xf6, .x=0xd9, .y=0x08, .sp=0x5a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x86c4, .value=0x8d}, {.addr=0x86c5, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x86c4, .value=0x8d, .type=IO_READ},
        {.addr=0x86c5, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_002D) {
    const struct CPU_State initial_cpu = {.pc=0x8c00, .a=0x45, .x=0x29, .y=0x1f, .sp=0x9b, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x8c00, .value=0x8d}, {.addr=0x8c01, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x8c02, .a=0x45, .x=0x29, .y=0x7a, .sp=0x9b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x8c00, .value=0x8d}, {.addr=0x8c01, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x8c00, .value=0x8d, .type=IO_READ},
        {.addr=0x8c01, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_002E) {
    const struct CPU_State initial_cpu = {.pc=0xc19c, .a=0xb3, .x=0x2a, .y=0x12, .sp=0xd7, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xc19c, .value=0x8d}, {.addr=0xc19d, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xc19e, .a=0xb3, .x=0x2a, .y=0xe3, .sp=0xd7, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xc19c, .value=0x8d}, {.addr=0xc19d, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xc19c, .value=0x8d, .type=IO_READ},
        {.addr=0xc19d, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_002F) {
    const struct CPU_State initial_cpu = {.pc=0xbff5, .a=0xdf, .x=0x52, .y=0x5c, .sp=0x0b, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xbff5, .value=0x8d}, {.addr=0xbff6, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xbff7, .a=0xdf, .x=0x52, .y=0xc2, .sp=0x0b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xbff5, .value=0x8d}, {.addr=0xbff6, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xbff5, .value=0x8d, .type=IO_READ},
        {.addr=0xbff6, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0030) {
    const struct CPU_State initial_cpu = {.pc=0xf936, .a=0xd6, .x=0xad, .y=0xf9, .sp=0xaa, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xf936, .value=0x8d}, {.addr=0xf937, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xf938, .a=0xd6, .x=0xad, .y=0x2a, .sp=0xaa, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf936, .value=0x8d}, {.addr=0xf937, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xf936, .value=0x8d, .type=IO_READ},
        {.addr=0xf937, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0031) {
    const struct CPU_State initial_cpu = {.pc=0xfd5b, .a=0xb2, .x=0xbe, .y=0xf1, .sp=0x54, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xfd5b, .value=0x8d}, {.addr=0xfd5c, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xfd5d, .a=0xb2, .x=0xbe, .y=0x62, .sp=0x54, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfd5b, .value=0x8d}, {.addr=0xfd5c, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xfd5b, .value=0x8d, .type=IO_READ},
        {.addr=0xfd5c, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0032) {
    const struct CPU_State initial_cpu = {.pc=0xe5aa, .a=0x4b, .x=0xa4, .y=0x3e, .sp=0xb6, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe5aa, .value=0x8d}, {.addr=0xe5ab, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xe5ac, .a=0x4b, .x=0xa4, .y=0xf5, .sp=0xb6, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe5aa, .value=0x8d}, {.addr=0xe5ab, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xe5aa, .value=0x8d, .type=IO_READ},
        {.addr=0xe5ab, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0033) {
    const struct CPU_State initial_cpu = {.pc=0x6b78, .a=0x71, .x=0x74, .y=0xa4, .sp=0x8f, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x6b78, .value=0x8d}, {.addr=0x6b79, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x6b7a, .a=0x71, .x=0x74, .y=0x82, .sp=0x8f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x6b78, .value=0x8d}, {.addr=0x6b79, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x6b78, .value=0x8d, .type=IO_READ},
        {.addr=0x6b79, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0034) {
    const struct CPU_State initial_cpu = {.pc=0x942e, .a=0x5c, .x=0xd0, .y=0xee, .sp=0x59, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x942e, .value=0x8d}, {.addr=0x942f, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x9430, .a=0x5c, .x=0xd0, .y=0x61, .sp=0x59, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x942e, .value=0x8d}, {.addr=0x942f, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x942e, .value=0x8d, .type=IO_READ},
        {.addr=0x942f, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0035) {
    const struct CPU_State initial_cpu = {.pc=0x5773, .a=0x19, .x=0xda, .y=0x32, .sp=0x13, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x5773, .value=0x8d}, {.addr=0x5774, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x5775, .a=0x19, .x=0xda, .y=0x29, .sp=0x13, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5773, .value=0x8d}, {.addr=0x5774, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x5773, .value=0x8d, .type=IO_READ},
        {.addr=0x5774, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0036) {
    const struct CPU_State initial_cpu = {.pc=0x79d9, .a=0x2a, .x=0x7b, .y=0x4a, .sp=0xaf, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x79d9, .value=0x8d}, {.addr=0x79da, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x79db, .a=0x2a, .x=0x7b, .y=0x79, .sp=0xaf, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x79d9, .value=0x8d}, {.addr=0x79da, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x79d9, .value=0x8d, .type=IO_READ},
        {.addr=0x79da, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0037) {
    const struct CPU_State initial_cpu = {.pc=0x0529, .a=0x5c, .x=0x66, .y=0x06, .sp=0x20, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0529, .value=0x8d}, {.addr=0x052a, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x052b, .a=0x5c, .x=0x66, .y=0xdb, .sp=0x20, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0529, .value=0x8d}, {.addr=0x052a, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x0529, .value=0x8d, .type=IO_READ},
        {.addr=0x052a, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0038) {
    const struct CPU_State initial_cpu = {.pc=0x87cb, .a=0xb1, .x=0x67, .y=0x7c, .sp=0x5b, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x87cb, .value=0x8d}, {.addr=0x87cc, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x87cd, .a=0xb1, .x=0x67, .y=0x3d, .sp=0x5b, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x87cb, .value=0x8d}, {.addr=0x87cc, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x87cb, .value=0x8d, .type=IO_READ},
        {.addr=0x87cc, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0039) {
    const struct CPU_State initial_cpu = {.pc=0x0db0, .a=0x2d, .x=0x02, .y=0xb9, .sp=0xc8, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0db0, .value=0x8d}, {.addr=0x0db1, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x0db2, .a=0x2d, .x=0x02, .y=0xa7, .sp=0xc8, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0db0, .value=0x8d}, {.addr=0x0db1, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x0db0, .value=0x8d, .type=IO_READ},
        {.addr=0x0db1, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_003A) {
    const struct CPU_State initial_cpu = {.pc=0xff48, .a=0xc0, .x=0xbb, .y=0xd0, .sp=0x66, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xff48, .value=0x8d}, {.addr=0xff49, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xff4a, .a=0xc0, .x=0xbb, .y=0xd5, .sp=0x66, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xff48, .value=0x8d}, {.addr=0xff49, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xff48, .value=0x8d, .type=IO_READ},
        {.addr=0xff49, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_003B) {
    const struct CPU_State initial_cpu = {.pc=0xca75, .a=0x74, .x=0x63, .y=0x68, .sp=0xb6, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xca75, .value=0x8d}, {.addr=0xca76, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xca77, .a=0x74, .x=0x63, .y=0xc2, .sp=0xb6, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xca75, .value=0x8d}, {.addr=0xca76, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xca75, .value=0x8d, .type=IO_READ},
        {.addr=0xca76, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_003C) {
    const struct CPU_State initial_cpu = {.pc=0xbb8e, .a=0x31, .x=0x41, .y=0x02, .sp=0x46, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xbb8e, .value=0x8d}, {.addr=0xbb8f, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xbb90, .a=0x31, .x=0x41, .y=0x7a, .sp=0x46, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xbb8e, .value=0x8d}, {.addr=0xbb8f, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xbb8e, .value=0x8d, .type=IO_READ},
        {.addr=0xbb8f, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_003D) {
    const struct CPU_State initial_cpu = {.pc=0xcffd, .a=0x04, .x=0x83, .y=0xde, .sp=0x7f, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xcffd, .value=0x8d}, {.addr=0xcffe, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xcfff, .a=0x04, .x=0x83, .y=0x0c, .sp=0x7f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xcffd, .value=0x8d}, {.addr=0xcffe, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xcffd, .value=0x8d, .type=IO_READ},
        {.addr=0xcffe, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_003E) {
    const struct CPU_State initial_cpu = {.pc=0xbce0, .a=0xdb, .x=0x93, .y=0xc3, .sp=0x0a, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xbce0, .value=0x8d}, {.addr=0xbce1, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xbce2, .a=0xdb, .x=0x93, .y=0x58, .sp=0x0a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xbce0, .value=0x8d}, {.addr=0xbce1, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xbce0, .value=0x8d, .type=IO_READ},
        {.addr=0xbce1, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_003F) {
    const struct CPU_State initial_cpu = {.pc=0xf10b, .a=0x91, .x=0xc7, .y=0x6f, .sp=0x2f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xf10b, .value=0x8d}, {.addr=0xf10c, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xf10d, .a=0x91, .x=0xc7, .y=0x02, .sp=0x2f, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xf10b, .value=0x8d}, {.addr=0xf10c, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xf10b, .value=0x8d, .type=IO_READ},
        {.addr=0xf10c, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0040) {
    const struct CPU_State initial_cpu = {.pc=0x6a3c, .a=0x82, .x=0x84, .y=0xee, .sp=0x58, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x6a3c, .value=0x8d}, {.addr=0x6a3d, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x6a3e, .a=0x82, .x=0x84, .y=0x0c, .sp=0x58, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6a3c, .value=0x8d}, {.addr=0x6a3d, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x6a3c, .value=0x8d, .type=IO_READ},
        {.addr=0x6a3d, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0041) {
    const struct CPU_State initial_cpu = {.pc=0x54fb, .a=0x53, .x=0x13, .y=0xf7, .sp=0x8d, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x54fb, .value=0x8d}, {.addr=0x54fc, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x54fd, .a=0x53, .x=0x13, .y=0x90, .sp=0x8d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x54fb, .value=0x8d}, {.addr=0x54fc, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x54fb, .value=0x8d, .type=IO_READ},
        {.addr=0x54fc, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0042) {
    const struct CPU_State initial_cpu = {.pc=0xce79, .a=0x8b, .x=0xc4, .y=0x5c, .sp=0xe4, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xce79, .value=0x8d}, {.addr=0xce7a, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xce7b, .a=0x8b, .x=0xc4, .y=0x02, .sp=0xe4, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xce79, .value=0x8d}, {.addr=0xce7a, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xce79, .value=0x8d, .type=IO_READ},
        {.addr=0xce7a, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0043) {
    const struct CPU_State initial_cpu = {.pc=0xf431, .a=0xd9, .x=0xcb, .y=0xab, .sp=0x31, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xf431, .value=0x8d}, {.addr=0xf432, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xf433, .a=0xd9, .x=0xcb, .y=0x15, .sp=0x31, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf431, .value=0x8d}, {.addr=0xf432, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xf431, .value=0x8d, .type=IO_READ},
        {.addr=0xf432, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0044) {
    const struct CPU_State initial_cpu = {.pc=0x0b42, .a=0x75, .x=0xba, .y=0x6e, .sp=0x12, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0b42, .value=0x8d}, {.addr=0x0b43, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x0b44, .a=0x75, .x=0xba, .y=0x21, .sp=0x12, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0b42, .value=0x8d}, {.addr=0x0b43, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x0b42, .value=0x8d, .type=IO_READ},
        {.addr=0x0b43, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0045) {
    const struct CPU_State initial_cpu = {.pc=0x25cb, .a=0x3d, .x=0x27, .y=0x9f, .sp=0xe1, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x25cb, .value=0x8d}, {.addr=0x25cc, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x25cd, .a=0x3d, .x=0x27, .y=0x4a, .sp=0xe1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x25cb, .value=0x8d}, {.addr=0x25cc, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x25cb, .value=0x8d, .type=IO_READ},
        {.addr=0x25cc, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0046) {
    const struct CPU_State initial_cpu = {.pc=0x447c, .a=0x4e, .x=0x9f, .y=0xc2, .sp=0x34, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x447c, .value=0x8d}, {.addr=0x447d, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x447e, .a=0x4e, .x=0x9f, .y=0xeb, .sp=0x34, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x447c, .value=0x8d}, {.addr=0x447d, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x447c, .value=0x8d, .type=IO_READ},
        {.addr=0x447d, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0047) {
    const struct CPU_State initial_cpu = {.pc=0xcb00, .a=0x2e, .x=0x2b, .y=0x80, .sp=0xc2, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xcb00, .value=0x8d}, {.addr=0xcb01, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcb02, .a=0x2e, .x=0x2b, .y=0x80, .sp=0xc2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xcb00, .value=0x8d}, {.addr=0xcb01, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcb00, .value=0x8d, .type=IO_READ},
        {.addr=0xcb01, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0048) {
    const struct CPU_State initial_cpu = {.pc=0xbfcb, .a=0xb8, .x=0x1a, .y=0x9f, .sp=0x92, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xbfcb, .value=0x8d}, {.addr=0xbfcc, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xbfcd, .a=0xb8, .x=0x1a, .y=0x7f, .sp=0x92, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xbfcb, .value=0x8d}, {.addr=0xbfcc, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xbfcb, .value=0x8d, .type=IO_READ},
        {.addr=0xbfcc, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0049) {
    const struct CPU_State initial_cpu = {.pc=0x0487, .a=0x38, .x=0xdd, .y=0x5d, .sp=0x53, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0487, .value=0x8d}, {.addr=0x0488, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x0489, .a=0x38, .x=0xdd, .y=0x21, .sp=0x53, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0487, .value=0x8d}, {.addr=0x0488, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x0487, .value=0x8d, .type=IO_READ},
        {.addr=0x0488, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_004A) {
    const struct CPU_State initial_cpu = {.pc=0xfbec, .a=0xfa, .x=0x3f, .y=0xad, .sp=0x1b, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xfbec, .value=0x8d}, {.addr=0xfbed, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xfbee, .a=0xfa, .x=0x3f, .y=0x1f, .sp=0x1b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xfbec, .value=0x8d}, {.addr=0xfbed, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xfbec, .value=0x8d, .type=IO_READ},
        {.addr=0xfbed, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_004B) {
    const struct CPU_State initial_cpu = {.pc=0x09b6, .a=0x37, .x=0x9f, .y=0x35, .sp=0x3c, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x09b6, .value=0x8d}, {.addr=0x09b7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x09b8, .a=0x37, .x=0x9f, .y=0x80, .sp=0x3c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x09b6, .value=0x8d}, {.addr=0x09b7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x09b6, .value=0x8d, .type=IO_READ},
        {.addr=0x09b7, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_004C) {
    const struct CPU_State initial_cpu = {.pc=0xf82c, .a=0xc8, .x=0xc7, .y=0xff, .sp=0x33, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xf82c, .value=0x8d}, {.addr=0xf82d, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xf82e, .a=0xc8, .x=0xc7, .y=0xba, .sp=0x33, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xf82c, .value=0x8d}, {.addr=0xf82d, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xf82c, .value=0x8d, .type=IO_READ},
        {.addr=0xf82d, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_004D) {
    const struct CPU_State initial_cpu = {.pc=0x94fd, .a=0xd1, .x=0x4c, .y=0x8e, .sp=0x43, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x94fd, .value=0x8d}, {.addr=0x94fe, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x94ff, .a=0xd1, .x=0x4c, .y=0x11, .sp=0x43, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x94fd, .value=0x8d}, {.addr=0x94fe, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x94fd, .value=0x8d, .type=IO_READ},
        {.addr=0x94fe, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_004E) {
    const struct CPU_State initial_cpu = {.pc=0xc049, .a=0x9e, .x=0x50, .y=0x20, .sp=0xb7, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xc049, .value=0x8d}, {.addr=0xc04a, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xc04b, .a=0x9e, .x=0x50, .y=0xfa, .sp=0xb7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc049, .value=0x8d}, {.addr=0xc04a, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xc049, .value=0x8d, .type=IO_READ},
        {.addr=0xc04a, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_004F) {
    const struct CPU_State initial_cpu = {.pc=0xb064, .a=0x4d, .x=0x87, .y=0x16, .sp=0x57, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xb064, .value=0x8d}, {.addr=0xb065, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xb066, .a=0x4d, .x=0x87, .y=0x19, .sp=0x57, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb064, .value=0x8d}, {.addr=0xb065, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xb064, .value=0x8d, .type=IO_READ},
        {.addr=0xb065, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0050) {
    const struct CPU_State initial_cpu = {.pc=0xe378, .a=0xfe, .x=0xdb, .y=0x9e, .sp=0x79, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xe378, .value=0x8d}, {.addr=0xe379, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xe37a, .a=0xfe, .x=0xdb, .y=0x4b, .sp=0x79, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe378, .value=0x8d}, {.addr=0xe379, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xe378, .value=0x8d, .type=IO_READ},
        {.addr=0xe379, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0051) {
    const struct CPU_State initial_cpu = {.pc=0x748f, .a=0x61, .x=0x4f, .y=0x57, .sp=0x37, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x748f, .value=0x8d}, {.addr=0x7490, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x7491, .a=0x61, .x=0x4f, .y=0x7e, .sp=0x37, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x748f, .value=0x8d}, {.addr=0x7490, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x748f, .value=0x8d, .type=IO_READ},
        {.addr=0x7490, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0052) {
    const struct CPU_State initial_cpu = {.pc=0x432a, .a=0xef, .x=0xa1, .y=0x8c, .sp=0x3f, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x432a, .value=0x8d}, {.addr=0x432b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x432c, .a=0xef, .x=0xa1, .y=0x1c, .sp=0x3f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x432a, .value=0x8d}, {.addr=0x432b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x432a, .value=0x8d, .type=IO_READ},
        {.addr=0x432b, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0053) {
    const struct CPU_State initial_cpu = {.pc=0x2368, .a=0xc4, .x=0x98, .y=0x5d, .sp=0x7f, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x2368, .value=0x8d}, {.addr=0x2369, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x236a, .a=0xc4, .x=0x98, .y=0x2d, .sp=0x7f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2368, .value=0x8d}, {.addr=0x2369, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2368, .value=0x8d, .type=IO_READ},
        {.addr=0x2369, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0054) {
    const struct CPU_State initial_cpu = {.pc=0x9d6d, .a=0x30, .x=0xdc, .y=0xdb, .sp=0x8e, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x9d6d, .value=0x8d}, {.addr=0x9d6e, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x9d6f, .a=0x30, .x=0xdc, .y=0xd2, .sp=0x8e, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9d6d, .value=0x8d}, {.addr=0x9d6e, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x9d6d, .value=0x8d, .type=IO_READ},
        {.addr=0x9d6e, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0055) {
    const struct CPU_State initial_cpu = {.pc=0xa3fe, .a=0x72, .x=0x1e, .y=0xfc, .sp=0x31, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xa3fe, .value=0x8d}, {.addr=0xa3ff, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xa400, .a=0x72, .x=0x1e, .y=0xe3, .sp=0x31, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa3fe, .value=0x8d}, {.addr=0xa3ff, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xa3fe, .value=0x8d, .type=IO_READ},
        {.addr=0xa3ff, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0056) {
    const struct CPU_State initial_cpu = {.pc=0x5048, .a=0x61, .x=0xfb, .y=0x34, .sp=0xc5, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x5048, .value=0x8d}, {.addr=0x5049, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x504a, .a=0x61, .x=0xfb, .y=0x52, .sp=0xc5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5048, .value=0x8d}, {.addr=0x5049, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x5048, .value=0x8d, .type=IO_READ},
        {.addr=0x5049, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0057) {
    const struct CPU_State initial_cpu = {.pc=0x0af7, .a=0x97, .x=0x6f, .y=0x98, .sp=0x13, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0af7, .value=0x8d}, {.addr=0x0af8, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x0af9, .a=0x97, .x=0x6f, .y=0x83, .sp=0x13, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0af7, .value=0x8d}, {.addr=0x0af8, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x0af7, .value=0x8d, .type=IO_READ},
        {.addr=0x0af8, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0058) {
    const struct CPU_State initial_cpu = {.pc=0x3a05, .a=0xc0, .x=0x16, .y=0xe1, .sp=0x5d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x3a05, .value=0x8d}, {.addr=0x3a06, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3a07, .a=0xc0, .x=0x16, .y=0x9c, .sp=0x5d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3a05, .value=0x8d}, {.addr=0x3a06, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3a05, .value=0x8d, .type=IO_READ},
        {.addr=0x3a06, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0059) {
    const struct CPU_State initial_cpu = {.pc=0xac4f, .a=0x0b, .x=0xfe, .y=0xc2, .sp=0x22, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xac4f, .value=0x8d}, {.addr=0xac50, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xac51, .a=0x0b, .x=0xfe, .y=0x63, .sp=0x22, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xac4f, .value=0x8d}, {.addr=0xac50, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xac4f, .value=0x8d, .type=IO_READ},
        {.addr=0xac50, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_005A) {
    const struct CPU_State initial_cpu = {.pc=0x99f7, .a=0xb0, .x=0x38, .y=0xcf, .sp=0xdf, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x99f7, .value=0x8d}, {.addr=0x99f8, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x99f9, .a=0xb0, .x=0x38, .y=0x43, .sp=0xdf, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x99f7, .value=0x8d}, {.addr=0x99f8, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x99f7, .value=0x8d, .type=IO_READ},
        {.addr=0x99f8, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_005B) {
    const struct CPU_State initial_cpu = {.pc=0x816e, .a=0x28, .x=0xd8, .y=0xa0, .sp=0x43, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x816e, .value=0x8d}, {.addr=0x816f, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x8170, .a=0x28, .x=0xd8, .y=0x2a, .sp=0x43, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x816e, .value=0x8d}, {.addr=0x816f, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x816e, .value=0x8d, .type=IO_READ},
        {.addr=0x816f, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_005C) {
    const struct CPU_State initial_cpu = {.pc=0x8814, .a=0xfb, .x=0x62, .y=0x4c, .sp=0x07, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8814, .value=0x8d}, {.addr=0x8815, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x8816, .a=0xfb, .x=0x62, .y=0xe4, .sp=0x07, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x8814, .value=0x8d}, {.addr=0x8815, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x8814, .value=0x8d, .type=IO_READ},
        {.addr=0x8815, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_005D) {
    const struct CPU_State initial_cpu = {.pc=0x329d, .a=0x4e, .x=0xb7, .y=0x35, .sp=0x95, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x329d, .value=0x8d}, {.addr=0x329e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x329f, .a=0x4e, .x=0xb7, .y=0x1c, .sp=0x95, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x329d, .value=0x8d}, {.addr=0x329e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x329d, .value=0x8d, .type=IO_READ},
        {.addr=0x329e, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_005E) {
    const struct CPU_State initial_cpu = {.pc=0xda74, .a=0x6e, .x=0xf2, .y=0xaf, .sp=0xe0, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xda74, .value=0x8d}, {.addr=0xda75, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xda76, .a=0x6e, .x=0xf2, .y=0xf3, .sp=0xe0, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xda74, .value=0x8d}, {.addr=0xda75, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xda74, .value=0x8d, .type=IO_READ},
        {.addr=0xda75, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_005F) {
    const struct CPU_State initial_cpu = {.pc=0x583e, .a=0xd2, .x=0xae, .y=0x22, .sp=0x51, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x583e, .value=0x8d}, {.addr=0x583f, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x5840, .a=0xd2, .x=0xae, .y=0x41, .sp=0x51, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x583e, .value=0x8d}, {.addr=0x583f, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x583e, .value=0x8d, .type=IO_READ},
        {.addr=0x583f, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0060) {
    const struct CPU_State initial_cpu = {.pc=0x9365, .a=0xf0, .x=0x9d, .y=0xfd, .sp=0x84, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x9365, .value=0x8d}, {.addr=0x9366, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9367, .a=0xf0, .x=0x9d, .y=0xed, .sp=0x84, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9365, .value=0x8d}, {.addr=0x9366, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9365, .value=0x8d, .type=IO_READ},
        {.addr=0x9366, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0061) {
    const struct CPU_State initial_cpu = {.pc=0xb334, .a=0xb9, .x=0xcf, .y=0xc3, .sp=0x96, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xb334, .value=0x8d}, {.addr=0xb335, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xb336, .a=0xb9, .x=0xcf, .y=0xeb, .sp=0x96, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb334, .value=0x8d}, {.addr=0xb335, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xb334, .value=0x8d, .type=IO_READ},
        {.addr=0xb335, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0062) {
    const struct CPU_State initial_cpu = {.pc=0x88a7, .a=0xe1, .x=0x82, .y=0xdf, .sp=0xc7, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x88a7, .value=0x8d}, {.addr=0x88a8, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x88a9, .a=0xe1, .x=0x82, .y=0x58, .sp=0xc7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x88a7, .value=0x8d}, {.addr=0x88a8, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x88a7, .value=0x8d, .type=IO_READ},
        {.addr=0x88a8, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0063) {
    const struct CPU_State initial_cpu = {.pc=0x7ecf, .a=0x34, .x=0x36, .y=0x10, .sp=0xb8, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x7ecf, .value=0x8d}, {.addr=0x7ed0, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x7ed1, .a=0x34, .x=0x36, .y=0xe2, .sp=0xb8, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x7ecf, .value=0x8d}, {.addr=0x7ed0, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x7ecf, .value=0x8d, .type=IO_READ},
        {.addr=0x7ed0, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0064) {
    const struct CPU_State initial_cpu = {.pc=0x04eb, .a=0xdc, .x=0xf2, .y=0xbe, .sp=0x53, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x04eb, .value=0x8d}, {.addr=0x04ec, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x04ed, .a=0xdc, .x=0xf2, .y=0x44, .sp=0x53, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x04eb, .value=0x8d}, {.addr=0x04ec, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x04eb, .value=0x8d, .type=IO_READ},
        {.addr=0x04ec, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0065) {
    const struct CPU_State initial_cpu = {.pc=0x7103, .a=0x35, .x=0x7d, .y=0x05, .sp=0xe7, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x7103, .value=0x8d}, {.addr=0x7104, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x7105, .a=0x35, .x=0x7d, .y=0x77, .sp=0xe7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7103, .value=0x8d}, {.addr=0x7104, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x7103, .value=0x8d, .type=IO_READ},
        {.addr=0x7104, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0066) {
    const struct CPU_State initial_cpu = {.pc=0xe876, .a=0x2a, .x=0xad, .y=0x82, .sp=0xa1, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xe876, .value=0x8d}, {.addr=0xe877, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xe878, .a=0x2a, .x=0xad, .y=0x32, .sp=0xa1, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xe876, .value=0x8d}, {.addr=0xe877, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xe876, .value=0x8d, .type=IO_READ},
        {.addr=0xe877, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0067) {
    const struct CPU_State initial_cpu = {.pc=0xd0da, .a=0xc9, .x=0x10, .y=0x66, .sp=0xa9, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xd0da, .value=0x8d}, {.addr=0xd0db, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd0dc, .a=0xc9, .x=0x10, .y=0xbe, .sp=0xa9, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd0da, .value=0x8d}, {.addr=0xd0db, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd0da, .value=0x8d, .type=IO_READ},
        {.addr=0xd0db, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0068) {
    const struct CPU_State initial_cpu = {.pc=0x8e93, .a=0x25, .x=0x47, .y=0x9e, .sp=0x7b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x8e93, .value=0x8d}, {.addr=0x8e94, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x8e95, .a=0x25, .x=0x47, .y=0xff, .sp=0x7b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x8e93, .value=0x8d}, {.addr=0x8e94, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x8e93, .value=0x8d, .type=IO_READ},
        {.addr=0x8e94, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0069) {
    const struct CPU_State initial_cpu = {.pc=0xbb8f, .a=0x4a, .x=0xcd, .y=0x0b, .sp=0x55, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xbb8f, .value=0x8d}, {.addr=0xbb90, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xbb91, .a=0x4a, .x=0xcd, .y=0x60, .sp=0x55, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xbb8f, .value=0x8d}, {.addr=0xbb90, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xbb8f, .value=0x8d, .type=IO_READ},
        {.addr=0xbb90, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_006A) {
    const struct CPU_State initial_cpu = {.pc=0x542c, .a=0xae, .x=0x55, .y=0xf0, .sp=0x4e, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x542c, .value=0x8d}, {.addr=0x542d, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x542e, .a=0xae, .x=0x55, .y=0x11, .sp=0x4e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x542c, .value=0x8d}, {.addr=0x542d, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x542c, .value=0x8d, .type=IO_READ},
        {.addr=0x542d, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_006B) {
    const struct CPU_State initial_cpu = {.pc=0xd3db, .a=0xf1, .x=0x15, .y=0xc1, .sp=0x82, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xd3db, .value=0x8d}, {.addr=0xd3dc, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xd3dd, .a=0xf1, .x=0x15, .y=0x88, .sp=0x82, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xd3db, .value=0x8d}, {.addr=0xd3dc, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xd3db, .value=0x8d, .type=IO_READ},
        {.addr=0xd3dc, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_006C) {
    const struct CPU_State initial_cpu = {.pc=0x9b1d, .a=0xc7, .x=0x4b, .y=0xd2, .sp=0x9a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x9b1d, .value=0x8d}, {.addr=0x9b1e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9b1f, .a=0xc7, .x=0x4b, .y=0xe6, .sp=0x9a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x9b1d, .value=0x8d}, {.addr=0x9b1e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9b1d, .value=0x8d, .type=IO_READ},
        {.addr=0x9b1e, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_006D) {
    const struct CPU_State initial_cpu = {.pc=0x7e4b, .a=0x96, .x=0x15, .y=0x55, .sp=0x03, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x7e4b, .value=0x8d}, {.addr=0x7e4c, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x7e4d, .a=0x96, .x=0x15, .y=0x5b, .sp=0x03, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7e4b, .value=0x8d}, {.addr=0x7e4c, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x7e4b, .value=0x8d, .type=IO_READ},
        {.addr=0x7e4c, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_006E) {
    const struct CPU_State initial_cpu = {.pc=0xcc74, .a=0x82, .x=0xa2, .y=0x92, .sp=0xd9, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xcc74, .value=0x8d}, {.addr=0xcc75, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xcc76, .a=0x82, .x=0xa2, .y=0xb7, .sp=0xd9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xcc74, .value=0x8d}, {.addr=0xcc75, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xcc74, .value=0x8d, .type=IO_READ},
        {.addr=0xcc75, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_006F) {
    const struct CPU_State initial_cpu = {.pc=0x8c8e, .a=0x74, .x=0xb7, .y=0x27, .sp=0x8b, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x8c8e, .value=0x8d}, {.addr=0x8c8f, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x8c90, .a=0x74, .x=0xb7, .y=0xd1, .sp=0x8b, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x8c8e, .value=0x8d}, {.addr=0x8c8f, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x8c8e, .value=0x8d, .type=IO_READ},
        {.addr=0x8c8f, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0070) {
    const struct CPU_State initial_cpu = {.pc=0x3653, .a=0x3f, .x=0xeb, .y=0xa2, .sp=0x82, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x3653, .value=0x8d}, {.addr=0x3654, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x3655, .a=0x3f, .x=0xeb, .y=0x33, .sp=0x82, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x3653, .value=0x8d}, {.addr=0x3654, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x3653, .value=0x8d, .type=IO_READ},
        {.addr=0x3654, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0071) {
    const struct CPU_State initial_cpu = {.pc=0x4d35, .a=0xf7, .x=0xb5, .y=0x1c, .sp=0x59, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x4d35, .value=0x8d}, {.addr=0x4d36, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x4d37, .a=0xf7, .x=0xb5, .y=0x0b, .sp=0x59, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4d35, .value=0x8d}, {.addr=0x4d36, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x4d35, .value=0x8d, .type=IO_READ},
        {.addr=0x4d36, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0072) {
    const struct CPU_State initial_cpu = {.pc=0x6911, .a=0x24, .x=0x1e, .y=0x5d, .sp=0xad, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x6911, .value=0x8d}, {.addr=0x6912, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x6913, .a=0x24, .x=0x1e, .y=0xb8, .sp=0xad, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x6911, .value=0x8d}, {.addr=0x6912, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x6911, .value=0x8d, .type=IO_READ},
        {.addr=0x6912, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0073) {
    const struct CPU_State initial_cpu = {.pc=0xb52f, .a=0x21, .x=0x36, .y=0x61, .sp=0x34, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xb52f, .value=0x8d}, {.addr=0xb530, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xb531, .a=0x21, .x=0x36, .y=0x84, .sp=0x34, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xb52f, .value=0x8d}, {.addr=0xb530, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xb52f, .value=0x8d, .type=IO_READ},
        {.addr=0xb530, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0074) {
    const struct CPU_State initial_cpu = {.pc=0xe722, .a=0xbf, .x=0x7a, .y=0x06, .sp=0x8a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xe722, .value=0x8d}, {.addr=0xe723, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xe724, .a=0xbf, .x=0x7a, .y=0xfa, .sp=0x8a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xe722, .value=0x8d}, {.addr=0xe723, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xe722, .value=0x8d, .type=IO_READ},
        {.addr=0xe723, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0075) {
    const struct CPU_State initial_cpu = {.pc=0xb084, .a=0xde, .x=0x3d, .y=0x96, .sp=0x79, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xb084, .value=0x8d}, {.addr=0xb085, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xb086, .a=0xde, .x=0x3d, .y=0x90, .sp=0x79, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb084, .value=0x8d}, {.addr=0xb085, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xb084, .value=0x8d, .type=IO_READ},
        {.addr=0xb085, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0076) {
    const struct CPU_State initial_cpu = {.pc=0x94d4, .a=0x0f, .x=0x06, .y=0x32, .sp=0xeb, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x94d4, .value=0x8d}, {.addr=0x94d5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x94d6, .a=0x0f, .x=0x06, .y=0xc0, .sp=0xeb, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x94d4, .value=0x8d}, {.addr=0x94d5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x94d4, .value=0x8d, .type=IO_READ},
        {.addr=0x94d5, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0077) {
    const struct CPU_State initial_cpu = {.pc=0x546a, .a=0x13, .x=0x3a, .y=0x9a, .sp=0x4f, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x546a, .value=0x8d}, {.addr=0x546b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x546c, .a=0x13, .x=0x3a, .y=0xc0, .sp=0x4f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x546a, .value=0x8d}, {.addr=0x546b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x546a, .value=0x8d, .type=IO_READ},
        {.addr=0x546b, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0078) {
    const struct CPU_State initial_cpu = {.pc=0x7a1f, .a=0x8b, .x=0x1e, .y=0x59, .sp=0xb2, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x7a1f, .value=0x8d}, {.addr=0x7a20, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x7a21, .a=0x8b, .x=0x1e, .y=0x92, .sp=0xb2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7a1f, .value=0x8d}, {.addr=0x7a20, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x7a1f, .value=0x8d, .type=IO_READ},
        {.addr=0x7a20, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0079) {
    const struct CPU_State initial_cpu = {.pc=0x9cc8, .a=0x1f, .x=0x9b, .y=0x6d, .sp=0x75, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x9cc8, .value=0x8d}, {.addr=0x9cc9, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x9cca, .a=0x1f, .x=0x9b, .y=0xe8, .sp=0x75, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9cc8, .value=0x8d}, {.addr=0x9cc9, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x9cc8, .value=0x8d, .type=IO_READ},
        {.addr=0x9cc9, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_007A) {
    const struct CPU_State initial_cpu = {.pc=0x33a5, .a=0x5a, .x=0xcc, .y=0x59, .sp=0x56, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x33a5, .value=0x8d}, {.addr=0x33a6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x33a7, .a=0x5a, .x=0xcc, .y=0xfc, .sp=0x56, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x33a5, .value=0x8d}, {.addr=0x33a6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x33a5, .value=0x8d, .type=IO_READ},
        {.addr=0x33a6, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_007B) {
    const struct CPU_State initial_cpu = {.pc=0xe3fd, .a=0xc0, .x=0x54, .y=0x5a, .sp=0xb2, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xe3fd, .value=0x8d}, {.addr=0xe3fe, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xe3ff, .a=0xc0, .x=0x54, .y=0x43, .sp=0xb2, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe3fd, .value=0x8d}, {.addr=0xe3fe, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xe3fd, .value=0x8d, .type=IO_READ},
        {.addr=0xe3fe, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_007C) {
    const struct CPU_State initial_cpu = {.pc=0x71a6, .a=0xd8, .x=0xf5, .y=0xac, .sp=0xca, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x71a6, .value=0x8d}, {.addr=0x71a7, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x71a8, .a=0xd8, .x=0xf5, .y=0x34, .sp=0xca, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x71a6, .value=0x8d}, {.addr=0x71a7, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x71a6, .value=0x8d, .type=IO_READ},
        {.addr=0x71a7, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_007D) {
    const struct CPU_State initial_cpu = {.pc=0x2f56, .a=0x45, .x=0x86, .y=0x2b, .sp=0x84, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x2f56, .value=0x8d}, {.addr=0x2f57, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2f58, .a=0x45, .x=0x86, .y=0xbe, .sp=0x84, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x2f56, .value=0x8d}, {.addr=0x2f57, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2f56, .value=0x8d, .type=IO_READ},
        {.addr=0x2f57, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_007E) {
    const struct CPU_State initial_cpu = {.pc=0xf7b7, .a=0x29, .x=0x7c, .y=0x8b, .sp=0x4e, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xf7b7, .value=0x8d}, {.addr=0xf7b8, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xf7b9, .a=0x29, .x=0x7c, .y=0xf3, .sp=0x4e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf7b7, .value=0x8d}, {.addr=0xf7b8, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xf7b7, .value=0x8d, .type=IO_READ},
        {.addr=0xf7b8, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_007F) {
    const struct CPU_State initial_cpu = {.pc=0xa510, .a=0x76, .x=0x65, .y=0xf2, .sp=0xbf, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa510, .value=0x8d}, {.addr=0xa511, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa512, .a=0x76, .x=0x65, .y=0x3d, .sp=0xbf, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xa510, .value=0x8d}, {.addr=0xa511, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa510, .value=0x8d, .type=IO_READ},
        {.addr=0xa511, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0080) {
    const struct CPU_State initial_cpu = {.pc=0x102c, .a=0x52, .x=0xc7, .y=0x10, .sp=0xad, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x102c, .value=0x8d}, {.addr=0x102d, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x102e, .a=0x52, .x=0xc7, .y=0x7e, .sp=0xad, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x102c, .value=0x8d}, {.addr=0x102d, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x102c, .value=0x8d, .type=IO_READ},
        {.addr=0x102d, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0081) {
    const struct CPU_State initial_cpu = {.pc=0xbdba, .a=0x7f, .x=0x30, .y=0x2e, .sp=0x2e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xbdba, .value=0x8d}, {.addr=0xbdbb, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xbdbc, .a=0x7f, .x=0x30, .y=0xb1, .sp=0x2e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xbdba, .value=0x8d}, {.addr=0xbdbb, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xbdba, .value=0x8d, .type=IO_READ},
        {.addr=0xbdbb, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0082) {
    const struct CPU_State initial_cpu = {.pc=0xadad, .a=0xa6, .x=0x9c, .y=0xf5, .sp=0x53, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xadad, .value=0x8d}, {.addr=0xadae, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xadaf, .a=0xa6, .x=0x9c, .y=0x4a, .sp=0x53, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xadad, .value=0x8d}, {.addr=0xadae, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xadad, .value=0x8d, .type=IO_READ},
        {.addr=0xadae, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0083) {
    const struct CPU_State initial_cpu = {.pc=0x0221, .a=0x82, .x=0x1b, .y=0x20, .sp=0xfd, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0221, .value=0x8d}, {.addr=0x0222, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0223, .a=0x82, .x=0x1b, .y=0xfd, .sp=0xfd, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0221, .value=0x8d}, {.addr=0x0222, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0221, .value=0x8d, .type=IO_READ},
        {.addr=0x0222, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0084) {
    const struct CPU_State initial_cpu = {.pc=0x4536, .a=0x2d, .x=0x47, .y=0x21, .sp=0x61, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x4536, .value=0x8d}, {.addr=0x4537, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x4538, .a=0x2d, .x=0x47, .y=0x58, .sp=0x61, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4536, .value=0x8d}, {.addr=0x4537, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x4536, .value=0x8d, .type=IO_READ},
        {.addr=0x4537, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0085) {
    const struct CPU_State initial_cpu = {.pc=0x1960, .a=0x93, .x=0x36, .y=0x7f, .sp=0xf6, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1960, .value=0x8d}, {.addr=0x1961, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x1962, .a=0x93, .x=0x36, .y=0x94, .sp=0xf6, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x1960, .value=0x8d}, {.addr=0x1961, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x1960, .value=0x8d, .type=IO_READ},
        {.addr=0x1961, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0086) {
    const struct CPU_State initial_cpu = {.pc=0x102b, .a=0xf9, .x=0xe3, .y=0xfc, .sp=0xa5, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x102b, .value=0x8d}, {.addr=0x102c, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x102d, .a=0xf9, .x=0xe3, .y=0x69, .sp=0xa5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x102b, .value=0x8d}, {.addr=0x102c, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x102b, .value=0x8d, .type=IO_READ},
        {.addr=0x102c, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0087) {
    const struct CPU_State initial_cpu = {.pc=0xbe3a, .a=0xf1, .x=0x04, .y=0xca, .sp=0x33, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xbe3a, .value=0x8d}, {.addr=0xbe3b, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xbe3c, .a=0xf1, .x=0x04, .y=0xd2, .sp=0x33, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xbe3a, .value=0x8d}, {.addr=0xbe3b, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xbe3a, .value=0x8d, .type=IO_READ},
        {.addr=0xbe3b, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0088) {
    const struct CPU_State initial_cpu = {.pc=0x0084, .a=0x63, .x=0xb2, .y=0x3e, .sp=0xf8, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x8d}, {.addr=0x0085, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0086, .a=0x63, .x=0xb2, .y=0x6d, .sp=0xf8, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x8d}, {.addr=0x0085, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0084, .value=0x8d, .type=IO_READ},
        {.addr=0x0085, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0089) {
    const struct CPU_State initial_cpu = {.pc=0x1e95, .a=0x4a, .x=0x40, .y=0x44, .sp=0x9e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x1e95, .value=0x8d}, {.addr=0x1e96, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x1e97, .a=0x4a, .x=0x40, .y=0xdb, .sp=0x9e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x1e95, .value=0x8d}, {.addr=0x1e96, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x1e95, .value=0x8d, .type=IO_READ},
        {.addr=0x1e96, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_008A) {
    const struct CPU_State initial_cpu = {.pc=0xef04, .a=0x76, .x=0xa8, .y=0xce, .sp=0x8a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xef04, .value=0x8d}, {.addr=0xef05, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xef06, .a=0x76, .x=0xa8, .y=0x53, .sp=0x8a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xef04, .value=0x8d}, {.addr=0xef05, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xef04, .value=0x8d, .type=IO_READ},
        {.addr=0xef05, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_008B) {
    const struct CPU_State initial_cpu = {.pc=0x7393, .a=0xfd, .x=0x59, .y=0x71, .sp=0xa5, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x7393, .value=0x8d}, {.addr=0x7394, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x7395, .a=0xfd, .x=0x59, .y=0xaa, .sp=0xa5, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x7393, .value=0x8d}, {.addr=0x7394, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x7393, .value=0x8d, .type=IO_READ},
        {.addr=0x7394, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_008C) {
    const struct CPU_State initial_cpu = {.pc=0x97c6, .a=0x1b, .x=0x2c, .y=0xd3, .sp=0xc3, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x97c6, .value=0x8d}, {.addr=0x97c7, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x97c8, .a=0x1b, .x=0x2c, .y=0x5f, .sp=0xc3, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x97c6, .value=0x8d}, {.addr=0x97c7, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x97c6, .value=0x8d, .type=IO_READ},
        {.addr=0x97c7, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_008D) {
    const struct CPU_State initial_cpu = {.pc=0xef3e, .a=0xa6, .x=0xda, .y=0xa0, .sp=0x15, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xef3e, .value=0x8d}, {.addr=0xef3f, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xef40, .a=0xa6, .x=0xda, .y=0xa9, .sp=0x15, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xef3e, .value=0x8d}, {.addr=0xef3f, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xef3e, .value=0x8d, .type=IO_READ},
        {.addr=0xef3f, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_008E) {
    const struct CPU_State initial_cpu = {.pc=0x1894, .a=0xda, .x=0xf0, .y=0xdc, .sp=0xeb, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x1894, .value=0x8d}, {.addr=0x1895, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x1896, .a=0xda, .x=0xf0, .y=0x02, .sp=0xeb, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x1894, .value=0x8d}, {.addr=0x1895, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x1894, .value=0x8d, .type=IO_READ},
        {.addr=0x1895, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_008F) {
    const struct CPU_State initial_cpu = {.pc=0xf13a, .a=0xab, .x=0xca, .y=0x24, .sp=0x76, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xf13a, .value=0x8d}, {.addr=0xf13b, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xf13c, .a=0xab, .x=0xca, .y=0xcb, .sp=0x76, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf13a, .value=0x8d}, {.addr=0xf13b, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xf13a, .value=0x8d, .type=IO_READ},
        {.addr=0xf13b, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0090) {
    const struct CPU_State initial_cpu = {.pc=0x917a, .a=0xc7, .x=0x2f, .y=0xa8, .sp=0xc0, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x917a, .value=0x8d}, {.addr=0x917b, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x917c, .a=0xc7, .x=0x2f, .y=0xfa, .sp=0xc0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x917a, .value=0x8d}, {.addr=0x917b, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x917a, .value=0x8d, .type=IO_READ},
        {.addr=0x917b, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0091) {
    const struct CPU_State initial_cpu = {.pc=0xff00, .a=0xe0, .x=0x20, .y=0xa6, .sp=0x50, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xff00, .value=0x8d}, {.addr=0xff01, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xff02, .a=0xe0, .x=0x20, .y=0xc0, .sp=0x50, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xff00, .value=0x8d}, {.addr=0xff01, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xff00, .value=0x8d, .type=IO_READ},
        {.addr=0xff01, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0092) {
    const struct CPU_State initial_cpu = {.pc=0x65a1, .a=0xbe, .x=0xcc, .y=0x44, .sp=0x3c, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x65a1, .value=0x8d}, {.addr=0x65a2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x65a3, .a=0xbe, .x=0xcc, .y=0xae, .sp=0x3c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x65a1, .value=0x8d}, {.addr=0x65a2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x65a1, .value=0x8d, .type=IO_READ},
        {.addr=0x65a2, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0093) {
    const struct CPU_State initial_cpu = {.pc=0x1868, .a=0x9a, .x=0x91, .y=0xc0, .sp=0x7f, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1868, .value=0x8d}, {.addr=0x1869, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x186a, .a=0x9a, .x=0x91, .y=0x65, .sp=0x7f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x1868, .value=0x8d}, {.addr=0x1869, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x1868, .value=0x8d, .type=IO_READ},
        {.addr=0x1869, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0094) {
    const struct CPU_State initial_cpu = {.pc=0x435e, .a=0xc5, .x=0x6c, .y=0xf0, .sp=0xa3, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x435e, .value=0x8d}, {.addr=0x435f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4360, .a=0xc5, .x=0x6c, .y=0xee, .sp=0xa3, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x435e, .value=0x8d}, {.addr=0x435f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x435e, .value=0x8d, .type=IO_READ},
        {.addr=0x435f, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0095) {
    const struct CPU_State initial_cpu = {.pc=0x481e, .a=0x7f, .x=0xec, .y=0x86, .sp=0xd9, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x481e, .value=0x8d}, {.addr=0x481f, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x4820, .a=0x7f, .x=0xec, .y=0x5b, .sp=0xd9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x481e, .value=0x8d}, {.addr=0x481f, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x481e, .value=0x8d, .type=IO_READ},
        {.addr=0x481f, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0096) {
    const struct CPU_State initial_cpu = {.pc=0x2a86, .a=0x17, .x=0xef, .y=0xa5, .sp=0x70, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x2a86, .value=0x8d}, {.addr=0x2a87, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x2a88, .a=0x17, .x=0xef, .y=0x2f, .sp=0x70, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2a86, .value=0x8d}, {.addr=0x2a87, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x2a86, .value=0x8d, .type=IO_READ},
        {.addr=0x2a87, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0097) {
    const struct CPU_State initial_cpu = {.pc=0x5109, .a=0xef, .x=0x0a, .y=0xe9, .sp=0xc7, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x5109, .value=0x8d}, {.addr=0x510a, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x510b, .a=0xef, .x=0x0a, .y=0xc8, .sp=0xc7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x5109, .value=0x8d}, {.addr=0x510a, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x5109, .value=0x8d, .type=IO_READ},
        {.addr=0x510a, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0098) {
    const struct CPU_State initial_cpu = {.pc=0x8248, .a=0xb4, .x=0x39, .y=0xe7, .sp=0xb5, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x8248, .value=0x8d}, {.addr=0x8249, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x824a, .a=0xb4, .x=0x39, .y=0xe5, .sp=0xb5, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8248, .value=0x8d}, {.addr=0x8249, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x8248, .value=0x8d, .type=IO_READ},
        {.addr=0x8249, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0099) {
    const struct CPU_State initial_cpu = {.pc=0x75f7, .a=0x4d, .x=0xac, .y=0xf8, .sp=0xc5, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x75f7, .value=0x8d}, {.addr=0x75f8, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x75f9, .a=0x4d, .x=0xac, .y=0xff, .sp=0xc5, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x75f7, .value=0x8d}, {.addr=0x75f8, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x75f7, .value=0x8d, .type=IO_READ},
        {.addr=0x75f8, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_009A) {
    const struct CPU_State initial_cpu = {.pc=0x2352, .a=0x00, .x=0xb2, .y=0xf5, .sp=0x74, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x2352, .value=0x8d}, {.addr=0x2353, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x2354, .a=0x00, .x=0xb2, .y=0x89, .sp=0x74, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2352, .value=0x8d}, {.addr=0x2353, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x2352, .value=0x8d, .type=IO_READ},
        {.addr=0x2353, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_009B) {
    const struct CPU_State initial_cpu = {.pc=0xb1cd, .a=0x27, .x=0x89, .y=0xd8, .sp=0x38, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xb1cd, .value=0x8d}, {.addr=0xb1ce, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xb1cf, .a=0x27, .x=0x89, .y=0x22, .sp=0x38, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb1cd, .value=0x8d}, {.addr=0xb1ce, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xb1cd, .value=0x8d, .type=IO_READ},
        {.addr=0xb1ce, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_009C) {
    const struct CPU_State initial_cpu = {.pc=0x5ced, .a=0x91, .x=0x1d, .y=0xc0, .sp=0x17, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x5ced, .value=0x8d}, {.addr=0x5cee, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x5cef, .a=0x91, .x=0x1d, .y=0xd7, .sp=0x17, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x5ced, .value=0x8d}, {.addr=0x5cee, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x5ced, .value=0x8d, .type=IO_READ},
        {.addr=0x5cee, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_009D) {
    const struct CPU_State initial_cpu = {.pc=0x15be, .a=0xc5, .x=0x3a, .y=0xe8, .sp=0xe2, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x15be, .value=0x8d}, {.addr=0x15bf, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x15c0, .a=0xc5, .x=0x3a, .y=0x4c, .sp=0xe2, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x15be, .value=0x8d}, {.addr=0x15bf, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x15be, .value=0x8d, .type=IO_READ},
        {.addr=0x15bf, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_009E) {
    const struct CPU_State initial_cpu = {.pc=0x4573, .a=0x81, .x=0x44, .y=0x30, .sp=0x77, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x4573, .value=0x8d}, {.addr=0x4574, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x4575, .a=0x81, .x=0x44, .y=0x7f, .sp=0x77, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4573, .value=0x8d}, {.addr=0x4574, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x4573, .value=0x8d, .type=IO_READ},
        {.addr=0x4574, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_009F) {
    const struct CPU_State initial_cpu = {.pc=0x05f4, .a=0x88, .x=0xb3, .y=0xec, .sp=0xf8, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x05f4, .value=0x8d}, {.addr=0x05f5, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x05f6, .a=0x88, .x=0xb3, .y=0x31, .sp=0xf8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x05f4, .value=0x8d}, {.addr=0x05f5, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x05f4, .value=0x8d, .type=IO_READ},
        {.addr=0x05f5, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xe56a, .a=0xda, .x=0x1d, .y=0xd7, .sp=0x9a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xe56a, .value=0x8d}, {.addr=0xe56b, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xe56c, .a=0xda, .x=0x1d, .y=0x8d, .sp=0x9a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe56a, .value=0x8d}, {.addr=0xe56b, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xe56a, .value=0x8d, .type=IO_READ},
        {.addr=0xe56b, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xb0bd, .a=0x26, .x=0xfe, .y=0xc4, .sp=0xf9, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xb0bd, .value=0x8d}, {.addr=0xb0be, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xb0bf, .a=0x26, .x=0xfe, .y=0xf2, .sp=0xf9, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb0bd, .value=0x8d}, {.addr=0xb0be, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xb0bd, .value=0x8d, .type=IO_READ},
        {.addr=0xb0be, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x6f6f, .a=0xf5, .x=0x6f, .y=0x96, .sp=0x31, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6f6f, .value=0x8d}, {.addr=0x6f70, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x6f71, .a=0xf5, .x=0x6f, .y=0x4b, .sp=0x31, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6f6f, .value=0x8d}, {.addr=0x6f70, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x6f6f, .value=0x8d, .type=IO_READ},
        {.addr=0x6f70, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x232c, .a=0x9a, .x=0x64, .y=0x43, .sp=0xc9, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x232c, .value=0x8d}, {.addr=0x232d, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x232e, .a=0x9a, .x=0x64, .y=0x4b, .sp=0xc9, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x232c, .value=0x8d}, {.addr=0x232d, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x232c, .value=0x8d, .type=IO_READ},
        {.addr=0x232d, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xf329, .a=0x91, .x=0x9a, .y=0x84, .sp=0xf4, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf329, .value=0x8d}, {.addr=0xf32a, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xf32b, .a=0x91, .x=0x9a, .y=0x49, .sp=0xf4, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf329, .value=0x8d}, {.addr=0xf32a, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xf329, .value=0x8d, .type=IO_READ},
        {.addr=0xf32a, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xaaf9, .a=0xb8, .x=0x89, .y=0x03, .sp=0xff, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xaaf9, .value=0x8d}, {.addr=0xaafa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaafb, .a=0xb8, .x=0x89, .y=0x26, .sp=0xff, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xaaf9, .value=0x8d}, {.addr=0xaafa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaaf9, .value=0x8d, .type=IO_READ},
        {.addr=0xaafa, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xc35c, .a=0x3f, .x=0x91, .y=0x7a, .sp=0xa5, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xc35c, .value=0x8d}, {.addr=0xc35d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc35e, .a=0x3f, .x=0x91, .y=0x80, .sp=0xa5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xc35c, .value=0x8d}, {.addr=0xc35d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc35c, .value=0x8d, .type=IO_READ},
        {.addr=0xc35d, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x0858, .a=0x07, .x=0x58, .y=0xae, .sp=0x5d, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0858, .value=0x8d}, {.addr=0x0859, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x085a, .a=0x07, .x=0x58, .y=0xf3, .sp=0x5d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0858, .value=0x8d}, {.addr=0x0859, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x0858, .value=0x8d, .type=IO_READ},
        {.addr=0x0859, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xd5c0, .a=0x93, .x=0x28, .y=0xc9, .sp=0xc8, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd5c0, .value=0x8d}, {.addr=0xd5c1, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xd5c2, .a=0x93, .x=0x28, .y=0x69, .sp=0xc8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd5c0, .value=0x8d}, {.addr=0xd5c1, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xd5c0, .value=0x8d, .type=IO_READ},
        {.addr=0xd5c1, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x996b, .a=0x50, .x=0x10, .y=0xae, .sp=0xb6, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x996b, .value=0x8d}, {.addr=0x996c, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x996d, .a=0x50, .x=0x10, .y=0xc8, .sp=0xb6, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x996b, .value=0x8d}, {.addr=0x996c, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x996b, .value=0x8d, .type=IO_READ},
        {.addr=0x996c, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x3155, .a=0x69, .x=0x42, .y=0x3b, .sp=0x8e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x3155, .value=0x8d}, {.addr=0x3156, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x3157, .a=0x69, .x=0x42, .y=0x58, .sp=0x8e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3155, .value=0x8d}, {.addr=0x3156, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x3155, .value=0x8d, .type=IO_READ},
        {.addr=0x3156, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x918a, .a=0xcc, .x=0x86, .y=0x47, .sp=0xd0, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x918a, .value=0x8d}, {.addr=0x918b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x918c, .a=0xcc, .x=0x86, .y=0xae, .sp=0xd0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x918a, .value=0x8d}, {.addr=0x918b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x918a, .value=0x8d, .type=IO_READ},
        {.addr=0x918b, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x31be, .a=0xa2, .x=0xa9, .y=0xfd, .sp=0x44, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x31be, .value=0x8d}, {.addr=0x31bf, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x31c0, .a=0xa2, .x=0xa9, .y=0x28, .sp=0x44, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x31be, .value=0x8d}, {.addr=0x31bf, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x31be, .value=0x8d, .type=IO_READ},
        {.addr=0x31bf, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xc8d8, .a=0xa7, .x=0x86, .y=0x9d, .sp=0x1f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xc8d8, .value=0x8d}, {.addr=0xc8d9, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xc8da, .a=0xa7, .x=0x86, .y=0xbb, .sp=0x1f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc8d8, .value=0x8d}, {.addr=0xc8d9, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xc8d8, .value=0x8d, .type=IO_READ},
        {.addr=0xc8d9, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x631d, .a=0x57, .x=0xcd, .y=0x35, .sp=0x86, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x631d, .value=0x8d}, {.addr=0x631e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x631f, .a=0x57, .x=0xcd, .y=0xed, .sp=0x86, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x631d, .value=0x8d}, {.addr=0x631e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x631d, .value=0x8d, .type=IO_READ},
        {.addr=0x631e, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xa4f6, .a=0x7b, .x=0x91, .y=0x21, .sp=0x84, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xa4f6, .value=0x8d}, {.addr=0xa4f7, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xa4f8, .a=0x7b, .x=0x91, .y=0x45, .sp=0x84, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xa4f6, .value=0x8d}, {.addr=0xa4f7, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xa4f6, .value=0x8d, .type=IO_READ},
        {.addr=0xa4f7, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x3091, .a=0xbe, .x=0x7d, .y=0x86, .sp=0x5d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3091, .value=0x8d}, {.addr=0x3092, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x3093, .a=0xbe, .x=0x7d, .y=0x54, .sp=0x5d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3091, .value=0x8d}, {.addr=0x3092, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x3091, .value=0x8d, .type=IO_READ},
        {.addr=0x3092, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x514c, .a=0xca, .x=0xff, .y=0x31, .sp=0xaa, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x514c, .value=0x8d}, {.addr=0x514d, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x514e, .a=0xca, .x=0xff, .y=0xd0, .sp=0xaa, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x514c, .value=0x8d}, {.addr=0x514d, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x514c, .value=0x8d, .type=IO_READ},
        {.addr=0x514d, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x6e31, .a=0xda, .x=0x0f, .y=0xd5, .sp=0xb1, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x6e31, .value=0x8d}, {.addr=0x6e32, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x6e33, .a=0xda, .x=0x0f, .y=0x76, .sp=0xb1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6e31, .value=0x8d}, {.addr=0x6e32, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x6e31, .value=0x8d, .type=IO_READ},
        {.addr=0x6e32, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xa11a, .a=0xe3, .x=0x25, .y=0xa4, .sp=0xeb, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xa11a, .value=0x8d}, {.addr=0xa11b, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xa11c, .a=0xe3, .x=0x25, .y=0x2f, .sp=0xeb, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa11a, .value=0x8d}, {.addr=0xa11b, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xa11a, .value=0x8d, .type=IO_READ},
        {.addr=0xa11b, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xc3af, .a=0x27, .x=0x07, .y=0x60, .sp=0xdd, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xc3af, .value=0x8d}, {.addr=0xc3b0, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xc3b1, .a=0x27, .x=0x07, .y=0x5b, .sp=0xdd, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xc3af, .value=0x8d}, {.addr=0xc3b0, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xc3af, .value=0x8d, .type=IO_READ},
        {.addr=0xc3b0, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x3cbe, .a=0x45, .x=0x52, .y=0x83, .sp=0x60, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x3cbe, .value=0x8d}, {.addr=0x3cbf, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3cc0, .a=0x45, .x=0x52, .y=0x2d, .sp=0x60, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3cbe, .value=0x8d}, {.addr=0x3cbf, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3cbe, .value=0x8d, .type=IO_READ},
        {.addr=0x3cbf, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xb976, .a=0xf6, .x=0x47, .y=0xb5, .sp=0xdd, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xb976, .value=0x8d}, {.addr=0xb977, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xb978, .a=0xf6, .x=0x47, .y=0x8c, .sp=0xdd, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xb976, .value=0x8d}, {.addr=0xb977, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xb976, .value=0x8d, .type=IO_READ},
        {.addr=0xb977, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xe704, .a=0x8c, .x=0x1c, .y=0x51, .sp=0x52, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xe704, .value=0x8d}, {.addr=0xe705, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xe706, .a=0x8c, .x=0x1c, .y=0xde, .sp=0x52, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe704, .value=0x8d}, {.addr=0xe705, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xe704, .value=0x8d, .type=IO_READ},
        {.addr=0xe705, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xace8, .a=0x6e, .x=0x4c, .y=0x63, .sp=0x29, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xace8, .value=0x8d}, {.addr=0xace9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xacea, .a=0x6e, .x=0x4c, .y=0x7c, .sp=0x29, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xace8, .value=0x8d}, {.addr=0xace9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xace8, .value=0x8d, .type=IO_READ},
        {.addr=0xace9, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xdacc, .a=0xe1, .x=0xd2, .y=0x3e, .sp=0x66, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xdacc, .value=0x8d}, {.addr=0xdacd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdace, .a=0xe1, .x=0xd2, .y=0x3c, .sp=0x66, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xdacc, .value=0x8d}, {.addr=0xdacd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdacc, .value=0x8d, .type=IO_READ},
        {.addr=0xdacd, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xa07a, .a=0x52, .x=0xd4, .y=0xa9, .sp=0x78, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa07a, .value=0x8d}, {.addr=0xa07b, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xa07c, .a=0x52, .x=0xd4, .y=0x52, .sp=0x78, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa07a, .value=0x8d}, {.addr=0xa07b, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xa07a, .value=0x8d, .type=IO_READ},
        {.addr=0xa07b, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x5ca3, .a=0x2e, .x=0xa8, .y=0xae, .sp=0x62, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x5ca3, .value=0x8d}, {.addr=0x5ca4, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x5ca5, .a=0x2e, .x=0xa8, .y=0x8a, .sp=0x62, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5ca3, .value=0x8d}, {.addr=0x5ca4, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x5ca3, .value=0x8d, .type=IO_READ},
        {.addr=0x5ca4, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x6062, .a=0x29, .x=0x1a, .y=0x8a, .sp=0xef, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x6062, .value=0x8d}, {.addr=0x6063, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x6064, .a=0x29, .x=0x1a, .y=0x11, .sp=0xef, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6062, .value=0x8d}, {.addr=0x6063, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x6062, .value=0x8d, .type=IO_READ},
        {.addr=0x6063, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xef8e, .a=0x5e, .x=0x97, .y=0x06, .sp=0x09, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xef8e, .value=0x8d}, {.addr=0xef8f, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xef90, .a=0x5e, .x=0x97, .y=0x44, .sp=0x09, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xef8e, .value=0x8d}, {.addr=0xef8f, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xef8e, .value=0x8d, .type=IO_READ},
        {.addr=0xef8f, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x1ee5, .a=0xe9, .x=0x00, .y=0xe0, .sp=0x4d, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x1ee5, .value=0x8d}, {.addr=0x1ee6, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x1ee7, .a=0xe9, .x=0x00, .y=0x6f, .sp=0x4d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x1ee5, .value=0x8d}, {.addr=0x1ee6, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x1ee5, .value=0x8d, .type=IO_READ},
        {.addr=0x1ee6, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xcc7a, .a=0xca, .x=0xb3, .y=0xf2, .sp=0x92, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xcc7a, .value=0x8d}, {.addr=0xcc7b, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xcc7c, .a=0xca, .x=0xb3, .y=0x45, .sp=0x92, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xcc7a, .value=0x8d}, {.addr=0xcc7b, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xcc7a, .value=0x8d, .type=IO_READ},
        {.addr=0xcc7b, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x5f9f, .a=0x99, .x=0xb4, .y=0xf8, .sp=0x65, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x5f9f, .value=0x8d}, {.addr=0x5fa0, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x5fa1, .a=0x99, .x=0xb4, .y=0x33, .sp=0x65, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x5f9f, .value=0x8d}, {.addr=0x5fa0, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x5f9f, .value=0x8d, .type=IO_READ},
        {.addr=0x5fa0, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x482e, .a=0x37, .x=0x43, .y=0x94, .sp=0x9a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x482e, .value=0x8d}, {.addr=0x482f, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4830, .a=0x37, .x=0x43, .y=0x3c, .sp=0x9a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x482e, .value=0x8d}, {.addr=0x482f, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x482e, .value=0x8d, .type=IO_READ},
        {.addr=0x482f, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xaaac, .a=0x54, .x=0x56, .y=0x71, .sp=0xbb, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xaaac, .value=0x8d}, {.addr=0xaaad, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xaaae, .a=0x54, .x=0x56, .y=0x1d, .sp=0xbb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xaaac, .value=0x8d}, {.addr=0xaaad, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xaaac, .value=0x8d, .type=IO_READ},
        {.addr=0xaaad, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x5cd3, .a=0xc1, .x=0x4c, .y=0x3e, .sp=0xaa, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x5cd3, .value=0x8d}, {.addr=0x5cd4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5cd5, .a=0xc1, .x=0x4c, .y=0xbc, .sp=0xaa, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x5cd3, .value=0x8d}, {.addr=0x5cd4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5cd3, .value=0x8d, .type=IO_READ},
        {.addr=0x5cd4, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x7524, .a=0x2d, .x=0xd7, .y=0x50, .sp=0x8a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x7524, .value=0x8d}, {.addr=0x7525, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x7526, .a=0x2d, .x=0xd7, .y=0x62, .sp=0x8a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x7524, .value=0x8d}, {.addr=0x7525, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x7524, .value=0x8d, .type=IO_READ},
        {.addr=0x7525, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x000d, .a=0x69, .x=0x28, .y=0x4c, .sp=0x00, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x8d}, {.addr=0x000e, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x000f, .a=0x69, .x=0x28, .y=0x57, .sp=0x00, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x8d}, {.addr=0x000e, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x000d, .value=0x8d, .type=IO_READ},
        {.addr=0x000e, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x9be4, .a=0xc7, .x=0xf5, .y=0xf2, .sp=0x51, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x9be4, .value=0x8d}, {.addr=0x9be5, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x9be6, .a=0xc7, .x=0xf5, .y=0x4c, .sp=0x51, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x9be4, .value=0x8d}, {.addr=0x9be5, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x9be4, .value=0x8d, .type=IO_READ},
        {.addr=0x9be5, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x7388, .a=0x52, .x=0x11, .y=0xa9, .sp=0x53, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7388, .value=0x8d}, {.addr=0x7389, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x738a, .a=0x52, .x=0x11, .y=0x7d, .sp=0x53, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x7388, .value=0x8d}, {.addr=0x7389, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7388, .value=0x8d, .type=IO_READ},
        {.addr=0x7389, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xc776, .a=0x9f, .x=0xff, .y=0x18, .sp=0xf5, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xc776, .value=0x8d}, {.addr=0xc777, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc778, .a=0x9f, .x=0xff, .y=0xc0, .sp=0xf5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc776, .value=0x8d}, {.addr=0xc777, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc776, .value=0x8d, .type=IO_READ},
        {.addr=0xc777, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xa26e, .a=0x0c, .x=0x85, .y=0xfe, .sp=0xb6, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xa26e, .value=0x8d}, {.addr=0xa26f, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xa270, .a=0x0c, .x=0x85, .y=0xcf, .sp=0xb6, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xa26e, .value=0x8d}, {.addr=0xa26f, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xa26e, .value=0x8d, .type=IO_READ},
        {.addr=0xa26f, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xce93, .a=0x59, .x=0x20, .y=0xdb, .sp=0x9a, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xce93, .value=0x8d}, {.addr=0xce94, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xce95, .a=0x59, .x=0x20, .y=0x2f, .sp=0x9a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xce93, .value=0x8d}, {.addr=0xce94, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xce93, .value=0x8d, .type=IO_READ},
        {.addr=0xce94, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x1e49, .a=0x57, .x=0xa5, .y=0x36, .sp=0xd9, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x1e49, .value=0x8d}, {.addr=0x1e4a, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x1e4b, .a=0x57, .x=0xa5, .y=0x2b, .sp=0xd9, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1e49, .value=0x8d}, {.addr=0x1e4a, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x1e49, .value=0x8d, .type=IO_READ},
        {.addr=0x1e4a, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x8674, .a=0x67, .x=0xe3, .y=0xac, .sp=0x24, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8674, .value=0x8d}, {.addr=0x8675, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x8676, .a=0x67, .x=0xe3, .y=0xb8, .sp=0x24, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8674, .value=0x8d}, {.addr=0x8675, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x8674, .value=0x8d, .type=IO_READ},
        {.addr=0x8675, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xf439, .a=0x12, .x=0x97, .y=0x24, .sp=0xb3, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xf439, .value=0x8d}, {.addr=0xf43a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf43b, .a=0x12, .x=0x97, .y=0xdc, .sp=0xb3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf439, .value=0x8d}, {.addr=0xf43a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf439, .value=0x8d, .type=IO_READ},
        {.addr=0xf43a, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x0ff4, .a=0x97, .x=0xec, .y=0xcc, .sp=0x37, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0ff4, .value=0x8d}, {.addr=0x0ff5, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x0ff6, .a=0x97, .x=0xec, .y=0x03, .sp=0x37, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0ff4, .value=0x8d}, {.addr=0x0ff5, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x0ff4, .value=0x8d, .type=IO_READ},
        {.addr=0x0ff5, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x9291, .a=0xe8, .x=0x43, .y=0x13, .sp=0x16, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x9291, .value=0x8d}, {.addr=0x9292, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9293, .a=0xe8, .x=0x43, .y=0x3d, .sp=0x16, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9291, .value=0x8d}, {.addr=0x9292, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9291, .value=0x8d, .type=IO_READ},
        {.addr=0x9292, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x3cda, .a=0xcf, .x=0x1d, .y=0xf9, .sp=0x6e, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x3cda, .value=0x8d}, {.addr=0x3cdb, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x3cdc, .a=0xcf, .x=0x1d, .y=0x4e, .sp=0x6e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x3cda, .value=0x8d}, {.addr=0x3cdb, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x3cda, .value=0x8d, .type=IO_READ},
        {.addr=0x3cdb, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xad5e, .a=0x23, .x=0xdf, .y=0x88, .sp=0xd1, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xad5e, .value=0x8d}, {.addr=0xad5f, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xad60, .a=0x23, .x=0xdf, .y=0x2e, .sp=0xd1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xad5e, .value=0x8d}, {.addr=0xad5f, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xad5e, .value=0x8d, .type=IO_READ},
        {.addr=0xad5f, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x2ff8, .a=0xc6, .x=0x05, .y=0xdf, .sp=0xf1, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x2ff8, .value=0x8d}, {.addr=0x2ff9, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x2ffa, .a=0xc6, .x=0x05, .y=0x1e, .sp=0xf1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2ff8, .value=0x8d}, {.addr=0x2ff9, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x2ff8, .value=0x8d, .type=IO_READ},
        {.addr=0x2ff9, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xa924, .a=0x87, .x=0xee, .y=0x7c, .sp=0x75, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xa924, .value=0x8d}, {.addr=0xa925, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xa926, .a=0x87, .x=0xee, .y=0xdb, .sp=0x75, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa924, .value=0x8d}, {.addr=0xa925, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xa924, .value=0x8d, .type=IO_READ},
        {.addr=0xa925, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xdd99, .a=0x64, .x=0x56, .y=0xd2, .sp=0xa4, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xdd99, .value=0x8d}, {.addr=0xdd9a, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xdd9b, .a=0x64, .x=0x56, .y=0x89, .sp=0xa4, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdd99, .value=0x8d}, {.addr=0xdd9a, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xdd99, .value=0x8d, .type=IO_READ},
        {.addr=0xdd9a, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xb88b, .a=0x30, .x=0x19, .y=0x4e, .sp=0xa2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xb88b, .value=0x8d}, {.addr=0xb88c, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xb88d, .a=0x30, .x=0x19, .y=0xfb, .sp=0xa2, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb88b, .value=0x8d}, {.addr=0xb88c, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xb88b, .value=0x8d, .type=IO_READ},
        {.addr=0xb88c, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x0f58, .a=0xee, .x=0xef, .y=0x93, .sp=0x16, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0f58, .value=0x8d}, {.addr=0x0f59, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x0f5a, .a=0xee, .x=0xef, .y=0x21, .sp=0x16, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0f58, .value=0x8d}, {.addr=0x0f59, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x0f58, .value=0x8d, .type=IO_READ},
        {.addr=0x0f59, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xbaf4, .a=0x97, .x=0x87, .y=0x31, .sp=0x16, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xbaf4, .value=0x8d}, {.addr=0xbaf5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbaf6, .a=0x97, .x=0x87, .y=0x00, .sp=0x16, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xbaf4, .value=0x8d}, {.addr=0xbaf5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbaf4, .value=0x8d, .type=IO_READ},
        {.addr=0xbaf5, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x1cd7, .a=0xe2, .x=0x30, .y=0x48, .sp=0x33, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x1cd7, .value=0x8d}, {.addr=0x1cd8, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x1cd9, .a=0xe2, .x=0x30, .y=0x77, .sp=0x33, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1cd7, .value=0x8d}, {.addr=0x1cd8, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x1cd7, .value=0x8d, .type=IO_READ},
        {.addr=0x1cd8, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xe2ab, .a=0xd4, .x=0x73, .y=0xca, .sp=0x65, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ab, .value=0x8d}, {.addr=0xe2ac, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe2ad, .a=0xd4, .x=0x73, .y=0x40, .sp=0x65, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xe2ab, .value=0x8d}, {.addr=0xe2ac, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe2ab, .value=0x8d, .type=IO_READ},
        {.addr=0xe2ac, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x6b24, .a=0x16, .x=0x2f, .y=0x36, .sp=0xee, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6b24, .value=0x8d}, {.addr=0x6b25, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x6b26, .a=0x16, .x=0x2f, .y=0x04, .sp=0xee, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6b24, .value=0x8d}, {.addr=0x6b25, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x6b24, .value=0x8d, .type=IO_READ},
        {.addr=0x6b25, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x1beb, .a=0x86, .x=0x4b, .y=0x0b, .sp=0xc2, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x1beb, .value=0x8d}, {.addr=0x1bec, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x1bed, .a=0x86, .x=0x4b, .y=0x6c, .sp=0xc2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x1beb, .value=0x8d}, {.addr=0x1bec, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x1beb, .value=0x8d, .type=IO_READ},
        {.addr=0x1bec, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xc26f, .a=0x53, .x=0xba, .y=0x14, .sp=0x2c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xc26f, .value=0x8d}, {.addr=0xc270, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xc271, .a=0x53, .x=0xba, .y=0x59, .sp=0x2c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc26f, .value=0x8d}, {.addr=0xc270, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xc26f, .value=0x8d, .type=IO_READ},
        {.addr=0xc270, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x46d9, .a=0x59, .x=0xd5, .y=0xb0, .sp=0x40, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x46d9, .value=0x8d}, {.addr=0x46da, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x46db, .a=0x59, .x=0xd5, .y=0xec, .sp=0x40, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x46d9, .value=0x8d}, {.addr=0x46da, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x46d9, .value=0x8d, .type=IO_READ},
        {.addr=0x46da, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x2865, .a=0x7c, .x=0x18, .y=0xf5, .sp=0x06, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x2865, .value=0x8d}, {.addr=0x2866, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x2867, .a=0x7c, .x=0x18, .y=0xb1, .sp=0x06, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2865, .value=0x8d}, {.addr=0x2866, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x2865, .value=0x8d, .type=IO_READ},
        {.addr=0x2866, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xb711, .a=0x29, .x=0xdb, .y=0x66, .sp=0xf9, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xb711, .value=0x8d}, {.addr=0xb712, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xb713, .a=0x29, .x=0xdb, .y=0x28, .sp=0xf9, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xb711, .value=0x8d}, {.addr=0xb712, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xb711, .value=0x8d, .type=IO_READ},
        {.addr=0xb712, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xd778, .a=0x5b, .x=0xc1, .y=0xc8, .sp=0x27, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xd778, .value=0x8d}, {.addr=0xd779, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xd77a, .a=0x5b, .x=0xc1, .y=0x18, .sp=0x27, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd778, .value=0x8d}, {.addr=0xd779, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xd778, .value=0x8d, .type=IO_READ},
        {.addr=0xd779, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x69f4, .a=0xd2, .x=0x13, .y=0x9d, .sp=0x25, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x69f4, .value=0x8d}, {.addr=0x69f5, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x69f6, .a=0xd2, .x=0x13, .y=0x09, .sp=0x25, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x69f4, .value=0x8d}, {.addr=0x69f5, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x69f4, .value=0x8d, .type=IO_READ},
        {.addr=0x69f5, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xc910, .a=0xe1, .x=0x81, .y=0x84, .sp=0xe4, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xc910, .value=0x8d}, {.addr=0xc911, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xc912, .a=0xe1, .x=0x81, .y=0x70, .sp=0xe4, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc910, .value=0x8d}, {.addr=0xc911, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xc910, .value=0x8d, .type=IO_READ},
        {.addr=0xc911, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x0630, .a=0xb1, .x=0x82, .y=0x19, .sp=0x04, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0630, .value=0x8d}, {.addr=0x0631, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x0632, .a=0xb1, .x=0x82, .y=0x30, .sp=0x04, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0630, .value=0x8d}, {.addr=0x0631, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x0630, .value=0x8d, .type=IO_READ},
        {.addr=0x0631, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x8a86, .a=0x64, .x=0xb8, .y=0x6c, .sp=0xa1, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8a86, .value=0x8d}, {.addr=0x8a87, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8a88, .a=0x64, .x=0xb8, .y=0xa6, .sp=0xa1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8a86, .value=0x8d}, {.addr=0x8a87, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8a86, .value=0x8d, .type=IO_READ},
        {.addr=0x8a87, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x6117, .a=0xc5, .x=0xba, .y=0x8c, .sp=0x75, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x6117, .value=0x8d}, {.addr=0x6118, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x6119, .a=0xc5, .x=0xba, .y=0x79, .sp=0x75, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6117, .value=0x8d}, {.addr=0x6118, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x6117, .value=0x8d, .type=IO_READ},
        {.addr=0x6118, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x06bc, .a=0xda, .x=0x2f, .y=0x77, .sp=0x23, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x06bc, .value=0x8d}, {.addr=0x06bd, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x06be, .a=0xda, .x=0x2f, .y=0xa9, .sp=0x23, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x06bc, .value=0x8d}, {.addr=0x06bd, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x06bc, .value=0x8d, .type=IO_READ},
        {.addr=0x06bd, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x6672, .a=0x4d, .x=0x70, .y=0x35, .sp=0xcb, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6672, .value=0x8d}, {.addr=0x6673, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x6674, .a=0x4d, .x=0x70, .y=0xf4, .sp=0xcb, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6672, .value=0x8d}, {.addr=0x6673, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x6672, .value=0x8d, .type=IO_READ},
        {.addr=0x6673, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xc96a, .a=0xf0, .x=0x18, .y=0x9c, .sp=0x39, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xc96a, .value=0x8d}, {.addr=0xc96b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc96c, .a=0xf0, .x=0x18, .y=0x9c, .sp=0x39, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xc96a, .value=0x8d}, {.addr=0xc96b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc96a, .value=0x8d, .type=IO_READ},
        {.addr=0xc96b, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x8383, .a=0x9a, .x=0x04, .y=0x77, .sp=0x58, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x8383, .value=0x8d}, {.addr=0x8384, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x8385, .a=0x9a, .x=0x04, .y=0x99, .sp=0x58, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8383, .value=0x8d}, {.addr=0x8384, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x8383, .value=0x8d, .type=IO_READ},
        {.addr=0x8384, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x84fc, .a=0x52, .x=0xe7, .y=0x46, .sp=0xde, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x84fc, .value=0x8d}, {.addr=0x84fd, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x84fe, .a=0x52, .x=0xe7, .y=0xff, .sp=0xde, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x84fc, .value=0x8d}, {.addr=0x84fd, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x84fc, .value=0x8d, .type=IO_READ},
        {.addr=0x84fd, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xf004, .a=0xdc, .x=0x3f, .y=0x34, .sp=0xff, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xf004, .value=0x8d}, {.addr=0xf005, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xf006, .a=0xdc, .x=0x3f, .y=0xf5, .sp=0xff, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xf004, .value=0x8d}, {.addr=0xf005, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xf004, .value=0x8d, .type=IO_READ},
        {.addr=0xf005, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xb364, .a=0x4c, .x=0x19, .y=0xab, .sp=0x89, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xb364, .value=0x8d}, {.addr=0xb365, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xb366, .a=0x4c, .x=0x19, .y=0xda, .sp=0x89, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb364, .value=0x8d}, {.addr=0xb365, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xb364, .value=0x8d, .type=IO_READ},
        {.addr=0xb365, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xdf0b, .a=0xa1, .x=0x30, .y=0x1c, .sp=0xf9, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xdf0b, .value=0x8d}, {.addr=0xdf0c, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xdf0d, .a=0xa1, .x=0x30, .y=0x34, .sp=0xf9, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xdf0b, .value=0x8d}, {.addr=0xdf0c, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xdf0b, .value=0x8d, .type=IO_READ},
        {.addr=0xdf0c, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xfcb6, .a=0xb9, .x=0x65, .y=0xee, .sp=0x51, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xfcb6, .value=0x8d}, {.addr=0xfcb7, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xfcb8, .a=0xb9, .x=0x65, .y=0x36, .sp=0x51, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xfcb6, .value=0x8d}, {.addr=0xfcb7, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xfcb6, .value=0x8d, .type=IO_READ},
        {.addr=0xfcb7, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x8eea, .a=0x81, .x=0x70, .y=0x66, .sp=0xc4, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x8eea, .value=0x8d}, {.addr=0x8eeb, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x8eec, .a=0x81, .x=0x70, .y=0x23, .sp=0xc4, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x8eea, .value=0x8d}, {.addr=0x8eeb, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x8eea, .value=0x8d, .type=IO_READ},
        {.addr=0x8eeb, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x8f06, .a=0x80, .x=0x5b, .y=0xc5, .sp=0x2a, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x8f06, .value=0x8d}, {.addr=0x8f07, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x8f08, .a=0x80, .x=0x5b, .y=0x28, .sp=0x2a, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x8f06, .value=0x8d}, {.addr=0x8f07, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x8f06, .value=0x8d, .type=IO_READ},
        {.addr=0x8f07, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x57de, .a=0xe0, .x=0x6e, .y=0x60, .sp=0xe1, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x57de, .value=0x8d}, {.addr=0x57df, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x57e0, .a=0xe0, .x=0x6e, .y=0xe2, .sp=0xe1, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x57de, .value=0x8d}, {.addr=0x57df, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x57de, .value=0x8d, .type=IO_READ},
        {.addr=0x57df, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x5524, .a=0xdd, .x=0xa8, .y=0x01, .sp=0x8c, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x5524, .value=0x8d}, {.addr=0x5525, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x5526, .a=0xdd, .x=0xa8, .y=0x91, .sp=0x8c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x5524, .value=0x8d}, {.addr=0x5525, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x5524, .value=0x8d, .type=IO_READ},
        {.addr=0x5525, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xf772, .a=0x2b, .x=0x19, .y=0xad, .sp=0x10, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xf772, .value=0x8d}, {.addr=0xf773, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf774, .a=0x2b, .x=0x19, .y=0xce, .sp=0x10, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf772, .value=0x8d}, {.addr=0xf773, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf772, .value=0x8d, .type=IO_READ},
        {.addr=0xf773, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x4000, .a=0x1b, .x=0xb4, .y=0xb5, .sp=0x58, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x4000, .value=0x8d}, {.addr=0x4001, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x4002, .a=0x1b, .x=0xb4, .y=0x58, .sp=0x58, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4000, .value=0x8d}, {.addr=0x4001, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x4000, .value=0x8d, .type=IO_READ},
        {.addr=0x4001, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xfa18, .a=0x7a, .x=0x4d, .y=0xdd, .sp=0xed, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xfa18, .value=0x8d}, {.addr=0xfa19, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xfa1a, .a=0x7a, .x=0x4d, .y=0x9e, .sp=0xed, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xfa18, .value=0x8d}, {.addr=0xfa19, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xfa18, .value=0x8d, .type=IO_READ},
        {.addr=0xfa19, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x34b9, .a=0xc1, .x=0x78, .y=0x14, .sp=0xbf, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x34b9, .value=0x8d}, {.addr=0x34ba, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x34bb, .a=0xc1, .x=0x78, .y=0x91, .sp=0xbf, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x34b9, .value=0x8d}, {.addr=0x34ba, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x34b9, .value=0x8d, .type=IO_READ},
        {.addr=0x34ba, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xa31c, .a=0xb9, .x=0x5e, .y=0x82, .sp=0xcf, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xa31c, .value=0x8d}, {.addr=0xa31d, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xa31e, .a=0xb9, .x=0x5e, .y=0x09, .sp=0xcf, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa31c, .value=0x8d}, {.addr=0xa31d, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xa31c, .value=0x8d, .type=IO_READ},
        {.addr=0xa31d, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xede1, .a=0xb6, .x=0xb4, .y=0x41, .sp=0x77, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xede1, .value=0x8d}, {.addr=0xede2, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xede3, .a=0xb6, .x=0xb4, .y=0xde, .sp=0x77, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xede1, .value=0x8d}, {.addr=0xede2, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xede1, .value=0x8d, .type=IO_READ},
        {.addr=0xede2, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xed18, .a=0xe5, .x=0xeb, .y=0x39, .sp=0x5b, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xed18, .value=0x8d}, {.addr=0xed19, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xed1a, .a=0xe5, .x=0xeb, .y=0x1d, .sp=0x5b, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xed18, .value=0x8d}, {.addr=0xed19, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xed18, .value=0x8d, .type=IO_READ},
        {.addr=0xed19, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x3590, .a=0x6a, .x=0xd9, .y=0xb1, .sp=0xdc, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x3590, .value=0x8d}, {.addr=0x3591, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3592, .a=0x6a, .x=0xd9, .y=0x60, .sp=0xdc, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3590, .value=0x8d}, {.addr=0x3591, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3590, .value=0x8d, .type=IO_READ},
        {.addr=0x3591, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x17db, .a=0xca, .x=0xe0, .y=0x66, .sp=0xe1, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x17db, .value=0x8d}, {.addr=0x17dc, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x17dd, .a=0xca, .x=0xe0, .y=0x33, .sp=0xe1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x17db, .value=0x8d}, {.addr=0x17dc, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x17db, .value=0x8d, .type=IO_READ},
        {.addr=0x17dc, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xd5c5, .a=0x51, .x=0xe5, .y=0x4f, .sp=0x9c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xd5c5, .value=0x8d}, {.addr=0xd5c6, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xd5c7, .a=0x51, .x=0xe5, .y=0x31, .sp=0x9c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd5c5, .value=0x8d}, {.addr=0xd5c6, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xd5c5, .value=0x8d, .type=IO_READ},
        {.addr=0xd5c6, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x0bc5, .a=0x65, .x=0xf6, .y=0x0d, .sp=0x04, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0bc5, .value=0x8d}, {.addr=0x0bc6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x0bc7, .a=0x65, .x=0xf6, .y=0xe6, .sp=0x04, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0bc5, .value=0x8d}, {.addr=0x0bc6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x0bc5, .value=0x8d, .type=IO_READ},
        {.addr=0x0bc6, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x2098, .a=0x15, .x=0x9f, .y=0x5b, .sp=0xa5, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x2098, .value=0x8d}, {.addr=0x2099, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x209a, .a=0x15, .x=0x9f, .y=0xf4, .sp=0xa5, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x2098, .value=0x8d}, {.addr=0x2099, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x2098, .value=0x8d, .type=IO_READ},
        {.addr=0x2099, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xd330, .a=0x60, .x=0xb6, .y=0xe1, .sp=0xe5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xd330, .value=0x8d}, {.addr=0xd331, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd332, .a=0x60, .x=0xb6, .y=0x2d, .sp=0xe5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd330, .value=0x8d}, {.addr=0xd331, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd330, .value=0x8d, .type=IO_READ},
        {.addr=0xd331, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0100) {
    const struct CPU_State initial_cpu = {.pc=0x0ce9, .a=0x29, .x=0xca, .y=0xcc, .sp=0xe9, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0ce9, .value=0x8d}, {.addr=0x0cea, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x0ceb, .a=0x29, .x=0xca, .y=0x72, .sp=0xe9, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0ce9, .value=0x8d}, {.addr=0x0cea, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x0ce9, .value=0x8d, .type=IO_READ},
        {.addr=0x0cea, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0101) {
    const struct CPU_State initial_cpu = {.pc=0x9ea3, .a=0xe4, .x=0x76, .y=0xef, .sp=0x13, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x9ea3, .value=0x8d}, {.addr=0x9ea4, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x9ea5, .a=0xe4, .x=0x76, .y=0x02, .sp=0x13, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9ea3, .value=0x8d}, {.addr=0x9ea4, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x9ea3, .value=0x8d, .type=IO_READ},
        {.addr=0x9ea4, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0102) {
    const struct CPU_State initial_cpu = {.pc=0x0da6, .a=0x94, .x=0x59, .y=0x44, .sp=0xba, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0da6, .value=0x8d}, {.addr=0x0da7, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x0da8, .a=0x94, .x=0x59, .y=0x61, .sp=0xba, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0da6, .value=0x8d}, {.addr=0x0da7, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x0da6, .value=0x8d, .type=IO_READ},
        {.addr=0x0da7, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0103) {
    const struct CPU_State initial_cpu = {.pc=0xb166, .a=0xe4, .x=0x38, .y=0x46, .sp=0xc8, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb166, .value=0x8d}, {.addr=0xb167, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb168, .a=0xe4, .x=0x38, .y=0x9c, .sp=0xc8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb166, .value=0x8d}, {.addr=0xb167, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb166, .value=0x8d, .type=IO_READ},
        {.addr=0xb167, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0104) {
    const struct CPU_State initial_cpu = {.pc=0x3e9c, .a=0xee, .x=0x28, .y=0xc6, .sp=0x1d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x3e9c, .value=0x8d}, {.addr=0x3e9d, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x3e9e, .a=0xee, .x=0x28, .y=0xf1, .sp=0x1d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3e9c, .value=0x8d}, {.addr=0x3e9d, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x3e9c, .value=0x8d, .type=IO_READ},
        {.addr=0x3e9d, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0105) {
    const struct CPU_State initial_cpu = {.pc=0xbf33, .a=0x10, .x=0x45, .y=0xe1, .sp=0x41, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xbf33, .value=0x8d}, {.addr=0xbf34, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xbf35, .a=0x10, .x=0x45, .y=0x13, .sp=0x41, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xbf33, .value=0x8d}, {.addr=0xbf34, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xbf33, .value=0x8d, .type=IO_READ},
        {.addr=0xbf34, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0106) {
    const struct CPU_State initial_cpu = {.pc=0x753f, .a=0x94, .x=0xee, .y=0x96, .sp=0xa8, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x753f, .value=0x8d}, {.addr=0x7540, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x7541, .a=0x94, .x=0xee, .y=0x2c, .sp=0xa8, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x753f, .value=0x8d}, {.addr=0x7540, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x753f, .value=0x8d, .type=IO_READ},
        {.addr=0x7540, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0107) {
    const struct CPU_State initial_cpu = {.pc=0x4c21, .a=0x2f, .x=0xf5, .y=0x3b, .sp=0x59, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x4c21, .value=0x8d}, {.addr=0x4c22, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x4c23, .a=0x2f, .x=0xf5, .y=0x55, .sp=0x59, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4c21, .value=0x8d}, {.addr=0x4c22, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x4c21, .value=0x8d, .type=IO_READ},
        {.addr=0x4c22, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0108) {
    const struct CPU_State initial_cpu = {.pc=0xa37c, .a=0xe4, .x=0xd4, .y=0x5a, .sp=0x02, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xa37c, .value=0x8d}, {.addr=0xa37d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa37e, .a=0xe4, .x=0xd4, .y=0xa6, .sp=0x02, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xa37c, .value=0x8d}, {.addr=0xa37d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa37c, .value=0x8d, .type=IO_READ},
        {.addr=0xa37d, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0109) {
    const struct CPU_State initial_cpu = {.pc=0x058e, .a=0xef, .x=0x8c, .y=0x36, .sp=0x82, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x058e, .value=0x8d}, {.addr=0x058f, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x0590, .a=0xef, .x=0x8c, .y=0xf9, .sp=0x82, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x058e, .value=0x8d}, {.addr=0x058f, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x058e, .value=0x8d, .type=IO_READ},
        {.addr=0x058f, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_010A) {
    const struct CPU_State initial_cpu = {.pc=0xa99d, .a=0x4f, .x=0x4a, .y=0xe9, .sp=0xaa, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xa99d, .value=0x8d}, {.addr=0xa99e, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xa99f, .a=0x4f, .x=0x4a, .y=0x4e, .sp=0xaa, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa99d, .value=0x8d}, {.addr=0xa99e, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xa99d, .value=0x8d, .type=IO_READ},
        {.addr=0xa99e, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_010B) {
    const struct CPU_State initial_cpu = {.pc=0x2276, .a=0xfa, .x=0x0c, .y=0x09, .sp=0x62, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x2276, .value=0x8d}, {.addr=0x2277, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x2278, .a=0xfa, .x=0x0c, .y=0x0f, .sp=0x62, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2276, .value=0x8d}, {.addr=0x2277, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x2276, .value=0x8d, .type=IO_READ},
        {.addr=0x2277, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_010C) {
    const struct CPU_State initial_cpu = {.pc=0xf526, .a=0xc2, .x=0x01, .y=0xd9, .sp=0x21, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xf526, .value=0x8d}, {.addr=0xf527, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xf528, .a=0xc2, .x=0x01, .y=0x96, .sp=0x21, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf526, .value=0x8d}, {.addr=0xf527, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xf526, .value=0x8d, .type=IO_READ},
        {.addr=0xf527, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_010D) {
    const struct CPU_State initial_cpu = {.pc=0xf24d, .a=0xaa, .x=0xbd, .y=0x8d, .sp=0xa7, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xf24d, .value=0x8d}, {.addr=0xf24e, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xf24f, .a=0xaa, .x=0xbd, .y=0x21, .sp=0xa7, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf24d, .value=0x8d}, {.addr=0xf24e, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xf24d, .value=0x8d, .type=IO_READ},
        {.addr=0xf24e, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_010E) {
    const struct CPU_State initial_cpu = {.pc=0x8ca1, .a=0xeb, .x=0x63, .y=0x06, .sp=0x68, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8ca1, .value=0x8d}, {.addr=0x8ca2, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x8ca3, .a=0xeb, .x=0x63, .y=0x44, .sp=0x68, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8ca1, .value=0x8d}, {.addr=0x8ca2, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x8ca1, .value=0x8d, .type=IO_READ},
        {.addr=0x8ca2, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_010F) {
    const struct CPU_State initial_cpu = {.pc=0x794c, .a=0x31, .x=0xb3, .y=0xf1, .sp=0xb3, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x794c, .value=0x8d}, {.addr=0x794d, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x794e, .a=0x31, .x=0xb3, .y=0x61, .sp=0xb3, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x794c, .value=0x8d}, {.addr=0x794d, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x794c, .value=0x8d, .type=IO_READ},
        {.addr=0x794d, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0110) {
    const struct CPU_State initial_cpu = {.pc=0x5d13, .a=0x9b, .x=0xfb, .y=0x79, .sp=0x83, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x5d13, .value=0x8d}, {.addr=0x5d14, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x5d15, .a=0x9b, .x=0xfb, .y=0x73, .sp=0x83, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x5d13, .value=0x8d}, {.addr=0x5d14, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x5d13, .value=0x8d, .type=IO_READ},
        {.addr=0x5d14, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0111) {
    const struct CPU_State initial_cpu = {.pc=0x68b0, .a=0x8a, .x=0x42, .y=0x87, .sp=0x99, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x68b0, .value=0x8d}, {.addr=0x68b1, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x68b2, .a=0x8a, .x=0x42, .y=0xf0, .sp=0x99, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x68b0, .value=0x8d}, {.addr=0x68b1, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x68b0, .value=0x8d, .type=IO_READ},
        {.addr=0x68b1, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0112) {
    const struct CPU_State initial_cpu = {.pc=0x8638, .a=0xdc, .x=0x77, .y=0x6c, .sp=0x74, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x8638, .value=0x8d}, {.addr=0x8639, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x863a, .a=0xdc, .x=0x77, .y=0xa8, .sp=0x74, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8638, .value=0x8d}, {.addr=0x8639, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x8638, .value=0x8d, .type=IO_READ},
        {.addr=0x8639, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0113) {
    const struct CPU_State initial_cpu = {.pc=0xb794, .a=0x3c, .x=0x3e, .y=0xe3, .sp=0x3e, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xb794, .value=0x8d}, {.addr=0xb795, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xb796, .a=0x3c, .x=0x3e, .y=0xc4, .sp=0x3e, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb794, .value=0x8d}, {.addr=0xb795, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xb794, .value=0x8d, .type=IO_READ},
        {.addr=0xb795, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0114) {
    const struct CPU_State initial_cpu = {.pc=0xaf76, .a=0x04, .x=0x0c, .y=0x97, .sp=0xa1, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xaf76, .value=0x8d}, {.addr=0xaf77, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xaf78, .a=0x04, .x=0x0c, .y=0x19, .sp=0xa1, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xaf76, .value=0x8d}, {.addr=0xaf77, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xaf76, .value=0x8d, .type=IO_READ},
        {.addr=0xaf77, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0115) {
    const struct CPU_State initial_cpu = {.pc=0xb9f6, .a=0x35, .x=0x66, .y=0x7a, .sp=0x28, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xb9f6, .value=0x8d}, {.addr=0xb9f7, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xb9f8, .a=0x35, .x=0x66, .y=0x51, .sp=0x28, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xb9f6, .value=0x8d}, {.addr=0xb9f7, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xb9f6, .value=0x8d, .type=IO_READ},
        {.addr=0xb9f7, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0116) {
    const struct CPU_State initial_cpu = {.pc=0x4cd6, .a=0x6b, .x=0x54, .y=0x03, .sp=0x4a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd6, .value=0x8d}, {.addr=0x4cd7, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x4cd8, .a=0x6b, .x=0x54, .y=0x6e, .sp=0x4a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4cd6, .value=0x8d}, {.addr=0x4cd7, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x4cd6, .value=0x8d, .type=IO_READ},
        {.addr=0x4cd7, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0117) {
    const struct CPU_State initial_cpu = {.pc=0xb23f, .a=0x75, .x=0x94, .y=0x83, .sp=0x30, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xb23f, .value=0x8d}, {.addr=0xb240, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xb241, .a=0x75, .x=0x94, .y=0x15, .sp=0x30, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb23f, .value=0x8d}, {.addr=0xb240, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xb23f, .value=0x8d, .type=IO_READ},
        {.addr=0xb240, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0118) {
    const struct CPU_State initial_cpu = {.pc=0xb51f, .a=0xa2, .x=0xda, .y=0x77, .sp=0x9a, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xb51f, .value=0x8d}, {.addr=0xb520, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xb521, .a=0xa2, .x=0xda, .y=0xcf, .sp=0x9a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xb51f, .value=0x8d}, {.addr=0xb520, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xb51f, .value=0x8d, .type=IO_READ},
        {.addr=0xb520, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0119) {
    const struct CPU_State initial_cpu = {.pc=0x2a10, .a=0x6e, .x=0x4d, .y=0xa7, .sp=0x8b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x2a10, .value=0x8d}, {.addr=0x2a11, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x2a12, .a=0x6e, .x=0x4d, .y=0x2c, .sp=0x8b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x2a10, .value=0x8d}, {.addr=0x2a11, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x2a10, .value=0x8d, .type=IO_READ},
        {.addr=0x2a11, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_011A) {
    const struct CPU_State initial_cpu = {.pc=0x0a9f, .a=0xb7, .x=0xc3, .y=0x02, .sp=0xd4, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0a9f, .value=0x8d}, {.addr=0x0aa0, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x0aa1, .a=0xb7, .x=0xc3, .y=0xe1, .sp=0xd4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0a9f, .value=0x8d}, {.addr=0x0aa0, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x0a9f, .value=0x8d, .type=IO_READ},
        {.addr=0x0aa0, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_011B) {
    const struct CPU_State initial_cpu = {.pc=0x456c, .a=0x5a, .x=0x4f, .y=0x5c, .sp=0x60, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x456c, .value=0x8d}, {.addr=0x456d, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x456e, .a=0x5a, .x=0x4f, .y=0x01, .sp=0x60, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x456c, .value=0x8d}, {.addr=0x456d, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x456c, .value=0x8d, .type=IO_READ},
        {.addr=0x456d, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_011C) {
    const struct CPU_State initial_cpu = {.pc=0xc425, .a=0x3f, .x=0x2b, .y=0x4f, .sp=0x8f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xc425, .value=0x8d}, {.addr=0xc426, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xc427, .a=0x3f, .x=0x2b, .y=0x65, .sp=0x8f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc425, .value=0x8d}, {.addr=0xc426, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xc425, .value=0x8d, .type=IO_READ},
        {.addr=0xc426, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_011D) {
    const struct CPU_State initial_cpu = {.pc=0x3660, .a=0xf4, .x=0xb1, .y=0xfa, .sp=0x6e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x3660, .value=0x8d}, {.addr=0x3661, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x3662, .a=0xf4, .x=0xb1, .y=0x83, .sp=0x6e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3660, .value=0x8d}, {.addr=0x3661, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x3660, .value=0x8d, .type=IO_READ},
        {.addr=0x3661, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_011E) {
    const struct CPU_State initial_cpu = {.pc=0xebc6, .a=0x7a, .x=0xf0, .y=0x2b, .sp=0x6e, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xebc6, .value=0x8d}, {.addr=0xebc7, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xebc8, .a=0x7a, .x=0xf0, .y=0xc0, .sp=0x6e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xebc6, .value=0x8d}, {.addr=0xebc7, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xebc6, .value=0x8d, .type=IO_READ},
        {.addr=0xebc7, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_011F) {
    const struct CPU_State initial_cpu = {.pc=0x2023, .a=0x5d, .x=0xce, .y=0x96, .sp=0xeb, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x2023, .value=0x8d}, {.addr=0x2024, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x2025, .a=0x5d, .x=0xce, .y=0xab, .sp=0xeb, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x2023, .value=0x8d}, {.addr=0x2024, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x2023, .value=0x8d, .type=IO_READ},
        {.addr=0x2024, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0120) {
    const struct CPU_State initial_cpu = {.pc=0x78af, .a=0xf7, .x=0x35, .y=0xa4, .sp=0x2d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x78af, .value=0x8d}, {.addr=0x78b0, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x78b1, .a=0xf7, .x=0x35, .y=0x76, .sp=0x2d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x78af, .value=0x8d}, {.addr=0x78b0, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x78af, .value=0x8d, .type=IO_READ},
        {.addr=0x78b0, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0121) {
    const struct CPU_State initial_cpu = {.pc=0x60d3, .a=0xa3, .x=0x37, .y=0xe2, .sp=0x01, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x60d3, .value=0x8d}, {.addr=0x60d4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x60d5, .a=0xa3, .x=0x37, .y=0x2d, .sp=0x01, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x60d3, .value=0x8d}, {.addr=0x60d4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x60d3, .value=0x8d, .type=IO_READ},
        {.addr=0x60d4, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0122) {
    const struct CPU_State initial_cpu = {.pc=0xcffd, .a=0xc9, .x=0x35, .y=0x36, .sp=0x84, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xcffd, .value=0x8d}, {.addr=0xcffe, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcfff, .a=0xc9, .x=0x35, .y=0x5c, .sp=0x84, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xcffd, .value=0x8d}, {.addr=0xcffe, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcffd, .value=0x8d, .type=IO_READ},
        {.addr=0xcffe, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0123) {
    const struct CPU_State initial_cpu = {.pc=0x3a21, .a=0x7b, .x=0x7b, .y=0x46, .sp=0x97, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x3a21, .value=0x8d}, {.addr=0x3a22, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x3a23, .a=0x7b, .x=0x7b, .y=0x2b, .sp=0x97, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x3a21, .value=0x8d}, {.addr=0x3a22, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x3a21, .value=0x8d, .type=IO_READ},
        {.addr=0x3a22, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0124) {
    const struct CPU_State initial_cpu = {.pc=0xad83, .a=0x33, .x=0xce, .y=0xab, .sp=0x23, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xad83, .value=0x8d}, {.addr=0xad84, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xad85, .a=0x33, .x=0xce, .y=0x00, .sp=0x23, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xad83, .value=0x8d}, {.addr=0xad84, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xad83, .value=0x8d, .type=IO_READ},
        {.addr=0xad84, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0125) {
    const struct CPU_State initial_cpu = {.pc=0x964a, .a=0x28, .x=0xc8, .y=0xc6, .sp=0x8c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x964a, .value=0x8d}, {.addr=0x964b, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x964c, .a=0x28, .x=0xc8, .y=0x22, .sp=0x8c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x964a, .value=0x8d}, {.addr=0x964b, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x964a, .value=0x8d, .type=IO_READ},
        {.addr=0x964b, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0126) {
    const struct CPU_State initial_cpu = {.pc=0x86f4, .a=0x08, .x=0xd8, .y=0x5d, .sp=0x77, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x86f4, .value=0x8d}, {.addr=0x86f5, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x86f6, .a=0x08, .x=0xd8, .y=0xde, .sp=0x77, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x86f4, .value=0x8d}, {.addr=0x86f5, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x86f4, .value=0x8d, .type=IO_READ},
        {.addr=0x86f5, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0127) {
    const struct CPU_State initial_cpu = {.pc=0xbf57, .a=0xdb, .x=0xe1, .y=0x52, .sp=0xad, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xbf57, .value=0x8d}, {.addr=0xbf58, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xbf59, .a=0xdb, .x=0xe1, .y=0x7e, .sp=0xad, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xbf57, .value=0x8d}, {.addr=0xbf58, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xbf57, .value=0x8d, .type=IO_READ},
        {.addr=0xbf58, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0128) {
    const struct CPU_State initial_cpu = {.pc=0x15f4, .a=0x5f, .x=0x10, .y=0x99, .sp=0xd2, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x15f4, .value=0x8d}, {.addr=0x15f5, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x15f6, .a=0x5f, .x=0x10, .y=0x5e, .sp=0xd2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x15f4, .value=0x8d}, {.addr=0x15f5, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x15f4, .value=0x8d, .type=IO_READ},
        {.addr=0x15f5, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0129) {
    const struct CPU_State initial_cpu = {.pc=0xedce, .a=0xdc, .x=0x44, .y=0x98, .sp=0x9d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xedce, .value=0x8d}, {.addr=0xedcf, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xedd0, .a=0xdc, .x=0x44, .y=0x41, .sp=0x9d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xedce, .value=0x8d}, {.addr=0xedcf, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xedce, .value=0x8d, .type=IO_READ},
        {.addr=0xedcf, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_012A) {
    const struct CPU_State initial_cpu = {.pc=0xa0b4, .a=0x67, .x=0x0e, .y=0xaa, .sp=0xaf, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b4, .value=0x8d}, {.addr=0xa0b5, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xa0b6, .a=0x67, .x=0x0e, .y=0x17, .sp=0xaf, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xa0b4, .value=0x8d}, {.addr=0xa0b5, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xa0b4, .value=0x8d, .type=IO_READ},
        {.addr=0xa0b5, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_012B) {
    const struct CPU_State initial_cpu = {.pc=0xb55a, .a=0xfb, .x=0x90, .y=0x58, .sp=0xa4, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xb55a, .value=0x8d}, {.addr=0xb55b, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xb55c, .a=0xfb, .x=0x90, .y=0x3b, .sp=0xa4, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb55a, .value=0x8d}, {.addr=0xb55b, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xb55a, .value=0x8d, .type=IO_READ},
        {.addr=0xb55b, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_012C) {
    const struct CPU_State initial_cpu = {.pc=0x02fe, .a=0xe6, .x=0x60, .y=0x6e, .sp=0x9a, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x02fe, .value=0x8d}, {.addr=0x02ff, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0300, .a=0xe6, .x=0x60, .y=0xdf, .sp=0x9a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x02fe, .value=0x8d}, {.addr=0x02ff, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x02fe, .value=0x8d, .type=IO_READ},
        {.addr=0x02ff, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_012D) {
    const struct CPU_State initial_cpu = {.pc=0xb9ea, .a=0x48, .x=0xb0, .y=0x6a, .sp=0xcd, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xb9ea, .value=0x8d}, {.addr=0xb9eb, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xb9ec, .a=0x48, .x=0xb0, .y=0xff, .sp=0xcd, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb9ea, .value=0x8d}, {.addr=0xb9eb, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xb9ea, .value=0x8d, .type=IO_READ},
        {.addr=0xb9eb, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_012E) {
    const struct CPU_State initial_cpu = {.pc=0x2839, .a=0xec, .x=0x4e, .y=0xa2, .sp=0xf7, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x2839, .value=0x8d}, {.addr=0x283a, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x283b, .a=0xec, .x=0x4e, .y=0x5f, .sp=0xf7, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2839, .value=0x8d}, {.addr=0x283a, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x2839, .value=0x8d, .type=IO_READ},
        {.addr=0x283a, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_012F) {
    const struct CPU_State initial_cpu = {.pc=0xcec0, .a=0x0f, .x=0x7b, .y=0x9f, .sp=0x94, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xcec0, .value=0x8d}, {.addr=0xcec1, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xcec2, .a=0x0f, .x=0x7b, .y=0xe3, .sp=0x94, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xcec0, .value=0x8d}, {.addr=0xcec1, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xcec0, .value=0x8d, .type=IO_READ},
        {.addr=0xcec1, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0130) {
    const struct CPU_State initial_cpu = {.pc=0x764d, .a=0x39, .x=0xc5, .y=0xfd, .sp=0xb9, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x764d, .value=0x8d}, {.addr=0x764e, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x764f, .a=0x39, .x=0xc5, .y=0x6e, .sp=0xb9, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x764d, .value=0x8d}, {.addr=0x764e, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x764d, .value=0x8d, .type=IO_READ},
        {.addr=0x764e, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0131) {
    const struct CPU_State initial_cpu = {.pc=0xe5af, .a=0x5c, .x=0xb4, .y=0x49, .sp=0x3b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xe5af, .value=0x8d}, {.addr=0xe5b0, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xe5b1, .a=0x5c, .x=0xb4, .y=0xb7, .sp=0x3b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xe5af, .value=0x8d}, {.addr=0xe5b0, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xe5af, .value=0x8d, .type=IO_READ},
        {.addr=0xe5b0, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0132) {
    const struct CPU_State initial_cpu = {.pc=0x444d, .a=0xc2, .x=0xf3, .y=0x9b, .sp=0xe8, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x444d, .value=0x8d}, {.addr=0x444e, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x444f, .a=0xc2, .x=0xf3, .y=0x64, .sp=0xe8, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x444d, .value=0x8d}, {.addr=0x444e, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x444d, .value=0x8d, .type=IO_READ},
        {.addr=0x444e, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0133) {
    const struct CPU_State initial_cpu = {.pc=0x5a19, .a=0x13, .x=0x34, .y=0xed, .sp=0xe2, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x5a19, .value=0x8d}, {.addr=0x5a1a, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x5a1b, .a=0x13, .x=0x34, .y=0x14, .sp=0xe2, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x5a19, .value=0x8d}, {.addr=0x5a1a, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x5a19, .value=0x8d, .type=IO_READ},
        {.addr=0x5a1a, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0134) {
    const struct CPU_State initial_cpu = {.pc=0x7696, .a=0xdb, .x=0x77, .y=0xf9, .sp=0x23, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x7696, .value=0x8d}, {.addr=0x7697, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x7698, .a=0xdb, .x=0x77, .y=0x9b, .sp=0x23, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7696, .value=0x8d}, {.addr=0x7697, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x7696, .value=0x8d, .type=IO_READ},
        {.addr=0x7697, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0135) {
    const struct CPU_State initial_cpu = {.pc=0x7eb5, .a=0x4f, .x=0x4b, .y=0x0a, .sp=0x32, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7eb5, .value=0x8d}, {.addr=0x7eb6, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x7eb7, .a=0x4f, .x=0x4b, .y=0xff, .sp=0x32, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x7eb5, .value=0x8d}, {.addr=0x7eb6, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x7eb5, .value=0x8d, .type=IO_READ},
        {.addr=0x7eb6, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0136) {
    const struct CPU_State initial_cpu = {.pc=0xfe42, .a=0x87, .x=0x4b, .y=0x1b, .sp=0xa5, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xfe42, .value=0x8d}, {.addr=0xfe43, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xfe44, .a=0x87, .x=0x4b, .y=0x24, .sp=0xa5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xfe42, .value=0x8d}, {.addr=0xfe43, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xfe42, .value=0x8d, .type=IO_READ},
        {.addr=0xfe43, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0137) {
    const struct CPU_State initial_cpu = {.pc=0x3763, .a=0xa8, .x=0xff, .y=0xdc, .sp=0x33, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x3763, .value=0x8d}, {.addr=0x3764, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x3765, .a=0xa8, .x=0xff, .y=0xa7, .sp=0x33, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3763, .value=0x8d}, {.addr=0x3764, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x3763, .value=0x8d, .type=IO_READ},
        {.addr=0x3764, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0138) {
    const struct CPU_State initial_cpu = {.pc=0x4b45, .a=0x77, .x=0x51, .y=0x0f, .sp=0x17, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x4b45, .value=0x8d}, {.addr=0x4b46, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x4b47, .a=0x77, .x=0x51, .y=0x0e, .sp=0x17, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4b45, .value=0x8d}, {.addr=0x4b46, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x4b45, .value=0x8d, .type=IO_READ},
        {.addr=0x4b46, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0139) {
    const struct CPU_State initial_cpu = {.pc=0x5d93, .a=0x23, .x=0x40, .y=0xe9, .sp=0xb7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x5d93, .value=0x8d}, {.addr=0x5d94, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x5d95, .a=0x23, .x=0x40, .y=0xf9, .sp=0xb7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x5d93, .value=0x8d}, {.addr=0x5d94, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x5d93, .value=0x8d, .type=IO_READ},
        {.addr=0x5d94, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_013A) {
    const struct CPU_State initial_cpu = {.pc=0x53a2, .a=0x2e, .x=0x11, .y=0xd8, .sp=0x49, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x53a2, .value=0x8d}, {.addr=0x53a3, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x53a4, .a=0x2e, .x=0x11, .y=0x75, .sp=0x49, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x53a2, .value=0x8d}, {.addr=0x53a3, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x53a2, .value=0x8d, .type=IO_READ},
        {.addr=0x53a3, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_013B) {
    const struct CPU_State initial_cpu = {.pc=0x62c9, .a=0x6d, .x=0xa6, .y=0xf0, .sp=0xe5, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x62c9, .value=0x8d}, {.addr=0x62ca, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x62cb, .a=0x6d, .x=0xa6, .y=0x83, .sp=0xe5, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x62c9, .value=0x8d}, {.addr=0x62ca, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x62c9, .value=0x8d, .type=IO_READ},
        {.addr=0x62ca, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_013C) {
    const struct CPU_State initial_cpu = {.pc=0xd59b, .a=0xec, .x=0x1d, .y=0x8e, .sp=0x84, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xd59b, .value=0x8d}, {.addr=0xd59c, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xd59d, .a=0xec, .x=0x1d, .y=0xb0, .sp=0x84, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd59b, .value=0x8d}, {.addr=0xd59c, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xd59b, .value=0x8d, .type=IO_READ},
        {.addr=0xd59c, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_013D) {
    const struct CPU_State initial_cpu = {.pc=0x64d9, .a=0x7f, .x=0x71, .y=0x6a, .sp=0x17, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x64d9, .value=0x8d}, {.addr=0x64da, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x64db, .a=0x7f, .x=0x71, .y=0x8e, .sp=0x17, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x64d9, .value=0x8d}, {.addr=0x64da, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x64d9, .value=0x8d, .type=IO_READ},
        {.addr=0x64da, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_013E) {
    const struct CPU_State initial_cpu = {.pc=0xb026, .a=0xa4, .x=0x30, .y=0x5e, .sp=0xe7, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xb026, .value=0x8d}, {.addr=0xb027, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xb028, .a=0xa4, .x=0x30, .y=0x01, .sp=0xe7, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb026, .value=0x8d}, {.addr=0xb027, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xb026, .value=0x8d, .type=IO_READ},
        {.addr=0xb027, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_013F) {
    const struct CPU_State initial_cpu = {.pc=0xd454, .a=0x0e, .x=0x28, .y=0xd0, .sp=0xa4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xd454, .value=0x8d}, {.addr=0xd455, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xd456, .a=0x0e, .x=0x28, .y=0x13, .sp=0xa4, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xd454, .value=0x8d}, {.addr=0xd455, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xd454, .value=0x8d, .type=IO_READ},
        {.addr=0xd455, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0140) {
    const struct CPU_State initial_cpu = {.pc=0x269c, .a=0xfb, .x=0x4b, .y=0xb3, .sp=0x41, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x269c, .value=0x8d}, {.addr=0x269d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x269e, .a=0xfb, .x=0x4b, .y=0x9c, .sp=0x41, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x269c, .value=0x8d}, {.addr=0x269d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x269c, .value=0x8d, .type=IO_READ},
        {.addr=0x269d, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0141) {
    const struct CPU_State initial_cpu = {.pc=0xca9e, .a=0xab, .x=0xf6, .y=0x5f, .sp=0x89, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xca9e, .value=0x8d}, {.addr=0xca9f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcaa0, .a=0xab, .x=0xf6, .y=0xbc, .sp=0x89, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xca9e, .value=0x8d}, {.addr=0xca9f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xca9e, .value=0x8d, .type=IO_READ},
        {.addr=0xca9f, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0142) {
    const struct CPU_State initial_cpu = {.pc=0xbf7e, .a=0xf3, .x=0xfd, .y=0xcf, .sp=0xe9, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xbf7e, .value=0x8d}, {.addr=0xbf7f, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xbf80, .a=0xf3, .x=0xfd, .y=0x97, .sp=0xe9, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbf7e, .value=0x8d}, {.addr=0xbf7f, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xbf7e, .value=0x8d, .type=IO_READ},
        {.addr=0xbf7f, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0143) {
    const struct CPU_State initial_cpu = {.pc=0xf130, .a=0xdc, .x=0xb6, .y=0xb6, .sp=0x0b, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xf130, .value=0x8d}, {.addr=0xf131, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xf132, .a=0xdc, .x=0xb6, .y=0x30, .sp=0x0b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf130, .value=0x8d}, {.addr=0xf131, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xf130, .value=0x8d, .type=IO_READ},
        {.addr=0xf131, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0144) {
    const struct CPU_State initial_cpu = {.pc=0xda53, .a=0xb7, .x=0x7a, .y=0xa0, .sp=0xe9, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xda53, .value=0x8d}, {.addr=0xda54, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xda55, .a=0xb7, .x=0x7a, .y=0xfc, .sp=0xe9, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xda53, .value=0x8d}, {.addr=0xda54, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xda53, .value=0x8d, .type=IO_READ},
        {.addr=0xda54, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0145) {
    const struct CPU_State initial_cpu = {.pc=0x26c4, .a=0xcb, .x=0xc8, .y=0x01, .sp=0x95, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x26c4, .value=0x8d}, {.addr=0x26c5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x26c6, .a=0xcb, .x=0xc8, .y=0xfd, .sp=0x95, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x26c4, .value=0x8d}, {.addr=0x26c5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x26c4, .value=0x8d, .type=IO_READ},
        {.addr=0x26c5, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0146) {
    const struct CPU_State initial_cpu = {.pc=0xa9b8, .a=0xee, .x=0x26, .y=0x84, .sp=0x3f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa9b8, .value=0x8d}, {.addr=0xa9b9, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xa9ba, .a=0xee, .x=0x26, .y=0xd5, .sp=0x3f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa9b8, .value=0x8d}, {.addr=0xa9b9, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xa9b8, .value=0x8d, .type=IO_READ},
        {.addr=0xa9b9, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0147) {
    const struct CPU_State initial_cpu = {.pc=0xa145, .a=0xce, .x=0xb3, .y=0x84, .sp=0xf2, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xa145, .value=0x8d}, {.addr=0xa146, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xa147, .a=0xce, .x=0xb3, .y=0xef, .sp=0xf2, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa145, .value=0x8d}, {.addr=0xa146, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xa145, .value=0x8d, .type=IO_READ},
        {.addr=0xa146, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0148) {
    const struct CPU_State initial_cpu = {.pc=0xf53d, .a=0xc6, .x=0x8e, .y=0x16, .sp=0x28, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xf53d, .value=0x8d}, {.addr=0xf53e, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xf53f, .a=0xc6, .x=0x8e, .y=0xd8, .sp=0x28, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xf53d, .value=0x8d}, {.addr=0xf53e, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xf53d, .value=0x8d, .type=IO_READ},
        {.addr=0xf53e, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0149) {
    const struct CPU_State initial_cpu = {.pc=0xe35d, .a=0x74, .x=0x5b, .y=0x89, .sp=0xd5, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xe35d, .value=0x8d}, {.addr=0xe35e, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xe35f, .a=0x74, .x=0x5b, .y=0x59, .sp=0xd5, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xe35d, .value=0x8d}, {.addr=0xe35e, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xe35d, .value=0x8d, .type=IO_READ},
        {.addr=0xe35e, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_014A) {
    const struct CPU_State initial_cpu = {.pc=0x0058, .a=0x58, .x=0xa3, .y=0x6d, .sp=0xad, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x8d}, {.addr=0x0059, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x005a, .a=0x58, .x=0xa3, .y=0x5f, .sp=0xad, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x8d}, {.addr=0x0059, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x0058, .value=0x8d, .type=IO_READ},
        {.addr=0x0059, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_014B) {
    const struct CPU_State initial_cpu = {.pc=0x2d2e, .a=0xb1, .x=0x2f, .y=0x8e, .sp=0xad, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x2d2e, .value=0x8d}, {.addr=0x2d2f, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x2d30, .a=0xb1, .x=0x2f, .y=0x65, .sp=0xad, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2d2e, .value=0x8d}, {.addr=0x2d2f, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x2d2e, .value=0x8d, .type=IO_READ},
        {.addr=0x2d2f, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_014C) {
    const struct CPU_State initial_cpu = {.pc=0xd25b, .a=0x99, .x=0xae, .y=0x6e, .sp=0xc9, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xd25b, .value=0x8d}, {.addr=0xd25c, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xd25d, .a=0x99, .x=0xae, .y=0x91, .sp=0xc9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd25b, .value=0x8d}, {.addr=0xd25c, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xd25b, .value=0x8d, .type=IO_READ},
        {.addr=0xd25c, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_014D) {
    const struct CPU_State initial_cpu = {.pc=0xd470, .a=0xc1, .x=0xe0, .y=0x74, .sp=0xf1, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xd470, .value=0x8d}, {.addr=0xd471, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xd472, .a=0xc1, .x=0xe0, .y=0x19, .sp=0xf1, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd470, .value=0x8d}, {.addr=0xd471, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xd470, .value=0x8d, .type=IO_READ},
        {.addr=0xd471, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_014E) {
    const struct CPU_State initial_cpu = {.pc=0xcf70, .a=0x2f, .x=0xef, .y=0xdf, .sp=0x1f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xcf70, .value=0x8d}, {.addr=0xcf71, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xcf72, .a=0x2f, .x=0xef, .y=0x84, .sp=0x1f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xcf70, .value=0x8d}, {.addr=0xcf71, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xcf70, .value=0x8d, .type=IO_READ},
        {.addr=0xcf71, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_014F) {
    const struct CPU_State initial_cpu = {.pc=0xa10f, .a=0x5b, .x=0x6f, .y=0xe9, .sp=0xab, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xa10f, .value=0x8d}, {.addr=0xa110, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xa111, .a=0x5b, .x=0x6f, .y=0x0f, .sp=0xab, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xa10f, .value=0x8d}, {.addr=0xa110, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xa10f, .value=0x8d, .type=IO_READ},
        {.addr=0xa110, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0150) {
    const struct CPU_State initial_cpu = {.pc=0x8cdd, .a=0x39, .x=0xb9, .y=0x00, .sp=0x94, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8cdd, .value=0x8d}, {.addr=0x8cde, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x8cdf, .a=0x39, .x=0xb9, .y=0x6f, .sp=0x94, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8cdd, .value=0x8d}, {.addr=0x8cde, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x8cdd, .value=0x8d, .type=IO_READ},
        {.addr=0x8cde, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0151) {
    const struct CPU_State initial_cpu = {.pc=0x34be, .a=0x16, .x=0x5e, .y=0x6d, .sp=0xf2, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x34be, .value=0x8d}, {.addr=0x34bf, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x34c0, .a=0x16, .x=0x5e, .y=0x09, .sp=0xf2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x34be, .value=0x8d}, {.addr=0x34bf, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x34be, .value=0x8d, .type=IO_READ},
        {.addr=0x34bf, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0152) {
    const struct CPU_State initial_cpu = {.pc=0x174d, .a=0xd3, .x=0x13, .y=0xfa, .sp=0x4c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x174d, .value=0x8d}, {.addr=0x174e, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x174f, .a=0xd3, .x=0x13, .y=0xe3, .sp=0x4c, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x174d, .value=0x8d}, {.addr=0x174e, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x174d, .value=0x8d, .type=IO_READ},
        {.addr=0x174e, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0153) {
    const struct CPU_State initial_cpu = {.pc=0x95c0, .a=0x21, .x=0x98, .y=0xbe, .sp=0xda, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x95c0, .value=0x8d}, {.addr=0x95c1, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x95c2, .a=0x21, .x=0x98, .y=0xcc, .sp=0xda, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x95c0, .value=0x8d}, {.addr=0x95c1, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x95c0, .value=0x8d, .type=IO_READ},
        {.addr=0x95c1, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0154) {
    const struct CPU_State initial_cpu = {.pc=0xf23d, .a=0x71, .x=0x84, .y=0x6a, .sp=0xce, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xf23d, .value=0x8d}, {.addr=0xf23e, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xf23f, .a=0x71, .x=0x84, .y=0x29, .sp=0xce, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xf23d, .value=0x8d}, {.addr=0xf23e, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xf23d, .value=0x8d, .type=IO_READ},
        {.addr=0xf23e, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0155) {
    const struct CPU_State initial_cpu = {.pc=0xdadc, .a=0x30, .x=0xb0, .y=0x5e, .sp=0x35, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xdadc, .value=0x8d}, {.addr=0xdadd, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xdade, .a=0x30, .x=0xb0, .y=0x62, .sp=0x35, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xdadc, .value=0x8d}, {.addr=0xdadd, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xdadc, .value=0x8d, .type=IO_READ},
        {.addr=0xdadd, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0156) {
    const struct CPU_State initial_cpu = {.pc=0xaede, .a=0x10, .x=0xf6, .y=0x54, .sp=0x63, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xaede, .value=0x8d}, {.addr=0xaedf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xaee0, .a=0x10, .x=0xf6, .y=0x5c, .sp=0x63, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xaede, .value=0x8d}, {.addr=0xaedf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xaede, .value=0x8d, .type=IO_READ},
        {.addr=0xaedf, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0157) {
    const struct CPU_State initial_cpu = {.pc=0x4401, .a=0x72, .x=0x1d, .y=0xcb, .sp=0x6e, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x4401, .value=0x8d}, {.addr=0x4402, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x4403, .a=0x72, .x=0x1d, .y=0xb0, .sp=0x6e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x4401, .value=0x8d}, {.addr=0x4402, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x4401, .value=0x8d, .type=IO_READ},
        {.addr=0x4402, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0158) {
    const struct CPU_State initial_cpu = {.pc=0xe47e, .a=0x1b, .x=0xb9, .y=0x5c, .sp=0x13, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xe47e, .value=0x8d}, {.addr=0xe47f, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xe480, .a=0x1b, .x=0xb9, .y=0xa4, .sp=0x13, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xe47e, .value=0x8d}, {.addr=0xe47f, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xe47e, .value=0x8d, .type=IO_READ},
        {.addr=0xe47f, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0159) {
    const struct CPU_State initial_cpu = {.pc=0x7645, .a=0x66, .x=0x01, .y=0xb3, .sp=0x1b, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x7645, .value=0x8d}, {.addr=0x7646, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x7647, .a=0x66, .x=0x01, .y=0xc9, .sp=0x1b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x7645, .value=0x8d}, {.addr=0x7646, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x7645, .value=0x8d, .type=IO_READ},
        {.addr=0x7646, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_015A) {
    const struct CPU_State initial_cpu = {.pc=0x0245, .a=0xe8, .x=0x74, .y=0x0b, .sp=0x9b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0245, .value=0x8d}, {.addr=0x0246, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x0247, .a=0xe8, .x=0x74, .y=0x28, .sp=0x9b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0245, .value=0x8d}, {.addr=0x0246, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x0245, .value=0x8d, .type=IO_READ},
        {.addr=0x0246, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_015B) {
    const struct CPU_State initial_cpu = {.pc=0xa767, .a=0xb0, .x=0x86, .y=0xb0, .sp=0x7a, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa767, .value=0x8d}, {.addr=0xa768, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xa769, .a=0xb0, .x=0x86, .y=0xda, .sp=0x7a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa767, .value=0x8d}, {.addr=0xa768, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xa767, .value=0x8d, .type=IO_READ},
        {.addr=0xa768, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_015C) {
    const struct CPU_State initial_cpu = {.pc=0xc808, .a=0x75, .x=0x1d, .y=0x9c, .sp=0x90, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xc808, .value=0x8d}, {.addr=0xc809, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xc80a, .a=0x75, .x=0x1d, .y=0x5b, .sp=0x90, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xc808, .value=0x8d}, {.addr=0xc809, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xc808, .value=0x8d, .type=IO_READ},
        {.addr=0xc809, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_015D) {
    const struct CPU_State initial_cpu = {.pc=0xc8e7, .a=0x78, .x=0xb4, .y=0x9d, .sp=0x9c, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e7, .value=0x8d}, {.addr=0xc8e8, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xc8e9, .a=0x78, .x=0xb4, .y=0x3f, .sp=0x9c, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xc8e7, .value=0x8d}, {.addr=0xc8e8, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xc8e7, .value=0x8d, .type=IO_READ},
        {.addr=0xc8e8, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_015E) {
    const struct CPU_State initial_cpu = {.pc=0xec82, .a=0x09, .x=0x06, .y=0x2c, .sp=0xb2, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xec82, .value=0x8d}, {.addr=0xec83, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xec84, .a=0x09, .x=0x06, .y=0x68, .sp=0xb2, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xec82, .value=0x8d}, {.addr=0xec83, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xec82, .value=0x8d, .type=IO_READ},
        {.addr=0xec83, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_015F) {
    const struct CPU_State initial_cpu = {.pc=0x2345, .a=0x9b, .x=0xc2, .y=0xac, .sp=0xa6, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x2345, .value=0x8d}, {.addr=0x2346, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x2347, .a=0x9b, .x=0xc2, .y=0x4e, .sp=0xa6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x2345, .value=0x8d}, {.addr=0x2346, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x2345, .value=0x8d, .type=IO_READ},
        {.addr=0x2346, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0160) {
    const struct CPU_State initial_cpu = {.pc=0xce0c, .a=0xf0, .x=0xe8, .y=0x8a, .sp=0x5d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xce0c, .value=0x8d}, {.addr=0xce0d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xce0e, .a=0xf0, .x=0xe8, .y=0x06, .sp=0x5d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xce0c, .value=0x8d}, {.addr=0xce0d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xce0c, .value=0x8d, .type=IO_READ},
        {.addr=0xce0d, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0161) {
    const struct CPU_State initial_cpu = {.pc=0xfcfe, .a=0xbb, .x=0xc4, .y=0xde, .sp=0x2c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xfcfe, .value=0x8d}, {.addr=0xfcff, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfd00, .a=0xbb, .x=0xc4, .y=0x9f, .sp=0x2c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xfcfe, .value=0x8d}, {.addr=0xfcff, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfcfe, .value=0x8d, .type=IO_READ},
        {.addr=0xfcff, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0162) {
    const struct CPU_State initial_cpu = {.pc=0x0680, .a=0x6e, .x=0xd0, .y=0x60, .sp=0xf4, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0680, .value=0x8d}, {.addr=0x0681, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0682, .a=0x6e, .x=0xd0, .y=0xdc, .sp=0xf4, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0680, .value=0x8d}, {.addr=0x0681, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0680, .value=0x8d, .type=IO_READ},
        {.addr=0x0681, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0163) {
    const struct CPU_State initial_cpu = {.pc=0x7019, .a=0x5b, .x=0x8f, .y=0x9e, .sp=0xaf, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x7019, .value=0x8d}, {.addr=0x701a, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x701b, .a=0x5b, .x=0x8f, .y=0xa7, .sp=0xaf, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x7019, .value=0x8d}, {.addr=0x701a, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x7019, .value=0x8d, .type=IO_READ},
        {.addr=0x701a, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0164) {
    const struct CPU_State initial_cpu = {.pc=0x8a10, .a=0xb0, .x=0x71, .y=0x08, .sp=0xf9, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x8a10, .value=0x8d}, {.addr=0x8a11, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x8a12, .a=0xb0, .x=0x71, .y=0xf7, .sp=0xf9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x8a10, .value=0x8d}, {.addr=0x8a11, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x8a10, .value=0x8d, .type=IO_READ},
        {.addr=0x8a11, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0165) {
    const struct CPU_State initial_cpu = {.pc=0x21a3, .a=0x20, .x=0x78, .y=0xb2, .sp=0x8a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x21a3, .value=0x8d}, {.addr=0x21a4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x21a5, .a=0x20, .x=0x78, .y=0xbd, .sp=0x8a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x21a3, .value=0x8d}, {.addr=0x21a4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x21a3, .value=0x8d, .type=IO_READ},
        {.addr=0x21a4, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0166) {
    const struct CPU_State initial_cpu = {.pc=0xbae3, .a=0x21, .x=0xd8, .y=0x48, .sp=0x4e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xbae3, .value=0x8d}, {.addr=0xbae4, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xbae5, .a=0x21, .x=0xd8, .y=0x0f, .sp=0x4e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xbae3, .value=0x8d}, {.addr=0xbae4, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xbae3, .value=0x8d, .type=IO_READ},
        {.addr=0xbae4, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0167) {
    const struct CPU_State initial_cpu = {.pc=0xc98b, .a=0x0d, .x=0x24, .y=0x74, .sp=0x10, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xc98b, .value=0x8d}, {.addr=0xc98c, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xc98d, .a=0x0d, .x=0x24, .y=0xe1, .sp=0x10, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xc98b, .value=0x8d}, {.addr=0xc98c, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xc98b, .value=0x8d, .type=IO_READ},
        {.addr=0xc98c, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0168) {
    const struct CPU_State initial_cpu = {.pc=0x6d64, .a=0xed, .x=0x62, .y=0xcf, .sp=0xab, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6d64, .value=0x8d}, {.addr=0x6d65, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x6d66, .a=0xed, .x=0x62, .y=0x6b, .sp=0xab, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6d64, .value=0x8d}, {.addr=0x6d65, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x6d64, .value=0x8d, .type=IO_READ},
        {.addr=0x6d65, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0169) {
    const struct CPU_State initial_cpu = {.pc=0xd0a1, .a=0xbb, .x=0x5b, .y=0xd0, .sp=0x12, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd0a1, .value=0x8d}, {.addr=0xd0a2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd0a3, .a=0xbb, .x=0x5b, .y=0xdd, .sp=0x12, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xd0a1, .value=0x8d}, {.addr=0xd0a2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd0a1, .value=0x8d, .type=IO_READ},
        {.addr=0xd0a2, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_016A) {
    const struct CPU_State initial_cpu = {.pc=0xec8f, .a=0xd8, .x=0xd1, .y=0x5b, .sp=0x17, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xec8f, .value=0x8d}, {.addr=0xec90, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xec91, .a=0xd8, .x=0xd1, .y=0x0e, .sp=0x17, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xec8f, .value=0x8d}, {.addr=0xec90, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xec8f, .value=0x8d, .type=IO_READ},
        {.addr=0xec90, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_016B) {
    const struct CPU_State initial_cpu = {.pc=0xef97, .a=0xf6, .x=0xa4, .y=0x48, .sp=0x54, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xef97, .value=0x8d}, {.addr=0xef98, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xef99, .a=0xf6, .x=0xa4, .y=0xa7, .sp=0x54, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xef97, .value=0x8d}, {.addr=0xef98, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xef97, .value=0x8d, .type=IO_READ},
        {.addr=0xef98, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_016C) {
    const struct CPU_State initial_cpu = {.pc=0x1e05, .a=0xb1, .x=0xba, .y=0xb5, .sp=0xe5, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x1e05, .value=0x8d}, {.addr=0x1e06, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x1e07, .a=0xb1, .x=0xba, .y=0x5f, .sp=0xe5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1e05, .value=0x8d}, {.addr=0x1e06, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x1e05, .value=0x8d, .type=IO_READ},
        {.addr=0x1e06, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_016D) {
    const struct CPU_State initial_cpu = {.pc=0xa0fe, .a=0x54, .x=0x6b, .y=0xf7, .sp=0x0a, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xa0fe, .value=0x8d}, {.addr=0xa0ff, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa100, .a=0x54, .x=0x6b, .y=0xfd, .sp=0x0a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa0fe, .value=0x8d}, {.addr=0xa0ff, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa0fe, .value=0x8d, .type=IO_READ},
        {.addr=0xa0ff, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_016E) {
    const struct CPU_State initial_cpu = {.pc=0x9cab, .a=0xa5, .x=0x03, .y=0x72, .sp=0x2a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x9cab, .value=0x8d}, {.addr=0x9cac, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x9cad, .a=0xa5, .x=0x03, .y=0x41, .sp=0x2a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x9cab, .value=0x8d}, {.addr=0x9cac, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x9cab, .value=0x8d, .type=IO_READ},
        {.addr=0x9cac, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_016F) {
    const struct CPU_State initial_cpu = {.pc=0xfa69, .a=0xb4, .x=0x9e, .y=0xf1, .sp=0xe0, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xfa69, .value=0x8d}, {.addr=0xfa6a, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xfa6b, .a=0xb4, .x=0x9e, .y=0x0b, .sp=0xe0, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfa69, .value=0x8d}, {.addr=0xfa6a, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xfa69, .value=0x8d, .type=IO_READ},
        {.addr=0xfa6a, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0170) {
    const struct CPU_State initial_cpu = {.pc=0x97ee, .a=0xd0, .x=0x39, .y=0xb6, .sp=0x22, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x97ee, .value=0x8d}, {.addr=0x97ef, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x97f0, .a=0xd0, .x=0x39, .y=0xd0, .sp=0x22, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x97ee, .value=0x8d}, {.addr=0x97ef, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x97ee, .value=0x8d, .type=IO_READ},
        {.addr=0x97ef, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0171) {
    const struct CPU_State initial_cpu = {.pc=0xf775, .a=0xc1, .x=0x98, .y=0x5f, .sp=0x52, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xf775, .value=0x8d}, {.addr=0xf776, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xf777, .a=0xc1, .x=0x98, .y=0x5b, .sp=0x52, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xf775, .value=0x8d}, {.addr=0xf776, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xf775, .value=0x8d, .type=IO_READ},
        {.addr=0xf776, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0172) {
    const struct CPU_State initial_cpu = {.pc=0x43f5, .a=0xe4, .x=0xd6, .y=0xe4, .sp=0x47, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x43f5, .value=0x8d}, {.addr=0x43f6, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x43f7, .a=0xe4, .x=0xd6, .y=0x13, .sp=0x47, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x43f5, .value=0x8d}, {.addr=0x43f6, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x43f5, .value=0x8d, .type=IO_READ},
        {.addr=0x43f6, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0173) {
    const struct CPU_State initial_cpu = {.pc=0xd1de, .a=0x2d, .x=0x3c, .y=0xb7, .sp=0x0f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xd1de, .value=0x8d}, {.addr=0xd1df, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd1e0, .a=0x2d, .x=0x3c, .y=0xdc, .sp=0x0f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd1de, .value=0x8d}, {.addr=0xd1df, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd1de, .value=0x8d, .type=IO_READ},
        {.addr=0xd1df, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0174) {
    const struct CPU_State initial_cpu = {.pc=0x46fc, .a=0x63, .x=0xf7, .y=0xba, .sp=0xea, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x46fc, .value=0x8d}, {.addr=0x46fd, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x46fe, .a=0x63, .x=0xf7, .y=0x84, .sp=0xea, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x46fc, .value=0x8d}, {.addr=0x46fd, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x46fc, .value=0x8d, .type=IO_READ},
        {.addr=0x46fd, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0175) {
    const struct CPU_State initial_cpu = {.pc=0x6716, .a=0xf7, .x=0x24, .y=0xa8, .sp=0xf4, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x6716, .value=0x8d}, {.addr=0x6717, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x6718, .a=0xf7, .x=0x24, .y=0x28, .sp=0xf4, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6716, .value=0x8d}, {.addr=0x6717, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x6716, .value=0x8d, .type=IO_READ},
        {.addr=0x6717, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0176) {
    const struct CPU_State initial_cpu = {.pc=0xfd31, .a=0xf6, .x=0x38, .y=0x27, .sp=0xcf, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xfd31, .value=0x8d}, {.addr=0xfd32, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xfd33, .a=0xf6, .x=0x38, .y=0xf6, .sp=0xcf, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xfd31, .value=0x8d}, {.addr=0xfd32, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xfd31, .value=0x8d, .type=IO_READ},
        {.addr=0xfd32, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0177) {
    const struct CPU_State initial_cpu = {.pc=0x6fb7, .a=0x06, .x=0x19, .y=0xc4, .sp=0x12, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb7, .value=0x8d}, {.addr=0x6fb8, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x6fb9, .a=0x06, .x=0x19, .y=0x90, .sp=0x12, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6fb7, .value=0x8d}, {.addr=0x6fb8, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x6fb7, .value=0x8d, .type=IO_READ},
        {.addr=0x6fb8, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0178) {
    const struct CPU_State initial_cpu = {.pc=0x7968, .a=0x37, .x=0x69, .y=0xf8, .sp=0x40, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x7968, .value=0x8d}, {.addr=0x7969, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x796a, .a=0x37, .x=0x69, .y=0xfb, .sp=0x40, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x7968, .value=0x8d}, {.addr=0x7969, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x7968, .value=0x8d, .type=IO_READ},
        {.addr=0x7969, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0179) {
    const struct CPU_State initial_cpu = {.pc=0x9ffc, .a=0xfa, .x=0xd1, .y=0xbb, .sp=0x27, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x9ffc, .value=0x8d}, {.addr=0x9ffd, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x9ffe, .a=0xfa, .x=0xd1, .y=0x56, .sp=0x27, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9ffc, .value=0x8d}, {.addr=0x9ffd, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x9ffc, .value=0x8d, .type=IO_READ},
        {.addr=0x9ffd, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_017A) {
    const struct CPU_State initial_cpu = {.pc=0xf3e7, .a=0xce, .x=0x98, .y=0x09, .sp=0xbc, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xf3e7, .value=0x8d}, {.addr=0xf3e8, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xf3e9, .a=0xce, .x=0x98, .y=0x8d, .sp=0xbc, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf3e7, .value=0x8d}, {.addr=0xf3e8, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xf3e7, .value=0x8d, .type=IO_READ},
        {.addr=0xf3e8, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_017B) {
    const struct CPU_State initial_cpu = {.pc=0x60c7, .a=0x70, .x=0xbc, .y=0x2a, .sp=0x07, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x60c7, .value=0x8d}, {.addr=0x60c8, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x60c9, .a=0x70, .x=0xbc, .y=0x59, .sp=0x07, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x60c7, .value=0x8d}, {.addr=0x60c8, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x60c7, .value=0x8d, .type=IO_READ},
        {.addr=0x60c8, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_017C) {
    const struct CPU_State initial_cpu = {.pc=0xa14e, .a=0x27, .x=0xe1, .y=0x5e, .sp=0x36, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xa14e, .value=0x8d}, {.addr=0xa14f, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xa150, .a=0x27, .x=0xe1, .y=0x2f, .sp=0x36, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa14e, .value=0x8d}, {.addr=0xa14f, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xa14e, .value=0x8d, .type=IO_READ},
        {.addr=0xa14f, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_017D) {
    const struct CPU_State initial_cpu = {.pc=0xb847, .a=0xad, .x=0x79, .y=0x9e, .sp=0x7c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xb847, .value=0x8d}, {.addr=0xb848, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xb849, .a=0xad, .x=0x79, .y=0x74, .sp=0x7c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb847, .value=0x8d}, {.addr=0xb848, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xb847, .value=0x8d, .type=IO_READ},
        {.addr=0xb848, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_017E) {
    const struct CPU_State initial_cpu = {.pc=0x96c9, .a=0x1f, .x=0x5f, .y=0x8d, .sp=0x7c, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x96c9, .value=0x8d}, {.addr=0x96ca, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x96cb, .a=0x1f, .x=0x5f, .y=0x17, .sp=0x7c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x96c9, .value=0x8d}, {.addr=0x96ca, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x96c9, .value=0x8d, .type=IO_READ},
        {.addr=0x96ca, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_017F) {
    const struct CPU_State initial_cpu = {.pc=0xeeb2, .a=0x3f, .x=0x23, .y=0xde, .sp=0xa4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xeeb2, .value=0x8d}, {.addr=0xeeb3, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xeeb4, .a=0x3f, .x=0x23, .y=0xbe, .sp=0xa4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xeeb2, .value=0x8d}, {.addr=0xeeb3, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xeeb2, .value=0x8d, .type=IO_READ},
        {.addr=0xeeb3, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0180) {
    const struct CPU_State initial_cpu = {.pc=0x7167, .a=0x53, .x=0xd5, .y=0x94, .sp=0xde, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x7167, .value=0x8d}, {.addr=0x7168, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x7169, .a=0x53, .x=0xd5, .y=0x35, .sp=0xde, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7167, .value=0x8d}, {.addr=0x7168, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x7167, .value=0x8d, .type=IO_READ},
        {.addr=0x7168, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0181) {
    const struct CPU_State initial_cpu = {.pc=0x603e, .a=0xef, .x=0x3a, .y=0x27, .sp=0xfa, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x603e, .value=0x8d}, {.addr=0x603f, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x6040, .a=0xef, .x=0x3a, .y=0xd1, .sp=0xfa, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x603e, .value=0x8d}, {.addr=0x603f, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x603e, .value=0x8d, .type=IO_READ},
        {.addr=0x603f, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0182) {
    const struct CPU_State initial_cpu = {.pc=0xf6af, .a=0x05, .x=0x9d, .y=0x53, .sp=0x17, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xf6af, .value=0x8d}, {.addr=0xf6b0, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xf6b1, .a=0x05, .x=0x9d, .y=0x17, .sp=0x17, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf6af, .value=0x8d}, {.addr=0xf6b0, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xf6af, .value=0x8d, .type=IO_READ},
        {.addr=0xf6b0, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0183) {
    const struct CPU_State initial_cpu = {.pc=0xbe5a, .a=0x98, .x=0x48, .y=0x4b, .sp=0x7d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xbe5a, .value=0x8d}, {.addr=0xbe5b, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xbe5c, .a=0x98, .x=0x48, .y=0xff, .sp=0x7d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xbe5a, .value=0x8d}, {.addr=0xbe5b, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xbe5a, .value=0x8d, .type=IO_READ},
        {.addr=0xbe5b, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0184) {
    const struct CPU_State initial_cpu = {.pc=0x4040, .a=0x27, .x=0xba, .y=0xba, .sp=0x6c, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4040, .value=0x8d}, {.addr=0x4041, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x4042, .a=0x27, .x=0xba, .y=0x85, .sp=0x6c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4040, .value=0x8d}, {.addr=0x4041, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x4040, .value=0x8d, .type=IO_READ},
        {.addr=0x4041, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0185) {
    const struct CPU_State initial_cpu = {.pc=0x3079, .a=0xd4, .x=0x30, .y=0x46, .sp=0x9e, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x3079, .value=0x8d}, {.addr=0x307a, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x307b, .a=0xd4, .x=0x30, .y=0x42, .sp=0x9e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3079, .value=0x8d}, {.addr=0x307a, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x3079, .value=0x8d, .type=IO_READ},
        {.addr=0x307a, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0186) {
    const struct CPU_State initial_cpu = {.pc=0xcd54, .a=0x8d, .x=0xe2, .y=0x25, .sp=0x2b, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xcd54, .value=0x8d}, {.addr=0xcd55, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xcd56, .a=0x8d, .x=0xe2, .y=0x4c, .sp=0x2b, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xcd54, .value=0x8d}, {.addr=0xcd55, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xcd54, .value=0x8d, .type=IO_READ},
        {.addr=0xcd55, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0187) {
    const struct CPU_State initial_cpu = {.pc=0x125c, .a=0xff, .x=0x52, .y=0xb5, .sp=0xe1, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x125c, .value=0x8d}, {.addr=0x125d, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x125e, .a=0xff, .x=0x52, .y=0x5b, .sp=0xe1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x125c, .value=0x8d}, {.addr=0x125d, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x125c, .value=0x8d, .type=IO_READ},
        {.addr=0x125d, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0188) {
    const struct CPU_State initial_cpu = {.pc=0xfbe6, .a=0x85, .x=0x85, .y=0x51, .sp=0x67, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe6, .value=0x8d}, {.addr=0xfbe7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfbe8, .a=0x85, .x=0x85, .y=0x1c, .sp=0x67, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xfbe6, .value=0x8d}, {.addr=0xfbe7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfbe6, .value=0x8d, .type=IO_READ},
        {.addr=0xfbe7, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0189) {
    const struct CPU_State initial_cpu = {.pc=0x987a, .a=0xec, .x=0x90, .y=0xd9, .sp=0x80, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x987a, .value=0x8d}, {.addr=0x987b, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x987c, .a=0xec, .x=0x90, .y=0x7e, .sp=0x80, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x987a, .value=0x8d}, {.addr=0x987b, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x987a, .value=0x8d, .type=IO_READ},
        {.addr=0x987b, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_018A) {
    const struct CPU_State initial_cpu = {.pc=0x1c85, .a=0xe9, .x=0xfa, .y=0x1f, .sp=0x94, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x1c85, .value=0x8d}, {.addr=0x1c86, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x1c87, .a=0xe9, .x=0xfa, .y=0x84, .sp=0x94, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x1c85, .value=0x8d}, {.addr=0x1c86, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x1c85, .value=0x8d, .type=IO_READ},
        {.addr=0x1c86, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_018B) {
    const struct CPU_State initial_cpu = {.pc=0x7183, .a=0xd1, .x=0xc8, .y=0x4f, .sp=0x05, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x7183, .value=0x8d}, {.addr=0x7184, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x7185, .a=0xd1, .x=0xc8, .y=0x35, .sp=0x05, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x7183, .value=0x8d}, {.addr=0x7184, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x7183, .value=0x8d, .type=IO_READ},
        {.addr=0x7184, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_018C) {
    const struct CPU_State initial_cpu = {.pc=0x5576, .a=0x14, .x=0x27, .y=0xd4, .sp=0x07, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x5576, .value=0x8d}, {.addr=0x5577, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x5578, .a=0x14, .x=0x27, .y=0x8c, .sp=0x07, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x5576, .value=0x8d}, {.addr=0x5577, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x5576, .value=0x8d, .type=IO_READ},
        {.addr=0x5577, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_018D) {
    const struct CPU_State initial_cpu = {.pc=0x4172, .a=0xc2, .x=0x30, .y=0x8f, .sp=0x7f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x4172, .value=0x8d}, {.addr=0x4173, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x4174, .a=0xc2, .x=0x30, .y=0x68, .sp=0x7f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4172, .value=0x8d}, {.addr=0x4173, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x4172, .value=0x8d, .type=IO_READ},
        {.addr=0x4173, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_018E) {
    const struct CPU_State initial_cpu = {.pc=0x18a2, .a=0x2b, .x=0x03, .y=0xfe, .sp=0x5b, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x18a2, .value=0x8d}, {.addr=0x18a3, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x18a4, .a=0x2b, .x=0x03, .y=0xe5, .sp=0x5b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x18a2, .value=0x8d}, {.addr=0x18a3, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x18a2, .value=0x8d, .type=IO_READ},
        {.addr=0x18a3, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_018F) {
    const struct CPU_State initial_cpu = {.pc=0x208f, .a=0x57, .x=0x4f, .y=0xe5, .sp=0x4c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x208f, .value=0x8d}, {.addr=0x2090, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2091, .a=0x57, .x=0x4f, .y=0xae, .sp=0x4c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x208f, .value=0x8d}, {.addr=0x2090, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x208f, .value=0x8d, .type=IO_READ},
        {.addr=0x2090, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0190) {
    const struct CPU_State initial_cpu = {.pc=0x087e, .a=0xe4, .x=0x80, .y=0x2e, .sp=0x5b, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x087e, .value=0x8d}, {.addr=0x087f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0880, .a=0xe4, .x=0x80, .y=0x26, .sp=0x5b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x087e, .value=0x8d}, {.addr=0x087f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x087e, .value=0x8d, .type=IO_READ},
        {.addr=0x087f, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0191) {
    const struct CPU_State initial_cpu = {.pc=0x50eb, .a=0xd7, .x=0x7f, .y=0x51, .sp=0xd0, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x50eb, .value=0x8d}, {.addr=0x50ec, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x50ed, .a=0xd7, .x=0x7f, .y=0x8c, .sp=0xd0, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x50eb, .value=0x8d}, {.addr=0x50ec, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x50eb, .value=0x8d, .type=IO_READ},
        {.addr=0x50ec, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0192) {
    const struct CPU_State initial_cpu = {.pc=0xd3ec, .a=0x61, .x=0xe7, .y=0x31, .sp=0x2f, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xd3ec, .value=0x8d}, {.addr=0xd3ed, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xd3ee, .a=0x61, .x=0xe7, .y=0xb6, .sp=0x2f, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd3ec, .value=0x8d}, {.addr=0xd3ed, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xd3ec, .value=0x8d, .type=IO_READ},
        {.addr=0xd3ed, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0193) {
    const struct CPU_State initial_cpu = {.pc=0x80d2, .a=0xfe, .x=0x09, .y=0x0d, .sp=0xb9, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x80d2, .value=0x8d}, {.addr=0x80d3, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x80d4, .a=0xfe, .x=0x09, .y=0x48, .sp=0xb9, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x80d2, .value=0x8d}, {.addr=0x80d3, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x80d2, .value=0x8d, .type=IO_READ},
        {.addr=0x80d3, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0194) {
    const struct CPU_State initial_cpu = {.pc=0x3c66, .a=0x17, .x=0xbc, .y=0xdb, .sp=0xad, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x3c66, .value=0x8d}, {.addr=0x3c67, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3c68, .a=0x17, .x=0xbc, .y=0x46, .sp=0xad, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3c66, .value=0x8d}, {.addr=0x3c67, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3c66, .value=0x8d, .type=IO_READ},
        {.addr=0x3c67, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0195) {
    const struct CPU_State initial_cpu = {.pc=0xbe34, .a=0x7e, .x=0xb0, .y=0x43, .sp=0x36, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xbe34, .value=0x8d}, {.addr=0xbe35, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xbe36, .a=0x7e, .x=0xb0, .y=0x02, .sp=0x36, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xbe34, .value=0x8d}, {.addr=0xbe35, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xbe34, .value=0x8d, .type=IO_READ},
        {.addr=0xbe35, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0196) {
    const struct CPU_State initial_cpu = {.pc=0x033f, .a=0x2c, .x=0xb0, .y=0x4e, .sp=0x69, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x033f, .value=0x8d}, {.addr=0x0340, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x0341, .a=0x2c, .x=0xb0, .y=0x84, .sp=0x69, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x033f, .value=0x8d}, {.addr=0x0340, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x033f, .value=0x8d, .type=IO_READ},
        {.addr=0x0340, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0197) {
    const struct CPU_State initial_cpu = {.pc=0x6711, .a=0x49, .x=0x40, .y=0x09, .sp=0x79, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x6711, .value=0x8d}, {.addr=0x6712, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x6713, .a=0x49, .x=0x40, .y=0x76, .sp=0x79, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6711, .value=0x8d}, {.addr=0x6712, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x6711, .value=0x8d, .type=IO_READ},
        {.addr=0x6712, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0198) {
    const struct CPU_State initial_cpu = {.pc=0x227e, .a=0x06, .x=0x8c, .y=0x92, .sp=0x20, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x227e, .value=0x8d}, {.addr=0x227f, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x2280, .a=0x06, .x=0x8c, .y=0x0a, .sp=0x20, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x227e, .value=0x8d}, {.addr=0x227f, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x227e, .value=0x8d, .type=IO_READ},
        {.addr=0x227f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0199) {
    const struct CPU_State initial_cpu = {.pc=0xb2ce, .a=0xa4, .x=0x47, .y=0xfb, .sp=0xf1, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xb2ce, .value=0x8d}, {.addr=0xb2cf, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xb2d0, .a=0xa4, .x=0x47, .y=0xf4, .sp=0xf1, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb2ce, .value=0x8d}, {.addr=0xb2cf, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xb2ce, .value=0x8d, .type=IO_READ},
        {.addr=0xb2cf, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_019A) {
    const struct CPU_State initial_cpu = {.pc=0x1326, .a=0x6f, .x=0x14, .y=0x0e, .sp=0xf1, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x1326, .value=0x8d}, {.addr=0x1327, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1328, .a=0x6f, .x=0x14, .y=0x86, .sp=0xf1, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x1326, .value=0x8d}, {.addr=0x1327, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1326, .value=0x8d, .type=IO_READ},
        {.addr=0x1327, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_019B) {
    const struct CPU_State initial_cpu = {.pc=0x5c84, .a=0x85, .x=0x33, .y=0xc8, .sp=0xb7, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x5c84, .value=0x8d}, {.addr=0x5c85, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x5c86, .a=0x85, .x=0x33, .y=0x29, .sp=0xb7, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5c84, .value=0x8d}, {.addr=0x5c85, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x5c84, .value=0x8d, .type=IO_READ},
        {.addr=0x5c85, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_019C) {
    const struct CPU_State initial_cpu = {.pc=0x4341, .a=0x6c, .x=0x58, .y=0x10, .sp=0xbb, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x4341, .value=0x8d}, {.addr=0x4342, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x4343, .a=0x6c, .x=0x58, .y=0x2a, .sp=0xbb, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4341, .value=0x8d}, {.addr=0x4342, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x4341, .value=0x8d, .type=IO_READ},
        {.addr=0x4342, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_019D) {
    const struct CPU_State initial_cpu = {.pc=0x4aec, .a=0xf9, .x=0xae, .y=0x0d, .sp=0x80, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x4aec, .value=0x8d}, {.addr=0x4aed, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x4aee, .a=0xf9, .x=0xae, .y=0xe9, .sp=0x80, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x4aec, .value=0x8d}, {.addr=0x4aed, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x4aec, .value=0x8d, .type=IO_READ},
        {.addr=0x4aed, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_019E) {
    const struct CPU_State initial_cpu = {.pc=0x5cf4, .a=0xd8, .x=0xc4, .y=0x4a, .sp=0x0d, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5cf4, .value=0x8d}, {.addr=0x5cf5, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x5cf6, .a=0xd8, .x=0xc4, .y=0xc4, .sp=0x0d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5cf4, .value=0x8d}, {.addr=0x5cf5, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x5cf4, .value=0x8d, .type=IO_READ},
        {.addr=0x5cf5, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_019F) {
    const struct CPU_State initial_cpu = {.pc=0xac5f, .a=0xf2, .x=0x36, .y=0x6d, .sp=0xe1, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xac5f, .value=0x8d}, {.addr=0xac60, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xac61, .a=0xf2, .x=0x36, .y=0x76, .sp=0xe1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xac5f, .value=0x8d}, {.addr=0xac60, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xac5f, .value=0x8d, .type=IO_READ},
        {.addr=0xac60, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x5cda, .a=0x16, .x=0x1e, .y=0x05, .sp=0x5f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x5cda, .value=0x8d}, {.addr=0x5cdb, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x5cdc, .a=0x16, .x=0x1e, .y=0x69, .sp=0x5f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5cda, .value=0x8d}, {.addr=0x5cdb, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x5cda, .value=0x8d, .type=IO_READ},
        {.addr=0x5cdb, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xbbe5, .a=0xf7, .x=0xd6, .y=0xc5, .sp=0x5b, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xbbe5, .value=0x8d}, {.addr=0xbbe6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xbbe7, .a=0xf7, .x=0xd6, .y=0x0d, .sp=0x5b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xbbe5, .value=0x8d}, {.addr=0xbbe6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xbbe5, .value=0x8d, .type=IO_READ},
        {.addr=0xbbe6, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x09a0, .a=0x04, .x=0x69, .y=0xd8, .sp=0xef, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x09a0, .value=0x8d}, {.addr=0x09a1, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x09a2, .a=0x04, .x=0x69, .y=0x56, .sp=0xef, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x09a0, .value=0x8d}, {.addr=0x09a1, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x09a0, .value=0x8d, .type=IO_READ},
        {.addr=0x09a1, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x08b9, .a=0x83, .x=0xf2, .y=0x8e, .sp=0xf8, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x08b9, .value=0x8d}, {.addr=0x08ba, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x08bb, .a=0x83, .x=0xf2, .y=0xde, .sp=0xf8, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x08b9, .value=0x8d}, {.addr=0x08ba, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x08b9, .value=0x8d, .type=IO_READ},
        {.addr=0x08ba, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xc3bd, .a=0x91, .x=0x76, .y=0x39, .sp=0x6f, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xc3bd, .value=0x8d}, {.addr=0xc3be, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xc3bf, .a=0x91, .x=0x76, .y=0x3f, .sp=0x6f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc3bd, .value=0x8d}, {.addr=0xc3be, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xc3bd, .value=0x8d, .type=IO_READ},
        {.addr=0xc3be, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x95f2, .a=0x3c, .x=0x77, .y=0x05, .sp=0x68, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x95f2, .value=0x8d}, {.addr=0x95f3, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x95f4, .a=0x3c, .x=0x77, .y=0x1b, .sp=0x68, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x95f2, .value=0x8d}, {.addr=0x95f3, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x95f2, .value=0x8d, .type=IO_READ},
        {.addr=0x95f3, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x44de, .a=0x61, .x=0xeb, .y=0xfb, .sp=0xec, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x44de, .value=0x8d}, {.addr=0x44df, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x44e0, .a=0x61, .x=0xeb, .y=0x94, .sp=0xec, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x44de, .value=0x8d}, {.addr=0x44df, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x44de, .value=0x8d, .type=IO_READ},
        {.addr=0x44df, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x9a5d, .a=0xb6, .x=0x01, .y=0xe6, .sp=0x20, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x9a5d, .value=0x8d}, {.addr=0x9a5e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9a5f, .a=0xb6, .x=0x01, .y=0xa0, .sp=0x20, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x9a5d, .value=0x8d}, {.addr=0x9a5e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9a5d, .value=0x8d, .type=IO_READ},
        {.addr=0x9a5e, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x2203, .a=0xc2, .x=0x26, .y=0xc2, .sp=0xd0, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x2203, .value=0x8d}, {.addr=0x2204, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x2205, .a=0xc2, .x=0x26, .y=0xd5, .sp=0xd0, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2203, .value=0x8d}, {.addr=0x2204, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x2203, .value=0x8d, .type=IO_READ},
        {.addr=0x2204, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x5607, .a=0x99, .x=0x2e, .y=0x2b, .sp=0x82, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x5607, .value=0x8d}, {.addr=0x5608, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x5609, .a=0x99, .x=0x2e, .y=0x32, .sp=0x82, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x5607, .value=0x8d}, {.addr=0x5608, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x5607, .value=0x8d, .type=IO_READ},
        {.addr=0x5608, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xa33b, .a=0x14, .x=0x21, .y=0x1a, .sp=0x23, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xa33b, .value=0x8d}, {.addr=0xa33c, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xa33d, .a=0x14, .x=0x21, .y=0x14, .sp=0x23, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xa33b, .value=0x8d}, {.addr=0xa33c, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xa33b, .value=0x8d, .type=IO_READ},
        {.addr=0xa33c, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x2b9b, .a=0x58, .x=0x1c, .y=0x94, .sp=0x97, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x2b9b, .value=0x8d}, {.addr=0x2b9c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2b9d, .a=0x58, .x=0x1c, .y=0x5c, .sp=0x97, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2b9b, .value=0x8d}, {.addr=0x2b9c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2b9b, .value=0x8d, .type=IO_READ},
        {.addr=0x2b9c, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xa5f6, .a=0x45, .x=0x84, .y=0x11, .sp=0x73, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xa5f6, .value=0x8d}, {.addr=0xa5f7, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xa5f8, .a=0x45, .x=0x84, .y=0xf9, .sp=0x73, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa5f6, .value=0x8d}, {.addr=0xa5f7, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xa5f6, .value=0x8d, .type=IO_READ},
        {.addr=0xa5f7, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xdecb, .a=0x32, .x=0x8e, .y=0x59, .sp=0xf4, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xdecb, .value=0x8d}, {.addr=0xdecc, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xdecd, .a=0x32, .x=0x8e, .y=0x95, .sp=0xf4, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xdecb, .value=0x8d}, {.addr=0xdecc, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xdecb, .value=0x8d, .type=IO_READ},
        {.addr=0xdecc, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x3284, .a=0x2d, .x=0x89, .y=0x6a, .sp=0xcf, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x3284, .value=0x8d}, {.addr=0x3285, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x3286, .a=0x2d, .x=0x89, .y=0xa4, .sp=0xcf, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3284, .value=0x8d}, {.addr=0x3285, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x3284, .value=0x8d, .type=IO_READ},
        {.addr=0x3285, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x0832, .a=0xa1, .x=0x3e, .y=0x99, .sp=0x12, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0832, .value=0x8d}, {.addr=0x0833, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0834, .a=0xa1, .x=0x3e, .y=0xfc, .sp=0x12, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0832, .value=0x8d}, {.addr=0x0833, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0832, .value=0x8d, .type=IO_READ},
        {.addr=0x0833, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x5945, .a=0xe4, .x=0x1b, .y=0xcf, .sp=0x83, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x5945, .value=0x8d}, {.addr=0x5946, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x5947, .a=0xe4, .x=0x1b, .y=0xf9, .sp=0x83, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x5945, .value=0x8d}, {.addr=0x5946, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x5945, .value=0x8d, .type=IO_READ},
        {.addr=0x5946, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x3198, .a=0x68, .x=0x59, .y=0x32, .sp=0x32, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x3198, .value=0x8d}, {.addr=0x3199, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x319a, .a=0x68, .x=0x59, .y=0xf2, .sp=0x32, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x3198, .value=0x8d}, {.addr=0x3199, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x3198, .value=0x8d, .type=IO_READ},
        {.addr=0x3199, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x4e1b, .a=0x04, .x=0x67, .y=0x2f, .sp=0x07, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x4e1b, .value=0x8d}, {.addr=0x4e1c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4e1d, .a=0x04, .x=0x67, .y=0xfd, .sp=0x07, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4e1b, .value=0x8d}, {.addr=0x4e1c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4e1b, .value=0x8d, .type=IO_READ},
        {.addr=0x4e1c, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xfd93, .a=0x89, .x=0xe6, .y=0x6e, .sp=0xca, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xfd93, .value=0x8d}, {.addr=0xfd94, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfd95, .a=0x89, .x=0xe6, .y=0x5c, .sp=0xca, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xfd93, .value=0x8d}, {.addr=0xfd94, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfd93, .value=0x8d, .type=IO_READ},
        {.addr=0xfd94, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xffa8, .a=0x65, .x=0xb8, .y=0x3e, .sp=0x0f, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xffa8, .value=0x8d}, {.addr=0xffa9, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xffaa, .a=0x65, .x=0xb8, .y=0x62, .sp=0x0f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xffa8, .value=0x8d}, {.addr=0xffa9, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xffa8, .value=0x8d, .type=IO_READ},
        {.addr=0xffa9, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x883d, .a=0x8e, .x=0x88, .y=0x79, .sp=0x61, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x883d, .value=0x8d}, {.addr=0x883e, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x883f, .a=0x8e, .x=0x88, .y=0xa3, .sp=0x61, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x883d, .value=0x8d}, {.addr=0x883e, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x883d, .value=0x8d, .type=IO_READ},
        {.addr=0x883e, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xa568, .a=0xec, .x=0x5e, .y=0x23, .sp=0x1d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xa568, .value=0x8d}, {.addr=0xa569, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xa56a, .a=0xec, .x=0x5e, .y=0x7a, .sp=0x1d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa568, .value=0x8d}, {.addr=0xa569, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xa568, .value=0x8d, .type=IO_READ},
        {.addr=0xa569, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xee47, .a=0xdf, .x=0x87, .y=0x5b, .sp=0xeb, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xee47, .value=0x8d}, {.addr=0xee48, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xee49, .a=0xdf, .x=0x87, .y=0x3f, .sp=0xeb, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xee47, .value=0x8d}, {.addr=0xee48, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xee47, .value=0x8d, .type=IO_READ},
        {.addr=0xee48, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x443f, .a=0x76, .x=0x38, .y=0xbf, .sp=0xa3, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x443f, .value=0x8d}, {.addr=0x4440, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x4441, .a=0x76, .x=0x38, .y=0x59, .sp=0xa3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x443f, .value=0x8d}, {.addr=0x4440, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x443f, .value=0x8d, .type=IO_READ},
        {.addr=0x4440, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x04af, .a=0xdc, .x=0x35, .y=0x2b, .sp=0xe9, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x04af, .value=0x8d}, {.addr=0x04b0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x04b1, .a=0xdc, .x=0x35, .y=0xe6, .sp=0xe9, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x04af, .value=0x8d}, {.addr=0x04b0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x04af, .value=0x8d, .type=IO_READ},
        {.addr=0x04b0, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x64a1, .a=0x31, .x=0xa8, .y=0x94, .sp=0xbc, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x64a1, .value=0x8d}, {.addr=0x64a2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x64a3, .a=0x31, .x=0xa8, .y=0x1d, .sp=0xbc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x64a1, .value=0x8d}, {.addr=0x64a2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x64a1, .value=0x8d, .type=IO_READ},
        {.addr=0x64a2, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x9cb9, .a=0x11, .x=0x5d, .y=0xb3, .sp=0xdb, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x9cb9, .value=0x8d}, {.addr=0x9cba, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x9cbb, .a=0x11, .x=0x5d, .y=0xb3, .sp=0xdb, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x9cb9, .value=0x8d}, {.addr=0x9cba, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x9cb9, .value=0x8d, .type=IO_READ},
        {.addr=0x9cba, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x4492, .a=0xd8, .x=0x87, .y=0x82, .sp=0xd2, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x4492, .value=0x8d}, {.addr=0x4493, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x4494, .a=0xd8, .x=0x87, .y=0x18, .sp=0xd2, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4492, .value=0x8d}, {.addr=0x4493, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x4492, .value=0x8d, .type=IO_READ},
        {.addr=0x4493, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x47ea, .a=0xde, .x=0xb2, .y=0x59, .sp=0x99, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x47ea, .value=0x8d}, {.addr=0x47eb, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x47ec, .a=0xde, .x=0xb2, .y=0x01, .sp=0x99, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x47ea, .value=0x8d}, {.addr=0x47eb, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x47ea, .value=0x8d, .type=IO_READ},
        {.addr=0x47eb, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x8b42, .a=0xec, .x=0x92, .y=0xd8, .sp=0x7e, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x8b42, .value=0x8d}, {.addr=0x8b43, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8b44, .a=0xec, .x=0x92, .y=0x86, .sp=0x7e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x8b42, .value=0x8d}, {.addr=0x8b43, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8b42, .value=0x8d, .type=IO_READ},
        {.addr=0x8b43, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xbed3, .a=0x61, .x=0x86, .y=0x3c, .sp=0x8f, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xbed3, .value=0x8d}, {.addr=0xbed4, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xbed5, .a=0x61, .x=0x86, .y=0xac, .sp=0x8f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xbed3, .value=0x8d}, {.addr=0xbed4, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xbed3, .value=0x8d, .type=IO_READ},
        {.addr=0xbed4, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xc60b, .a=0x28, .x=0xf1, .y=0xd1, .sp=0xb7, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xc60b, .value=0x8d}, {.addr=0xc60c, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xc60d, .a=0x28, .x=0xf1, .y=0xa1, .sp=0xb7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc60b, .value=0x8d}, {.addr=0xc60c, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xc60b, .value=0x8d, .type=IO_READ},
        {.addr=0xc60c, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xa993, .a=0xb5, .x=0x13, .y=0xb3, .sp=0xa3, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xa993, .value=0x8d}, {.addr=0xa994, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa995, .a=0xb5, .x=0x13, .y=0xbe, .sp=0xa3, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa993, .value=0x8d}, {.addr=0xa994, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa993, .value=0x8d, .type=IO_READ},
        {.addr=0xa994, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x3e0d, .a=0x43, .x=0x48, .y=0x02, .sp=0xc5, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x3e0d, .value=0x8d}, {.addr=0x3e0e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3e0f, .a=0x43, .x=0x48, .y=0xfd, .sp=0xc5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3e0d, .value=0x8d}, {.addr=0x3e0e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3e0d, .value=0x8d, .type=IO_READ},
        {.addr=0x3e0e, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x1707, .a=0x2a, .x=0xb3, .y=0x4f, .sp=0xf7, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x1707, .value=0x8d}, {.addr=0x1708, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x1709, .a=0x2a, .x=0xb3, .y=0xda, .sp=0xf7, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x1707, .value=0x8d}, {.addr=0x1708, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x1707, .value=0x8d, .type=IO_READ},
        {.addr=0x1708, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xeafd, .a=0x2d, .x=0x70, .y=0x34, .sp=0xbd, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xeafd, .value=0x8d}, {.addr=0xeafe, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xeaff, .a=0x2d, .x=0x70, .y=0xff, .sp=0xbd, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xeafd, .value=0x8d}, {.addr=0xeafe, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xeafd, .value=0x8d, .type=IO_READ},
        {.addr=0xeafe, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xf643, .a=0xd8, .x=0xb9, .y=0xf8, .sp=0x58, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xf643, .value=0x8d}, {.addr=0xf644, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xf645, .a=0xd8, .x=0xb9, .y=0x74, .sp=0x58, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xf643, .value=0x8d}, {.addr=0xf644, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xf643, .value=0x8d, .type=IO_READ},
        {.addr=0xf644, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x14df, .a=0xde, .x=0x46, .y=0x6a, .sp=0x86, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x14df, .value=0x8d}, {.addr=0x14e0, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x14e1, .a=0xde, .x=0x46, .y=0x68, .sp=0x86, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x14df, .value=0x8d}, {.addr=0x14e0, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x14df, .value=0x8d, .type=IO_READ},
        {.addr=0x14e0, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xe2cd, .a=0x09, .x=0x65, .y=0xe6, .sp=0x4a, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xe2cd, .value=0x8d}, {.addr=0xe2ce, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xe2cf, .a=0x09, .x=0x65, .y=0x21, .sp=0x4a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe2cd, .value=0x8d}, {.addr=0xe2ce, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xe2cd, .value=0x8d, .type=IO_READ},
        {.addr=0xe2ce, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x7e49, .a=0xdd, .x=0x50, .y=0xa7, .sp=0x96, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x7e49, .value=0x8d}, {.addr=0x7e4a, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x7e4b, .a=0xdd, .x=0x50, .y=0x58, .sp=0x96, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x7e49, .value=0x8d}, {.addr=0x7e4a, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x7e49, .value=0x8d, .type=IO_READ},
        {.addr=0x7e4a, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xb2ae, .a=0x3f, .x=0x02, .y=0x14, .sp=0x88, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xb2ae, .value=0x8d}, {.addr=0xb2af, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xb2b0, .a=0x3f, .x=0x02, .y=0xf5, .sp=0x88, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xb2ae, .value=0x8d}, {.addr=0xb2af, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xb2ae, .value=0x8d, .type=IO_READ},
        {.addr=0xb2af, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x7cb9, .a=0x01, .x=0x14, .y=0x2f, .sp=0x5d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x7cb9, .value=0x8d}, {.addr=0x7cba, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x7cbb, .a=0x01, .x=0x14, .y=0x6f, .sp=0x5d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7cb9, .value=0x8d}, {.addr=0x7cba, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x7cb9, .value=0x8d, .type=IO_READ},
        {.addr=0x7cba, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xeaca, .a=0xa1, .x=0xb2, .y=0x83, .sp=0x9e, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xeaca, .value=0x8d}, {.addr=0xeacb, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xeacc, .a=0xa1, .x=0xb2, .y=0xa7, .sp=0x9e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xeaca, .value=0x8d}, {.addr=0xeacb, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xeaca, .value=0x8d, .type=IO_READ},
        {.addr=0xeacb, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x8337, .a=0x71, .x=0x5f, .y=0x7e, .sp=0x7e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x8337, .value=0x8d}, {.addr=0x8338, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x8339, .a=0x71, .x=0x5f, .y=0x69, .sp=0x7e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x8337, .value=0x8d}, {.addr=0x8338, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x8337, .value=0x8d, .type=IO_READ},
        {.addr=0x8338, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xba5b, .a=0xea, .x=0xf0, .y=0xfc, .sp=0x5a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xba5b, .value=0x8d}, {.addr=0xba5c, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xba5d, .a=0xea, .x=0xf0, .y=0x61, .sp=0x5a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xba5b, .value=0x8d}, {.addr=0xba5c, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xba5b, .value=0x8d, .type=IO_READ},
        {.addr=0xba5c, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xeb72, .a=0x85, .x=0xbb, .y=0x5d, .sp=0x78, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xeb72, .value=0x8d}, {.addr=0xeb73, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xeb74, .a=0x85, .x=0xbb, .y=0xe7, .sp=0x78, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xeb72, .value=0x8d}, {.addr=0xeb73, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xeb72, .value=0x8d, .type=IO_READ},
        {.addr=0xeb73, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xb9eb, .a=0xd7, .x=0x0e, .y=0x5a, .sp=0x48, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xb9eb, .value=0x8d}, {.addr=0xb9ec, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xb9ed, .a=0xd7, .x=0x0e, .y=0x18, .sp=0x48, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xb9eb, .value=0x8d}, {.addr=0xb9ec, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xb9eb, .value=0x8d, .type=IO_READ},
        {.addr=0xb9ec, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x254c, .a=0xb5, .x=0x95, .y=0x93, .sp=0x8b, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x254c, .value=0x8d}, {.addr=0x254d, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x254e, .a=0xb5, .x=0x95, .y=0x7e, .sp=0x8b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x254c, .value=0x8d}, {.addr=0x254d, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x254c, .value=0x8d, .type=IO_READ},
        {.addr=0x254d, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xb814, .a=0xd1, .x=0xfc, .y=0x36, .sp=0xf3, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xb814, .value=0x8d}, {.addr=0xb815, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xb816, .a=0xd1, .x=0xfc, .y=0x0a, .sp=0xf3, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb814, .value=0x8d}, {.addr=0xb815, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xb814, .value=0x8d, .type=IO_READ},
        {.addr=0xb815, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xe0f1, .a=0xcd, .x=0xf7, .y=0x1d, .sp=0x0c, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f1, .value=0x8d}, {.addr=0xe0f2, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xe0f3, .a=0xcd, .x=0xf7, .y=0x98, .sp=0x0c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe0f1, .value=0x8d}, {.addr=0xe0f2, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xe0f1, .value=0x8d, .type=IO_READ},
        {.addr=0xe0f2, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x71d7, .a=0x95, .x=0xd6, .y=0xd0, .sp=0x9c, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x71d7, .value=0x8d}, {.addr=0x71d8, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x71d9, .a=0x95, .x=0xd6, .y=0x8c, .sp=0x9c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x71d7, .value=0x8d}, {.addr=0x71d8, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x71d7, .value=0x8d, .type=IO_READ},
        {.addr=0x71d8, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xf70b, .a=0xaf, .x=0xec, .y=0x75, .sp=0x84, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xf70b, .value=0x8d}, {.addr=0xf70c, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xf70d, .a=0xaf, .x=0xec, .y=0x02, .sp=0x84, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf70b, .value=0x8d}, {.addr=0xf70c, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xf70b, .value=0x8d, .type=IO_READ},
        {.addr=0xf70c, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x499e, .a=0xe5, .x=0xd3, .y=0xd3, .sp=0xf7, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x499e, .value=0x8d}, {.addr=0x499f, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x49a0, .a=0xe5, .x=0xd3, .y=0x96, .sp=0xf7, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x499e, .value=0x8d}, {.addr=0x499f, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x499e, .value=0x8d, .type=IO_READ},
        {.addr=0x499f, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xe895, .a=0xe2, .x=0xcf, .y=0xed, .sp=0x2e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xe895, .value=0x8d}, {.addr=0xe896, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xe897, .a=0xe2, .x=0xcf, .y=0x8b, .sp=0x2e, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xe895, .value=0x8d}, {.addr=0xe896, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xe895, .value=0x8d, .type=IO_READ},
        {.addr=0xe896, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xe3e5, .a=0xc8, .x=0x45, .y=0xe8, .sp=0x24, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e5, .value=0x8d}, {.addr=0xe3e6, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xe3e7, .a=0xc8, .x=0x45, .y=0x97, .sp=0x24, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe3e5, .value=0x8d}, {.addr=0xe3e6, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xe3e5, .value=0x8d, .type=IO_READ},
        {.addr=0xe3e6, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xd1c8, .a=0x53, .x=0xa6, .y=0x72, .sp=0x07, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xd1c8, .value=0x8d}, {.addr=0xd1c9, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xd1ca, .a=0x53, .x=0xa6, .y=0x1e, .sp=0x07, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xd1c8, .value=0x8d}, {.addr=0xd1c9, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xd1c8, .value=0x8d, .type=IO_READ},
        {.addr=0xd1c9, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x92ba, .a=0xd2, .x=0xf6, .y=0x45, .sp=0x57, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x92ba, .value=0x8d}, {.addr=0x92bb, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x92bc, .a=0xd2, .x=0xf6, .y=0x71, .sp=0x57, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x92ba, .value=0x8d}, {.addr=0x92bb, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x92ba, .value=0x8d, .type=IO_READ},
        {.addr=0x92bb, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x32a1, .a=0x4c, .x=0x37, .y=0x57, .sp=0xb0, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x32a1, .value=0x8d}, {.addr=0x32a2, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x32a3, .a=0x4c, .x=0x37, .y=0x71, .sp=0xb0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x32a1, .value=0x8d}, {.addr=0x32a2, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x32a1, .value=0x8d, .type=IO_READ},
        {.addr=0x32a2, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x05fe, .a=0x8d, .x=0x22, .y=0x32, .sp=0x2b, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x05fe, .value=0x8d}, {.addr=0x05ff, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x0600, .a=0x8d, .x=0x22, .y=0x93, .sp=0x2b, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x05fe, .value=0x8d}, {.addr=0x05ff, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x05fe, .value=0x8d, .type=IO_READ},
        {.addr=0x05ff, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x3dc6, .a=0xea, .x=0xec, .y=0xd0, .sp=0x4c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x3dc6, .value=0x8d}, {.addr=0x3dc7, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x3dc8, .a=0xea, .x=0xec, .y=0x64, .sp=0x4c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3dc6, .value=0x8d}, {.addr=0x3dc7, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x3dc6, .value=0x8d, .type=IO_READ},
        {.addr=0x3dc7, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xa815, .a=0xbf, .x=0x57, .y=0x8d, .sp=0x25, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xa815, .value=0x8d}, {.addr=0xa816, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xa817, .a=0xbf, .x=0x57, .y=0xd4, .sp=0x25, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xa815, .value=0x8d}, {.addr=0xa816, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xa815, .value=0x8d, .type=IO_READ},
        {.addr=0xa816, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xcc3b, .a=0xf3, .x=0x7b, .y=0x56, .sp=0xad, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xcc3b, .value=0x8d}, {.addr=0xcc3c, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xcc3d, .a=0xf3, .x=0x7b, .y=0x39, .sp=0xad, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xcc3b, .value=0x8d}, {.addr=0xcc3c, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xcc3b, .value=0x8d, .type=IO_READ},
        {.addr=0xcc3c, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x40e7, .a=0x64, .x=0x3f, .y=0xf1, .sp=0x1b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x40e7, .value=0x8d}, {.addr=0x40e8, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x40e9, .a=0x64, .x=0x3f, .y=0x44, .sp=0x1b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x40e7, .value=0x8d}, {.addr=0x40e8, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x40e7, .value=0x8d, .type=IO_READ},
        {.addr=0x40e8, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xde63, .a=0xf5, .x=0x6c, .y=0x8c, .sp=0x98, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xde63, .value=0x8d}, {.addr=0xde64, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xde65, .a=0xf5, .x=0x6c, .y=0x64, .sp=0x98, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xde63, .value=0x8d}, {.addr=0xde64, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xde63, .value=0x8d, .type=IO_READ},
        {.addr=0xde64, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x775d, .a=0x4a, .x=0xbe, .y=0x6f, .sp=0x5f, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x775d, .value=0x8d}, {.addr=0x775e, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x775f, .a=0x4a, .x=0xbe, .y=0x14, .sp=0x5f, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x775d, .value=0x8d}, {.addr=0x775e, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x775d, .value=0x8d, .type=IO_READ},
        {.addr=0x775e, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x1d3f, .a=0x74, .x=0xc2, .y=0x64, .sp=0xd6, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1d3f, .value=0x8d}, {.addr=0x1d40, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x1d41, .a=0x74, .x=0xc2, .y=0xf6, .sp=0xd6, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x1d3f, .value=0x8d}, {.addr=0x1d40, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x1d3f, .value=0x8d, .type=IO_READ},
        {.addr=0x1d40, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xc285, .a=0xd1, .x=0x0b, .y=0x8c, .sp=0xf0, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xc285, .value=0x8d}, {.addr=0xc286, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xc287, .a=0xd1, .x=0x0b, .y=0x8b, .sp=0xf0, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc285, .value=0x8d}, {.addr=0xc286, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xc285, .value=0x8d, .type=IO_READ},
        {.addr=0xc286, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xf8a8, .a=0x7e, .x=0x03, .y=0x93, .sp=0xf3, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xf8a8, .value=0x8d}, {.addr=0xf8a9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf8aa, .a=0x7e, .x=0x03, .y=0x5c, .sp=0xf3, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf8a8, .value=0x8d}, {.addr=0xf8a9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf8a8, .value=0x8d, .type=IO_READ},
        {.addr=0xf8a9, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x3bb2, .a=0x26, .x=0xfd, .y=0x57, .sp=0x11, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x3bb2, .value=0x8d}, {.addr=0x3bb3, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x3bb4, .a=0x26, .x=0xfd, .y=0x16, .sp=0x11, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x3bb2, .value=0x8d}, {.addr=0x3bb3, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x3bb2, .value=0x8d, .type=IO_READ},
        {.addr=0x3bb3, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x0426, .a=0x17, .x=0xe4, .y=0x98, .sp=0xe0, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0426, .value=0x8d}, {.addr=0x0427, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x0428, .a=0x17, .x=0xe4, .y=0xa9, .sp=0xe0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0426, .value=0x8d}, {.addr=0x0427, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x0426, .value=0x8d, .type=IO_READ},
        {.addr=0x0427, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x9778, .a=0x46, .x=0x9a, .y=0xa4, .sp=0x36, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x9778, .value=0x8d}, {.addr=0x9779, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x977a, .a=0x46, .x=0x9a, .y=0xb3, .sp=0x36, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9778, .value=0x8d}, {.addr=0x9779, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x9778, .value=0x8d, .type=IO_READ},
        {.addr=0x9779, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xd785, .a=0x90, .x=0xa7, .y=0x86, .sp=0x60, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xd785, .value=0x8d}, {.addr=0xd786, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xd787, .a=0x90, .x=0xa7, .y=0xd8, .sp=0x60, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd785, .value=0x8d}, {.addr=0xd786, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xd785, .value=0x8d, .type=IO_READ},
        {.addr=0xd786, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xa35d, .a=0xc1, .x=0xa5, .y=0xaa, .sp=0x12, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xa35d, .value=0x8d}, {.addr=0xa35e, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xa35f, .a=0xc1, .x=0xa5, .y=0x01, .sp=0x12, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xa35d, .value=0x8d}, {.addr=0xa35e, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xa35d, .value=0x8d, .type=IO_READ},
        {.addr=0xa35e, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x8e05, .a=0xf4, .x=0x50, .y=0xd2, .sp=0x7a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x8e05, .value=0x8d}, {.addr=0x8e06, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x8e07, .a=0xf4, .x=0x50, .y=0xe4, .sp=0x7a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8e05, .value=0x8d}, {.addr=0x8e06, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x8e05, .value=0x8d, .type=IO_READ},
        {.addr=0x8e06, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x7995, .a=0x28, .x=0x3c, .y=0x94, .sp=0x99, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7995, .value=0x8d}, {.addr=0x7996, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x7997, .a=0x28, .x=0x3c, .y=0x02, .sp=0x99, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7995, .value=0x8d}, {.addr=0x7996, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x7995, .value=0x8d, .type=IO_READ},
        {.addr=0x7996, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x52df, .a=0xb2, .x=0x0c, .y=0x1b, .sp=0x60, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x52df, .value=0x8d}, {.addr=0x52e0, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x52e1, .a=0xb2, .x=0x0c, .y=0xa4, .sp=0x60, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x52df, .value=0x8d}, {.addr=0x52e0, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x52df, .value=0x8d, .type=IO_READ},
        {.addr=0x52e0, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x65a2, .a=0xa7, .x=0xf8, .y=0xd5, .sp=0x05, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x65a2, .value=0x8d}, {.addr=0x65a3, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x65a4, .a=0xa7, .x=0xf8, .y=0xac, .sp=0x05, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x65a2, .value=0x8d}, {.addr=0x65a3, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x65a2, .value=0x8d, .type=IO_READ},
        {.addr=0x65a3, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x647b, .a=0x0a, .x=0x8d, .y=0x29, .sp=0x5c, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x647b, .value=0x8d}, {.addr=0x647c, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x647d, .a=0x0a, .x=0x8d, .y=0xe8, .sp=0x5c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x647b, .value=0x8d}, {.addr=0x647c, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x647b, .value=0x8d, .type=IO_READ},
        {.addr=0x647c, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xaa88, .a=0x65, .x=0x31, .y=0xf1, .sp=0x75, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xaa88, .value=0x8d}, {.addr=0xaa89, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xaa8a, .a=0x65, .x=0x31, .y=0x05, .sp=0x75, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xaa88, .value=0x8d}, {.addr=0xaa89, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xaa88, .value=0x8d, .type=IO_READ},
        {.addr=0xaa89, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x16b3, .a=0xb1, .x=0x7d, .y=0x9b, .sp=0xba, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x16b3, .value=0x8d}, {.addr=0x16b4, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x16b5, .a=0xb1, .x=0x7d, .y=0xaa, .sp=0xba, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x16b3, .value=0x8d}, {.addr=0x16b4, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x16b3, .value=0x8d, .type=IO_READ},
        {.addr=0x16b4, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x340e, .a=0x9c, .x=0x8d, .y=0x5e, .sp=0xa9, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x340e, .value=0x8d}, {.addr=0x340f, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x3410, .a=0x9c, .x=0x8d, .y=0xb2, .sp=0xa9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x340e, .value=0x8d}, {.addr=0x340f, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x340e, .value=0x8d, .type=IO_READ},
        {.addr=0x340f, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x898f, .a=0x41, .x=0xff, .y=0xa1, .sp=0xe1, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x898f, .value=0x8d}, {.addr=0x8990, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x8991, .a=0x41, .x=0xff, .y=0x21, .sp=0xe1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x898f, .value=0x8d}, {.addr=0x8990, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x898f, .value=0x8d, .type=IO_READ},
        {.addr=0x8990, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x9eec, .a=0xe7, .x=0x81, .y=0x95, .sp=0xc7, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x9eec, .value=0x8d}, {.addr=0x9eed, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x9eee, .a=0xe7, .x=0x81, .y=0x71, .sp=0xc7, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x9eec, .value=0x8d}, {.addr=0x9eed, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x9eec, .value=0x8d, .type=IO_READ},
        {.addr=0x9eed, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x71eb, .a=0xde, .x=0x72, .y=0xb0, .sp=0x87, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x71eb, .value=0x8d}, {.addr=0x71ec, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x71ed, .a=0xde, .x=0x72, .y=0x9c, .sp=0x87, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x71eb, .value=0x8d}, {.addr=0x71ec, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x71eb, .value=0x8d, .type=IO_READ},
        {.addr=0x71ec, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x5bc6, .a=0x12, .x=0x42, .y=0x23, .sp=0xc4, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x5bc6, .value=0x8d}, {.addr=0x5bc7, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x5bc8, .a=0x12, .x=0x42, .y=0x19, .sp=0xc4, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x5bc6, .value=0x8d}, {.addr=0x5bc7, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x5bc6, .value=0x8d, .type=IO_READ},
        {.addr=0x5bc7, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x0857, .a=0xe8, .x=0x1b, .y=0x77, .sp=0x30, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0857, .value=0x8d}, {.addr=0x0858, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x0859, .a=0xe8, .x=0x1b, .y=0x33, .sp=0x30, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0857, .value=0x8d}, {.addr=0x0858, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x0857, .value=0x8d, .type=IO_READ},
        {.addr=0x0858, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x5821, .a=0x20, .x=0x5e, .y=0x59, .sp=0x73, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x5821, .value=0x8d}, {.addr=0x5822, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x5823, .a=0x20, .x=0x5e, .y=0x4a, .sp=0x73, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x5821, .value=0x8d}, {.addr=0x5822, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x5821, .value=0x8d, .type=IO_READ},
        {.addr=0x5822, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x1848, .a=0x65, .x=0x12, .y=0x1d, .sp=0xa7, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x1848, .value=0x8d}, {.addr=0x1849, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x184a, .a=0x65, .x=0x12, .y=0x59, .sp=0xa7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1848, .value=0x8d}, {.addr=0x1849, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x1848, .value=0x8d, .type=IO_READ},
        {.addr=0x1849, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x797f, .a=0x77, .x=0xbc, .y=0x50, .sp=0x8d, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x797f, .value=0x8d}, {.addr=0x7980, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x7981, .a=0x77, .x=0xbc, .y=0x83, .sp=0x8d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x797f, .value=0x8d}, {.addr=0x7980, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x797f, .value=0x8d, .type=IO_READ},
        {.addr=0x7980, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x812b, .a=0x64, .x=0xd0, .y=0x56, .sp=0x9b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x812b, .value=0x8d}, {.addr=0x812c, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x812d, .a=0x64, .x=0xd0, .y=0x16, .sp=0x9b, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x812b, .value=0x8d}, {.addr=0x812c, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x812b, .value=0x8d, .type=IO_READ},
        {.addr=0x812c, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x2082, .a=0x9d, .x=0x5f, .y=0x31, .sp=0x9e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x2082, .value=0x8d}, {.addr=0x2083, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x2084, .a=0x9d, .x=0x5f, .y=0xf2, .sp=0x9e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x2082, .value=0x8d}, {.addr=0x2083, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x2082, .value=0x8d, .type=IO_READ},
        {.addr=0x2083, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x9632, .a=0xeb, .x=0x6d, .y=0xaf, .sp=0xa4, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x9632, .value=0x8d}, {.addr=0x9633, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9634, .a=0xeb, .x=0x6d, .y=0x06, .sp=0xa4, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x9632, .value=0x8d}, {.addr=0x9633, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9632, .value=0x8d, .type=IO_READ},
        {.addr=0x9633, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xc635, .a=0x3d, .x=0xa0, .y=0x84, .sp=0x3a, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xc635, .value=0x8d}, {.addr=0xc636, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xc637, .a=0x3d, .x=0xa0, .y=0x65, .sp=0x3a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc635, .value=0x8d}, {.addr=0xc636, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xc635, .value=0x8d, .type=IO_READ},
        {.addr=0xc636, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x88d8, .a=0x14, .x=0x6e, .y=0x6d, .sp=0x69, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x88d8, .value=0x8d}, {.addr=0x88d9, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x88da, .a=0x14, .x=0x6e, .y=0x0f, .sp=0x69, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x88d8, .value=0x8d}, {.addr=0x88d9, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x88d8, .value=0x8d, .type=IO_READ},
        {.addr=0x88d9, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x0c31, .a=0xeb, .x=0xe4, .y=0x16, .sp=0xd1, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0c31, .value=0x8d}, {.addr=0x0c32, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x0c33, .a=0xeb, .x=0xe4, .y=0x16, .sp=0xd1, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0c31, .value=0x8d}, {.addr=0x0c32, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x0c31, .value=0x8d, .type=IO_READ},
        {.addr=0x0c32, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0200) {
    const struct CPU_State initial_cpu = {.pc=0x9a12, .a=0xba, .x=0xae, .y=0x17, .sp=0xf7, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x9a12, .value=0x8d}, {.addr=0x9a13, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x9a14, .a=0xba, .x=0xae, .y=0x0e, .sp=0xf7, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9a12, .value=0x8d}, {.addr=0x9a13, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x9a12, .value=0x8d, .type=IO_READ},
        {.addr=0x9a13, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0201) {
    const struct CPU_State initial_cpu = {.pc=0x11d8, .a=0x84, .x=0x85, .y=0x79, .sp=0xd4, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x11d8, .value=0x8d}, {.addr=0x11d9, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x11da, .a=0x84, .x=0x85, .y=0xf5, .sp=0xd4, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x11d8, .value=0x8d}, {.addr=0x11d9, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x11d8, .value=0x8d, .type=IO_READ},
        {.addr=0x11d9, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0202) {
    const struct CPU_State initial_cpu = {.pc=0x40cf, .a=0x89, .x=0x22, .y=0xb3, .sp=0x92, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x40cf, .value=0x8d}, {.addr=0x40d0, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x40d1, .a=0x89, .x=0x22, .y=0x6b, .sp=0x92, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x40cf, .value=0x8d}, {.addr=0x40d0, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x40cf, .value=0x8d, .type=IO_READ},
        {.addr=0x40d0, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0203) {
    const struct CPU_State initial_cpu = {.pc=0x208f, .a=0xcb, .x=0xbc, .y=0xac, .sp=0xcc, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x208f, .value=0x8d}, {.addr=0x2090, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x2091, .a=0xcb, .x=0xbc, .y=0x8d, .sp=0xcc, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x208f, .value=0x8d}, {.addr=0x2090, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x208f, .value=0x8d, .type=IO_READ},
        {.addr=0x2090, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0204) {
    const struct CPU_State initial_cpu = {.pc=0xe482, .a=0x25, .x=0x0e, .y=0xf3, .sp=0x41, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xe482, .value=0x8d}, {.addr=0xe483, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xe484, .a=0x25, .x=0x0e, .y=0x1f, .sp=0x41, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xe482, .value=0x8d}, {.addr=0xe483, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xe482, .value=0x8d, .type=IO_READ},
        {.addr=0xe483, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0205) {
    const struct CPU_State initial_cpu = {.pc=0x7a79, .a=0xb2, .x=0xc0, .y=0x13, .sp=0x0f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x7a79, .value=0x8d}, {.addr=0x7a7a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7a7b, .a=0xb2, .x=0xc0, .y=0x7d, .sp=0x0f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x7a79, .value=0x8d}, {.addr=0x7a7a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7a79, .value=0x8d, .type=IO_READ},
        {.addr=0x7a7a, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0206) {
    const struct CPU_State initial_cpu = {.pc=0x696a, .a=0x6a, .x=0x02, .y=0x85, .sp=0xb1, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x696a, .value=0x8d}, {.addr=0x696b, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x696c, .a=0x6a, .x=0x02, .y=0x01, .sp=0xb1, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x696a, .value=0x8d}, {.addr=0x696b, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x696a, .value=0x8d, .type=IO_READ},
        {.addr=0x696b, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0207) {
    const struct CPU_State initial_cpu = {.pc=0xd7a9, .a=0x8e, .x=0x27, .y=0xd8, .sp=0x99, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xd7a9, .value=0x8d}, {.addr=0xd7aa, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd7ab, .a=0x8e, .x=0x27, .y=0x8e, .sp=0x99, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd7a9, .value=0x8d}, {.addr=0xd7aa, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd7a9, .value=0x8d, .type=IO_READ},
        {.addr=0xd7aa, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0208) {
    const struct CPU_State initial_cpu = {.pc=0xef68, .a=0x58, .x=0x1f, .y=0x4e, .sp=0x4b, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xef68, .value=0x8d}, {.addr=0xef69, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xef6a, .a=0x58, .x=0x1f, .y=0xbc, .sp=0x4b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xef68, .value=0x8d}, {.addr=0xef69, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xef68, .value=0x8d, .type=IO_READ},
        {.addr=0xef69, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0209) {
    const struct CPU_State initial_cpu = {.pc=0xd5b5, .a=0x14, .x=0x5d, .y=0x53, .sp=0x8a, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xd5b5, .value=0x8d}, {.addr=0xd5b6, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xd5b7, .a=0x14, .x=0x5d, .y=0xc3, .sp=0x8a, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd5b5, .value=0x8d}, {.addr=0xd5b6, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xd5b5, .value=0x8d, .type=IO_READ},
        {.addr=0xd5b6, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_020A) {
    const struct CPU_State initial_cpu = {.pc=0xd048, .a=0x98, .x=0xf0, .y=0x4e, .sp=0xbb, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xd048, .value=0x8d}, {.addr=0xd049, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xd04a, .a=0x98, .x=0xf0, .y=0xda, .sp=0xbb, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd048, .value=0x8d}, {.addr=0xd049, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xd048, .value=0x8d, .type=IO_READ},
        {.addr=0xd049, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_020B) {
    const struct CPU_State initial_cpu = {.pc=0x96af, .a=0xc5, .x=0xd8, .y=0x65, .sp=0x87, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x96af, .value=0x8d}, {.addr=0x96b0, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x96b1, .a=0xc5, .x=0xd8, .y=0x4e, .sp=0x87, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x96af, .value=0x8d}, {.addr=0x96b0, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x96af, .value=0x8d, .type=IO_READ},
        {.addr=0x96b0, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_020C) {
    const struct CPU_State initial_cpu = {.pc=0x7025, .a=0x04, .x=0x8a, .y=0x80, .sp=0xc3, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x7025, .value=0x8d}, {.addr=0x7026, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7027, .a=0x04, .x=0x8a, .y=0x8e, .sp=0xc3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7025, .value=0x8d}, {.addr=0x7026, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7025, .value=0x8d, .type=IO_READ},
        {.addr=0x7026, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_020D) {
    const struct CPU_State initial_cpu = {.pc=0x4b75, .a=0x79, .x=0x53, .y=0x3e, .sp=0xad, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x4b75, .value=0x8d}, {.addr=0x4b76, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x4b77, .a=0x79, .x=0x53, .y=0x1a, .sp=0xad, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x4b75, .value=0x8d}, {.addr=0x4b76, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x4b75, .value=0x8d, .type=IO_READ},
        {.addr=0x4b76, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_020E) {
    const struct CPU_State initial_cpu = {.pc=0x3410, .a=0x0b, .x=0xce, .y=0xf9, .sp=0x76, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x3410, .value=0x8d}, {.addr=0x3411, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x3412, .a=0x0b, .x=0xce, .y=0xf9, .sp=0x76, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x3410, .value=0x8d}, {.addr=0x3411, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x3410, .value=0x8d, .type=IO_READ},
        {.addr=0x3411, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_020F) {
    const struct CPU_State initial_cpu = {.pc=0x859f, .a=0x32, .x=0x55, .y=0xb7, .sp=0x94, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x859f, .value=0x8d}, {.addr=0x85a0, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x85a1, .a=0x32, .x=0x55, .y=0xfe, .sp=0x94, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x859f, .value=0x8d}, {.addr=0x85a0, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x859f, .value=0x8d, .type=IO_READ},
        {.addr=0x85a0, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0210) {
    const struct CPU_State initial_cpu = {.pc=0x6207, .a=0x27, .x=0x54, .y=0x84, .sp=0xd3, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x6207, .value=0x8d}, {.addr=0x6208, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x6209, .a=0x27, .x=0x54, .y=0x44, .sp=0xd3, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x6207, .value=0x8d}, {.addr=0x6208, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x6207, .value=0x8d, .type=IO_READ},
        {.addr=0x6208, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0211) {
    const struct CPU_State initial_cpu = {.pc=0xa506, .a=0x70, .x=0xd4, .y=0xf9, .sp=0xaf, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xa506, .value=0x8d}, {.addr=0xa507, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xa508, .a=0x70, .x=0xd4, .y=0x77, .sp=0xaf, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa506, .value=0x8d}, {.addr=0xa507, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xa506, .value=0x8d, .type=IO_READ},
        {.addr=0xa507, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0212) {
    const struct CPU_State initial_cpu = {.pc=0xbe04, .a=0x72, .x=0x0d, .y=0x2c, .sp=0xd6, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xbe04, .value=0x8d}, {.addr=0xbe05, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbe06, .a=0x72, .x=0x0d, .y=0x26, .sp=0xd6, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xbe04, .value=0x8d}, {.addr=0xbe05, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbe04, .value=0x8d, .type=IO_READ},
        {.addr=0xbe05, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0213) {
    const struct CPU_State initial_cpu = {.pc=0x0bc6, .a=0xb3, .x=0x31, .y=0x4b, .sp=0xf2, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0bc6, .value=0x8d}, {.addr=0x0bc7, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x0bc8, .a=0xb3, .x=0x31, .y=0x75, .sp=0xf2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0bc6, .value=0x8d}, {.addr=0x0bc7, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x0bc6, .value=0x8d, .type=IO_READ},
        {.addr=0x0bc7, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0214) {
    const struct CPU_State initial_cpu = {.pc=0x4797, .a=0x09, .x=0x76, .y=0xc5, .sp=0xb0, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4797, .value=0x8d}, {.addr=0x4798, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x4799, .a=0x09, .x=0x76, .y=0x50, .sp=0xb0, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4797, .value=0x8d}, {.addr=0x4798, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x4797, .value=0x8d, .type=IO_READ},
        {.addr=0x4798, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0215) {
    const struct CPU_State initial_cpu = {.pc=0x05e1, .a=0x66, .x=0x0e, .y=0xe4, .sp=0x7e, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x05e1, .value=0x8d}, {.addr=0x05e2, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x05e3, .a=0x66, .x=0x0e, .y=0x2c, .sp=0x7e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x05e1, .value=0x8d}, {.addr=0x05e2, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x05e1, .value=0x8d, .type=IO_READ},
        {.addr=0x05e2, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0216) {
    const struct CPU_State initial_cpu = {.pc=0x7ebd, .a=0xda, .x=0x83, .y=0xfb, .sp=0xba, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x7ebd, .value=0x8d}, {.addr=0x7ebe, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x7ebf, .a=0xda, .x=0x83, .y=0xba, .sp=0xba, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7ebd, .value=0x8d}, {.addr=0x7ebe, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x7ebd, .value=0x8d, .type=IO_READ},
        {.addr=0x7ebe, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0217) {
    const struct CPU_State initial_cpu = {.pc=0x01c2, .a=0x6d, .x=0xa1, .y=0x74, .sp=0x63, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x8d}, {.addr=0x01c3, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x01c4, .a=0x6d, .x=0xa1, .y=0x6b, .sp=0x63, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x8d}, {.addr=0x01c3, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x01c2, .value=0x8d, .type=IO_READ},
        {.addr=0x01c3, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0218) {
    const struct CPU_State initial_cpu = {.pc=0xffa1, .a=0x85, .x=0x6e, .y=0x61, .sp=0x7c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xffa1, .value=0x8d}, {.addr=0xffa2, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xffa3, .a=0x85, .x=0x6e, .y=0x31, .sp=0x7c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xffa1, .value=0x8d}, {.addr=0xffa2, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xffa1, .value=0x8d, .type=IO_READ},
        {.addr=0xffa2, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0219) {
    const struct CPU_State initial_cpu = {.pc=0x4c7f, .a=0xc0, .x=0x02, .y=0x0e, .sp=0x99, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x4c7f, .value=0x8d}, {.addr=0x4c80, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4c81, .a=0xc0, .x=0x02, .y=0x3d, .sp=0x99, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4c7f, .value=0x8d}, {.addr=0x4c80, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4c7f, .value=0x8d, .type=IO_READ},
        {.addr=0x4c80, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_021A) {
    const struct CPU_State initial_cpu = {.pc=0xf01c, .a=0x5b, .x=0x1d, .y=0xa0, .sp=0x20, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xf01c, .value=0x8d}, {.addr=0xf01d, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xf01e, .a=0x5b, .x=0x1d, .y=0x6a, .sp=0x20, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xf01c, .value=0x8d}, {.addr=0xf01d, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xf01c, .value=0x8d, .type=IO_READ},
        {.addr=0xf01d, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_021B) {
    const struct CPU_State initial_cpu = {.pc=0x4106, .a=0x5a, .x=0x10, .y=0xdd, .sp=0xaf, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x4106, .value=0x8d}, {.addr=0x4107, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4108, .a=0x5a, .x=0x10, .y=0x5c, .sp=0xaf, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x4106, .value=0x8d}, {.addr=0x4107, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4106, .value=0x8d, .type=IO_READ},
        {.addr=0x4107, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_021C) {
    const struct CPU_State initial_cpu = {.pc=0x3d69, .a=0xd8, .x=0xdd, .y=0xce, .sp=0xbe, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x3d69, .value=0x8d}, {.addr=0x3d6a, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x3d6b, .a=0xd8, .x=0xdd, .y=0x33, .sp=0xbe, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x3d69, .value=0x8d}, {.addr=0x3d6a, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x3d69, .value=0x8d, .type=IO_READ},
        {.addr=0x3d6a, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_021D) {
    const struct CPU_State initial_cpu = {.pc=0x0727, .a=0x7b, .x=0xa8, .y=0x80, .sp=0x02, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0727, .value=0x8d}, {.addr=0x0728, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x0729, .a=0x7b, .x=0xa8, .y=0xb2, .sp=0x02, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0727, .value=0x8d}, {.addr=0x0728, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x0727, .value=0x8d, .type=IO_READ},
        {.addr=0x0728, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_021E) {
    const struct CPU_State initial_cpu = {.pc=0x4eab, .a=0xe9, .x=0x29, .y=0xda, .sp=0x7f, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x4eab, .value=0x8d}, {.addr=0x4eac, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x4ead, .a=0xe9, .x=0x29, .y=0x93, .sp=0x7f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x4eab, .value=0x8d}, {.addr=0x4eac, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x4eab, .value=0x8d, .type=IO_READ},
        {.addr=0x4eac, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_021F) {
    const struct CPU_State initial_cpu = {.pc=0x7f6e, .a=0xa1, .x=0x9a, .y=0x74, .sp=0x7b, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x7f6e, .value=0x8d}, {.addr=0x7f6f, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x7f70, .a=0xa1, .x=0x9a, .y=0x62, .sp=0x7b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x7f6e, .value=0x8d}, {.addr=0x7f6f, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x7f6e, .value=0x8d, .type=IO_READ},
        {.addr=0x7f6f, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0220) {
    const struct CPU_State initial_cpu = {.pc=0xa06a, .a=0x1e, .x=0x00, .y=0x85, .sp=0xb9, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa06a, .value=0x8d}, {.addr=0xa06b, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xa06c, .a=0x1e, .x=0x00, .y=0xb8, .sp=0xb9, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xa06a, .value=0x8d}, {.addr=0xa06b, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xa06a, .value=0x8d, .type=IO_READ},
        {.addr=0xa06b, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0221) {
    const struct CPU_State initial_cpu = {.pc=0xa904, .a=0x32, .x=0xed, .y=0x92, .sp=0x89, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xa904, .value=0x8d}, {.addr=0xa905, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xa906, .a=0x32, .x=0xed, .y=0x8f, .sp=0x89, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xa904, .value=0x8d}, {.addr=0xa905, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xa904, .value=0x8d, .type=IO_READ},
        {.addr=0xa905, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0222) {
    const struct CPU_State initial_cpu = {.pc=0x2dc7, .a=0x8a, .x=0xcd, .y=0xd1, .sp=0x2a, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x2dc7, .value=0x8d}, {.addr=0x2dc8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x2dc9, .a=0x8a, .x=0xcd, .y=0xbe, .sp=0x2a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2dc7, .value=0x8d}, {.addr=0x2dc8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x2dc7, .value=0x8d, .type=IO_READ},
        {.addr=0x2dc8, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0223) {
    const struct CPU_State initial_cpu = {.pc=0x8635, .a=0x67, .x=0x78, .y=0x7c, .sp=0x39, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x8635, .value=0x8d}, {.addr=0x8636, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x8637, .a=0x67, .x=0x78, .y=0xd6, .sp=0x39, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8635, .value=0x8d}, {.addr=0x8636, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x8635, .value=0x8d, .type=IO_READ},
        {.addr=0x8636, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0224) {
    const struct CPU_State initial_cpu = {.pc=0xa2c1, .a=0x13, .x=0xe9, .y=0x77, .sp=0x2e, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xa2c1, .value=0x8d}, {.addr=0xa2c2, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xa2c3, .a=0x13, .x=0xe9, .y=0x32, .sp=0x2e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa2c1, .value=0x8d}, {.addr=0xa2c2, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xa2c1, .value=0x8d, .type=IO_READ},
        {.addr=0xa2c2, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0225) {
    const struct CPU_State initial_cpu = {.pc=0x2660, .a=0x2a, .x=0xe2, .y=0x69, .sp=0x93, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x2660, .value=0x8d}, {.addr=0x2661, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x2662, .a=0x2a, .x=0xe2, .y=0x9b, .sp=0x93, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2660, .value=0x8d}, {.addr=0x2661, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x2660, .value=0x8d, .type=IO_READ},
        {.addr=0x2661, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0226) {
    const struct CPU_State initial_cpu = {.pc=0x8d0b, .a=0xd1, .x=0x1d, .y=0x88, .sp=0x0e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x8d0b, .value=0x8d}, {.addr=0x8d0c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8d0d, .a=0xd1, .x=0x1d, .y=0x46, .sp=0x0e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x8d0b, .value=0x8d}, {.addr=0x8d0c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8d0b, .value=0x8d, .type=IO_READ},
        {.addr=0x8d0c, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0227) {
    const struct CPU_State initial_cpu = {.pc=0x05ee, .a=0xcc, .x=0x0e, .y=0xe6, .sp=0xb0, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x05ee, .value=0x8d}, {.addr=0x05ef, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x05f0, .a=0xcc, .x=0x0e, .y=0x32, .sp=0xb0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x05ee, .value=0x8d}, {.addr=0x05ef, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x05ee, .value=0x8d, .type=IO_READ},
        {.addr=0x05ef, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0228) {
    const struct CPU_State initial_cpu = {.pc=0x006b, .a=0xaa, .x=0xa1, .y=0xc5, .sp=0x48, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x8d}, {.addr=0x006c, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x006d, .a=0xaa, .x=0xa1, .y=0x0a, .sp=0x48, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x8d}, {.addr=0x006c, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x006b, .value=0x8d, .type=IO_READ},
        {.addr=0x006c, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0229) {
    const struct CPU_State initial_cpu = {.pc=0xd8bb, .a=0x3f, .x=0x55, .y=0xeb, .sp=0xdc, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xd8bb, .value=0x8d}, {.addr=0xd8bc, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xd8bd, .a=0x3f, .x=0x55, .y=0x79, .sp=0xdc, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xd8bb, .value=0x8d}, {.addr=0xd8bc, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xd8bb, .value=0x8d, .type=IO_READ},
        {.addr=0xd8bc, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_022A) {
    const struct CPU_State initial_cpu = {.pc=0x6fc7, .a=0xb9, .x=0x61, .y=0x63, .sp=0x1d, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6fc7, .value=0x8d}, {.addr=0x6fc8, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x6fc9, .a=0xb9, .x=0x61, .y=0x6f, .sp=0x1d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6fc7, .value=0x8d}, {.addr=0x6fc8, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x6fc7, .value=0x8d, .type=IO_READ},
        {.addr=0x6fc8, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_022B) {
    const struct CPU_State initial_cpu = {.pc=0xaa5c, .a=0x12, .x=0xe6, .y=0x0c, .sp=0x57, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xaa5c, .value=0x8d}, {.addr=0xaa5d, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xaa5e, .a=0x12, .x=0xe6, .y=0x7b, .sp=0x57, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xaa5c, .value=0x8d}, {.addr=0xaa5d, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xaa5c, .value=0x8d, .type=IO_READ},
        {.addr=0xaa5d, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_022C) {
    const struct CPU_State initial_cpu = {.pc=0x1205, .a=0xa4, .x=0xe0, .y=0x40, .sp=0x6c, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x1205, .value=0x8d}, {.addr=0x1206, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x1207, .a=0xa4, .x=0xe0, .y=0xf8, .sp=0x6c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1205, .value=0x8d}, {.addr=0x1206, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x1205, .value=0x8d, .type=IO_READ},
        {.addr=0x1206, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_022D) {
    const struct CPU_State initial_cpu = {.pc=0x0e8a, .a=0x85, .x=0x50, .y=0x92, .sp=0x53, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0e8a, .value=0x8d}, {.addr=0x0e8b, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x0e8c, .a=0x85, .x=0x50, .y=0xf5, .sp=0x53, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0e8a, .value=0x8d}, {.addr=0x0e8b, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x0e8a, .value=0x8d, .type=IO_READ},
        {.addr=0x0e8b, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_022E) {
    const struct CPU_State initial_cpu = {.pc=0x9283, .a=0x40, .x=0x27, .y=0x9a, .sp=0x5a, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x9283, .value=0x8d}, {.addr=0x9284, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x9285, .a=0x40, .x=0x27, .y=0xa3, .sp=0x5a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9283, .value=0x8d}, {.addr=0x9284, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x9283, .value=0x8d, .type=IO_READ},
        {.addr=0x9284, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_022F) {
    const struct CPU_State initial_cpu = {.pc=0x40ce, .a=0x75, .x=0xb6, .y=0xe4, .sp=0x47, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x40ce, .value=0x8d}, {.addr=0x40cf, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x40d0, .a=0x75, .x=0xb6, .y=0x0c, .sp=0x47, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x40ce, .value=0x8d}, {.addr=0x40cf, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x40ce, .value=0x8d, .type=IO_READ},
        {.addr=0x40cf, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0230) {
    const struct CPU_State initial_cpu = {.pc=0x83c2, .a=0x0c, .x=0x5e, .y=0x77, .sp=0x96, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x83c2, .value=0x8d}, {.addr=0x83c3, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x83c4, .a=0x0c, .x=0x5e, .y=0x95, .sp=0x96, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x83c2, .value=0x8d}, {.addr=0x83c3, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x83c2, .value=0x8d, .type=IO_READ},
        {.addr=0x83c3, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0231) {
    const struct CPU_State initial_cpu = {.pc=0x141d, .a=0x74, .x=0x73, .y=0x2b, .sp=0xd6, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x141d, .value=0x8d}, {.addr=0x141e, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x141f, .a=0x74, .x=0x73, .y=0xdb, .sp=0xd6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x141d, .value=0x8d}, {.addr=0x141e, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x141d, .value=0x8d, .type=IO_READ},
        {.addr=0x141e, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0232) {
    const struct CPU_State initial_cpu = {.pc=0x3f01, .a=0x6a, .x=0x10, .y=0xf7, .sp=0x6c, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x3f01, .value=0x8d}, {.addr=0x3f02, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x3f03, .a=0x6a, .x=0x10, .y=0xe3, .sp=0x6c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x3f01, .value=0x8d}, {.addr=0x3f02, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x3f01, .value=0x8d, .type=IO_READ},
        {.addr=0x3f02, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0233) {
    const struct CPU_State initial_cpu = {.pc=0xf837, .a=0xcc, .x=0xea, .y=0xfe, .sp=0x11, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xf837, .value=0x8d}, {.addr=0xf838, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf839, .a=0xcc, .x=0xea, .y=0x0d, .sp=0x11, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xf837, .value=0x8d}, {.addr=0xf838, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf837, .value=0x8d, .type=IO_READ},
        {.addr=0xf838, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0234) {
    const struct CPU_State initial_cpu = {.pc=0x47dc, .a=0x3f, .x=0x8c, .y=0x36, .sp=0x43, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x47dc, .value=0x8d}, {.addr=0x47dd, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x47de, .a=0x3f, .x=0x8c, .y=0x19, .sp=0x43, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x47dc, .value=0x8d}, {.addr=0x47dd, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x47dc, .value=0x8d, .type=IO_READ},
        {.addr=0x47dd, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0235) {
    const struct CPU_State initial_cpu = {.pc=0xd42a, .a=0xbb, .x=0x01, .y=0x56, .sp=0xbe, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xd42a, .value=0x8d}, {.addr=0xd42b, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xd42c, .a=0xbb, .x=0x01, .y=0xa9, .sp=0xbe, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd42a, .value=0x8d}, {.addr=0xd42b, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xd42a, .value=0x8d, .type=IO_READ},
        {.addr=0xd42b, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0236) {
    const struct CPU_State initial_cpu = {.pc=0x4a3e, .a=0xae, .x=0xe0, .y=0xdc, .sp=0x82, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x4a3e, .value=0x8d}, {.addr=0x4a3f, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x4a40, .a=0xae, .x=0xe0, .y=0x21, .sp=0x82, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4a3e, .value=0x8d}, {.addr=0x4a3f, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x4a3e, .value=0x8d, .type=IO_READ},
        {.addr=0x4a3f, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0237) {
    const struct CPU_State initial_cpu = {.pc=0x2a29, .a=0xfa, .x=0x89, .y=0xae, .sp=0xe1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x2a29, .value=0x8d}, {.addr=0x2a2a, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x2a2b, .a=0xfa, .x=0x89, .y=0xba, .sp=0xe1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2a29, .value=0x8d}, {.addr=0x2a2a, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x2a29, .value=0x8d, .type=IO_READ},
        {.addr=0x2a2a, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0238) {
    const struct CPU_State initial_cpu = {.pc=0x885f, .a=0x9d, .x=0x30, .y=0xb7, .sp=0x84, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x885f, .value=0x8d}, {.addr=0x8860, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x8861, .a=0x9d, .x=0x30, .y=0xf1, .sp=0x84, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x885f, .value=0x8d}, {.addr=0x8860, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x885f, .value=0x8d, .type=IO_READ},
        {.addr=0x8860, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0239) {
    const struct CPU_State initial_cpu = {.pc=0x817b, .a=0x34, .x=0x77, .y=0xd8, .sp=0x27, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x817b, .value=0x8d}, {.addr=0x817c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x817d, .a=0x34, .x=0x77, .y=0x9d, .sp=0x27, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x817b, .value=0x8d}, {.addr=0x817c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x817b, .value=0x8d, .type=IO_READ},
        {.addr=0x817c, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_023A) {
    const struct CPU_State initial_cpu = {.pc=0x5e2b, .a=0x21, .x=0x79, .y=0x25, .sp=0x33, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x5e2b, .value=0x8d}, {.addr=0x5e2c, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x5e2d, .a=0x21, .x=0x79, .y=0xc3, .sp=0x33, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5e2b, .value=0x8d}, {.addr=0x5e2c, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x5e2b, .value=0x8d, .type=IO_READ},
        {.addr=0x5e2c, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_023B) {
    const struct CPU_State initial_cpu = {.pc=0x62fe, .a=0xfb, .x=0x5b, .y=0xf5, .sp=0xed, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x62fe, .value=0x8d}, {.addr=0x62ff, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x6300, .a=0xfb, .x=0x5b, .y=0x4f, .sp=0xed, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x62fe, .value=0x8d}, {.addr=0x62ff, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x62fe, .value=0x8d, .type=IO_READ},
        {.addr=0x62ff, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_023C) {
    const struct CPU_State initial_cpu = {.pc=0x7baa, .a=0xdf, .x=0x76, .y=0x65, .sp=0xea, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x7baa, .value=0x8d}, {.addr=0x7bab, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7bac, .a=0xdf, .x=0x76, .y=0x9c, .sp=0xea, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7baa, .value=0x8d}, {.addr=0x7bab, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7baa, .value=0x8d, .type=IO_READ},
        {.addr=0x7bab, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_023D) {
    const struct CPU_State initial_cpu = {.pc=0x7429, .a=0x66, .x=0x38, .y=0x41, .sp=0xaa, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x7429, .value=0x8d}, {.addr=0x742a, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x742b, .a=0x66, .x=0x38, .y=0x9a, .sp=0xaa, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x7429, .value=0x8d}, {.addr=0x742a, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x7429, .value=0x8d, .type=IO_READ},
        {.addr=0x742a, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_023E) {
    const struct CPU_State initial_cpu = {.pc=0xf55c, .a=0x0e, .x=0xa0, .y=0x76, .sp=0xb4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xf55c, .value=0x8d}, {.addr=0xf55d, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xf55e, .a=0x0e, .x=0xa0, .y=0x92, .sp=0xb4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf55c, .value=0x8d}, {.addr=0xf55d, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xf55c, .value=0x8d, .type=IO_READ},
        {.addr=0xf55d, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_023F) {
    const struct CPU_State initial_cpu = {.pc=0x0317, .a=0xfc, .x=0x5f, .y=0x3e, .sp=0x28, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0317, .value=0x8d}, {.addr=0x0318, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x0319, .a=0xfc, .x=0x5f, .y=0xf5, .sp=0x28, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0317, .value=0x8d}, {.addr=0x0318, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x0317, .value=0x8d, .type=IO_READ},
        {.addr=0x0318, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0240) {
    const struct CPU_State initial_cpu = {.pc=0x8b0b, .a=0x52, .x=0x35, .y=0x4c, .sp=0x0c, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x8b0b, .value=0x8d}, {.addr=0x8b0c, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x8b0d, .a=0x52, .x=0x35, .y=0x7a, .sp=0x0c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8b0b, .value=0x8d}, {.addr=0x8b0c, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x8b0b, .value=0x8d, .type=IO_READ},
        {.addr=0x8b0c, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0241) {
    const struct CPU_State initial_cpu = {.pc=0xf6d4, .a=0xe0, .x=0x07, .y=0x89, .sp=0x4b, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xf6d4, .value=0x8d}, {.addr=0xf6d5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf6d6, .a=0xe0, .x=0x07, .y=0x26, .sp=0x4b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xf6d4, .value=0x8d}, {.addr=0xf6d5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf6d4, .value=0x8d, .type=IO_READ},
        {.addr=0xf6d5, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0242) {
    const struct CPU_State initial_cpu = {.pc=0x4cd7, .a=0xc4, .x=0x59, .y=0x1c, .sp=0x28, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd7, .value=0x8d}, {.addr=0x4cd8, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x4cd9, .a=0xc4, .x=0x59, .y=0xf4, .sp=0x28, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x4cd7, .value=0x8d}, {.addr=0x4cd8, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x4cd7, .value=0x8d, .type=IO_READ},
        {.addr=0x4cd8, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0243) {
    const struct CPU_State initial_cpu = {.pc=0x3166, .a=0xd2, .x=0x70, .y=0x0c, .sp=0xa3, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x3166, .value=0x8d}, {.addr=0x3167, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x3168, .a=0xd2, .x=0x70, .y=0x45, .sp=0xa3, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x3166, .value=0x8d}, {.addr=0x3167, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x3166, .value=0x8d, .type=IO_READ},
        {.addr=0x3167, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0244) {
    const struct CPU_State initial_cpu = {.pc=0x5419, .a=0xa3, .x=0x09, .y=0x1f, .sp=0x84, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x5419, .value=0x8d}, {.addr=0x541a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x541b, .a=0xa3, .x=0x09, .y=0x3c, .sp=0x84, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5419, .value=0x8d}, {.addr=0x541a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5419, .value=0x8d, .type=IO_READ},
        {.addr=0x541a, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0245) {
    const struct CPU_State initial_cpu = {.pc=0x4b18, .a=0xd8, .x=0xc4, .y=0xbd, .sp=0x1e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x4b18, .value=0x8d}, {.addr=0x4b19, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x4b1a, .a=0xd8, .x=0xc4, .y=0xcf, .sp=0x1e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4b18, .value=0x8d}, {.addr=0x4b19, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x4b18, .value=0x8d, .type=IO_READ},
        {.addr=0x4b19, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0246) {
    const struct CPU_State initial_cpu = {.pc=0xd0e4, .a=0xcb, .x=0x20, .y=0x8d, .sp=0x61, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e4, .value=0x8d}, {.addr=0xd0e5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd0e6, .a=0xcb, .x=0x20, .y=0x80, .sp=0x61, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd0e4, .value=0x8d}, {.addr=0xd0e5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd0e4, .value=0x8d, .type=IO_READ},
        {.addr=0xd0e5, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0247) {
    const struct CPU_State initial_cpu = {.pc=0xa093, .a=0xd4, .x=0x9e, .y=0x74, .sp=0x69, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa093, .value=0x8d}, {.addr=0xa094, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa095, .a=0xd4, .x=0x9e, .y=0x00, .sp=0x69, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xa093, .value=0x8d}, {.addr=0xa094, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa093, .value=0x8d, .type=IO_READ},
        {.addr=0xa094, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0248) {
    const struct CPU_State initial_cpu = {.pc=0xfddc, .a=0xf7, .x=0x93, .y=0x24, .sp=0x59, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xfddc, .value=0x8d}, {.addr=0xfddd, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xfdde, .a=0xf7, .x=0x93, .y=0x61, .sp=0x59, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xfddc, .value=0x8d}, {.addr=0xfddd, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xfddc, .value=0x8d, .type=IO_READ},
        {.addr=0xfddd, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0249) {
    const struct CPU_State initial_cpu = {.pc=0xbd0b, .a=0xc1, .x=0xab, .y=0x0c, .sp=0xfd, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xbd0b, .value=0x8d}, {.addr=0xbd0c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbd0d, .a=0xc1, .x=0xab, .y=0x1d, .sp=0xfd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xbd0b, .value=0x8d}, {.addr=0xbd0c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbd0b, .value=0x8d, .type=IO_READ},
        {.addr=0xbd0c, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_024A) {
    const struct CPU_State initial_cpu = {.pc=0x96ac, .a=0x0f, .x=0x92, .y=0x1e, .sp=0x22, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x96ac, .value=0x8d}, {.addr=0x96ad, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x96ae, .a=0x0f, .x=0x92, .y=0x36, .sp=0x22, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x96ac, .value=0x8d}, {.addr=0x96ad, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x96ac, .value=0x8d, .type=IO_READ},
        {.addr=0x96ad, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_024B) {
    const struct CPU_State initial_cpu = {.pc=0xa6a9, .a=0xc1, .x=0xa3, .y=0x81, .sp=0x78, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xa6a9, .value=0x8d}, {.addr=0xa6aa, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xa6ab, .a=0xc1, .x=0xa3, .y=0x64, .sp=0x78, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa6a9, .value=0x8d}, {.addr=0xa6aa, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xa6a9, .value=0x8d, .type=IO_READ},
        {.addr=0xa6aa, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_024C) {
    const struct CPU_State initial_cpu = {.pc=0x3295, .a=0xa1, .x=0x92, .y=0x4e, .sp=0xca, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x3295, .value=0x8d}, {.addr=0x3296, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x3297, .a=0xa1, .x=0x92, .y=0xb8, .sp=0xca, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3295, .value=0x8d}, {.addr=0x3296, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x3295, .value=0x8d, .type=IO_READ},
        {.addr=0x3296, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_024D) {
    const struct CPU_State initial_cpu = {.pc=0x16b4, .a=0x0a, .x=0x6b, .y=0x27, .sp=0xc3, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x16b4, .value=0x8d}, {.addr=0x16b5, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x16b6, .a=0x0a, .x=0x6b, .y=0xda, .sp=0xc3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x16b4, .value=0x8d}, {.addr=0x16b5, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x16b4, .value=0x8d, .type=IO_READ},
        {.addr=0x16b5, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_024E) {
    const struct CPU_State initial_cpu = {.pc=0x5ba1, .a=0x3d, .x=0x64, .y=0xa2, .sp=0x88, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x5ba1, .value=0x8d}, {.addr=0x5ba2, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x5ba3, .a=0x3d, .x=0x64, .y=0x65, .sp=0x88, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5ba1, .value=0x8d}, {.addr=0x5ba2, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x5ba1, .value=0x8d, .type=IO_READ},
        {.addr=0x5ba2, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_024F) {
    const struct CPU_State initial_cpu = {.pc=0x987f, .a=0x47, .x=0x52, .y=0xf6, .sp=0xd8, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x987f, .value=0x8d}, {.addr=0x9880, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x9881, .a=0x47, .x=0x52, .y=0x31, .sp=0xd8, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x987f, .value=0x8d}, {.addr=0x9880, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x987f, .value=0x8d, .type=IO_READ},
        {.addr=0x9880, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0250) {
    const struct CPU_State initial_cpu = {.pc=0x3522, .a=0x27, .x=0xac, .y=0xb8, .sp=0xa4, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x3522, .value=0x8d}, {.addr=0x3523, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x3524, .a=0x27, .x=0xac, .y=0x04, .sp=0xa4, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x3522, .value=0x8d}, {.addr=0x3523, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x3522, .value=0x8d, .type=IO_READ},
        {.addr=0x3523, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0251) {
    const struct CPU_State initial_cpu = {.pc=0xaf4c, .a=0xc9, .x=0x0b, .y=0x44, .sp=0x80, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xaf4c, .value=0x8d}, {.addr=0xaf4d, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xaf4e, .a=0xc9, .x=0x0b, .y=0xac, .sp=0x80, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xaf4c, .value=0x8d}, {.addr=0xaf4d, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xaf4c, .value=0x8d, .type=IO_READ},
        {.addr=0xaf4d, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0252) {
    const struct CPU_State initial_cpu = {.pc=0x9911, .a=0x4b, .x=0xb3, .y=0x3d, .sp=0xd0, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x9911, .value=0x8d}, {.addr=0x9912, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9913, .a=0x4b, .x=0xb3, .y=0x1c, .sp=0xd0, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9911, .value=0x8d}, {.addr=0x9912, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9911, .value=0x8d, .type=IO_READ},
        {.addr=0x9912, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0253) {
    const struct CPU_State initial_cpu = {.pc=0xae94, .a=0xca, .x=0x0a, .y=0x16, .sp=0xfb, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xae94, .value=0x8d}, {.addr=0xae95, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xae96, .a=0xca, .x=0x0a, .y=0x31, .sp=0xfb, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xae94, .value=0x8d}, {.addr=0xae95, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xae94, .value=0x8d, .type=IO_READ},
        {.addr=0xae95, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0254) {
    const struct CPU_State initial_cpu = {.pc=0x088c, .a=0xa0, .x=0x2d, .y=0xe3, .sp=0x78, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x088c, .value=0x8d}, {.addr=0x088d, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x088e, .a=0xa0, .x=0x2d, .y=0x15, .sp=0x78, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x088c, .value=0x8d}, {.addr=0x088d, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x088c, .value=0x8d, .type=IO_READ},
        {.addr=0x088d, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0255) {
    const struct CPU_State initial_cpu = {.pc=0x8250, .a=0x65, .x=0x03, .y=0x40, .sp=0x08, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x8250, .value=0x8d}, {.addr=0x8251, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8252, .a=0x65, .x=0x03, .y=0x06, .sp=0x08, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8250, .value=0x8d}, {.addr=0x8251, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8250, .value=0x8d, .type=IO_READ},
        {.addr=0x8251, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0256) {
    const struct CPU_State initial_cpu = {.pc=0x858f, .a=0xbc, .x=0x3a, .y=0x9a, .sp=0x98, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x858f, .value=0x8d}, {.addr=0x8590, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x8591, .a=0xbc, .x=0x3a, .y=0xac, .sp=0x98, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x858f, .value=0x8d}, {.addr=0x8590, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x858f, .value=0x8d, .type=IO_READ},
        {.addr=0x8590, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0257) {
    const struct CPU_State initial_cpu = {.pc=0x9856, .a=0x00, .x=0x6f, .y=0xfb, .sp=0x0e, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x9856, .value=0x8d}, {.addr=0x9857, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x9858, .a=0x00, .x=0x6f, .y=0xc9, .sp=0x0e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9856, .value=0x8d}, {.addr=0x9857, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x9856, .value=0x8d, .type=IO_READ},
        {.addr=0x9857, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0258) {
    const struct CPU_State initial_cpu = {.pc=0x52c8, .a=0xe5, .x=0x4a, .y=0x9e, .sp=0x6c, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x52c8, .value=0x8d}, {.addr=0x52c9, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x52ca, .a=0xe5, .x=0x4a, .y=0x92, .sp=0x6c, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x52c8, .value=0x8d}, {.addr=0x52c9, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x52c8, .value=0x8d, .type=IO_READ},
        {.addr=0x52c9, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0259) {
    const struct CPU_State initial_cpu = {.pc=0x9c28, .a=0x26, .x=0xdc, .y=0x84, .sp=0x8e, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x9c28, .value=0x8d}, {.addr=0x9c29, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x9c2a, .a=0x26, .x=0xdc, .y=0xf3, .sp=0x8e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x9c28, .value=0x8d}, {.addr=0x9c29, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x9c28, .value=0x8d, .type=IO_READ},
        {.addr=0x9c29, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_025A) {
    const struct CPU_State initial_cpu = {.pc=0x3435, .a=0x04, .x=0x2e, .y=0xd7, .sp=0xdb, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x3435, .value=0x8d}, {.addr=0x3436, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x3437, .a=0x04, .x=0x2e, .y=0xb6, .sp=0xdb, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3435, .value=0x8d}, {.addr=0x3436, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x3435, .value=0x8d, .type=IO_READ},
        {.addr=0x3436, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_025B) {
    const struct CPU_State initial_cpu = {.pc=0x4c2f, .a=0xe5, .x=0xf8, .y=0x61, .sp=0x24, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x4c2f, .value=0x8d}, {.addr=0x4c30, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x4c31, .a=0xe5, .x=0xf8, .y=0xf4, .sp=0x24, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x4c2f, .value=0x8d}, {.addr=0x4c30, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x4c2f, .value=0x8d, .type=IO_READ},
        {.addr=0x4c30, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_025C) {
    const struct CPU_State initial_cpu = {.pc=0xd727, .a=0x6a, .x=0x4e, .y=0x4d, .sp=0x06, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd727, .value=0x8d}, {.addr=0xd728, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xd729, .a=0x6a, .x=0x4e, .y=0x29, .sp=0x06, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xd727, .value=0x8d}, {.addr=0xd728, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xd727, .value=0x8d, .type=IO_READ},
        {.addr=0xd728, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_025D) {
    const struct CPU_State initial_cpu = {.pc=0xf72b, .a=0x88, .x=0xc1, .y=0xa0, .sp=0x2e, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xf72b, .value=0x8d}, {.addr=0xf72c, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xf72d, .a=0x88, .x=0xc1, .y=0xf1, .sp=0x2e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf72b, .value=0x8d}, {.addr=0xf72c, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xf72b, .value=0x8d, .type=IO_READ},
        {.addr=0xf72c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_025E) {
    const struct CPU_State initial_cpu = {.pc=0x90d8, .a=0x4e, .x=0x11, .y=0x0b, .sp=0x9c, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x90d8, .value=0x8d}, {.addr=0x90d9, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x90da, .a=0x4e, .x=0x11, .y=0xc2, .sp=0x9c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x90d8, .value=0x8d}, {.addr=0x90d9, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x90d8, .value=0x8d, .type=IO_READ},
        {.addr=0x90d9, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_025F) {
    const struct CPU_State initial_cpu = {.pc=0x5ced, .a=0xaa, .x=0xe9, .y=0x08, .sp=0x5f, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x5ced, .value=0x8d}, {.addr=0x5cee, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x5cef, .a=0xaa, .x=0xe9, .y=0x14, .sp=0x5f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5ced, .value=0x8d}, {.addr=0x5cee, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x5ced, .value=0x8d, .type=IO_READ},
        {.addr=0x5cee, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0260) {
    const struct CPU_State initial_cpu = {.pc=0x5eb4, .a=0xab, .x=0x27, .y=0x27, .sp=0xeb, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5eb4, .value=0x8d}, {.addr=0x5eb5, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x5eb6, .a=0xab, .x=0x27, .y=0x4f, .sp=0xeb, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5eb4, .value=0x8d}, {.addr=0x5eb5, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x5eb4, .value=0x8d, .type=IO_READ},
        {.addr=0x5eb5, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0261) {
    const struct CPU_State initial_cpu = {.pc=0xc757, .a=0x1d, .x=0xd6, .y=0x81, .sp=0x38, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xc757, .value=0x8d}, {.addr=0xc758, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xc759, .a=0x1d, .x=0xd6, .y=0xd5, .sp=0x38, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xc757, .value=0x8d}, {.addr=0xc758, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xc757, .value=0x8d, .type=IO_READ},
        {.addr=0xc758, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0262) {
    const struct CPU_State initial_cpu = {.pc=0x6fb0, .a=0xb9, .x=0xdb, .y=0xfe, .sp=0x08, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb0, .value=0x8d}, {.addr=0x6fb1, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x6fb2, .a=0xb9, .x=0xdb, .y=0x7e, .sp=0x08, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6fb0, .value=0x8d}, {.addr=0x6fb1, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x6fb0, .value=0x8d, .type=IO_READ},
        {.addr=0x6fb1, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0263) {
    const struct CPU_State initial_cpu = {.pc=0x14fb, .a=0x1e, .x=0x3f, .y=0x2c, .sp=0x45, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x14fb, .value=0x8d}, {.addr=0x14fc, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x14fd, .a=0x1e, .x=0x3f, .y=0x1b, .sp=0x45, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x14fb, .value=0x8d}, {.addr=0x14fc, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x14fb, .value=0x8d, .type=IO_READ},
        {.addr=0x14fc, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0264) {
    const struct CPU_State initial_cpu = {.pc=0x3974, .a=0xb2, .x=0x39, .y=0xe9, .sp=0x38, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x3974, .value=0x8d}, {.addr=0x3975, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x3976, .a=0xb2, .x=0x39, .y=0x8d, .sp=0x38, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3974, .value=0x8d}, {.addr=0x3975, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x3974, .value=0x8d, .type=IO_READ},
        {.addr=0x3975, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0265) {
    const struct CPU_State initial_cpu = {.pc=0xd4c4, .a=0xf7, .x=0x82, .y=0xe2, .sp=0x50, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c4, .value=0x8d}, {.addr=0xd4c5, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xd4c6, .a=0xf7, .x=0x82, .y=0xe2, .sp=0x50, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xd4c4, .value=0x8d}, {.addr=0xd4c5, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xd4c4, .value=0x8d, .type=IO_READ},
        {.addr=0xd4c5, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0266) {
    const struct CPU_State initial_cpu = {.pc=0xba25, .a=0xdf, .x=0xef, .y=0x3a, .sp=0xd9, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xba25, .value=0x8d}, {.addr=0xba26, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xba27, .a=0xdf, .x=0xef, .y=0xe5, .sp=0xd9, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xba25, .value=0x8d}, {.addr=0xba26, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xba25, .value=0x8d, .type=IO_READ},
        {.addr=0xba26, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0267) {
    const struct CPU_State initial_cpu = {.pc=0xb7f2, .a=0x49, .x=0x39, .y=0x5b, .sp=0xad, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xb7f2, .value=0x8d}, {.addr=0xb7f3, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xb7f4, .a=0x49, .x=0x39, .y=0xa2, .sp=0xad, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xb7f2, .value=0x8d}, {.addr=0xb7f3, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xb7f2, .value=0x8d, .type=IO_READ},
        {.addr=0xb7f3, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0268) {
    const struct CPU_State initial_cpu = {.pc=0x8412, .a=0x42, .x=0x6e, .y=0x9c, .sp=0xdb, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x8412, .value=0x8d}, {.addr=0x8413, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x8414, .a=0x42, .x=0x6e, .y=0xcd, .sp=0xdb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8412, .value=0x8d}, {.addr=0x8413, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x8412, .value=0x8d, .type=IO_READ},
        {.addr=0x8413, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0269) {
    const struct CPU_State initial_cpu = {.pc=0x32ff, .a=0x17, .x=0x81, .y=0x8d, .sp=0x78, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x32ff, .value=0x8d}, {.addr=0x3300, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x3301, .a=0x17, .x=0x81, .y=0x01, .sp=0x78, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x32ff, .value=0x8d}, {.addr=0x3300, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x32ff, .value=0x8d, .type=IO_READ},
        {.addr=0x3300, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_026A) {
    const struct CPU_State initial_cpu = {.pc=0xddcc, .a=0x75, .x=0x0e, .y=0x79, .sp=0x67, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xddcc, .value=0x8d}, {.addr=0xddcd, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xddce, .a=0x75, .x=0x0e, .y=0x8e, .sp=0x67, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xddcc, .value=0x8d}, {.addr=0xddcd, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xddcc, .value=0x8d, .type=IO_READ},
        {.addr=0xddcd, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_026B) {
    const struct CPU_State initial_cpu = {.pc=0x1bbb, .a=0xf7, .x=0x22, .y=0x6d, .sp=0x9c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x1bbb, .value=0x8d}, {.addr=0x1bbc, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x1bbd, .a=0xf7, .x=0x22, .y=0xcc, .sp=0x9c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x1bbb, .value=0x8d}, {.addr=0x1bbc, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x1bbb, .value=0x8d, .type=IO_READ},
        {.addr=0x1bbc, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_026C) {
    const struct CPU_State initial_cpu = {.pc=0x959f, .a=0x9c, .x=0x84, .y=0x42, .sp=0xf4, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x959f, .value=0x8d}, {.addr=0x95a0, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x95a1, .a=0x9c, .x=0x84, .y=0xe5, .sp=0xf4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x959f, .value=0x8d}, {.addr=0x95a0, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x959f, .value=0x8d, .type=IO_READ},
        {.addr=0x95a0, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_026D) {
    const struct CPU_State initial_cpu = {.pc=0xb488, .a=0x8a, .x=0x1f, .y=0xac, .sp=0xf4, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb488, .value=0x8d}, {.addr=0xb489, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xb48a, .a=0x8a, .x=0x1f, .y=0x58, .sp=0xf4, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xb488, .value=0x8d}, {.addr=0xb489, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xb488, .value=0x8d, .type=IO_READ},
        {.addr=0xb489, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_026E) {
    const struct CPU_State initial_cpu = {.pc=0x8f5b, .a=0x33, .x=0xe1, .y=0x83, .sp=0xf3, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8f5b, .value=0x8d}, {.addr=0x8f5c, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x8f5d, .a=0x33, .x=0xe1, .y=0x5f, .sp=0xf3, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8f5b, .value=0x8d}, {.addr=0x8f5c, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x8f5b, .value=0x8d, .type=IO_READ},
        {.addr=0x8f5c, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_026F) {
    const struct CPU_State initial_cpu = {.pc=0xc593, .a=0x96, .x=0xc3, .y=0x7b, .sp=0x0f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xc593, .value=0x8d}, {.addr=0xc594, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xc595, .a=0x96, .x=0xc3, .y=0x65, .sp=0x0f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc593, .value=0x8d}, {.addr=0xc594, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xc593, .value=0x8d, .type=IO_READ},
        {.addr=0xc594, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0270) {
    const struct CPU_State initial_cpu = {.pc=0x7363, .a=0x00, .x=0xf7, .y=0x7e, .sp=0x38, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x7363, .value=0x8d}, {.addr=0x7364, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x7365, .a=0x00, .x=0xf7, .y=0xb4, .sp=0x38, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7363, .value=0x8d}, {.addr=0x7364, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x7363, .value=0x8d, .type=IO_READ},
        {.addr=0x7364, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0271) {
    const struct CPU_State initial_cpu = {.pc=0x5a4c, .a=0x55, .x=0xe3, .y=0x95, .sp=0x60, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x5a4c, .value=0x8d}, {.addr=0x5a4d, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x5a4e, .a=0x55, .x=0xe3, .y=0xd5, .sp=0x60, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5a4c, .value=0x8d}, {.addr=0x5a4d, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x5a4c, .value=0x8d, .type=IO_READ},
        {.addr=0x5a4d, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0272) {
    const struct CPU_State initial_cpu = {.pc=0x1bcf, .a=0xbc, .x=0x21, .y=0x70, .sp=0xfc, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x1bcf, .value=0x8d}, {.addr=0x1bd0, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x1bd1, .a=0xbc, .x=0x21, .y=0x5b, .sp=0xfc, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1bcf, .value=0x8d}, {.addr=0x1bd0, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x1bcf, .value=0x8d, .type=IO_READ},
        {.addr=0x1bd0, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0273) {
    const struct CPU_State initial_cpu = {.pc=0x1a05, .a=0x0d, .x=0xe3, .y=0x2e, .sp=0x29, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x1a05, .value=0x8d}, {.addr=0x1a06, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x1a07, .a=0x0d, .x=0xe3, .y=0x72, .sp=0x29, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1a05, .value=0x8d}, {.addr=0x1a06, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x1a05, .value=0x8d, .type=IO_READ},
        {.addr=0x1a06, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0274) {
    const struct CPU_State initial_cpu = {.pc=0xbd3c, .a=0xb5, .x=0x8d, .y=0xdf, .sp=0x11, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xbd3c, .value=0x8d}, {.addr=0xbd3d, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xbd3e, .a=0xb5, .x=0x8d, .y=0x87, .sp=0x11, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xbd3c, .value=0x8d}, {.addr=0xbd3d, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xbd3c, .value=0x8d, .type=IO_READ},
        {.addr=0xbd3d, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0275) {
    const struct CPU_State initial_cpu = {.pc=0x10cc, .a=0xc6, .x=0xb5, .y=0x9d, .sp=0x9d, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x10cc, .value=0x8d}, {.addr=0x10cd, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x10ce, .a=0xc6, .x=0xb5, .y=0xa3, .sp=0x9d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x10cc, .value=0x8d}, {.addr=0x10cd, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x10cc, .value=0x8d, .type=IO_READ},
        {.addr=0x10cd, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0276) {
    const struct CPU_State initial_cpu = {.pc=0x19f8, .a=0xa5, .x=0xfc, .y=0x37, .sp=0xc2, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x19f8, .value=0x8d}, {.addr=0x19f9, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x19fa, .a=0xa5, .x=0xfc, .y=0x0c, .sp=0xc2, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x19f8, .value=0x8d}, {.addr=0x19f9, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x19f8, .value=0x8d, .type=IO_READ},
        {.addr=0x19f9, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0277) {
    const struct CPU_State initial_cpu = {.pc=0x5ff4, .a=0x1d, .x=0xf4, .y=0xb9, .sp=0x01, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x5ff4, .value=0x8d}, {.addr=0x5ff5, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x5ff6, .a=0x1d, .x=0xf4, .y=0x64, .sp=0x01, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5ff4, .value=0x8d}, {.addr=0x5ff5, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x5ff4, .value=0x8d, .type=IO_READ},
        {.addr=0x5ff5, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0278) {
    const struct CPU_State initial_cpu = {.pc=0xf0fa, .a=0x29, .x=0x18, .y=0xa1, .sp=0x43, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xf0fa, .value=0x8d}, {.addr=0xf0fb, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xf0fc, .a=0x29, .x=0x18, .y=0xac, .sp=0x43, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xf0fa, .value=0x8d}, {.addr=0xf0fb, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xf0fa, .value=0x8d, .type=IO_READ},
        {.addr=0xf0fb, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0279) {
    const struct CPU_State initial_cpu = {.pc=0x6076, .a=0xc3, .x=0x77, .y=0x11, .sp=0x15, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x6076, .value=0x8d}, {.addr=0x6077, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x6078, .a=0xc3, .x=0x77, .y=0xc7, .sp=0x15, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x6076, .value=0x8d}, {.addr=0x6077, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x6076, .value=0x8d, .type=IO_READ},
        {.addr=0x6077, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_027A) {
    const struct CPU_State initial_cpu = {.pc=0x270d, .a=0x3d, .x=0x5e, .y=0xb8, .sp=0x72, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x270d, .value=0x8d}, {.addr=0x270e, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x270f, .a=0x3d, .x=0x5e, .y=0x22, .sp=0x72, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x270d, .value=0x8d}, {.addr=0x270e, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x270d, .value=0x8d, .type=IO_READ},
        {.addr=0x270e, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_027B) {
    const struct CPU_State initial_cpu = {.pc=0xa10d, .a=0x09, .x=0x88, .y=0xfe, .sp=0xbc, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xa10d, .value=0x8d}, {.addr=0xa10e, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xa10f, .a=0x09, .x=0x88, .y=0x24, .sp=0xbc, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xa10d, .value=0x8d}, {.addr=0xa10e, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xa10d, .value=0x8d, .type=IO_READ},
        {.addr=0xa10e, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_027C) {
    const struct CPU_State initial_cpu = {.pc=0x2e66, .a=0x4a, .x=0xb8, .y=0xc2, .sp=0x6b, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x2e66, .value=0x8d}, {.addr=0x2e67, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2e68, .a=0x4a, .x=0xb8, .y=0x1d, .sp=0x6b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2e66, .value=0x8d}, {.addr=0x2e67, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2e66, .value=0x8d, .type=IO_READ},
        {.addr=0x2e67, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_027D) {
    const struct CPU_State initial_cpu = {.pc=0xead6, .a=0x7e, .x=0x8e, .y=0x11, .sp=0x22, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xead6, .value=0x8d}, {.addr=0xead7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xead8, .a=0x7e, .x=0x8e, .y=0xfd, .sp=0x22, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xead6, .value=0x8d}, {.addr=0xead7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xead6, .value=0x8d, .type=IO_READ},
        {.addr=0xead7, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_027E) {
    const struct CPU_State initial_cpu = {.pc=0x5e89, .a=0x3e, .x=0x45, .y=0xfe, .sp=0x96, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5e89, .value=0x8d}, {.addr=0x5e8a, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x5e8b, .a=0x3e, .x=0x45, .y=0x17, .sp=0x96, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5e89, .value=0x8d}, {.addr=0x5e8a, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x5e89, .value=0x8d, .type=IO_READ},
        {.addr=0x5e8a, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_027F) {
    const struct CPU_State initial_cpu = {.pc=0x60de, .a=0x5e, .x=0xf2, .y=0xcb, .sp=0xc8, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x60de, .value=0x8d}, {.addr=0x60df, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x60e0, .a=0x5e, .x=0xf2, .y=0x49, .sp=0xc8, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x60de, .value=0x8d}, {.addr=0x60df, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x60de, .value=0x8d, .type=IO_READ},
        {.addr=0x60df, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0280) {
    const struct CPU_State initial_cpu = {.pc=0xf8a3, .a=0x43, .x=0x46, .y=0x30, .sp=0x54, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xf8a3, .value=0x8d}, {.addr=0xf8a4, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xf8a5, .a=0x43, .x=0x46, .y=0x62, .sp=0x54, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf8a3, .value=0x8d}, {.addr=0xf8a4, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xf8a3, .value=0x8d, .type=IO_READ},
        {.addr=0xf8a4, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0281) {
    const struct CPU_State initial_cpu = {.pc=0x95f2, .a=0xcd, .x=0xdc, .y=0x95, .sp=0xb5, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x95f2, .value=0x8d}, {.addr=0x95f3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x95f4, .a=0xcd, .x=0xdc, .y=0xee, .sp=0xb5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x95f2, .value=0x8d}, {.addr=0x95f3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x95f2, .value=0x8d, .type=IO_READ},
        {.addr=0x95f3, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0282) {
    const struct CPU_State initial_cpu = {.pc=0xed97, .a=0x72, .x=0x0c, .y=0xd8, .sp=0x8b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xed97, .value=0x8d}, {.addr=0xed98, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xed99, .a=0x72, .x=0x0c, .y=0xa8, .sp=0x8b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xed97, .value=0x8d}, {.addr=0xed98, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xed97, .value=0x8d, .type=IO_READ},
        {.addr=0xed98, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0283) {
    const struct CPU_State initial_cpu = {.pc=0x503d, .a=0x62, .x=0x1e, .y=0xf6, .sp=0xb2, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x503d, .value=0x8d}, {.addr=0x503e, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x503f, .a=0x62, .x=0x1e, .y=0xd8, .sp=0xb2, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x503d, .value=0x8d}, {.addr=0x503e, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x503d, .value=0x8d, .type=IO_READ},
        {.addr=0x503e, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0284) {
    const struct CPU_State initial_cpu = {.pc=0xbacb, .a=0x23, .x=0x43, .y=0x4d, .sp=0x7e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xbacb, .value=0x8d}, {.addr=0xbacc, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xbacd, .a=0x23, .x=0x43, .y=0x2a, .sp=0x7e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xbacb, .value=0x8d}, {.addr=0xbacc, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xbacb, .value=0x8d, .type=IO_READ},
        {.addr=0xbacc, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0285) {
    const struct CPU_State initial_cpu = {.pc=0xb254, .a=0x17, .x=0x46, .y=0xef, .sp=0x25, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xb254, .value=0x8d}, {.addr=0xb255, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xb256, .a=0x17, .x=0x46, .y=0x0c, .sp=0x25, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb254, .value=0x8d}, {.addr=0xb255, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xb254, .value=0x8d, .type=IO_READ},
        {.addr=0xb255, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0286) {
    const struct CPU_State initial_cpu = {.pc=0xc1a7, .a=0x18, .x=0xcd, .y=0xad, .sp=0x2f, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xc1a7, .value=0x8d}, {.addr=0xc1a8, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xc1a9, .a=0x18, .x=0xcd, .y=0xcf, .sp=0x2f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc1a7, .value=0x8d}, {.addr=0xc1a8, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xc1a7, .value=0x8d, .type=IO_READ},
        {.addr=0xc1a8, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0287) {
    const struct CPU_State initial_cpu = {.pc=0x0c9c, .a=0x03, .x=0xbd, .y=0xfb, .sp=0x3a, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0c9c, .value=0x8d}, {.addr=0x0c9d, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x0c9e, .a=0x03, .x=0xbd, .y=0x3e, .sp=0x3a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0c9c, .value=0x8d}, {.addr=0x0c9d, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x0c9c, .value=0x8d, .type=IO_READ},
        {.addr=0x0c9d, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0288) {
    const struct CPU_State initial_cpu = {.pc=0xeee3, .a=0x74, .x=0x67, .y=0x99, .sp=0xcc, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xeee3, .value=0x8d}, {.addr=0xeee4, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xeee5, .a=0x74, .x=0x67, .y=0xb0, .sp=0xcc, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xeee3, .value=0x8d}, {.addr=0xeee4, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xeee3, .value=0x8d, .type=IO_READ},
        {.addr=0xeee4, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0289) {
    const struct CPU_State initial_cpu = {.pc=0xbe98, .a=0x5d, .x=0x32, .y=0x76, .sp=0x3c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xbe98, .value=0x8d}, {.addr=0xbe99, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xbe9a, .a=0x5d, .x=0x32, .y=0x53, .sp=0x3c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xbe98, .value=0x8d}, {.addr=0xbe99, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xbe98, .value=0x8d, .type=IO_READ},
        {.addr=0xbe99, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_028A) {
    const struct CPU_State initial_cpu = {.pc=0xc4bc, .a=0x09, .x=0x84, .y=0xa4, .sp=0xc7, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xc4bc, .value=0x8d}, {.addr=0xc4bd, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xc4be, .a=0x09, .x=0x84, .y=0xd7, .sp=0xc7, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc4bc, .value=0x8d}, {.addr=0xc4bd, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xc4bc, .value=0x8d, .type=IO_READ},
        {.addr=0xc4bd, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_028B) {
    const struct CPU_State initial_cpu = {.pc=0x8aa9, .a=0xca, .x=0x5a, .y=0x41, .sp=0xc5, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x8aa9, .value=0x8d}, {.addr=0x8aaa, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x8aab, .a=0xca, .x=0x5a, .y=0xea, .sp=0xc5, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8aa9, .value=0x8d}, {.addr=0x8aaa, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x8aa9, .value=0x8d, .type=IO_READ},
        {.addr=0x8aaa, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_028C) {
    const struct CPU_State initial_cpu = {.pc=0x8084, .a=0x4e, .x=0x2d, .y=0x35, .sp=0x79, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x8084, .value=0x8d}, {.addr=0x8085, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x8086, .a=0x4e, .x=0x2d, .y=0x8f, .sp=0x79, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8084, .value=0x8d}, {.addr=0x8085, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x8084, .value=0x8d, .type=IO_READ},
        {.addr=0x8085, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_028D) {
    const struct CPU_State initial_cpu = {.pc=0x4e89, .a=0x52, .x=0x83, .y=0xdb, .sp=0x79, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x4e89, .value=0x8d}, {.addr=0x4e8a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x4e8b, .a=0x52, .x=0x83, .y=0xdd, .sp=0x79, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x4e89, .value=0x8d}, {.addr=0x4e8a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x4e89, .value=0x8d, .type=IO_READ},
        {.addr=0x4e8a, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_028E) {
    const struct CPU_State initial_cpu = {.pc=0xeec6, .a=0x6a, .x=0x47, .y=0x38, .sp=0x15, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xeec6, .value=0x8d}, {.addr=0xeec7, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xeec8, .a=0x6a, .x=0x47, .y=0xa9, .sp=0x15, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xeec6, .value=0x8d}, {.addr=0xeec7, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xeec6, .value=0x8d, .type=IO_READ},
        {.addr=0xeec7, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_028F) {
    const struct CPU_State initial_cpu = {.pc=0x4dea, .a=0xd1, .x=0x5a, .y=0xc0, .sp=0xd2, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4dea, .value=0x8d}, {.addr=0x4deb, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x4dec, .a=0xd1, .x=0x5a, .y=0xc4, .sp=0xd2, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4dea, .value=0x8d}, {.addr=0x4deb, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x4dea, .value=0x8d, .type=IO_READ},
        {.addr=0x4deb, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0290) {
    const struct CPU_State initial_cpu = {.pc=0x0fd9, .a=0x41, .x=0xb8, .y=0x03, .sp=0x68, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0fd9, .value=0x8d}, {.addr=0x0fda, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x0fdb, .a=0x41, .x=0xb8, .y=0x9b, .sp=0x68, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0fd9, .value=0x8d}, {.addr=0x0fda, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x0fd9, .value=0x8d, .type=IO_READ},
        {.addr=0x0fda, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0291) {
    const struct CPU_State initial_cpu = {.pc=0xef9a, .a=0x6c, .x=0x01, .y=0x3f, .sp=0x53, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xef9a, .value=0x8d}, {.addr=0xef9b, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xef9c, .a=0x6c, .x=0x01, .y=0xac, .sp=0x53, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xef9a, .value=0x8d}, {.addr=0xef9b, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xef9a, .value=0x8d, .type=IO_READ},
        {.addr=0xef9b, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0292) {
    const struct CPU_State initial_cpu = {.pc=0x10e6, .a=0x8a, .x=0x9b, .y=0x34, .sp=0x38, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x10e6, .value=0x8d}, {.addr=0x10e7, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x10e8, .a=0x8a, .x=0x9b, .y=0x6b, .sp=0x38, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x10e6, .value=0x8d}, {.addr=0x10e7, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x10e6, .value=0x8d, .type=IO_READ},
        {.addr=0x10e7, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0293) {
    const struct CPU_State initial_cpu = {.pc=0xfae7, .a=0x97, .x=0xeb, .y=0x86, .sp=0x45, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xfae7, .value=0x8d}, {.addr=0xfae8, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xfae9, .a=0x97, .x=0xeb, .y=0xb0, .sp=0x45, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xfae7, .value=0x8d}, {.addr=0xfae8, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xfae7, .value=0x8d, .type=IO_READ},
        {.addr=0xfae8, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0294) {
    const struct CPU_State initial_cpu = {.pc=0x8473, .a=0x2a, .x=0x37, .y=0x27, .sp=0x09, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x8473, .value=0x8d}, {.addr=0x8474, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x8475, .a=0x2a, .x=0x37, .y=0xe9, .sp=0x09, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8473, .value=0x8d}, {.addr=0x8474, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x8473, .value=0x8d, .type=IO_READ},
        {.addr=0x8474, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0295) {
    const struct CPU_State initial_cpu = {.pc=0x9914, .a=0x6d, .x=0x48, .y=0x8a, .sp=0x7e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x9914, .value=0x8d}, {.addr=0x9915, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x9916, .a=0x6d, .x=0x48, .y=0x44, .sp=0x7e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9914, .value=0x8d}, {.addr=0x9915, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x9914, .value=0x8d, .type=IO_READ},
        {.addr=0x9915, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0296) {
    const struct CPU_State initial_cpu = {.pc=0xdb78, .a=0xbe, .x=0xf4, .y=0x6f, .sp=0xc5, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xdb78, .value=0x8d}, {.addr=0xdb79, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xdb7a, .a=0xbe, .x=0xf4, .y=0x4a, .sp=0xc5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xdb78, .value=0x8d}, {.addr=0xdb79, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xdb78, .value=0x8d, .type=IO_READ},
        {.addr=0xdb79, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0297) {
    const struct CPU_State initial_cpu = {.pc=0x42c5, .a=0xa0, .x=0x2a, .y=0xda, .sp=0x21, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x42c5, .value=0x8d}, {.addr=0x42c6, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x42c7, .a=0xa0, .x=0x2a, .y=0x90, .sp=0x21, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x42c5, .value=0x8d}, {.addr=0x42c6, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x42c5, .value=0x8d, .type=IO_READ},
        {.addr=0x42c6, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0298) {
    const struct CPU_State initial_cpu = {.pc=0xef3f, .a=0x32, .x=0x5a, .y=0x22, .sp=0x35, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xef3f, .value=0x8d}, {.addr=0xef40, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xef41, .a=0x32, .x=0x5a, .y=0x77, .sp=0x35, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xef3f, .value=0x8d}, {.addr=0xef40, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xef3f, .value=0x8d, .type=IO_READ},
        {.addr=0xef40, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0299) {
    const struct CPU_State initial_cpu = {.pc=0x7db5, .a=0x86, .x=0x74, .y=0x7a, .sp=0x36, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x7db5, .value=0x8d}, {.addr=0x7db6, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x7db7, .a=0x86, .x=0x74, .y=0xeb, .sp=0x36, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x7db5, .value=0x8d}, {.addr=0x7db6, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x7db5, .value=0x8d, .type=IO_READ},
        {.addr=0x7db6, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_029A) {
    const struct CPU_State initial_cpu = {.pc=0xad5c, .a=0x99, .x=0x24, .y=0xee, .sp=0x43, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xad5c, .value=0x8d}, {.addr=0xad5d, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xad5e, .a=0x99, .x=0x24, .y=0x16, .sp=0x43, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xad5c, .value=0x8d}, {.addr=0xad5d, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xad5c, .value=0x8d, .type=IO_READ},
        {.addr=0xad5d, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_029B) {
    const struct CPU_State initial_cpu = {.pc=0xa9d9, .a=0xca, .x=0x3f, .y=0xc7, .sp=0x21, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xa9d9, .value=0x8d}, {.addr=0xa9da, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xa9db, .a=0xca, .x=0x3f, .y=0x8d, .sp=0x21, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa9d9, .value=0x8d}, {.addr=0xa9da, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xa9d9, .value=0x8d, .type=IO_READ},
        {.addr=0xa9da, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_029C) {
    const struct CPU_State initial_cpu = {.pc=0x7f8f, .a=0x56, .x=0x69, .y=0xbb, .sp=0xc5, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x7f8f, .value=0x8d}, {.addr=0x7f90, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x7f91, .a=0x56, .x=0x69, .y=0x30, .sp=0xc5, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x7f8f, .value=0x8d}, {.addr=0x7f90, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x7f8f, .value=0x8d, .type=IO_READ},
        {.addr=0x7f90, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_029D) {
    const struct CPU_State initial_cpu = {.pc=0x2799, .a=0x9a, .x=0x56, .y=0xdb, .sp=0xce, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x2799, .value=0x8d}, {.addr=0x279a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x279b, .a=0x9a, .x=0x56, .y=0x80, .sp=0xce, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2799, .value=0x8d}, {.addr=0x279a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2799, .value=0x8d, .type=IO_READ},
        {.addr=0x279a, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_029E) {
    const struct CPU_State initial_cpu = {.pc=0x83db, .a=0x17, .x=0xdf, .y=0x86, .sp=0x80, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x83db, .value=0x8d}, {.addr=0x83dc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x83dd, .a=0x17, .x=0xdf, .y=0xa6, .sp=0x80, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x83db, .value=0x8d}, {.addr=0x83dc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x83db, .value=0x8d, .type=IO_READ},
        {.addr=0x83dc, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_029F) {
    const struct CPU_State initial_cpu = {.pc=0x1944, .a=0xf1, .x=0x75, .y=0x71, .sp=0x80, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x1944, .value=0x8d}, {.addr=0x1945, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x1946, .a=0xf1, .x=0x75, .y=0x01, .sp=0x80, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1944, .value=0x8d}, {.addr=0x1945, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x1944, .value=0x8d, .type=IO_READ},
        {.addr=0x1945, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x1aa5, .a=0xeb, .x=0x76, .y=0x2d, .sp=0x44, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x1aa5, .value=0x8d}, {.addr=0x1aa6, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x1aa7, .a=0xeb, .x=0x76, .y=0x90, .sp=0x44, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1aa5, .value=0x8d}, {.addr=0x1aa6, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x1aa5, .value=0x8d, .type=IO_READ},
        {.addr=0x1aa6, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x3f65, .a=0xb9, .x=0x7e, .y=0x34, .sp=0x94, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x3f65, .value=0x8d}, {.addr=0x3f66, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x3f67, .a=0xb9, .x=0x7e, .y=0x8d, .sp=0x94, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x3f65, .value=0x8d}, {.addr=0x3f66, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x3f65, .value=0x8d, .type=IO_READ},
        {.addr=0x3f66, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xd67a, .a=0x74, .x=0x6d, .y=0x0c, .sp=0x2a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xd67a, .value=0x8d}, {.addr=0xd67b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd67c, .a=0x74, .x=0x6d, .y=0x3d, .sp=0x2a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd67a, .value=0x8d}, {.addr=0xd67b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd67a, .value=0x8d, .type=IO_READ},
        {.addr=0xd67b, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xd9ee, .a=0x96, .x=0x15, .y=0x3c, .sp=0x4f, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ee, .value=0x8d}, {.addr=0xd9ef, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xd9f0, .a=0x96, .x=0x15, .y=0x08, .sp=0x4f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd9ee, .value=0x8d}, {.addr=0xd9ef, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xd9ee, .value=0x8d, .type=IO_READ},
        {.addr=0xd9ef, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x9820, .a=0xdf, .x=0xf3, .y=0x96, .sp=0xa5, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x9820, .value=0x8d}, {.addr=0x9821, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x9822, .a=0xdf, .x=0xf3, .y=0x53, .sp=0xa5, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9820, .value=0x8d}, {.addr=0x9821, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x9820, .value=0x8d, .type=IO_READ},
        {.addr=0x9821, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x23a4, .a=0xbd, .x=0x85, .y=0x3c, .sp=0x63, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x23a4, .value=0x8d}, {.addr=0x23a5, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x23a6, .a=0xbd, .x=0x85, .y=0x88, .sp=0x63, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x23a4, .value=0x8d}, {.addr=0x23a5, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x23a4, .value=0x8d, .type=IO_READ},
        {.addr=0x23a5, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xc855, .a=0x4c, .x=0xd8, .y=0x67, .sp=0xcf, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xc855, .value=0x8d}, {.addr=0xc856, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xc857, .a=0x4c, .x=0xd8, .y=0x58, .sp=0xcf, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc855, .value=0x8d}, {.addr=0xc856, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xc855, .value=0x8d, .type=IO_READ},
        {.addr=0xc856, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xb5a4, .a=0xd6, .x=0x15, .y=0x6b, .sp=0x9f, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xb5a4, .value=0x8d}, {.addr=0xb5a5, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xb5a6, .a=0xd6, .x=0x15, .y=0x2a, .sp=0x9f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xb5a4, .value=0x8d}, {.addr=0xb5a5, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xb5a4, .value=0x8d, .type=IO_READ},
        {.addr=0xb5a5, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x6a17, .a=0x5d, .x=0x83, .y=0xb7, .sp=0xea, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x6a17, .value=0x8d}, {.addr=0x6a18, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x6a19, .a=0x5d, .x=0x83, .y=0x3f, .sp=0xea, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6a17, .value=0x8d}, {.addr=0x6a18, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x6a17, .value=0x8d, .type=IO_READ},
        {.addr=0x6a18, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x3865, .a=0xcc, .x=0x07, .y=0x33, .sp=0x4a, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x3865, .value=0x8d}, {.addr=0x3866, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3867, .a=0xcc, .x=0x07, .y=0xfc, .sp=0x4a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x3865, .value=0x8d}, {.addr=0x3866, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3865, .value=0x8d, .type=IO_READ},
        {.addr=0x3866, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xbad7, .a=0x80, .x=0xa5, .y=0x1b, .sp=0x03, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xbad7, .value=0x8d}, {.addr=0xbad8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbad9, .a=0x80, .x=0xa5, .y=0xbf, .sp=0x03, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xbad7, .value=0x8d}, {.addr=0xbad8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbad7, .value=0x8d, .type=IO_READ},
        {.addr=0xbad8, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x9c59, .a=0xc8, .x=0x91, .y=0x82, .sp=0xec, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x9c59, .value=0x8d}, {.addr=0x9c5a, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x9c5b, .a=0xc8, .x=0x91, .y=0x8f, .sp=0xec, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x9c59, .value=0x8d}, {.addr=0x9c5a, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x9c59, .value=0x8d, .type=IO_READ},
        {.addr=0x9c5a, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xdfb0, .a=0xa2, .x=0x77, .y=0x23, .sp=0xd0, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xdfb0, .value=0x8d}, {.addr=0xdfb1, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xdfb2, .a=0xa2, .x=0x77, .y=0x5f, .sp=0xd0, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xdfb0, .value=0x8d}, {.addr=0xdfb1, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xdfb0, .value=0x8d, .type=IO_READ},
        {.addr=0xdfb1, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x1c9f, .a=0xd6, .x=0x49, .y=0x1e, .sp=0x6a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x1c9f, .value=0x8d}, {.addr=0x1ca0, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x1ca1, .a=0xd6, .x=0x49, .y=0x7a, .sp=0x6a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1c9f, .value=0x8d}, {.addr=0x1ca0, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x1c9f, .value=0x8d, .type=IO_READ},
        {.addr=0x1ca0, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x84eb, .a=0xda, .x=0x00, .y=0x98, .sp=0xc0, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x84eb, .value=0x8d}, {.addr=0x84ec, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x84ed, .a=0xda, .x=0x00, .y=0xf9, .sp=0xc0, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x84eb, .value=0x8d}, {.addr=0x84ec, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x84eb, .value=0x8d, .type=IO_READ},
        {.addr=0x84ec, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xc7f2, .a=0x8e, .x=0xe0, .y=0xbb, .sp=0x3b, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xc7f2, .value=0x8d}, {.addr=0xc7f3, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xc7f4, .a=0x8e, .x=0xe0, .y=0x51, .sp=0x3b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xc7f2, .value=0x8d}, {.addr=0xc7f3, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xc7f2, .value=0x8d, .type=IO_READ},
        {.addr=0xc7f3, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x1be5, .a=0x6e, .x=0xe8, .y=0xe0, .sp=0xf0, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x1be5, .value=0x8d}, {.addr=0x1be6, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x1be7, .a=0x6e, .x=0xe8, .y=0xb6, .sp=0xf0, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x1be5, .value=0x8d}, {.addr=0x1be6, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x1be5, .value=0x8d, .type=IO_READ},
        {.addr=0x1be6, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x3bd0, .a=0x2d, .x=0xab, .y=0x7d, .sp=0xa7, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x3bd0, .value=0x8d}, {.addr=0x3bd1, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x3bd2, .a=0x2d, .x=0xab, .y=0xcf, .sp=0xa7, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3bd0, .value=0x8d}, {.addr=0x3bd1, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x3bd0, .value=0x8d, .type=IO_READ},
        {.addr=0x3bd1, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xf942, .a=0x7e, .x=0xa3, .y=0xb6, .sp=0xcf, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xf942, .value=0x8d}, {.addr=0xf943, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xf944, .a=0x7e, .x=0xa3, .y=0x54, .sp=0xcf, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xf942, .value=0x8d}, {.addr=0xf943, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xf942, .value=0x8d, .type=IO_READ},
        {.addr=0xf943, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xa3f1, .a=0x3d, .x=0xc2, .y=0xec, .sp=0xe8, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa3f1, .value=0x8d}, {.addr=0xa3f2, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xa3f3, .a=0x3d, .x=0xc2, .y=0x8a, .sp=0xe8, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa3f1, .value=0x8d}, {.addr=0xa3f2, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xa3f1, .value=0x8d, .type=IO_READ},
        {.addr=0xa3f2, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xba2f, .a=0x68, .x=0x4a, .y=0xa6, .sp=0xe0, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xba2f, .value=0x8d}, {.addr=0xba30, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xba31, .a=0x68, .x=0x4a, .y=0x43, .sp=0xe0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xba2f, .value=0x8d}, {.addr=0xba30, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xba2f, .value=0x8d, .type=IO_READ},
        {.addr=0xba30, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x3a89, .a=0x7d, .x=0x91, .y=0xf1, .sp=0xf7, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x3a89, .value=0x8d}, {.addr=0x3a8a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3a8b, .a=0x7d, .x=0x91, .y=0xfc, .sp=0xf7, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3a89, .value=0x8d}, {.addr=0x3a8a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3a89, .value=0x8d, .type=IO_READ},
        {.addr=0x3a8a, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xea41, .a=0x3a, .x=0x75, .y=0x2b, .sp=0xe5, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xea41, .value=0x8d}, {.addr=0xea42, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xea43, .a=0x3a, .x=0x75, .y=0xc3, .sp=0xe5, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xea41, .value=0x8d}, {.addr=0xea42, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xea41, .value=0x8d, .type=IO_READ},
        {.addr=0xea42, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xab48, .a=0xbb, .x=0x45, .y=0x1e, .sp=0x6d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xab48, .value=0x8d}, {.addr=0xab49, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xab4a, .a=0xbb, .x=0x45, .y=0x10, .sp=0x6d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xab48, .value=0x8d}, {.addr=0xab49, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xab48, .value=0x8d, .type=IO_READ},
        {.addr=0xab49, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xe444, .a=0x80, .x=0x57, .y=0x72, .sp=0x55, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xe444, .value=0x8d}, {.addr=0xe445, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xe446, .a=0x80, .x=0x57, .y=0x50, .sp=0x55, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe444, .value=0x8d}, {.addr=0xe445, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xe444, .value=0x8d, .type=IO_READ},
        {.addr=0xe445, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x2d56, .a=0xb0, .x=0xf7, .y=0x4c, .sp=0xed, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2d56, .value=0x8d}, {.addr=0x2d57, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2d58, .a=0xb0, .x=0xf7, .y=0x6d, .sp=0xed, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2d56, .value=0x8d}, {.addr=0x2d57, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2d56, .value=0x8d, .type=IO_READ},
        {.addr=0x2d57, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xe992, .a=0x7d, .x=0x2f, .y=0xea, .sp=0xb5, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xe992, .value=0x8d}, {.addr=0xe993, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xe994, .a=0x7d, .x=0x2f, .y=0x9a, .sp=0xb5, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xe992, .value=0x8d}, {.addr=0xe993, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xe992, .value=0x8d, .type=IO_READ},
        {.addr=0xe993, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x2f78, .a=0xb8, .x=0xa0, .y=0x65, .sp=0xac, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x2f78, .value=0x8d}, {.addr=0x2f79, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x2f7a, .a=0xb8, .x=0xa0, .y=0xf0, .sp=0xac, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2f78, .value=0x8d}, {.addr=0x2f79, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x2f78, .value=0x8d, .type=IO_READ},
        {.addr=0x2f79, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xa689, .a=0x13, .x=0x43, .y=0x67, .sp=0x91, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xa689, .value=0x8d}, {.addr=0xa68a, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xa68b, .a=0x13, .x=0x43, .y=0xf4, .sp=0x91, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa689, .value=0x8d}, {.addr=0xa68a, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xa689, .value=0x8d, .type=IO_READ},
        {.addr=0xa68a, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x9b16, .a=0x06, .x=0x3a, .y=0x0e, .sp=0x8e, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x9b16, .value=0x8d}, {.addr=0x9b17, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x9b18, .a=0x06, .x=0x3a, .y=0x23, .sp=0x8e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9b16, .value=0x8d}, {.addr=0x9b17, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x9b16, .value=0x8d, .type=IO_READ},
        {.addr=0x9b17, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xc2bc, .a=0xf1, .x=0x37, .y=0xe2, .sp=0x36, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xc2bc, .value=0x8d}, {.addr=0xc2bd, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xc2be, .a=0xf1, .x=0x37, .y=0x54, .sp=0x36, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc2bc, .value=0x8d}, {.addr=0xc2bd, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xc2bc, .value=0x8d, .type=IO_READ},
        {.addr=0xc2bd, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x0d9f, .a=0xb2, .x=0x69, .y=0x93, .sp=0x04, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0d9f, .value=0x8d}, {.addr=0x0da0, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x0da1, .a=0xb2, .x=0x69, .y=0xd8, .sp=0x04, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0d9f, .value=0x8d}, {.addr=0x0da0, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x0d9f, .value=0x8d, .type=IO_READ},
        {.addr=0x0da0, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x5db3, .a=0x33, .x=0x2c, .y=0x20, .sp=0x6a, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5db3, .value=0x8d}, {.addr=0x5db4, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x5db5, .a=0x33, .x=0x2c, .y=0x52, .sp=0x6a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5db3, .value=0x8d}, {.addr=0x5db4, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x5db3, .value=0x8d, .type=IO_READ},
        {.addr=0x5db4, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x4782, .a=0xb1, .x=0xcf, .y=0x70, .sp=0x4d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x4782, .value=0x8d}, {.addr=0x4783, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x4784, .a=0xb1, .x=0xcf, .y=0xa8, .sp=0x4d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4782, .value=0x8d}, {.addr=0x4783, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x4782, .value=0x8d, .type=IO_READ},
        {.addr=0x4783, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xefb4, .a=0xb9, .x=0xb8, .y=0xc4, .sp=0x75, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xefb4, .value=0x8d}, {.addr=0xefb5, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xefb6, .a=0xb9, .x=0xb8, .y=0xfb, .sp=0x75, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xefb4, .value=0x8d}, {.addr=0xefb5, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xefb4, .value=0x8d, .type=IO_READ},
        {.addr=0xefb5, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x66df, .a=0xac, .x=0x24, .y=0x00, .sp=0xd5, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x66df, .value=0x8d}, {.addr=0x66e0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x66e1, .a=0xac, .x=0x24, .y=0x8e, .sp=0xd5, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x66df, .value=0x8d}, {.addr=0x66e0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x66df, .value=0x8d, .type=IO_READ},
        {.addr=0x66e0, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x684c, .a=0x14, .x=0x02, .y=0xc7, .sp=0x19, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x684c, .value=0x8d}, {.addr=0x684d, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x684e, .a=0x14, .x=0x02, .y=0x1a, .sp=0x19, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x684c, .value=0x8d}, {.addr=0x684d, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x684c, .value=0x8d, .type=IO_READ},
        {.addr=0x684d, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x3f5f, .a=0xf6, .x=0x33, .y=0x8d, .sp=0xcf, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x3f5f, .value=0x8d}, {.addr=0x3f60, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3f61, .a=0xf6, .x=0x33, .y=0x26, .sp=0xcf, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x3f5f, .value=0x8d}, {.addr=0x3f60, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3f5f, .value=0x8d, .type=IO_READ},
        {.addr=0x3f60, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x8a76, .a=0xd8, .x=0x1b, .y=0x70, .sp=0x3a, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x8a76, .value=0x8d}, {.addr=0x8a77, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x8a78, .a=0xd8, .x=0x1b, .y=0x04, .sp=0x3a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8a76, .value=0x8d}, {.addr=0x8a77, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x8a76, .value=0x8d, .type=IO_READ},
        {.addr=0x8a77, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x58fc, .a=0x3f, .x=0xe3, .y=0x70, .sp=0x5e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x58fc, .value=0x8d}, {.addr=0x58fd, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x58fe, .a=0x3f, .x=0xe3, .y=0x09, .sp=0x5e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x58fc, .value=0x8d}, {.addr=0x58fd, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x58fc, .value=0x8d, .type=IO_READ},
        {.addr=0x58fd, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x1b42, .a=0x9d, .x=0xef, .y=0x49, .sp=0xd2, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x1b42, .value=0x8d}, {.addr=0x1b43, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x1b44, .a=0x9d, .x=0xef, .y=0x76, .sp=0xd2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1b42, .value=0x8d}, {.addr=0x1b43, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x1b42, .value=0x8d, .type=IO_READ},
        {.addr=0x1b43, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x8af5, .a=0x62, .x=0x97, .y=0x9c, .sp=0x5b, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x8af5, .value=0x8d}, {.addr=0x8af6, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x8af7, .a=0x62, .x=0x97, .y=0x4b, .sp=0x5b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8af5, .value=0x8d}, {.addr=0x8af6, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x8af5, .value=0x8d, .type=IO_READ},
        {.addr=0x8af6, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x8e6f, .a=0x55, .x=0xa3, .y=0xf5, .sp=0xb3, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x8e6f, .value=0x8d}, {.addr=0x8e70, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x8e71, .a=0x55, .x=0xa3, .y=0x09, .sp=0xb3, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x8e6f, .value=0x8d}, {.addr=0x8e70, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x8e6f, .value=0x8d, .type=IO_READ},
        {.addr=0x8e70, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x7d5e, .a=0x75, .x=0xbc, .y=0x60, .sp=0xf4, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x7d5e, .value=0x8d}, {.addr=0x7d5f, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x7d60, .a=0x75, .x=0xbc, .y=0xfa, .sp=0xf4, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7d5e, .value=0x8d}, {.addr=0x7d5f, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x7d5e, .value=0x8d, .type=IO_READ},
        {.addr=0x7d5f, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x7aa7, .a=0x09, .x=0x10, .y=0x73, .sp=0xf6, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa7, .value=0x8d}, {.addr=0x7aa8, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x7aa9, .a=0x09, .x=0x10, .y=0x9e, .sp=0xf6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x7aa7, .value=0x8d}, {.addr=0x7aa8, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x7aa7, .value=0x8d, .type=IO_READ},
        {.addr=0x7aa8, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x0738, .a=0x8b, .x=0x7e, .y=0x07, .sp=0x9d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0738, .value=0x8d}, {.addr=0x0739, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x073a, .a=0x8b, .x=0x7e, .y=0x96, .sp=0x9d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0738, .value=0x8d}, {.addr=0x0739, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x0738, .value=0x8d, .type=IO_READ},
        {.addr=0x0739, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xddbc, .a=0xe6, .x=0x9b, .y=0x7c, .sp=0x08, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xddbc, .value=0x8d}, {.addr=0xddbd, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xddbe, .a=0xe6, .x=0x9b, .y=0xb8, .sp=0x08, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xddbc, .value=0x8d}, {.addr=0xddbd, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xddbc, .value=0x8d, .type=IO_READ},
        {.addr=0xddbd, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xb9cd, .a=0xae, .x=0xa5, .y=0xe3, .sp=0x1e, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xb9cd, .value=0x8d}, {.addr=0xb9ce, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xb9cf, .a=0xae, .x=0xa5, .y=0xab, .sp=0x1e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb9cd, .value=0x8d}, {.addr=0xb9ce, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xb9cd, .value=0x8d, .type=IO_READ},
        {.addr=0xb9ce, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x29cc, .a=0x3b, .x=0xb9, .y=0xb2, .sp=0x3e, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x29cc, .value=0x8d}, {.addr=0x29cd, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x29ce, .a=0x3b, .x=0xb9, .y=0x6b, .sp=0x3e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x29cc, .value=0x8d}, {.addr=0x29cd, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x29cc, .value=0x8d, .type=IO_READ},
        {.addr=0x29cd, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x15f6, .a=0x15, .x=0x4a, .y=0x31, .sp=0xf1, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x15f6, .value=0x8d}, {.addr=0x15f7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x15f8, .a=0x15, .x=0x4a, .y=0x60, .sp=0xf1, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x15f6, .value=0x8d}, {.addr=0x15f7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x15f6, .value=0x8d, .type=IO_READ},
        {.addr=0x15f7, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xe27b, .a=0x60, .x=0x75, .y=0x88, .sp=0xa2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xe27b, .value=0x8d}, {.addr=0xe27c, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xe27d, .a=0x60, .x=0x75, .y=0x39, .sp=0xa2, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xe27b, .value=0x8d}, {.addr=0xe27c, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xe27b, .value=0x8d, .type=IO_READ},
        {.addr=0xe27c, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x2698, .a=0x46, .x=0x43, .y=0xc2, .sp=0x17, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x2698, .value=0x8d}, {.addr=0x2699, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x269a, .a=0x46, .x=0x43, .y=0xa8, .sp=0x17, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2698, .value=0x8d}, {.addr=0x2699, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x2698, .value=0x8d, .type=IO_READ},
        {.addr=0x2699, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x89bd, .a=0x12, .x=0x4c, .y=0x01, .sp=0x88, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x89bd, .value=0x8d}, {.addr=0x89be, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x89bf, .a=0x12, .x=0x4c, .y=0x1c, .sp=0x88, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x89bd, .value=0x8d}, {.addr=0x89be, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x89bd, .value=0x8d, .type=IO_READ},
        {.addr=0x89be, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x2fcd, .a=0x8f, .x=0xf7, .y=0x30, .sp=0x79, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x2fcd, .value=0x8d}, {.addr=0x2fce, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x2fcf, .a=0x8f, .x=0xf7, .y=0xfb, .sp=0x79, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2fcd, .value=0x8d}, {.addr=0x2fce, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x2fcd, .value=0x8d, .type=IO_READ},
        {.addr=0x2fce, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xe43d, .a=0xda, .x=0x0d, .y=0xdd, .sp=0x6b, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xe43d, .value=0x8d}, {.addr=0xe43e, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xe43f, .a=0xda, .x=0x0d, .y=0x74, .sp=0x6b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe43d, .value=0x8d}, {.addr=0xe43e, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xe43d, .value=0x8d, .type=IO_READ},
        {.addr=0xe43e, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x741a, .a=0x68, .x=0x96, .y=0x4d, .sp=0xfc, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x741a, .value=0x8d}, {.addr=0x741b, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x741c, .a=0x68, .x=0x96, .y=0x79, .sp=0xfc, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x741a, .value=0x8d}, {.addr=0x741b, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x741a, .value=0x8d, .type=IO_READ},
        {.addr=0x741b, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x685b, .a=0xac, .x=0x11, .y=0x4f, .sp=0x2c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x685b, .value=0x8d}, {.addr=0x685c, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x685d, .a=0xac, .x=0x11, .y=0x69, .sp=0x2c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x685b, .value=0x8d}, {.addr=0x685c, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x685b, .value=0x8d, .type=IO_READ},
        {.addr=0x685c, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xd141, .a=0x8c, .x=0xe5, .y=0x91, .sp=0x22, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xd141, .value=0x8d}, {.addr=0xd142, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd143, .a=0x8c, .x=0xe5, .y=0xdf, .sp=0x22, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xd141, .value=0x8d}, {.addr=0xd142, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd141, .value=0x8d, .type=IO_READ},
        {.addr=0xd142, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x809f, .a=0xaa, .x=0x40, .y=0x31, .sp=0x2f, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x809f, .value=0x8d}, {.addr=0x80a0, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x80a1, .a=0xaa, .x=0x40, .y=0x15, .sp=0x2f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x809f, .value=0x8d}, {.addr=0x80a0, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x809f, .value=0x8d, .type=IO_READ},
        {.addr=0x80a0, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x3c71, .a=0x45, .x=0x4c, .y=0xbb, .sp=0xbd, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3c71, .value=0x8d}, {.addr=0x3c72, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x3c73, .a=0x45, .x=0x4c, .y=0x2f, .sp=0xbd, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3c71, .value=0x8d}, {.addr=0x3c72, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x3c71, .value=0x8d, .type=IO_READ},
        {.addr=0x3c72, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x727a, .a=0xfa, .x=0x6b, .y=0x44, .sp=0x93, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x727a, .value=0x8d}, {.addr=0x727b, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x727c, .a=0xfa, .x=0x6b, .y=0x45, .sp=0x93, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x727a, .value=0x8d}, {.addr=0x727b, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x727a, .value=0x8d, .type=IO_READ},
        {.addr=0x727b, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xb54f, .a=0x80, .x=0xff, .y=0x0d, .sp=0x88, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xb54f, .value=0x8d}, {.addr=0xb550, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xb551, .a=0x80, .x=0xff, .y=0x77, .sp=0x88, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb54f, .value=0x8d}, {.addr=0xb550, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xb54f, .value=0x8d, .type=IO_READ},
        {.addr=0xb550, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xfe34, .a=0xf4, .x=0x42, .y=0x9b, .sp=0x86, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xfe34, .value=0x8d}, {.addr=0xfe35, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xfe36, .a=0xf4, .x=0x42, .y=0x08, .sp=0x86, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xfe34, .value=0x8d}, {.addr=0xfe35, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xfe34, .value=0x8d, .type=IO_READ},
        {.addr=0xfe35, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x3744, .a=0x14, .x=0x76, .y=0x56, .sp=0xb4, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x3744, .value=0x8d}, {.addr=0x3745, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x3746, .a=0x14, .x=0x76, .y=0xa3, .sp=0xb4, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3744, .value=0x8d}, {.addr=0x3745, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x3744, .value=0x8d, .type=IO_READ},
        {.addr=0x3745, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x9c06, .a=0x9b, .x=0x03, .y=0xc2, .sp=0x2d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x9c06, .value=0x8d}, {.addr=0x9c07, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x9c08, .a=0x9b, .x=0x03, .y=0xdb, .sp=0x2d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x9c06, .value=0x8d}, {.addr=0x9c07, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x9c06, .value=0x8d, .type=IO_READ},
        {.addr=0x9c07, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x2cc2, .a=0xde, .x=0x6d, .y=0x7e, .sp=0xa1, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x2cc2, .value=0x8d}, {.addr=0x2cc3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2cc4, .a=0xde, .x=0x6d, .y=0xae, .sp=0xa1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2cc2, .value=0x8d}, {.addr=0x2cc3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2cc2, .value=0x8d, .type=IO_READ},
        {.addr=0x2cc3, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x43b7, .a=0x1e, .x=0xe4, .y=0xd2, .sp=0xd2, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x43b7, .value=0x8d}, {.addr=0x43b8, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x43b9, .a=0x1e, .x=0xe4, .y=0x27, .sp=0xd2, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x43b7, .value=0x8d}, {.addr=0x43b8, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x43b7, .value=0x8d, .type=IO_READ},
        {.addr=0x43b8, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x4ca1, .a=0x8e, .x=0x19, .y=0xee, .sp=0x37, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x4ca1, .value=0x8d}, {.addr=0x4ca2, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x4ca3, .a=0x8e, .x=0x19, .y=0xfe, .sp=0x37, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x4ca1, .value=0x8d}, {.addr=0x4ca2, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x4ca1, .value=0x8d, .type=IO_READ},
        {.addr=0x4ca2, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xfd5b, .a=0x4b, .x=0x63, .y=0x50, .sp=0x12, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xfd5b, .value=0x8d}, {.addr=0xfd5c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfd5d, .a=0x4b, .x=0x63, .y=0x1c, .sp=0x12, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xfd5b, .value=0x8d}, {.addr=0xfd5c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfd5b, .value=0x8d, .type=IO_READ},
        {.addr=0xfd5c, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x8ac5, .a=0x80, .x=0x7a, .y=0xdf, .sp=0x88, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8ac5, .value=0x8d}, {.addr=0x8ac6, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x8ac7, .a=0x80, .x=0x7a, .y=0x58, .sp=0x88, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8ac5, .value=0x8d}, {.addr=0x8ac6, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x8ac5, .value=0x8d, .type=IO_READ},
        {.addr=0x8ac6, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x7f8c, .a=0x4c, .x=0x56, .y=0xe1, .sp=0xbe, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x7f8c, .value=0x8d}, {.addr=0x7f8d, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x7f8e, .a=0x4c, .x=0x56, .y=0x81, .sp=0xbe, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7f8c, .value=0x8d}, {.addr=0x7f8d, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x7f8c, .value=0x8d, .type=IO_READ},
        {.addr=0x7f8d, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xf2cc, .a=0xd3, .x=0x9c, .y=0x30, .sp=0x60, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xf2cc, .value=0x8d}, {.addr=0xf2cd, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xf2ce, .a=0xd3, .x=0x9c, .y=0x47, .sp=0x60, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf2cc, .value=0x8d}, {.addr=0xf2cd, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xf2cc, .value=0x8d, .type=IO_READ},
        {.addr=0xf2cd, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x2d52, .a=0x26, .x=0x2c, .y=0xf0, .sp=0x30, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2d52, .value=0x8d}, {.addr=0x2d53, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x2d54, .a=0x26, .x=0x2c, .y=0x6a, .sp=0x30, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2d52, .value=0x8d}, {.addr=0x2d53, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x2d52, .value=0x8d, .type=IO_READ},
        {.addr=0x2d53, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xc59a, .a=0x03, .x=0x23, .y=0xcb, .sp=0x1b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xc59a, .value=0x8d}, {.addr=0xc59b, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xc59c, .a=0x03, .x=0x23, .y=0xb5, .sp=0x1b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xc59a, .value=0x8d}, {.addr=0xc59b, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xc59a, .value=0x8d, .type=IO_READ},
        {.addr=0xc59b, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xa869, .a=0x98, .x=0x43, .y=0x29, .sp=0x24, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa869, .value=0x8d}, {.addr=0xa86a, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xa86b, .a=0x98, .x=0x43, .y=0x97, .sp=0x24, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xa869, .value=0x8d}, {.addr=0xa86a, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xa869, .value=0x8d, .type=IO_READ},
        {.addr=0xa86a, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x2362, .a=0xa6, .x=0x09, .y=0x96, .sp=0xb6, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x2362, .value=0x8d}, {.addr=0x2363, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x2364, .a=0xa6, .x=0x09, .y=0xd6, .sp=0xb6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2362, .value=0x8d}, {.addr=0x2363, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x2362, .value=0x8d, .type=IO_READ},
        {.addr=0x2363, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xfc30, .a=0xe9, .x=0xa2, .y=0xae, .sp=0x40, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xfc30, .value=0x8d}, {.addr=0xfc31, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xfc32, .a=0xe9, .x=0xa2, .y=0x54, .sp=0x40, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xfc30, .value=0x8d}, {.addr=0xfc31, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xfc30, .value=0x8d, .type=IO_READ},
        {.addr=0xfc31, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x46fd, .a=0xbc, .x=0x4d, .y=0xa9, .sp=0x74, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x46fd, .value=0x8d}, {.addr=0x46fe, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x46ff, .a=0xbc, .x=0x4d, .y=0x6b, .sp=0x74, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x46fd, .value=0x8d}, {.addr=0x46fe, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x46fd, .value=0x8d, .type=IO_READ},
        {.addr=0x46fe, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x762c, .a=0xa7, .x=0x6b, .y=0xd0, .sp=0x45, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x762c, .value=0x8d}, {.addr=0x762d, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x762e, .a=0xa7, .x=0x6b, .y=0xff, .sp=0x45, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x762c, .value=0x8d}, {.addr=0x762d, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x762c, .value=0x8d, .type=IO_READ},
        {.addr=0x762d, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xca00, .a=0xeb, .x=0x75, .y=0x4a, .sp=0x92, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xca00, .value=0x8d}, {.addr=0xca01, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xca02, .a=0xeb, .x=0x75, .y=0xd6, .sp=0x92, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xca00, .value=0x8d}, {.addr=0xca01, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xca00, .value=0x8d, .type=IO_READ},
        {.addr=0xca01, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xf10f, .a=0x85, .x=0x73, .y=0x2a, .sp=0x6d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xf10f, .value=0x8d}, {.addr=0xf110, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xf111, .a=0x85, .x=0x73, .y=0x74, .sp=0x6d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xf10f, .value=0x8d}, {.addr=0xf110, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xf10f, .value=0x8d, .type=IO_READ},
        {.addr=0xf110, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x053a, .a=0x7d, .x=0x83, .y=0xb1, .sp=0x08, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x053a, .value=0x8d}, {.addr=0x053b, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x053c, .a=0x7d, .x=0x83, .y=0x75, .sp=0x08, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x053a, .value=0x8d}, {.addr=0x053b, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x053a, .value=0x8d, .type=IO_READ},
        {.addr=0x053b, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x1155, .a=0x29, .x=0x00, .y=0xd4, .sp=0x18, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x1155, .value=0x8d}, {.addr=0x1156, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x1157, .a=0x29, .x=0x00, .y=0xb4, .sp=0x18, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x1155, .value=0x8d}, {.addr=0x1156, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x1155, .value=0x8d, .type=IO_READ},
        {.addr=0x1156, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x5483, .a=0x43, .x=0xbd, .y=0x07, .sp=0xb9, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x5483, .value=0x8d}, {.addr=0x5484, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5485, .a=0x43, .x=0xbd, .y=0xae, .sp=0xb9, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x5483, .value=0x8d}, {.addr=0x5484, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5483, .value=0x8d, .type=IO_READ},
        {.addr=0x5484, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xe1ae, .a=0xc8, .x=0xd0, .y=0x23, .sp=0xbe, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xe1ae, .value=0x8d}, {.addr=0xe1af, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xe1b0, .a=0xc8, .x=0xd0, .y=0x07, .sp=0xbe, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe1ae, .value=0x8d}, {.addr=0xe1af, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xe1ae, .value=0x8d, .type=IO_READ},
        {.addr=0xe1af, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xf25d, .a=0xba, .x=0xcf, .y=0x29, .sp=0x05, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xf25d, .value=0x8d}, {.addr=0xf25e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf25f, .a=0xba, .x=0xcf, .y=0xa6, .sp=0x05, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf25d, .value=0x8d}, {.addr=0xf25e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf25d, .value=0x8d, .type=IO_READ},
        {.addr=0xf25e, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x149c, .a=0xb4, .x=0x7b, .y=0x76, .sp=0x1d, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x149c, .value=0x8d}, {.addr=0x149d, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x149e, .a=0xb4, .x=0x7b, .y=0x5e, .sp=0x1d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x149c, .value=0x8d}, {.addr=0x149d, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x149c, .value=0x8d, .type=IO_READ},
        {.addr=0x149d, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x2900, .a=0x4e, .x=0xdd, .y=0x96, .sp=0x56, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x2900, .value=0x8d}, {.addr=0x2901, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x2902, .a=0x4e, .x=0xdd, .y=0xb0, .sp=0x56, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2900, .value=0x8d}, {.addr=0x2901, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x2900, .value=0x8d, .type=IO_READ},
        {.addr=0x2901, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x0666, .a=0x44, .x=0x82, .y=0xc4, .sp=0xcc, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0666, .value=0x8d}, {.addr=0x0667, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0668, .a=0x44, .x=0x82, .y=0x00, .sp=0xcc, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0666, .value=0x8d}, {.addr=0x0667, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0666, .value=0x8d, .type=IO_READ},
        {.addr=0x0667, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x846c, .a=0x2d, .x=0xf4, .y=0x93, .sp=0x89, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x846c, .value=0x8d}, {.addr=0x846d, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x846e, .a=0x2d, .x=0xf4, .y=0xc4, .sp=0x89, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x846c, .value=0x8d}, {.addr=0x846d, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x846c, .value=0x8d, .type=IO_READ},
        {.addr=0x846d, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xa01e, .a=0x16, .x=0xea, .y=0x2a, .sp=0x3c, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa01e, .value=0x8d}, {.addr=0xa01f, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xa020, .a=0x16, .x=0xea, .y=0x32, .sp=0x3c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa01e, .value=0x8d}, {.addr=0xa01f, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xa01e, .value=0x8d, .type=IO_READ},
        {.addr=0xa01f, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x4132, .a=0x9d, .x=0x22, .y=0x72, .sp=0xd5, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x4132, .value=0x8d}, {.addr=0x4133, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x4134, .a=0x9d, .x=0x22, .y=0x59, .sp=0xd5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4132, .value=0x8d}, {.addr=0x4133, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x4132, .value=0x8d, .type=IO_READ},
        {.addr=0x4133, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x2d25, .a=0x47, .x=0x65, .y=0xce, .sp=0x65, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x2d25, .value=0x8d}, {.addr=0x2d26, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x2d27, .a=0x47, .x=0x65, .y=0xba, .sp=0x65, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2d25, .value=0x8d}, {.addr=0x2d26, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x2d25, .value=0x8d, .type=IO_READ},
        {.addr=0x2d26, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x88c2, .a=0xf7, .x=0xca, .y=0xfa, .sp=0x34, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x88c2, .value=0x8d}, {.addr=0x88c3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x88c4, .a=0xf7, .x=0xca, .y=0x1c, .sp=0x34, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x88c2, .value=0x8d}, {.addr=0x88c3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x88c2, .value=0x8d, .type=IO_READ},
        {.addr=0x88c3, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x59f7, .a=0x10, .x=0x86, .y=0x98, .sp=0xea, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x59f7, .value=0x8d}, {.addr=0x59f8, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x59f9, .a=0x10, .x=0x86, .y=0x44, .sp=0xea, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x59f7, .value=0x8d}, {.addr=0x59f8, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x59f7, .value=0x8d, .type=IO_READ},
        {.addr=0x59f8, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xe202, .a=0x13, .x=0xc0, .y=0x70, .sp=0x45, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xe202, .value=0x8d}, {.addr=0xe203, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xe204, .a=0x13, .x=0xc0, .y=0x98, .sp=0x45, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xe202, .value=0x8d}, {.addr=0xe203, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xe202, .value=0x8d, .type=IO_READ},
        {.addr=0xe203, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0300) {
    const struct CPU_State initial_cpu = {.pc=0xde33, .a=0x49, .x=0xe5, .y=0x71, .sp=0xb9, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xde33, .value=0x8d}, {.addr=0xde34, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xde35, .a=0x49, .x=0xe5, .y=0x41, .sp=0xb9, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xde33, .value=0x8d}, {.addr=0xde34, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xde33, .value=0x8d, .type=IO_READ},
        {.addr=0xde34, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0301) {
    const struct CPU_State initial_cpu = {.pc=0x72fc, .a=0x80, .x=0xa9, .y=0x5c, .sp=0xf6, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x72fc, .value=0x8d}, {.addr=0x72fd, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x72fe, .a=0x80, .x=0xa9, .y=0xd2, .sp=0xf6, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x72fc, .value=0x8d}, {.addr=0x72fd, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x72fc, .value=0x8d, .type=IO_READ},
        {.addr=0x72fd, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0302) {
    const struct CPU_State initial_cpu = {.pc=0xd043, .a=0x4c, .x=0xf8, .y=0x1c, .sp=0x6b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xd043, .value=0x8d}, {.addr=0xd044, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xd045, .a=0x4c, .x=0xf8, .y=0xa4, .sp=0x6b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd043, .value=0x8d}, {.addr=0xd044, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xd043, .value=0x8d, .type=IO_READ},
        {.addr=0xd044, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0303) {
    const struct CPU_State initial_cpu = {.pc=0x8e0d, .a=0xd4, .x=0xaf, .y=0x9c, .sp=0xaa, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x8e0d, .value=0x8d}, {.addr=0x8e0e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8e0f, .a=0xd4, .x=0xaf, .y=0x4d, .sp=0xaa, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x8e0d, .value=0x8d}, {.addr=0x8e0e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8e0d, .value=0x8d, .type=IO_READ},
        {.addr=0x8e0e, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0304) {
    const struct CPU_State initial_cpu = {.pc=0x13ba, .a=0xaf, .x=0x1a, .y=0x6f, .sp=0x0e, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x13ba, .value=0x8d}, {.addr=0x13bb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x13bc, .a=0xaf, .x=0x1a, .y=0xa0, .sp=0x0e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x13ba, .value=0x8d}, {.addr=0x13bb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x13ba, .value=0x8d, .type=IO_READ},
        {.addr=0x13bb, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0305) {
    const struct CPU_State initial_cpu = {.pc=0xe630, .a=0xd8, .x=0x5a, .y=0xb4, .sp=0xd4, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xe630, .value=0x8d}, {.addr=0xe631, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xe632, .a=0xd8, .x=0x5a, .y=0x15, .sp=0xd4, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xe630, .value=0x8d}, {.addr=0xe631, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xe630, .value=0x8d, .type=IO_READ},
        {.addr=0xe631, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0306) {
    const struct CPU_State initial_cpu = {.pc=0x071f, .a=0x64, .x=0x08, .y=0xbc, .sp=0x31, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x071f, .value=0x8d}, {.addr=0x0720, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x0721, .a=0x64, .x=0x08, .y=0xd6, .sp=0x31, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x071f, .value=0x8d}, {.addr=0x0720, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x071f, .value=0x8d, .type=IO_READ},
        {.addr=0x0720, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0307) {
    const struct CPU_State initial_cpu = {.pc=0x2cf1, .a=0xd3, .x=0xe7, .y=0x6d, .sp=0x6a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x2cf1, .value=0x8d}, {.addr=0x2cf2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2cf3, .a=0xd3, .x=0xe7, .y=0xfd, .sp=0x6a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2cf1, .value=0x8d}, {.addr=0x2cf2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2cf1, .value=0x8d, .type=IO_READ},
        {.addr=0x2cf2, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0308) {
    const struct CPU_State initial_cpu = {.pc=0x255c, .a=0x62, .x=0x73, .y=0x43, .sp=0xe7, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x255c, .value=0x8d}, {.addr=0x255d, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x255e, .a=0x62, .x=0x73, .y=0x8d, .sp=0xe7, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x255c, .value=0x8d}, {.addr=0x255d, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x255c, .value=0x8d, .type=IO_READ},
        {.addr=0x255d, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0309) {
    const struct CPU_State initial_cpu = {.pc=0x51a8, .a=0x01, .x=0x24, .y=0xb0, .sp=0xf1, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x51a8, .value=0x8d}, {.addr=0x51a9, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x51aa, .a=0x01, .x=0x24, .y=0x9b, .sp=0xf1, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x51a8, .value=0x8d}, {.addr=0x51a9, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x51a8, .value=0x8d, .type=IO_READ},
        {.addr=0x51a9, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_030A) {
    const struct CPU_State initial_cpu = {.pc=0xfa69, .a=0x4f, .x=0xc1, .y=0x7b, .sp=0xcc, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xfa69, .value=0x8d}, {.addr=0xfa6a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfa6b, .a=0x4f, .x=0xc1, .y=0x20, .sp=0xcc, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xfa69, .value=0x8d}, {.addr=0xfa6a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfa69, .value=0x8d, .type=IO_READ},
        {.addr=0xfa6a, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_030B) {
    const struct CPU_State initial_cpu = {.pc=0x749c, .a=0x10, .x=0x03, .y=0x96, .sp=0xc5, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x749c, .value=0x8d}, {.addr=0x749d, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x749e, .a=0x10, .x=0x03, .y=0xb8, .sp=0xc5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x749c, .value=0x8d}, {.addr=0x749d, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x749c, .value=0x8d, .type=IO_READ},
        {.addr=0x749d, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_030C) {
    const struct CPU_State initial_cpu = {.pc=0xd1d6, .a=0x96, .x=0xd6, .y=0xf6, .sp=0x9f, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xd1d6, .value=0x8d}, {.addr=0xd1d7, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xd1d8, .a=0x96, .x=0xd6, .y=0xef, .sp=0x9f, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xd1d6, .value=0x8d}, {.addr=0xd1d7, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xd1d6, .value=0x8d, .type=IO_READ},
        {.addr=0xd1d7, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_030D) {
    const struct CPU_State initial_cpu = {.pc=0x775f, .a=0xfc, .x=0x7a, .y=0x6e, .sp=0x30, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x775f, .value=0x8d}, {.addr=0x7760, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7761, .a=0xfc, .x=0x7a, .y=0x60, .sp=0x30, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x775f, .value=0x8d}, {.addr=0x7760, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x775f, .value=0x8d, .type=IO_READ},
        {.addr=0x7760, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_030E) {
    const struct CPU_State initial_cpu = {.pc=0x4cd3, .a=0x5b, .x=0xd1, .y=0xc9, .sp=0x02, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd3, .value=0x8d}, {.addr=0x4cd4, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x4cd5, .a=0x5b, .x=0xd1, .y=0x3a, .sp=0x02, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4cd3, .value=0x8d}, {.addr=0x4cd4, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x4cd3, .value=0x8d, .type=IO_READ},
        {.addr=0x4cd4, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_030F) {
    const struct CPU_State initial_cpu = {.pc=0x0649, .a=0xfb, .x=0xd1, .y=0xd6, .sp=0xae, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0649, .value=0x8d}, {.addr=0x064a, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x064b, .a=0xfb, .x=0xd1, .y=0x8c, .sp=0xae, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0649, .value=0x8d}, {.addr=0x064a, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x0649, .value=0x8d, .type=IO_READ},
        {.addr=0x064a, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0310) {
    const struct CPU_State initial_cpu = {.pc=0xc316, .a=0x7c, .x=0xda, .y=0xd6, .sp=0xfc, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xc316, .value=0x8d}, {.addr=0xc317, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xc318, .a=0x7c, .x=0xda, .y=0xbb, .sp=0xfc, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xc316, .value=0x8d}, {.addr=0xc317, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xc316, .value=0x8d, .type=IO_READ},
        {.addr=0xc317, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0311) {
    const struct CPU_State initial_cpu = {.pc=0xe6c8, .a=0x36, .x=0x4a, .y=0x3c, .sp=0x09, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xe6c8, .value=0x8d}, {.addr=0xe6c9, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xe6ca, .a=0x36, .x=0x4a, .y=0x70, .sp=0x09, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe6c8, .value=0x8d}, {.addr=0xe6c9, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xe6c8, .value=0x8d, .type=IO_READ},
        {.addr=0xe6c9, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0312) {
    const struct CPU_State initial_cpu = {.pc=0xd3a0, .a=0x8a, .x=0xf1, .y=0x32, .sp=0x28, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xd3a0, .value=0x8d}, {.addr=0xd3a1, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xd3a2, .a=0x8a, .x=0xf1, .y=0xad, .sp=0x28, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd3a0, .value=0x8d}, {.addr=0xd3a1, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xd3a0, .value=0x8d, .type=IO_READ},
        {.addr=0xd3a1, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0313) {
    const struct CPU_State initial_cpu = {.pc=0x53fd, .a=0xd7, .x=0xbb, .y=0xd7, .sp=0x15, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x53fd, .value=0x8d}, {.addr=0x53fe, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x53ff, .a=0xd7, .x=0xbb, .y=0x83, .sp=0x15, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x53fd, .value=0x8d}, {.addr=0x53fe, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x53fd, .value=0x8d, .type=IO_READ},
        {.addr=0x53fe, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0314) {
    const struct CPU_State initial_cpu = {.pc=0x2c65, .a=0x5f, .x=0xdd, .y=0x21, .sp=0x42, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x2c65, .value=0x8d}, {.addr=0x2c66, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x2c67, .a=0x5f, .x=0xdd, .y=0xdb, .sp=0x42, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x2c65, .value=0x8d}, {.addr=0x2c66, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x2c65, .value=0x8d, .type=IO_READ},
        {.addr=0x2c66, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0315) {
    const struct CPU_State initial_cpu = {.pc=0x6161, .a=0xb5, .x=0xe7, .y=0xf1, .sp=0x14, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x6161, .value=0x8d}, {.addr=0x6162, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x6163, .a=0xb5, .x=0xe7, .y=0x0f, .sp=0x14, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6161, .value=0x8d}, {.addr=0x6162, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x6161, .value=0x8d, .type=IO_READ},
        {.addr=0x6162, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0316) {
    const struct CPU_State initial_cpu = {.pc=0xb4f9, .a=0x08, .x=0x7f, .y=0x07, .sp=0xaa, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f9, .value=0x8d}, {.addr=0xb4fa, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb4fb, .a=0x08, .x=0x7f, .y=0x00, .sp=0xaa, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xb4f9, .value=0x8d}, {.addr=0xb4fa, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb4f9, .value=0x8d, .type=IO_READ},
        {.addr=0xb4fa, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0317) {
    const struct CPU_State initial_cpu = {.pc=0x5218, .a=0x7e, .x=0xc9, .y=0xb7, .sp=0x7e, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x5218, .value=0x8d}, {.addr=0x5219, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x521a, .a=0x7e, .x=0xc9, .y=0xd4, .sp=0x7e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5218, .value=0x8d}, {.addr=0x5219, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x5218, .value=0x8d, .type=IO_READ},
        {.addr=0x5219, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0318) {
    const struct CPU_State initial_cpu = {.pc=0x37a9, .a=0x5b, .x=0xa9, .y=0xb7, .sp=0x3e, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x37a9, .value=0x8d}, {.addr=0x37aa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x37ab, .a=0x5b, .x=0xa9, .y=0xa0, .sp=0x3e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x37a9, .value=0x8d}, {.addr=0x37aa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x37a9, .value=0x8d, .type=IO_READ},
        {.addr=0x37aa, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0319) {
    const struct CPU_State initial_cpu = {.pc=0x52bf, .a=0x27, .x=0xe5, .y=0x15, .sp=0xb5, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x52bf, .value=0x8d}, {.addr=0x52c0, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x52c1, .a=0x27, .x=0xe5, .y=0xbe, .sp=0xb5, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x52bf, .value=0x8d}, {.addr=0x52c0, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x52bf, .value=0x8d, .type=IO_READ},
        {.addr=0x52c0, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_031A) {
    const struct CPU_State initial_cpu = {.pc=0x64a4, .a=0x7b, .x=0x81, .y=0x90, .sp=0xc0, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x64a4, .value=0x8d}, {.addr=0x64a5, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x64a6, .a=0x7b, .x=0x81, .y=0x4c, .sp=0xc0, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x64a4, .value=0x8d}, {.addr=0x64a5, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x64a4, .value=0x8d, .type=IO_READ},
        {.addr=0x64a5, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_031B) {
    const struct CPU_State initial_cpu = {.pc=0xc137, .a=0x58, .x=0x17, .y=0xaf, .sp=0x5f, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xc137, .value=0x8d}, {.addr=0xc138, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc139, .a=0x58, .x=0x17, .y=0xfd, .sp=0x5f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc137, .value=0x8d}, {.addr=0xc138, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc137, .value=0x8d, .type=IO_READ},
        {.addr=0xc138, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_031C) {
    const struct CPU_State initial_cpu = {.pc=0x0924, .a=0xbd, .x=0x41, .y=0x45, .sp=0x51, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0924, .value=0x8d}, {.addr=0x0925, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x0926, .a=0xbd, .x=0x41, .y=0x30, .sp=0x51, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0924, .value=0x8d}, {.addr=0x0925, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x0924, .value=0x8d, .type=IO_READ},
        {.addr=0x0925, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_031D) {
    const struct CPU_State initial_cpu = {.pc=0x7caa, .a=0x3e, .x=0x31, .y=0x5d, .sp=0x12, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7caa, .value=0x8d}, {.addr=0x7cab, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7cac, .a=0x3e, .x=0x31, .y=0x3c, .sp=0x12, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7caa, .value=0x8d}, {.addr=0x7cab, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7caa, .value=0x8d, .type=IO_READ},
        {.addr=0x7cab, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_031E) {
    const struct CPU_State initial_cpu = {.pc=0x0395, .a=0xc4, .x=0xd0, .y=0x5f, .sp=0x4c, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0395, .value=0x8d}, {.addr=0x0396, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x0397, .a=0xc4, .x=0xd0, .y=0x70, .sp=0x4c, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0395, .value=0x8d}, {.addr=0x0396, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x0395, .value=0x8d, .type=IO_READ},
        {.addr=0x0396, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_031F) {
    const struct CPU_State initial_cpu = {.pc=0x500d, .a=0x3d, .x=0x80, .y=0x6e, .sp=0x08, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x500d, .value=0x8d}, {.addr=0x500e, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x500f, .a=0x3d, .x=0x80, .y=0x1a, .sp=0x08, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x500d, .value=0x8d}, {.addr=0x500e, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x500d, .value=0x8d, .type=IO_READ},
        {.addr=0x500e, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0320) {
    const struct CPU_State initial_cpu = {.pc=0x1c78, .a=0x0c, .x=0x94, .y=0xcb, .sp=0x55, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x1c78, .value=0x8d}, {.addr=0x1c79, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x1c7a, .a=0x0c, .x=0x94, .y=0x88, .sp=0x55, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1c78, .value=0x8d}, {.addr=0x1c79, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x1c78, .value=0x8d, .type=IO_READ},
        {.addr=0x1c79, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0321) {
    const struct CPU_State initial_cpu = {.pc=0x0944, .a=0xe8, .x=0x9e, .y=0x83, .sp=0x29, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0944, .value=0x8d}, {.addr=0x0945, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x0946, .a=0xe8, .x=0x9e, .y=0xd8, .sp=0x29, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0944, .value=0x8d}, {.addr=0x0945, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x0944, .value=0x8d, .type=IO_READ},
        {.addr=0x0945, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0322) {
    const struct CPU_State initial_cpu = {.pc=0x9450, .a=0xad, .x=0x1a, .y=0xa3, .sp=0x4e, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x9450, .value=0x8d}, {.addr=0x9451, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9452, .a=0xad, .x=0x1a, .y=0x80, .sp=0x4e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9450, .value=0x8d}, {.addr=0x9451, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9450, .value=0x8d, .type=IO_READ},
        {.addr=0x9451, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0323) {
    const struct CPU_State initial_cpu = {.pc=0xd46d, .a=0x1d, .x=0x66, .y=0xa6, .sp=0x30, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xd46d, .value=0x8d}, {.addr=0xd46e, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xd46f, .a=0x1d, .x=0x66, .y=0x61, .sp=0x30, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd46d, .value=0x8d}, {.addr=0xd46e, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xd46d, .value=0x8d, .type=IO_READ},
        {.addr=0xd46e, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0324) {
    const struct CPU_State initial_cpu = {.pc=0x6590, .a=0x0f, .x=0xfd, .y=0x4c, .sp=0x9a, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x6590, .value=0x8d}, {.addr=0x6591, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6592, .a=0x0f, .x=0xfd, .y=0xdd, .sp=0x9a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6590, .value=0x8d}, {.addr=0x6591, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6590, .value=0x8d, .type=IO_READ},
        {.addr=0x6591, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0325) {
    const struct CPU_State initial_cpu = {.pc=0x7849, .a=0x5c, .x=0x9d, .y=0x04, .sp=0xdf, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x7849, .value=0x8d}, {.addr=0x784a, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x784b, .a=0x5c, .x=0x9d, .y=0x79, .sp=0xdf, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x7849, .value=0x8d}, {.addr=0x784a, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x7849, .value=0x8d, .type=IO_READ},
        {.addr=0x784a, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0326) {
    const struct CPU_State initial_cpu = {.pc=0xf1ac, .a=0x5a, .x=0xd5, .y=0x75, .sp=0xbe, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xf1ac, .value=0x8d}, {.addr=0xf1ad, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xf1ae, .a=0x5a, .x=0xd5, .y=0xd7, .sp=0xbe, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf1ac, .value=0x8d}, {.addr=0xf1ad, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xf1ac, .value=0x8d, .type=IO_READ},
        {.addr=0xf1ad, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0327) {
    const struct CPU_State initial_cpu = {.pc=0xfb05, .a=0x49, .x=0x5c, .y=0xf6, .sp=0x83, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xfb05, .value=0x8d}, {.addr=0xfb06, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xfb07, .a=0x49, .x=0x5c, .y=0xc4, .sp=0x83, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xfb05, .value=0x8d}, {.addr=0xfb06, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xfb05, .value=0x8d, .type=IO_READ},
        {.addr=0xfb06, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0328) {
    const struct CPU_State initial_cpu = {.pc=0xa83e, .a=0x98, .x=0xcb, .y=0x2f, .sp=0x0f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xa83e, .value=0x8d}, {.addr=0xa83f, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xa840, .a=0x98, .x=0xcb, .y=0xa9, .sp=0x0f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa83e, .value=0x8d}, {.addr=0xa83f, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xa83e, .value=0x8d, .type=IO_READ},
        {.addr=0xa83f, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0329) {
    const struct CPU_State initial_cpu = {.pc=0x07b6, .a=0xff, .x=0x57, .y=0x69, .sp=0xfb, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x07b6, .value=0x8d}, {.addr=0x07b7, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x07b8, .a=0xff, .x=0x57, .y=0xc8, .sp=0xfb, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x07b6, .value=0x8d}, {.addr=0x07b7, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x07b6, .value=0x8d, .type=IO_READ},
        {.addr=0x07b7, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_032A) {
    const struct CPU_State initial_cpu = {.pc=0x2827, .a=0xcd, .x=0xf7, .y=0x75, .sp=0x59, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x2827, .value=0x8d}, {.addr=0x2828, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x2829, .a=0xcd, .x=0xf7, .y=0x3a, .sp=0x59, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x2827, .value=0x8d}, {.addr=0x2828, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x2827, .value=0x8d, .type=IO_READ},
        {.addr=0x2828, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_032B) {
    const struct CPU_State initial_cpu = {.pc=0x05cf, .a=0x47, .x=0x14, .y=0xfd, .sp=0xb1, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x05cf, .value=0x8d}, {.addr=0x05d0, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x05d1, .a=0x47, .x=0x14, .y=0xf8, .sp=0xb1, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x05cf, .value=0x8d}, {.addr=0x05d0, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x05cf, .value=0x8d, .type=IO_READ},
        {.addr=0x05d0, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_032C) {
    const struct CPU_State initial_cpu = {.pc=0x9615, .a=0xfe, .x=0x25, .y=0x05, .sp=0x90, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9615, .value=0x8d}, {.addr=0x9616, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x9617, .a=0xfe, .x=0x25, .y=0x93, .sp=0x90, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9615, .value=0x8d}, {.addr=0x9616, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x9615, .value=0x8d, .type=IO_READ},
        {.addr=0x9616, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_032D) {
    const struct CPU_State initial_cpu = {.pc=0x50b1, .a=0x5e, .x=0x6a, .y=0x92, .sp=0xfe, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x50b1, .value=0x8d}, {.addr=0x50b2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x50b3, .a=0x5e, .x=0x6a, .y=0xae, .sp=0xfe, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x50b1, .value=0x8d}, {.addr=0x50b2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x50b1, .value=0x8d, .type=IO_READ},
        {.addr=0x50b2, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_032E) {
    const struct CPU_State initial_cpu = {.pc=0x4aae, .a=0x45, .x=0xcc, .y=0x6c, .sp=0xb0, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x4aae, .value=0x8d}, {.addr=0x4aaf, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x4ab0, .a=0x45, .x=0xcc, .y=0x96, .sp=0xb0, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4aae, .value=0x8d}, {.addr=0x4aaf, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x4aae, .value=0x8d, .type=IO_READ},
        {.addr=0x4aaf, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_032F) {
    const struct CPU_State initial_cpu = {.pc=0xfb70, .a=0x19, .x=0x41, .y=0xfd, .sp=0x64, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xfb70, .value=0x8d}, {.addr=0xfb71, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xfb72, .a=0x19, .x=0x41, .y=0x95, .sp=0x64, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xfb70, .value=0x8d}, {.addr=0xfb71, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xfb70, .value=0x8d, .type=IO_READ},
        {.addr=0xfb71, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0330) {
    const struct CPU_State initial_cpu = {.pc=0x0aec, .a=0x72, .x=0x74, .y=0xc2, .sp=0xb8, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0aec, .value=0x8d}, {.addr=0x0aed, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x0aee, .a=0x72, .x=0x74, .y=0x1b, .sp=0xb8, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0aec, .value=0x8d}, {.addr=0x0aed, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x0aec, .value=0x8d, .type=IO_READ},
        {.addr=0x0aed, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0331) {
    const struct CPU_State initial_cpu = {.pc=0x7ad9, .a=0xef, .x=0xd7, .y=0xdf, .sp=0xd9, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x7ad9, .value=0x8d}, {.addr=0x7ada, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x7adb, .a=0xef, .x=0xd7, .y=0x09, .sp=0xd9, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x7ad9, .value=0x8d}, {.addr=0x7ada, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x7ad9, .value=0x8d, .type=IO_READ},
        {.addr=0x7ada, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0332) {
    const struct CPU_State initial_cpu = {.pc=0xf8fa, .a=0xed, .x=0x5f, .y=0x5e, .sp=0x1e, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xf8fa, .value=0x8d}, {.addr=0xf8fb, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xf8fc, .a=0xed, .x=0x5f, .y=0xad, .sp=0x1e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xf8fa, .value=0x8d}, {.addr=0xf8fb, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xf8fa, .value=0x8d, .type=IO_READ},
        {.addr=0xf8fb, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0333) {
    const struct CPU_State initial_cpu = {.pc=0xe0f8, .a=0x0c, .x=0x81, .y=0x19, .sp=0xd1, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f8, .value=0x8d}, {.addr=0xe0f9, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xe0fa, .a=0x0c, .x=0x81, .y=0x10, .sp=0xd1, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe0f8, .value=0x8d}, {.addr=0xe0f9, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xe0f8, .value=0x8d, .type=IO_READ},
        {.addr=0xe0f9, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0334) {
    const struct CPU_State initial_cpu = {.pc=0x5aff, .a=0x2a, .x=0x50, .y=0xe9, .sp=0x5b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x5aff, .value=0x8d}, {.addr=0x5b00, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x5b01, .a=0x2a, .x=0x50, .y=0xa4, .sp=0x5b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x5aff, .value=0x8d}, {.addr=0x5b00, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x5aff, .value=0x8d, .type=IO_READ},
        {.addr=0x5b00, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0335) {
    const struct CPU_State initial_cpu = {.pc=0x8ff8, .a=0x4e, .x=0x3b, .y=0x0f, .sp=0x61, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x8ff8, .value=0x8d}, {.addr=0x8ff9, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x8ffa, .a=0x4e, .x=0x3b, .y=0x27, .sp=0x61, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8ff8, .value=0x8d}, {.addr=0x8ff9, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x8ff8, .value=0x8d, .type=IO_READ},
        {.addr=0x8ff9, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0336) {
    const struct CPU_State initial_cpu = {.pc=0x4b3c, .a=0xb3, .x=0x46, .y=0x63, .sp=0x3b, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x4b3c, .value=0x8d}, {.addr=0x4b3d, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x4b3e, .a=0xb3, .x=0x46, .y=0xe9, .sp=0x3b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x4b3c, .value=0x8d}, {.addr=0x4b3d, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x4b3c, .value=0x8d, .type=IO_READ},
        {.addr=0x4b3d, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0337) {
    const struct CPU_State initial_cpu = {.pc=0x185b, .a=0x2a, .x=0x28, .y=0xd4, .sp=0x99, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x185b, .value=0x8d}, {.addr=0x185c, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x185d, .a=0x2a, .x=0x28, .y=0xf0, .sp=0x99, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x185b, .value=0x8d}, {.addr=0x185c, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x185b, .value=0x8d, .type=IO_READ},
        {.addr=0x185c, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0338) {
    const struct CPU_State initial_cpu = {.pc=0x9c64, .a=0x3f, .x=0xb7, .y=0xf1, .sp=0x06, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9c64, .value=0x8d}, {.addr=0x9c65, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x9c66, .a=0x3f, .x=0xb7, .y=0xec, .sp=0x06, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x9c64, .value=0x8d}, {.addr=0x9c65, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x9c64, .value=0x8d, .type=IO_READ},
        {.addr=0x9c65, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0339) {
    const struct CPU_State initial_cpu = {.pc=0xb9a6, .a=0xdd, .x=0xcd, .y=0xbb, .sp=0x8f, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb9a6, .value=0x8d}, {.addr=0xb9a7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb9a8, .a=0xdd, .x=0xcd, .y=0xbf, .sp=0x8f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb9a6, .value=0x8d}, {.addr=0xb9a7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb9a6, .value=0x8d, .type=IO_READ},
        {.addr=0xb9a7, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_033A) {
    const struct CPU_State initial_cpu = {.pc=0x5c2f, .a=0x81, .x=0xb2, .y=0x94, .sp=0xfa, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x5c2f, .value=0x8d}, {.addr=0x5c30, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x5c31, .a=0x81, .x=0xb2, .y=0x55, .sp=0xfa, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x5c2f, .value=0x8d}, {.addr=0x5c30, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x5c2f, .value=0x8d, .type=IO_READ},
        {.addr=0x5c30, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_033B) {
    const struct CPU_State initial_cpu = {.pc=0x987c, .a=0x2b, .x=0x6f, .y=0xdd, .sp=0x75, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x987c, .value=0x8d}, {.addr=0x987d, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x987e, .a=0x2b, .x=0x6f, .y=0x49, .sp=0x75, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x987c, .value=0x8d}, {.addr=0x987d, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x987c, .value=0x8d, .type=IO_READ},
        {.addr=0x987d, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_033C) {
    const struct CPU_State initial_cpu = {.pc=0x6430, .a=0xe0, .x=0x9d, .y=0x5d, .sp=0xa6, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x6430, .value=0x8d}, {.addr=0x6431, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6432, .a=0xe0, .x=0x9d, .y=0xed, .sp=0xa6, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6430, .value=0x8d}, {.addr=0x6431, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6430, .value=0x8d, .type=IO_READ},
        {.addr=0x6431, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_033D) {
    const struct CPU_State initial_cpu = {.pc=0x864a, .a=0x90, .x=0xfc, .y=0xce, .sp=0x52, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x864a, .value=0x8d}, {.addr=0x864b, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x864c, .a=0x90, .x=0xfc, .y=0x6a, .sp=0x52, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x864a, .value=0x8d}, {.addr=0x864b, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x864a, .value=0x8d, .type=IO_READ},
        {.addr=0x864b, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_033E) {
    const struct CPU_State initial_cpu = {.pc=0x6ffb, .a=0xe2, .x=0xb7, .y=0x75, .sp=0x6c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x6ffb, .value=0x8d}, {.addr=0x6ffc, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x6ffd, .a=0xe2, .x=0xb7, .y=0x1e, .sp=0x6c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6ffb, .value=0x8d}, {.addr=0x6ffc, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x6ffb, .value=0x8d, .type=IO_READ},
        {.addr=0x6ffc, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_033F) {
    const struct CPU_State initial_cpu = {.pc=0xda22, .a=0x42, .x=0xb2, .y=0xda, .sp=0xd8, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xda22, .value=0x8d}, {.addr=0xda23, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xda24, .a=0x42, .x=0xb2, .y=0x40, .sp=0xd8, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xda22, .value=0x8d}, {.addr=0xda23, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xda22, .value=0x8d, .type=IO_READ},
        {.addr=0xda23, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0340) {
    const struct CPU_State initial_cpu = {.pc=0x5458, .a=0x69, .x=0x50, .y=0x3d, .sp=0x43, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x5458, .value=0x8d}, {.addr=0x5459, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x545a, .a=0x69, .x=0x50, .y=0xae, .sp=0x43, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x5458, .value=0x8d}, {.addr=0x5459, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5458, .value=0x8d, .type=IO_READ},
        {.addr=0x5459, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0341) {
    const struct CPU_State initial_cpu = {.pc=0xe48e, .a=0x97, .x=0xef, .y=0x7f, .sp=0x8e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xe48e, .value=0x8d}, {.addr=0xe48f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xe490, .a=0x97, .x=0xef, .y=0xe6, .sp=0x8e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xe48e, .value=0x8d}, {.addr=0xe48f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xe48e, .value=0x8d, .type=IO_READ},
        {.addr=0xe48f, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0342) {
    const struct CPU_State initial_cpu = {.pc=0xca7d, .a=0xf9, .x=0xe1, .y=0xc8, .sp=0xb1, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xca7d, .value=0x8d}, {.addr=0xca7e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xca7f, .a=0xf9, .x=0xe1, .y=0xaf, .sp=0xb1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xca7d, .value=0x8d}, {.addr=0xca7e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xca7d, .value=0x8d, .type=IO_READ},
        {.addr=0xca7e, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0343) {
    const struct CPU_State initial_cpu = {.pc=0xbe73, .a=0xcc, .x=0x4c, .y=0xc9, .sp=0xf8, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xbe73, .value=0x8d}, {.addr=0xbe74, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xbe75, .a=0xcc, .x=0x4c, .y=0x64, .sp=0xf8, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xbe73, .value=0x8d}, {.addr=0xbe74, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xbe73, .value=0x8d, .type=IO_READ},
        {.addr=0xbe74, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0344) {
    const struct CPU_State initial_cpu = {.pc=0x9a7a, .a=0xc6, .x=0x02, .y=0x70, .sp=0x72, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x9a7a, .value=0x8d}, {.addr=0x9a7b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9a7c, .a=0xc6, .x=0x02, .y=0xee, .sp=0x72, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x9a7a, .value=0x8d}, {.addr=0x9a7b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9a7a, .value=0x8d, .type=IO_READ},
        {.addr=0x9a7b, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0345) {
    const struct CPU_State initial_cpu = {.pc=0x9a1a, .a=0x8e, .x=0x34, .y=0xf8, .sp=0xe1, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x9a1a, .value=0x8d}, {.addr=0x9a1b, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x9a1c, .a=0x8e, .x=0x34, .y=0x57, .sp=0xe1, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x9a1a, .value=0x8d}, {.addr=0x9a1b, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x9a1a, .value=0x8d, .type=IO_READ},
        {.addr=0x9a1b, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0346) {
    const struct CPU_State initial_cpu = {.pc=0xaea2, .a=0xe4, .x=0xbe, .y=0x17, .sp=0xad, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xaea2, .value=0x8d}, {.addr=0xaea3, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xaea4, .a=0xe4, .x=0xbe, .y=0x3e, .sp=0xad, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xaea2, .value=0x8d}, {.addr=0xaea3, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xaea2, .value=0x8d, .type=IO_READ},
        {.addr=0xaea3, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0347) {
    const struct CPU_State initial_cpu = {.pc=0x6f74, .a=0x62, .x=0xb3, .y=0xc3, .sp=0xa0, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6f74, .value=0x8d}, {.addr=0x6f75, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x6f76, .a=0x62, .x=0xb3, .y=0x82, .sp=0xa0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x6f74, .value=0x8d}, {.addr=0x6f75, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x6f74, .value=0x8d, .type=IO_READ},
        {.addr=0x6f75, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0348) {
    const struct CPU_State initial_cpu = {.pc=0x90dd, .a=0xff, .x=0x18, .y=0x4a, .sp=0xd4, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x90dd, .value=0x8d}, {.addr=0x90de, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x90df, .a=0xff, .x=0x18, .y=0xdf, .sp=0xd4, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x90dd, .value=0x8d}, {.addr=0x90de, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x90dd, .value=0x8d, .type=IO_READ},
        {.addr=0x90de, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0349) {
    const struct CPU_State initial_cpu = {.pc=0x1034, .a=0x58, .x=0x18, .y=0x8e, .sp=0xb1, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x1034, .value=0x8d}, {.addr=0x1035, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x1036, .a=0x58, .x=0x18, .y=0x94, .sp=0xb1, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1034, .value=0x8d}, {.addr=0x1035, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x1034, .value=0x8d, .type=IO_READ},
        {.addr=0x1035, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_034A) {
    const struct CPU_State initial_cpu = {.pc=0x19b6, .a=0x1c, .x=0xc1, .y=0x2d, .sp=0x5b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x19b6, .value=0x8d}, {.addr=0x19b7, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x19b8, .a=0x1c, .x=0xc1, .y=0x49, .sp=0x5b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x19b6, .value=0x8d}, {.addr=0x19b7, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x19b6, .value=0x8d, .type=IO_READ},
        {.addr=0x19b7, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_034B) {
    const struct CPU_State initial_cpu = {.pc=0x6836, .a=0x15, .x=0x52, .y=0x82, .sp=0x2f, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x6836, .value=0x8d}, {.addr=0x6837, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x6838, .a=0x15, .x=0x52, .y=0xb4, .sp=0x2f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x6836, .value=0x8d}, {.addr=0x6837, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x6836, .value=0x8d, .type=IO_READ},
        {.addr=0x6837, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_034C) {
    const struct CPU_State initial_cpu = {.pc=0x414f, .a=0x07, .x=0x38, .y=0xd4, .sp=0xc1, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x414f, .value=0x8d}, {.addr=0x4150, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x4151, .a=0x07, .x=0x38, .y=0x34, .sp=0xc1, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x414f, .value=0x8d}, {.addr=0x4150, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x414f, .value=0x8d, .type=IO_READ},
        {.addr=0x4150, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_034D) {
    const struct CPU_State initial_cpu = {.pc=0x0354, .a=0xba, .x=0x88, .y=0x17, .sp=0x6b, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0354, .value=0x8d}, {.addr=0x0355, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x0356, .a=0xba, .x=0x88, .y=0xf0, .sp=0x6b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0354, .value=0x8d}, {.addr=0x0355, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x0354, .value=0x8d, .type=IO_READ},
        {.addr=0x0355, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_034E) {
    const struct CPU_State initial_cpu = {.pc=0x7611, .a=0xb7, .x=0x9f, .y=0x4a, .sp=0x6e, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x7611, .value=0x8d}, {.addr=0x7612, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x7613, .a=0xb7, .x=0x9f, .y=0x4e, .sp=0x6e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7611, .value=0x8d}, {.addr=0x7612, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x7611, .value=0x8d, .type=IO_READ},
        {.addr=0x7612, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_034F) {
    const struct CPU_State initial_cpu = {.pc=0xa1da, .a=0xdc, .x=0x5f, .y=0xeb, .sp=0x7b, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xa1da, .value=0x8d}, {.addr=0xa1db, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xa1dc, .a=0xdc, .x=0x5f, .y=0x95, .sp=0x7b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa1da, .value=0x8d}, {.addr=0xa1db, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xa1da, .value=0x8d, .type=IO_READ},
        {.addr=0xa1db, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0350) {
    const struct CPU_State initial_cpu = {.pc=0xe798, .a=0xcf, .x=0x0e, .y=0x06, .sp=0x67, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xe798, .value=0x8d}, {.addr=0xe799, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xe79a, .a=0xcf, .x=0x0e, .y=0xb0, .sp=0x67, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xe798, .value=0x8d}, {.addr=0xe799, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xe798, .value=0x8d, .type=IO_READ},
        {.addr=0xe799, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0351) {
    const struct CPU_State initial_cpu = {.pc=0x1228, .a=0xfa, .x=0x19, .y=0x0e, .sp=0x96, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x1228, .value=0x8d}, {.addr=0x1229, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x122a, .a=0xfa, .x=0x19, .y=0x06, .sp=0x96, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x1228, .value=0x8d}, {.addr=0x1229, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1228, .value=0x8d, .type=IO_READ},
        {.addr=0x1229, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0352) {
    const struct CPU_State initial_cpu = {.pc=0xe8ca, .a=0x5b, .x=0xcf, .y=0x6a, .sp=0xfa, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe8ca, .value=0x8d}, {.addr=0xe8cb, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xe8cc, .a=0x5b, .x=0xcf, .y=0x3a, .sp=0xfa, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe8ca, .value=0x8d}, {.addr=0xe8cb, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xe8ca, .value=0x8d, .type=IO_READ},
        {.addr=0xe8cb, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0353) {
    const struct CPU_State initial_cpu = {.pc=0x105b, .a=0x21, .x=0x7d, .y=0x27, .sp=0x9f, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x105b, .value=0x8d}, {.addr=0x105c, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x105d, .a=0x21, .x=0x7d, .y=0xe8, .sp=0x9f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x105b, .value=0x8d}, {.addr=0x105c, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x105b, .value=0x8d, .type=IO_READ},
        {.addr=0x105c, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0354) {
    const struct CPU_State initial_cpu = {.pc=0x2189, .a=0x03, .x=0x42, .y=0x94, .sp=0xed, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x2189, .value=0x8d}, {.addr=0x218a, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x218b, .a=0x03, .x=0x42, .y=0x3f, .sp=0xed, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2189, .value=0x8d}, {.addr=0x218a, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x2189, .value=0x8d, .type=IO_READ},
        {.addr=0x218a, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0355) {
    const struct CPU_State initial_cpu = {.pc=0xfeda, .a=0xe8, .x=0xb5, .y=0xcf, .sp=0xec, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xfeda, .value=0x8d}, {.addr=0xfedb, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xfedc, .a=0xe8, .x=0xb5, .y=0x37, .sp=0xec, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xfeda, .value=0x8d}, {.addr=0xfedb, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xfeda, .value=0x8d, .type=IO_READ},
        {.addr=0xfedb, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0356) {
    const struct CPU_State initial_cpu = {.pc=0xc07d, .a=0x87, .x=0x12, .y=0x9d, .sp=0xa7, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xc07d, .value=0x8d}, {.addr=0xc07e, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xc07f, .a=0x87, .x=0x12, .y=0x2c, .sp=0xa7, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xc07d, .value=0x8d}, {.addr=0xc07e, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xc07d, .value=0x8d, .type=IO_READ},
        {.addr=0xc07e, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0357) {
    const struct CPU_State initial_cpu = {.pc=0xbcda, .a=0x8c, .x=0x2d, .y=0x1c, .sp=0x0f, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xbcda, .value=0x8d}, {.addr=0xbcdb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbcdc, .a=0x8c, .x=0x2d, .y=0x20, .sp=0x0f, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xbcda, .value=0x8d}, {.addr=0xbcdb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbcda, .value=0x8d, .type=IO_READ},
        {.addr=0xbcdb, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0358) {
    const struct CPU_State initial_cpu = {.pc=0xde06, .a=0x8d, .x=0x98, .y=0xb4, .sp=0xa1, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xde06, .value=0x8d}, {.addr=0xde07, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xde08, .a=0x8d, .x=0x98, .y=0xc4, .sp=0xa1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xde06, .value=0x8d}, {.addr=0xde07, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xde06, .value=0x8d, .type=IO_READ},
        {.addr=0xde07, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0359) {
    const struct CPU_State initial_cpu = {.pc=0x7d5f, .a=0x4a, .x=0x65, .y=0xb9, .sp=0x47, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x7d5f, .value=0x8d}, {.addr=0x7d60, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x7d61, .a=0x4a, .x=0x65, .y=0x2f, .sp=0x47, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7d5f, .value=0x8d}, {.addr=0x7d60, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x7d5f, .value=0x8d, .type=IO_READ},
        {.addr=0x7d60, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_035A) {
    const struct CPU_State initial_cpu = {.pc=0xf26d, .a=0xbb, .x=0x9b, .y=0xb8, .sp=0x28, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xf26d, .value=0x8d}, {.addr=0xf26e, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xf26f, .a=0xbb, .x=0x9b, .y=0x67, .sp=0x28, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf26d, .value=0x8d}, {.addr=0xf26e, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xf26d, .value=0x8d, .type=IO_READ},
        {.addr=0xf26e, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_035B) {
    const struct CPU_State initial_cpu = {.pc=0x3fa9, .a=0xb3, .x=0x2f, .y=0x3d, .sp=0xf5, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x3fa9, .value=0x8d}, {.addr=0x3faa, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x3fab, .a=0xb3, .x=0x2f, .y=0x58, .sp=0xf5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x3fa9, .value=0x8d}, {.addr=0x3faa, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x3fa9, .value=0x8d, .type=IO_READ},
        {.addr=0x3faa, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_035C) {
    const struct CPU_State initial_cpu = {.pc=0xe515, .a=0xde, .x=0x9c, .y=0x8e, .sp=0xfe, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe515, .value=0x8d}, {.addr=0xe516, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xe517, .a=0xde, .x=0x9c, .y=0x68, .sp=0xfe, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe515, .value=0x8d}, {.addr=0xe516, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xe515, .value=0x8d, .type=IO_READ},
        {.addr=0xe516, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_035D) {
    const struct CPU_State initial_cpu = {.pc=0x8e81, .a=0x89, .x=0xda, .y=0x74, .sp=0x19, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x8e81, .value=0x8d}, {.addr=0x8e82, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x8e83, .a=0x89, .x=0xda, .y=0xf4, .sp=0x19, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x8e81, .value=0x8d}, {.addr=0x8e82, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x8e81, .value=0x8d, .type=IO_READ},
        {.addr=0x8e82, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_035E) {
    const struct CPU_State initial_cpu = {.pc=0xd146, .a=0x65, .x=0xd3, .y=0x6a, .sp=0x7b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xd146, .value=0x8d}, {.addr=0xd147, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd148, .a=0x65, .x=0xd3, .y=0xdc, .sp=0x7b, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd146, .value=0x8d}, {.addr=0xd147, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd146, .value=0x8d, .type=IO_READ},
        {.addr=0xd147, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_035F) {
    const struct CPU_State initial_cpu = {.pc=0x1af3, .a=0x21, .x=0x82, .y=0x6e, .sp=0x46, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x1af3, .value=0x8d}, {.addr=0x1af4, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x1af5, .a=0x21, .x=0x82, .y=0x05, .sp=0x46, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x1af3, .value=0x8d}, {.addr=0x1af4, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x1af3, .value=0x8d, .type=IO_READ},
        {.addr=0x1af4, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0360) {
    const struct CPU_State initial_cpu = {.pc=0x6059, .a=0x95, .x=0xfc, .y=0xfb, .sp=0x9e, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x6059, .value=0x8d}, {.addr=0x605a, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x605b, .a=0x95, .x=0xfc, .y=0xb3, .sp=0x9e, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6059, .value=0x8d}, {.addr=0x605a, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x6059, .value=0x8d, .type=IO_READ},
        {.addr=0x605a, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0361) {
    const struct CPU_State initial_cpu = {.pc=0xff7c, .a=0x32, .x=0xff, .y=0x85, .sp=0x4c, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xff7c, .value=0x8d}, {.addr=0xff7d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xff7e, .a=0x32, .x=0xff, .y=0x5d, .sp=0x4c, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xff7c, .value=0x8d}, {.addr=0xff7d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xff7c, .value=0x8d, .type=IO_READ},
        {.addr=0xff7d, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0362) {
    const struct CPU_State initial_cpu = {.pc=0x5212, .a=0xb0, .x=0x09, .y=0x4d, .sp=0x59, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x5212, .value=0x8d}, {.addr=0x5213, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x5214, .a=0xb0, .x=0x09, .y=0x03, .sp=0x59, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5212, .value=0x8d}, {.addr=0x5213, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x5212, .value=0x8d, .type=IO_READ},
        {.addr=0x5213, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0363) {
    const struct CPU_State initial_cpu = {.pc=0xed58, .a=0xeb, .x=0x83, .y=0xf8, .sp=0x61, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xed58, .value=0x8d}, {.addr=0xed59, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xed5a, .a=0xeb, .x=0x83, .y=0xbe, .sp=0x61, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xed58, .value=0x8d}, {.addr=0xed59, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xed58, .value=0x8d, .type=IO_READ},
        {.addr=0xed59, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0364) {
    const struct CPU_State initial_cpu = {.pc=0x786e, .a=0xb8, .x=0x8b, .y=0x8c, .sp=0xfe, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x786e, .value=0x8d}, {.addr=0x786f, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x7870, .a=0xb8, .x=0x8b, .y=0xbb, .sp=0xfe, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x786e, .value=0x8d}, {.addr=0x786f, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x786e, .value=0x8d, .type=IO_READ},
        {.addr=0x786f, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0365) {
    const struct CPU_State initial_cpu = {.pc=0xc085, .a=0x72, .x=0xe0, .y=0xa8, .sp=0xad, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xc085, .value=0x8d}, {.addr=0xc086, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xc087, .a=0x72, .x=0xe0, .y=0x62, .sp=0xad, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xc085, .value=0x8d}, {.addr=0xc086, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xc085, .value=0x8d, .type=IO_READ},
        {.addr=0xc086, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0366) {
    const struct CPU_State initial_cpu = {.pc=0x1ca0, .a=0x06, .x=0xd5, .y=0x78, .sp=0x36, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x1ca0, .value=0x8d}, {.addr=0x1ca1, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x1ca2, .a=0x06, .x=0xd5, .y=0xa3, .sp=0x36, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1ca0, .value=0x8d}, {.addr=0x1ca1, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x1ca0, .value=0x8d, .type=IO_READ},
        {.addr=0x1ca1, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0367) {
    const struct CPU_State initial_cpu = {.pc=0xbad8, .a=0x2e, .x=0x30, .y=0xbf, .sp=0xbd, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xbad8, .value=0x8d}, {.addr=0xbad9, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xbada, .a=0x2e, .x=0x30, .y=0x08, .sp=0xbd, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xbad8, .value=0x8d}, {.addr=0xbad9, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xbad8, .value=0x8d, .type=IO_READ},
        {.addr=0xbad9, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0368) {
    const struct CPU_State initial_cpu = {.pc=0xacc1, .a=0x88, .x=0xc9, .y=0x89, .sp=0xaa, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xacc1, .value=0x8d}, {.addr=0xacc2, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xacc3, .a=0x88, .x=0xc9, .y=0x33, .sp=0xaa, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xacc1, .value=0x8d}, {.addr=0xacc2, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xacc1, .value=0x8d, .type=IO_READ},
        {.addr=0xacc2, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0369) {
    const struct CPU_State initial_cpu = {.pc=0x2981, .a=0x3b, .x=0x58, .y=0x70, .sp=0x42, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x2981, .value=0x8d}, {.addr=0x2982, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x2983, .a=0x3b, .x=0x58, .y=0xf1, .sp=0x42, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x2981, .value=0x8d}, {.addr=0x2982, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x2981, .value=0x8d, .type=IO_READ},
        {.addr=0x2982, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_036A) {
    const struct CPU_State initial_cpu = {.pc=0xe689, .a=0xce, .x=0x08, .y=0x14, .sp=0x3b, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xe689, .value=0x8d}, {.addr=0xe68a, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xe68b, .a=0xce, .x=0x08, .y=0xe8, .sp=0x3b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe689, .value=0x8d}, {.addr=0xe68a, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xe689, .value=0x8d, .type=IO_READ},
        {.addr=0xe68a, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_036B) {
    const struct CPU_State initial_cpu = {.pc=0x92c8, .a=0xb4, .x=0x1e, .y=0xbc, .sp=0x7b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x92c8, .value=0x8d}, {.addr=0x92c9, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x92ca, .a=0xb4, .x=0x1e, .y=0xa7, .sp=0x7b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x92c8, .value=0x8d}, {.addr=0x92c9, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x92c8, .value=0x8d, .type=IO_READ},
        {.addr=0x92c9, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_036C) {
    const struct CPU_State initial_cpu = {.pc=0x9a13, .a=0x17, .x=0xc5, .y=0x32, .sp=0x59, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x9a13, .value=0x8d}, {.addr=0x9a14, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x9a15, .a=0x17, .x=0xc5, .y=0x32, .sp=0x59, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9a13, .value=0x8d}, {.addr=0x9a14, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x9a13, .value=0x8d, .type=IO_READ},
        {.addr=0x9a14, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_036D) {
    const struct CPU_State initial_cpu = {.pc=0x4f8b, .a=0x02, .x=0xff, .y=0x3d, .sp=0x23, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x4f8b, .value=0x8d}, {.addr=0x4f8c, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x4f8d, .a=0x02, .x=0xff, .y=0x45, .sp=0x23, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x4f8b, .value=0x8d}, {.addr=0x4f8c, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x4f8b, .value=0x8d, .type=IO_READ},
        {.addr=0x4f8c, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_036E) {
    const struct CPU_State initial_cpu = {.pc=0x1ca2, .a=0x73, .x=0x8f, .y=0xae, .sp=0x4f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x1ca2, .value=0x8d}, {.addr=0x1ca3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1ca4, .a=0x73, .x=0x8f, .y=0xee, .sp=0x4f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x1ca2, .value=0x8d}, {.addr=0x1ca3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1ca2, .value=0x8d, .type=IO_READ},
        {.addr=0x1ca3, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_036F) {
    const struct CPU_State initial_cpu = {.pc=0xb7c0, .a=0xd6, .x=0xe7, .y=0x8b, .sp=0xdb, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xb7c0, .value=0x8d}, {.addr=0xb7c1, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xb7c2, .a=0xd6, .x=0xe7, .y=0xa4, .sp=0xdb, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xb7c0, .value=0x8d}, {.addr=0xb7c1, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xb7c0, .value=0x8d, .type=IO_READ},
        {.addr=0xb7c1, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0370) {
    const struct CPU_State initial_cpu = {.pc=0xaa0f, .a=0x66, .x=0x6e, .y=0xfd, .sp=0xe5, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xaa0f, .value=0x8d}, {.addr=0xaa10, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xaa11, .a=0x66, .x=0x6e, .y=0x08, .sp=0xe5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xaa0f, .value=0x8d}, {.addr=0xaa10, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xaa0f, .value=0x8d, .type=IO_READ},
        {.addr=0xaa10, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0371) {
    const struct CPU_State initial_cpu = {.pc=0xabc4, .a=0x64, .x=0x5b, .y=0x03, .sp=0xec, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xabc4, .value=0x8d}, {.addr=0xabc5, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xabc6, .a=0x64, .x=0x5b, .y=0x0b, .sp=0xec, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xabc4, .value=0x8d}, {.addr=0xabc5, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xabc4, .value=0x8d, .type=IO_READ},
        {.addr=0xabc5, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0372) {
    const struct CPU_State initial_cpu = {.pc=0xa435, .a=0x22, .x=0x79, .y=0xbd, .sp=0x57, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xa435, .value=0x8d}, {.addr=0xa436, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xa437, .a=0x22, .x=0x79, .y=0xba, .sp=0x57, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa435, .value=0x8d}, {.addr=0xa436, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xa435, .value=0x8d, .type=IO_READ},
        {.addr=0xa436, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0373) {
    const struct CPU_State initial_cpu = {.pc=0xefa4, .a=0xe8, .x=0x37, .y=0xac, .sp=0x09, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xefa4, .value=0x8d}, {.addr=0xefa5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xefa6, .a=0xe8, .x=0x37, .y=0xee, .sp=0x09, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xefa4, .value=0x8d}, {.addr=0xefa5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xefa4, .value=0x8d, .type=IO_READ},
        {.addr=0xefa5, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0374) {
    const struct CPU_State initial_cpu = {.pc=0x2eef, .a=0xd8, .x=0x4e, .y=0x72, .sp=0xce, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x2eef, .value=0x8d}, {.addr=0x2ef0, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x2ef1, .a=0xd8, .x=0x4e, .y=0xc4, .sp=0xce, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2eef, .value=0x8d}, {.addr=0x2ef0, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x2eef, .value=0x8d, .type=IO_READ},
        {.addr=0x2ef0, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0375) {
    const struct CPU_State initial_cpu = {.pc=0xee9b, .a=0xa0, .x=0x31, .y=0x60, .sp=0x8c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xee9b, .value=0x8d}, {.addr=0xee9c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xee9d, .a=0xa0, .x=0x31, .y=0x66, .sp=0x8c, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xee9b, .value=0x8d}, {.addr=0xee9c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xee9b, .value=0x8d, .type=IO_READ},
        {.addr=0xee9c, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0376) {
    const struct CPU_State initial_cpu = {.pc=0xef7b, .a=0x4d, .x=0x35, .y=0x9f, .sp=0x38, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xef7b, .value=0x8d}, {.addr=0xef7c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xef7d, .a=0x4d, .x=0x35, .y=0x5c, .sp=0x38, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xef7b, .value=0x8d}, {.addr=0xef7c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xef7b, .value=0x8d, .type=IO_READ},
        {.addr=0xef7c, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0377) {
    const struct CPU_State initial_cpu = {.pc=0x0436, .a=0x44, .x=0x01, .y=0xb0, .sp=0xa8, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0436, .value=0x8d}, {.addr=0x0437, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0438, .a=0x44, .x=0x01, .y=0x86, .sp=0xa8, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0436, .value=0x8d}, {.addr=0x0437, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0436, .value=0x8d, .type=IO_READ},
        {.addr=0x0437, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0378) {
    const struct CPU_State initial_cpu = {.pc=0x77be, .a=0x08, .x=0xff, .y=0x31, .sp=0xab, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x77be, .value=0x8d}, {.addr=0x77bf, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x77c0, .a=0x08, .x=0xff, .y=0xb2, .sp=0xab, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x77be, .value=0x8d}, {.addr=0x77bf, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x77be, .value=0x8d, .type=IO_READ},
        {.addr=0x77bf, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0379) {
    const struct CPU_State initial_cpu = {.pc=0xdba8, .a=0xa5, .x=0x94, .y=0x4a, .sp=0x0e, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xdba8, .value=0x8d}, {.addr=0xdba9, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xdbaa, .a=0xa5, .x=0x94, .y=0x18, .sp=0x0e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xdba8, .value=0x8d}, {.addr=0xdba9, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xdba8, .value=0x8d, .type=IO_READ},
        {.addr=0xdba9, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_037A) {
    const struct CPU_State initial_cpu = {.pc=0xfd98, .a=0xff, .x=0x13, .y=0x35, .sp=0xf9, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xfd98, .value=0x8d}, {.addr=0xfd99, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xfd9a, .a=0xff, .x=0x13, .y=0x38, .sp=0xf9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xfd98, .value=0x8d}, {.addr=0xfd99, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xfd98, .value=0x8d, .type=IO_READ},
        {.addr=0xfd99, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_037B) {
    const struct CPU_State initial_cpu = {.pc=0x8545, .a=0xe9, .x=0x7f, .y=0xd5, .sp=0x30, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x8545, .value=0x8d}, {.addr=0x8546, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x8547, .a=0xe9, .x=0x7f, .y=0xca, .sp=0x30, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x8545, .value=0x8d}, {.addr=0x8546, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x8545, .value=0x8d, .type=IO_READ},
        {.addr=0x8546, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_037C) {
    const struct CPU_State initial_cpu = {.pc=0x2b56, .a=0xdb, .x=0xbf, .y=0x0b, .sp=0x29, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x2b56, .value=0x8d}, {.addr=0x2b57, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x2b58, .a=0xdb, .x=0xbf, .y=0x58, .sp=0x29, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2b56, .value=0x8d}, {.addr=0x2b57, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x2b56, .value=0x8d, .type=IO_READ},
        {.addr=0x2b57, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_037D) {
    const struct CPU_State initial_cpu = {.pc=0x2345, .a=0x2a, .x=0xeb, .y=0xc7, .sp=0x9f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2345, .value=0x8d}, {.addr=0x2346, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x2347, .a=0x2a, .x=0xeb, .y=0x81, .sp=0x9f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2345, .value=0x8d}, {.addr=0x2346, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x2345, .value=0x8d, .type=IO_READ},
        {.addr=0x2346, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_037E) {
    const struct CPU_State initial_cpu = {.pc=0xc979, .a=0x51, .x=0x49, .y=0x80, .sp=0xc6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xc979, .value=0x8d}, {.addr=0xc97a, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xc97b, .a=0x51, .x=0x49, .y=0xa4, .sp=0xc6, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xc979, .value=0x8d}, {.addr=0xc97a, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xc979, .value=0x8d, .type=IO_READ},
        {.addr=0xc97a, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_037F) {
    const struct CPU_State initial_cpu = {.pc=0x24f0, .a=0xfe, .x=0x45, .y=0x3a, .sp=0xd3, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x24f0, .value=0x8d}, {.addr=0x24f1, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x24f2, .a=0xfe, .x=0x45, .y=0xef, .sp=0xd3, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x24f0, .value=0x8d}, {.addr=0x24f1, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x24f0, .value=0x8d, .type=IO_READ},
        {.addr=0x24f1, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0380) {
    const struct CPU_State initial_cpu = {.pc=0x72a4, .a=0xd9, .x=0x38, .y=0x7f, .sp=0x07, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x72a4, .value=0x8d}, {.addr=0x72a5, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x72a6, .a=0xd9, .x=0x38, .y=0x08, .sp=0x07, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x72a4, .value=0x8d}, {.addr=0x72a5, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x72a4, .value=0x8d, .type=IO_READ},
        {.addr=0x72a5, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0381) {
    const struct CPU_State initial_cpu = {.pc=0x94ff, .a=0x7a, .x=0xda, .y=0x69, .sp=0xb5, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x94ff, .value=0x8d}, {.addr=0x9500, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x9501, .a=0x7a, .x=0xda, .y=0x15, .sp=0xb5, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x94ff, .value=0x8d}, {.addr=0x9500, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x94ff, .value=0x8d, .type=IO_READ},
        {.addr=0x9500, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0382) {
    const struct CPU_State initial_cpu = {.pc=0xa817, .a=0x1d, .x=0x6f, .y=0x76, .sp=0xf0, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xa817, .value=0x8d}, {.addr=0xa818, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa819, .a=0x1d, .x=0x6f, .y=0xaf, .sp=0xf0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xa817, .value=0x8d}, {.addr=0xa818, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa817, .value=0x8d, .type=IO_READ},
        {.addr=0xa818, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0383) {
    const struct CPU_State initial_cpu = {.pc=0x4683, .a=0xee, .x=0x4b, .y=0x77, .sp=0xba, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x4683, .value=0x8d}, {.addr=0x4684, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4685, .a=0xee, .x=0x4b, .y=0xbe, .sp=0xba, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x4683, .value=0x8d}, {.addr=0x4684, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4683, .value=0x8d, .type=IO_READ},
        {.addr=0x4684, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0384) {
    const struct CPU_State initial_cpu = {.pc=0xaeae, .a=0x60, .x=0xe8, .y=0x78, .sp=0x07, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xaeae, .value=0x8d}, {.addr=0xaeaf, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xaeb0, .a=0x60, .x=0xe8, .y=0xd3, .sp=0x07, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xaeae, .value=0x8d}, {.addr=0xaeaf, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xaeae, .value=0x8d, .type=IO_READ},
        {.addr=0xaeaf, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0385) {
    const struct CPU_State initial_cpu = {.pc=0xfb2e, .a=0xe5, .x=0x62, .y=0xbd, .sp=0xa9, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xfb2e, .value=0x8d}, {.addr=0xfb2f, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xfb30, .a=0xe5, .x=0x62, .y=0xba, .sp=0xa9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xfb2e, .value=0x8d}, {.addr=0xfb2f, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xfb2e, .value=0x8d, .type=IO_READ},
        {.addr=0xfb2f, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0386) {
    const struct CPU_State initial_cpu = {.pc=0x6109, .a=0x6e, .x=0x89, .y=0x07, .sp=0xa9, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x6109, .value=0x8d}, {.addr=0x610a, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x610b, .a=0x6e, .x=0x89, .y=0xe7, .sp=0xa9, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x6109, .value=0x8d}, {.addr=0x610a, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x6109, .value=0x8d, .type=IO_READ},
        {.addr=0x610a, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0387) {
    const struct CPU_State initial_cpu = {.pc=0xb98b, .a=0x87, .x=0x82, .y=0x3b, .sp=0x1e, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xb98b, .value=0x8d}, {.addr=0xb98c, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xb98d, .a=0x87, .x=0x82, .y=0x9b, .sp=0x1e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xb98b, .value=0x8d}, {.addr=0xb98c, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xb98b, .value=0x8d, .type=IO_READ},
        {.addr=0xb98c, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0388) {
    const struct CPU_State initial_cpu = {.pc=0xd0c3, .a=0xad, .x=0x9a, .y=0x83, .sp=0xd4, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xd0c3, .value=0x8d}, {.addr=0xd0c4, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xd0c5, .a=0xad, .x=0x9a, .y=0x91, .sp=0xd4, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd0c3, .value=0x8d}, {.addr=0xd0c4, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xd0c3, .value=0x8d, .type=IO_READ},
        {.addr=0xd0c4, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0389) {
    const struct CPU_State initial_cpu = {.pc=0x5ec4, .a=0xa2, .x=0x6e, .y=0xfe, .sp=0xe8, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec4, .value=0x8d}, {.addr=0x5ec5, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x5ec6, .a=0xa2, .x=0x6e, .y=0xb6, .sp=0xe8, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x5ec4, .value=0x8d}, {.addr=0x5ec5, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x5ec4, .value=0x8d, .type=IO_READ},
        {.addr=0x5ec5, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_038A) {
    const struct CPU_State initial_cpu = {.pc=0x360d, .a=0xaf, .x=0x4f, .y=0xbb, .sp=0xb4, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x360d, .value=0x8d}, {.addr=0x360e, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x360f, .a=0xaf, .x=0x4f, .y=0xe8, .sp=0xb4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x360d, .value=0x8d}, {.addr=0x360e, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x360d, .value=0x8d, .type=IO_READ},
        {.addr=0x360e, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_038B) {
    const struct CPU_State initial_cpu = {.pc=0xb50a, .a=0x1e, .x=0x6a, .y=0xce, .sp=0x2a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xb50a, .value=0x8d}, {.addr=0xb50b, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb50c, .a=0x1e, .x=0x6a, .y=0x8e, .sp=0x2a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb50a, .value=0x8d}, {.addr=0xb50b, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb50a, .value=0x8d, .type=IO_READ},
        {.addr=0xb50b, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_038C) {
    const struct CPU_State initial_cpu = {.pc=0xc12e, .a=0x1a, .x=0x97, .y=0xef, .sp=0x7f, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xc12e, .value=0x8d}, {.addr=0xc12f, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xc130, .a=0x1a, .x=0x97, .y=0x43, .sp=0x7f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc12e, .value=0x8d}, {.addr=0xc12f, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xc12e, .value=0x8d, .type=IO_READ},
        {.addr=0xc12f, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_038D) {
    const struct CPU_State initial_cpu = {.pc=0x2576, .a=0x91, .x=0x8a, .y=0x4c, .sp=0xa5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x2576, .value=0x8d}, {.addr=0x2577, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2578, .a=0x91, .x=0x8a, .y=0xa6, .sp=0xa5, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x2576, .value=0x8d}, {.addr=0x2577, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2576, .value=0x8d, .type=IO_READ},
        {.addr=0x2577, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_038E) {
    const struct CPU_State initial_cpu = {.pc=0x7056, .a=0x48, .x=0x18, .y=0x2d, .sp=0x73, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x7056, .value=0x8d}, {.addr=0x7057, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x7058, .a=0x48, .x=0x18, .y=0x2b, .sp=0x73, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x7056, .value=0x8d}, {.addr=0x7057, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x7056, .value=0x8d, .type=IO_READ},
        {.addr=0x7057, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_038F) {
    const struct CPU_State initial_cpu = {.pc=0x64ca, .a=0x10, .x=0x89, .y=0x3a, .sp=0x91, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x64ca, .value=0x8d}, {.addr=0x64cb, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x64cc, .a=0x10, .x=0x89, .y=0x07, .sp=0x91, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x64ca, .value=0x8d}, {.addr=0x64cb, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x64ca, .value=0x8d, .type=IO_READ},
        {.addr=0x64cb, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0390) {
    const struct CPU_State initial_cpu = {.pc=0xf576, .a=0x2a, .x=0x65, .y=0x4c, .sp=0x8e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xf576, .value=0x8d}, {.addr=0xf577, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xf578, .a=0x2a, .x=0x65, .y=0x3a, .sp=0x8e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf576, .value=0x8d}, {.addr=0xf577, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xf576, .value=0x8d, .type=IO_READ},
        {.addr=0xf577, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0391) {
    const struct CPU_State initial_cpu = {.pc=0x885d, .a=0x48, .x=0x11, .y=0xc5, .sp=0x36, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x885d, .value=0x8d}, {.addr=0x885e, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x885f, .a=0x48, .x=0x11, .y=0x30, .sp=0x36, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x885d, .value=0x8d}, {.addr=0x885e, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x885d, .value=0x8d, .type=IO_READ},
        {.addr=0x885e, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0392) {
    const struct CPU_State initial_cpu = {.pc=0x42d3, .a=0x26, .x=0xf2, .y=0xc9, .sp=0xfb, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x42d3, .value=0x8d}, {.addr=0x42d4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x42d5, .a=0x26, .x=0xf2, .y=0x3c, .sp=0xfb, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x42d3, .value=0x8d}, {.addr=0x42d4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x42d3, .value=0x8d, .type=IO_READ},
        {.addr=0x42d4, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0393) {
    const struct CPU_State initial_cpu = {.pc=0x1975, .a=0xb2, .x=0x7b, .y=0x73, .sp=0x04, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x1975, .value=0x8d}, {.addr=0x1976, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x1977, .a=0xb2, .x=0x7b, .y=0x13, .sp=0x04, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1975, .value=0x8d}, {.addr=0x1976, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x1975, .value=0x8d, .type=IO_READ},
        {.addr=0x1976, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0394) {
    const struct CPU_State initial_cpu = {.pc=0xc72a, .a=0x6a, .x=0x0b, .y=0x60, .sp=0x21, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xc72a, .value=0x8d}, {.addr=0xc72b, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xc72c, .a=0x6a, .x=0x0b, .y=0x8a, .sp=0x21, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xc72a, .value=0x8d}, {.addr=0xc72b, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xc72a, .value=0x8d, .type=IO_READ},
        {.addr=0xc72b, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0395) {
    const struct CPU_State initial_cpu = {.pc=0x17fa, .a=0x0b, .x=0x78, .y=0xf9, .sp=0xf2, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x17fa, .value=0x8d}, {.addr=0x17fb, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x17fc, .a=0x0b, .x=0x78, .y=0xa1, .sp=0xf2, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x17fa, .value=0x8d}, {.addr=0x17fb, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x17fa, .value=0x8d, .type=IO_READ},
        {.addr=0x17fb, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0396) {
    const struct CPU_State initial_cpu = {.pc=0xcd25, .a=0x35, .x=0x40, .y=0x46, .sp=0xc3, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xcd25, .value=0x8d}, {.addr=0xcd26, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xcd27, .a=0x35, .x=0x40, .y=0x25, .sp=0xc3, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xcd25, .value=0x8d}, {.addr=0xcd26, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xcd25, .value=0x8d, .type=IO_READ},
        {.addr=0xcd26, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0397) {
    const struct CPU_State initial_cpu = {.pc=0x7ca9, .a=0x29, .x=0x8d, .y=0x1b, .sp=0x2a, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x7ca9, .value=0x8d}, {.addr=0x7caa, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x7cab, .a=0x29, .x=0x8d, .y=0x7a, .sp=0x2a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7ca9, .value=0x8d}, {.addr=0x7caa, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x7ca9, .value=0x8d, .type=IO_READ},
        {.addr=0x7caa, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0398) {
    const struct CPU_State initial_cpu = {.pc=0x04ee, .a=0x2a, .x=0x38, .y=0x6a, .sp=0x9f, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x04ee, .value=0x8d}, {.addr=0x04ef, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x04f0, .a=0x2a, .x=0x38, .y=0xb8, .sp=0x9f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x04ee, .value=0x8d}, {.addr=0x04ef, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x04ee, .value=0x8d, .type=IO_READ},
        {.addr=0x04ef, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_0399) {
    const struct CPU_State initial_cpu = {.pc=0xb912, .a=0x47, .x=0xaf, .y=0xeb, .sp=0x0d, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xb912, .value=0x8d}, {.addr=0xb913, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xb914, .a=0x47, .x=0xaf, .y=0x94, .sp=0x0d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb912, .value=0x8d}, {.addr=0xb913, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xb912, .value=0x8d, .type=IO_READ},
        {.addr=0xb913, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_039A) {
    const struct CPU_State initial_cpu = {.pc=0x1fbd, .a=0x7a, .x=0xd6, .y=0xde, .sp=0x50, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x1fbd, .value=0x8d}, {.addr=0x1fbe, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1fbf, .a=0x7a, .x=0xd6, .y=0x0d, .sp=0x50, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1fbd, .value=0x8d}, {.addr=0x1fbe, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1fbd, .value=0x8d, .type=IO_READ},
        {.addr=0x1fbe, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_039B) {
    const struct CPU_State initial_cpu = {.pc=0x5f0f, .a=0x82, .x=0xb1, .y=0x7c, .sp=0xb3, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x5f0f, .value=0x8d}, {.addr=0x5f10, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x5f11, .a=0x82, .x=0xb1, .y=0x22, .sp=0xb3, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5f0f, .value=0x8d}, {.addr=0x5f10, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x5f0f, .value=0x8d, .type=IO_READ},
        {.addr=0x5f10, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_039C) {
    const struct CPU_State initial_cpu = {.pc=0x68e1, .a=0xd1, .x=0xc1, .y=0x67, .sp=0xe9, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x68e1, .value=0x8d}, {.addr=0x68e2, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x68e3, .a=0xd1, .x=0xc1, .y=0xb4, .sp=0xe9, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x68e1, .value=0x8d}, {.addr=0x68e2, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x68e1, .value=0x8d, .type=IO_READ},
        {.addr=0x68e2, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_039D) {
    const struct CPU_State initial_cpu = {.pc=0xc5f5, .a=0x5f, .x=0x3e, .y=0x88, .sp=0x48, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xc5f5, .value=0x8d}, {.addr=0xc5f6, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xc5f7, .a=0x5f, .x=0x3e, .y=0x90, .sp=0x48, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xc5f5, .value=0x8d}, {.addr=0xc5f6, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xc5f5, .value=0x8d, .type=IO_READ},
        {.addr=0xc5f6, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_039E) {
    const struct CPU_State initial_cpu = {.pc=0xab65, .a=0x76, .x=0x9e, .y=0x55, .sp=0xf1, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xab65, .value=0x8d}, {.addr=0xab66, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xab67, .a=0x76, .x=0x9e, .y=0xf5, .sp=0xf1, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xab65, .value=0x8d}, {.addr=0xab66, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xab65, .value=0x8d, .type=IO_READ},
        {.addr=0xab66, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_039F) {
    const struct CPU_State initial_cpu = {.pc=0x5bb7, .a=0x16, .x=0xbb, .y=0x3d, .sp=0xde, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5bb7, .value=0x8d}, {.addr=0x5bb8, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x5bb9, .a=0x16, .x=0xbb, .y=0x18, .sp=0xde, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5bb7, .value=0x8d}, {.addr=0x5bb8, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x5bb7, .value=0x8d, .type=IO_READ},
        {.addr=0x5bb8, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xec1d, .a=0x17, .x=0x33, .y=0x92, .sp=0x73, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xec1d, .value=0x8d}, {.addr=0xec1e, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xec1f, .a=0x17, .x=0x33, .y=0x27, .sp=0x73, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xec1d, .value=0x8d}, {.addr=0xec1e, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xec1d, .value=0x8d, .type=IO_READ},
        {.addr=0xec1e, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xea0b, .a=0xce, .x=0x55, .y=0xc8, .sp=0xca, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xea0b, .value=0x8d}, {.addr=0xea0c, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xea0d, .a=0xce, .x=0x55, .y=0xf1, .sp=0xca, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xea0b, .value=0x8d}, {.addr=0xea0c, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xea0b, .value=0x8d, .type=IO_READ},
        {.addr=0xea0c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x1a2b, .a=0x9b, .x=0x2c, .y=0xb4, .sp=0xa0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x1a2b, .value=0x8d}, {.addr=0x1a2c, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x1a2d, .a=0x9b, .x=0x2c, .y=0xd2, .sp=0xa0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1a2b, .value=0x8d}, {.addr=0x1a2c, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x1a2b, .value=0x8d, .type=IO_READ},
        {.addr=0x1a2c, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xff8e, .a=0xbd, .x=0x95, .y=0xe3, .sp=0x4f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xff8e, .value=0x8d}, {.addr=0xff8f, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xff90, .a=0xbd, .x=0x95, .y=0x0a, .sp=0x4f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xff8e, .value=0x8d}, {.addr=0xff8f, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xff8e, .value=0x8d, .type=IO_READ},
        {.addr=0xff8f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x365c, .a=0x34, .x=0xa6, .y=0xee, .sp=0xa9, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x365c, .value=0x8d}, {.addr=0x365d, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x365e, .a=0x34, .x=0xa6, .y=0x17, .sp=0xa9, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x365c, .value=0x8d}, {.addr=0x365d, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x365c, .value=0x8d, .type=IO_READ},
        {.addr=0x365d, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x9949, .a=0x7c, .x=0x74, .y=0x2e, .sp=0x58, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x9949, .value=0x8d}, {.addr=0x994a, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x994b, .a=0x7c, .x=0x74, .y=0x7e, .sp=0x58, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x9949, .value=0x8d}, {.addr=0x994a, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x9949, .value=0x8d, .type=IO_READ},
        {.addr=0x994a, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xafd8, .a=0xd1, .x=0xc4, .y=0x50, .sp=0x17, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xafd8, .value=0x8d}, {.addr=0xafd9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xafda, .a=0xd1, .x=0xc4, .y=0x20, .sp=0x17, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xafd8, .value=0x8d}, {.addr=0xafd9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xafd8, .value=0x8d, .type=IO_READ},
        {.addr=0xafd9, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xde97, .a=0xfa, .x=0x28, .y=0x94, .sp=0x14, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xde97, .value=0x8d}, {.addr=0xde98, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xde99, .a=0xfa, .x=0x28, .y=0x0c, .sp=0x14, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xde97, .value=0x8d}, {.addr=0xde98, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xde97, .value=0x8d, .type=IO_READ},
        {.addr=0xde98, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x1ffe, .a=0x44, .x=0x2d, .y=0x4c, .sp=0xf1, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x1ffe, .value=0x8d}, {.addr=0x1fff, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x2000, .a=0x44, .x=0x2d, .y=0xea, .sp=0xf1, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x1ffe, .value=0x8d}, {.addr=0x1fff, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x1ffe, .value=0x8d, .type=IO_READ},
        {.addr=0x1fff, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x4bf6, .a=0x91, .x=0x63, .y=0x23, .sp=0xb9, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x4bf6, .value=0x8d}, {.addr=0x4bf7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4bf8, .a=0x91, .x=0x63, .y=0xa0, .sp=0xb9, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x4bf6, .value=0x8d}, {.addr=0x4bf7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4bf6, .value=0x8d, .type=IO_READ},
        {.addr=0x4bf7, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x3a2c, .a=0x86, .x=0x60, .y=0xd5, .sp=0xd6, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x3a2c, .value=0x8d}, {.addr=0x3a2d, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x3a2e, .a=0x86, .x=0x60, .y=0x74, .sp=0xd6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3a2c, .value=0x8d}, {.addr=0x3a2d, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x3a2c, .value=0x8d, .type=IO_READ},
        {.addr=0x3a2d, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xdd09, .a=0xe3, .x=0x63, .y=0x97, .sp=0x34, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xdd09, .value=0x8d}, {.addr=0xdd0a, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xdd0b, .a=0xe3, .x=0x63, .y=0xd3, .sp=0x34, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xdd09, .value=0x8d}, {.addr=0xdd0a, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xdd09, .value=0x8d, .type=IO_READ},
        {.addr=0xdd0a, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xc63a, .a=0xd4, .x=0x68, .y=0xdc, .sp=0x83, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc63a, .value=0x8d}, {.addr=0xc63b, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xc63c, .a=0xd4, .x=0x68, .y=0x91, .sp=0x83, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc63a, .value=0x8d}, {.addr=0xc63b, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xc63a, .value=0x8d, .type=IO_READ},
        {.addr=0xc63b, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x96a5, .a=0x59, .x=0x73, .y=0x8e, .sp=0xcb, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x96a5, .value=0x8d}, {.addr=0x96a6, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x96a7, .a=0x59, .x=0x73, .y=0x05, .sp=0xcb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x96a5, .value=0x8d}, {.addr=0x96a6, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x96a5, .value=0x8d, .type=IO_READ},
        {.addr=0x96a6, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x3eb6, .a=0xb8, .x=0x57, .y=0x0a, .sp=0x96, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb6, .value=0x8d}, {.addr=0x3eb7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3eb8, .a=0xb8, .x=0x57, .y=0x5d, .sp=0x96, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x3eb6, .value=0x8d}, {.addr=0x3eb7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3eb6, .value=0x8d, .type=IO_READ},
        {.addr=0x3eb7, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x70dd, .a=0xb3, .x=0x5d, .y=0xfc, .sp=0x39, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x70dd, .value=0x8d}, {.addr=0x70de, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x70df, .a=0xb3, .x=0x5d, .y=0x5d, .sp=0x39, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x70dd, .value=0x8d}, {.addr=0x70de, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x70dd, .value=0x8d, .type=IO_READ},
        {.addr=0x70de, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x2379, .a=0x63, .x=0x76, .y=0xf1, .sp=0xc1, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x2379, .value=0x8d}, {.addr=0x237a, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x237b, .a=0x63, .x=0x76, .y=0xd8, .sp=0xc1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x2379, .value=0x8d}, {.addr=0x237a, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x2379, .value=0x8d, .type=IO_READ},
        {.addr=0x237a, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xd004, .a=0x72, .x=0x5f, .y=0x69, .sp=0x41, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xd004, .value=0x8d}, {.addr=0xd005, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xd006, .a=0x72, .x=0x5f, .y=0x5f, .sp=0x41, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xd004, .value=0x8d}, {.addr=0xd005, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xd004, .value=0x8d, .type=IO_READ},
        {.addr=0xd005, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x55b5, .a=0x8f, .x=0x7b, .y=0xc7, .sp=0xa6, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x55b5, .value=0x8d}, {.addr=0x55b6, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x55b7, .a=0x8f, .x=0x7b, .y=0x53, .sp=0xa6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x55b5, .value=0x8d}, {.addr=0x55b6, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x55b5, .value=0x8d, .type=IO_READ},
        {.addr=0x55b6, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x146d, .a=0xf3, .x=0xb4, .y=0xf3, .sp=0x6b, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x146d, .value=0x8d}, {.addr=0x146e, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x146f, .a=0xf3, .x=0xb4, .y=0x0a, .sp=0x6b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x146d, .value=0x8d}, {.addr=0x146e, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x146d, .value=0x8d, .type=IO_READ},
        {.addr=0x146e, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x2cad, .a=0x67, .x=0x6e, .y=0x54, .sp=0x23, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x2cad, .value=0x8d}, {.addr=0x2cae, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x2caf, .a=0x67, .x=0x6e, .y=0xe7, .sp=0x23, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2cad, .value=0x8d}, {.addr=0x2cae, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x2cad, .value=0x8d, .type=IO_READ},
        {.addr=0x2cae, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xe956, .a=0x24, .x=0x84, .y=0xe6, .sp=0xd9, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xe956, .value=0x8d}, {.addr=0xe957, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xe958, .a=0x24, .x=0x84, .y=0x98, .sp=0xd9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe956, .value=0x8d}, {.addr=0xe957, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xe956, .value=0x8d, .type=IO_READ},
        {.addr=0xe957, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xc650, .a=0x7d, .x=0x4f, .y=0x7c, .sp=0xf5, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xc650, .value=0x8d}, {.addr=0xc651, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xc652, .a=0x7d, .x=0x4f, .y=0x91, .sp=0xf5, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xc650, .value=0x8d}, {.addr=0xc651, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xc650, .value=0x8d, .type=IO_READ},
        {.addr=0xc651, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xb491, .a=0xb3, .x=0x4a, .y=0x95, .sp=0x5f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xb491, .value=0x8d}, {.addr=0xb492, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb493, .a=0xb3, .x=0x4a, .y=0x0d, .sp=0x5f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb491, .value=0x8d}, {.addr=0xb492, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb491, .value=0x8d, .type=IO_READ},
        {.addr=0xb492, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x95a1, .a=0x44, .x=0x77, .y=0x7b, .sp=0x60, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x95a1, .value=0x8d}, {.addr=0x95a2, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x95a3, .a=0x44, .x=0x77, .y=0x77, .sp=0x60, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x95a1, .value=0x8d}, {.addr=0x95a2, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x95a1, .value=0x8d, .type=IO_READ},
        {.addr=0x95a2, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x3f44, .a=0x88, .x=0x2c, .y=0xf1, .sp=0x2b, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x3f44, .value=0x8d}, {.addr=0x3f45, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x3f46, .a=0x88, .x=0x2c, .y=0x43, .sp=0x2b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3f44, .value=0x8d}, {.addr=0x3f45, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x3f44, .value=0x8d, .type=IO_READ},
        {.addr=0x3f45, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x691a, .a=0x48, .x=0xac, .y=0x4d, .sp=0xa2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x691a, .value=0x8d}, {.addr=0x691b, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x691c, .a=0x48, .x=0xac, .y=0xa2, .sp=0xa2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x691a, .value=0x8d}, {.addr=0x691b, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x691a, .value=0x8d, .type=IO_READ},
        {.addr=0x691b, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x370b, .a=0xc8, .x=0x12, .y=0x8b, .sp=0xe6, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x370b, .value=0x8d}, {.addr=0x370c, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x370d, .a=0xc8, .x=0x12, .y=0x73, .sp=0xe6, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x370b, .value=0x8d}, {.addr=0x370c, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x370b, .value=0x8d, .type=IO_READ},
        {.addr=0x370c, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x9f3a, .a=0x4f, .x=0xed, .y=0x6a, .sp=0x14, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x9f3a, .value=0x8d}, {.addr=0x9f3b, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x9f3c, .a=0x4f, .x=0xed, .y=0x0c, .sp=0x14, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x9f3a, .value=0x8d}, {.addr=0x9f3b, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x9f3a, .value=0x8d, .type=IO_READ},
        {.addr=0x9f3b, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x1158, .a=0x72, .x=0x98, .y=0x3b, .sp=0xc8, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x1158, .value=0x8d}, {.addr=0x1159, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x115a, .a=0x72, .x=0x98, .y=0x54, .sp=0xc8, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1158, .value=0x8d}, {.addr=0x1159, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x1158, .value=0x8d, .type=IO_READ},
        {.addr=0x1159, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x9d84, .a=0xe5, .x=0x2f, .y=0x83, .sp=0x39, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x9d84, .value=0x8d}, {.addr=0x9d85, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x9d86, .a=0xe5, .x=0x2f, .y=0xe8, .sp=0x39, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x9d84, .value=0x8d}, {.addr=0x9d85, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x9d84, .value=0x8d, .type=IO_READ},
        {.addr=0x9d85, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x284a, .a=0x3e, .x=0x5a, .y=0x64, .sp=0xb9, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x284a, .value=0x8d}, {.addr=0x284b, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x284c, .a=0x3e, .x=0x5a, .y=0xff, .sp=0xb9, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x284a, .value=0x8d}, {.addr=0x284b, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x284a, .value=0x8d, .type=IO_READ},
        {.addr=0x284b, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x3a7d, .a=0xef, .x=0x65, .y=0x8f, .sp=0xbd, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x3a7d, .value=0x8d}, {.addr=0x3a7e, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x3a7f, .a=0xef, .x=0x65, .y=0xa8, .sp=0xbd, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3a7d, .value=0x8d}, {.addr=0x3a7e, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x3a7d, .value=0x8d, .type=IO_READ},
        {.addr=0x3a7e, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xe068, .a=0xae, .x=0x7f, .y=0x23, .sp=0x58, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xe068, .value=0x8d}, {.addr=0xe069, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xe06a, .a=0xae, .x=0x7f, .y=0xd6, .sp=0x58, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xe068, .value=0x8d}, {.addr=0xe069, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xe068, .value=0x8d, .type=IO_READ},
        {.addr=0xe069, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x4d39, .a=0xb9, .x=0x94, .y=0xec, .sp=0x44, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x4d39, .value=0x8d}, {.addr=0x4d3a, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x4d3b, .a=0xb9, .x=0x94, .y=0xe5, .sp=0x44, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4d39, .value=0x8d}, {.addr=0x4d3a, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x4d39, .value=0x8d, .type=IO_READ},
        {.addr=0x4d3a, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x3cb2, .a=0x99, .x=0xd8, .y=0xdb, .sp=0xef, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x3cb2, .value=0x8d}, {.addr=0x3cb3, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3cb4, .a=0x99, .x=0xd8, .y=0xbc, .sp=0xef, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3cb2, .value=0x8d}, {.addr=0x3cb3, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3cb2, .value=0x8d, .type=IO_READ},
        {.addr=0x3cb3, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x71d8, .a=0x3d, .x=0xba, .y=0x3f, .sp=0x30, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x71d8, .value=0x8d}, {.addr=0x71d9, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x71da, .a=0x3d, .x=0xba, .y=0x0b, .sp=0x30, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x71d8, .value=0x8d}, {.addr=0x71d9, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x71d8, .value=0x8d, .type=IO_READ},
        {.addr=0x71d9, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x290b, .a=0x30, .x=0xa3, .y=0xe7, .sp=0xbd, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x290b, .value=0x8d}, {.addr=0x290c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x290d, .a=0x30, .x=0xa3, .y=0xbe, .sp=0xbd, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x290b, .value=0x8d}, {.addr=0x290c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x290b, .value=0x8d, .type=IO_READ},
        {.addr=0x290c, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x63b7, .a=0xfb, .x=0x6e, .y=0x52, .sp=0x5b, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x63b7, .value=0x8d}, {.addr=0x63b8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x63b9, .a=0xfb, .x=0x6e, .y=0x86, .sp=0x5b, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x63b7, .value=0x8d}, {.addr=0x63b8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x63b7, .value=0x8d, .type=IO_READ},
        {.addr=0x63b8, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xd371, .a=0xb3, .x=0x19, .y=0x58, .sp=0x72, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xd371, .value=0x8d}, {.addr=0xd372, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xd373, .a=0xb3, .x=0x19, .y=0x8d, .sp=0x72, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd371, .value=0x8d}, {.addr=0xd372, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xd371, .value=0x8d, .type=IO_READ},
        {.addr=0xd372, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x4532, .a=0x4c, .x=0x17, .y=0x90, .sp=0x6c, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x4532, .value=0x8d}, {.addr=0x4533, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x4534, .a=0x4c, .x=0x17, .y=0x82, .sp=0x6c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4532, .value=0x8d}, {.addr=0x4533, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x4532, .value=0x8d, .type=IO_READ},
        {.addr=0x4533, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x062d, .a=0x05, .x=0x8f, .y=0x8c, .sp=0x20, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x062d, .value=0x8d}, {.addr=0x062e, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x062f, .a=0x05, .x=0x8f, .y=0x82, .sp=0x20, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x062d, .value=0x8d}, {.addr=0x062e, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x062d, .value=0x8d, .type=IO_READ},
        {.addr=0x062e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x6e8b, .a=0xa6, .x=0x95, .y=0x04, .sp=0xd5, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6e8b, .value=0x8d}, {.addr=0x6e8c, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x6e8d, .a=0xa6, .x=0x95, .y=0x1e, .sp=0xd5, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6e8b, .value=0x8d}, {.addr=0x6e8c, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x6e8b, .value=0x8d, .type=IO_READ},
        {.addr=0x6e8c, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x65f6, .a=0x5f, .x=0x6c, .y=0x77, .sp=0xe6, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x65f6, .value=0x8d}, {.addr=0x65f7, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x65f8, .a=0x5f, .x=0x6c, .y=0x5f, .sp=0xe6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x65f6, .value=0x8d}, {.addr=0x65f7, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x65f6, .value=0x8d, .type=IO_READ},
        {.addr=0x65f7, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x7d7b, .a=0x36, .x=0x48, .y=0x2f, .sp=0x13, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x7d7b, .value=0x8d}, {.addr=0x7d7c, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x7d7d, .a=0x36, .x=0x48, .y=0xe7, .sp=0x13, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x7d7b, .value=0x8d}, {.addr=0x7d7c, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x7d7b, .value=0x8d, .type=IO_READ},
        {.addr=0x7d7c, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x9dc9, .a=0x4e, .x=0xe5, .y=0xe8, .sp=0x0c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x9dc9, .value=0x8d}, {.addr=0x9dca, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x9dcb, .a=0x4e, .x=0xe5, .y=0x15, .sp=0x0c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9dc9, .value=0x8d}, {.addr=0x9dca, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x9dc9, .value=0x8d, .type=IO_READ},
        {.addr=0x9dca, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x9407, .a=0xae, .x=0x0a, .y=0x7a, .sp=0xdc, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x9407, .value=0x8d}, {.addr=0x9408, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x9409, .a=0xae, .x=0x0a, .y=0x37, .sp=0xdc, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x9407, .value=0x8d}, {.addr=0x9408, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x9407, .value=0x8d, .type=IO_READ},
        {.addr=0x9408, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x090a, .a=0xb6, .x=0xdf, .y=0x6e, .sp=0x69, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x090a, .value=0x8d}, {.addr=0x090b, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x090c, .a=0xb6, .x=0xdf, .y=0x4c, .sp=0x69, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x090a, .value=0x8d}, {.addr=0x090b, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x090a, .value=0x8d, .type=IO_READ},
        {.addr=0x090b, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x4cc7, .a=0x67, .x=0x53, .y=0xa0, .sp=0xd8, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4cc7, .value=0x8d}, {.addr=0x4cc8, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x4cc9, .a=0x67, .x=0x53, .y=0x18, .sp=0xd8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4cc7, .value=0x8d}, {.addr=0x4cc8, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x4cc7, .value=0x8d, .type=IO_READ},
        {.addr=0x4cc8, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x6a89, .a=0x93, .x=0xaa, .y=0x66, .sp=0x88, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x6a89, .value=0x8d}, {.addr=0x6a8a, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x6a8b, .a=0x93, .x=0xaa, .y=0x77, .sp=0x88, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6a89, .value=0x8d}, {.addr=0x6a8a, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x6a89, .value=0x8d, .type=IO_READ},
        {.addr=0x6a8a, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x33af, .a=0xc5, .x=0xa7, .y=0x6d, .sp=0x64, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x33af, .value=0x8d}, {.addr=0x33b0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x33b1, .a=0xc5, .x=0xa7, .y=0x7c, .sp=0x64, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x33af, .value=0x8d}, {.addr=0x33b0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x33af, .value=0x8d, .type=IO_READ},
        {.addr=0x33b0, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x818d, .a=0xce, .x=0xad, .y=0x34, .sp=0x93, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x818d, .value=0x8d}, {.addr=0x818e, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x818f, .a=0xce, .x=0xad, .y=0x79, .sp=0x93, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x818d, .value=0x8d}, {.addr=0x818e, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x818d, .value=0x8d, .type=IO_READ},
        {.addr=0x818e, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x7869, .a=0x6d, .x=0xf3, .y=0x9c, .sp=0x84, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x7869, .value=0x8d}, {.addr=0x786a, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x786b, .a=0x6d, .x=0xf3, .y=0x18, .sp=0x84, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7869, .value=0x8d}, {.addr=0x786a, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x7869, .value=0x8d, .type=IO_READ},
        {.addr=0x786a, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x2422, .a=0x9d, .x=0x39, .y=0x68, .sp=0xba, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x2422, .value=0x8d}, {.addr=0x2423, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x2424, .a=0x9d, .x=0x39, .y=0xf2, .sp=0xba, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2422, .value=0x8d}, {.addr=0x2423, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x2422, .value=0x8d, .type=IO_READ},
        {.addr=0x2423, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xa045, .a=0xe4, .x=0x94, .y=0xb4, .sp=0x7c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa045, .value=0x8d}, {.addr=0xa046, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xa047, .a=0xe4, .x=0x94, .y=0xcd, .sp=0x7c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa045, .value=0x8d}, {.addr=0xa046, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xa045, .value=0x8d, .type=IO_READ},
        {.addr=0xa046, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xc2bd, .a=0x3e, .x=0xb2, .y=0x18, .sp=0x68, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xc2bd, .value=0x8d}, {.addr=0xc2be, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xc2bf, .a=0x3e, .x=0xb2, .y=0x43, .sp=0x68, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc2bd, .value=0x8d}, {.addr=0xc2be, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xc2bd, .value=0x8d, .type=IO_READ},
        {.addr=0xc2be, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x5fe9, .a=0xa0, .x=0x28, .y=0x61, .sp=0x90, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe9, .value=0x8d}, {.addr=0x5fea, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x5feb, .a=0xa0, .x=0x28, .y=0x1a, .sp=0x90, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5fe9, .value=0x8d}, {.addr=0x5fea, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x5fe9, .value=0x8d, .type=IO_READ},
        {.addr=0x5fea, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xa885, .a=0x23, .x=0xdc, .y=0x16, .sp=0xe6, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xa885, .value=0x8d}, {.addr=0xa886, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xa887, .a=0x23, .x=0xdc, .y=0x8a, .sp=0xe6, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xa885, .value=0x8d}, {.addr=0xa886, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xa885, .value=0x8d, .type=IO_READ},
        {.addr=0xa886, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xd862, .a=0x49, .x=0x93, .y=0x90, .sp=0xcf, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd862, .value=0x8d}, {.addr=0xd863, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd864, .a=0x49, .x=0x93, .y=0xe0, .sp=0xcf, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd862, .value=0x8d}, {.addr=0xd863, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd862, .value=0x8d, .type=IO_READ},
        {.addr=0xd863, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xb49d, .a=0x3b, .x=0x83, .y=0x54, .sp=0x98, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xb49d, .value=0x8d}, {.addr=0xb49e, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xb49f, .a=0x3b, .x=0x83, .y=0x32, .sp=0x98, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb49d, .value=0x8d}, {.addr=0xb49e, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xb49d, .value=0x8d, .type=IO_READ},
        {.addr=0xb49e, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x14a9, .a=0x4f, .x=0xd9, .y=0x09, .sp=0xc2, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x14a9, .value=0x8d}, {.addr=0x14aa, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x14ab, .a=0x4f, .x=0xd9, .y=0x7e, .sp=0xc2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x14a9, .value=0x8d}, {.addr=0x14aa, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x14a9, .value=0x8d, .type=IO_READ},
        {.addr=0x14aa, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xe03e, .a=0x4e, .x=0x21, .y=0x6c, .sp=0x8e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xe03e, .value=0x8d}, {.addr=0xe03f, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xe040, .a=0x4e, .x=0x21, .y=0x7f, .sp=0x8e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe03e, .value=0x8d}, {.addr=0xe03f, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xe03e, .value=0x8d, .type=IO_READ},
        {.addr=0xe03f, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x1a57, .a=0x2e, .x=0x66, .y=0x06, .sp=0x21, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x1a57, .value=0x8d}, {.addr=0x1a58, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x1a59, .a=0x2e, .x=0x66, .y=0xc3, .sp=0x21, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1a57, .value=0x8d}, {.addr=0x1a58, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x1a57, .value=0x8d, .type=IO_READ},
        {.addr=0x1a58, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x8497, .a=0x5e, .x=0x31, .y=0x21, .sp=0x69, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x8497, .value=0x8d}, {.addr=0x8498, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x8499, .a=0x5e, .x=0x31, .y=0x94, .sp=0x69, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x8497, .value=0x8d}, {.addr=0x8498, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x8497, .value=0x8d, .type=IO_READ},
        {.addr=0x8498, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x60d9, .a=0x4d, .x=0xb5, .y=0x6e, .sp=0xda, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x60d9, .value=0x8d}, {.addr=0x60da, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x60db, .a=0x4d, .x=0xb5, .y=0xeb, .sp=0xda, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x60d9, .value=0x8d}, {.addr=0x60da, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x60d9, .value=0x8d, .type=IO_READ},
        {.addr=0x60da, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x225e, .a=0xdd, .x=0xd2, .y=0x75, .sp=0x42, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x225e, .value=0x8d}, {.addr=0x225f, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x2260, .a=0xdd, .x=0xd2, .y=0x48, .sp=0x42, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x225e, .value=0x8d}, {.addr=0x225f, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x225e, .value=0x8d, .type=IO_READ},
        {.addr=0x225f, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x131b, .a=0x69, .x=0xcd, .y=0xfa, .sp=0x74, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x131b, .value=0x8d}, {.addr=0x131c, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x131d, .a=0x69, .x=0xcd, .y=0x2b, .sp=0x74, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x131b, .value=0x8d}, {.addr=0x131c, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x131b, .value=0x8d, .type=IO_READ},
        {.addr=0x131c, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xefdc, .a=0xe7, .x=0xe5, .y=0xe9, .sp=0x1d, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xefdc, .value=0x8d}, {.addr=0xefdd, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xefde, .a=0xe7, .x=0xe5, .y=0xb5, .sp=0x1d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xefdc, .value=0x8d}, {.addr=0xefdd, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xefdc, .value=0x8d, .type=IO_READ},
        {.addr=0xefdd, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x93d4, .a=0xdb, .x=0x3d, .y=0xba, .sp=0xbb, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x93d4, .value=0x8d}, {.addr=0x93d5, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x93d6, .a=0xdb, .x=0x3d, .y=0x3f, .sp=0xbb, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x93d4, .value=0x8d}, {.addr=0x93d5, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x93d4, .value=0x8d, .type=IO_READ},
        {.addr=0x93d5, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xd20a, .a=0xba, .x=0xd1, .y=0xbf, .sp=0xca, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xd20a, .value=0x8d}, {.addr=0xd20b, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xd20c, .a=0xba, .x=0xd1, .y=0x56, .sp=0xca, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xd20a, .value=0x8d}, {.addr=0xd20b, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xd20a, .value=0x8d, .type=IO_READ},
        {.addr=0xd20b, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x7647, .a=0xf7, .x=0x8f, .y=0x68, .sp=0x7d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x7647, .value=0x8d}, {.addr=0x7648, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x7649, .a=0xf7, .x=0x8f, .y=0x57, .sp=0x7d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x7647, .value=0x8d}, {.addr=0x7648, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x7647, .value=0x8d, .type=IO_READ},
        {.addr=0x7648, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_8D, _8D_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x7117, .a=0xc2, .x=0xc0, .y=0x60, .sp=0xa2, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x7117, .value=0x8d}, {.addr=0x7118, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7119, .a=0xc2, .x=0xc0, .y=0x00, .sp=0xa2, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x7117, .value=0x8d}, {.addr=0x7118, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7117, .value=0x8d, .type=IO_READ},
        {.addr=0x7118, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("8D 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
