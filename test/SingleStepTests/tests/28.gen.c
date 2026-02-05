#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_28, _28_0000) {
    const struct CPU_State initial_cpu = {.pc=0xe9d3, .a=0x36, .x=0x8d, .y=0x7a, .sp=0x5e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xe9d3, .value=0x28}, {.addr=0xe9d4, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xe9d5, .a=0x20, .x=0x8d, .y=0x7a, .sp=0x5e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe9d3, .value=0x28}, {.addr=0xe9d4, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xe9d3, .value=0x28, .type=IO_READ},
        {.addr=0xe9d4, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0001) {
    const struct CPU_State initial_cpu = {.pc=0x5f80, .a=0xa3, .x=0xeb, .y=0xc0, .sp=0x03, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x5f80, .value=0x28}, {.addr=0x5f81, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x5f82, .a=0x22, .x=0xeb, .y=0xc0, .sp=0x03, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x5f80, .value=0x28}, {.addr=0x5f81, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x5f80, .value=0x28, .type=IO_READ},
        {.addr=0x5f81, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0002) {
    const struct CPU_State initial_cpu = {.pc=0xf765, .a=0xeb, .x=0x8e, .y=0xa8, .sp=0x5d, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xf765, .value=0x28}, {.addr=0xf766, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf767, .a=0xea, .x=0x8e, .y=0xa8, .sp=0x5d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xf765, .value=0x28}, {.addr=0xf766, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf765, .value=0x28, .type=IO_READ},
        {.addr=0xf766, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0003) {
    const struct CPU_State initial_cpu = {.pc=0x1955, .a=0x5f, .x=0x9c, .y=0xf3, .sp=0x03, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x1955, .value=0x28}, {.addr=0x1956, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1957, .a=0x4d, .x=0x9c, .y=0xf3, .sp=0x03, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1955, .value=0x28}, {.addr=0x1956, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1955, .value=0x28, .type=IO_READ},
        {.addr=0x1956, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0004) {
    const struct CPU_State initial_cpu = {.pc=0x5255, .a=0xc0, .x=0x87, .y=0xfb, .sp=0xfb, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x5255, .value=0x28}, {.addr=0x5256, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x5257, .a=0x00, .x=0x87, .y=0xfb, .sp=0xfb, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x5255, .value=0x28}, {.addr=0x5256, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x5255, .value=0x28, .type=IO_READ},
        {.addr=0x5256, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0005) {
    const struct CPU_State initial_cpu = {.pc=0xae06, .a=0xe8, .x=0x6f, .y=0x5d, .sp=0x26, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xae06, .value=0x28}, {.addr=0xae07, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xae08, .a=0xe0, .x=0x6f, .y=0x5d, .sp=0x26, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xae06, .value=0x28}, {.addr=0xae07, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xae06, .value=0x28, .type=IO_READ},
        {.addr=0xae07, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0006) {
    const struct CPU_State initial_cpu = {.pc=0x9df4, .a=0x72, .x=0x74, .y=0x95, .sp=0x92, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x9df4, .value=0x28}, {.addr=0x9df5, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x9df6, .a=0x32, .x=0x74, .y=0x95, .sp=0x92, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9df4, .value=0x28}, {.addr=0x9df5, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x9df4, .value=0x28, .type=IO_READ},
        {.addr=0x9df5, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0007) {
    const struct CPU_State initial_cpu = {.pc=0xe752, .a=0xcf, .x=0xfc, .y=0x8c, .sp=0x31, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xe752, .value=0x28}, {.addr=0xe753, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xe754, .a=0x0e, .x=0xfc, .y=0x8c, .sp=0x31, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe752, .value=0x28}, {.addr=0xe753, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xe752, .value=0x28, .type=IO_READ},
        {.addr=0xe753, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0008) {
    const struct CPU_State initial_cpu = {.pc=0x7267, .a=0x5b, .x=0xde, .y=0x83, .sp=0x5a, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x7267, .value=0x28}, {.addr=0x7268, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7269, .a=0x19, .x=0xde, .y=0x83, .sp=0x5a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7267, .value=0x28}, {.addr=0x7268, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7267, .value=0x28, .type=IO_READ},
        {.addr=0x7268, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0009) {
    const struct CPU_State initial_cpu = {.pc=0x78b2, .a=0xb7, .x=0x09, .y=0xc5, .sp=0xf3, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x78b2, .value=0x28}, {.addr=0x78b3, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x78b4, .a=0x27, .x=0x09, .y=0xc5, .sp=0xf3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x78b2, .value=0x28}, {.addr=0x78b3, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x78b2, .value=0x28, .type=IO_READ},
        {.addr=0x78b3, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_000A) {
    const struct CPU_State initial_cpu = {.pc=0xe3f8, .a=0x91, .x=0x20, .y=0xd1, .sp=0x63, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xe3f8, .value=0x28}, {.addr=0xe3f9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe3fa, .a=0x00, .x=0x20, .y=0xd1, .sp=0x63, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xe3f8, .value=0x28}, {.addr=0xe3f9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe3f8, .value=0x28, .type=IO_READ},
        {.addr=0xe3f9, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_000B) {
    const struct CPU_State initial_cpu = {.pc=0xd3a3, .a=0xce, .x=0x09, .y=0xb8, .sp=0xc0, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd3a3, .value=0x28}, {.addr=0xd3a4, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xd3a5, .a=0x04, .x=0x09, .y=0xb8, .sp=0xc0, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd3a3, .value=0x28}, {.addr=0xd3a4, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xd3a3, .value=0x28, .type=IO_READ},
        {.addr=0xd3a4, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_000C) {
    const struct CPU_State initial_cpu = {.pc=0x3b50, .a=0xa6, .x=0xc9, .y=0x06, .sp=0x2e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x3b50, .value=0x28}, {.addr=0x3b51, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x3b52, .a=0x26, .x=0xc9, .y=0x06, .sp=0x2e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x3b50, .value=0x28}, {.addr=0x3b51, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x3b50, .value=0x28, .type=IO_READ},
        {.addr=0x3b51, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_000D) {
    const struct CPU_State initial_cpu = {.pc=0xf618, .a=0xaf, .x=0xfe, .y=0xcf, .sp=0x81, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xf618, .value=0x28}, {.addr=0xf619, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xf61a, .a=0x84, .x=0xfe, .y=0xcf, .sp=0x81, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf618, .value=0x28}, {.addr=0xf619, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xf618, .value=0x28, .type=IO_READ},
        {.addr=0xf619, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_000E) {
    const struct CPU_State initial_cpu = {.pc=0xbb95, .a=0xc4, .x=0x62, .y=0xe9, .sp=0xf2, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xbb95, .value=0x28}, {.addr=0xbb96, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbb97, .a=0x04, .x=0x62, .y=0xe9, .sp=0xf2, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbb95, .value=0x28}, {.addr=0xbb96, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbb95, .value=0x28, .type=IO_READ},
        {.addr=0xbb96, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_000F) {
    const struct CPU_State initial_cpu = {.pc=0xda4f, .a=0x6e, .x=0xcb, .y=0x20, .sp=0x42, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xda4f, .value=0x28}, {.addr=0xda50, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xda51, .a=0x60, .x=0xcb, .y=0x20, .sp=0x42, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xda4f, .value=0x28}, {.addr=0xda50, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xda4f, .value=0x28, .type=IO_READ},
        {.addr=0xda50, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0010) {
    const struct CPU_State initial_cpu = {.pc=0x58b5, .a=0x50, .x=0x57, .y=0xa2, .sp=0x75, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x58b5, .value=0x28}, {.addr=0x58b6, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x58b7, .a=0x10, .x=0x57, .y=0xa2, .sp=0x75, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x58b5, .value=0x28}, {.addr=0x58b6, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x58b5, .value=0x28, .type=IO_READ},
        {.addr=0x58b6, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0011) {
    const struct CPU_State initial_cpu = {.pc=0xd551, .a=0xa7, .x=0xd4, .y=0x1f, .sp=0x7c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xd551, .value=0x28}, {.addr=0xd552, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd553, .a=0xa7, .x=0xd4, .y=0x1f, .sp=0x7c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd551, .value=0x28}, {.addr=0xd552, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd551, .value=0x28, .type=IO_READ},
        {.addr=0xd552, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0012) {
    const struct CPU_State initial_cpu = {.pc=0x0d86, .a=0x45, .x=0x76, .y=0x08, .sp=0xe5, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0d86, .value=0x28}, {.addr=0x0d87, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x0d88, .a=0x41, .x=0x76, .y=0x08, .sp=0xe5, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0d86, .value=0x28}, {.addr=0x0d87, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x0d86, .value=0x28, .type=IO_READ},
        {.addr=0x0d87, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0013) {
    const struct CPU_State initial_cpu = {.pc=0x709f, .a=0x94, .x=0xd0, .y=0x43, .sp=0xa6, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x709f, .value=0x28}, {.addr=0x70a0, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x70a1, .a=0x84, .x=0xd0, .y=0x43, .sp=0xa6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x709f, .value=0x28}, {.addr=0x70a0, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x709f, .value=0x28, .type=IO_READ},
        {.addr=0x70a0, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0014) {
    const struct CPU_State initial_cpu = {.pc=0xaf79, .a=0xca, .x=0x20, .y=0x37, .sp=0x20, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xaf79, .value=0x28}, {.addr=0xaf7a, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xaf7b, .a=0xc8, .x=0x20, .y=0x37, .sp=0x20, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xaf79, .value=0x28}, {.addr=0xaf7a, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xaf79, .value=0x28, .type=IO_READ},
        {.addr=0xaf7a, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0015) {
    const struct CPU_State initial_cpu = {.pc=0x56f3, .a=0x3f, .x=0x89, .y=0xea, .sp=0xc5, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x56f3, .value=0x28}, {.addr=0x56f4, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x56f5, .a=0x37, .x=0x89, .y=0xea, .sp=0xc5, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x56f3, .value=0x28}, {.addr=0x56f4, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x56f3, .value=0x28, .type=IO_READ},
        {.addr=0x56f4, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0016) {
    const struct CPU_State initial_cpu = {.pc=0x5bb7, .a=0x48, .x=0x60, .y=0x1c, .sp=0xba, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x5bb7, .value=0x28}, {.addr=0x5bb8, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x5bb9, .a=0x48, .x=0x60, .y=0x1c, .sp=0xba, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x5bb7, .value=0x28}, {.addr=0x5bb8, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x5bb7, .value=0x28, .type=IO_READ},
        {.addr=0x5bb8, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0017) {
    const struct CPU_State initial_cpu = {.pc=0x91f4, .a=0x4a, .x=0x5e, .y=0x66, .sp=0x17, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x91f4, .value=0x28}, {.addr=0x91f5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x91f6, .a=0x08, .x=0x5e, .y=0x66, .sp=0x17, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x91f4, .value=0x28}, {.addr=0x91f5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x91f4, .value=0x28, .type=IO_READ},
        {.addr=0x91f5, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0018) {
    const struct CPU_State initial_cpu = {.pc=0xbc11, .a=0xc1, .x=0x47, .y=0x7a, .sp=0xac, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xbc11, .value=0x28}, {.addr=0xbc12, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xbc13, .a=0x41, .x=0x47, .y=0x7a, .sp=0xac, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xbc11, .value=0x28}, {.addr=0xbc12, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xbc11, .value=0x28, .type=IO_READ},
        {.addr=0xbc12, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0019) {
    const struct CPU_State initial_cpu = {.pc=0x57e2, .a=0xb4, .x=0xf9, .y=0x71, .sp=0x23, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x57e2, .value=0x28}, {.addr=0x57e3, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x57e4, .a=0x90, .x=0xf9, .y=0x71, .sp=0x23, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x57e2, .value=0x28}, {.addr=0x57e3, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x57e2, .value=0x28, .type=IO_READ},
        {.addr=0x57e3, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_001A) {
    const struct CPU_State initial_cpu = {.pc=0x8d42, .a=0x9e, .x=0x3d, .y=0xaa, .sp=0x49, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x8d42, .value=0x28}, {.addr=0x8d43, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x8d44, .a=0x04, .x=0x3d, .y=0xaa, .sp=0x49, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8d42, .value=0x28}, {.addr=0x8d43, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x8d42, .value=0x28, .type=IO_READ},
        {.addr=0x8d43, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_001B) {
    const struct CPU_State initial_cpu = {.pc=0xce1f, .a=0x89, .x=0xfc, .y=0x5b, .sp=0xbb, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xce1f, .value=0x28}, {.addr=0xce20, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xce21, .a=0x01, .x=0xfc, .y=0x5b, .sp=0xbb, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xce1f, .value=0x28}, {.addr=0xce20, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xce1f, .value=0x28, .type=IO_READ},
        {.addr=0xce20, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_001C) {
    const struct CPU_State initial_cpu = {.pc=0x7005, .a=0x84, .x=0x2d, .y=0x40, .sp=0x39, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x7005, .value=0x28}, {.addr=0x7006, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x7007, .a=0x00, .x=0x2d, .y=0x40, .sp=0x39, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x7005, .value=0x28}, {.addr=0x7006, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x7005, .value=0x28, .type=IO_READ},
        {.addr=0x7006, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_001D) {
    const struct CPU_State initial_cpu = {.pc=0x54c0, .a=0x56, .x=0x45, .y=0x20, .sp=0x43, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x54c0, .value=0x28}, {.addr=0x54c1, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x54c2, .a=0x12, .x=0x45, .y=0x20, .sp=0x43, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x54c0, .value=0x28}, {.addr=0x54c1, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x54c0, .value=0x28, .type=IO_READ},
        {.addr=0x54c1, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_001E) {
    const struct CPU_State initial_cpu = {.pc=0x37c4, .a=0x69, .x=0x93, .y=0x67, .sp=0x2f, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x37c4, .value=0x28}, {.addr=0x37c5, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x37c6, .a=0x21, .x=0x93, .y=0x67, .sp=0x2f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x37c4, .value=0x28}, {.addr=0x37c5, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x37c4, .value=0x28, .type=IO_READ},
        {.addr=0x37c5, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_001F) {
    const struct CPU_State initial_cpu = {.pc=0xa026, .a=0x2c, .x=0xdd, .y=0x70, .sp=0xce, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xa026, .value=0x28}, {.addr=0xa027, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa028, .a=0x0c, .x=0xdd, .y=0x70, .sp=0xce, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa026, .value=0x28}, {.addr=0xa027, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa026, .value=0x28, .type=IO_READ},
        {.addr=0xa027, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0020) {
    const struct CPU_State initial_cpu = {.pc=0x50c3, .a=0xef, .x=0x03, .y=0x8c, .sp=0x0a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x50c3, .value=0x28}, {.addr=0x50c4, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x50c5, .a=0xc4, .x=0x03, .y=0x8c, .sp=0x0a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x50c3, .value=0x28}, {.addr=0x50c4, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x50c3, .value=0x28, .type=IO_READ},
        {.addr=0x50c4, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0021) {
    const struct CPU_State initial_cpu = {.pc=0xca9b, .a=0x2f, .x=0x3e, .y=0x5a, .sp=0x15, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xca9b, .value=0x28}, {.addr=0xca9c, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xca9d, .a=0x0a, .x=0x3e, .y=0x5a, .sp=0x15, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xca9b, .value=0x28}, {.addr=0xca9c, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xca9b, .value=0x28, .type=IO_READ},
        {.addr=0xca9c, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0022) {
    const struct CPU_State initial_cpu = {.pc=0x93ca, .a=0x39, .x=0x29, .y=0xe7, .sp=0x6a, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x93ca, .value=0x28}, {.addr=0x93cb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x93cc, .a=0x00, .x=0x29, .y=0xe7, .sp=0x6a, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x93ca, .value=0x28}, {.addr=0x93cb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x93ca, .value=0x28, .type=IO_READ},
        {.addr=0x93cb, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0023) {
    const struct CPU_State initial_cpu = {.pc=0x53f7, .a=0x43, .x=0x60, .y=0x0c, .sp=0xb8, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x53f7, .value=0x28}, {.addr=0x53f8, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x53f9, .a=0x42, .x=0x60, .y=0x0c, .sp=0xb8, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x53f7, .value=0x28}, {.addr=0x53f8, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x53f7, .value=0x28, .type=IO_READ},
        {.addr=0x53f8, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0024) {
    const struct CPU_State initial_cpu = {.pc=0x38ff, .a=0x81, .x=0xf7, .y=0x31, .sp=0x97, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x38ff, .value=0x28}, {.addr=0x3900, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x3901, .a=0x01, .x=0xf7, .y=0x31, .sp=0x97, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x38ff, .value=0x28}, {.addr=0x3900, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x38ff, .value=0x28, .type=IO_READ},
        {.addr=0x3900, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0025) {
    const struct CPU_State initial_cpu = {.pc=0xa531, .a=0x34, .x=0x4b, .y=0xcf, .sp=0xce, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xa531, .value=0x28}, {.addr=0xa532, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xa533, .a=0x10, .x=0x4b, .y=0xcf, .sp=0xce, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa531, .value=0x28}, {.addr=0xa532, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xa531, .value=0x28, .type=IO_READ},
        {.addr=0xa532, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0026) {
    const struct CPU_State initial_cpu = {.pc=0xafa2, .a=0x2b, .x=0x09, .y=0x23, .sp=0x13, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xafa2, .value=0x28}, {.addr=0xafa3, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xafa4, .a=0x2a, .x=0x09, .y=0x23, .sp=0x13, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xafa2, .value=0x28}, {.addr=0xafa3, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xafa2, .value=0x28, .type=IO_READ},
        {.addr=0xafa3, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0027) {
    const struct CPU_State initial_cpu = {.pc=0x0ee0, .a=0x30, .x=0xe5, .y=0x9f, .sp=0xd9, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0ee0, .value=0x28}, {.addr=0x0ee1, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x0ee2, .a=0x30, .x=0xe5, .y=0x9f, .sp=0xd9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0ee0, .value=0x28}, {.addr=0x0ee1, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x0ee0, .value=0x28, .type=IO_READ},
        {.addr=0x0ee1, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0028) {
    const struct CPU_State initial_cpu = {.pc=0x06e4, .a=0x59, .x=0x6d, .y=0x88, .sp=0xf3, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x06e4, .value=0x28}, {.addr=0x06e5, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x06e6, .a=0x48, .x=0x6d, .y=0x88, .sp=0xf3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x06e4, .value=0x28}, {.addr=0x06e5, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x06e4, .value=0x28, .type=IO_READ},
        {.addr=0x06e5, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0029) {
    const struct CPU_State initial_cpu = {.pc=0x82c8, .a=0xbe, .x=0xb3, .y=0xbb, .sp=0x8e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x82c8, .value=0x28}, {.addr=0x82c9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x82ca, .a=0x3c, .x=0xb3, .y=0xbb, .sp=0x8e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x82c8, .value=0x28}, {.addr=0x82c9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x82c8, .value=0x28, .type=IO_READ},
        {.addr=0x82c9, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_002A) {
    const struct CPU_State initial_cpu = {.pc=0x5f86, .a=0xac, .x=0x1c, .y=0x3a, .sp=0x0a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x5f86, .value=0x28}, {.addr=0x5f87, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x5f88, .a=0x08, .x=0x1c, .y=0x3a, .sp=0x0a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5f86, .value=0x28}, {.addr=0x5f87, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x5f86, .value=0x28, .type=IO_READ},
        {.addr=0x5f87, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_002B) {
    const struct CPU_State initial_cpu = {.pc=0xa01d, .a=0xcc, .x=0x01, .y=0x1e, .sp=0x69, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xa01d, .value=0x28}, {.addr=0xa01e, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xa01f, .a=0x4c, .x=0x01, .y=0x1e, .sp=0x69, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xa01d, .value=0x28}, {.addr=0xa01e, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xa01d, .value=0x28, .type=IO_READ},
        {.addr=0xa01e, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_002C) {
    const struct CPU_State initial_cpu = {.pc=0x5f21, .a=0x66, .x=0x41, .y=0xbe, .sp=0xdf, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x5f21, .value=0x28}, {.addr=0x5f22, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x5f23, .a=0x64, .x=0x41, .y=0xbe, .sp=0xdf, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5f21, .value=0x28}, {.addr=0x5f22, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x5f21, .value=0x28, .type=IO_READ},
        {.addr=0x5f22, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_002D) {
    const struct CPU_State initial_cpu = {.pc=0xb8d3, .a=0x10, .x=0x44, .y=0xa8, .sp=0xa3, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xb8d3, .value=0x28}, {.addr=0xb8d4, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xb8d5, .a=0x00, .x=0x44, .y=0xa8, .sp=0xa3, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xb8d3, .value=0x28}, {.addr=0xb8d4, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xb8d3, .value=0x28, .type=IO_READ},
        {.addr=0xb8d4, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_002E) {
    const struct CPU_State initial_cpu = {.pc=0x1a7c, .a=0x43, .x=0xac, .y=0x62, .sp=0xa6, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x1a7c, .value=0x28}, {.addr=0x1a7d, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x1a7e, .a=0x03, .x=0xac, .y=0x62, .sp=0xa6, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1a7c, .value=0x28}, {.addr=0x1a7d, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x1a7c, .value=0x28, .type=IO_READ},
        {.addr=0x1a7d, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_002F) {
    const struct CPU_State initial_cpu = {.pc=0x1256, .a=0x8e, .x=0xe7, .y=0x38, .sp=0xfe, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x1256, .value=0x28}, {.addr=0x1257, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x1258, .a=0x82, .x=0xe7, .y=0x38, .sp=0xfe, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1256, .value=0x28}, {.addr=0x1257, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x1256, .value=0x28, .type=IO_READ},
        {.addr=0x1257, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0030) {
    const struct CPU_State initial_cpu = {.pc=0x3f9a, .a=0xa1, .x=0xd0, .y=0xf8, .sp=0x23, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x3f9a, .value=0x28}, {.addr=0x3f9b, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x3f9c, .a=0x80, .x=0xd0, .y=0xf8, .sp=0x23, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3f9a, .value=0x28}, {.addr=0x3f9b, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x3f9a, .value=0x28, .type=IO_READ},
        {.addr=0x3f9b, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0031) {
    const struct CPU_State initial_cpu = {.pc=0x0912, .a=0x56, .x=0x23, .y=0xb8, .sp=0x19, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0912, .value=0x28}, {.addr=0x0913, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x0914, .a=0x56, .x=0x23, .y=0xb8, .sp=0x19, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0912, .value=0x28}, {.addr=0x0913, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x0912, .value=0x28, .type=IO_READ},
        {.addr=0x0913, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0032) {
    const struct CPU_State initial_cpu = {.pc=0xa659, .a=0x55, .x=0xf6, .y=0x4e, .sp=0x8e, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xa659, .value=0x28}, {.addr=0xa65a, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xa65b, .a=0x01, .x=0xf6, .y=0x4e, .sp=0x8e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa659, .value=0x28}, {.addr=0xa65a, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xa659, .value=0x28, .type=IO_READ},
        {.addr=0xa65a, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0033) {
    const struct CPU_State initial_cpu = {.pc=0xb4b1, .a=0x3d, .x=0x70, .y=0x6e, .sp=0x09, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xb4b1, .value=0x28}, {.addr=0xb4b2, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xb4b3, .a=0x2d, .x=0x70, .y=0x6e, .sp=0x09, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb4b1, .value=0x28}, {.addr=0xb4b2, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xb4b1, .value=0x28, .type=IO_READ},
        {.addr=0xb4b2, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0034) {
    const struct CPU_State initial_cpu = {.pc=0xd895, .a=0x57, .x=0xc4, .y=0x0b, .sp=0xe3, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xd895, .value=0x28}, {.addr=0xd896, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd897, .a=0x14, .x=0xc4, .y=0x0b, .sp=0xe3, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xd895, .value=0x28}, {.addr=0xd896, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd895, .value=0x28, .type=IO_READ},
        {.addr=0xd896, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0035) {
    const struct CPU_State initial_cpu = {.pc=0xcd66, .a=0x25, .x=0x8d, .y=0xd6, .sp=0xdc, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xcd66, .value=0x28}, {.addr=0xcd67, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xcd68, .a=0x21, .x=0x8d, .y=0xd6, .sp=0xdc, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xcd66, .value=0x28}, {.addr=0xcd67, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xcd66, .value=0x28, .type=IO_READ},
        {.addr=0xcd67, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0036) {
    const struct CPU_State initial_cpu = {.pc=0x4635, .a=0xcd, .x=0x6a, .y=0x48, .sp=0x81, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x4635, .value=0x28}, {.addr=0x4636, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x4637, .a=0x0c, .x=0x6a, .y=0x48, .sp=0x81, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4635, .value=0x28}, {.addr=0x4636, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x4635, .value=0x28, .type=IO_READ},
        {.addr=0x4636, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0037) {
    const struct CPU_State initial_cpu = {.pc=0x2c5a, .a=0xe6, .x=0xa4, .y=0x41, .sp=0x70, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x2c5a, .value=0x28}, {.addr=0x2c5b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2c5c, .a=0x46, .x=0xa4, .y=0x41, .sp=0x70, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2c5a, .value=0x28}, {.addr=0x2c5b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2c5a, .value=0x28, .type=IO_READ},
        {.addr=0x2c5b, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0038) {
    const struct CPU_State initial_cpu = {.pc=0x580e, .a=0x58, .x=0x94, .y=0xe9, .sp=0x27, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x580e, .value=0x28}, {.addr=0x580f, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x5810, .a=0x48, .x=0x94, .y=0xe9, .sp=0x27, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x580e, .value=0x28}, {.addr=0x580f, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x580e, .value=0x28, .type=IO_READ},
        {.addr=0x580f, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0039) {
    const struct CPU_State initial_cpu = {.pc=0x7895, .a=0x17, .x=0xbd, .y=0x04, .sp=0xcf, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x7895, .value=0x28}, {.addr=0x7896, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x7897, .a=0x16, .x=0xbd, .y=0x04, .sp=0xcf, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7895, .value=0x28}, {.addr=0x7896, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x7895, .value=0x28, .type=IO_READ},
        {.addr=0x7896, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_003A) {
    const struct CPU_State initial_cpu = {.pc=0x267a, .a=0x58, .x=0x5b, .y=0xde, .sp=0x40, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x267a, .value=0x28}, {.addr=0x267b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x267c, .a=0x18, .x=0x5b, .y=0xde, .sp=0x40, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x267a, .value=0x28}, {.addr=0x267b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x267a, .value=0x28, .type=IO_READ},
        {.addr=0x267b, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_003B) {
    const struct CPU_State initial_cpu = {.pc=0xd89d, .a=0xc5, .x=0xd7, .y=0xf2, .sp=0xac, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xd89d, .value=0x28}, {.addr=0xd89e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd89f, .a=0xc4, .x=0xd7, .y=0xf2, .sp=0xac, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd89d, .value=0x28}, {.addr=0xd89e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd89d, .value=0x28, .type=IO_READ},
        {.addr=0xd89e, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_003C) {
    const struct CPU_State initial_cpu = {.pc=0x0286, .a=0x82, .x=0x22, .y=0x17, .sp=0xba, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0286, .value=0x28}, {.addr=0x0287, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x0288, .a=0x82, .x=0x22, .y=0x17, .sp=0xba, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0286, .value=0x28}, {.addr=0x0287, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x0286, .value=0x28, .type=IO_READ},
        {.addr=0x0287, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_003D) {
    const struct CPU_State initial_cpu = {.pc=0x6337, .a=0x8c, .x=0x42, .y=0xe1, .sp=0x55, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6337, .value=0x28}, {.addr=0x6338, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x6339, .a=0x08, .x=0x42, .y=0xe1, .sp=0x55, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x6337, .value=0x28}, {.addr=0x6338, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x6337, .value=0x28, .type=IO_READ},
        {.addr=0x6338, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_003E) {
    const struct CPU_State initial_cpu = {.pc=0x9db8, .a=0x28, .x=0x14, .y=0xa5, .sp=0x16, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x9db8, .value=0x28}, {.addr=0x9db9, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x9dba, .a=0x00, .x=0x14, .y=0xa5, .sp=0x16, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x9db8, .value=0x28}, {.addr=0x9db9, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x9db8, .value=0x28, .type=IO_READ},
        {.addr=0x9db9, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_003F) {
    const struct CPU_State initial_cpu = {.pc=0x5a5f, .a=0xbf, .x=0xfa, .y=0x9f, .sp=0x6c, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x5a5f, .value=0x28}, {.addr=0x5a60, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x5a61, .a=0x03, .x=0xfa, .y=0x9f, .sp=0x6c, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x5a5f, .value=0x28}, {.addr=0x5a60, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x5a5f, .value=0x28, .type=IO_READ},
        {.addr=0x5a60, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0040) {
    const struct CPU_State initial_cpu = {.pc=0xfa9f, .a=0xfe, .x=0xb7, .y=0xae, .sp=0xc6, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xfa9f, .value=0x28}, {.addr=0xfaa0, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xfaa1, .a=0xfe, .x=0xb7, .y=0xae, .sp=0xc6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xfa9f, .value=0x28}, {.addr=0xfaa0, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xfa9f, .value=0x28, .type=IO_READ},
        {.addr=0xfaa0, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0041) {
    const struct CPU_State initial_cpu = {.pc=0xe679, .a=0xb0, .x=0xe4, .y=0xf1, .sp=0x17, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xe679, .value=0x28}, {.addr=0xe67a, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xe67b, .a=0x20, .x=0xe4, .y=0xf1, .sp=0x17, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe679, .value=0x28}, {.addr=0xe67a, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xe679, .value=0x28, .type=IO_READ},
        {.addr=0xe67a, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0042) {
    const struct CPU_State initial_cpu = {.pc=0x5e1b, .a=0x73, .x=0xe2, .y=0xad, .sp=0x9b, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x5e1b, .value=0x28}, {.addr=0x5e1c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5e1d, .a=0x53, .x=0xe2, .y=0xad, .sp=0x9b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x5e1b, .value=0x28}, {.addr=0x5e1c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5e1b, .value=0x28, .type=IO_READ},
        {.addr=0x5e1c, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0043) {
    const struct CPU_State initial_cpu = {.pc=0x2a3e, .a=0xb3, .x=0x11, .y=0xda, .sp=0xd5, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x2a3e, .value=0x28}, {.addr=0x2a3f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2a40, .a=0xa2, .x=0x11, .y=0xda, .sp=0xd5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x2a3e, .value=0x28}, {.addr=0x2a3f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2a3e, .value=0x28, .type=IO_READ},
        {.addr=0x2a3f, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0044) {
    const struct CPU_State initial_cpu = {.pc=0x0b6f, .a=0xeb, .x=0x76, .y=0xd1, .sp=0x37, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0b6f, .value=0x28}, {.addr=0x0b70, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x0b71, .a=0xc9, .x=0x76, .y=0xd1, .sp=0x37, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0b6f, .value=0x28}, {.addr=0x0b70, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x0b6f, .value=0x28, .type=IO_READ},
        {.addr=0x0b70, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0045) {
    const struct CPU_State initial_cpu = {.pc=0x90a5, .a=0x3d, .x=0xfd, .y=0x4d, .sp=0x3f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x90a5, .value=0x28}, {.addr=0x90a6, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x90a7, .a=0x10, .x=0xfd, .y=0x4d, .sp=0x3f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x90a5, .value=0x28}, {.addr=0x90a6, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x90a5, .value=0x28, .type=IO_READ},
        {.addr=0x90a6, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0046) {
    const struct CPU_State initial_cpu = {.pc=0xe5d8, .a=0xc1, .x=0xdc, .y=0x85, .sp=0xc8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xe5d8, .value=0x28}, {.addr=0xe5d9, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xe5da, .a=0x80, .x=0xdc, .y=0x85, .sp=0xc8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe5d8, .value=0x28}, {.addr=0xe5d9, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xe5d8, .value=0x28, .type=IO_READ},
        {.addr=0xe5d9, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0047) {
    const struct CPU_State initial_cpu = {.pc=0xfd50, .a=0x1b, .x=0xe2, .y=0xc1, .sp=0x19, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xfd50, .value=0x28}, {.addr=0xfd51, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfd52, .a=0x1b, .x=0xe2, .y=0xc1, .sp=0x19, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xfd50, .value=0x28}, {.addr=0xfd51, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfd50, .value=0x28, .type=IO_READ},
        {.addr=0xfd51, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0048) {
    const struct CPU_State initial_cpu = {.pc=0x352b, .a=0x9d, .x=0x53, .y=0x2f, .sp=0x31, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x352b, .value=0x28}, {.addr=0x352c, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x352d, .a=0x95, .x=0x53, .y=0x2f, .sp=0x31, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x352b, .value=0x28}, {.addr=0x352c, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x352b, .value=0x28, .type=IO_READ},
        {.addr=0x352c, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0049) {
    const struct CPU_State initial_cpu = {.pc=0x81dc, .a=0xfd, .x=0x9e, .y=0xde, .sp=0xf8, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x81dc, .value=0x28}, {.addr=0x81dd, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x81de, .a=0xb0, .x=0x9e, .y=0xde, .sp=0xf8, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x81dc, .value=0x28}, {.addr=0x81dd, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x81dc, .value=0x28, .type=IO_READ},
        {.addr=0x81dd, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_004A) {
    const struct CPU_State initial_cpu = {.pc=0xef25, .a=0xa4, .x=0x00, .y=0xd2, .sp=0x2d, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xef25, .value=0x28}, {.addr=0xef26, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xef27, .a=0x04, .x=0x00, .y=0xd2, .sp=0x2d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xef25, .value=0x28}, {.addr=0xef26, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xef25, .value=0x28, .type=IO_READ},
        {.addr=0xef26, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_004B) {
    const struct CPU_State initial_cpu = {.pc=0x0252, .a=0x85, .x=0xe4, .y=0x46, .sp=0xf7, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0252, .value=0x28}, {.addr=0x0253, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x0254, .a=0x81, .x=0xe4, .y=0x46, .sp=0xf7, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0252, .value=0x28}, {.addr=0x0253, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x0252, .value=0x28, .type=IO_READ},
        {.addr=0x0253, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_004C) {
    const struct CPU_State initial_cpu = {.pc=0x76b4, .a=0x03, .x=0x58, .y=0xb3, .sp=0xd3, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x76b4, .value=0x28}, {.addr=0x76b5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x76b6, .a=0x00, .x=0x58, .y=0xb3, .sp=0xd3, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x76b4, .value=0x28}, {.addr=0x76b5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x76b4, .value=0x28, .type=IO_READ},
        {.addr=0x76b5, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_004D) {
    const struct CPU_State initial_cpu = {.pc=0xa1d3, .a=0x4b, .x=0xe8, .y=0x84, .sp=0xdd, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xa1d3, .value=0x28}, {.addr=0xa1d4, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xa1d5, .a=0x43, .x=0xe8, .y=0x84, .sp=0xdd, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xa1d3, .value=0x28}, {.addr=0xa1d4, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xa1d3, .value=0x28, .type=IO_READ},
        {.addr=0xa1d4, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_004E) {
    const struct CPU_State initial_cpu = {.pc=0xd472, .a=0xf8, .x=0x17, .y=0x0d, .sp=0x13, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xd472, .value=0x28}, {.addr=0xd473, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xd474, .a=0x68, .x=0x17, .y=0x0d, .sp=0x13, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xd472, .value=0x28}, {.addr=0xd473, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xd472, .value=0x28, .type=IO_READ},
        {.addr=0xd473, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_004F) {
    const struct CPU_State initial_cpu = {.pc=0x227f, .a=0xfd, .x=0x2f, .y=0xb0, .sp=0x77, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x227f, .value=0x28}, {.addr=0x2280, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x2281, .a=0xf9, .x=0x2f, .y=0xb0, .sp=0x77, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x227f, .value=0x28}, {.addr=0x2280, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x227f, .value=0x28, .type=IO_READ},
        {.addr=0x2280, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0050) {
    const struct CPU_State initial_cpu = {.pc=0xf5b3, .a=0xcd, .x=0x28, .y=0x49, .sp=0x2f, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xf5b3, .value=0x28}, {.addr=0xf5b4, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xf5b5, .a=0xc0, .x=0x28, .y=0x49, .sp=0x2f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xf5b3, .value=0x28}, {.addr=0xf5b4, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xf5b3, .value=0x28, .type=IO_READ},
        {.addr=0xf5b4, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0051) {
    const struct CPU_State initial_cpu = {.pc=0x474d, .a=0x72, .x=0xd3, .y=0xce, .sp=0xc2, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x474d, .value=0x28}, {.addr=0x474e, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x474f, .a=0x60, .x=0xd3, .y=0xce, .sp=0xc2, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x474d, .value=0x28}, {.addr=0x474e, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x474d, .value=0x28, .type=IO_READ},
        {.addr=0x474e, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0052) {
    const struct CPU_State initial_cpu = {.pc=0xb6cc, .a=0xfd, .x=0x2d, .y=0x50, .sp=0x2f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xb6cc, .value=0x28}, {.addr=0xb6cd, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xb6ce, .a=0x80, .x=0x2d, .y=0x50, .sp=0x2f, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xb6cc, .value=0x28}, {.addr=0xb6cd, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xb6cc, .value=0x28, .type=IO_READ},
        {.addr=0xb6cd, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0053) {
    const struct CPU_State initial_cpu = {.pc=0x44ac, .a=0xce, .x=0x01, .y=0x7a, .sp=0x63, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x44ac, .value=0x28}, {.addr=0x44ad, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x44ae, .a=0x04, .x=0x01, .y=0x7a, .sp=0x63, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x44ac, .value=0x28}, {.addr=0x44ad, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x44ac, .value=0x28, .type=IO_READ},
        {.addr=0x44ad, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0054) {
    const struct CPU_State initial_cpu = {.pc=0x641c, .a=0xb3, .x=0xed, .y=0x85, .sp=0x68, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x641c, .value=0x28}, {.addr=0x641d, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x641e, .a=0xb3, .x=0xed, .y=0x85, .sp=0x68, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x641c, .value=0x28}, {.addr=0x641d, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x641c, .value=0x28, .type=IO_READ},
        {.addr=0x641d, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0055) {
    const struct CPU_State initial_cpu = {.pc=0x7ee8, .a=0xc7, .x=0xc2, .y=0xf4, .sp=0xb7, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x7ee8, .value=0x28}, {.addr=0x7ee9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7eea, .a=0x40, .x=0xc2, .y=0xf4, .sp=0xb7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x7ee8, .value=0x28}, {.addr=0x7ee9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7ee8, .value=0x28, .type=IO_READ},
        {.addr=0x7ee9, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0056) {
    const struct CPU_State initial_cpu = {.pc=0xeea6, .a=0x53, .x=0xdf, .y=0x53, .sp=0xba, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xeea6, .value=0x28}, {.addr=0xeea7, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xeea8, .a=0x12, .x=0xdf, .y=0x53, .sp=0xba, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xeea6, .value=0x28}, {.addr=0xeea7, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xeea6, .value=0x28, .type=IO_READ},
        {.addr=0xeea7, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0057) {
    const struct CPU_State initial_cpu = {.pc=0xdf95, .a=0x02, .x=0x38, .y=0x02, .sp=0xb5, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xdf95, .value=0x28}, {.addr=0xdf96, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdf97, .a=0x00, .x=0x38, .y=0x02, .sp=0xb5, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xdf95, .value=0x28}, {.addr=0xdf96, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdf95, .value=0x28, .type=IO_READ},
        {.addr=0xdf96, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0058) {
    const struct CPU_State initial_cpu = {.pc=0x6345, .a=0x73, .x=0x78, .y=0xb1, .sp=0x7a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x6345, .value=0x28}, {.addr=0x6346, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6347, .a=0x23, .x=0x78, .y=0xb1, .sp=0x7a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x6345, .value=0x28}, {.addr=0x6346, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6345, .value=0x28, .type=IO_READ},
        {.addr=0x6346, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0059) {
    const struct CPU_State initial_cpu = {.pc=0x52fa, .a=0xef, .x=0xbf, .y=0x38, .sp=0xa0, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x52fa, .value=0x28}, {.addr=0x52fb, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x52fc, .a=0xef, .x=0xbf, .y=0x38, .sp=0xa0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x52fa, .value=0x28}, {.addr=0x52fb, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x52fa, .value=0x28, .type=IO_READ},
        {.addr=0x52fb, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_005A) {
    const struct CPU_State initial_cpu = {.pc=0x3eeb, .a=0xcb, .x=0x47, .y=0x70, .sp=0xa6, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x3eeb, .value=0x28}, {.addr=0x3eec, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x3eed, .a=0x48, .x=0x47, .y=0x70, .sp=0xa6, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3eeb, .value=0x28}, {.addr=0x3eec, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x3eeb, .value=0x28, .type=IO_READ},
        {.addr=0x3eec, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_005B) {
    const struct CPU_State initial_cpu = {.pc=0xe8e9, .a=0xa0, .x=0x35, .y=0xae, .sp=0xf6, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xe8e9, .value=0x28}, {.addr=0xe8ea, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xe8eb, .a=0x80, .x=0x35, .y=0xae, .sp=0xf6, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xe8e9, .value=0x28}, {.addr=0xe8ea, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xe8e9, .value=0x28, .type=IO_READ},
        {.addr=0xe8ea, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_005C) {
    const struct CPU_State initial_cpu = {.pc=0xf06b, .a=0x96, .x=0xe4, .y=0xc5, .sp=0x42, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xf06b, .value=0x28}, {.addr=0xf06c, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xf06d, .a=0x84, .x=0xe4, .y=0xc5, .sp=0x42, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf06b, .value=0x28}, {.addr=0xf06c, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xf06b, .value=0x28, .type=IO_READ},
        {.addr=0xf06c, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_005D) {
    const struct CPU_State initial_cpu = {.pc=0x83df, .a=0xb3, .x=0x03, .y=0xe9, .sp=0x10, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x83df, .value=0x28}, {.addr=0x83e0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x83e1, .a=0xa1, .x=0x03, .y=0xe9, .sp=0x10, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x83df, .value=0x28}, {.addr=0x83e0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x83df, .value=0x28, .type=IO_READ},
        {.addr=0x83e0, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_005E) {
    const struct CPU_State initial_cpu = {.pc=0x1ca8, .a=0x6c, .x=0xdf, .y=0xff, .sp=0x9f, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x1ca8, .value=0x28}, {.addr=0x1ca9, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x1caa, .a=0x04, .x=0xdf, .y=0xff, .sp=0x9f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1ca8, .value=0x28}, {.addr=0x1ca9, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x1ca8, .value=0x28, .type=IO_READ},
        {.addr=0x1ca9, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_005F) {
    const struct CPU_State initial_cpu = {.pc=0x35c1, .a=0x0e, .x=0xea, .y=0x3b, .sp=0xf5, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x35c1, .value=0x28}, {.addr=0x35c2, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x35c3, .a=0x02, .x=0xea, .y=0x3b, .sp=0xf5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x35c1, .value=0x28}, {.addr=0x35c2, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x35c1, .value=0x28, .type=IO_READ},
        {.addr=0x35c2, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0060) {
    const struct CPU_State initial_cpu = {.pc=0x4b49, .a=0xff, .x=0xd1, .y=0xb6, .sp=0xcd, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x4b49, .value=0x28}, {.addr=0x4b4a, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x4b4b, .a=0x0b, .x=0xd1, .y=0xb6, .sp=0xcd, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x4b49, .value=0x28}, {.addr=0x4b4a, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x4b49, .value=0x28, .type=IO_READ},
        {.addr=0x4b4a, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0061) {
    const struct CPU_State initial_cpu = {.pc=0xb4f8, .a=0xb3, .x=0xb2, .y=0xee, .sp=0xa9, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f8, .value=0x28}, {.addr=0xb4f9, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xb4fa, .a=0x03, .x=0xb2, .y=0xee, .sp=0xa9, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb4f8, .value=0x28}, {.addr=0xb4f9, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xb4f8, .value=0x28, .type=IO_READ},
        {.addr=0xb4f9, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0062) {
    const struct CPU_State initial_cpu = {.pc=0x65c2, .a=0xba, .x=0x53, .y=0x0b, .sp=0x6d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x65c2, .value=0x28}, {.addr=0x65c3, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x65c4, .a=0x22, .x=0x53, .y=0x0b, .sp=0x6d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x65c2, .value=0x28}, {.addr=0x65c3, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x65c2, .value=0x28, .type=IO_READ},
        {.addr=0x65c3, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0063) {
    const struct CPU_State initial_cpu = {.pc=0x1148, .a=0x6c, .x=0x2e, .y=0x49, .sp=0xfa, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x1148, .value=0x28}, {.addr=0x1149, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x114a, .a=0x0c, .x=0x2e, .y=0x49, .sp=0xfa, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x1148, .value=0x28}, {.addr=0x1149, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1148, .value=0x28, .type=IO_READ},
        {.addr=0x1149, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0064) {
    const struct CPU_State initial_cpu = {.pc=0xee70, .a=0x00, .x=0x50, .y=0xa9, .sp=0xce, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xee70, .value=0x28}, {.addr=0xee71, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xee72, .a=0x00, .x=0x50, .y=0xa9, .sp=0xce, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xee70, .value=0x28}, {.addr=0xee71, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xee70, .value=0x28, .type=IO_READ},
        {.addr=0xee71, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0065) {
    const struct CPU_State initial_cpu = {.pc=0x719b, .a=0xba, .x=0xdc, .y=0x29, .sp=0x7f, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x719b, .value=0x28}, {.addr=0x719c, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x719d, .a=0x08, .x=0xdc, .y=0x29, .sp=0x7f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x719b, .value=0x28}, {.addr=0x719c, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x719b, .value=0x28, .type=IO_READ},
        {.addr=0x719c, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0066) {
    const struct CPU_State initial_cpu = {.pc=0x54c4, .a=0xe0, .x=0x35, .y=0x5e, .sp=0xf1, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x54c4, .value=0x28}, {.addr=0x54c5, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x54c6, .a=0x60, .x=0x35, .y=0x5e, .sp=0xf1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x54c4, .value=0x28}, {.addr=0x54c5, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x54c4, .value=0x28, .type=IO_READ},
        {.addr=0x54c5, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0067) {
    const struct CPU_State initial_cpu = {.pc=0xc209, .a=0x27, .x=0xe3, .y=0xf6, .sp=0x0e, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xc209, .value=0x28}, {.addr=0xc20a, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xc20b, .a=0x04, .x=0xe3, .y=0xf6, .sp=0x0e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc209, .value=0x28}, {.addr=0xc20a, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xc209, .value=0x28, .type=IO_READ},
        {.addr=0xc20a, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0068) {
    const struct CPU_State initial_cpu = {.pc=0xb16b, .a=0x95, .x=0xc7, .y=0x5e, .sp=0x46, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xb16b, .value=0x28}, {.addr=0xb16c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb16d, .a=0x84, .x=0xc7, .y=0x5e, .sp=0x46, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb16b, .value=0x28}, {.addr=0xb16c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb16b, .value=0x28, .type=IO_READ},
        {.addr=0xb16c, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0069) {
    const struct CPU_State initial_cpu = {.pc=0xbef3, .a=0xce, .x=0xe0, .y=0x48, .sp=0xd7, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xbef3, .value=0x28}, {.addr=0xbef4, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xbef5, .a=0x46, .x=0xe0, .y=0x48, .sp=0xd7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbef3, .value=0x28}, {.addr=0xbef4, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xbef3, .value=0x28, .type=IO_READ},
        {.addr=0xbef4, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_006A) {
    const struct CPU_State initial_cpu = {.pc=0xc460, .a=0xb9, .x=0xf3, .y=0x80, .sp=0x4c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xc460, .value=0x28}, {.addr=0xc461, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xc462, .a=0x20, .x=0xf3, .y=0x80, .sp=0x4c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc460, .value=0x28}, {.addr=0xc461, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xc460, .value=0x28, .type=IO_READ},
        {.addr=0xc461, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_006B) {
    const struct CPU_State initial_cpu = {.pc=0x424f, .a=0xbf, .x=0xde, .y=0xb9, .sp=0x2b, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x424f, .value=0x28}, {.addr=0x4250, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x4251, .a=0x38, .x=0xde, .y=0xb9, .sp=0x2b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x424f, .value=0x28}, {.addr=0x4250, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x424f, .value=0x28, .type=IO_READ},
        {.addr=0x4250, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_006C) {
    const struct CPU_State initial_cpu = {.pc=0x6dd9, .a=0x1e, .x=0x81, .y=0xca, .sp=0x7f, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd9, .value=0x28}, {.addr=0x6dda, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x6ddb, .a=0x00, .x=0x81, .y=0xca, .sp=0x7f, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x6dd9, .value=0x28}, {.addr=0x6dda, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x6dd9, .value=0x28, .type=IO_READ},
        {.addr=0x6dda, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_006D) {
    const struct CPU_State initial_cpu = {.pc=0x7ad0, .a=0x54, .x=0x6f, .y=0x84, .sp=0x9e, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x7ad0, .value=0x28}, {.addr=0x7ad1, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x7ad2, .a=0x54, .x=0x6f, .y=0x84, .sp=0x9e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7ad0, .value=0x28}, {.addr=0x7ad1, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x7ad0, .value=0x28, .type=IO_READ},
        {.addr=0x7ad1, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_006E) {
    const struct CPU_State initial_cpu = {.pc=0xc1f9, .a=0x0c, .x=0xe6, .y=0xfa, .sp=0x6a, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xc1f9, .value=0x28}, {.addr=0xc1fa, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xc1fb, .a=0x08, .x=0xe6, .y=0xfa, .sp=0x6a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xc1f9, .value=0x28}, {.addr=0xc1fa, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xc1f9, .value=0x28, .type=IO_READ},
        {.addr=0xc1fa, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_006F) {
    const struct CPU_State initial_cpu = {.pc=0x3cd7, .a=0x40, .x=0x4a, .y=0xae, .sp=0x28, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x3cd7, .value=0x28}, {.addr=0x3cd8, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x3cd9, .a=0x40, .x=0x4a, .y=0xae, .sp=0x28, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x3cd7, .value=0x28}, {.addr=0x3cd8, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x3cd7, .value=0x28, .type=IO_READ},
        {.addr=0x3cd8, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0070) {
    const struct CPU_State initial_cpu = {.pc=0x06e0, .a=0x3c, .x=0x64, .y=0x1e, .sp=0xfa, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x06e0, .value=0x28}, {.addr=0x06e1, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x06e2, .a=0x30, .x=0x64, .y=0x1e, .sp=0xfa, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x06e0, .value=0x28}, {.addr=0x06e1, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x06e0, .value=0x28, .type=IO_READ},
        {.addr=0x06e1, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0071) {
    const struct CPU_State initial_cpu = {.pc=0x5034, .a=0xff, .x=0xac, .y=0xf8, .sp=0x9a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x5034, .value=0x28}, {.addr=0x5035, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x5036, .a=0xe9, .x=0xac, .y=0xf8, .sp=0x9a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x5034, .value=0x28}, {.addr=0x5035, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x5034, .value=0x28, .type=IO_READ},
        {.addr=0x5035, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0072) {
    const struct CPU_State initial_cpu = {.pc=0xdb19, .a=0x08, .x=0x7c, .y=0xff, .sp=0x66, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xdb19, .value=0x28}, {.addr=0xdb1a, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xdb1b, .a=0x00, .x=0x7c, .y=0xff, .sp=0x66, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xdb19, .value=0x28}, {.addr=0xdb1a, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xdb19, .value=0x28, .type=IO_READ},
        {.addr=0xdb1a, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0073) {
    const struct CPU_State initial_cpu = {.pc=0x27f5, .a=0x79, .x=0xcc, .y=0x9c, .sp=0x4f, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x27f5, .value=0x28}, {.addr=0x27f6, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x27f7, .a=0x70, .x=0xcc, .y=0x9c, .sp=0x4f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x27f5, .value=0x28}, {.addr=0x27f6, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x27f5, .value=0x28, .type=IO_READ},
        {.addr=0x27f6, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0074) {
    const struct CPU_State initial_cpu = {.pc=0x5f0d, .a=0xd2, .x=0xf9, .y=0x7c, .sp=0xce, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x5f0d, .value=0x28}, {.addr=0x5f0e, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x5f0f, .a=0x52, .x=0xf9, .y=0x7c, .sp=0xce, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5f0d, .value=0x28}, {.addr=0x5f0e, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x5f0d, .value=0x28, .type=IO_READ},
        {.addr=0x5f0e, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0075) {
    const struct CPU_State initial_cpu = {.pc=0xcc25, .a=0x27, .x=0xec, .y=0x8b, .sp=0xf0, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xcc25, .value=0x28}, {.addr=0xcc26, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xcc27, .a=0x01, .x=0xec, .y=0x8b, .sp=0xf0, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xcc25, .value=0x28}, {.addr=0xcc26, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xcc25, .value=0x28, .type=IO_READ},
        {.addr=0xcc26, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0076) {
    const struct CPU_State initial_cpu = {.pc=0x546b, .a=0x13, .x=0xdc, .y=0x91, .sp=0xc5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x546b, .value=0x28}, {.addr=0x546c, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x546d, .a=0x10, .x=0xdc, .y=0x91, .sp=0xc5, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x546b, .value=0x28}, {.addr=0x546c, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x546b, .value=0x28, .type=IO_READ},
        {.addr=0x546c, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0077) {
    const struct CPU_State initial_cpu = {.pc=0xdc16, .a=0x88, .x=0xa5, .y=0xf6, .sp=0x70, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xdc16, .value=0x28}, {.addr=0xdc17, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xdc18, .a=0x80, .x=0xa5, .y=0xf6, .sp=0x70, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xdc16, .value=0x28}, {.addr=0xdc17, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xdc16, .value=0x28, .type=IO_READ},
        {.addr=0xdc17, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0078) {
    const struct CPU_State initial_cpu = {.pc=0xa7bb, .a=0xf2, .x=0x2d, .y=0x32, .sp=0xef, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xa7bb, .value=0x28}, {.addr=0xa7bc, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xa7bd, .a=0xa0, .x=0x2d, .y=0x32, .sp=0xef, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xa7bb, .value=0x28}, {.addr=0xa7bc, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xa7bb, .value=0x28, .type=IO_READ},
        {.addr=0xa7bc, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0079) {
    const struct CPU_State initial_cpu = {.pc=0xf41e, .a=0x9a, .x=0x10, .y=0x81, .sp=0x00, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xf41e, .value=0x28}, {.addr=0xf41f, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xf420, .a=0x0a, .x=0x10, .y=0x81, .sp=0x00, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf41e, .value=0x28}, {.addr=0xf41f, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xf41e, .value=0x28, .type=IO_READ},
        {.addr=0xf41f, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_007A) {
    const struct CPU_State initial_cpu = {.pc=0x5a7c, .a=0xcb, .x=0x35, .y=0x83, .sp=0x3f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5a7c, .value=0x28}, {.addr=0x5a7d, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x5a7e, .a=0x8a, .x=0x35, .y=0x83, .sp=0x3f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5a7c, .value=0x28}, {.addr=0x5a7d, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x5a7c, .value=0x28, .type=IO_READ},
        {.addr=0x5a7d, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_007B) {
    const struct CPU_State initial_cpu = {.pc=0x11d1, .a=0x7f, .x=0xe9, .y=0x06, .sp=0x83, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x11d1, .value=0x28}, {.addr=0x11d2, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x11d3, .a=0x79, .x=0xe9, .y=0x06, .sp=0x83, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x11d1, .value=0x28}, {.addr=0x11d2, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x11d1, .value=0x28, .type=IO_READ},
        {.addr=0x11d2, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_007C) {
    const struct CPU_State initial_cpu = {.pc=0xb471, .a=0xd8, .x=0x03, .y=0x9d, .sp=0x1c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xb471, .value=0x28}, {.addr=0xb472, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xb473, .a=0xc8, .x=0x03, .y=0x9d, .sp=0x1c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xb471, .value=0x28}, {.addr=0xb472, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xb471, .value=0x28, .type=IO_READ},
        {.addr=0xb472, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_007D) {
    const struct CPU_State initial_cpu = {.pc=0xc807, .a=0x9e, .x=0x30, .y=0xb9, .sp=0x9e, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xc807, .value=0x28}, {.addr=0xc808, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xc809, .a=0x0a, .x=0x30, .y=0xb9, .sp=0x9e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc807, .value=0x28}, {.addr=0xc808, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xc807, .value=0x28, .type=IO_READ},
        {.addr=0xc808, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_007E) {
    const struct CPU_State initial_cpu = {.pc=0x4ae2, .a=0xaf, .x=0x03, .y=0x40, .sp=0x09, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x4ae2, .value=0x28}, {.addr=0x4ae3, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x4ae4, .a=0x25, .x=0x03, .y=0x40, .sp=0x09, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4ae2, .value=0x28}, {.addr=0x4ae3, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x4ae2, .value=0x28, .type=IO_READ},
        {.addr=0x4ae3, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_007F) {
    const struct CPU_State initial_cpu = {.pc=0x30a5, .a=0xb6, .x=0x11, .y=0x8c, .sp=0x7a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x30a5, .value=0x28}, {.addr=0x30a6, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x30a7, .a=0x32, .x=0x11, .y=0x8c, .sp=0x7a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x30a5, .value=0x28}, {.addr=0x30a6, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x30a5, .value=0x28, .type=IO_READ},
        {.addr=0x30a6, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0080) {
    const struct CPU_State initial_cpu = {.pc=0xc4fa, .a=0xec, .x=0x1d, .y=0x55, .sp=0x94, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xc4fa, .value=0x28}, {.addr=0xc4fb, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xc4fc, .a=0x40, .x=0x1d, .y=0x55, .sp=0x94, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xc4fa, .value=0x28}, {.addr=0xc4fb, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xc4fa, .value=0x28, .type=IO_READ},
        {.addr=0xc4fb, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0081) {
    const struct CPU_State initial_cpu = {.pc=0xcf42, .a=0xfe, .x=0x33, .y=0xc2, .sp=0x91, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xcf42, .value=0x28}, {.addr=0xcf43, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xcf44, .a=0x12, .x=0x33, .y=0xc2, .sp=0x91, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xcf42, .value=0x28}, {.addr=0xcf43, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xcf42, .value=0x28, .type=IO_READ},
        {.addr=0xcf43, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0082) {
    const struct CPU_State initial_cpu = {.pc=0xefa8, .a=0x9e, .x=0x11, .y=0x22, .sp=0xcd, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xefa8, .value=0x28}, {.addr=0xefa9, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xefaa, .a=0x82, .x=0x11, .y=0x22, .sp=0xcd, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xefa8, .value=0x28}, {.addr=0xefa9, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xefa8, .value=0x28, .type=IO_READ},
        {.addr=0xefa9, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0083) {
    const struct CPU_State initial_cpu = {.pc=0x466b, .a=0x97, .x=0x9a, .y=0x15, .sp=0x62, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x466b, .value=0x28}, {.addr=0x466c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x466d, .a=0x14, .x=0x9a, .y=0x15, .sp=0x62, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x466b, .value=0x28}, {.addr=0x466c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x466b, .value=0x28, .type=IO_READ},
        {.addr=0x466c, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0084) {
    const struct CPU_State initial_cpu = {.pc=0x52c6, .a=0x9e, .x=0x6c, .y=0x11, .sp=0xfc, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x52c6, .value=0x28}, {.addr=0x52c7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x52c8, .a=0x8e, .x=0x6c, .y=0x11, .sp=0xfc, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x52c6, .value=0x28}, {.addr=0x52c7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x52c6, .value=0x28, .type=IO_READ},
        {.addr=0x52c7, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0085) {
    const struct CPU_State initial_cpu = {.pc=0xfed0, .a=0x75, .x=0x09, .y=0xd6, .sp=0x4e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xfed0, .value=0x28}, {.addr=0xfed1, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xfed2, .a=0x45, .x=0x09, .y=0xd6, .sp=0x4e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xfed0, .value=0x28}, {.addr=0xfed1, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xfed0, .value=0x28, .type=IO_READ},
        {.addr=0xfed1, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0086) {
    const struct CPU_State initial_cpu = {.pc=0x57d8, .a=0xe6, .x=0x38, .y=0x7d, .sp=0x8f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x57d8, .value=0x28}, {.addr=0x57d9, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x57da, .a=0x26, .x=0x38, .y=0x7d, .sp=0x8f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x57d8, .value=0x28}, {.addr=0x57d9, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x57d8, .value=0x28, .type=IO_READ},
        {.addr=0x57d9, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0087) {
    const struct CPU_State initial_cpu = {.pc=0xa6f8, .a=0xf6, .x=0x14, .y=0x35, .sp=0x69, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xa6f8, .value=0x28}, {.addr=0xa6f9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa6fa, .a=0xd4, .x=0x14, .y=0x35, .sp=0x69, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa6f8, .value=0x28}, {.addr=0xa6f9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa6f8, .value=0x28, .type=IO_READ},
        {.addr=0xa6f9, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0088) {
    const struct CPU_State initial_cpu = {.pc=0x905b, .a=0x7a, .x=0x17, .y=0x5b, .sp=0xfe, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x905b, .value=0x28}, {.addr=0x905c, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x905d, .a=0x12, .x=0x17, .y=0x5b, .sp=0xfe, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x905b, .value=0x28}, {.addr=0x905c, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x905b, .value=0x28, .type=IO_READ},
        {.addr=0x905c, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0089) {
    const struct CPU_State initial_cpu = {.pc=0xad0f, .a=0xc8, .x=0xfc, .y=0xce, .sp=0xc4, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xad0f, .value=0x28}, {.addr=0xad10, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xad11, .a=0xc0, .x=0xfc, .y=0xce, .sp=0xc4, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xad0f, .value=0x28}, {.addr=0xad10, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xad0f, .value=0x28, .type=IO_READ},
        {.addr=0xad10, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_008A) {
    const struct CPU_State initial_cpu = {.pc=0xd769, .a=0x4d, .x=0xbb, .y=0x19, .sp=0x1d, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xd769, .value=0x28}, {.addr=0xd76a, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xd76b, .a=0x05, .x=0xbb, .y=0x19, .sp=0x1d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd769, .value=0x28}, {.addr=0xd76a, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xd769, .value=0x28, .type=IO_READ},
        {.addr=0xd76a, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_008B) {
    const struct CPU_State initial_cpu = {.pc=0xeabe, .a=0x91, .x=0xfb, .y=0x96, .sp=0xdf, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xeabe, .value=0x28}, {.addr=0xeabf, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xeac0, .a=0x80, .x=0xfb, .y=0x96, .sp=0xdf, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xeabe, .value=0x28}, {.addr=0xeabf, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeabe, .value=0x28, .type=IO_READ},
        {.addr=0xeabf, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_008C) {
    const struct CPU_State initial_cpu = {.pc=0x3507, .a=0x3b, .x=0x2d, .y=0x93, .sp=0x2c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x3507, .value=0x28}, {.addr=0x3508, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x3509, .a=0x08, .x=0x2d, .y=0x93, .sp=0x2c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3507, .value=0x28}, {.addr=0x3508, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x3507, .value=0x28, .type=IO_READ},
        {.addr=0x3508, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_008D) {
    const struct CPU_State initial_cpu = {.pc=0x3c13, .a=0x44, .x=0xa4, .y=0x37, .sp=0x26, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x3c13, .value=0x28}, {.addr=0x3c14, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x3c15, .a=0x00, .x=0xa4, .y=0x37, .sp=0x26, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x3c13, .value=0x28}, {.addr=0x3c14, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x3c13, .value=0x28, .type=IO_READ},
        {.addr=0x3c14, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_008E) {
    const struct CPU_State initial_cpu = {.pc=0xcd63, .a=0x6d, .x=0xb1, .y=0xe0, .sp=0xbf, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xcd63, .value=0x28}, {.addr=0xcd64, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xcd65, .a=0x08, .x=0xb1, .y=0xe0, .sp=0xbf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xcd63, .value=0x28}, {.addr=0xcd64, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xcd63, .value=0x28, .type=IO_READ},
        {.addr=0xcd64, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_008F) {
    const struct CPU_State initial_cpu = {.pc=0xd6e8, .a=0xf7, .x=0x97, .y=0x01, .sp=0x60, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xd6e8, .value=0x28}, {.addr=0xd6e9, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xd6ea, .a=0x52, .x=0x97, .y=0x01, .sp=0x60, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd6e8, .value=0x28}, {.addr=0xd6e9, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xd6e8, .value=0x28, .type=IO_READ},
        {.addr=0xd6e9, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0090) {
    const struct CPU_State initial_cpu = {.pc=0x98f1, .a=0xbe, .x=0xa1, .y=0xfd, .sp=0xc3, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x98f1, .value=0x28}, {.addr=0x98f2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x98f3, .a=0x20, .x=0xa1, .y=0xfd, .sp=0xc3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x98f1, .value=0x28}, {.addr=0x98f2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x98f1, .value=0x28, .type=IO_READ},
        {.addr=0x98f2, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0091) {
    const struct CPU_State initial_cpu = {.pc=0xc501, .a=0xbf, .x=0xac, .y=0x69, .sp=0x7c, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xc501, .value=0x28}, {.addr=0xc502, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc503, .a=0x3c, .x=0xac, .y=0x69, .sp=0x7c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc501, .value=0x28}, {.addr=0xc502, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc501, .value=0x28, .type=IO_READ},
        {.addr=0xc502, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0092) {
    const struct CPU_State initial_cpu = {.pc=0x6990, .a=0x54, .x=0x18, .y=0x9b, .sp=0x34, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x6990, .value=0x28}, {.addr=0x6991, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x6992, .a=0x54, .x=0x18, .y=0x9b, .sp=0x34, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6990, .value=0x28}, {.addr=0x6991, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x6990, .value=0x28, .type=IO_READ},
        {.addr=0x6991, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0093) {
    const struct CPU_State initial_cpu = {.pc=0x4a5d, .a=0xff, .x=0x43, .y=0x35, .sp=0x58, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4a5d, .value=0x28}, {.addr=0x4a5e, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x4a5f, .a=0x44, .x=0x43, .y=0x35, .sp=0x58, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x4a5d, .value=0x28}, {.addr=0x4a5e, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x4a5d, .value=0x28, .type=IO_READ},
        {.addr=0x4a5e, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0094) {
    const struct CPU_State initial_cpu = {.pc=0x60b6, .a=0x76, .x=0x82, .y=0x38, .sp=0x49, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x60b6, .value=0x28}, {.addr=0x60b7, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x60b8, .a=0x40, .x=0x82, .y=0x38, .sp=0x49, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x60b6, .value=0x28}, {.addr=0x60b7, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x60b6, .value=0x28, .type=IO_READ},
        {.addr=0x60b7, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0095) {
    const struct CPU_State initial_cpu = {.pc=0x2b34, .a=0xe3, .x=0x26, .y=0x45, .sp=0x92, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2b34, .value=0x28}, {.addr=0x2b35, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2b36, .a=0x61, .x=0x26, .y=0x45, .sp=0x92, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2b34, .value=0x28}, {.addr=0x2b35, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2b34, .value=0x28, .type=IO_READ},
        {.addr=0x2b35, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0096) {
    const struct CPU_State initial_cpu = {.pc=0x1502, .a=0x2f, .x=0x92, .y=0xe7, .sp=0xf8, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x1502, .value=0x28}, {.addr=0x1503, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x1504, .a=0x03, .x=0x92, .y=0xe7, .sp=0xf8, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1502, .value=0x28}, {.addr=0x1503, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x1502, .value=0x28, .type=IO_READ},
        {.addr=0x1503, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0097) {
    const struct CPU_State initial_cpu = {.pc=0x23d7, .a=0x5a, .x=0x04, .y=0x6d, .sp=0x9f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x23d7, .value=0x28}, {.addr=0x23d8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x23d9, .a=0x0a, .x=0x04, .y=0x6d, .sp=0x9f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x23d7, .value=0x28}, {.addr=0x23d8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x23d7, .value=0x28, .type=IO_READ},
        {.addr=0x23d8, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0098) {
    const struct CPU_State initial_cpu = {.pc=0x6085, .a=0x44, .x=0xb5, .y=0x70, .sp=0x58, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x6085, .value=0x28}, {.addr=0x6086, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x6087, .a=0x04, .x=0xb5, .y=0x70, .sp=0x58, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6085, .value=0x28}, {.addr=0x6086, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x6085, .value=0x28, .type=IO_READ},
        {.addr=0x6086, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0099) {
    const struct CPU_State initial_cpu = {.pc=0xb6df, .a=0x7f, .x=0x27, .y=0x6b, .sp=0x95, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xb6df, .value=0x28}, {.addr=0xb6e0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb6e1, .a=0x4d, .x=0x27, .y=0x6b, .sp=0x95, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xb6df, .value=0x28}, {.addr=0xb6e0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb6df, .value=0x28, .type=IO_READ},
        {.addr=0xb6e0, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_009A) {
    const struct CPU_State initial_cpu = {.pc=0x5262, .a=0xe2, .x=0xa4, .y=0x3c, .sp=0xf2, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x5262, .value=0x28}, {.addr=0x5263, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x5264, .a=0xc0, .x=0xa4, .y=0x3c, .sp=0xf2, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x5262, .value=0x28}, {.addr=0x5263, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x5262, .value=0x28, .type=IO_READ},
        {.addr=0x5263, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_009B) {
    const struct CPU_State initial_cpu = {.pc=0xe41f, .a=0x0a, .x=0x51, .y=0x60, .sp=0x33, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xe41f, .value=0x28}, {.addr=0xe420, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xe421, .a=0x08, .x=0x51, .y=0x60, .sp=0x33, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe41f, .value=0x28}, {.addr=0xe420, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xe41f, .value=0x28, .type=IO_READ},
        {.addr=0xe420, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_009C) {
    const struct CPU_State initial_cpu = {.pc=0x2ad0, .a=0x81, .x=0x20, .y=0xda, .sp=0x7f, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x2ad0, .value=0x28}, {.addr=0x2ad1, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x2ad2, .a=0x01, .x=0x20, .y=0xda, .sp=0x7f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2ad0, .value=0x28}, {.addr=0x2ad1, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x2ad0, .value=0x28, .type=IO_READ},
        {.addr=0x2ad1, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_009D) {
    const struct CPU_State initial_cpu = {.pc=0x2207, .a=0xe1, .x=0xaa, .y=0xe6, .sp=0x99, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x2207, .value=0x28}, {.addr=0x2208, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x2209, .a=0x41, .x=0xaa, .y=0xe6, .sp=0x99, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2207, .value=0x28}, {.addr=0x2208, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x2207, .value=0x28, .type=IO_READ},
        {.addr=0x2208, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_009E) {
    const struct CPU_State initial_cpu = {.pc=0x909c, .a=0x6b, .x=0xad, .y=0xeb, .sp=0xe5, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x909c, .value=0x28}, {.addr=0x909d, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x909e, .a=0x20, .x=0xad, .y=0xeb, .sp=0xe5, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x909c, .value=0x28}, {.addr=0x909d, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x909c, .value=0x28, .type=IO_READ},
        {.addr=0x909d, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_009F) {
    const struct CPU_State initial_cpu = {.pc=0xa12d, .a=0x22, .x=0x1e, .y=0x7e, .sp=0xca, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xa12d, .value=0x28}, {.addr=0xa12e, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xa12f, .a=0x00, .x=0x1e, .y=0x7e, .sp=0xca, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xa12d, .value=0x28}, {.addr=0xa12e, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xa12d, .value=0x28, .type=IO_READ},
        {.addr=0xa12e, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x4176, .a=0x08, .x=0x96, .y=0x25, .sp=0x6e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x4176, .value=0x28}, {.addr=0x4177, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x4178, .a=0x00, .x=0x96, .y=0x25, .sp=0x6e, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x4176, .value=0x28}, {.addr=0x4177, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x4176, .value=0x28, .type=IO_READ},
        {.addr=0x4177, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x0dcf, .a=0x3a, .x=0x0f, .y=0x74, .sp=0xe5, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0dcf, .value=0x28}, {.addr=0x0dd0, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x0dd1, .a=0x08, .x=0x0f, .y=0x74, .sp=0xe5, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0dcf, .value=0x28}, {.addr=0x0dd0, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x0dcf, .value=0x28, .type=IO_READ},
        {.addr=0x0dd0, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x0ae4, .a=0x10, .x=0x81, .y=0x9d, .sp=0x91, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0ae4, .value=0x28}, {.addr=0x0ae5, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x0ae6, .a=0x00, .x=0x81, .y=0x9d, .sp=0x91, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0ae4, .value=0x28}, {.addr=0x0ae5, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x0ae4, .value=0x28, .type=IO_READ},
        {.addr=0x0ae5, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x9efd, .a=0xfa, .x=0xca, .y=0x58, .sp=0xaf, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x9efd, .value=0x28}, {.addr=0x9efe, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x9eff, .a=0xea, .x=0xca, .y=0x58, .sp=0xaf, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x9efd, .value=0x28}, {.addr=0x9efe, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x9efd, .value=0x28, .type=IO_READ},
        {.addr=0x9efe, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xabf4, .a=0xc5, .x=0x34, .y=0x88, .sp=0x6a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xabf4, .value=0x28}, {.addr=0xabf5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xabf6, .a=0x85, .x=0x34, .y=0x88, .sp=0x6a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xabf4, .value=0x28}, {.addr=0xabf5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xabf4, .value=0x28, .type=IO_READ},
        {.addr=0xabf5, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x30fe, .a=0xe1, .x=0x8f, .y=0x2a, .sp=0xa6, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x30fe, .value=0x28}, {.addr=0x30ff, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3100, .a=0x41, .x=0x8f, .y=0x2a, .sp=0xa6, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x30fe, .value=0x28}, {.addr=0x30ff, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x30fe, .value=0x28, .type=IO_READ},
        {.addr=0x30ff, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x1812, .a=0x43, .x=0x9f, .y=0x27, .sp=0xf2, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x1812, .value=0x28}, {.addr=0x1813, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x1814, .a=0x00, .x=0x9f, .y=0x27, .sp=0xf2, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x1812, .value=0x28}, {.addr=0x1813, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x1812, .value=0x28, .type=IO_READ},
        {.addr=0x1813, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x17af, .a=0x91, .x=0xc8, .y=0x1e, .sp=0xde, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x17af, .value=0x28}, {.addr=0x17b0, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x17b1, .a=0x00, .x=0xc8, .y=0x1e, .sp=0xde, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x17af, .value=0x28}, {.addr=0x17b0, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x17af, .value=0x28, .type=IO_READ},
        {.addr=0x17b0, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x635d, .a=0x25, .x=0xde, .y=0x03, .sp=0xb5, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x635d, .value=0x28}, {.addr=0x635e, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x635f, .a=0x00, .x=0xde, .y=0x03, .sp=0xb5, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x635d, .value=0x28}, {.addr=0x635e, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x635d, .value=0x28, .type=IO_READ},
        {.addr=0x635e, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x3e09, .a=0xfb, .x=0x6c, .y=0x1d, .sp=0x66, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x3e09, .value=0x28}, {.addr=0x3e0a, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x3e0b, .a=0xda, .x=0x6c, .y=0x1d, .sp=0x66, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3e09, .value=0x28}, {.addr=0x3e0a, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x3e09, .value=0x28, .type=IO_READ},
        {.addr=0x3e0a, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x0c82, .a=0x28, .x=0x36, .y=0x72, .sp=0x4b, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0c82, .value=0x28}, {.addr=0x0c83, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x0c84, .a=0x00, .x=0x36, .y=0x72, .sp=0x4b, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0c82, .value=0x28}, {.addr=0x0c83, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x0c82, .value=0x28, .type=IO_READ},
        {.addr=0x0c83, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x60f4, .a=0xff, .x=0x33, .y=0xd9, .sp=0xda, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x60f4, .value=0x28}, {.addr=0x60f5, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x60f6, .a=0x42, .x=0x33, .y=0xd9, .sp=0xda, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x60f4, .value=0x28}, {.addr=0x60f5, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x60f4, .value=0x28, .type=IO_READ},
        {.addr=0x60f5, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xdfc6, .a=0xfd, .x=0xe7, .y=0x5c, .sp=0xee, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xdfc6, .value=0x28}, {.addr=0xdfc7, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xdfc8, .a=0x79, .x=0xe7, .y=0x5c, .sp=0xee, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xdfc6, .value=0x28}, {.addr=0xdfc7, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xdfc6, .value=0x28, .type=IO_READ},
        {.addr=0xdfc7, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x9406, .a=0xe4, .x=0x26, .y=0x04, .sp=0x7a, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x9406, .value=0x28}, {.addr=0x9407, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x9408, .a=0x40, .x=0x26, .y=0x04, .sp=0x7a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x9406, .value=0x28}, {.addr=0x9407, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x9406, .value=0x28, .type=IO_READ},
        {.addr=0x9407, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x2e8b, .a=0x95, .x=0x5d, .y=0xb4, .sp=0xf3, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x2e8b, .value=0x28}, {.addr=0x2e8c, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x2e8d, .a=0x91, .x=0x5d, .y=0xb4, .sp=0xf3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2e8b, .value=0x28}, {.addr=0x2e8c, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x2e8b, .value=0x28, .type=IO_READ},
        {.addr=0x2e8c, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x1adf, .a=0x51, .x=0x81, .y=0xf7, .sp=0x29, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x1adf, .value=0x28}, {.addr=0x1ae0, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x1ae1, .a=0x41, .x=0x81, .y=0xf7, .sp=0x29, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1adf, .value=0x28}, {.addr=0x1ae0, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x1adf, .value=0x28, .type=IO_READ},
        {.addr=0x1ae0, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xd104, .a=0xc5, .x=0x35, .y=0xd7, .sp=0xb9, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xd104, .value=0x28}, {.addr=0xd105, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xd106, .a=0x81, .x=0x35, .y=0xd7, .sp=0xb9, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xd104, .value=0x28}, {.addr=0xd105, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xd104, .value=0x28, .type=IO_READ},
        {.addr=0xd105, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xbce2, .a=0x0c, .x=0x01, .y=0xc5, .sp=0xf8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xbce2, .value=0x28}, {.addr=0xbce3, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xbce4, .a=0x08, .x=0x01, .y=0xc5, .sp=0xf8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xbce2, .value=0x28}, {.addr=0xbce3, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xbce2, .value=0x28, .type=IO_READ},
        {.addr=0xbce3, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x2829, .a=0xe3, .x=0x4d, .y=0xd5, .sp=0xf8, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x2829, .value=0x28}, {.addr=0x282a, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x282b, .a=0x03, .x=0x4d, .y=0xd5, .sp=0xf8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2829, .value=0x28}, {.addr=0x282a, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x2829, .value=0x28, .type=IO_READ},
        {.addr=0x282a, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xbfa6, .a=0x7b, .x=0xcc, .y=0x02, .sp=0xd1, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xbfa6, .value=0x28}, {.addr=0xbfa7, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xbfa8, .a=0x33, .x=0xcc, .y=0x02, .sp=0xd1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xbfa6, .value=0x28}, {.addr=0xbfa7, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xbfa6, .value=0x28, .type=IO_READ},
        {.addr=0xbfa7, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x1500, .a=0x60, .x=0x58, .y=0x26, .sp=0x28, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x1500, .value=0x28}, {.addr=0x1501, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x1502, .a=0x60, .x=0x58, .y=0x26, .sp=0x28, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x1500, .value=0x28}, {.addr=0x1501, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x1500, .value=0x28, .type=IO_READ},
        {.addr=0x1501, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x8030, .a=0x47, .x=0xf1, .y=0xb3, .sp=0x8d, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x8030, .value=0x28}, {.addr=0x8031, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x8032, .a=0x41, .x=0xf1, .y=0xb3, .sp=0x8d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x8030, .value=0x28}, {.addr=0x8031, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x8030, .value=0x28, .type=IO_READ},
        {.addr=0x8031, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x502a, .a=0xd4, .x=0x29, .y=0x51, .sp=0x94, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x502a, .value=0x28}, {.addr=0x502b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x502c, .a=0xc4, .x=0x29, .y=0x51, .sp=0x94, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x502a, .value=0x28}, {.addr=0x502b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x502a, .value=0x28, .type=IO_READ},
        {.addr=0x502b, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x18cb, .a=0x75, .x=0x6d, .y=0x54, .sp=0xdc, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x18cb, .value=0x28}, {.addr=0x18cc, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x18cd, .a=0x04, .x=0x6d, .y=0x54, .sp=0xdc, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x18cb, .value=0x28}, {.addr=0x18cc, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x18cb, .value=0x28, .type=IO_READ},
        {.addr=0x18cc, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xad63, .a=0x98, .x=0x54, .y=0xd8, .sp=0x85, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xad63, .value=0x28}, {.addr=0xad64, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xad65, .a=0x98, .x=0x54, .y=0xd8, .sp=0x85, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xad63, .value=0x28}, {.addr=0xad64, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xad63, .value=0x28, .type=IO_READ},
        {.addr=0xad64, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xce36, .a=0xae, .x=0x16, .y=0x85, .sp=0xb3, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xce36, .value=0x28}, {.addr=0xce37, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xce38, .a=0x2e, .x=0x16, .y=0x85, .sp=0xb3, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xce36, .value=0x28}, {.addr=0xce37, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xce36, .value=0x28, .type=IO_READ},
        {.addr=0xce37, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xd183, .a=0xee, .x=0x13, .y=0x92, .sp=0x4a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xd183, .value=0x28}, {.addr=0xd184, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xd185, .a=0x8a, .x=0x13, .y=0x92, .sp=0x4a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd183, .value=0x28}, {.addr=0xd184, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xd183, .value=0x28, .type=IO_READ},
        {.addr=0xd184, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x82b4, .a=0x6b, .x=0xa6, .y=0x4b, .sp=0x10, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x82b4, .value=0x28}, {.addr=0x82b5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x82b6, .a=0x4b, .x=0xa6, .y=0x4b, .sp=0x10, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x82b4, .value=0x28}, {.addr=0x82b5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x82b4, .value=0x28, .type=IO_READ},
        {.addr=0x82b5, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x2e7f, .a=0x70, .x=0x9a, .y=0x5b, .sp=0x00, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x2e7f, .value=0x28}, {.addr=0x2e80, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x2e81, .a=0x30, .x=0x9a, .y=0x5b, .sp=0x00, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x2e7f, .value=0x28}, {.addr=0x2e80, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x2e7f, .value=0x28, .type=IO_READ},
        {.addr=0x2e80, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xb9dc, .a=0x1d, .x=0xed, .y=0x75, .sp=0xfe, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xb9dc, .value=0x28}, {.addr=0xb9dd, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xb9de, .a=0x00, .x=0xed, .y=0x75, .sp=0xfe, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xb9dc, .value=0x28}, {.addr=0xb9dd, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xb9dc, .value=0x28, .type=IO_READ},
        {.addr=0xb9dd, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xc001, .a=0xf6, .x=0xb9, .y=0xfa, .sp=0x9c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xc001, .value=0x28}, {.addr=0xc002, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xc003, .a=0x74, .x=0xb9, .y=0xfa, .sp=0x9c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc001, .value=0x28}, {.addr=0xc002, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xc001, .value=0x28, .type=IO_READ},
        {.addr=0xc002, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x6301, .a=0x80, .x=0x45, .y=0x75, .sp=0x2c, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x6301, .value=0x28}, {.addr=0x6302, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6303, .a=0x80, .x=0x45, .y=0x75, .sp=0x2c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6301, .value=0x28}, {.addr=0x6302, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6301, .value=0x28, .type=IO_READ},
        {.addr=0x6302, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x8544, .a=0xee, .x=0xe8, .y=0xe1, .sp=0x7f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x8544, .value=0x28}, {.addr=0x8545, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8546, .a=0x86, .x=0xe8, .y=0xe1, .sp=0x7f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8544, .value=0x28}, {.addr=0x8545, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8544, .value=0x28, .type=IO_READ},
        {.addr=0x8545, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xc1c1, .a=0xc0, .x=0xf2, .y=0x91, .sp=0xf7, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c1, .value=0x28}, {.addr=0xc1c2, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xc1c3, .a=0xc0, .x=0xf2, .y=0x91, .sp=0xf7, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xc1c1, .value=0x28}, {.addr=0xc1c2, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xc1c1, .value=0x28, .type=IO_READ},
        {.addr=0xc1c2, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xe342, .a=0x4a, .x=0xd2, .y=0x9d, .sp=0xc6, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xe342, .value=0x28}, {.addr=0xe343, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe344, .a=0x08, .x=0xd2, .y=0x9d, .sp=0xc6, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe342, .value=0x28}, {.addr=0xe343, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe342, .value=0x28, .type=IO_READ},
        {.addr=0xe343, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x098a, .a=0xff, .x=0x74, .y=0x8a, .sp=0x82, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x098a, .value=0x28}, {.addr=0x098b, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x098c, .a=0xa8, .x=0x74, .y=0x8a, .sp=0x82, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x098a, .value=0x28}, {.addr=0x098b, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x098a, .value=0x28, .type=IO_READ},
        {.addr=0x098b, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x0543, .a=0x84, .x=0x63, .y=0x32, .sp=0x29, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0543, .value=0x28}, {.addr=0x0544, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0545, .a=0x84, .x=0x63, .y=0x32, .sp=0x29, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0543, .value=0x28}, {.addr=0x0544, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0543, .value=0x28, .type=IO_READ},
        {.addr=0x0544, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xbf6f, .a=0x6b, .x=0x8a, .y=0x02, .sp=0x3d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xbf6f, .value=0x28}, {.addr=0xbf70, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xbf71, .a=0x63, .x=0x8a, .y=0x02, .sp=0x3d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xbf6f, .value=0x28}, {.addr=0xbf70, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xbf6f, .value=0x28, .type=IO_READ},
        {.addr=0xbf70, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xd5ba, .a=0x4c, .x=0x3a, .y=0xd8, .sp=0xca, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xd5ba, .value=0x28}, {.addr=0xd5bb, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd5bc, .a=0x04, .x=0x3a, .y=0xd8, .sp=0xca, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd5ba, .value=0x28}, {.addr=0xd5bb, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd5ba, .value=0x28, .type=IO_READ},
        {.addr=0xd5bb, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x7be5, .a=0x2c, .x=0xee, .y=0xc7, .sp=0x15, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x7be5, .value=0x28}, {.addr=0x7be6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x7be7, .a=0x2c, .x=0xee, .y=0xc7, .sp=0x15, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x7be5, .value=0x28}, {.addr=0x7be6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x7be5, .value=0x28, .type=IO_READ},
        {.addr=0x7be6, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xad05, .a=0xb5, .x=0xa7, .y=0xc5, .sp=0x14, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xad05, .value=0x28}, {.addr=0xad06, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xad07, .a=0xb1, .x=0xa7, .y=0xc5, .sp=0x14, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xad05, .value=0x28}, {.addr=0xad06, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xad05, .value=0x28, .type=IO_READ},
        {.addr=0xad06, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xdb60, .a=0x6a, .x=0x49, .y=0x23, .sp=0xa7, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xdb60, .value=0x28}, {.addr=0xdb61, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xdb62, .a=0x40, .x=0x49, .y=0x23, .sp=0xa7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xdb60, .value=0x28}, {.addr=0xdb61, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xdb60, .value=0x28, .type=IO_READ},
        {.addr=0xdb61, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x08b6, .a=0x27, .x=0x78, .y=0xe7, .sp=0x01, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x08b6, .value=0x28}, {.addr=0x08b7, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x08b8, .a=0x20, .x=0x78, .y=0xe7, .sp=0x01, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x08b6, .value=0x28}, {.addr=0x08b7, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x08b6, .value=0x28, .type=IO_READ},
        {.addr=0x08b7, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x420c, .a=0x63, .x=0xcf, .y=0xcb, .sp=0xac, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x420c, .value=0x28}, {.addr=0x420d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x420e, .a=0x41, .x=0xcf, .y=0xcb, .sp=0xac, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x420c, .value=0x28}, {.addr=0x420d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x420c, .value=0x28, .type=IO_READ},
        {.addr=0x420d, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x960f, .a=0x06, .x=0x9b, .y=0x2b, .sp=0x9d, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x960f, .value=0x28}, {.addr=0x9610, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x9611, .a=0x06, .x=0x9b, .y=0x2b, .sp=0x9d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x960f, .value=0x28}, {.addr=0x9610, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x960f, .value=0x28, .type=IO_READ},
        {.addr=0x9610, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x59b4, .a=0x40, .x=0x39, .y=0x11, .sp=0xf3, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x59b4, .value=0x28}, {.addr=0x59b5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x59b6, .a=0x00, .x=0x39, .y=0x11, .sp=0xf3, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x59b4, .value=0x28}, {.addr=0x59b5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x59b4, .value=0x28, .type=IO_READ},
        {.addr=0x59b5, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x9e89, .a=0xf3, .x=0x6f, .y=0x09, .sp=0xa5, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x9e89, .value=0x28}, {.addr=0x9e8a, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x9e8b, .a=0xf2, .x=0x6f, .y=0x09, .sp=0xa5, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x9e89, .value=0x28}, {.addr=0x9e8a, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x9e89, .value=0x28, .type=IO_READ},
        {.addr=0x9e8a, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x6cee, .a=0xb9, .x=0x7b, .y=0xeb, .sp=0xa2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x6cee, .value=0x28}, {.addr=0x6cef, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x6cf0, .a=0x81, .x=0x7b, .y=0xeb, .sp=0xa2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6cee, .value=0x28}, {.addr=0x6cef, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x6cee, .value=0x28, .type=IO_READ},
        {.addr=0x6cef, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x5c2b, .a=0xaa, .x=0x14, .y=0xb0, .sp=0x37, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x5c2b, .value=0x28}, {.addr=0x5c2c, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x5c2d, .a=0x0a, .x=0x14, .y=0xb0, .sp=0x37, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5c2b, .value=0x28}, {.addr=0x5c2c, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x5c2b, .value=0x28, .type=IO_READ},
        {.addr=0x5c2c, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x36eb, .a=0x24, .x=0x09, .y=0x70, .sp=0xa7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x36eb, .value=0x28}, {.addr=0x36ec, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x36ed, .a=0x20, .x=0x09, .y=0x70, .sp=0xa7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x36eb, .value=0x28}, {.addr=0x36ec, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x36eb, .value=0x28, .type=IO_READ},
        {.addr=0x36ec, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x864f, .a=0x77, .x=0xd3, .y=0x72, .sp=0x9e, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x864f, .value=0x28}, {.addr=0x8650, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x8651, .a=0x71, .x=0xd3, .y=0x72, .sp=0x9e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x864f, .value=0x28}, {.addr=0x8650, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x864f, .value=0x28, .type=IO_READ},
        {.addr=0x8650, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x16d6, .a=0xb6, .x=0x5e, .y=0xb7, .sp=0x7a, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x16d6, .value=0x28}, {.addr=0x16d7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x16d8, .a=0x94, .x=0x5e, .y=0xb7, .sp=0x7a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x16d6, .value=0x28}, {.addr=0x16d7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x16d6, .value=0x28, .type=IO_READ},
        {.addr=0x16d7, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xe9a6, .a=0xa6, .x=0x52, .y=0x7d, .sp=0xc9, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xe9a6, .value=0x28}, {.addr=0xe9a7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe9a8, .a=0x86, .x=0x52, .y=0x7d, .sp=0xc9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe9a6, .value=0x28}, {.addr=0xe9a7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe9a6, .value=0x28, .type=IO_READ},
        {.addr=0xe9a7, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x8cee, .a=0xfb, .x=0x52, .y=0x5a, .sp=0x84, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x8cee, .value=0x28}, {.addr=0x8cef, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x8cf0, .a=0xeb, .x=0x52, .y=0x5a, .sp=0x84, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x8cee, .value=0x28}, {.addr=0x8cef, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x8cee, .value=0x28, .type=IO_READ},
        {.addr=0x8cef, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x12d4, .a=0x04, .x=0x47, .y=0x14, .sp=0x57, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x12d4, .value=0x28}, {.addr=0x12d5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x12d6, .a=0x04, .x=0x47, .y=0x14, .sp=0x57, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x12d4, .value=0x28}, {.addr=0x12d5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x12d4, .value=0x28, .type=IO_READ},
        {.addr=0x12d5, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x95c6, .a=0xaf, .x=0x03, .y=0xc6, .sp=0xef, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x95c6, .value=0x28}, {.addr=0x95c7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x95c8, .a=0x20, .x=0x03, .y=0xc6, .sp=0xef, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x95c6, .value=0x28}, {.addr=0x95c7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x95c6, .value=0x28, .type=IO_READ},
        {.addr=0x95c7, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xef9b, .a=0xe9, .x=0xa7, .y=0x1f, .sp=0xee, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xef9b, .value=0x28}, {.addr=0xef9c, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xef9d, .a=0xa9, .x=0xa7, .y=0x1f, .sp=0xee, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xef9b, .value=0x28}, {.addr=0xef9c, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xef9b, .value=0x28, .type=IO_READ},
        {.addr=0xef9c, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xfe11, .a=0x90, .x=0x66, .y=0x29, .sp=0xf2, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xfe11, .value=0x28}, {.addr=0xfe12, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xfe13, .a=0x80, .x=0x66, .y=0x29, .sp=0xf2, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xfe11, .value=0x28}, {.addr=0xfe12, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xfe11, .value=0x28, .type=IO_READ},
        {.addr=0xfe12, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xd79f, .a=0x20, .x=0x2e, .y=0xaa, .sp=0xfa, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xd79f, .value=0x28}, {.addr=0xd7a0, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd7a1, .a=0x20, .x=0x2e, .y=0xaa, .sp=0xfa, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xd79f, .value=0x28}, {.addr=0xd7a0, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd79f, .value=0x28, .type=IO_READ},
        {.addr=0xd7a0, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x2df0, .a=0x7b, .x=0x17, .y=0x1d, .sp=0x51, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x2df0, .value=0x28}, {.addr=0x2df1, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x2df2, .a=0x5a, .x=0x17, .y=0x1d, .sp=0x51, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x2df0, .value=0x28}, {.addr=0x2df1, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x2df0, .value=0x28, .type=IO_READ},
        {.addr=0x2df1, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xdd4e, .a=0x1f, .x=0xf4, .y=0x9e, .sp=0xc6, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xdd4e, .value=0x28}, {.addr=0xdd4f, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xdd50, .a=0x19, .x=0xf4, .y=0x9e, .sp=0xc6, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xdd4e, .value=0x28}, {.addr=0xdd4f, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xdd4e, .value=0x28, .type=IO_READ},
        {.addr=0xdd4f, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x5980, .a=0x55, .x=0x56, .y=0x8a, .sp=0xd7, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x5980, .value=0x28}, {.addr=0x5981, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x5982, .a=0x01, .x=0x56, .y=0x8a, .sp=0xd7, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x5980, .value=0x28}, {.addr=0x5981, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x5980, .value=0x28, .type=IO_READ},
        {.addr=0x5981, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x3866, .a=0xe8, .x=0xbb, .y=0xa7, .sp=0x5b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x3866, .value=0x28}, {.addr=0x3867, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x3868, .a=0x60, .x=0xbb, .y=0xa7, .sp=0x5b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3866, .value=0x28}, {.addr=0x3867, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x3866, .value=0x28, .type=IO_READ},
        {.addr=0x3867, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x5a18, .a=0xe1, .x=0x95, .y=0x7d, .sp=0x32, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x5a18, .value=0x28}, {.addr=0x5a19, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x5a1a, .a=0xe1, .x=0x95, .y=0x7d, .sp=0x32, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5a18, .value=0x28}, {.addr=0x5a19, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x5a18, .value=0x28, .type=IO_READ},
        {.addr=0x5a19, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xa253, .a=0x89, .x=0xb5, .y=0x81, .sp=0xdf, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xa253, .value=0x28}, {.addr=0xa254, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xa255, .a=0x89, .x=0xb5, .y=0x81, .sp=0xdf, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa253, .value=0x28}, {.addr=0xa254, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xa253, .value=0x28, .type=IO_READ},
        {.addr=0xa254, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xb29e, .a=0x2a, .x=0x8b, .y=0x20, .sp=0x6b, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xb29e, .value=0x28}, {.addr=0xb29f, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xb2a0, .a=0x20, .x=0x8b, .y=0x20, .sp=0x6b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb29e, .value=0x28}, {.addr=0xb29f, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xb29e, .value=0x28, .type=IO_READ},
        {.addr=0xb29f, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xee59, .a=0x5d, .x=0xfc, .y=0xd3, .sp=0x3e, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xee59, .value=0x28}, {.addr=0xee5a, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xee5b, .a=0x0c, .x=0xfc, .y=0xd3, .sp=0x3e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xee59, .value=0x28}, {.addr=0xee5a, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xee59, .value=0x28, .type=IO_READ},
        {.addr=0xee5a, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x3dad, .a=0x7c, .x=0x4f, .y=0x0f, .sp=0xc5, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x3dad, .value=0x28}, {.addr=0x3dae, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x3daf, .a=0x74, .x=0x4f, .y=0x0f, .sp=0xc5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3dad, .value=0x28}, {.addr=0x3dae, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x3dad, .value=0x28, .type=IO_READ},
        {.addr=0x3dae, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xa0ab, .a=0x92, .x=0xb4, .y=0x98, .sp=0x3c, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ab, .value=0x28}, {.addr=0xa0ac, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xa0ad, .a=0x82, .x=0xb4, .y=0x98, .sp=0x3c, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa0ab, .value=0x28}, {.addr=0xa0ac, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xa0ab, .value=0x28, .type=IO_READ},
        {.addr=0xa0ac, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xe538, .a=0x89, .x=0x9a, .y=0xa2, .sp=0xe2, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xe538, .value=0x28}, {.addr=0xe539, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xe53a, .a=0x01, .x=0x9a, .y=0xa2, .sp=0xe2, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe538, .value=0x28}, {.addr=0xe539, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xe538, .value=0x28, .type=IO_READ},
        {.addr=0xe539, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x3432, .a=0x1e, .x=0x9e, .y=0x6e, .sp=0xbb, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x3432, .value=0x28}, {.addr=0x3433, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x3434, .a=0x0c, .x=0x9e, .y=0x6e, .sp=0xbb, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3432, .value=0x28}, {.addr=0x3433, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x3432, .value=0x28, .type=IO_READ},
        {.addr=0x3433, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x0a66, .a=0x49, .x=0x8b, .y=0x67, .sp=0xba, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0a66, .value=0x28}, {.addr=0x0a67, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x0a68, .a=0x40, .x=0x8b, .y=0x67, .sp=0xba, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0a66, .value=0x28}, {.addr=0x0a67, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x0a66, .value=0x28, .type=IO_READ},
        {.addr=0x0a67, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x7f40, .a=0x7e, .x=0x7d, .y=0xd0, .sp=0x67, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x7f40, .value=0x28}, {.addr=0x7f41, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x7f42, .a=0x10, .x=0x7d, .y=0xd0, .sp=0x67, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7f40, .value=0x28}, {.addr=0x7f41, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x7f40, .value=0x28, .type=IO_READ},
        {.addr=0x7f41, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xf641, .a=0x1e, .x=0xe5, .y=0xe2, .sp=0x16, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xf641, .value=0x28}, {.addr=0xf642, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xf643, .a=0x1a, .x=0xe5, .y=0xe2, .sp=0x16, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xf641, .value=0x28}, {.addr=0xf642, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xf641, .value=0x28, .type=IO_READ},
        {.addr=0xf642, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x04cd, .a=0xdd, .x=0x66, .y=0xf9, .sp=0xb2, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x04cd, .value=0x28}, {.addr=0x04ce, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x04cf, .a=0x88, .x=0x66, .y=0xf9, .sp=0xb2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x04cd, .value=0x28}, {.addr=0x04ce, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x04cd, .value=0x28, .type=IO_READ},
        {.addr=0x04ce, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xe22c, .a=0x72, .x=0xde, .y=0xb9, .sp=0x5d, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xe22c, .value=0x28}, {.addr=0xe22d, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xe22e, .a=0x52, .x=0xde, .y=0xb9, .sp=0x5d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe22c, .value=0x28}, {.addr=0xe22d, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xe22c, .value=0x28, .type=IO_READ},
        {.addr=0xe22d, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x7517, .a=0x9b, .x=0xac, .y=0xaa, .sp=0x20, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7517, .value=0x28}, {.addr=0x7518, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7519, .a=0x82, .x=0xac, .y=0xaa, .sp=0x20, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x7517, .value=0x28}, {.addr=0x7518, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7517, .value=0x28, .type=IO_READ},
        {.addr=0x7518, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xee79, .a=0xfe, .x=0xfa, .y=0xdb, .sp=0x0e, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xee79, .value=0x28}, {.addr=0xee7a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xee7b, .a=0x40, .x=0xfa, .y=0xdb, .sp=0x0e, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xee79, .value=0x28}, {.addr=0xee7a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xee79, .value=0x28, .type=IO_READ},
        {.addr=0xee7a, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xc3f4, .a=0x03, .x=0x61, .y=0x14, .sp=0xbf, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xc3f4, .value=0x28}, {.addr=0xc3f5, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xc3f6, .a=0x02, .x=0x61, .y=0x14, .sp=0xbf, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc3f4, .value=0x28}, {.addr=0xc3f5, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xc3f4, .value=0x28, .type=IO_READ},
        {.addr=0xc3f5, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xb5db, .a=0x97, .x=0x41, .y=0x30, .sp=0x1c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xb5db, .value=0x28}, {.addr=0xb5dc, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xb5dd, .a=0x96, .x=0x41, .y=0x30, .sp=0x1c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb5db, .value=0x28}, {.addr=0xb5dc, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xb5db, .value=0x28, .type=IO_READ},
        {.addr=0xb5dc, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xf67b, .a=0xf4, .x=0xd7, .y=0x8a, .sp=0x40, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xf67b, .value=0x28}, {.addr=0xf67c, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xf67d, .a=0xb4, .x=0xd7, .y=0x8a, .sp=0x40, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xf67b, .value=0x28}, {.addr=0xf67c, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xf67b, .value=0x28, .type=IO_READ},
        {.addr=0xf67c, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x0eba, .a=0xd5, .x=0x47, .y=0x7c, .sp=0x1d, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0eba, .value=0x28}, {.addr=0x0ebb, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x0ebc, .a=0x01, .x=0x47, .y=0x7c, .sp=0x1d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0eba, .value=0x28}, {.addr=0x0ebb, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x0eba, .value=0x28, .type=IO_READ},
        {.addr=0x0ebb, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x2939, .a=0x9c, .x=0x2c, .y=0x8d, .sp=0x02, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x2939, .value=0x28}, {.addr=0x293a, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x293b, .a=0x08, .x=0x2c, .y=0x8d, .sp=0x02, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x2939, .value=0x28}, {.addr=0x293a, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x2939, .value=0x28, .type=IO_READ},
        {.addr=0x293a, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x4d9c, .a=0x28, .x=0xcf, .y=0x32, .sp=0xc4, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x4d9c, .value=0x28}, {.addr=0x4d9d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4d9e, .a=0x28, .x=0xcf, .y=0x32, .sp=0xc4, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4d9c, .value=0x28}, {.addr=0x4d9d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4d9c, .value=0x28, .type=IO_READ},
        {.addr=0x4d9d, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xf5f4, .a=0x9f, .x=0x3b, .y=0xed, .sp=0x4d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xf5f4, .value=0x28}, {.addr=0xf5f5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf5f6, .a=0x9d, .x=0x3b, .y=0xed, .sp=0x4d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xf5f4, .value=0x28}, {.addr=0xf5f5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf5f4, .value=0x28, .type=IO_READ},
        {.addr=0xf5f5, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x8e53, .a=0x90, .x=0x9a, .y=0x40, .sp=0x5c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x8e53, .value=0x28}, {.addr=0x8e54, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x8e55, .a=0x80, .x=0x9a, .y=0x40, .sp=0x5c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8e53, .value=0x28}, {.addr=0x8e54, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x8e53, .value=0x28, .type=IO_READ},
        {.addr=0x8e54, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xf7bc, .a=0xeb, .x=0xea, .y=0xa1, .sp=0xaf, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xf7bc, .value=0x28}, {.addr=0xf7bd, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xf7be, .a=0xc9, .x=0xea, .y=0xa1, .sp=0xaf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf7bc, .value=0x28}, {.addr=0xf7bd, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xf7bc, .value=0x28, .type=IO_READ},
        {.addr=0xf7bd, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xa31a, .a=0x60, .x=0x05, .y=0xe1, .sp=0x20, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xa31a, .value=0x28}, {.addr=0xa31b, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xa31c, .a=0x40, .x=0x05, .y=0xe1, .sp=0x20, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa31a, .value=0x28}, {.addr=0xa31b, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xa31a, .value=0x28, .type=IO_READ},
        {.addr=0xa31b, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x3a1a, .a=0x25, .x=0x7d, .y=0x0c, .sp=0x70, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x3a1a, .value=0x28}, {.addr=0x3a1b, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x3a1c, .a=0x21, .x=0x7d, .y=0x0c, .sp=0x70, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x3a1a, .value=0x28}, {.addr=0x3a1b, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x3a1a, .value=0x28, .type=IO_READ},
        {.addr=0x3a1b, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xf1ac, .a=0xf7, .x=0x51, .y=0xaa, .sp=0x74, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xf1ac, .value=0x28}, {.addr=0xf1ad, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xf1ae, .a=0x65, .x=0x51, .y=0xaa, .sp=0x74, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf1ac, .value=0x28}, {.addr=0xf1ad, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xf1ac, .value=0x28, .type=IO_READ},
        {.addr=0xf1ad, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xb24c, .a=0x01, .x=0x1b, .y=0x58, .sp=0x2e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xb24c, .value=0x28}, {.addr=0xb24d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb24e, .a=0x00, .x=0x1b, .y=0x58, .sp=0x2e, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xb24c, .value=0x28}, {.addr=0xb24d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb24c, .value=0x28, .type=IO_READ},
        {.addr=0xb24d, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xb3df, .a=0xde, .x=0xbc, .y=0x06, .sp=0xfc, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xb3df, .value=0x28}, {.addr=0xb3e0, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xb3e1, .a=0x8c, .x=0xbc, .y=0x06, .sp=0xfc, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb3df, .value=0x28}, {.addr=0xb3e0, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xb3df, .value=0x28, .type=IO_READ},
        {.addr=0xb3e0, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xd014, .a=0x51, .x=0x39, .y=0xb8, .sp=0x37, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xd014, .value=0x28}, {.addr=0xd015, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xd016, .a=0x10, .x=0x39, .y=0xb8, .sp=0x37, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd014, .value=0x28}, {.addr=0xd015, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xd014, .value=0x28, .type=IO_READ},
        {.addr=0xd015, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xb03f, .a=0xe2, .x=0x4e, .y=0x8a, .sp=0xbc, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xb03f, .value=0x28}, {.addr=0xb040, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb041, .a=0xe0, .x=0x4e, .y=0x8a, .sp=0xbc, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb03f, .value=0x28}, {.addr=0xb040, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb03f, .value=0x28, .type=IO_READ},
        {.addr=0xb040, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x74e3, .a=0x33, .x=0x28, .y=0x41, .sp=0x36, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x74e3, .value=0x28}, {.addr=0x74e4, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x74e5, .a=0x11, .x=0x28, .y=0x41, .sp=0x36, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x74e3, .value=0x28}, {.addr=0x74e4, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x74e3, .value=0x28, .type=IO_READ},
        {.addr=0x74e4, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xe51f, .a=0x24, .x=0xee, .y=0xfa, .sp=0xe5, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xe51f, .value=0x28}, {.addr=0xe520, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xe521, .a=0x04, .x=0xee, .y=0xfa, .sp=0xe5, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xe51f, .value=0x28}, {.addr=0xe520, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xe51f, .value=0x28, .type=IO_READ},
        {.addr=0xe520, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0100) {
    const struct CPU_State initial_cpu = {.pc=0x8f8a, .a=0x12, .x=0xee, .y=0x9f, .sp=0x75, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x8f8a, .value=0x28}, {.addr=0x8f8b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8f8c, .a=0x00, .x=0xee, .y=0x9f, .sp=0x75, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x8f8a, .value=0x28}, {.addr=0x8f8b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8f8a, .value=0x28, .type=IO_READ},
        {.addr=0x8f8b, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0101) {
    const struct CPU_State initial_cpu = {.pc=0x54c7, .a=0x0f, .x=0x08, .y=0xb2, .sp=0xea, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x54c7, .value=0x28}, {.addr=0x54c8, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x54c9, .a=0x0b, .x=0x08, .y=0xb2, .sp=0xea, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x54c7, .value=0x28}, {.addr=0x54c8, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x54c7, .value=0x28, .type=IO_READ},
        {.addr=0x54c8, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0102) {
    const struct CPU_State initial_cpu = {.pc=0xab69, .a=0xd5, .x=0x11, .y=0xf9, .sp=0x9e, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xab69, .value=0x28}, {.addr=0xab6a, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xab6b, .a=0xd1, .x=0x11, .y=0xf9, .sp=0x9e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xab69, .value=0x28}, {.addr=0xab6a, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xab69, .value=0x28, .type=IO_READ},
        {.addr=0xab6a, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0103) {
    const struct CPU_State initial_cpu = {.pc=0x6e70, .a=0x0e, .x=0x4e, .y=0x79, .sp=0xc4, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x6e70, .value=0x28}, {.addr=0x6e71, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x6e72, .a=0x06, .x=0x4e, .y=0x79, .sp=0xc4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6e70, .value=0x28}, {.addr=0x6e71, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x6e70, .value=0x28, .type=IO_READ},
        {.addr=0x6e71, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0104) {
    const struct CPU_State initial_cpu = {.pc=0x2c61, .a=0xc5, .x=0x4a, .y=0x75, .sp=0x03, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x2c61, .value=0x28}, {.addr=0x2c62, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2c63, .a=0x85, .x=0x4a, .y=0x75, .sp=0x03, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2c61, .value=0x28}, {.addr=0x2c62, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2c61, .value=0x28, .type=IO_READ},
        {.addr=0x2c62, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0105) {
    const struct CPU_State initial_cpu = {.pc=0xe902, .a=0xc9, .x=0x8d, .y=0xef, .sp=0x03, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xe902, .value=0x28}, {.addr=0xe903, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xe904, .a=0x89, .x=0x8d, .y=0xef, .sp=0x03, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xe902, .value=0x28}, {.addr=0xe903, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xe902, .value=0x28, .type=IO_READ},
        {.addr=0xe903, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0106) {
    const struct CPU_State initial_cpu = {.pc=0xdb03, .a=0x41, .x=0x04, .y=0xa3, .sp=0x9e, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xdb03, .value=0x28}, {.addr=0xdb04, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xdb05, .a=0x41, .x=0x04, .y=0xa3, .sp=0x9e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xdb03, .value=0x28}, {.addr=0xdb04, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xdb03, .value=0x28, .type=IO_READ},
        {.addr=0xdb04, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0107) {
    const struct CPU_State initial_cpu = {.pc=0xd6d5, .a=0x9f, .x=0x3a, .y=0x24, .sp=0x03, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d5, .value=0x28}, {.addr=0xd6d6, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xd6d7, .a=0x84, .x=0x3a, .y=0x24, .sp=0x03, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd6d5, .value=0x28}, {.addr=0xd6d6, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xd6d5, .value=0x28, .type=IO_READ},
        {.addr=0xd6d6, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0108) {
    const struct CPU_State initial_cpu = {.pc=0x392d, .a=0xcb, .x=0xb7, .y=0x56, .sp=0x2e, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x392d, .value=0x28}, {.addr=0x392e, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x392f, .a=0x8a, .x=0xb7, .y=0x56, .sp=0x2e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x392d, .value=0x28}, {.addr=0x392e, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x392d, .value=0x28, .type=IO_READ},
        {.addr=0x392e, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0109) {
    const struct CPU_State initial_cpu = {.pc=0xa44f, .a=0x42, .x=0x2c, .y=0x92, .sp=0x6c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xa44f, .value=0x28}, {.addr=0xa450, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xa451, .a=0x42, .x=0x2c, .y=0x92, .sp=0x6c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa44f, .value=0x28}, {.addr=0xa450, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xa44f, .value=0x28, .type=IO_READ},
        {.addr=0xa450, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_010A) {
    const struct CPU_State initial_cpu = {.pc=0x8787, .a=0x18, .x=0xb7, .y=0x4f, .sp=0xde, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x8787, .value=0x28}, {.addr=0x8788, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x8789, .a=0x18, .x=0xb7, .y=0x4f, .sp=0xde, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8787, .value=0x28}, {.addr=0x8788, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x8787, .value=0x28, .type=IO_READ},
        {.addr=0x8788, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_010B) {
    const struct CPU_State initial_cpu = {.pc=0xc81d, .a=0xcf, .x=0xad, .y=0xb4, .sp=0xa4, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xc81d, .value=0x28}, {.addr=0xc81e, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xc81f, .a=0x49, .x=0xad, .y=0xb4, .sp=0xa4, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xc81d, .value=0x28}, {.addr=0xc81e, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xc81d, .value=0x28, .type=IO_READ},
        {.addr=0xc81e, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_010C) {
    const struct CPU_State initial_cpu = {.pc=0xcc70, .a=0xd1, .x=0x8e, .y=0xd6, .sp=0x8b, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xcc70, .value=0x28}, {.addr=0xcc71, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xcc72, .a=0x00, .x=0x8e, .y=0xd6, .sp=0x8b, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xcc70, .value=0x28}, {.addr=0xcc71, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xcc70, .value=0x28, .type=IO_READ},
        {.addr=0xcc71, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_010D) {
    const struct CPU_State initial_cpu = {.pc=0x4bec, .a=0x21, .x=0x54, .y=0xf9, .sp=0x47, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x4bec, .value=0x28}, {.addr=0x4bed, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x4bee, .a=0x21, .x=0x54, .y=0xf9, .sp=0x47, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4bec, .value=0x28}, {.addr=0x4bed, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x4bec, .value=0x28, .type=IO_READ},
        {.addr=0x4bed, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_010E) {
    const struct CPU_State initial_cpu = {.pc=0x0aa3, .a=0x28, .x=0x2d, .y=0xd1, .sp=0xa4, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0aa3, .value=0x28}, {.addr=0x0aa4, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x0aa5, .a=0x20, .x=0x2d, .y=0xd1, .sp=0xa4, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0aa3, .value=0x28}, {.addr=0x0aa4, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x0aa3, .value=0x28, .type=IO_READ},
        {.addr=0x0aa4, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_010F) {
    const struct CPU_State initial_cpu = {.pc=0x3336, .a=0xbf, .x=0xc9, .y=0x8a, .sp=0x2c, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x3336, .value=0x28}, {.addr=0x3337, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x3338, .a=0xb7, .x=0xc9, .y=0x8a, .sp=0x2c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x3336, .value=0x28}, {.addr=0x3337, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x3336, .value=0x28, .type=IO_READ},
        {.addr=0x3337, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0110) {
    const struct CPU_State initial_cpu = {.pc=0xa6e0, .a=0xc5, .x=0x72, .y=0x0f, .sp=0x9b, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xa6e0, .value=0x28}, {.addr=0xa6e1, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xa6e2, .a=0x85, .x=0x72, .y=0x0f, .sp=0x9b, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa6e0, .value=0x28}, {.addr=0xa6e1, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xa6e0, .value=0x28, .type=IO_READ},
        {.addr=0xa6e1, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0111) {
    const struct CPU_State initial_cpu = {.pc=0xc8bc, .a=0x2a, .x=0x91, .y=0x47, .sp=0xfb, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xc8bc, .value=0x28}, {.addr=0xc8bd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc8be, .a=0x08, .x=0x91, .y=0x47, .sp=0xfb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xc8bc, .value=0x28}, {.addr=0xc8bd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc8bc, .value=0x28, .type=IO_READ},
        {.addr=0xc8bd, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0112) {
    const struct CPU_State initial_cpu = {.pc=0x3c82, .a=0x5c, .x=0x59, .y=0x48, .sp=0x6c, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x3c82, .value=0x28}, {.addr=0x3c83, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3c84, .a=0x4c, .x=0x59, .y=0x48, .sp=0x6c, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3c82, .value=0x28}, {.addr=0x3c83, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3c82, .value=0x28, .type=IO_READ},
        {.addr=0x3c83, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0113) {
    const struct CPU_State initial_cpu = {.pc=0x3efc, .a=0x31, .x=0xc6, .y=0x3f, .sp=0xd2, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x3efc, .value=0x28}, {.addr=0x3efd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3efe, .a=0x10, .x=0xc6, .y=0x3f, .sp=0xd2, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3efc, .value=0x28}, {.addr=0x3efd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3efc, .value=0x28, .type=IO_READ},
        {.addr=0x3efd, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0114) {
    const struct CPU_State initial_cpu = {.pc=0x00b7, .a=0x97, .x=0x8e, .y=0x55, .sp=0xbe, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x28}, {.addr=0x00b8, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x00b9, .a=0x17, .x=0x8e, .y=0x55, .sp=0xbe, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x28}, {.addr=0x00b8, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x00b7, .value=0x28, .type=IO_READ},
        {.addr=0x00b8, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0115) {
    const struct CPU_State initial_cpu = {.pc=0x8d0f, .a=0x71, .x=0x8c, .y=0x19, .sp=0x2c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x8d0f, .value=0x28}, {.addr=0x8d10, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x8d11, .a=0x51, .x=0x8c, .y=0x19, .sp=0x2c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8d0f, .value=0x28}, {.addr=0x8d10, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x8d0f, .value=0x28, .type=IO_READ},
        {.addr=0x8d10, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0116) {
    const struct CPU_State initial_cpu = {.pc=0xbd31, .a=0x81, .x=0x3a, .y=0xf8, .sp=0x17, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xbd31, .value=0x28}, {.addr=0xbd32, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xbd33, .a=0x81, .x=0x3a, .y=0xf8, .sp=0x17, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xbd31, .value=0x28}, {.addr=0xbd32, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xbd31, .value=0x28, .type=IO_READ},
        {.addr=0xbd32, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0117) {
    const struct CPU_State initial_cpu = {.pc=0x25f0, .a=0x35, .x=0x7a, .y=0x9e, .sp=0xca, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x25f0, .value=0x28}, {.addr=0x25f1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x25f2, .a=0x15, .x=0x7a, .y=0x9e, .sp=0xca, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x25f0, .value=0x28}, {.addr=0x25f1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x25f0, .value=0x28, .type=IO_READ},
        {.addr=0x25f1, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0118) {
    const struct CPU_State initial_cpu = {.pc=0x361c, .a=0xbe, .x=0x69, .y=0x38, .sp=0xf3, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x361c, .value=0x28}, {.addr=0x361d, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x361e, .a=0x36, .x=0x69, .y=0x38, .sp=0xf3, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x361c, .value=0x28}, {.addr=0x361d, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x361c, .value=0x28, .type=IO_READ},
        {.addr=0x361d, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0119) {
    const struct CPU_State initial_cpu = {.pc=0xf79c, .a=0x02, .x=0xa5, .y=0x18, .sp=0x30, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xf79c, .value=0x28}, {.addr=0xf79d, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xf79e, .a=0x02, .x=0xa5, .y=0x18, .sp=0x30, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xf79c, .value=0x28}, {.addr=0xf79d, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xf79c, .value=0x28, .type=IO_READ},
        {.addr=0xf79d, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_011A) {
    const struct CPU_State initial_cpu = {.pc=0x79fc, .a=0x69, .x=0x41, .y=0x73, .sp=0x3d, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x79fc, .value=0x28}, {.addr=0x79fd, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x79fe, .a=0x20, .x=0x41, .y=0x73, .sp=0x3d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x79fc, .value=0x28}, {.addr=0x79fd, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x79fc, .value=0x28, .type=IO_READ},
        {.addr=0x79fd, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_011B) {
    const struct CPU_State initial_cpu = {.pc=0x335a, .a=0x14, .x=0xac, .y=0x24, .sp=0xd5, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x335a, .value=0x28}, {.addr=0x335b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x335c, .a=0x04, .x=0xac, .y=0x24, .sp=0xd5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x335a, .value=0x28}, {.addr=0x335b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x335a, .value=0x28, .type=IO_READ},
        {.addr=0x335b, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_011C) {
    const struct CPU_State initial_cpu = {.pc=0x6234, .a=0xea, .x=0x96, .y=0x20, .sp=0xde, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x6234, .value=0x28}, {.addr=0x6235, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x6236, .a=0x42, .x=0x96, .y=0x20, .sp=0xde, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6234, .value=0x28}, {.addr=0x6235, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x6234, .value=0x28, .type=IO_READ},
        {.addr=0x6235, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_011D) {
    const struct CPU_State initial_cpu = {.pc=0x02a9, .a=0x60, .x=0x9a, .y=0x78, .sp=0xa6, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x02a9, .value=0x28}, {.addr=0x02aa, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x02ab, .a=0x00, .x=0x9a, .y=0x78, .sp=0xa6, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x02a9, .value=0x28}, {.addr=0x02aa, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x02a9, .value=0x28, .type=IO_READ},
        {.addr=0x02aa, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_011E) {
    const struct CPU_State initial_cpu = {.pc=0x2f62, .a=0x48, .x=0x51, .y=0x27, .sp=0x0a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x2f62, .value=0x28}, {.addr=0x2f63, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x2f64, .a=0x00, .x=0x51, .y=0x27, .sp=0x0a, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x2f62, .value=0x28}, {.addr=0x2f63, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x2f62, .value=0x28, .type=IO_READ},
        {.addr=0x2f63, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_011F) {
    const struct CPU_State initial_cpu = {.pc=0xd116, .a=0xad, .x=0x99, .y=0x75, .sp=0xec, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xd116, .value=0x28}, {.addr=0xd117, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd118, .a=0xac, .x=0x99, .y=0x75, .sp=0xec, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd116, .value=0x28}, {.addr=0xd117, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd116, .value=0x28, .type=IO_READ},
        {.addr=0xd117, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0120) {
    const struct CPU_State initial_cpu = {.pc=0xfa73, .a=0xb2, .x=0xb7, .y=0x63, .sp=0x8f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xfa73, .value=0x28}, {.addr=0xfa74, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xfa75, .a=0x80, .x=0xb7, .y=0x63, .sp=0x8f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xfa73, .value=0x28}, {.addr=0xfa74, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xfa73, .value=0x28, .type=IO_READ},
        {.addr=0xfa74, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0121) {
    const struct CPU_State initial_cpu = {.pc=0x02bb, .a=0xf0, .x=0x17, .y=0x39, .sp=0x00, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x02bb, .value=0x28}, {.addr=0x02bc, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x02bd, .a=0x90, .x=0x17, .y=0x39, .sp=0x00, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x02bb, .value=0x28}, {.addr=0x02bc, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x02bb, .value=0x28, .type=IO_READ},
        {.addr=0x02bc, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0122) {
    const struct CPU_State initial_cpu = {.pc=0x6bb5, .a=0x47, .x=0xd3, .y=0xef, .sp=0x2b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x6bb5, .value=0x28}, {.addr=0x6bb6, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x6bb7, .a=0x42, .x=0xd3, .y=0xef, .sp=0x2b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6bb5, .value=0x28}, {.addr=0x6bb6, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x6bb5, .value=0x28, .type=IO_READ},
        {.addr=0x6bb6, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0123) {
    const struct CPU_State initial_cpu = {.pc=0x8b16, .a=0x6a, .x=0x03, .y=0x4f, .sp=0xb8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x8b16, .value=0x28}, {.addr=0x8b17, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x8b18, .a=0x08, .x=0x03, .y=0x4f, .sp=0xb8, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x8b16, .value=0x28}, {.addr=0x8b17, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x8b16, .value=0x28, .type=IO_READ},
        {.addr=0x8b17, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0124) {
    const struct CPU_State initial_cpu = {.pc=0xddc8, .a=0x0d, .x=0xdd, .y=0xd9, .sp=0xdd, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xddc8, .value=0x28}, {.addr=0xddc9, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xddca, .a=0x09, .x=0xdd, .y=0xd9, .sp=0xdd, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xddc8, .value=0x28}, {.addr=0xddc9, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xddc8, .value=0x28, .type=IO_READ},
        {.addr=0xddc9, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0125) {
    const struct CPU_State initial_cpu = {.pc=0xb701, .a=0x06, .x=0xe6, .y=0xe5, .sp=0xfe, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xb701, .value=0x28}, {.addr=0xb702, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xb703, .a=0x00, .x=0xe6, .y=0xe5, .sp=0xfe, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xb701, .value=0x28}, {.addr=0xb702, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xb701, .value=0x28, .type=IO_READ},
        {.addr=0xb702, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0126) {
    const struct CPU_State initial_cpu = {.pc=0xd9ae, .a=0x15, .x=0xc6, .y=0x73, .sp=0xcc, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ae, .value=0x28}, {.addr=0xd9af, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xd9b0, .a=0x10, .x=0xc6, .y=0x73, .sp=0xcc, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd9ae, .value=0x28}, {.addr=0xd9af, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xd9ae, .value=0x28, .type=IO_READ},
        {.addr=0xd9af, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0127) {
    const struct CPU_State initial_cpu = {.pc=0x0875, .a=0x78, .x=0x6e, .y=0x8b, .sp=0x5d, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0875, .value=0x28}, {.addr=0x0876, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x0877, .a=0x68, .x=0x6e, .y=0x8b, .sp=0x5d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0875, .value=0x28}, {.addr=0x0876, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x0875, .value=0x28, .type=IO_READ},
        {.addr=0x0876, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0128) {
    const struct CPU_State initial_cpu = {.pc=0xe6e9, .a=0x60, .x=0xc5, .y=0xd6, .sp=0xc7, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xe6e9, .value=0x28}, {.addr=0xe6ea, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xe6eb, .a=0x20, .x=0xc5, .y=0xd6, .sp=0xc7, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe6e9, .value=0x28}, {.addr=0xe6ea, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xe6e9, .value=0x28, .type=IO_READ},
        {.addr=0xe6ea, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0129) {
    const struct CPU_State initial_cpu = {.pc=0x7304, .a=0x9f, .x=0xa4, .y=0x44, .sp=0x3c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x7304, .value=0x28}, {.addr=0x7305, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x7306, .a=0x01, .x=0xa4, .y=0x44, .sp=0x3c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x7304, .value=0x28}, {.addr=0x7305, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x7304, .value=0x28, .type=IO_READ},
        {.addr=0x7305, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_012A) {
    const struct CPU_State initial_cpu = {.pc=0x29c5, .a=0x71, .x=0x94, .y=0x26, .sp=0x60, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x29c5, .value=0x28}, {.addr=0x29c6, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x29c7, .a=0x01, .x=0x94, .y=0x26, .sp=0x60, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x29c5, .value=0x28}, {.addr=0x29c6, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x29c5, .value=0x28, .type=IO_READ},
        {.addr=0x29c6, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_012B) {
    const struct CPU_State initial_cpu = {.pc=0xf984, .a=0xf9, .x=0x3a, .y=0x3b, .sp=0x9b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xf984, .value=0x28}, {.addr=0xf985, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xf986, .a=0x11, .x=0x3a, .y=0x3b, .sp=0x9b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf984, .value=0x28}, {.addr=0xf985, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xf984, .value=0x28, .type=IO_READ},
        {.addr=0xf985, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_012C) {
    const struct CPU_State initial_cpu = {.pc=0xbb3e, .a=0x33, .x=0x63, .y=0x49, .sp=0x6f, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xbb3e, .value=0x28}, {.addr=0xbb3f, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xbb40, .a=0x11, .x=0x63, .y=0x49, .sp=0x6f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xbb3e, .value=0x28}, {.addr=0xbb3f, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xbb3e, .value=0x28, .type=IO_READ},
        {.addr=0xbb3f, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_012D) {
    const struct CPU_State initial_cpu = {.pc=0x8799, .a=0xd7, .x=0xe9, .y=0x86, .sp=0x28, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x8799, .value=0x28}, {.addr=0x879a, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x879b, .a=0xd1, .x=0xe9, .y=0x86, .sp=0x28, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x8799, .value=0x28}, {.addr=0x879a, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x8799, .value=0x28, .type=IO_READ},
        {.addr=0x879a, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_012E) {
    const struct CPU_State initial_cpu = {.pc=0x8eee, .a=0x1b, .x=0x23, .y=0xa8, .sp=0x49, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x8eee, .value=0x28}, {.addr=0x8eef, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x8ef0, .a=0x10, .x=0x23, .y=0xa8, .sp=0x49, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8eee, .value=0x28}, {.addr=0x8eef, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x8eee, .value=0x28, .type=IO_READ},
        {.addr=0x8eef, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_012F) {
    const struct CPU_State initial_cpu = {.pc=0x9163, .a=0x9a, .x=0x84, .y=0xa2, .sp=0x79, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x9163, .value=0x28}, {.addr=0x9164, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x9165, .a=0x0a, .x=0x84, .y=0xa2, .sp=0x79, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9163, .value=0x28}, {.addr=0x9164, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x9163, .value=0x28, .type=IO_READ},
        {.addr=0x9164, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0130) {
    const struct CPU_State initial_cpu = {.pc=0xb359, .a=0x7a, .x=0x84, .y=0xbb, .sp=0x92, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xb359, .value=0x28}, {.addr=0xb35a, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xb35b, .a=0x10, .x=0x84, .y=0xbb, .sp=0x92, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xb359, .value=0x28}, {.addr=0xb35a, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xb359, .value=0x28, .type=IO_READ},
        {.addr=0xb35a, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0131) {
    const struct CPU_State initial_cpu = {.pc=0xfcc3, .a=0x42, .x=0xae, .y=0x67, .sp=0xeb, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xfcc3, .value=0x28}, {.addr=0xfcc4, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xfcc5, .a=0x00, .x=0xae, .y=0x67, .sp=0xeb, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xfcc3, .value=0x28}, {.addr=0xfcc4, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xfcc3, .value=0x28, .type=IO_READ},
        {.addr=0xfcc4, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0132) {
    const struct CPU_State initial_cpu = {.pc=0xbd18, .a=0xa6, .x=0x8c, .y=0x40, .sp=0x68, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xbd18, .value=0x28}, {.addr=0xbd19, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xbd1a, .a=0x82, .x=0x8c, .y=0x40, .sp=0x68, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xbd18, .value=0x28}, {.addr=0xbd19, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xbd18, .value=0x28, .type=IO_READ},
        {.addr=0xbd19, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0133) {
    const struct CPU_State initial_cpu = {.pc=0xc1c3, .a=0x52, .x=0x1f, .y=0x9e, .sp=0x90, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c3, .value=0x28}, {.addr=0xc1c4, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xc1c5, .a=0x52, .x=0x1f, .y=0x9e, .sp=0x90, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xc1c3, .value=0x28}, {.addr=0xc1c4, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xc1c3, .value=0x28, .type=IO_READ},
        {.addr=0xc1c4, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0134) {
    const struct CPU_State initial_cpu = {.pc=0xf50a, .a=0x2f, .x=0x8e, .y=0x66, .sp=0x9f, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xf50a, .value=0x28}, {.addr=0xf50b, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xf50c, .a=0x2f, .x=0x8e, .y=0x66, .sp=0x9f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf50a, .value=0x28}, {.addr=0xf50b, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xf50a, .value=0x28, .type=IO_READ},
        {.addr=0xf50b, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0135) {
    const struct CPU_State initial_cpu = {.pc=0x5fc6, .a=0x70, .x=0x62, .y=0x8c, .sp=0x90, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5fc6, .value=0x28}, {.addr=0x5fc7, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x5fc8, .a=0x40, .x=0x62, .y=0x8c, .sp=0x90, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5fc6, .value=0x28}, {.addr=0x5fc7, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x5fc6, .value=0x28, .type=IO_READ},
        {.addr=0x5fc7, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0136) {
    const struct CPU_State initial_cpu = {.pc=0x56b7, .a=0x16, .x=0x29, .y=0xda, .sp=0x80, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x56b7, .value=0x28}, {.addr=0x56b8, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x56b9, .a=0x10, .x=0x29, .y=0xda, .sp=0x80, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x56b7, .value=0x28}, {.addr=0x56b8, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x56b7, .value=0x28, .type=IO_READ},
        {.addr=0x56b8, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0137) {
    const struct CPU_State initial_cpu = {.pc=0x7248, .a=0x1a, .x=0xa5, .y=0x95, .sp=0x60, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x7248, .value=0x28}, {.addr=0x7249, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x724a, .a=0x18, .x=0xa5, .y=0x95, .sp=0x60, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x7248, .value=0x28}, {.addr=0x7249, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x7248, .value=0x28, .type=IO_READ},
        {.addr=0x7249, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0138) {
    const struct CPU_State initial_cpu = {.pc=0xd816, .a=0xdb, .x=0xca, .y=0xaf, .sp=0xcf, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xd816, .value=0x28}, {.addr=0xd817, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd818, .a=0xc9, .x=0xca, .y=0xaf, .sp=0xcf, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd816, .value=0x28}, {.addr=0xd817, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd816, .value=0x28, .type=IO_READ},
        {.addr=0xd817, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0139) {
    const struct CPU_State initial_cpu = {.pc=0x044f, .a=0x74, .x=0x92, .y=0xec, .sp=0x63, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x044f, .value=0x28}, {.addr=0x0450, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x0451, .a=0x50, .x=0x92, .y=0xec, .sp=0x63, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x044f, .value=0x28}, {.addr=0x0450, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x044f, .value=0x28, .type=IO_READ},
        {.addr=0x0450, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_013A) {
    const struct CPU_State initial_cpu = {.pc=0x8245, .a=0xce, .x=0x62, .y=0x6e, .sp=0xf8, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8245, .value=0x28}, {.addr=0x8246, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8247, .a=0x80, .x=0x62, .y=0x6e, .sp=0xf8, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8245, .value=0x28}, {.addr=0x8246, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8245, .value=0x28, .type=IO_READ},
        {.addr=0x8246, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_013B) {
    const struct CPU_State initial_cpu = {.pc=0xab34, .a=0x6e, .x=0xe0, .y=0x12, .sp=0x21, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xab34, .value=0x28}, {.addr=0xab35, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xab36, .a=0x6a, .x=0xe0, .y=0x12, .sp=0x21, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xab34, .value=0x28}, {.addr=0xab35, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xab34, .value=0x28, .type=IO_READ},
        {.addr=0xab35, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_013C) {
    const struct CPU_State initial_cpu = {.pc=0xd52c, .a=0x6f, .x=0xd1, .y=0xc3, .sp=0xd0, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xd52c, .value=0x28}, {.addr=0xd52d, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xd52e, .a=0x6b, .x=0xd1, .y=0xc3, .sp=0xd0, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xd52c, .value=0x28}, {.addr=0xd52d, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xd52c, .value=0x28, .type=IO_READ},
        {.addr=0xd52d, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_013D) {
    const struct CPU_State initial_cpu = {.pc=0x3974, .a=0x4d, .x=0xb2, .y=0x2f, .sp=0x43, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x3974, .value=0x28}, {.addr=0x3975, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x3976, .a=0x05, .x=0xb2, .y=0x2f, .sp=0x43, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3974, .value=0x28}, {.addr=0x3975, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x3974, .value=0x28, .type=IO_READ},
        {.addr=0x3975, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_013E) {
    const struct CPU_State initial_cpu = {.pc=0x228d, .a=0xe7, .x=0x78, .y=0x90, .sp=0x33, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x228d, .value=0x28}, {.addr=0x228e, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x228f, .a=0x44, .x=0x78, .y=0x90, .sp=0x33, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x228d, .value=0x28}, {.addr=0x228e, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x228d, .value=0x28, .type=IO_READ},
        {.addr=0x228e, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_013F) {
    const struct CPU_State initial_cpu = {.pc=0x4fa7, .a=0xb7, .x=0x5a, .y=0x09, .sp=0xe4, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x4fa7, .value=0x28}, {.addr=0x4fa8, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x4fa9, .a=0x17, .x=0x5a, .y=0x09, .sp=0xe4, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x4fa7, .value=0x28}, {.addr=0x4fa8, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x4fa7, .value=0x28, .type=IO_READ},
        {.addr=0x4fa8, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0140) {
    const struct CPU_State initial_cpu = {.pc=0x8b48, .a=0xf2, .x=0x3d, .y=0xc2, .sp=0x99, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x8b48, .value=0x28}, {.addr=0x8b49, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x8b4a, .a=0x72, .x=0x3d, .y=0xc2, .sp=0x99, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8b48, .value=0x28}, {.addr=0x8b49, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x8b48, .value=0x28, .type=IO_READ},
        {.addr=0x8b49, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0141) {
    const struct CPU_State initial_cpu = {.pc=0xccc1, .a=0xc8, .x=0x71, .y=0x06, .sp=0x75, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xccc1, .value=0x28}, {.addr=0xccc2, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xccc3, .a=0x08, .x=0x71, .y=0x06, .sp=0x75, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xccc1, .value=0x28}, {.addr=0xccc2, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xccc1, .value=0x28, .type=IO_READ},
        {.addr=0xccc2, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0142) {
    const struct CPU_State initial_cpu = {.pc=0x8284, .a=0x0e, .x=0xf6, .y=0xd5, .sp=0xaa, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x8284, .value=0x28}, {.addr=0x8285, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x8286, .a=0x0e, .x=0xf6, .y=0xd5, .sp=0xaa, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x8284, .value=0x28}, {.addr=0x8285, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x8284, .value=0x28, .type=IO_READ},
        {.addr=0x8285, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0143) {
    const struct CPU_State initial_cpu = {.pc=0xf561, .a=0xb0, .x=0xf4, .y=0x6e, .sp=0x99, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xf561, .value=0x28}, {.addr=0xf562, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xf563, .a=0x90, .x=0xf4, .y=0x6e, .sp=0x99, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xf561, .value=0x28}, {.addr=0xf562, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xf561, .value=0x28, .type=IO_READ},
        {.addr=0xf562, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0144) {
    const struct CPU_State initial_cpu = {.pc=0x7a03, .a=0xc7, .x=0x9e, .y=0x3c, .sp=0xd3, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x7a03, .value=0x28}, {.addr=0x7a04, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x7a05, .a=0x41, .x=0x9e, .y=0x3c, .sp=0xd3, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x7a03, .value=0x28}, {.addr=0x7a04, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x7a03, .value=0x28, .type=IO_READ},
        {.addr=0x7a04, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0145) {
    const struct CPU_State initial_cpu = {.pc=0x0353, .a=0xc3, .x=0x88, .y=0x75, .sp=0xcc, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0353, .value=0x28}, {.addr=0x0354, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x0355, .a=0x01, .x=0x88, .y=0x75, .sp=0xcc, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0353, .value=0x28}, {.addr=0x0354, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x0353, .value=0x28, .type=IO_READ},
        {.addr=0x0354, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0146) {
    const struct CPU_State initial_cpu = {.pc=0xec11, .a=0xb4, .x=0xb6, .y=0xc7, .sp=0x5f, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xec11, .value=0x28}, {.addr=0xec12, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xec13, .a=0x10, .x=0xb6, .y=0xc7, .sp=0x5f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xec11, .value=0x28}, {.addr=0xec12, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xec11, .value=0x28, .type=IO_READ},
        {.addr=0xec12, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0147) {
    const struct CPU_State initial_cpu = {.pc=0x3994, .a=0xcf, .x=0x1a, .y=0x1e, .sp=0xb8, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x3994, .value=0x28}, {.addr=0x3995, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x3996, .a=0xc3, .x=0x1a, .y=0x1e, .sp=0xb8, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x3994, .value=0x28}, {.addr=0x3995, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x3994, .value=0x28, .type=IO_READ},
        {.addr=0x3995, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0148) {
    const struct CPU_State initial_cpu = {.pc=0x9ec3, .a=0x5d, .x=0x58, .y=0xb4, .sp=0xde, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x9ec3, .value=0x28}, {.addr=0x9ec4, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x9ec5, .a=0x08, .x=0x58, .y=0xb4, .sp=0xde, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9ec3, .value=0x28}, {.addr=0x9ec4, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x9ec3, .value=0x28, .type=IO_READ},
        {.addr=0x9ec4, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0149) {
    const struct CPU_State initial_cpu = {.pc=0x4050, .a=0xcc, .x=0x71, .y=0xf4, .sp=0xd6, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x4050, .value=0x28}, {.addr=0x4051, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x4052, .a=0x04, .x=0x71, .y=0xf4, .sp=0xd6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4050, .value=0x28}, {.addr=0x4051, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x4050, .value=0x28, .type=IO_READ},
        {.addr=0x4051, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_014A) {
    const struct CPU_State initial_cpu = {.pc=0x91f0, .a=0x7a, .x=0xd3, .y=0xb4, .sp=0x31, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x91f0, .value=0x28}, {.addr=0x91f1, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x91f2, .a=0x30, .x=0xd3, .y=0xb4, .sp=0x31, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x91f0, .value=0x28}, {.addr=0x91f1, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x91f0, .value=0x28, .type=IO_READ},
        {.addr=0x91f1, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_014B) {
    const struct CPU_State initial_cpu = {.pc=0x126b, .a=0x8c, .x=0x35, .y=0x4d, .sp=0x17, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x126b, .value=0x28}, {.addr=0x126c, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x126d, .a=0x0c, .x=0x35, .y=0x4d, .sp=0x17, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x126b, .value=0x28}, {.addr=0x126c, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x126b, .value=0x28, .type=IO_READ},
        {.addr=0x126c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_014C) {
    const struct CPU_State initial_cpu = {.pc=0x5058, .a=0x06, .x=0xde, .y=0xf3, .sp=0xc8, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5058, .value=0x28}, {.addr=0x5059, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x505a, .a=0x04, .x=0xde, .y=0xf3, .sp=0xc8, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x5058, .value=0x28}, {.addr=0x5059, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x5058, .value=0x28, .type=IO_READ},
        {.addr=0x5059, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_014D) {
    const struct CPU_State initial_cpu = {.pc=0x2bbf, .a=0x01, .x=0xf2, .y=0x47, .sp=0x07, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x2bbf, .value=0x28}, {.addr=0x2bc0, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x2bc1, .a=0x01, .x=0xf2, .y=0x47, .sp=0x07, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2bbf, .value=0x28}, {.addr=0x2bc0, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x2bbf, .value=0x28, .type=IO_READ},
        {.addr=0x2bc0, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_014E) {
    const struct CPU_State initial_cpu = {.pc=0x10eb, .a=0x7e, .x=0x20, .y=0x7e, .sp=0x08, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x10eb, .value=0x28}, {.addr=0x10ec, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x10ed, .a=0x08, .x=0x20, .y=0x7e, .sp=0x08, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x10eb, .value=0x28}, {.addr=0x10ec, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x10eb, .value=0x28, .type=IO_READ},
        {.addr=0x10ec, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_014F) {
    const struct CPU_State initial_cpu = {.pc=0xb23a, .a=0x19, .x=0x25, .y=0xdd, .sp=0x7a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb23a, .value=0x28}, {.addr=0xb23b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb23c, .a=0x19, .x=0x25, .y=0xdd, .sp=0x7a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb23a, .value=0x28}, {.addr=0xb23b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb23a, .value=0x28, .type=IO_READ},
        {.addr=0xb23b, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0150) {
    const struct CPU_State initial_cpu = {.pc=0xb867, .a=0xe0, .x=0xc6, .y=0x0f, .sp=0xaa, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xb867, .value=0x28}, {.addr=0xb868, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xb869, .a=0x00, .x=0xc6, .y=0x0f, .sp=0xaa, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xb867, .value=0x28}, {.addr=0xb868, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xb867, .value=0x28, .type=IO_READ},
        {.addr=0xb868, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0151) {
    const struct CPU_State initial_cpu = {.pc=0xa742, .a=0x8d, .x=0x0b, .y=0xd5, .sp=0xde, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xa742, .value=0x28}, {.addr=0xa743, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xa744, .a=0x85, .x=0x0b, .y=0xd5, .sp=0xde, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa742, .value=0x28}, {.addr=0xa743, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xa742, .value=0x28, .type=IO_READ},
        {.addr=0xa743, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0152) {
    const struct CPU_State initial_cpu = {.pc=0x9045, .a=0xba, .x=0x25, .y=0x68, .sp=0x45, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x9045, .value=0x28}, {.addr=0x9046, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x9047, .a=0x9a, .x=0x25, .y=0x68, .sp=0x45, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9045, .value=0x28}, {.addr=0x9046, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x9045, .value=0x28, .type=IO_READ},
        {.addr=0x9046, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0153) {
    const struct CPU_State initial_cpu = {.pc=0x32aa, .a=0x30, .x=0xfc, .y=0xc7, .sp=0x1e, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x32aa, .value=0x28}, {.addr=0x32ab, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x32ac, .a=0x00, .x=0xfc, .y=0xc7, .sp=0x1e, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x32aa, .value=0x28}, {.addr=0x32ab, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x32aa, .value=0x28, .type=IO_READ},
        {.addr=0x32ab, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0154) {
    const struct CPU_State initial_cpu = {.pc=0x7eb6, .a=0x2d, .x=0x27, .y=0xc3, .sp=0x10, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x7eb6, .value=0x28}, {.addr=0x7eb7, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x7eb8, .a=0x05, .x=0x27, .y=0xc3, .sp=0x10, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7eb6, .value=0x28}, {.addr=0x7eb7, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x7eb6, .value=0x28, .type=IO_READ},
        {.addr=0x7eb7, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0155) {
    const struct CPU_State initial_cpu = {.pc=0x7bf4, .a=0x5f, .x=0x44, .y=0x77, .sp=0x31, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x7bf4, .value=0x28}, {.addr=0x7bf5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7bf6, .a=0x40, .x=0x44, .y=0x77, .sp=0x31, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7bf4, .value=0x28}, {.addr=0x7bf5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7bf4, .value=0x28, .type=IO_READ},
        {.addr=0x7bf5, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0156) {
    const struct CPU_State initial_cpu = {.pc=0x3bde, .a=0x9c, .x=0x04, .y=0x3b, .sp=0x60, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x3bde, .value=0x28}, {.addr=0x3bdf, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x3be0, .a=0x08, .x=0x04, .y=0x3b, .sp=0x60, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3bde, .value=0x28}, {.addr=0x3bdf, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x3bde, .value=0x28, .type=IO_READ},
        {.addr=0x3bdf, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0157) {
    const struct CPU_State initial_cpu = {.pc=0x852d, .a=0x02, .x=0x71, .y=0xad, .sp=0x32, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x852d, .value=0x28}, {.addr=0x852e, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x852f, .a=0x00, .x=0x71, .y=0xad, .sp=0x32, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x852d, .value=0x28}, {.addr=0x852e, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x852d, .value=0x28, .type=IO_READ},
        {.addr=0x852e, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0158) {
    const struct CPU_State initial_cpu = {.pc=0xc51b, .a=0xbb, .x=0x77, .y=0x75, .sp=0xc5, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xc51b, .value=0x28}, {.addr=0xc51c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc51d, .a=0x19, .x=0x77, .y=0x75, .sp=0xc5, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc51b, .value=0x28}, {.addr=0xc51c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc51b, .value=0x28, .type=IO_READ},
        {.addr=0xc51c, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0159) {
    const struct CPU_State initial_cpu = {.pc=0xefd9, .a=0x02, .x=0x81, .y=0x40, .sp=0x24, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xefd9, .value=0x28}, {.addr=0xefda, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xefdb, .a=0x02, .x=0x81, .y=0x40, .sp=0x24, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xefd9, .value=0x28}, {.addr=0xefda, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xefd9, .value=0x28, .type=IO_READ},
        {.addr=0xefda, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_015A) {
    const struct CPU_State initial_cpu = {.pc=0x6f4e, .a=0x29, .x=0xf4, .y=0x93, .sp=0xb2, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x6f4e, .value=0x28}, {.addr=0x6f4f, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x6f50, .a=0x01, .x=0xf4, .y=0x93, .sp=0xb2, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6f4e, .value=0x28}, {.addr=0x6f4f, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x6f4e, .value=0x28, .type=IO_READ},
        {.addr=0x6f4f, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_015B) {
    const struct CPU_State initial_cpu = {.pc=0x94b6, .a=0x6f, .x=0xcd, .y=0x2e, .sp=0xf1, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x94b6, .value=0x28}, {.addr=0x94b7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x94b8, .a=0x2f, .x=0xcd, .y=0x2e, .sp=0xf1, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x94b6, .value=0x28}, {.addr=0x94b7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x94b6, .value=0x28, .type=IO_READ},
        {.addr=0x94b7, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_015C) {
    const struct CPU_State initial_cpu = {.pc=0xaf64, .a=0x77, .x=0x6c, .y=0x5c, .sp=0x15, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xaf64, .value=0x28}, {.addr=0xaf65, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xaf66, .a=0x47, .x=0x6c, .y=0x5c, .sp=0x15, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xaf64, .value=0x28}, {.addr=0xaf65, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xaf64, .value=0x28, .type=IO_READ},
        {.addr=0xaf65, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_015D) {
    const struct CPU_State initial_cpu = {.pc=0x1210, .a=0xc2, .x=0x71, .y=0x4e, .sp=0xdd, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x1210, .value=0x28}, {.addr=0x1211, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x1212, .a=0xc2, .x=0x71, .y=0x4e, .sp=0xdd, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x1210, .value=0x28}, {.addr=0x1211, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x1210, .value=0x28, .type=IO_READ},
        {.addr=0x1211, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_015E) {
    const struct CPU_State initial_cpu = {.pc=0x44f7, .a=0xac, .x=0xa0, .y=0x27, .sp=0x77, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x44f7, .value=0x28}, {.addr=0x44f8, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x44f9, .a=0xa0, .x=0xa0, .y=0x27, .sp=0x77, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x44f7, .value=0x28}, {.addr=0x44f8, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x44f7, .value=0x28, .type=IO_READ},
        {.addr=0x44f8, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_015F) {
    const struct CPU_State initial_cpu = {.pc=0xb351, .a=0xa9, .x=0x66, .y=0xea, .sp=0xa0, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb351, .value=0x28}, {.addr=0xb352, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xb353, .a=0x89, .x=0x66, .y=0xea, .sp=0xa0, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb351, .value=0x28}, {.addr=0xb352, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xb351, .value=0x28, .type=IO_READ},
        {.addr=0xb352, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0160) {
    const struct CPU_State initial_cpu = {.pc=0xadad, .a=0x53, .x=0xb7, .y=0x8b, .sp=0x16, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xadad, .value=0x28}, {.addr=0xadae, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xadaf, .a=0x10, .x=0xb7, .y=0x8b, .sp=0x16, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xadad, .value=0x28}, {.addr=0xadae, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xadad, .value=0x28, .type=IO_READ},
        {.addr=0xadae, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0161) {
    const struct CPU_State initial_cpu = {.pc=0xd509, .a=0x03, .x=0xa9, .y=0xc1, .sp=0x70, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xd509, .value=0x28}, {.addr=0xd50a, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xd50b, .a=0x01, .x=0xa9, .y=0xc1, .sp=0x70, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd509, .value=0x28}, {.addr=0xd50a, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xd509, .value=0x28, .type=IO_READ},
        {.addr=0xd50a, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0162) {
    const struct CPU_State initial_cpu = {.pc=0xb34a, .a=0x0f, .x=0xe6, .y=0xe2, .sp=0x82, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb34a, .value=0x28}, {.addr=0xb34b, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xb34c, .a=0x02, .x=0xe6, .y=0xe2, .sp=0x82, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb34a, .value=0x28}, {.addr=0xb34b, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xb34a, .value=0x28, .type=IO_READ},
        {.addr=0xb34b, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0163) {
    const struct CPU_State initial_cpu = {.pc=0xa14f, .a=0xfa, .x=0x0a, .y=0xbe, .sp=0x3c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa14f, .value=0x28}, {.addr=0xa150, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa151, .a=0xca, .x=0x0a, .y=0xbe, .sp=0x3c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa14f, .value=0x28}, {.addr=0xa150, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa14f, .value=0x28, .type=IO_READ},
        {.addr=0xa150, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0164) {
    const struct CPU_State initial_cpu = {.pc=0xcb7a, .a=0x2e, .x=0x8e, .y=0x9c, .sp=0x46, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xcb7a, .value=0x28}, {.addr=0xcb7b, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xcb7c, .a=0x2e, .x=0x8e, .y=0x9c, .sp=0x46, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xcb7a, .value=0x28}, {.addr=0xcb7b, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xcb7a, .value=0x28, .type=IO_READ},
        {.addr=0xcb7b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0165) {
    const struct CPU_State initial_cpu = {.pc=0xf629, .a=0x63, .x=0xab, .y=0x18, .sp=0xba, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xf629, .value=0x28}, {.addr=0xf62a, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xf62b, .a=0x43, .x=0xab, .y=0x18, .sp=0xba, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf629, .value=0x28}, {.addr=0xf62a, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xf629, .value=0x28, .type=IO_READ},
        {.addr=0xf62a, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0166) {
    const struct CPU_State initial_cpu = {.pc=0x3e1e, .a=0x68, .x=0xe7, .y=0x68, .sp=0x67, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x3e1e, .value=0x28}, {.addr=0x3e1f, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x3e20, .a=0x40, .x=0xe7, .y=0x68, .sp=0x67, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x3e1e, .value=0x28}, {.addr=0x3e1f, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x3e1e, .value=0x28, .type=IO_READ},
        {.addr=0x3e1f, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0167) {
    const struct CPU_State initial_cpu = {.pc=0xdce7, .a=0x2f, .x=0x62, .y=0x38, .sp=0xe0, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xdce7, .value=0x28}, {.addr=0xdce8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xdce9, .a=0x20, .x=0x62, .y=0x38, .sp=0xe0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xdce7, .value=0x28}, {.addr=0xdce8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xdce7, .value=0x28, .type=IO_READ},
        {.addr=0xdce8, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0168) {
    const struct CPU_State initial_cpu = {.pc=0x2232, .a=0x39, .x=0xbd, .y=0x79, .sp=0x24, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x2232, .value=0x28}, {.addr=0x2233, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x2234, .a=0x39, .x=0xbd, .y=0x79, .sp=0x24, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2232, .value=0x28}, {.addr=0x2233, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x2232, .value=0x28, .type=IO_READ},
        {.addr=0x2233, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0169) {
    const struct CPU_State initial_cpu = {.pc=0x6440, .a=0x90, .x=0x4d, .y=0x71, .sp=0x09, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x6440, .value=0x28}, {.addr=0x6441, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x6442, .a=0x80, .x=0x4d, .y=0x71, .sp=0x09, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6440, .value=0x28}, {.addr=0x6441, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x6440, .value=0x28, .type=IO_READ},
        {.addr=0x6441, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_016A) {
    const struct CPU_State initial_cpu = {.pc=0xb4d5, .a=0x94, .x=0xb3, .y=0x2f, .sp=0x39, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xb4d5, .value=0x28}, {.addr=0xb4d6, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xb4d7, .a=0x10, .x=0xb3, .y=0x2f, .sp=0x39, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb4d5, .value=0x28}, {.addr=0xb4d6, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xb4d5, .value=0x28, .type=IO_READ},
        {.addr=0xb4d6, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_016B) {
    const struct CPU_State initial_cpu = {.pc=0x88cc, .a=0xa1, .x=0xa7, .y=0x8e, .sp=0xa4, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x88cc, .value=0x28}, {.addr=0x88cd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x88ce, .a=0x00, .x=0xa7, .y=0x8e, .sp=0xa4, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x88cc, .value=0x28}, {.addr=0x88cd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x88cc, .value=0x28, .type=IO_READ},
        {.addr=0x88cd, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_016C) {
    const struct CPU_State initial_cpu = {.pc=0x464b, .a=0x46, .x=0xc8, .y=0x18, .sp=0x8f, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x464b, .value=0x28}, {.addr=0x464c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x464d, .a=0x06, .x=0xc8, .y=0x18, .sp=0x8f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x464b, .value=0x28}, {.addr=0x464c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x464b, .value=0x28, .type=IO_READ},
        {.addr=0x464c, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_016D) {
    const struct CPU_State initial_cpu = {.pc=0x9094, .a=0x1c, .x=0xc8, .y=0xbc, .sp=0x3b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x9094, .value=0x28}, {.addr=0x9095, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x9096, .a=0x14, .x=0xc8, .y=0xbc, .sp=0x3b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9094, .value=0x28}, {.addr=0x9095, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x9094, .value=0x28, .type=IO_READ},
        {.addr=0x9095, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_016E) {
    const struct CPU_State initial_cpu = {.pc=0x8a26, .a=0x6b, .x=0x3e, .y=0xf3, .sp=0xb8, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x8a26, .value=0x28}, {.addr=0x8a27, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x8a28, .a=0x21, .x=0x3e, .y=0xf3, .sp=0xb8, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8a26, .value=0x28}, {.addr=0x8a27, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x8a26, .value=0x28, .type=IO_READ},
        {.addr=0x8a27, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_016F) {
    const struct CPU_State initial_cpu = {.pc=0xa3c9, .a=0xc5, .x=0xdd, .y=0x7d, .sp=0xed, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c9, .value=0x28}, {.addr=0xa3ca, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xa3cb, .a=0x00, .x=0xdd, .y=0x7d, .sp=0xed, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xa3c9, .value=0x28}, {.addr=0xa3ca, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xa3c9, .value=0x28, .type=IO_READ},
        {.addr=0xa3ca, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0170) {
    const struct CPU_State initial_cpu = {.pc=0x5ebd, .a=0x01, .x=0x05, .y=0x50, .sp=0x78, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x5ebd, .value=0x28}, {.addr=0x5ebe, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x5ebf, .a=0x01, .x=0x05, .y=0x50, .sp=0x78, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5ebd, .value=0x28}, {.addr=0x5ebe, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x5ebd, .value=0x28, .type=IO_READ},
        {.addr=0x5ebe, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0171) {
    const struct CPU_State initial_cpu = {.pc=0x1f6e, .a=0x20, .x=0xea, .y=0x84, .sp=0x2c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x1f6e, .value=0x28}, {.addr=0x1f6f, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x1f70, .a=0x20, .x=0xea, .y=0x84, .sp=0x2c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1f6e, .value=0x28}, {.addr=0x1f6f, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x1f6e, .value=0x28, .type=IO_READ},
        {.addr=0x1f6f, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0172) {
    const struct CPU_State initial_cpu = {.pc=0x7ba1, .a=0x78, .x=0x98, .y=0x3c, .sp=0x05, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x7ba1, .value=0x28}, {.addr=0x7ba2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x7ba3, .a=0x38, .x=0x98, .y=0x3c, .sp=0x05, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x7ba1, .value=0x28}, {.addr=0x7ba2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x7ba1, .value=0x28, .type=IO_READ},
        {.addr=0x7ba2, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0173) {
    const struct CPU_State initial_cpu = {.pc=0xc4a1, .a=0xd4, .x=0x4c, .y=0xb2, .sp=0xde, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xc4a1, .value=0x28}, {.addr=0xc4a2, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xc4a3, .a=0x80, .x=0x4c, .y=0xb2, .sp=0xde, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc4a1, .value=0x28}, {.addr=0xc4a2, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xc4a1, .value=0x28, .type=IO_READ},
        {.addr=0xc4a2, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0174) {
    const struct CPU_State initial_cpu = {.pc=0xa9b6, .a=0xc2, .x=0xd1, .y=0xee, .sp=0x4d, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xa9b6, .value=0x28}, {.addr=0xa9b7, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xa9b8, .a=0xc0, .x=0xd1, .y=0xee, .sp=0x4d, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xa9b6, .value=0x28}, {.addr=0xa9b7, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xa9b6, .value=0x28, .type=IO_READ},
        {.addr=0xa9b7, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0175) {
    const struct CPU_State initial_cpu = {.pc=0xeee5, .a=0xe2, .x=0x40, .y=0x4c, .sp=0x06, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xeee5, .value=0x28}, {.addr=0xeee6, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xeee7, .a=0x60, .x=0x40, .y=0x4c, .sp=0x06, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xeee5, .value=0x28}, {.addr=0xeee6, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xeee5, .value=0x28, .type=IO_READ},
        {.addr=0xeee6, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0176) {
    const struct CPU_State initial_cpu = {.pc=0x8ffe, .a=0x13, .x=0x58, .y=0xd6, .sp=0x07, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x8ffe, .value=0x28}, {.addr=0x8fff, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x9000, .a=0x01, .x=0x58, .y=0xd6, .sp=0x07, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8ffe, .value=0x28}, {.addr=0x8fff, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x8ffe, .value=0x28, .type=IO_READ},
        {.addr=0x8fff, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0177) {
    const struct CPU_State initial_cpu = {.pc=0x2376, .a=0xdb, .x=0xb3, .y=0x87, .sp=0xa9, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x2376, .value=0x28}, {.addr=0x2377, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x2378, .a=0x43, .x=0xb3, .y=0x87, .sp=0xa9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x2376, .value=0x28}, {.addr=0x2377, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x2376, .value=0x28, .type=IO_READ},
        {.addr=0x2377, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0178) {
    const struct CPU_State initial_cpu = {.pc=0x4693, .a=0x94, .x=0x16, .y=0x6d, .sp=0xbb, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4693, .value=0x28}, {.addr=0x4694, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x4695, .a=0x04, .x=0x16, .y=0x6d, .sp=0xbb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x4693, .value=0x28}, {.addr=0x4694, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x4693, .value=0x28, .type=IO_READ},
        {.addr=0x4694, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0179) {
    const struct CPU_State initial_cpu = {.pc=0x1c57, .a=0x7c, .x=0x28, .y=0xbf, .sp=0xc4, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x1c57, .value=0x28}, {.addr=0x1c58, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x1c59, .a=0x70, .x=0x28, .y=0xbf, .sp=0xc4, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1c57, .value=0x28}, {.addr=0x1c58, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x1c57, .value=0x28, .type=IO_READ},
        {.addr=0x1c58, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_017A) {
    const struct CPU_State initial_cpu = {.pc=0x50c7, .a=0x2e, .x=0x9a, .y=0xe6, .sp=0x36, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x50c7, .value=0x28}, {.addr=0x50c8, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x50c9, .a=0x28, .x=0x9a, .y=0xe6, .sp=0x36, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x50c7, .value=0x28}, {.addr=0x50c8, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x50c7, .value=0x28, .type=IO_READ},
        {.addr=0x50c8, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_017B) {
    const struct CPU_State initial_cpu = {.pc=0xf3dd, .a=0xdf, .x=0xdd, .y=0xaa, .sp=0xfd, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xf3dd, .value=0x28}, {.addr=0xf3de, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf3df, .a=0x9f, .x=0xdd, .y=0xaa, .sp=0xfd, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf3dd, .value=0x28}, {.addr=0xf3de, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf3dd, .value=0x28, .type=IO_READ},
        {.addr=0xf3de, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_017C) {
    const struct CPU_State initial_cpu = {.pc=0x2df9, .a=0x00, .x=0xfe, .y=0xc0, .sp=0xbe, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x2df9, .value=0x28}, {.addr=0x2dfa, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x2dfb, .a=0x00, .x=0xfe, .y=0xc0, .sp=0xbe, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x2df9, .value=0x28}, {.addr=0x2dfa, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x2df9, .value=0x28, .type=IO_READ},
        {.addr=0x2dfa, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_017D) {
    const struct CPU_State initial_cpu = {.pc=0xfcfc, .a=0x5d, .x=0xda, .y=0x4b, .sp=0x71, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xfcfc, .value=0x28}, {.addr=0xfcfd, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xfcfe, .a=0x58, .x=0xda, .y=0x4b, .sp=0x71, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xfcfc, .value=0x28}, {.addr=0xfcfd, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xfcfc, .value=0x28, .type=IO_READ},
        {.addr=0xfcfd, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_017E) {
    const struct CPU_State initial_cpu = {.pc=0x0b63, .a=0xad, .x=0x68, .y=0x97, .sp=0x3f, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0b63, .value=0x28}, {.addr=0x0b64, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x0b65, .a=0x05, .x=0x68, .y=0x97, .sp=0x3f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0b63, .value=0x28}, {.addr=0x0b64, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x0b63, .value=0x28, .type=IO_READ},
        {.addr=0x0b64, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_017F) {
    const struct CPU_State initial_cpu = {.pc=0x079e, .a=0x9e, .x=0xc8, .y=0x6d, .sp=0x70, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x079e, .value=0x28}, {.addr=0x079f, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x07a0, .a=0x84, .x=0xc8, .y=0x6d, .sp=0x70, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x079e, .value=0x28}, {.addr=0x079f, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x079e, .value=0x28, .type=IO_READ},
        {.addr=0x079f, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0180) {
    const struct CPU_State initial_cpu = {.pc=0xdb7e, .a=0xe7, .x=0x73, .y=0x40, .sp=0xd1, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xdb7e, .value=0x28}, {.addr=0xdb7f, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xdb80, .a=0x27, .x=0x73, .y=0x40, .sp=0xd1, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xdb7e, .value=0x28}, {.addr=0xdb7f, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xdb7e, .value=0x28, .type=IO_READ},
        {.addr=0xdb7f, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0181) {
    const struct CPU_State initial_cpu = {.pc=0xa153, .a=0x29, .x=0x82, .y=0xbe, .sp=0xdc, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xa153, .value=0x28}, {.addr=0xa154, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xa155, .a=0x28, .x=0x82, .y=0xbe, .sp=0xdc, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa153, .value=0x28}, {.addr=0xa154, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xa153, .value=0x28, .type=IO_READ},
        {.addr=0xa154, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0182) {
    const struct CPU_State initial_cpu = {.pc=0x597a, .a=0x17, .x=0xe5, .y=0x61, .sp=0xa1, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x597a, .value=0x28}, {.addr=0x597b, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x597c, .a=0x04, .x=0xe5, .y=0x61, .sp=0xa1, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x597a, .value=0x28}, {.addr=0x597b, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x597a, .value=0x28, .type=IO_READ},
        {.addr=0x597b, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0183) {
    const struct CPU_State initial_cpu = {.pc=0x2ff8, .a=0x19, .x=0x14, .y=0x62, .sp=0xad, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x2ff8, .value=0x28}, {.addr=0x2ff9, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x2ffa, .a=0x10, .x=0x14, .y=0x62, .sp=0xad, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2ff8, .value=0x28}, {.addr=0x2ff9, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x2ff8, .value=0x28, .type=IO_READ},
        {.addr=0x2ff9, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0184) {
    const struct CPU_State initial_cpu = {.pc=0x6632, .a=0x0f, .x=0x1a, .y=0xec, .sp=0xae, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x6632, .value=0x28}, {.addr=0x6633, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6634, .a=0x0d, .x=0x1a, .y=0xec, .sp=0xae, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6632, .value=0x28}, {.addr=0x6633, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6632, .value=0x28, .type=IO_READ},
        {.addr=0x6633, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0185) {
    const struct CPU_State initial_cpu = {.pc=0x972e, .a=0xc9, .x=0x4f, .y=0xb3, .sp=0x4a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x972e, .value=0x28}, {.addr=0x972f, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x9730, .a=0xc1, .x=0x4f, .y=0xb3, .sp=0x4a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x972e, .value=0x28}, {.addr=0x972f, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x972e, .value=0x28, .type=IO_READ},
        {.addr=0x972f, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0186) {
    const struct CPU_State initial_cpu = {.pc=0xc63c, .a=0xd0, .x=0x03, .y=0xbf, .sp=0x9b, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xc63c, .value=0x28}, {.addr=0xc63d, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xc63e, .a=0x50, .x=0x03, .y=0xbf, .sp=0x9b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc63c, .value=0x28}, {.addr=0xc63d, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xc63c, .value=0x28, .type=IO_READ},
        {.addr=0xc63d, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0187) {
    const struct CPU_State initial_cpu = {.pc=0xf6e7, .a=0xee, .x=0x9f, .y=0x99, .sp=0x3c, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xf6e7, .value=0x28}, {.addr=0xf6e8, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xf6e9, .a=0x4e, .x=0x9f, .y=0x99, .sp=0x3c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xf6e7, .value=0x28}, {.addr=0xf6e8, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xf6e7, .value=0x28, .type=IO_READ},
        {.addr=0xf6e8, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0188) {
    const struct CPU_State initial_cpu = {.pc=0x17fe, .a=0xe1, .x=0x27, .y=0xa9, .sp=0x97, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x17fe, .value=0x28}, {.addr=0x17ff, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x1800, .a=0xc0, .x=0x27, .y=0xa9, .sp=0x97, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x17fe, .value=0x28}, {.addr=0x17ff, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x17fe, .value=0x28, .type=IO_READ},
        {.addr=0x17ff, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0189) {
    const struct CPU_State initial_cpu = {.pc=0x56f6, .a=0xb4, .x=0xcc, .y=0x87, .sp=0x08, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x56f6, .value=0x28}, {.addr=0x56f7, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x56f8, .a=0x30, .x=0xcc, .y=0x87, .sp=0x08, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x56f6, .value=0x28}, {.addr=0x56f7, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x56f6, .value=0x28, .type=IO_READ},
        {.addr=0x56f7, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_018A) {
    const struct CPU_State initial_cpu = {.pc=0x61d7, .a=0x7d, .x=0xe7, .y=0x9c, .sp=0xdc, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x61d7, .value=0x28}, {.addr=0x61d8, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x61d9, .a=0x31, .x=0xe7, .y=0x9c, .sp=0xdc, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x61d7, .value=0x28}, {.addr=0x61d8, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x61d7, .value=0x28, .type=IO_READ},
        {.addr=0x61d8, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_018B) {
    const struct CPU_State initial_cpu = {.pc=0x84e2, .a=0xd6, .x=0x46, .y=0x46, .sp=0xda, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x84e2, .value=0x28}, {.addr=0x84e3, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x84e4, .a=0xd2, .x=0x46, .y=0x46, .sp=0xda, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x84e2, .value=0x28}, {.addr=0x84e3, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x84e2, .value=0x28, .type=IO_READ},
        {.addr=0x84e3, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_018C) {
    const struct CPU_State initial_cpu = {.pc=0x2161, .a=0xa5, .x=0xb2, .y=0x53, .sp=0xed, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2161, .value=0x28}, {.addr=0x2162, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2163, .a=0x84, .x=0xb2, .y=0x53, .sp=0xed, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2161, .value=0x28}, {.addr=0x2162, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2161, .value=0x28, .type=IO_READ},
        {.addr=0x2162, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_018D) {
    const struct CPU_State initial_cpu = {.pc=0x82ed, .a=0xe4, .x=0xcf, .y=0x7a, .sp=0x7c, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x82ed, .value=0x28}, {.addr=0x82ee, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x82ef, .a=0xe0, .x=0xcf, .y=0x7a, .sp=0x7c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x82ed, .value=0x28}, {.addr=0x82ee, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x82ed, .value=0x28, .type=IO_READ},
        {.addr=0x82ee, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_018E) {
    const struct CPU_State initial_cpu = {.pc=0x0330, .a=0x11, .x=0x9b, .y=0x39, .sp=0x3f, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0330, .value=0x28}, {.addr=0x0331, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x0332, .a=0x01, .x=0x9b, .y=0x39, .sp=0x3f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0330, .value=0x28}, {.addr=0x0331, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x0330, .value=0x28, .type=IO_READ},
        {.addr=0x0331, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_018F) {
    const struct CPU_State initial_cpu = {.pc=0xb8f0, .a=0x7d, .x=0x53, .y=0x4f, .sp=0xb0, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xb8f0, .value=0x28}, {.addr=0xb8f1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb8f2, .a=0x24, .x=0x53, .y=0x4f, .sp=0xb0, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb8f0, .value=0x28}, {.addr=0xb8f1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb8f0, .value=0x28, .type=IO_READ},
        {.addr=0xb8f1, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0190) {
    const struct CPU_State initial_cpu = {.pc=0x8ad9, .a=0xb2, .x=0x50, .y=0xf4, .sp=0x18, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x8ad9, .value=0x28}, {.addr=0x8ada, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x8adb, .a=0x30, .x=0x50, .y=0xf4, .sp=0x18, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8ad9, .value=0x28}, {.addr=0x8ada, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x8ad9, .value=0x28, .type=IO_READ},
        {.addr=0x8ada, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0191) {
    const struct CPU_State initial_cpu = {.pc=0xdee8, .a=0xcb, .x=0x5c, .y=0xca, .sp=0xa1, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xdee8, .value=0x28}, {.addr=0xdee9, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xdeea, .a=0x80, .x=0x5c, .y=0xca, .sp=0xa1, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xdee8, .value=0x28}, {.addr=0xdee9, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xdee8, .value=0x28, .type=IO_READ},
        {.addr=0xdee9, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0192) {
    const struct CPU_State initial_cpu = {.pc=0xd01e, .a=0xae, .x=0x54, .y=0xf5, .sp=0x30, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xd01e, .value=0x28}, {.addr=0xd01f, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xd020, .a=0x82, .x=0x54, .y=0xf5, .sp=0x30, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xd01e, .value=0x28}, {.addr=0xd01f, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xd01e, .value=0x28, .type=IO_READ},
        {.addr=0xd01f, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0193) {
    const struct CPU_State initial_cpu = {.pc=0x65dd, .a=0x85, .x=0x87, .y=0x0c, .sp=0xed, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x65dd, .value=0x28}, {.addr=0x65de, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x65df, .a=0x04, .x=0x87, .y=0x0c, .sp=0xed, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x65dd, .value=0x28}, {.addr=0x65de, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x65dd, .value=0x28, .type=IO_READ},
        {.addr=0x65de, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0194) {
    const struct CPU_State initial_cpu = {.pc=0x552e, .a=0x0e, .x=0xbd, .y=0x25, .sp=0x9f, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x552e, .value=0x28}, {.addr=0x552f, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x5530, .a=0x00, .x=0xbd, .y=0x25, .sp=0x9f, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x552e, .value=0x28}, {.addr=0x552f, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x552e, .value=0x28, .type=IO_READ},
        {.addr=0x552f, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0195) {
    const struct CPU_State initial_cpu = {.pc=0x3a78, .a=0x1f, .x=0xaa, .y=0x8e, .sp=0x3e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x3a78, .value=0x28}, {.addr=0x3a79, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x3a7a, .a=0x05, .x=0xaa, .y=0x8e, .sp=0x3e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x3a78, .value=0x28}, {.addr=0x3a79, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x3a78, .value=0x28, .type=IO_READ},
        {.addr=0x3a79, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0196) {
    const struct CPU_State initial_cpu = {.pc=0x1344, .a=0xb0, .x=0x21, .y=0x30, .sp=0x1a, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x1344, .value=0x28}, {.addr=0x1345, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x1346, .a=0x10, .x=0x21, .y=0x30, .sp=0x1a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1344, .value=0x28}, {.addr=0x1345, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x1344, .value=0x28, .type=IO_READ},
        {.addr=0x1345, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0197) {
    const struct CPU_State initial_cpu = {.pc=0xb2e5, .a=0x40, .x=0xf1, .y=0xa4, .sp=0xdb, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xb2e5, .value=0x28}, {.addr=0xb2e6, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xb2e7, .a=0x40, .x=0xf1, .y=0xa4, .sp=0xdb, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb2e5, .value=0x28}, {.addr=0xb2e6, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xb2e5, .value=0x28, .type=IO_READ},
        {.addr=0xb2e6, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0198) {
    const struct CPU_State initial_cpu = {.pc=0x19df, .a=0x5d, .x=0xe4, .y=0x59, .sp=0xa5, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x19df, .value=0x28}, {.addr=0x19e0, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x19e1, .a=0x50, .x=0xe4, .y=0x59, .sp=0xa5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x19df, .value=0x28}, {.addr=0x19e0, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x19df, .value=0x28, .type=IO_READ},
        {.addr=0x19e0, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0199) {
    const struct CPU_State initial_cpu = {.pc=0x2325, .a=0x59, .x=0x66, .y=0xef, .sp=0xf2, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x2325, .value=0x28}, {.addr=0x2326, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x2327, .a=0x41, .x=0x66, .y=0xef, .sp=0xf2, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2325, .value=0x28}, {.addr=0x2326, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x2325, .value=0x28, .type=IO_READ},
        {.addr=0x2326, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_019A) {
    const struct CPU_State initial_cpu = {.pc=0x6d1a, .a=0x52, .x=0x62, .y=0xaf, .sp=0x9e, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x6d1a, .value=0x28}, {.addr=0x6d1b, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x6d1c, .a=0x52, .x=0x62, .y=0xaf, .sp=0x9e, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x6d1a, .value=0x28}, {.addr=0x6d1b, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x6d1a, .value=0x28, .type=IO_READ},
        {.addr=0x6d1b, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_019B) {
    const struct CPU_State initial_cpu = {.pc=0x020d, .a=0xd5, .x=0x6e, .y=0x90, .sp=0x6a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x020d, .value=0x28}, {.addr=0x020e, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x020f, .a=0x50, .x=0x6e, .y=0x90, .sp=0x6a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x020d, .value=0x28}, {.addr=0x020e, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x020d, .value=0x28, .type=IO_READ},
        {.addr=0x020e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_019C) {
    const struct CPU_State initial_cpu = {.pc=0x95a2, .a=0x19, .x=0xb9, .y=0xd9, .sp=0x7e, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x95a2, .value=0x28}, {.addr=0x95a3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x95a4, .a=0x19, .x=0xb9, .y=0xd9, .sp=0x7e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x95a2, .value=0x28}, {.addr=0x95a3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x95a2, .value=0x28, .type=IO_READ},
        {.addr=0x95a3, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_019D) {
    const struct CPU_State initial_cpu = {.pc=0xf25c, .a=0x8c, .x=0x2e, .y=0xaf, .sp=0x73, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf25c, .value=0x28}, {.addr=0xf25d, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xf25e, .a=0x04, .x=0x2e, .y=0xaf, .sp=0x73, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf25c, .value=0x28}, {.addr=0xf25d, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xf25c, .value=0x28, .type=IO_READ},
        {.addr=0xf25d, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_019E) {
    const struct CPU_State initial_cpu = {.pc=0xf974, .a=0xb5, .x=0x61, .y=0x4f, .sp=0x94, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xf974, .value=0x28}, {.addr=0xf975, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf976, .a=0xa5, .x=0x61, .y=0x4f, .sp=0x94, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf974, .value=0x28}, {.addr=0xf975, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf974, .value=0x28, .type=IO_READ},
        {.addr=0xf975, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_019F) {
    const struct CPU_State initial_cpu = {.pc=0xb612, .a=0x9f, .x=0x49, .y=0x4d, .sp=0x46, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xb612, .value=0x28}, {.addr=0xb613, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xb614, .a=0x95, .x=0x49, .y=0x4d, .sp=0x46, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb612, .value=0x28}, {.addr=0xb613, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xb612, .value=0x28, .type=IO_READ},
        {.addr=0xb613, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x1fab, .a=0x22, .x=0x0f, .y=0x91, .sp=0x6c, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x1fab, .value=0x28}, {.addr=0x1fac, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x1fad, .a=0x20, .x=0x0f, .y=0x91, .sp=0x6c, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1fab, .value=0x28}, {.addr=0x1fac, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x1fab, .value=0x28, .type=IO_READ},
        {.addr=0x1fac, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x9ecd, .a=0xaa, .x=0x85, .y=0x03, .sp=0x23, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x9ecd, .value=0x28}, {.addr=0x9ece, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x9ecf, .a=0x00, .x=0x85, .y=0x03, .sp=0x23, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x9ecd, .value=0x28}, {.addr=0x9ece, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x9ecd, .value=0x28, .type=IO_READ},
        {.addr=0x9ece, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x8c08, .a=0x97, .x=0xc8, .y=0xc2, .sp=0xc8, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x8c08, .value=0x28}, {.addr=0x8c09, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x8c0a, .a=0x01, .x=0xc8, .y=0xc2, .sp=0xc8, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8c08, .value=0x28}, {.addr=0x8c09, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x8c08, .value=0x28, .type=IO_READ},
        {.addr=0x8c09, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x6444, .a=0xf2, .x=0xe6, .y=0x4a, .sp=0x08, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x6444, .value=0x28}, {.addr=0x6445, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6446, .a=0xf0, .x=0xe6, .y=0x4a, .sp=0x08, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6444, .value=0x28}, {.addr=0x6445, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6444, .value=0x28, .type=IO_READ},
        {.addr=0x6445, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xa808, .a=0xf0, .x=0xce, .y=0x72, .sp=0x57, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xa808, .value=0x28}, {.addr=0xa809, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xa80a, .a=0x90, .x=0xce, .y=0x72, .sp=0x57, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa808, .value=0x28}, {.addr=0xa809, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xa808, .value=0x28, .type=IO_READ},
        {.addr=0xa809, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x97b2, .a=0x0c, .x=0xf2, .y=0xb7, .sp=0xeb, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x97b2, .value=0x28}, {.addr=0x97b3, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x97b4, .a=0x0c, .x=0xf2, .y=0xb7, .sp=0xeb, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x97b2, .value=0x28}, {.addr=0x97b3, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x97b2, .value=0x28, .type=IO_READ},
        {.addr=0x97b3, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x3703, .a=0x53, .x=0xbb, .y=0x43, .sp=0xc5, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x3703, .value=0x28}, {.addr=0x3704, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x3705, .a=0x51, .x=0xbb, .y=0x43, .sp=0xc5, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x3703, .value=0x28}, {.addr=0x3704, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x3703, .value=0x28, .type=IO_READ},
        {.addr=0x3704, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xe13c, .a=0x87, .x=0x09, .y=0xe6, .sp=0x81, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe13c, .value=0x28}, {.addr=0xe13d, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xe13e, .a=0x03, .x=0x09, .y=0xe6, .sp=0x81, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xe13c, .value=0x28}, {.addr=0xe13d, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xe13c, .value=0x28, .type=IO_READ},
        {.addr=0xe13d, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xe062, .a=0xb2, .x=0x7f, .y=0xa8, .sp=0xc8, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe062, .value=0x28}, {.addr=0xe063, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe064, .a=0x30, .x=0x7f, .y=0xa8, .sp=0xc8, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe062, .value=0x28}, {.addr=0xe063, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe062, .value=0x28, .type=IO_READ},
        {.addr=0xe063, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xaaad, .a=0xd5, .x=0xb2, .y=0xda, .sp=0xfb, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xaaad, .value=0x28}, {.addr=0xaaae, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xaaaf, .a=0x11, .x=0xb2, .y=0xda, .sp=0xfb, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xaaad, .value=0x28}, {.addr=0xaaae, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xaaad, .value=0x28, .type=IO_READ},
        {.addr=0xaaae, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x0e9a, .a=0x26, .x=0xa1, .y=0xdd, .sp=0xc2, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0e9a, .value=0x28}, {.addr=0x0e9b, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x0e9c, .a=0x00, .x=0xa1, .y=0xdd, .sp=0xc2, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0e9a, .value=0x28}, {.addr=0x0e9b, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x0e9a, .value=0x28, .type=IO_READ},
        {.addr=0x0e9b, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x7f3d, .a=0x64, .x=0x40, .y=0xcf, .sp=0x09, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x7f3d, .value=0x28}, {.addr=0x7f3e, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x7f3f, .a=0x44, .x=0x40, .y=0xcf, .sp=0x09, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7f3d, .value=0x28}, {.addr=0x7f3e, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x7f3d, .value=0x28, .type=IO_READ},
        {.addr=0x7f3e, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x807a, .a=0x50, .x=0x65, .y=0x00, .sp=0x57, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x807a, .value=0x28}, {.addr=0x807b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x807c, .a=0x50, .x=0x65, .y=0x00, .sp=0x57, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x807a, .value=0x28}, {.addr=0x807b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x807a, .value=0x28, .type=IO_READ},
        {.addr=0x807b, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x6549, .a=0x88, .x=0x94, .y=0x4c, .sp=0x3c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x6549, .value=0x28}, {.addr=0x654a, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x654b, .a=0x80, .x=0x94, .y=0x4c, .sp=0x3c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x6549, .value=0x28}, {.addr=0x654a, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x6549, .value=0x28, .type=IO_READ},
        {.addr=0x654a, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x19ae, .a=0xb1, .x=0x87, .y=0xb7, .sp=0x99, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x19ae, .value=0x28}, {.addr=0x19af, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x19b0, .a=0x11, .x=0x87, .y=0xb7, .sp=0x99, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x19ae, .value=0x28}, {.addr=0x19af, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x19ae, .value=0x28, .type=IO_READ},
        {.addr=0x19af, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x918f, .a=0x3a, .x=0xcd, .y=0xce, .sp=0x70, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x918f, .value=0x28}, {.addr=0x9190, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x9191, .a=0x1a, .x=0xcd, .y=0xce, .sp=0x70, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x918f, .value=0x28}, {.addr=0x9190, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x918f, .value=0x28, .type=IO_READ},
        {.addr=0x9190, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x5999, .a=0xe3, .x=0xf0, .y=0xc7, .sp=0x2a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x5999, .value=0x28}, {.addr=0x599a, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x599b, .a=0xc2, .x=0xf0, .y=0xc7, .sp=0x2a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5999, .value=0x28}, {.addr=0x599a, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x5999, .value=0x28, .type=IO_READ},
        {.addr=0x599a, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x9cf9, .a=0xc9, .x=0x15, .y=0x42, .sp=0xb7, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x9cf9, .value=0x28}, {.addr=0x9cfa, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x9cfb, .a=0xc0, .x=0x15, .y=0x42, .sp=0xb7, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x9cf9, .value=0x28}, {.addr=0x9cfa, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x9cf9, .value=0x28, .type=IO_READ},
        {.addr=0x9cfa, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x4083, .a=0x14, .x=0xfc, .y=0xed, .sp=0xe8, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x4083, .value=0x28}, {.addr=0x4084, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x4085, .a=0x14, .x=0xfc, .y=0xed, .sp=0xe8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4083, .value=0x28}, {.addr=0x4084, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x4083, .value=0x28, .type=IO_READ},
        {.addr=0x4084, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xc851, .a=0xd2, .x=0x47, .y=0x43, .sp=0x4f, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xc851, .value=0x28}, {.addr=0xc852, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xc853, .a=0xc0, .x=0x47, .y=0x43, .sp=0x4f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xc851, .value=0x28}, {.addr=0xc852, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xc851, .value=0x28, .type=IO_READ},
        {.addr=0xc852, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x0610, .a=0x37, .x=0xa1, .y=0xc8, .sp=0x1b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0610, .value=0x28}, {.addr=0x0611, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x0612, .a=0x25, .x=0xa1, .y=0xc8, .sp=0x1b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0610, .value=0x28}, {.addr=0x0611, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x0610, .value=0x28, .type=IO_READ},
        {.addr=0x0611, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x741a, .a=0xb4, .x=0x09, .y=0xf6, .sp=0x6d, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x741a, .value=0x28}, {.addr=0x741b, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x741c, .a=0x14, .x=0x09, .y=0xf6, .sp=0x6d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x741a, .value=0x28}, {.addr=0x741b, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x741a, .value=0x28, .type=IO_READ},
        {.addr=0x741b, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x4e4f, .a=0x24, .x=0xb5, .y=0xc1, .sp=0x4f, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x4e4f, .value=0x28}, {.addr=0x4e50, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x4e51, .a=0x00, .x=0xb5, .y=0xc1, .sp=0x4f, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x4e4f, .value=0x28}, {.addr=0x4e50, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x4e4f, .value=0x28, .type=IO_READ},
        {.addr=0x4e50, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x34ca, .a=0x11, .x=0x80, .y=0x52, .sp=0xdc, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x34ca, .value=0x28}, {.addr=0x34cb, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x34cc, .a=0x01, .x=0x80, .y=0x52, .sp=0xdc, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x34ca, .value=0x28}, {.addr=0x34cb, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x34ca, .value=0x28, .type=IO_READ},
        {.addr=0x34cb, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x5088, .a=0xdd, .x=0x6c, .y=0xfb, .sp=0x2e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x5088, .value=0x28}, {.addr=0x5089, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x508a, .a=0x8c, .x=0x6c, .y=0xfb, .sp=0x2e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5088, .value=0x28}, {.addr=0x5089, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x5088, .value=0x28, .type=IO_READ},
        {.addr=0x5089, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x5132, .a=0x4d, .x=0xea, .y=0x02, .sp=0x04, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5132, .value=0x28}, {.addr=0x5133, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x5134, .a=0x45, .x=0xea, .y=0x02, .sp=0x04, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5132, .value=0x28}, {.addr=0x5133, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x5132, .value=0x28, .type=IO_READ},
        {.addr=0x5133, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xc212, .a=0x2b, .x=0xc6, .y=0x6d, .sp=0x87, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xc212, .value=0x28}, {.addr=0xc213, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc214, .a=0x02, .x=0xc6, .y=0x6d, .sp=0x87, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc212, .value=0x28}, {.addr=0xc213, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc212, .value=0x28, .type=IO_READ},
        {.addr=0xc213, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x4ba0, .a=0x8c, .x=0x23, .y=0x2b, .sp=0x37, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x4ba0, .value=0x28}, {.addr=0x4ba1, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x4ba2, .a=0x08, .x=0x23, .y=0x2b, .sp=0x37, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4ba0, .value=0x28}, {.addr=0x4ba1, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x4ba0, .value=0x28, .type=IO_READ},
        {.addr=0x4ba1, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xd3b4, .a=0x27, .x=0x34, .y=0x0f, .sp=0x78, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xd3b4, .value=0x28}, {.addr=0xd3b5, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xd3b6, .a=0x04, .x=0x34, .y=0x0f, .sp=0x78, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xd3b4, .value=0x28}, {.addr=0xd3b5, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xd3b4, .value=0x28, .type=IO_READ},
        {.addr=0xd3b5, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xfbe3, .a=0xba, .x=0x72, .y=0x54, .sp=0x43, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe3, .value=0x28}, {.addr=0xfbe4, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xfbe5, .a=0x20, .x=0x72, .y=0x54, .sp=0x43, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xfbe3, .value=0x28}, {.addr=0xfbe4, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xfbe3, .value=0x28, .type=IO_READ},
        {.addr=0xfbe4, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x35ac, .a=0x0b, .x=0x73, .y=0x64, .sp=0x51, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x35ac, .value=0x28}, {.addr=0x35ad, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x35ae, .a=0x01, .x=0x73, .y=0x64, .sp=0x51, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x35ac, .value=0x28}, {.addr=0x35ad, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x35ac, .value=0x28, .type=IO_READ},
        {.addr=0x35ad, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xf8a0, .a=0x4a, .x=0xd0, .y=0xce, .sp=0x4e, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xf8a0, .value=0x28}, {.addr=0xf8a1, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xf8a2, .a=0x48, .x=0xd0, .y=0xce, .sp=0x4e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xf8a0, .value=0x28}, {.addr=0xf8a1, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xf8a0, .value=0x28, .type=IO_READ},
        {.addr=0xf8a1, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xd525, .a=0xa9, .x=0x38, .y=0x08, .sp=0xbc, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xd525, .value=0x28}, {.addr=0xd526, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xd527, .a=0x89, .x=0x38, .y=0x08, .sp=0xbc, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xd525, .value=0x28}, {.addr=0xd526, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xd525, .value=0x28, .type=IO_READ},
        {.addr=0xd526, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x87f8, .a=0xf7, .x=0x18, .y=0xe2, .sp=0x6d, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x87f8, .value=0x28}, {.addr=0x87f9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x87fa, .a=0x54, .x=0x18, .y=0xe2, .sp=0x6d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x87f8, .value=0x28}, {.addr=0x87f9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x87f8, .value=0x28, .type=IO_READ},
        {.addr=0x87f9, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xbc2c, .a=0x91, .x=0x79, .y=0xa7, .sp=0x54, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xbc2c, .value=0x28}, {.addr=0xbc2d, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xbc2e, .a=0x11, .x=0x79, .y=0xa7, .sp=0x54, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xbc2c, .value=0x28}, {.addr=0xbc2d, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xbc2c, .value=0x28, .type=IO_READ},
        {.addr=0xbc2d, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x9387, .a=0x7e, .x=0x6b, .y=0x0b, .sp=0x2a, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9387, .value=0x28}, {.addr=0x9388, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9389, .a=0x0c, .x=0x6b, .y=0x0b, .sp=0x2a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x9387, .value=0x28}, {.addr=0x9388, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9387, .value=0x28, .type=IO_READ},
        {.addr=0x9388, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x439c, .a=0xf3, .x=0xce, .y=0x19, .sp=0x6a, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x439c, .value=0x28}, {.addr=0x439d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x439e, .a=0xf0, .x=0xce, .y=0x19, .sp=0x6a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x439c, .value=0x28}, {.addr=0x439d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x439c, .value=0x28, .type=IO_READ},
        {.addr=0x439d, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x1d17, .a=0x0c, .x=0xb7, .y=0xa4, .sp=0x81, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x1d17, .value=0x28}, {.addr=0x1d18, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x1d19, .a=0x04, .x=0xb7, .y=0xa4, .sp=0x81, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1d17, .value=0x28}, {.addr=0x1d18, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x1d17, .value=0x28, .type=IO_READ},
        {.addr=0x1d18, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xe7fb, .a=0x60, .x=0x4e, .y=0x01, .sp=0xf4, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xe7fb, .value=0x28}, {.addr=0xe7fc, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xe7fd, .a=0x00, .x=0x4e, .y=0x01, .sp=0xf4, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xe7fb, .value=0x28}, {.addr=0xe7fc, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xe7fb, .value=0x28, .type=IO_READ},
        {.addr=0xe7fc, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x96e8, .a=0xa2, .x=0xa4, .y=0x11, .sp=0x86, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x96e8, .value=0x28}, {.addr=0x96e9, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x96ea, .a=0x22, .x=0xa4, .y=0x11, .sp=0x86, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x96e8, .value=0x28}, {.addr=0x96e9, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x96e8, .value=0x28, .type=IO_READ},
        {.addr=0x96e9, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x630b, .a=0x6a, .x=0xa5, .y=0xac, .sp=0x42, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x630b, .value=0x28}, {.addr=0x630c, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x630d, .a=0x0a, .x=0xa5, .y=0xac, .sp=0x42, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x630b, .value=0x28}, {.addr=0x630c, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x630b, .value=0x28, .type=IO_READ},
        {.addr=0x630c, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x4591, .a=0xa3, .x=0x49, .y=0xd3, .sp=0x6e, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4591, .value=0x28}, {.addr=0x4592, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4593, .a=0xa1, .x=0x49, .y=0xd3, .sp=0x6e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4591, .value=0x28}, {.addr=0x4592, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4591, .value=0x28, .type=IO_READ},
        {.addr=0x4592, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x8eaf, .a=0xed, .x=0xf4, .y=0x26, .sp=0xac, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x8eaf, .value=0x28}, {.addr=0x8eb0, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x8eb1, .a=0x64, .x=0xf4, .y=0x26, .sp=0xac, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x8eaf, .value=0x28}, {.addr=0x8eb0, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x8eaf, .value=0x28, .type=IO_READ},
        {.addr=0x8eb0, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x2a46, .a=0xc3, .x=0x73, .y=0x7e, .sp=0xa2, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2a46, .value=0x28}, {.addr=0x2a47, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2a48, .a=0x82, .x=0x73, .y=0x7e, .sp=0xa2, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2a46, .value=0x28}, {.addr=0x2a47, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2a46, .value=0x28, .type=IO_READ},
        {.addr=0x2a47, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x1392, .a=0xc8, .x=0x54, .y=0x2b, .sp=0xdc, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x1392, .value=0x28}, {.addr=0x1393, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x1394, .a=0x08, .x=0x54, .y=0x2b, .sp=0xdc, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1392, .value=0x28}, {.addr=0x1393, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x1392, .value=0x28, .type=IO_READ},
        {.addr=0x1393, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x367e, .a=0x6a, .x=0x61, .y=0x4d, .sp=0xce, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x367e, .value=0x28}, {.addr=0x367f, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x3680, .a=0x42, .x=0x61, .y=0x4d, .sp=0xce, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x367e, .value=0x28}, {.addr=0x367f, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x367e, .value=0x28, .type=IO_READ},
        {.addr=0x367f, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x0d87, .a=0xc1, .x=0x47, .y=0x36, .sp=0x98, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0d87, .value=0x28}, {.addr=0x0d88, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x0d89, .a=0xc1, .x=0x47, .y=0x36, .sp=0x98, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0d87, .value=0x28}, {.addr=0x0d88, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x0d87, .value=0x28, .type=IO_READ},
        {.addr=0x0d88, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xb466, .a=0x41, .x=0x4c, .y=0x27, .sp=0xbe, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xb466, .value=0x28}, {.addr=0xb467, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb468, .a=0x01, .x=0x4c, .y=0x27, .sp=0xbe, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xb466, .value=0x28}, {.addr=0xb467, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb466, .value=0x28, .type=IO_READ},
        {.addr=0xb467, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x9814, .a=0xf0, .x=0x8f, .y=0x33, .sp=0xb4, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x9814, .value=0x28}, {.addr=0x9815, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x9816, .a=0xb0, .x=0x8f, .y=0x33, .sp=0xb4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x9814, .value=0x28}, {.addr=0x9815, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x9814, .value=0x28, .type=IO_READ},
        {.addr=0x9815, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xda56, .a=0xa4, .x=0x4e, .y=0xb3, .sp=0x17, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xda56, .value=0x28}, {.addr=0xda57, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xda58, .a=0x20, .x=0x4e, .y=0xb3, .sp=0x17, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xda56, .value=0x28}, {.addr=0xda57, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xda56, .value=0x28, .type=IO_READ},
        {.addr=0xda57, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x3817, .a=0x71, .x=0x07, .y=0x5f, .sp=0x31, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x3817, .value=0x28}, {.addr=0x3818, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x3819, .a=0x41, .x=0x07, .y=0x5f, .sp=0x31, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x3817, .value=0x28}, {.addr=0x3818, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x3817, .value=0x28, .type=IO_READ},
        {.addr=0x3818, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xddef, .a=0xd6, .x=0x86, .y=0x73, .sp=0x04, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xddef, .value=0x28}, {.addr=0xddf0, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xddf1, .a=0x80, .x=0x86, .y=0x73, .sp=0x04, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xddef, .value=0x28}, {.addr=0xddf0, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xddef, .value=0x28, .type=IO_READ},
        {.addr=0xddf0, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x5333, .a=0xd4, .x=0x5c, .y=0x1f, .sp=0xd8, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x5333, .value=0x28}, {.addr=0x5334, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5335, .a=0x44, .x=0x5c, .y=0x1f, .sp=0xd8, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x5333, .value=0x28}, {.addr=0x5334, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5333, .value=0x28, .type=IO_READ},
        {.addr=0x5334, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x15d9, .a=0xa5, .x=0x03, .y=0xf4, .sp=0xdd, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x15d9, .value=0x28}, {.addr=0x15da, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x15db, .a=0x04, .x=0x03, .y=0xf4, .sp=0xdd, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x15d9, .value=0x28}, {.addr=0x15da, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x15d9, .value=0x28, .type=IO_READ},
        {.addr=0x15da, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xae8a, .a=0x87, .x=0x8b, .y=0x2e, .sp=0x36, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xae8a, .value=0x28}, {.addr=0xae8b, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xae8c, .a=0x01, .x=0x8b, .y=0x2e, .sp=0x36, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xae8a, .value=0x28}, {.addr=0xae8b, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xae8a, .value=0x28, .type=IO_READ},
        {.addr=0xae8b, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xf5bf, .a=0xa2, .x=0x92, .y=0x1b, .sp=0xc6, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xf5bf, .value=0x28}, {.addr=0xf5c0, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xf5c1, .a=0xa0, .x=0x92, .y=0x1b, .sp=0xc6, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf5bf, .value=0x28}, {.addr=0xf5c0, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xf5bf, .value=0x28, .type=IO_READ},
        {.addr=0xf5c0, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x402d, .a=0x42, .x=0x4b, .y=0x1e, .sp=0xdd, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x402d, .value=0x28}, {.addr=0x402e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x402f, .a=0x40, .x=0x4b, .y=0x1e, .sp=0xdd, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x402d, .value=0x28}, {.addr=0x402e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x402d, .value=0x28, .type=IO_READ},
        {.addr=0x402e, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x740d, .a=0x97, .x=0xf2, .y=0x00, .sp=0xad, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x740d, .value=0x28}, {.addr=0x740e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x740f, .a=0x00, .x=0xf2, .y=0x00, .sp=0xad, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x740d, .value=0x28}, {.addr=0x740e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x740d, .value=0x28, .type=IO_READ},
        {.addr=0x740e, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x77fe, .a=0x65, .x=0x0c, .y=0x92, .sp=0x26, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x77fe, .value=0x28}, {.addr=0x77ff, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x7800, .a=0x64, .x=0x0c, .y=0x92, .sp=0x26, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x77fe, .value=0x28}, {.addr=0x77ff, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x77fe, .value=0x28, .type=IO_READ},
        {.addr=0x77ff, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x3206, .a=0x37, .x=0x36, .y=0x99, .sp=0xe0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x3206, .value=0x28}, {.addr=0x3207, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x3208, .a=0x04, .x=0x36, .y=0x99, .sp=0xe0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3206, .value=0x28}, {.addr=0x3207, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x3206, .value=0x28, .type=IO_READ},
        {.addr=0x3207, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xeaea, .a=0xd8, .x=0x75, .y=0x39, .sp=0xfb, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xeaea, .value=0x28}, {.addr=0xeaeb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xeaec, .a=0x48, .x=0x75, .y=0x39, .sp=0xfb, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xeaea, .value=0x28}, {.addr=0xeaeb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xeaea, .value=0x28, .type=IO_READ},
        {.addr=0xeaeb, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x6e12, .a=0xb1, .x=0xdb, .y=0xcb, .sp=0x1d, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6e12, .value=0x28}, {.addr=0x6e13, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x6e14, .a=0x10, .x=0xdb, .y=0xcb, .sp=0x1d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6e12, .value=0x28}, {.addr=0x6e13, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x6e12, .value=0x28, .type=IO_READ},
        {.addr=0x6e13, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xd721, .a=0x32, .x=0xbc, .y=0x81, .sp=0x8f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xd721, .value=0x28}, {.addr=0xd722, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xd723, .a=0x00, .x=0xbc, .y=0x81, .sp=0x8f, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xd721, .value=0x28}, {.addr=0xd722, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xd721, .value=0x28, .type=IO_READ},
        {.addr=0xd722, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xc534, .a=0xfb, .x=0xee, .y=0x87, .sp=0x17, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xc534, .value=0x28}, {.addr=0xc535, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xc536, .a=0xd2, .x=0xee, .y=0x87, .sp=0x17, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xc534, .value=0x28}, {.addr=0xc535, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xc534, .value=0x28, .type=IO_READ},
        {.addr=0xc535, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xc6fc, .a=0xf3, .x=0xde, .y=0x87, .sp=0xc2, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xc6fc, .value=0x28}, {.addr=0xc6fd, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xc6fe, .a=0x83, .x=0xde, .y=0x87, .sp=0xc2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc6fc, .value=0x28}, {.addr=0xc6fd, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xc6fc, .value=0x28, .type=IO_READ},
        {.addr=0xc6fd, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x69df, .a=0x09, .x=0xa2, .y=0x7c, .sp=0x28, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x69df, .value=0x28}, {.addr=0x69e0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x69e1, .a=0x09, .x=0xa2, .y=0x7c, .sp=0x28, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x69df, .value=0x28}, {.addr=0x69e0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x69df, .value=0x28, .type=IO_READ},
        {.addr=0x69e0, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x7fe8, .a=0xb5, .x=0x41, .y=0x66, .sp=0x0d, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x7fe8, .value=0x28}, {.addr=0x7fe9, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x7fea, .a=0xb4, .x=0x41, .y=0x66, .sp=0x0d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x7fe8, .value=0x28}, {.addr=0x7fe9, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x7fe8, .value=0x28, .type=IO_READ},
        {.addr=0x7fe9, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x34d7, .a=0x6a, .x=0x56, .y=0x93, .sp=0x3c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x34d7, .value=0x28}, {.addr=0x34d8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x34d9, .a=0x28, .x=0x56, .y=0x93, .sp=0x3c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x34d7, .value=0x28}, {.addr=0x34d8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x34d7, .value=0x28, .type=IO_READ},
        {.addr=0x34d8, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x1531, .a=0x08, .x=0x17, .y=0xe7, .sp=0x08, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x1531, .value=0x28}, {.addr=0x1532, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x1533, .a=0x00, .x=0x17, .y=0xe7, .sp=0x08, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x1531, .value=0x28}, {.addr=0x1532, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x1531, .value=0x28, .type=IO_READ},
        {.addr=0x1532, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xe3bf, .a=0x39, .x=0x49, .y=0x25, .sp=0x48, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xe3bf, .value=0x28}, {.addr=0xe3c0, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xe3c1, .a=0x29, .x=0x49, .y=0x25, .sp=0x48, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xe3bf, .value=0x28}, {.addr=0xe3c0, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xe3bf, .value=0x28, .type=IO_READ},
        {.addr=0xe3c0, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xd455, .a=0x74, .x=0x33, .y=0xf8, .sp=0xb8, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xd455, .value=0x28}, {.addr=0xd456, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xd457, .a=0x00, .x=0x33, .y=0xf8, .sp=0xb8, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xd455, .value=0x28}, {.addr=0xd456, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xd455, .value=0x28, .type=IO_READ},
        {.addr=0xd456, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x4fe6, .a=0xd8, .x=0x62, .y=0xda, .sp=0xb4, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x4fe6, .value=0x28}, {.addr=0x4fe7, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x4fe8, .a=0x10, .x=0x62, .y=0xda, .sp=0xb4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4fe6, .value=0x28}, {.addr=0x4fe7, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x4fe6, .value=0x28, .type=IO_READ},
        {.addr=0x4fe7, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xaed1, .a=0xba, .x=0xa2, .y=0x64, .sp=0x9d, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xaed1, .value=0x28}, {.addr=0xaed2, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xaed3, .a=0x10, .x=0xa2, .y=0x64, .sp=0x9d, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xaed1, .value=0x28}, {.addr=0xaed2, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xaed1, .value=0x28, .type=IO_READ},
        {.addr=0xaed2, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x2dbe, .a=0x25, .x=0x7e, .y=0xd8, .sp=0x61, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x2dbe, .value=0x28}, {.addr=0x2dbf, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2dc0, .a=0x00, .x=0x7e, .y=0xd8, .sp=0x61, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x2dbe, .value=0x28}, {.addr=0x2dbf, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2dbe, .value=0x28, .type=IO_READ},
        {.addr=0x2dbf, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xcd46, .a=0x7c, .x=0xd1, .y=0x5e, .sp=0xe4, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xcd46, .value=0x28}, {.addr=0xcd47, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcd48, .a=0x1c, .x=0xd1, .y=0x5e, .sp=0xe4, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xcd46, .value=0x28}, {.addr=0xcd47, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcd46, .value=0x28, .type=IO_READ},
        {.addr=0xcd47, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x2ee4, .a=0x56, .x=0xb8, .y=0x3d, .sp=0xc9, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x2ee4, .value=0x28}, {.addr=0x2ee5, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x2ee6, .a=0x00, .x=0xb8, .y=0x3d, .sp=0xc9, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x2ee4, .value=0x28}, {.addr=0x2ee5, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x2ee4, .value=0x28, .type=IO_READ},
        {.addr=0x2ee5, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x6ace, .a=0x4a, .x=0x1b, .y=0xc8, .sp=0x2c, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x6ace, .value=0x28}, {.addr=0x6acf, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x6ad0, .a=0x4a, .x=0x1b, .y=0xc8, .sp=0x2c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6ace, .value=0x28}, {.addr=0x6acf, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x6ace, .value=0x28, .type=IO_READ},
        {.addr=0x6acf, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x8577, .a=0x65, .x=0x51, .y=0xaf, .sp=0x4b, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8577, .value=0x28}, {.addr=0x8578, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x8579, .a=0x64, .x=0x51, .y=0xaf, .sp=0x4b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8577, .value=0x28}, {.addr=0x8578, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x8577, .value=0x28, .type=IO_READ},
        {.addr=0x8578, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x8a6a, .a=0x79, .x=0xeb, .y=0x77, .sp=0x9b, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x8a6a, .value=0x28}, {.addr=0x8a6b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8a6c, .a=0x69, .x=0xeb, .y=0x77, .sp=0x9b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8a6a, .value=0x28}, {.addr=0x8a6b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8a6a, .value=0x28, .type=IO_READ},
        {.addr=0x8a6b, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x2413, .a=0xf2, .x=0xd3, .y=0x0e, .sp=0x38, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x2413, .value=0x28}, {.addr=0x2414, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2415, .a=0xa2, .x=0xd3, .y=0x0e, .sp=0x38, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2413, .value=0x28}, {.addr=0x2414, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2413, .value=0x28, .type=IO_READ},
        {.addr=0x2414, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x38f4, .a=0xf1, .x=0x2f, .y=0x22, .sp=0x92, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x38f4, .value=0x28}, {.addr=0x38f5, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x38f6, .a=0x61, .x=0x2f, .y=0x22, .sp=0x92, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x38f4, .value=0x28}, {.addr=0x38f5, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x38f4, .value=0x28, .type=IO_READ},
        {.addr=0x38f5, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x8e4b, .a=0xf3, .x=0xb8, .y=0xdb, .sp=0x8b, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x8e4b, .value=0x28}, {.addr=0x8e4c, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x8e4d, .a=0xb3, .x=0xb8, .y=0xdb, .sp=0x8b, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x8e4b, .value=0x28}, {.addr=0x8e4c, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x8e4b, .value=0x28, .type=IO_READ},
        {.addr=0x8e4c, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x4f76, .a=0x96, .x=0x7a, .y=0xa0, .sp=0xc0, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x4f76, .value=0x28}, {.addr=0x4f77, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x4f78, .a=0x96, .x=0x7a, .y=0xa0, .sp=0xc0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x4f76, .value=0x28}, {.addr=0x4f77, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x4f76, .value=0x28, .type=IO_READ},
        {.addr=0x4f77, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xc3c1, .a=0x61, .x=0x82, .y=0x88, .sp=0x9d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xc3c1, .value=0x28}, {.addr=0xc3c2, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xc3c3, .a=0x21, .x=0x82, .y=0x88, .sp=0x9d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc3c1, .value=0x28}, {.addr=0xc3c2, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xc3c1, .value=0x28, .type=IO_READ},
        {.addr=0xc3c2, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xb362, .a=0x10, .x=0xb7, .y=0x22, .sp=0x7e, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xb362, .value=0x28}, {.addr=0xb363, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xb364, .a=0x00, .x=0xb7, .y=0x22, .sp=0x7e, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xb362, .value=0x28}, {.addr=0xb363, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xb362, .value=0x28, .type=IO_READ},
        {.addr=0xb363, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xabbf, .a=0x9d, .x=0xd4, .y=0x59, .sp=0x57, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xabbf, .value=0x28}, {.addr=0xabc0, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xabc1, .a=0x94, .x=0xd4, .y=0x59, .sp=0x57, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xabbf, .value=0x28}, {.addr=0xabc0, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xabbf, .value=0x28, .type=IO_READ},
        {.addr=0xabc0, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x171a, .a=0xf8, .x=0xa2, .y=0x6e, .sp=0x0a, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x171a, .value=0x28}, {.addr=0x171b, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x171c, .a=0x50, .x=0xa2, .y=0x6e, .sp=0x0a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x171a, .value=0x28}, {.addr=0x171b, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x171a, .value=0x28, .type=IO_READ},
        {.addr=0x171b, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x2c99, .a=0x38, .x=0x38, .y=0xfc, .sp=0xad, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x2c99, .value=0x28}, {.addr=0x2c9a, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x2c9b, .a=0x38, .x=0x38, .y=0xfc, .sp=0xad, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2c99, .value=0x28}, {.addr=0x2c9a, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x2c99, .value=0x28, .type=IO_READ},
        {.addr=0x2c9a, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xb534, .a=0x81, .x=0xa9, .y=0x37, .sp=0x2e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xb534, .value=0x28}, {.addr=0xb535, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xb536, .a=0x00, .x=0xa9, .y=0x37, .sp=0x2e, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xb534, .value=0x28}, {.addr=0xb535, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xb534, .value=0x28, .type=IO_READ},
        {.addr=0xb535, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xd09f, .a=0x0a, .x=0x04, .y=0xf7, .sp=0x5e, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd09f, .value=0x28}, {.addr=0xd0a0, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xd0a1, .a=0x08, .x=0x04, .y=0xf7, .sp=0x5e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xd09f, .value=0x28}, {.addr=0xd0a0, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xd09f, .value=0x28, .type=IO_READ},
        {.addr=0xd0a0, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xdb69, .a=0xe7, .x=0xed, .y=0xe7, .sp=0x04, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xdb69, .value=0x28}, {.addr=0xdb6a, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xdb6b, .a=0xe2, .x=0xed, .y=0xe7, .sp=0x04, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xdb69, .value=0x28}, {.addr=0xdb6a, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xdb69, .value=0x28, .type=IO_READ},
        {.addr=0xdb6a, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x7e4c, .a=0x02, .x=0xfa, .y=0x8c, .sp=0xca, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x7e4c, .value=0x28}, {.addr=0x7e4d, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x7e4e, .a=0x00, .x=0xfa, .y=0x8c, .sp=0xca, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x7e4c, .value=0x28}, {.addr=0x7e4d, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x7e4c, .value=0x28, .type=IO_READ},
        {.addr=0x7e4d, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x1d36, .a=0xb2, .x=0xdf, .y=0x85, .sp=0x0a, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x1d36, .value=0x28}, {.addr=0x1d37, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1d38, .a=0xb0, .x=0xdf, .y=0x85, .sp=0x0a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x1d36, .value=0x28}, {.addr=0x1d37, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1d36, .value=0x28, .type=IO_READ},
        {.addr=0x1d37, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xc2b0, .a=0xc3, .x=0x49, .y=0x56, .sp=0xdc, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xc2b0, .value=0x28}, {.addr=0xc2b1, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xc2b2, .a=0xc0, .x=0x49, .y=0x56, .sp=0xdc, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc2b0, .value=0x28}, {.addr=0xc2b1, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xc2b0, .value=0x28, .type=IO_READ},
        {.addr=0xc2b1, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xda31, .a=0xaa, .x=0xa2, .y=0xfa, .sp=0x83, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xda31, .value=0x28}, {.addr=0xda32, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xda33, .a=0xa8, .x=0xa2, .y=0xfa, .sp=0x83, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xda31, .value=0x28}, {.addr=0xda32, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xda31, .value=0x28, .type=IO_READ},
        {.addr=0xda32, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x5914, .a=0x02, .x=0x20, .y=0x62, .sp=0x39, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x5914, .value=0x28}, {.addr=0x5915, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x5916, .a=0x02, .x=0x20, .y=0x62, .sp=0x39, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5914, .value=0x28}, {.addr=0x5915, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x5914, .value=0x28, .type=IO_READ},
        {.addr=0x5915, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0200) {
    const struct CPU_State initial_cpu = {.pc=0xc5d7, .a=0x63, .x=0x97, .y=0x35, .sp=0x50, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xc5d7, .value=0x28}, {.addr=0xc5d8, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xc5d9, .a=0x40, .x=0x97, .y=0x35, .sp=0x50, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xc5d7, .value=0x28}, {.addr=0xc5d8, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xc5d7, .value=0x28, .type=IO_READ},
        {.addr=0xc5d8, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0201) {
    const struct CPU_State initial_cpu = {.pc=0x986f, .a=0xb5, .x=0xc0, .y=0xba, .sp=0x1e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x986f, .value=0x28}, {.addr=0x9870, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x9871, .a=0x35, .x=0xc0, .y=0xba, .sp=0x1e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x986f, .value=0x28}, {.addr=0x9870, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x986f, .value=0x28, .type=IO_READ},
        {.addr=0x9870, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0202) {
    const struct CPU_State initial_cpu = {.pc=0x14ab, .a=0x79, .x=0xfe, .y=0x7f, .sp=0x1b, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x14ab, .value=0x28}, {.addr=0x14ac, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x14ad, .a=0x49, .x=0xfe, .y=0x7f, .sp=0x1b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x14ab, .value=0x28}, {.addr=0x14ac, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x14ab, .value=0x28, .type=IO_READ},
        {.addr=0x14ac, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0203) {
    const struct CPU_State initial_cpu = {.pc=0xb884, .a=0x0b, .x=0xab, .y=0x03, .sp=0x56, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xb884, .value=0x28}, {.addr=0xb885, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xb886, .a=0x08, .x=0xab, .y=0x03, .sp=0x56, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xb884, .value=0x28}, {.addr=0xb885, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xb884, .value=0x28, .type=IO_READ},
        {.addr=0xb885, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0204) {
    const struct CPU_State initial_cpu = {.pc=0x11a1, .a=0x48, .x=0xd8, .y=0x5a, .sp=0x82, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x11a1, .value=0x28}, {.addr=0x11a2, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x11a3, .a=0x00, .x=0xd8, .y=0x5a, .sp=0x82, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x11a1, .value=0x28}, {.addr=0x11a2, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x11a1, .value=0x28, .type=IO_READ},
        {.addr=0x11a2, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0205) {
    const struct CPU_State initial_cpu = {.pc=0x405b, .a=0x86, .x=0xb4, .y=0x16, .sp=0x9b, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x405b, .value=0x28}, {.addr=0x405c, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x405d, .a=0x86, .x=0xb4, .y=0x16, .sp=0x9b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x405b, .value=0x28}, {.addr=0x405c, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x405b, .value=0x28, .type=IO_READ},
        {.addr=0x405c, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0206) {
    const struct CPU_State initial_cpu = {.pc=0xc2c9, .a=0x9e, .x=0xc8, .y=0xc3, .sp=0x3a, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xc2c9, .value=0x28}, {.addr=0xc2ca, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xc2cb, .a=0x1e, .x=0xc8, .y=0xc3, .sp=0x3a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc2c9, .value=0x28}, {.addr=0xc2ca, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xc2c9, .value=0x28, .type=IO_READ},
        {.addr=0xc2ca, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0207) {
    const struct CPU_State initial_cpu = {.pc=0x4b97, .a=0x3c, .x=0x90, .y=0xeb, .sp=0x79, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4b97, .value=0x28}, {.addr=0x4b98, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x4b99, .a=0x0c, .x=0x90, .y=0xeb, .sp=0x79, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4b97, .value=0x28}, {.addr=0x4b98, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x4b97, .value=0x28, .type=IO_READ},
        {.addr=0x4b98, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0208) {
    const struct CPU_State initial_cpu = {.pc=0xea79, .a=0x1b, .x=0xd2, .y=0x38, .sp=0xf3, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xea79, .value=0x28}, {.addr=0xea7a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xea7b, .a=0x19, .x=0xd2, .y=0x38, .sp=0xf3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xea79, .value=0x28}, {.addr=0xea7a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xea79, .value=0x28, .type=IO_READ},
        {.addr=0xea7a, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0209) {
    const struct CPU_State initial_cpu = {.pc=0x7f07, .a=0x7f, .x=0xf1, .y=0x9b, .sp=0xec, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x7f07, .value=0x28}, {.addr=0x7f08, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x7f09, .a=0x6e, .x=0xf1, .y=0x9b, .sp=0xec, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x7f07, .value=0x28}, {.addr=0x7f08, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x7f07, .value=0x28, .type=IO_READ},
        {.addr=0x7f08, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_020A) {
    const struct CPU_State initial_cpu = {.pc=0x0434, .a=0x2f, .x=0x67, .y=0x92, .sp=0x98, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0434, .value=0x28}, {.addr=0x0435, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x0436, .a=0x01, .x=0x67, .y=0x92, .sp=0x98, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0434, .value=0x28}, {.addr=0x0435, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x0434, .value=0x28, .type=IO_READ},
        {.addr=0x0435, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_020B) {
    const struct CPU_State initial_cpu = {.pc=0x3733, .a=0x90, .x=0x8b, .y=0x59, .sp=0x50, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x3733, .value=0x28}, {.addr=0x3734, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x3735, .a=0x80, .x=0x8b, .y=0x59, .sp=0x50, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3733, .value=0x28}, {.addr=0x3734, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x3733, .value=0x28, .type=IO_READ},
        {.addr=0x3734, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_020C) {
    const struct CPU_State initial_cpu = {.pc=0x2730, .a=0x7b, .x=0xff, .y=0x64, .sp=0x19, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x2730, .value=0x28}, {.addr=0x2731, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x2732, .a=0x48, .x=0xff, .y=0x64, .sp=0x19, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2730, .value=0x28}, {.addr=0x2731, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x2730, .value=0x28, .type=IO_READ},
        {.addr=0x2731, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_020D) {
    const struct CPU_State initial_cpu = {.pc=0xd5f6, .a=0x11, .x=0x56, .y=0x96, .sp=0x06, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f6, .value=0x28}, {.addr=0xd5f7, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xd5f8, .a=0x11, .x=0x56, .y=0x96, .sp=0x06, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd5f6, .value=0x28}, {.addr=0xd5f7, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xd5f6, .value=0x28, .type=IO_READ},
        {.addr=0xd5f7, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_020E) {
    const struct CPU_State initial_cpu = {.pc=0x3d92, .a=0x20, .x=0x89, .y=0x76, .sp=0x70, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x3d92, .value=0x28}, {.addr=0x3d93, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x3d94, .a=0x20, .x=0x89, .y=0x76, .sp=0x70, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x3d92, .value=0x28}, {.addr=0x3d93, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x3d92, .value=0x28, .type=IO_READ},
        {.addr=0x3d93, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_020F) {
    const struct CPU_State initial_cpu = {.pc=0xb6df, .a=0xdc, .x=0xe4, .y=0xbf, .sp=0xd3, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xb6df, .value=0x28}, {.addr=0xb6e0, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xb6e1, .a=0xc0, .x=0xe4, .y=0xbf, .sp=0xd3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb6df, .value=0x28}, {.addr=0xb6e0, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xb6df, .value=0x28, .type=IO_READ},
        {.addr=0xb6e0, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0210) {
    const struct CPU_State initial_cpu = {.pc=0xcf9c, .a=0x01, .x=0x41, .y=0x0c, .sp=0x1e, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xcf9c, .value=0x28}, {.addr=0xcf9d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcf9e, .a=0x00, .x=0x41, .y=0x0c, .sp=0x1e, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xcf9c, .value=0x28}, {.addr=0xcf9d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcf9c, .value=0x28, .type=IO_READ},
        {.addr=0xcf9d, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0211) {
    const struct CPU_State initial_cpu = {.pc=0x2ea6, .a=0xb2, .x=0xa4, .y=0x2c, .sp=0xb6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2ea6, .value=0x28}, {.addr=0x2ea7, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x2ea8, .a=0xa2, .x=0xa4, .y=0x2c, .sp=0xb6, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x2ea6, .value=0x28}, {.addr=0x2ea7, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x2ea6, .value=0x28, .type=IO_READ},
        {.addr=0x2ea7, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0212) {
    const struct CPU_State initial_cpu = {.pc=0x6e16, .a=0xd2, .x=0x0e, .y=0x98, .sp=0x54, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x6e16, .value=0x28}, {.addr=0x6e17, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x6e18, .a=0x42, .x=0x0e, .y=0x98, .sp=0x54, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6e16, .value=0x28}, {.addr=0x6e17, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x6e16, .value=0x28, .type=IO_READ},
        {.addr=0x6e17, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0213) {
    const struct CPU_State initial_cpu = {.pc=0x7ff9, .a=0x5b, .x=0x2c, .y=0x77, .sp=0x1c, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x7ff9, .value=0x28}, {.addr=0x7ffa, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x7ffb, .a=0x00, .x=0x2c, .y=0x77, .sp=0x1c, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x7ff9, .value=0x28}, {.addr=0x7ffa, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x7ff9, .value=0x28, .type=IO_READ},
        {.addr=0x7ffa, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0214) {
    const struct CPU_State initial_cpu = {.pc=0x7032, .a=0x68, .x=0x68, .y=0xe8, .sp=0xfd, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x7032, .value=0x28}, {.addr=0x7033, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x7034, .a=0x60, .x=0x68, .y=0xe8, .sp=0xfd, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7032, .value=0x28}, {.addr=0x7033, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x7032, .value=0x28, .type=IO_READ},
        {.addr=0x7033, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0215) {
    const struct CPU_State initial_cpu = {.pc=0x48bf, .a=0x5a, .x=0x3c, .y=0xe0, .sp=0xe0, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x48bf, .value=0x28}, {.addr=0x48c0, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x48c1, .a=0x42, .x=0x3c, .y=0xe0, .sp=0xe0, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x48bf, .value=0x28}, {.addr=0x48c0, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x48bf, .value=0x28, .type=IO_READ},
        {.addr=0x48c0, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0216) {
    const struct CPU_State initial_cpu = {.pc=0x95c2, .a=0x03, .x=0xab, .y=0x91, .sp=0x52, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x95c2, .value=0x28}, {.addr=0x95c3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x95c4, .a=0x02, .x=0xab, .y=0x91, .sp=0x52, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x95c2, .value=0x28}, {.addr=0x95c3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x95c2, .value=0x28, .type=IO_READ},
        {.addr=0x95c3, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0217) {
    const struct CPU_State initial_cpu = {.pc=0xc571, .a=0x98, .x=0xd9, .y=0x90, .sp=0x9e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xc571, .value=0x28}, {.addr=0xc572, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xc573, .a=0x80, .x=0xd9, .y=0x90, .sp=0x9e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc571, .value=0x28}, {.addr=0xc572, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xc571, .value=0x28, .type=IO_READ},
        {.addr=0xc572, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0218) {
    const struct CPU_State initial_cpu = {.pc=0xe68a, .a=0x22, .x=0x41, .y=0x48, .sp=0x32, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xe68a, .value=0x28}, {.addr=0xe68b, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xe68c, .a=0x22, .x=0x41, .y=0x48, .sp=0x32, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xe68a, .value=0x28}, {.addr=0xe68b, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xe68a, .value=0x28, .type=IO_READ},
        {.addr=0xe68b, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0219) {
    const struct CPU_State initial_cpu = {.pc=0xc8e4, .a=0x2e, .x=0x24, .y=0x33, .sp=0x56, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e4, .value=0x28}, {.addr=0xc8e5, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xc8e6, .a=0x22, .x=0x24, .y=0x33, .sp=0x56, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc8e4, .value=0x28}, {.addr=0xc8e5, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xc8e4, .value=0x28, .type=IO_READ},
        {.addr=0xc8e5, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_021A) {
    const struct CPU_State initial_cpu = {.pc=0xbc67, .a=0x79, .x=0xbe, .y=0xe8, .sp=0x39, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xbc67, .value=0x28}, {.addr=0xbc68, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xbc69, .a=0x48, .x=0xbe, .y=0xe8, .sp=0x39, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xbc67, .value=0x28}, {.addr=0xbc68, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xbc67, .value=0x28, .type=IO_READ},
        {.addr=0xbc68, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_021B) {
    const struct CPU_State initial_cpu = {.pc=0x540a, .a=0xa2, .x=0x7c, .y=0x5c, .sp=0x66, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x540a, .value=0x28}, {.addr=0x540b, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x540c, .a=0x02, .x=0x7c, .y=0x5c, .sp=0x66, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x540a, .value=0x28}, {.addr=0x540b, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x540a, .value=0x28, .type=IO_READ},
        {.addr=0x540b, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_021C) {
    const struct CPU_State initial_cpu = {.pc=0x17d1, .a=0x6d, .x=0xd9, .y=0x13, .sp=0x5b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x17d1, .value=0x28}, {.addr=0x17d2, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x17d3, .a=0x21, .x=0xd9, .y=0x13, .sp=0x5b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x17d1, .value=0x28}, {.addr=0x17d2, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x17d1, .value=0x28, .type=IO_READ},
        {.addr=0x17d2, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_021D) {
    const struct CPU_State initial_cpu = {.pc=0xbf21, .a=0xd0, .x=0x82, .y=0x03, .sp=0xb5, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xbf21, .value=0x28}, {.addr=0xbf22, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xbf23, .a=0x10, .x=0x82, .y=0x03, .sp=0xb5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xbf21, .value=0x28}, {.addr=0xbf22, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xbf21, .value=0x28, .type=IO_READ},
        {.addr=0xbf22, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_021E) {
    const struct CPU_State initial_cpu = {.pc=0xc670, .a=0xb8, .x=0x00, .y=0x9e, .sp=0x2f, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xc670, .value=0x28}, {.addr=0xc671, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xc672, .a=0x00, .x=0x00, .y=0x9e, .sp=0x2f, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xc670, .value=0x28}, {.addr=0xc671, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xc670, .value=0x28, .type=IO_READ},
        {.addr=0xc671, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_021F) {
    const struct CPU_State initial_cpu = {.pc=0xb955, .a=0xd8, .x=0x8a, .y=0x64, .sp=0xe0, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xb955, .value=0x28}, {.addr=0xb956, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xb957, .a=0xd8, .x=0x8a, .y=0x64, .sp=0xe0, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xb955, .value=0x28}, {.addr=0xb956, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xb955, .value=0x28, .type=IO_READ},
        {.addr=0xb956, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0220) {
    const struct CPU_State initial_cpu = {.pc=0xed2b, .a=0x7a, .x=0x70, .y=0x4b, .sp=0x16, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xed2b, .value=0x28}, {.addr=0xed2c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xed2d, .a=0x18, .x=0x70, .y=0x4b, .sp=0x16, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xed2b, .value=0x28}, {.addr=0xed2c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xed2b, .value=0x28, .type=IO_READ},
        {.addr=0xed2c, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0221) {
    const struct CPU_State initial_cpu = {.pc=0x9eb0, .a=0x65, .x=0x26, .y=0x59, .sp=0xe4, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9eb0, .value=0x28}, {.addr=0x9eb1, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x9eb2, .a=0x60, .x=0x26, .y=0x59, .sp=0xe4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9eb0, .value=0x28}, {.addr=0x9eb1, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x9eb0, .value=0x28, .type=IO_READ},
        {.addr=0x9eb1, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0222) {
    const struct CPU_State initial_cpu = {.pc=0xcbf5, .a=0xd3, .x=0x9c, .y=0xb6, .sp=0x4b, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xcbf5, .value=0x28}, {.addr=0xcbf6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xcbf7, .a=0x80, .x=0x9c, .y=0xb6, .sp=0x4b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xcbf5, .value=0x28}, {.addr=0xcbf6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xcbf5, .value=0x28, .type=IO_READ},
        {.addr=0xcbf6, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0223) {
    const struct CPU_State initial_cpu = {.pc=0x2a1f, .a=0x07, .x=0x33, .y=0x5b, .sp=0xe8, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x2a1f, .value=0x28}, {.addr=0x2a20, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x2a21, .a=0x03, .x=0x33, .y=0x5b, .sp=0xe8, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x2a1f, .value=0x28}, {.addr=0x2a20, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x2a1f, .value=0x28, .type=IO_READ},
        {.addr=0x2a20, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0224) {
    const struct CPU_State initial_cpu = {.pc=0x9f25, .a=0x5a, .x=0x1a, .y=0xea, .sp=0xf3, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x9f25, .value=0x28}, {.addr=0x9f26, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9f27, .a=0x58, .x=0x1a, .y=0xea, .sp=0xf3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x9f25, .value=0x28}, {.addr=0x9f26, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9f25, .value=0x28, .type=IO_READ},
        {.addr=0x9f26, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0225) {
    const struct CPU_State initial_cpu = {.pc=0x69a1, .a=0x8e, .x=0xea, .y=0x6b, .sp=0x67, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x69a1, .value=0x28}, {.addr=0x69a2, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x69a3, .a=0x8e, .x=0xea, .y=0x6b, .sp=0x67, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x69a1, .value=0x28}, {.addr=0x69a2, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x69a1, .value=0x28, .type=IO_READ},
        {.addr=0x69a2, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0226) {
    const struct CPU_State initial_cpu = {.pc=0xd463, .a=0x7d, .x=0x21, .y=0xb2, .sp=0x38, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xd463, .value=0x28}, {.addr=0xd464, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xd465, .a=0x69, .x=0x21, .y=0xb2, .sp=0x38, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xd463, .value=0x28}, {.addr=0xd464, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xd463, .value=0x28, .type=IO_READ},
        {.addr=0xd464, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0227) {
    const struct CPU_State initial_cpu = {.pc=0x606f, .a=0x2e, .x=0x5d, .y=0xab, .sp=0x17, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x606f, .value=0x28}, {.addr=0x6070, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x6071, .a=0x00, .x=0x5d, .y=0xab, .sp=0x17, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x606f, .value=0x28}, {.addr=0x6070, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x606f, .value=0x28, .type=IO_READ},
        {.addr=0x6070, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0228) {
    const struct CPU_State initial_cpu = {.pc=0x2630, .a=0x92, .x=0x73, .y=0x70, .sp=0xdd, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x2630, .value=0x28}, {.addr=0x2631, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x2632, .a=0x12, .x=0x73, .y=0x70, .sp=0xdd, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2630, .value=0x28}, {.addr=0x2631, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x2630, .value=0x28, .type=IO_READ},
        {.addr=0x2631, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0229) {
    const struct CPU_State initial_cpu = {.pc=0x6702, .a=0xf8, .x=0x94, .y=0xb2, .sp=0x34, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6702, .value=0x28}, {.addr=0x6703, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6704, .a=0x20, .x=0x94, .y=0xb2, .sp=0x34, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x6702, .value=0x28}, {.addr=0x6703, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6702, .value=0x28, .type=IO_READ},
        {.addr=0x6703, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_022A) {
    const struct CPU_State initial_cpu = {.pc=0xe29b, .a=0x57, .x=0x42, .y=0x0e, .sp=0x5d, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xe29b, .value=0x28}, {.addr=0xe29c, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xe29d, .a=0x03, .x=0x42, .y=0x0e, .sp=0x5d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe29b, .value=0x28}, {.addr=0xe29c, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xe29b, .value=0x28, .type=IO_READ},
        {.addr=0xe29c, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_022B) {
    const struct CPU_State initial_cpu = {.pc=0xa0c9, .a=0xfd, .x=0xe4, .y=0xe1, .sp=0x39, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xa0c9, .value=0x28}, {.addr=0xa0ca, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xa0cb, .a=0x10, .x=0xe4, .y=0xe1, .sp=0x39, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xa0c9, .value=0x28}, {.addr=0xa0ca, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xa0c9, .value=0x28, .type=IO_READ},
        {.addr=0xa0ca, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_022C) {
    const struct CPU_State initial_cpu = {.pc=0xef16, .a=0xb5, .x=0xa9, .y=0xd2, .sp=0xe5, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xef16, .value=0x28}, {.addr=0xef17, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xef18, .a=0xb4, .x=0xa9, .y=0xd2, .sp=0xe5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xef16, .value=0x28}, {.addr=0xef17, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xef16, .value=0x28, .type=IO_READ},
        {.addr=0xef17, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_022D) {
    const struct CPU_State initial_cpu = {.pc=0xa567, .a=0x57, .x=0xc3, .y=0x76, .sp=0x83, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa567, .value=0x28}, {.addr=0xa568, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xa569, .a=0x04, .x=0xc3, .y=0x76, .sp=0x83, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa567, .value=0x28}, {.addr=0xa568, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xa567, .value=0x28, .type=IO_READ},
        {.addr=0xa568, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_022E) {
    const struct CPU_State initial_cpu = {.pc=0xa7fd, .a=0x9b, .x=0x1f, .y=0x14, .sp=0x3c, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xa7fd, .value=0x28}, {.addr=0xa7fe, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa7ff, .a=0x9b, .x=0x1f, .y=0x14, .sp=0x3c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xa7fd, .value=0x28}, {.addr=0xa7fe, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa7fd, .value=0x28, .type=IO_READ},
        {.addr=0xa7fe, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_022F) {
    const struct CPU_State initial_cpu = {.pc=0x3b73, .a=0x6e, .x=0xf7, .y=0x97, .sp=0x6b, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x3b73, .value=0x28}, {.addr=0x3b74, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x3b75, .a=0x46, .x=0xf7, .y=0x97, .sp=0x6b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3b73, .value=0x28}, {.addr=0x3b74, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x3b73, .value=0x28, .type=IO_READ},
        {.addr=0x3b74, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0230) {
    const struct CPU_State initial_cpu = {.pc=0x2d3d, .a=0x50, .x=0xff, .y=0x36, .sp=0x6b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x2d3d, .value=0x28}, {.addr=0x2d3e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2d3f, .a=0x10, .x=0xff, .y=0x36, .sp=0x6b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x2d3d, .value=0x28}, {.addr=0x2d3e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2d3d, .value=0x28, .type=IO_READ},
        {.addr=0x2d3e, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0231) {
    const struct CPU_State initial_cpu = {.pc=0x99cb, .a=0x91, .x=0x84, .y=0x91, .sp=0xad, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x99cb, .value=0x28}, {.addr=0x99cc, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x99cd, .a=0x81, .x=0x84, .y=0x91, .sp=0xad, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x99cb, .value=0x28}, {.addr=0x99cc, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x99cb, .value=0x28, .type=IO_READ},
        {.addr=0x99cc, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0232) {
    const struct CPU_State initial_cpu = {.pc=0xce9b, .a=0xe5, .x=0xef, .y=0xc3, .sp=0x27, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xce9b, .value=0x28}, {.addr=0xce9c, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xce9d, .a=0x81, .x=0xef, .y=0xc3, .sp=0x27, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xce9b, .value=0x28}, {.addr=0xce9c, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xce9b, .value=0x28, .type=IO_READ},
        {.addr=0xce9c, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0233) {
    const struct CPU_State initial_cpu = {.pc=0x31c3, .a=0x61, .x=0xd5, .y=0x9d, .sp=0x36, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x31c3, .value=0x28}, {.addr=0x31c4, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x31c5, .a=0x40, .x=0xd5, .y=0x9d, .sp=0x36, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x31c3, .value=0x28}, {.addr=0x31c4, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x31c3, .value=0x28, .type=IO_READ},
        {.addr=0x31c4, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0234) {
    const struct CPU_State initial_cpu = {.pc=0x7d6d, .a=0xf3, .x=0x2f, .y=0x88, .sp=0xf9, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x7d6d, .value=0x28}, {.addr=0x7d6e, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x7d6f, .a=0x10, .x=0x2f, .y=0x88, .sp=0xf9, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x7d6d, .value=0x28}, {.addr=0x7d6e, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x7d6d, .value=0x28, .type=IO_READ},
        {.addr=0x7d6e, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0235) {
    const struct CPU_State initial_cpu = {.pc=0x0ae9, .a=0x33, .x=0x9e, .y=0x11, .sp=0xa4, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0ae9, .value=0x28}, {.addr=0x0aea, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x0aeb, .a=0x13, .x=0x9e, .y=0x11, .sp=0xa4, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0ae9, .value=0x28}, {.addr=0x0aea, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x0ae9, .value=0x28, .type=IO_READ},
        {.addr=0x0aea, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0236) {
    const struct CPU_State initial_cpu = {.pc=0xed0d, .a=0xa9, .x=0xa1, .y=0x53, .sp=0x27, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xed0d, .value=0x28}, {.addr=0xed0e, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xed0f, .a=0xa1, .x=0xa1, .y=0x53, .sp=0x27, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xed0d, .value=0x28}, {.addr=0xed0e, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xed0d, .value=0x28, .type=IO_READ},
        {.addr=0xed0e, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0237) {
    const struct CPU_State initial_cpu = {.pc=0x13db, .a=0x98, .x=0x37, .y=0xab, .sp=0xa6, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x13db, .value=0x28}, {.addr=0x13dc, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x13dd, .a=0x90, .x=0x37, .y=0xab, .sp=0xa6, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x13db, .value=0x28}, {.addr=0x13dc, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x13db, .value=0x28, .type=IO_READ},
        {.addr=0x13dc, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0238) {
    const struct CPU_State initial_cpu = {.pc=0xa2d9, .a=0x33, .x=0xd3, .y=0x86, .sp=0xc9, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xa2d9, .value=0x28}, {.addr=0xa2da, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xa2db, .a=0x23, .x=0xd3, .y=0x86, .sp=0xc9, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa2d9, .value=0x28}, {.addr=0xa2da, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xa2d9, .value=0x28, .type=IO_READ},
        {.addr=0xa2da, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0239) {
    const struct CPU_State initial_cpu = {.pc=0x3c24, .a=0x4e, .x=0x0c, .y=0x04, .sp=0x35, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x3c24, .value=0x28}, {.addr=0x3c25, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x3c26, .a=0x4a, .x=0x0c, .y=0x04, .sp=0x35, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x3c24, .value=0x28}, {.addr=0x3c25, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x3c24, .value=0x28, .type=IO_READ},
        {.addr=0x3c25, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_023A) {
    const struct CPU_State initial_cpu = {.pc=0x1eb6, .a=0x85, .x=0xc0, .y=0xc8, .sp=0xbc, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x1eb6, .value=0x28}, {.addr=0x1eb7, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x1eb8, .a=0x01, .x=0xc0, .y=0xc8, .sp=0xbc, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x1eb6, .value=0x28}, {.addr=0x1eb7, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x1eb6, .value=0x28, .type=IO_READ},
        {.addr=0x1eb7, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_023B) {
    const struct CPU_State initial_cpu = {.pc=0x5a0f, .a=0xf7, .x=0x82, .y=0x9f, .sp=0x24, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x5a0f, .value=0x28}, {.addr=0x5a10, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x5a11, .a=0x36, .x=0x82, .y=0x9f, .sp=0x24, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x5a0f, .value=0x28}, {.addr=0x5a10, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x5a0f, .value=0x28, .type=IO_READ},
        {.addr=0x5a10, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_023C) {
    const struct CPU_State initial_cpu = {.pc=0xc29b, .a=0x85, .x=0xa7, .y=0x18, .sp=0x73, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xc29b, .value=0x28}, {.addr=0xc29c, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xc29d, .a=0x84, .x=0xa7, .y=0x18, .sp=0x73, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc29b, .value=0x28}, {.addr=0xc29c, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xc29b, .value=0x28, .type=IO_READ},
        {.addr=0xc29c, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_023D) {
    const struct CPU_State initial_cpu = {.pc=0xd478, .a=0xb4, .x=0x6b, .y=0x09, .sp=0x82, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xd478, .value=0x28}, {.addr=0xd479, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xd47a, .a=0xb0, .x=0x6b, .y=0x09, .sp=0x82, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xd478, .value=0x28}, {.addr=0xd479, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xd478, .value=0x28, .type=IO_READ},
        {.addr=0xd479, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_023E) {
    const struct CPU_State initial_cpu = {.pc=0x25ec, .a=0x35, .x=0xb4, .y=0xe5, .sp=0xd6, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x25ec, .value=0x28}, {.addr=0x25ed, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x25ee, .a=0x21, .x=0xb4, .y=0xe5, .sp=0xd6, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x25ec, .value=0x28}, {.addr=0x25ed, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x25ec, .value=0x28, .type=IO_READ},
        {.addr=0x25ed, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_023F) {
    const struct CPU_State initial_cpu = {.pc=0xfa0e, .a=0xc5, .x=0xde, .y=0xd5, .sp=0x81, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xfa0e, .value=0x28}, {.addr=0xfa0f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfa10, .a=0x84, .x=0xde, .y=0xd5, .sp=0x81, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xfa0e, .value=0x28}, {.addr=0xfa0f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfa0e, .value=0x28, .type=IO_READ},
        {.addr=0xfa0f, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0240) {
    const struct CPU_State initial_cpu = {.pc=0x4719, .a=0xae, .x=0x64, .y=0x8a, .sp=0x71, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x4719, .value=0x28}, {.addr=0x471a, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x471b, .a=0x2e, .x=0x64, .y=0x8a, .sp=0x71, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x4719, .value=0x28}, {.addr=0x471a, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x4719, .value=0x28, .type=IO_READ},
        {.addr=0x471a, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0241) {
    const struct CPU_State initial_cpu = {.pc=0xbdac, .a=0xd4, .x=0x77, .y=0xb1, .sp=0x32, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xbdac, .value=0x28}, {.addr=0xbdad, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xbdae, .a=0x10, .x=0x77, .y=0xb1, .sp=0x32, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xbdac, .value=0x28}, {.addr=0xbdad, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xbdac, .value=0x28, .type=IO_READ},
        {.addr=0xbdad, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0242) {
    const struct CPU_State initial_cpu = {.pc=0xf7a6, .a=0xf6, .x=0xa5, .y=0x6a, .sp=0x49, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xf7a6, .value=0x28}, {.addr=0xf7a7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf7a8, .a=0x00, .x=0xa5, .y=0x6a, .sp=0x49, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xf7a6, .value=0x28}, {.addr=0xf7a7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf7a6, .value=0x28, .type=IO_READ},
        {.addr=0xf7a7, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0243) {
    const struct CPU_State initial_cpu = {.pc=0xb0e8, .a=0x83, .x=0xe0, .y=0x62, .sp=0x79, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xb0e8, .value=0x28}, {.addr=0xb0e9, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xb0ea, .a=0x03, .x=0xe0, .y=0x62, .sp=0x79, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb0e8, .value=0x28}, {.addr=0xb0e9, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xb0e8, .value=0x28, .type=IO_READ},
        {.addr=0xb0e9, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0244) {
    const struct CPU_State initial_cpu = {.pc=0xf91c, .a=0x7a, .x=0x81, .y=0x14, .sp=0x6a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xf91c, .value=0x28}, {.addr=0xf91d, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xf91e, .a=0x00, .x=0x81, .y=0x14, .sp=0x6a, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xf91c, .value=0x28}, {.addr=0xf91d, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xf91c, .value=0x28, .type=IO_READ},
        {.addr=0xf91d, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0245) {
    const struct CPU_State initial_cpu = {.pc=0x7600, .a=0x01, .x=0x2c, .y=0x30, .sp=0xcb, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7600, .value=0x28}, {.addr=0x7601, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x7602, .a=0x01, .x=0x2c, .y=0x30, .sp=0xcb, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7600, .value=0x28}, {.addr=0x7601, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x7600, .value=0x28, .type=IO_READ},
        {.addr=0x7601, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0246) {
    const struct CPU_State initial_cpu = {.pc=0x3b05, .a=0xe3, .x=0xdd, .y=0x39, .sp=0x68, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x3b05, .value=0x28}, {.addr=0x3b06, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x3b07, .a=0x60, .x=0xdd, .y=0x39, .sp=0x68, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3b05, .value=0x28}, {.addr=0x3b06, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x3b05, .value=0x28, .type=IO_READ},
        {.addr=0x3b06, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0247) {
    const struct CPU_State initial_cpu = {.pc=0x93ad, .a=0xe3, .x=0x65, .y=0xc3, .sp=0x40, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x93ad, .value=0x28}, {.addr=0x93ae, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x93af, .a=0x22, .x=0x65, .y=0xc3, .sp=0x40, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x93ad, .value=0x28}, {.addr=0x93ae, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x93ad, .value=0x28, .type=IO_READ},
        {.addr=0x93ae, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0248) {
    const struct CPU_State initial_cpu = {.pc=0xb1ba, .a=0x7d, .x=0x34, .y=0x0a, .sp=0x8f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xb1ba, .value=0x28}, {.addr=0xb1bb, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xb1bc, .a=0x70, .x=0x34, .y=0x0a, .sp=0x8f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb1ba, .value=0x28}, {.addr=0xb1bb, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xb1ba, .value=0x28, .type=IO_READ},
        {.addr=0xb1bb, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0249) {
    const struct CPU_State initial_cpu = {.pc=0x519d, .a=0x22, .x=0xbf, .y=0xfb, .sp=0x1c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x519d, .value=0x28}, {.addr=0x519e, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x519f, .a=0x22, .x=0xbf, .y=0xfb, .sp=0x1c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x519d, .value=0x28}, {.addr=0x519e, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x519d, .value=0x28, .type=IO_READ},
        {.addr=0x519e, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_024A) {
    const struct CPU_State initial_cpu = {.pc=0xbcf5, .a=0x8c, .x=0x7f, .y=0x38, .sp=0xed, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xbcf5, .value=0x28}, {.addr=0xbcf6, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xbcf7, .a=0x88, .x=0x7f, .y=0x38, .sp=0xed, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xbcf5, .value=0x28}, {.addr=0xbcf6, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xbcf5, .value=0x28, .type=IO_READ},
        {.addr=0xbcf6, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_024B) {
    const struct CPU_State initial_cpu = {.pc=0xa778, .a=0x8f, .x=0x26, .y=0xa4, .sp=0xc2, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xa778, .value=0x28}, {.addr=0xa779, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xa77a, .a=0x03, .x=0x26, .y=0xa4, .sp=0xc2, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa778, .value=0x28}, {.addr=0xa779, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xa778, .value=0x28, .type=IO_READ},
        {.addr=0xa779, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_024C) {
    const struct CPU_State initial_cpu = {.pc=0x8d0d, .a=0xdd, .x=0xac, .y=0xaa, .sp=0xca, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x8d0d, .value=0x28}, {.addr=0x8d0e, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x8d0f, .a=0x49, .x=0xac, .y=0xaa, .sp=0xca, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8d0d, .value=0x28}, {.addr=0x8d0e, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x8d0d, .value=0x28, .type=IO_READ},
        {.addr=0x8d0e, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_024D) {
    const struct CPU_State initial_cpu = {.pc=0x774c, .a=0xb7, .x=0x3c, .y=0xd2, .sp=0x98, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x774c, .value=0x28}, {.addr=0x774d, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x774e, .a=0x33, .x=0x3c, .y=0xd2, .sp=0x98, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x774c, .value=0x28}, {.addr=0x774d, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x774c, .value=0x28, .type=IO_READ},
        {.addr=0x774d, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_024E) {
    const struct CPU_State initial_cpu = {.pc=0xbf21, .a=0x74, .x=0x3e, .y=0x53, .sp=0xc5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xbf21, .value=0x28}, {.addr=0xbf22, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xbf23, .a=0x60, .x=0x3e, .y=0x53, .sp=0xc5, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xbf21, .value=0x28}, {.addr=0xbf22, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xbf21, .value=0x28, .type=IO_READ},
        {.addr=0xbf22, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_024F) {
    const struct CPU_State initial_cpu = {.pc=0x874f, .a=0x0c, .x=0xad, .y=0xcd, .sp=0x66, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x874f, .value=0x28}, {.addr=0x8750, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8751, .a=0x0c, .x=0xad, .y=0xcd, .sp=0x66, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x874f, .value=0x28}, {.addr=0x8750, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x874f, .value=0x28, .type=IO_READ},
        {.addr=0x8750, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0250) {
    const struct CPU_State initial_cpu = {.pc=0x198a, .a=0x61, .x=0x9a, .y=0x8c, .sp=0xb1, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x198a, .value=0x28}, {.addr=0x198b, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x198c, .a=0x41, .x=0x9a, .y=0x8c, .sp=0xb1, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x198a, .value=0x28}, {.addr=0x198b, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x198a, .value=0x28, .type=IO_READ},
        {.addr=0x198b, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0251) {
    const struct CPU_State initial_cpu = {.pc=0xf9b9, .a=0x57, .x=0xe7, .y=0x65, .sp=0xf0, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xf9b9, .value=0x28}, {.addr=0xf9ba, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xf9bb, .a=0x52, .x=0xe7, .y=0x65, .sp=0xf0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xf9b9, .value=0x28}, {.addr=0xf9ba, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xf9b9, .value=0x28, .type=IO_READ},
        {.addr=0xf9ba, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0252) {
    const struct CPU_State initial_cpu = {.pc=0x0c89, .a=0x44, .x=0x21, .y=0x54, .sp=0x00, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0c89, .value=0x28}, {.addr=0x0c8a, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x0c8b, .a=0x04, .x=0x21, .y=0x54, .sp=0x00, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0c89, .value=0x28}, {.addr=0x0c8a, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x0c89, .value=0x28, .type=IO_READ},
        {.addr=0x0c8a, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0253) {
    const struct CPU_State initial_cpu = {.pc=0xfa0a, .a=0xef, .x=0x94, .y=0x5f, .sp=0x10, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xfa0a, .value=0x28}, {.addr=0xfa0b, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xfa0c, .a=0x2c, .x=0x94, .y=0x5f, .sp=0x10, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xfa0a, .value=0x28}, {.addr=0xfa0b, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xfa0a, .value=0x28, .type=IO_READ},
        {.addr=0xfa0b, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0254) {
    const struct CPU_State initial_cpu = {.pc=0xd65b, .a=0xbe, .x=0xb6, .y=0xb6, .sp=0x67, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd65b, .value=0x28}, {.addr=0xd65c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd65d, .a=0xa6, .x=0xb6, .y=0xb6, .sp=0x67, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd65b, .value=0x28}, {.addr=0xd65c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd65b, .value=0x28, .type=IO_READ},
        {.addr=0xd65c, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0255) {
    const struct CPU_State initial_cpu = {.pc=0x47e9, .a=0xf8, .x=0xed, .y=0xa5, .sp=0xeb, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x47e9, .value=0x28}, {.addr=0x47ea, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x47eb, .a=0x90, .x=0xed, .y=0xa5, .sp=0xeb, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x47e9, .value=0x28}, {.addr=0x47ea, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x47e9, .value=0x28, .type=IO_READ},
        {.addr=0x47ea, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0256) {
    const struct CPU_State initial_cpu = {.pc=0xd352, .a=0x88, .x=0x9a, .y=0x6e, .sp=0x11, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xd352, .value=0x28}, {.addr=0xd353, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xd354, .a=0x80, .x=0x9a, .y=0x6e, .sp=0x11, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd352, .value=0x28}, {.addr=0xd353, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xd352, .value=0x28, .type=IO_READ},
        {.addr=0xd353, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0257) {
    const struct CPU_State initial_cpu = {.pc=0x9640, .a=0xe0, .x=0x3a, .y=0x18, .sp=0xd8, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x9640, .value=0x28}, {.addr=0x9641, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x9642, .a=0xc0, .x=0x3a, .y=0x18, .sp=0xd8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9640, .value=0x28}, {.addr=0x9641, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x9640, .value=0x28, .type=IO_READ},
        {.addr=0x9641, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0258) {
    const struct CPU_State initial_cpu = {.pc=0xb79b, .a=0xcd, .x=0x6a, .y=0xc0, .sp=0x94, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xb79b, .value=0x28}, {.addr=0xb79c, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xb79d, .a=0xc1, .x=0x6a, .y=0xc0, .sp=0x94, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xb79b, .value=0x28}, {.addr=0xb79c, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xb79b, .value=0x28, .type=IO_READ},
        {.addr=0xb79c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0259) {
    const struct CPU_State initial_cpu = {.pc=0xb2da, .a=0xcf, .x=0xb5, .y=0x65, .sp=0x1b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xb2da, .value=0x28}, {.addr=0xb2db, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xb2dc, .a=0x01, .x=0xb5, .y=0x65, .sp=0x1b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb2da, .value=0x28}, {.addr=0xb2db, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xb2da, .value=0x28, .type=IO_READ},
        {.addr=0xb2db, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_025A) {
    const struct CPU_State initial_cpu = {.pc=0x7a67, .a=0x2c, .x=0xd3, .y=0x00, .sp=0x83, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x7a67, .value=0x28}, {.addr=0x7a68, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x7a69, .a=0x24, .x=0xd3, .y=0x00, .sp=0x83, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7a67, .value=0x28}, {.addr=0x7a68, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x7a67, .value=0x28, .type=IO_READ},
        {.addr=0x7a68, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_025B) {
    const struct CPU_State initial_cpu = {.pc=0x8d3e, .a=0x3f, .x=0xfc, .y=0xfa, .sp=0x16, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x8d3e, .value=0x28}, {.addr=0x8d3f, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x8d40, .a=0x32, .x=0xfc, .y=0xfa, .sp=0x16, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8d3e, .value=0x28}, {.addr=0x8d3f, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x8d3e, .value=0x28, .type=IO_READ},
        {.addr=0x8d3f, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_025C) {
    const struct CPU_State initial_cpu = {.pc=0x7035, .a=0x9c, .x=0x29, .y=0x03, .sp=0x6a, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x7035, .value=0x28}, {.addr=0x7036, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x7037, .a=0x0c, .x=0x29, .y=0x03, .sp=0x6a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x7035, .value=0x28}, {.addr=0x7036, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x7035, .value=0x28, .type=IO_READ},
        {.addr=0x7036, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_025D) {
    const struct CPU_State initial_cpu = {.pc=0xa9fe, .a=0x57, .x=0x0b, .y=0x9b, .sp=0x85, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xa9fe, .value=0x28}, {.addr=0xa9ff, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xaa00, .a=0x45, .x=0x0b, .y=0x9b, .sp=0x85, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa9fe, .value=0x28}, {.addr=0xa9ff, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xa9fe, .value=0x28, .type=IO_READ},
        {.addr=0xa9ff, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_025E) {
    const struct CPU_State initial_cpu = {.pc=0x2d2e, .a=0x83, .x=0x73, .y=0xad, .sp=0x51, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x2d2e, .value=0x28}, {.addr=0x2d2f, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x2d30, .a=0x01, .x=0x73, .y=0xad, .sp=0x51, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2d2e, .value=0x28}, {.addr=0x2d2f, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x2d2e, .value=0x28, .type=IO_READ},
        {.addr=0x2d2f, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_025F) {
    const struct CPU_State initial_cpu = {.pc=0x00e9, .a=0x8a, .x=0xa0, .y=0x39, .sp=0x95, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x28}, {.addr=0x00ea, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x00eb, .a=0x88, .x=0xa0, .y=0x39, .sp=0x95, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x28}, {.addr=0x00ea, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x00e9, .value=0x28, .type=IO_READ},
        {.addr=0x00ea, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0260) {
    const struct CPU_State initial_cpu = {.pc=0x2d48, .a=0xf4, .x=0x8b, .y=0xc1, .sp=0xfc, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x2d48, .value=0x28}, {.addr=0x2d49, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x2d4a, .a=0x20, .x=0x8b, .y=0xc1, .sp=0xfc, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x2d48, .value=0x28}, {.addr=0x2d49, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x2d48, .value=0x28, .type=IO_READ},
        {.addr=0x2d49, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0261) {
    const struct CPU_State initial_cpu = {.pc=0x40c9, .a=0xf9, .x=0xbf, .y=0x1d, .sp=0xb0, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x40c9, .value=0x28}, {.addr=0x40ca, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x40cb, .a=0xd9, .x=0xbf, .y=0x1d, .sp=0xb0, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x40c9, .value=0x28}, {.addr=0x40ca, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x40c9, .value=0x28, .type=IO_READ},
        {.addr=0x40ca, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0262) {
    const struct CPU_State initial_cpu = {.pc=0x139b, .a=0x51, .x=0xdb, .y=0xd8, .sp=0x96, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x139b, .value=0x28}, {.addr=0x139c, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x139d, .a=0x01, .x=0xdb, .y=0xd8, .sp=0x96, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x139b, .value=0x28}, {.addr=0x139c, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x139b, .value=0x28, .type=IO_READ},
        {.addr=0x139c, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0263) {
    const struct CPU_State initial_cpu = {.pc=0x902c, .a=0x89, .x=0xb5, .y=0xbc, .sp=0xdb, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x902c, .value=0x28}, {.addr=0x902d, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x902e, .a=0x01, .x=0xb5, .y=0xbc, .sp=0xdb, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x902c, .value=0x28}, {.addr=0x902d, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x902c, .value=0x28, .type=IO_READ},
        {.addr=0x902d, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0264) {
    const struct CPU_State initial_cpu = {.pc=0x1932, .a=0xcc, .x=0x8d, .y=0x85, .sp=0xd5, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x1932, .value=0x28}, {.addr=0x1933, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1934, .a=0xcc, .x=0x8d, .y=0x85, .sp=0xd5, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x1932, .value=0x28}, {.addr=0x1933, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1932, .value=0x28, .type=IO_READ},
        {.addr=0x1933, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0265) {
    const struct CPU_State initial_cpu = {.pc=0x6d1e, .a=0x13, .x=0x3e, .y=0x2d, .sp=0xb7, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x6d1e, .value=0x28}, {.addr=0x6d1f, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x6d20, .a=0x01, .x=0x3e, .y=0x2d, .sp=0xb7, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6d1e, .value=0x28}, {.addr=0x6d1f, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x6d1e, .value=0x28, .type=IO_READ},
        {.addr=0x6d1f, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0266) {
    const struct CPU_State initial_cpu = {.pc=0x698e, .a=0x1d, .x=0x6a, .y=0x14, .sp=0x2e, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x698e, .value=0x28}, {.addr=0x698f, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x6990, .a=0x05, .x=0x6a, .y=0x14, .sp=0x2e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x698e, .value=0x28}, {.addr=0x698f, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x698e, .value=0x28, .type=IO_READ},
        {.addr=0x698f, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0267) {
    const struct CPU_State initial_cpu = {.pc=0x639a, .a=0xe2, .x=0x07, .y=0xb2, .sp=0x8c, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x639a, .value=0x28}, {.addr=0x639b, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x639c, .a=0xe2, .x=0x07, .y=0xb2, .sp=0x8c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x639a, .value=0x28}, {.addr=0x639b, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x639a, .value=0x28, .type=IO_READ},
        {.addr=0x639b, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0268) {
    const struct CPU_State initial_cpu = {.pc=0x4024, .a=0xce, .x=0xa3, .y=0x69, .sp=0x27, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x4024, .value=0x28}, {.addr=0x4025, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x4026, .a=0x8a, .x=0xa3, .y=0x69, .sp=0x27, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4024, .value=0x28}, {.addr=0x4025, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x4024, .value=0x28, .type=IO_READ},
        {.addr=0x4025, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0269) {
    const struct CPU_State initial_cpu = {.pc=0x1c18, .a=0xde, .x=0xef, .y=0x75, .sp=0xb0, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x1c18, .value=0x28}, {.addr=0x1c19, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x1c1a, .a=0x12, .x=0xef, .y=0x75, .sp=0xb0, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x1c18, .value=0x28}, {.addr=0x1c19, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x1c18, .value=0x28, .type=IO_READ},
        {.addr=0x1c19, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_026A) {
    const struct CPU_State initial_cpu = {.pc=0xa116, .a=0xe2, .x=0x83, .y=0x2d, .sp=0x6f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xa116, .value=0x28}, {.addr=0xa117, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xa118, .a=0xe0, .x=0x83, .y=0x2d, .sp=0x6f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa116, .value=0x28}, {.addr=0xa117, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xa116, .value=0x28, .type=IO_READ},
        {.addr=0xa117, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_026B) {
    const struct CPU_State initial_cpu = {.pc=0x3ea6, .a=0x1e, .x=0xa2, .y=0xb7, .sp=0x94, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x3ea6, .value=0x28}, {.addr=0x3ea7, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x3ea8, .a=0x10, .x=0xa2, .y=0xb7, .sp=0x94, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3ea6, .value=0x28}, {.addr=0x3ea7, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x3ea6, .value=0x28, .type=IO_READ},
        {.addr=0x3ea7, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_026C) {
    const struct CPU_State initial_cpu = {.pc=0x2d29, .a=0x51, .x=0xa4, .y=0x66, .sp=0x3e, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2d29, .value=0x28}, {.addr=0x2d2a, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x2d2b, .a=0x40, .x=0xa4, .y=0x66, .sp=0x3e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x2d29, .value=0x28}, {.addr=0x2d2a, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x2d29, .value=0x28, .type=IO_READ},
        {.addr=0x2d2a, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_026D) {
    const struct CPU_State initial_cpu = {.pc=0x32bd, .a=0x66, .x=0x01, .y=0x02, .sp=0x94, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x32bd, .value=0x28}, {.addr=0x32be, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x32bf, .a=0x04, .x=0x01, .y=0x02, .sp=0x94, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x32bd, .value=0x28}, {.addr=0x32be, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x32bd, .value=0x28, .type=IO_READ},
        {.addr=0x32be, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_026E) {
    const struct CPU_State initial_cpu = {.pc=0xedc0, .a=0x0f, .x=0x8f, .y=0xf7, .sp=0x21, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xedc0, .value=0x28}, {.addr=0xedc1, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xedc2, .a=0x05, .x=0x8f, .y=0xf7, .sp=0x21, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xedc0, .value=0x28}, {.addr=0xedc1, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xedc0, .value=0x28, .type=IO_READ},
        {.addr=0xedc1, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_026F) {
    const struct CPU_State initial_cpu = {.pc=0xd35f, .a=0xce, .x=0xda, .y=0x77, .sp=0x82, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xd35f, .value=0x28}, {.addr=0xd360, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xd361, .a=0x86, .x=0xda, .y=0x77, .sp=0x82, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xd35f, .value=0x28}, {.addr=0xd360, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xd35f, .value=0x28, .type=IO_READ},
        {.addr=0xd360, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0270) {
    const struct CPU_State initial_cpu = {.pc=0x2068, .a=0x6f, .x=0x85, .y=0x37, .sp=0x51, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x2068, .value=0x28}, {.addr=0x2069, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x206a, .a=0x46, .x=0x85, .y=0x37, .sp=0x51, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x2068, .value=0x28}, {.addr=0x2069, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2068, .value=0x28, .type=IO_READ},
        {.addr=0x2069, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0271) {
    const struct CPU_State initial_cpu = {.pc=0xffc7, .a=0x61, .x=0xc7, .y=0xd3, .sp=0xcc, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xffc7, .value=0x28}, {.addr=0xffc8, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xffc9, .a=0x20, .x=0xc7, .y=0xd3, .sp=0xcc, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xffc7, .value=0x28}, {.addr=0xffc8, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xffc7, .value=0x28, .type=IO_READ},
        {.addr=0xffc8, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0272) {
    const struct CPU_State initial_cpu = {.pc=0x1853, .a=0xe1, .x=0xae, .y=0x68, .sp=0xce, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x1853, .value=0x28}, {.addr=0x1854, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x1855, .a=0xa1, .x=0xae, .y=0x68, .sp=0xce, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x1853, .value=0x28}, {.addr=0x1854, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x1853, .value=0x28, .type=IO_READ},
        {.addr=0x1854, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0273) {
    const struct CPU_State initial_cpu = {.pc=0x0830, .a=0xaa, .x=0x69, .y=0x9d, .sp=0x49, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0830, .value=0x28}, {.addr=0x0831, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x0832, .a=0x20, .x=0x69, .y=0x9d, .sp=0x49, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0830, .value=0x28}, {.addr=0x0831, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x0830, .value=0x28, .type=IO_READ},
        {.addr=0x0831, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0274) {
    const struct CPU_State initial_cpu = {.pc=0x15a9, .a=0x0d, .x=0xd5, .y=0xd6, .sp=0xe5, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x15a9, .value=0x28}, {.addr=0x15aa, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x15ab, .a=0x08, .x=0xd5, .y=0xd6, .sp=0xe5, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x15a9, .value=0x28}, {.addr=0x15aa, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x15a9, .value=0x28, .type=IO_READ},
        {.addr=0x15aa, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0275) {
    const struct CPU_State initial_cpu = {.pc=0x1496, .a=0x65, .x=0x01, .y=0x94, .sp=0x1b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x1496, .value=0x28}, {.addr=0x1497, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x1498, .a=0x20, .x=0x01, .y=0x94, .sp=0x1b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x1496, .value=0x28}, {.addr=0x1497, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x1496, .value=0x28, .type=IO_READ},
        {.addr=0x1497, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0276) {
    const struct CPU_State initial_cpu = {.pc=0xab59, .a=0xef, .x=0xd1, .y=0xc7, .sp=0x15, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xab59, .value=0x28}, {.addr=0xab5a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xab5b, .a=0xed, .x=0xd1, .y=0xc7, .sp=0x15, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xab59, .value=0x28}, {.addr=0xab5a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xab59, .value=0x28, .type=IO_READ},
        {.addr=0xab5a, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0277) {
    const struct CPU_State initial_cpu = {.pc=0x19d0, .a=0x00, .x=0xbf, .y=0xb1, .sp=0x59, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x19d0, .value=0x28}, {.addr=0x19d1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x19d2, .a=0x00, .x=0xbf, .y=0xb1, .sp=0x59, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x19d0, .value=0x28}, {.addr=0x19d1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x19d0, .value=0x28, .type=IO_READ},
        {.addr=0x19d1, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0278) {
    const struct CPU_State initial_cpu = {.pc=0x89e0, .a=0x4c, .x=0x28, .y=0xf7, .sp=0xef, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x89e0, .value=0x28}, {.addr=0x89e1, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x89e2, .a=0x4c, .x=0x28, .y=0xf7, .sp=0xef, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x89e0, .value=0x28}, {.addr=0x89e1, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x89e0, .value=0x28, .type=IO_READ},
        {.addr=0x89e1, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0279) {
    const struct CPU_State initial_cpu = {.pc=0xef55, .a=0x58, .x=0x6f, .y=0xb6, .sp=0x80, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xef55, .value=0x28}, {.addr=0xef56, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xef57, .a=0x00, .x=0x6f, .y=0xb6, .sp=0x80, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xef55, .value=0x28}, {.addr=0xef56, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xef55, .value=0x28, .type=IO_READ},
        {.addr=0xef56, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_027A) {
    const struct CPU_State initial_cpu = {.pc=0xb658, .a=0x73, .x=0x39, .y=0x2a, .sp=0x85, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xb658, .value=0x28}, {.addr=0xb659, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xb65a, .a=0x52, .x=0x39, .y=0x2a, .sp=0x85, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb658, .value=0x28}, {.addr=0xb659, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xb658, .value=0x28, .type=IO_READ},
        {.addr=0xb659, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_027B) {
    const struct CPU_State initial_cpu = {.pc=0x0164, .a=0xf5, .x=0xe1, .y=0xf4, .sp=0xf5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x28}, {.addr=0x0165, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x0166, .a=0x31, .x=0xe1, .y=0xf4, .sp=0xf5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x28}, {.addr=0x0165, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x0164, .value=0x28, .type=IO_READ},
        {.addr=0x0165, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_027C) {
    const struct CPU_State initial_cpu = {.pc=0xc10a, .a=0x51, .x=0xd3, .y=0x3d, .sp=0x55, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xc10a, .value=0x28}, {.addr=0xc10b, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xc10c, .a=0x40, .x=0xd3, .y=0x3d, .sp=0x55, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc10a, .value=0x28}, {.addr=0xc10b, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xc10a, .value=0x28, .type=IO_READ},
        {.addr=0xc10b, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_027D) {
    const struct CPU_State initial_cpu = {.pc=0x391b, .a=0x61, .x=0xab, .y=0xd1, .sp=0x86, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x391b, .value=0x28}, {.addr=0x391c, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x391d, .a=0x61, .x=0xab, .y=0xd1, .sp=0x86, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x391b, .value=0x28}, {.addr=0x391c, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x391b, .value=0x28, .type=IO_READ},
        {.addr=0x391c, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_027E) {
    const struct CPU_State initial_cpu = {.pc=0xa84a, .a=0xda, .x=0xb9, .y=0x45, .sp=0xfb, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xa84a, .value=0x28}, {.addr=0xa84b, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xa84c, .a=0xd0, .x=0xb9, .y=0x45, .sp=0xfb, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xa84a, .value=0x28}, {.addr=0xa84b, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xa84a, .value=0x28, .type=IO_READ},
        {.addr=0xa84b, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_027F) {
    const struct CPU_State initial_cpu = {.pc=0xd8f3, .a=0x77, .x=0x1a, .y=0x91, .sp=0x8c, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd8f3, .value=0x28}, {.addr=0xd8f4, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xd8f5, .a=0x53, .x=0x1a, .y=0x91, .sp=0x8c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd8f3, .value=0x28}, {.addr=0xd8f4, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xd8f3, .value=0x28, .type=IO_READ},
        {.addr=0xd8f4, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0280) {
    const struct CPU_State initial_cpu = {.pc=0xd0aa, .a=0xb8, .x=0x2b, .y=0x76, .sp=0x62, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xd0aa, .value=0x28}, {.addr=0xd0ab, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd0ac, .a=0x98, .x=0x2b, .y=0x76, .sp=0x62, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xd0aa, .value=0x28}, {.addr=0xd0ab, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd0aa, .value=0x28, .type=IO_READ},
        {.addr=0xd0ab, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0281) {
    const struct CPU_State initial_cpu = {.pc=0xf63a, .a=0xe4, .x=0x70, .y=0xb1, .sp=0x93, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xf63a, .value=0x28}, {.addr=0xf63b, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xf63c, .a=0x00, .x=0x70, .y=0xb1, .sp=0x93, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xf63a, .value=0x28}, {.addr=0xf63b, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xf63a, .value=0x28, .type=IO_READ},
        {.addr=0xf63b, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0282) {
    const struct CPU_State initial_cpu = {.pc=0x94e4, .a=0x92, .x=0xed, .y=0x22, .sp=0xd5, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x94e4, .value=0x28}, {.addr=0x94e5, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x94e6, .a=0x00, .x=0xed, .y=0x22, .sp=0xd5, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x94e4, .value=0x28}, {.addr=0x94e5, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x94e4, .value=0x28, .type=IO_READ},
        {.addr=0x94e5, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0283) {
    const struct CPU_State initial_cpu = {.pc=0x5976, .a=0x42, .x=0xb8, .y=0xd4, .sp=0x49, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x5976, .value=0x28}, {.addr=0x5977, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x5978, .a=0x00, .x=0xb8, .y=0xd4, .sp=0x49, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x5976, .value=0x28}, {.addr=0x5977, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x5976, .value=0x28, .type=IO_READ},
        {.addr=0x5977, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0284) {
    const struct CPU_State initial_cpu = {.pc=0xc4b7, .a=0x9e, .x=0x96, .y=0xce, .sp=0x23, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xc4b7, .value=0x28}, {.addr=0xc4b8, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xc4b9, .a=0x10, .x=0x96, .y=0xce, .sp=0x23, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc4b7, .value=0x28}, {.addr=0xc4b8, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xc4b7, .value=0x28, .type=IO_READ},
        {.addr=0xc4b8, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0285) {
    const struct CPU_State initial_cpu = {.pc=0x45ba, .a=0x04, .x=0x85, .y=0xc1, .sp=0xef, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x45ba, .value=0x28}, {.addr=0x45bb, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x45bc, .a=0x00, .x=0x85, .y=0xc1, .sp=0xef, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x45ba, .value=0x28}, {.addr=0x45bb, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x45ba, .value=0x28, .type=IO_READ},
        {.addr=0x45bb, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0286) {
    const struct CPU_State initial_cpu = {.pc=0x6cce, .a=0x7b, .x=0x8b, .y=0x87, .sp=0xd1, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x6cce, .value=0x28}, {.addr=0x6ccf, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x6cd0, .a=0x3a, .x=0x8b, .y=0x87, .sp=0xd1, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6cce, .value=0x28}, {.addr=0x6ccf, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x6cce, .value=0x28, .type=IO_READ},
        {.addr=0x6ccf, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0287) {
    const struct CPU_State initial_cpu = {.pc=0x5515, .a=0x94, .x=0x2c, .y=0x87, .sp=0x76, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x5515, .value=0x28}, {.addr=0x5516, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x5517, .a=0x94, .x=0x2c, .y=0x87, .sp=0x76, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x5515, .value=0x28}, {.addr=0x5516, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x5515, .value=0x28, .type=IO_READ},
        {.addr=0x5516, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0288) {
    const struct CPU_State initial_cpu = {.pc=0x6727, .a=0xb6, .x=0xfa, .y=0xf7, .sp=0x88, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6727, .value=0x28}, {.addr=0x6728, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x6729, .a=0x22, .x=0xfa, .y=0xf7, .sp=0x88, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6727, .value=0x28}, {.addr=0x6728, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x6727, .value=0x28, .type=IO_READ},
        {.addr=0x6728, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0289) {
    const struct CPU_State initial_cpu = {.pc=0x99c1, .a=0x5a, .x=0x5d, .y=0x9a, .sp=0x48, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x99c1, .value=0x28}, {.addr=0x99c2, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x99c3, .a=0x5a, .x=0x5d, .y=0x9a, .sp=0x48, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x99c1, .value=0x28}, {.addr=0x99c2, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x99c1, .value=0x28, .type=IO_READ},
        {.addr=0x99c2, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_028A) {
    const struct CPU_State initial_cpu = {.pc=0x43c2, .a=0xda, .x=0x66, .y=0x6f, .sp=0x95, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x43c2, .value=0x28}, {.addr=0x43c3, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x43c4, .a=0x82, .x=0x66, .y=0x6f, .sp=0x95, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x43c2, .value=0x28}, {.addr=0x43c3, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x43c2, .value=0x28, .type=IO_READ},
        {.addr=0x43c3, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_028B) {
    const struct CPU_State initial_cpu = {.pc=0x49c5, .a=0x4b, .x=0xc2, .y=0xed, .sp=0xd6, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x49c5, .value=0x28}, {.addr=0x49c6, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x49c7, .a=0x40, .x=0xc2, .y=0xed, .sp=0xd6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x49c5, .value=0x28}, {.addr=0x49c6, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x49c5, .value=0x28, .type=IO_READ},
        {.addr=0x49c6, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_028C) {
    const struct CPU_State initial_cpu = {.pc=0x48d1, .a=0x17, .x=0x58, .y=0xca, .sp=0x16, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x48d1, .value=0x28}, {.addr=0x48d2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x48d3, .a=0x00, .x=0x58, .y=0xca, .sp=0x16, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x48d1, .value=0x28}, {.addr=0x48d2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x48d1, .value=0x28, .type=IO_READ},
        {.addr=0x48d2, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_028D) {
    const struct CPU_State initial_cpu = {.pc=0x5888, .a=0xe3, .x=0xa9, .y=0x04, .sp=0xdf, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x5888, .value=0x28}, {.addr=0x5889, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x588a, .a=0x02, .x=0xa9, .y=0x04, .sp=0xdf, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x5888, .value=0x28}, {.addr=0x5889, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x5888, .value=0x28, .type=IO_READ},
        {.addr=0x5889, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_028E) {
    const struct CPU_State initial_cpu = {.pc=0x4dc0, .a=0x57, .x=0x02, .y=0xe0, .sp=0xe6, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x4dc0, .value=0x28}, {.addr=0x4dc1, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x4dc2, .a=0x12, .x=0x02, .y=0xe0, .sp=0xe6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4dc0, .value=0x28}, {.addr=0x4dc1, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x4dc0, .value=0x28, .type=IO_READ},
        {.addr=0x4dc1, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_028F) {
    const struct CPU_State initial_cpu = {.pc=0xf15f, .a=0xbc, .x=0x0f, .y=0x7e, .sp=0x05, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xf15f, .value=0x28}, {.addr=0xf160, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xf161, .a=0x04, .x=0x0f, .y=0x7e, .sp=0x05, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xf15f, .value=0x28}, {.addr=0xf160, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xf15f, .value=0x28, .type=IO_READ},
        {.addr=0xf160, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0290) {
    const struct CPU_State initial_cpu = {.pc=0xae2c, .a=0x40, .x=0xaa, .y=0x17, .sp=0x48, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xae2c, .value=0x28}, {.addr=0xae2d, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xae2e, .a=0x40, .x=0xaa, .y=0x17, .sp=0x48, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xae2c, .value=0x28}, {.addr=0xae2d, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xae2c, .value=0x28, .type=IO_READ},
        {.addr=0xae2d, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0291) {
    const struct CPU_State initial_cpu = {.pc=0x1eb4, .a=0x15, .x=0x77, .y=0x25, .sp=0x05, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x1eb4, .value=0x28}, {.addr=0x1eb5, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x1eb6, .a=0x00, .x=0x77, .y=0x25, .sp=0x05, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x1eb4, .value=0x28}, {.addr=0x1eb5, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x1eb4, .value=0x28, .type=IO_READ},
        {.addr=0x1eb5, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0292) {
    const struct CPU_State initial_cpu = {.pc=0xffcc, .a=0xda, .x=0xc5, .y=0xb3, .sp=0x05, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xffcc, .value=0x28}, {.addr=0xffcd, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xffce, .a=0x02, .x=0xc5, .y=0xb3, .sp=0x05, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xffcc, .value=0x28}, {.addr=0xffcd, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xffcc, .value=0x28, .type=IO_READ},
        {.addr=0xffcd, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0293) {
    const struct CPU_State initial_cpu = {.pc=0x82ef, .a=0x2a, .x=0x3d, .y=0x28, .sp=0xdb, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x82ef, .value=0x28}, {.addr=0x82f0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x82f1, .a=0x00, .x=0x3d, .y=0x28, .sp=0xdb, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x82ef, .value=0x28}, {.addr=0x82f0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x82ef, .value=0x28, .type=IO_READ},
        {.addr=0x82f0, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0294) {
    const struct CPU_State initial_cpu = {.pc=0x0fc1, .a=0xf8, .x=0xa1, .y=0x93, .sp=0xcf, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0fc1, .value=0x28}, {.addr=0x0fc2, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x0fc3, .a=0xf0, .x=0xa1, .y=0x93, .sp=0xcf, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0fc1, .value=0x28}, {.addr=0x0fc2, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x0fc1, .value=0x28, .type=IO_READ},
        {.addr=0x0fc2, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0295) {
    const struct CPU_State initial_cpu = {.pc=0x628a, .a=0xae, .x=0x00, .y=0x38, .sp=0xbe, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x628a, .value=0x28}, {.addr=0x628b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x628c, .a=0xa6, .x=0x00, .y=0x38, .sp=0xbe, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x628a, .value=0x28}, {.addr=0x628b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x628a, .value=0x28, .type=IO_READ},
        {.addr=0x628b, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0296) {
    const struct CPU_State initial_cpu = {.pc=0x289a, .a=0x12, .x=0x4b, .y=0x35, .sp=0x55, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x289a, .value=0x28}, {.addr=0x289b, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x289c, .a=0x02, .x=0x4b, .y=0x35, .sp=0x55, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x289a, .value=0x28}, {.addr=0x289b, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x289a, .value=0x28, .type=IO_READ},
        {.addr=0x289b, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0297) {
    const struct CPU_State initial_cpu = {.pc=0x0ce0, .a=0xde, .x=0xd5, .y=0x74, .sp=0x3e, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0ce0, .value=0x28}, {.addr=0x0ce1, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x0ce2, .a=0x8a, .x=0xd5, .y=0x74, .sp=0x3e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0ce0, .value=0x28}, {.addr=0x0ce1, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x0ce0, .value=0x28, .type=IO_READ},
        {.addr=0x0ce1, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0298) {
    const struct CPU_State initial_cpu = {.pc=0x8634, .a=0x41, .x=0xb0, .y=0x83, .sp=0x4a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x8634, .value=0x28}, {.addr=0x8635, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x8636, .a=0x41, .x=0xb0, .y=0x83, .sp=0x4a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8634, .value=0x28}, {.addr=0x8635, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x8634, .value=0x28, .type=IO_READ},
        {.addr=0x8635, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0299) {
    const struct CPU_State initial_cpu = {.pc=0x4a46, .a=0x4b, .x=0x34, .y=0x6a, .sp=0xc7, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4a46, .value=0x28}, {.addr=0x4a47, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4a48, .a=0x02, .x=0x34, .y=0x6a, .sp=0xc7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x4a46, .value=0x28}, {.addr=0x4a47, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4a46, .value=0x28, .type=IO_READ},
        {.addr=0x4a47, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_029A) {
    const struct CPU_State initial_cpu = {.pc=0xcd03, .a=0x91, .x=0xe6, .y=0xf8, .sp=0x79, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xcd03, .value=0x28}, {.addr=0xcd04, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xcd05, .a=0x80, .x=0xe6, .y=0xf8, .sp=0x79, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xcd03, .value=0x28}, {.addr=0xcd04, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xcd03, .value=0x28, .type=IO_READ},
        {.addr=0xcd04, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_029B) {
    const struct CPU_State initial_cpu = {.pc=0xb8ea, .a=0x1f, .x=0x3e, .y=0xe6, .sp=0xa3, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xb8ea, .value=0x28}, {.addr=0xb8eb, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xb8ec, .a=0x04, .x=0x3e, .y=0xe6, .sp=0xa3, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb8ea, .value=0x28}, {.addr=0xb8eb, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xb8ea, .value=0x28, .type=IO_READ},
        {.addr=0xb8eb, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_029C) {
    const struct CPU_State initial_cpu = {.pc=0xd004, .a=0xee, .x=0xee, .y=0x85, .sp=0xc0, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd004, .value=0x28}, {.addr=0xd005, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xd006, .a=0x0c, .x=0xee, .y=0x85, .sp=0xc0, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xd004, .value=0x28}, {.addr=0xd005, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xd004, .value=0x28, .type=IO_READ},
        {.addr=0xd005, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_029D) {
    const struct CPU_State initial_cpu = {.pc=0x2385, .a=0xa7, .x=0x9e, .y=0xfe, .sp=0x93, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x2385, .value=0x28}, {.addr=0x2386, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x2387, .a=0xa2, .x=0x9e, .y=0xfe, .sp=0x93, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2385, .value=0x28}, {.addr=0x2386, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x2385, .value=0x28, .type=IO_READ},
        {.addr=0x2386, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_029E) {
    const struct CPU_State initial_cpu = {.pc=0x7c65, .a=0x48, .x=0x7f, .y=0x03, .sp=0x6a, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x7c65, .value=0x28}, {.addr=0x7c66, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x7c67, .a=0x00, .x=0x7f, .y=0x03, .sp=0x6a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x7c65, .value=0x28}, {.addr=0x7c66, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x7c65, .value=0x28, .type=IO_READ},
        {.addr=0x7c66, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_029F) {
    const struct CPU_State initial_cpu = {.pc=0x5dd3, .a=0x54, .x=0x92, .y=0x2e, .sp=0xd9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x5dd3, .value=0x28}, {.addr=0x5dd4, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x5dd5, .a=0x50, .x=0x92, .y=0x2e, .sp=0xd9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5dd3, .value=0x28}, {.addr=0x5dd4, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x5dd3, .value=0x28, .type=IO_READ},
        {.addr=0x5dd4, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xbfa9, .a=0xaa, .x=0xaa, .y=0xd5, .sp=0xc6, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xbfa9, .value=0x28}, {.addr=0xbfaa, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xbfab, .a=0x88, .x=0xaa, .y=0xd5, .sp=0xc6, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xbfa9, .value=0x28}, {.addr=0xbfaa, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xbfa9, .value=0x28, .type=IO_READ},
        {.addr=0xbfaa, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x3aad, .a=0x6d, .x=0x3f, .y=0xf0, .sp=0x91, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x3aad, .value=0x28}, {.addr=0x3aae, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x3aaf, .a=0x05, .x=0x3f, .y=0xf0, .sp=0x91, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3aad, .value=0x28}, {.addr=0x3aae, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x3aad, .value=0x28, .type=IO_READ},
        {.addr=0x3aae, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xe3a8, .a=0x34, .x=0x96, .y=0x20, .sp=0xef, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xe3a8, .value=0x28}, {.addr=0xe3a9, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xe3aa, .a=0x10, .x=0x96, .y=0x20, .sp=0xef, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe3a8, .value=0x28}, {.addr=0xe3a9, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xe3a8, .value=0x28, .type=IO_READ},
        {.addr=0xe3a9, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xafe2, .a=0x28, .x=0x2c, .y=0xc5, .sp=0x3f, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xafe2, .value=0x28}, {.addr=0xafe3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xafe4, .a=0x28, .x=0x2c, .y=0xc5, .sp=0x3f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xafe2, .value=0x28}, {.addr=0xafe3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xafe2, .value=0x28, .type=IO_READ},
        {.addr=0xafe3, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x1386, .a=0x86, .x=0x38, .y=0xfd, .sp=0x3a, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x1386, .value=0x28}, {.addr=0x1387, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x1388, .a=0x00, .x=0x38, .y=0xfd, .sp=0x3a, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x1386, .value=0x28}, {.addr=0x1387, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x1386, .value=0x28, .type=IO_READ},
        {.addr=0x1387, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x5ef5, .a=0x88, .x=0x8a, .y=0x95, .sp=0xae, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5ef5, .value=0x28}, {.addr=0x5ef6, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x5ef7, .a=0x88, .x=0x8a, .y=0x95, .sp=0xae, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5ef5, .value=0x28}, {.addr=0x5ef6, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x5ef5, .value=0x28, .type=IO_READ},
        {.addr=0x5ef6, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xfc8b, .a=0x09, .x=0x80, .y=0xd2, .sp=0xaa, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xfc8b, .value=0x28}, {.addr=0xfc8c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfc8d, .a=0x09, .x=0x80, .y=0xd2, .sp=0xaa, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xfc8b, .value=0x28}, {.addr=0xfc8c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfc8b, .value=0x28, .type=IO_READ},
        {.addr=0xfc8c, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xe7ce, .a=0xa1, .x=0xe3, .y=0x33, .sp=0x51, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ce, .value=0x28}, {.addr=0xe7cf, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe7d0, .a=0xa0, .x=0xe3, .y=0x33, .sp=0x51, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xe7ce, .value=0x28}, {.addr=0xe7cf, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe7ce, .value=0x28, .type=IO_READ},
        {.addr=0xe7cf, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x9def, .a=0x0b, .x=0x17, .y=0xa5, .sp=0x0e, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x9def, .value=0x28}, {.addr=0x9df0, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x9df1, .a=0x0b, .x=0x17, .y=0xa5, .sp=0x0e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9def, .value=0x28}, {.addr=0x9df0, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x9def, .value=0x28, .type=IO_READ},
        {.addr=0x9df0, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xdadd, .a=0x63, .x=0x8b, .y=0x73, .sp=0xf0, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xdadd, .value=0x28}, {.addr=0xdade, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xdadf, .a=0x43, .x=0x8b, .y=0x73, .sp=0xf0, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xdadd, .value=0x28}, {.addr=0xdade, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xdadd, .value=0x28, .type=IO_READ},
        {.addr=0xdade, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xbd50, .a=0x6c, .x=0x49, .y=0x35, .sp=0xce, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xbd50, .value=0x28}, {.addr=0xbd51, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xbd52, .a=0x24, .x=0x49, .y=0x35, .sp=0xce, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xbd50, .value=0x28}, {.addr=0xbd51, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xbd50, .value=0x28, .type=IO_READ},
        {.addr=0xbd51, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x0139, .a=0x08, .x=0x44, .y=0xb4, .sp=0x1e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x28}, {.addr=0x013a, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x013b, .a=0x00, .x=0x44, .y=0xb4, .sp=0x1e, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x28}, {.addr=0x013a, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x0139, .value=0x28, .type=IO_READ},
        {.addr=0x013a, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x4940, .a=0x0c, .x=0x31, .y=0x25, .sp=0xa2, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x4940, .value=0x28}, {.addr=0x4941, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4942, .a=0x0c, .x=0x31, .y=0x25, .sp=0xa2, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4940, .value=0x28}, {.addr=0x4941, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4940, .value=0x28, .type=IO_READ},
        {.addr=0x4941, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x455e, .a=0xfa, .x=0x59, .y=0xfe, .sp=0xef, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x455e, .value=0x28}, {.addr=0x455f, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x4560, .a=0xba, .x=0x59, .y=0xfe, .sp=0xef, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x455e, .value=0x28}, {.addr=0x455f, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x455e, .value=0x28, .type=IO_READ},
        {.addr=0x455f, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xdb4e, .a=0x13, .x=0xe0, .y=0xeb, .sp=0x21, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xdb4e, .value=0x28}, {.addr=0xdb4f, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xdb50, .a=0x12, .x=0xe0, .y=0xeb, .sp=0x21, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xdb4e, .value=0x28}, {.addr=0xdb4f, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xdb4e, .value=0x28, .type=IO_READ},
        {.addr=0xdb4f, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xa430, .a=0x4f, .x=0x0e, .y=0xf4, .sp=0xbd, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xa430, .value=0x28}, {.addr=0xa431, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa432, .a=0x0f, .x=0x0e, .y=0xf4, .sp=0xbd, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa430, .value=0x28}, {.addr=0xa431, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa430, .value=0x28, .type=IO_READ},
        {.addr=0xa431, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x4b4f, .a=0x31, .x=0x27, .y=0xf6, .sp=0x0b, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x4b4f, .value=0x28}, {.addr=0x4b50, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x4b51, .a=0x10, .x=0x27, .y=0xf6, .sp=0x0b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x4b4f, .value=0x28}, {.addr=0x4b50, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x4b4f, .value=0x28, .type=IO_READ},
        {.addr=0x4b50, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xa540, .a=0xcd, .x=0x30, .y=0x8e, .sp=0xa1, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xa540, .value=0x28}, {.addr=0xa541, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xa542, .a=0x41, .x=0x30, .y=0x8e, .sp=0xa1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xa540, .value=0x28}, {.addr=0xa541, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xa540, .value=0x28, .type=IO_READ},
        {.addr=0xa541, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x7af7, .a=0x55, .x=0x11, .y=0xde, .sp=0xca, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x7af7, .value=0x28}, {.addr=0x7af8, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x7af9, .a=0x55, .x=0x11, .y=0xde, .sp=0xca, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7af7, .value=0x28}, {.addr=0x7af8, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x7af7, .value=0x28, .type=IO_READ},
        {.addr=0x7af8, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xe445, .a=0x2c, .x=0xa7, .y=0xa0, .sp=0xfd, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xe445, .value=0x28}, {.addr=0xe446, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xe447, .a=0x08, .x=0xa7, .y=0xa0, .sp=0xfd, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xe445, .value=0x28}, {.addr=0xe446, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xe445, .value=0x28, .type=IO_READ},
        {.addr=0xe446, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x7a21, .a=0x93, .x=0x73, .y=0xdd, .sp=0x6b, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x7a21, .value=0x28}, {.addr=0x7a22, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x7a23, .a=0x03, .x=0x73, .y=0xdd, .sp=0x6b, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7a21, .value=0x28}, {.addr=0x7a22, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x7a21, .value=0x28, .type=IO_READ},
        {.addr=0x7a22, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x6663, .a=0xc0, .x=0x12, .y=0x99, .sp=0x68, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x6663, .value=0x28}, {.addr=0x6664, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x6665, .a=0x80, .x=0x12, .y=0x99, .sp=0x68, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x6663, .value=0x28}, {.addr=0x6664, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x6663, .value=0x28, .type=IO_READ},
        {.addr=0x6664, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x7d7f, .a=0x44, .x=0xba, .y=0xaf, .sp=0x48, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x7d7f, .value=0x28}, {.addr=0x7d80, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x7d81, .a=0x44, .x=0xba, .y=0xaf, .sp=0x48, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x7d7f, .value=0x28}, {.addr=0x7d80, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x7d7f, .value=0x28, .type=IO_READ},
        {.addr=0x7d80, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x6119, .a=0xbe, .x=0x54, .y=0xaa, .sp=0x2d, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x6119, .value=0x28}, {.addr=0x611a, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x611b, .a=0xb2, .x=0x54, .y=0xaa, .sp=0x2d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6119, .value=0x28}, {.addr=0x611a, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x6119, .value=0x28, .type=IO_READ},
        {.addr=0x611a, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xafaf, .a=0x4d, .x=0x6f, .y=0x97, .sp=0x48, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xafaf, .value=0x28}, {.addr=0xafb0, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xafb1, .a=0x04, .x=0x6f, .y=0x97, .sp=0x48, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xafaf, .value=0x28}, {.addr=0xafb0, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xafaf, .value=0x28, .type=IO_READ},
        {.addr=0xafb0, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x6951, .a=0x5d, .x=0x4b, .y=0x5f, .sp=0x6d, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x6951, .value=0x28}, {.addr=0x6952, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x6953, .a=0x11, .x=0x4b, .y=0x5f, .sp=0x6d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x6951, .value=0x28}, {.addr=0x6952, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x6951, .value=0x28, .type=IO_READ},
        {.addr=0x6952, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x7b10, .a=0x03, .x=0xd1, .y=0xc2, .sp=0xc1, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x7b10, .value=0x28}, {.addr=0x7b11, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x7b12, .a=0x00, .x=0xd1, .y=0xc2, .sp=0xc1, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x7b10, .value=0x28}, {.addr=0x7b11, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x7b10, .value=0x28, .type=IO_READ},
        {.addr=0x7b11, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xe991, .a=0xcf, .x=0x0d, .y=0xf8, .sp=0xd1, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xe991, .value=0x28}, {.addr=0xe992, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xe993, .a=0xce, .x=0x0d, .y=0xf8, .sp=0xd1, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe991, .value=0x28}, {.addr=0xe992, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xe991, .value=0x28, .type=IO_READ},
        {.addr=0xe992, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x5cc3, .a=0x7d, .x=0xa7, .y=0xdb, .sp=0x12, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5cc3, .value=0x28}, {.addr=0x5cc4, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x5cc5, .a=0x09, .x=0xa7, .y=0xdb, .sp=0x12, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5cc3, .value=0x28}, {.addr=0x5cc4, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x5cc3, .value=0x28, .type=IO_READ},
        {.addr=0x5cc4, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x5dc0, .a=0x4b, .x=0x86, .y=0x99, .sp=0xd1, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x5dc0, .value=0x28}, {.addr=0x5dc1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5dc2, .a=0x08, .x=0x86, .y=0x99, .sp=0xd1, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x5dc0, .value=0x28}, {.addr=0x5dc1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5dc0, .value=0x28, .type=IO_READ},
        {.addr=0x5dc1, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x0cdd, .a=0x2d, .x=0x0b, .y=0x85, .sp=0x3d, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0cdd, .value=0x28}, {.addr=0x0cde, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0cdf, .a=0x0d, .x=0x0b, .y=0x85, .sp=0x3d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0cdd, .value=0x28}, {.addr=0x0cde, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0cdd, .value=0x28, .type=IO_READ},
        {.addr=0x0cde, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x2919, .a=0x45, .x=0x15, .y=0xa8, .sp=0x80, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x2919, .value=0x28}, {.addr=0x291a, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x291b, .a=0x40, .x=0x15, .y=0xa8, .sp=0x80, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2919, .value=0x28}, {.addr=0x291a, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x2919, .value=0x28, .type=IO_READ},
        {.addr=0x291a, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x8ef5, .a=0xb6, .x=0x78, .y=0xc1, .sp=0xe2, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x8ef5, .value=0x28}, {.addr=0x8ef6, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x8ef7, .a=0x00, .x=0x78, .y=0xc1, .sp=0xe2, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x8ef5, .value=0x28}, {.addr=0x8ef6, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x8ef5, .value=0x28, .type=IO_READ},
        {.addr=0x8ef6, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xf3a3, .a=0xcb, .x=0x18, .y=0x93, .sp=0x48, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xf3a3, .value=0x28}, {.addr=0xf3a4, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xf3a5, .a=0x00, .x=0x18, .y=0x93, .sp=0x48, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xf3a3, .value=0x28}, {.addr=0xf3a4, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xf3a3, .value=0x28, .type=IO_READ},
        {.addr=0xf3a4, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x6711, .a=0xd6, .x=0x97, .y=0x7d, .sp=0x7a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x6711, .value=0x28}, {.addr=0x6712, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x6713, .a=0x44, .x=0x97, .y=0x7d, .sp=0x7a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6711, .value=0x28}, {.addr=0x6712, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x6711, .value=0x28, .type=IO_READ},
        {.addr=0x6712, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x275b, .a=0x43, .x=0xb5, .y=0x6d, .sp=0x95, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x275b, .value=0x28}, {.addr=0x275c, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x275d, .a=0x42, .x=0xb5, .y=0x6d, .sp=0x95, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x275b, .value=0x28}, {.addr=0x275c, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x275b, .value=0x28, .type=IO_READ},
        {.addr=0x275c, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x523e, .a=0x77, .x=0xda, .y=0x7e, .sp=0x8d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x523e, .value=0x28}, {.addr=0x523f, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x5240, .a=0x52, .x=0xda, .y=0x7e, .sp=0x8d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x523e, .value=0x28}, {.addr=0x523f, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x523e, .value=0x28, .type=IO_READ},
        {.addr=0x523f, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x7ba4, .a=0x2b, .x=0x5a, .y=0x27, .sp=0xd3, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x7ba4, .value=0x28}, {.addr=0x7ba5, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x7ba6, .a=0x0b, .x=0x5a, .y=0x27, .sp=0xd3, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x7ba4, .value=0x28}, {.addr=0x7ba5, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x7ba4, .value=0x28, .type=IO_READ},
        {.addr=0x7ba5, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xf233, .a=0x29, .x=0x62, .y=0x3f, .sp=0xbf, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xf233, .value=0x28}, {.addr=0xf234, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xf235, .a=0x09, .x=0x62, .y=0x3f, .sp=0xbf, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf233, .value=0x28}, {.addr=0xf234, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xf233, .value=0x28, .type=IO_READ},
        {.addr=0xf234, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xa27f, .a=0x34, .x=0x7e, .y=0xf1, .sp=0x18, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xa27f, .value=0x28}, {.addr=0xa280, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa281, .a=0x04, .x=0x7e, .y=0xf1, .sp=0x18, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa27f, .value=0x28}, {.addr=0xa280, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa27f, .value=0x28, .type=IO_READ},
        {.addr=0xa280, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x86c8, .a=0xc8, .x=0x20, .y=0xf2, .sp=0x3d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x86c8, .value=0x28}, {.addr=0x86c9, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x86ca, .a=0x48, .x=0x20, .y=0xf2, .sp=0x3d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x86c8, .value=0x28}, {.addr=0x86c9, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x86c8, .value=0x28, .type=IO_READ},
        {.addr=0x86c9, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x7225, .a=0x6d, .x=0x95, .y=0xf4, .sp=0xeb, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x7225, .value=0x28}, {.addr=0x7226, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x7227, .a=0x01, .x=0x95, .y=0xf4, .sp=0xeb, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x7225, .value=0x28}, {.addr=0x7226, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x7225, .value=0x28, .type=IO_READ},
        {.addr=0x7226, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xb4d3, .a=0xc9, .x=0x8c, .y=0x12, .sp=0x29, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xb4d3, .value=0x28}, {.addr=0xb4d4, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xb4d5, .a=0x81, .x=0x8c, .y=0x12, .sp=0x29, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb4d3, .value=0x28}, {.addr=0xb4d4, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xb4d3, .value=0x28, .type=IO_READ},
        {.addr=0xb4d4, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x9e86, .a=0x88, .x=0x8d, .y=0x8f, .sp=0x62, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x9e86, .value=0x28}, {.addr=0x9e87, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9e88, .a=0x88, .x=0x8d, .y=0x8f, .sp=0x62, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9e86, .value=0x28}, {.addr=0x9e87, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9e86, .value=0x28, .type=IO_READ},
        {.addr=0x9e87, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x050e, .a=0xe5, .x=0x37, .y=0xd0, .sp=0xd5, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x050e, .value=0x28}, {.addr=0x050f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0510, .a=0x65, .x=0x37, .y=0xd0, .sp=0xd5, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x050e, .value=0x28}, {.addr=0x050f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x050e, .value=0x28, .type=IO_READ},
        {.addr=0x050f, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xf7db, .a=0x5b, .x=0xbb, .y=0x0b, .sp=0x7f, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xf7db, .value=0x28}, {.addr=0xf7dc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf7dd, .a=0x1b, .x=0xbb, .y=0x0b, .sp=0x7f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf7db, .value=0x28}, {.addr=0xf7dc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf7db, .value=0x28, .type=IO_READ},
        {.addr=0xf7dc, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x0a24, .a=0x5c, .x=0x27, .y=0xec, .sp=0x96, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0a24, .value=0x28}, {.addr=0x0a25, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x0a26, .a=0x40, .x=0x27, .y=0xec, .sp=0x96, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0a24, .value=0x28}, {.addr=0x0a25, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x0a24, .value=0x28, .type=IO_READ},
        {.addr=0x0a25, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x1e15, .a=0xff, .x=0x86, .y=0xa2, .sp=0x72, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x1e15, .value=0x28}, {.addr=0x1e16, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x1e17, .a=0x13, .x=0x86, .y=0xa2, .sp=0x72, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1e15, .value=0x28}, {.addr=0x1e16, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x1e15, .value=0x28, .type=IO_READ},
        {.addr=0x1e16, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x7285, .a=0x4c, .x=0x47, .y=0x0e, .sp=0x32, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x7285, .value=0x28}, {.addr=0x7286, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7287, .a=0x00, .x=0x47, .y=0x0e, .sp=0x32, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x7285, .value=0x28}, {.addr=0x7286, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7285, .value=0x28, .type=IO_READ},
        {.addr=0x7286, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x914a, .a=0xa9, .x=0xaf, .y=0x73, .sp=0x7d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x914a, .value=0x28}, {.addr=0x914b, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x914c, .a=0xa9, .x=0xaf, .y=0x73, .sp=0x7d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x914a, .value=0x28}, {.addr=0x914b, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x914a, .value=0x28, .type=IO_READ},
        {.addr=0x914b, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xd4e3, .a=0x5d, .x=0x2f, .y=0xbf, .sp=0xe5, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xd4e3, .value=0x28}, {.addr=0xd4e4, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xd4e5, .a=0x10, .x=0x2f, .y=0xbf, .sp=0xe5, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd4e3, .value=0x28}, {.addr=0xd4e4, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xd4e3, .value=0x28, .type=IO_READ},
        {.addr=0xd4e4, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xfb52, .a=0x03, .x=0x73, .y=0x8f, .sp=0xba, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xfb52, .value=0x28}, {.addr=0xfb53, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xfb54, .a=0x02, .x=0x73, .y=0x8f, .sp=0xba, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xfb52, .value=0x28}, {.addr=0xfb53, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xfb52, .value=0x28, .type=IO_READ},
        {.addr=0xfb53, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x6a76, .a=0x8a, .x=0xcd, .y=0x18, .sp=0xc6, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x6a76, .value=0x28}, {.addr=0x6a77, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6a78, .a=0x08, .x=0xcd, .y=0x18, .sp=0xc6, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6a76, .value=0x28}, {.addr=0x6a77, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6a76, .value=0x28, .type=IO_READ},
        {.addr=0x6a77, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x239b, .a=0x7b, .x=0xf1, .y=0x13, .sp=0x8e, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x239b, .value=0x28}, {.addr=0x239c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x239d, .a=0x78, .x=0xf1, .y=0x13, .sp=0x8e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x239b, .value=0x28}, {.addr=0x239c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x239b, .value=0x28, .type=IO_READ},
        {.addr=0x239c, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x0942, .a=0x52, .x=0x56, .y=0xaa, .sp=0x26, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0942, .value=0x28}, {.addr=0x0943, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0944, .a=0x10, .x=0x56, .y=0xaa, .sp=0x26, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0942, .value=0x28}, {.addr=0x0943, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0942, .value=0x28, .type=IO_READ},
        {.addr=0x0943, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xd89b, .a=0x24, .x=0xe5, .y=0xdc, .sp=0x34, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd89b, .value=0x28}, {.addr=0xd89c, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xd89d, .a=0x00, .x=0xe5, .y=0xdc, .sp=0x34, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xd89b, .value=0x28}, {.addr=0xd89c, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xd89b, .value=0x28, .type=IO_READ},
        {.addr=0xd89c, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x8684, .a=0x30, .x=0x37, .y=0x40, .sp=0x33, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x8684, .value=0x28}, {.addr=0x8685, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x8686, .a=0x20, .x=0x37, .y=0x40, .sp=0x33, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8684, .value=0x28}, {.addr=0x8685, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x8684, .value=0x28, .type=IO_READ},
        {.addr=0x8685, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xe6ff, .a=0xd1, .x=0x34, .y=0x9a, .sp=0x94, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xe6ff, .value=0x28}, {.addr=0xe700, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xe701, .a=0x41, .x=0x34, .y=0x9a, .sp=0x94, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xe6ff, .value=0x28}, {.addr=0xe700, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xe6ff, .value=0x28, .type=IO_READ},
        {.addr=0xe700, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x006d, .a=0xbe, .x=0x55, .y=0x76, .sp=0x5c, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x28}, {.addr=0x006e, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x006f, .a=0x34, .x=0x55, .y=0x76, .sp=0x5c, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0x28}, {.addr=0x006e, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x006d, .value=0x28, .type=IO_READ},
        {.addr=0x006e, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x296c, .a=0x1d, .x=0xa7, .y=0x05, .sp=0x54, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x296c, .value=0x28}, {.addr=0x296d, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x296e, .a=0x0c, .x=0xa7, .y=0x05, .sp=0x54, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x296c, .value=0x28}, {.addr=0x296d, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x296c, .value=0x28, .type=IO_READ},
        {.addr=0x296d, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x2e54, .a=0x0e, .x=0xc3, .y=0xf3, .sp=0x9d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2e54, .value=0x28}, {.addr=0x2e55, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x2e56, .a=0x00, .x=0xc3, .y=0xf3, .sp=0x9d, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x2e54, .value=0x28}, {.addr=0x2e55, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x2e54, .value=0x28, .type=IO_READ},
        {.addr=0x2e55, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x7c94, .a=0x3b, .x=0x6e, .y=0x55, .sp=0xeb, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x7c94, .value=0x28}, {.addr=0x7c95, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7c96, .a=0x39, .x=0x6e, .y=0x55, .sp=0xeb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7c94, .value=0x28}, {.addr=0x7c95, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7c94, .value=0x28, .type=IO_READ},
        {.addr=0x7c95, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x71df, .a=0x70, .x=0x0e, .y=0x2a, .sp=0x15, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x71df, .value=0x28}, {.addr=0x71e0, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x71e1, .a=0x20, .x=0x0e, .y=0x2a, .sp=0x15, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x71df, .value=0x28}, {.addr=0x71e0, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x71df, .value=0x28, .type=IO_READ},
        {.addr=0x71e0, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x50e9, .a=0xad, .x=0xa1, .y=0x9d, .sp=0x44, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x50e9, .value=0x28}, {.addr=0x50ea, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x50eb, .a=0x00, .x=0xa1, .y=0x9d, .sp=0x44, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x50e9, .value=0x28}, {.addr=0x50ea, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x50e9, .value=0x28, .type=IO_READ},
        {.addr=0x50ea, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x6dd7, .a=0xbd, .x=0x85, .y=0x6f, .sp=0x76, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd7, .value=0x28}, {.addr=0x6dd8, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x6dd9, .a=0x00, .x=0x85, .y=0x6f, .sp=0x76, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x6dd7, .value=0x28}, {.addr=0x6dd8, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x6dd7, .value=0x28, .type=IO_READ},
        {.addr=0x6dd8, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xf5e5, .a=0xa7, .x=0xf9, .y=0x36, .sp=0x71, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xf5e5, .value=0x28}, {.addr=0xf5e6, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xf5e7, .a=0x23, .x=0xf9, .y=0x36, .sp=0x71, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf5e5, .value=0x28}, {.addr=0xf5e6, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xf5e5, .value=0x28, .type=IO_READ},
        {.addr=0xf5e6, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xc25d, .a=0x06, .x=0x0a, .y=0x60, .sp=0x61, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xc25d, .value=0x28}, {.addr=0xc25e, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xc25f, .a=0x00, .x=0x0a, .y=0x60, .sp=0x61, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xc25d, .value=0x28}, {.addr=0xc25e, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xc25d, .value=0x28, .type=IO_READ},
        {.addr=0xc25e, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x2fc6, .a=0x81, .x=0xe5, .y=0x59, .sp=0x42, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x2fc6, .value=0x28}, {.addr=0x2fc7, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x2fc8, .a=0x00, .x=0xe5, .y=0x59, .sp=0x42, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x2fc6, .value=0x28}, {.addr=0x2fc7, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x2fc6, .value=0x28, .type=IO_READ},
        {.addr=0x2fc7, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x6cac, .a=0xbf, .x=0x1c, .y=0x7d, .sp=0x96, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x6cac, .value=0x28}, {.addr=0x6cad, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x6cae, .a=0xab, .x=0x1c, .y=0x7d, .sp=0x96, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x6cac, .value=0x28}, {.addr=0x6cad, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x6cac, .value=0x28, .type=IO_READ},
        {.addr=0x6cad, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xa228, .a=0xfc, .x=0x48, .y=0x38, .sp=0x85, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xa228, .value=0x28}, {.addr=0xa229, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xa22a, .a=0x24, .x=0x48, .y=0x38, .sp=0x85, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa228, .value=0x28}, {.addr=0xa229, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xa228, .value=0x28, .type=IO_READ},
        {.addr=0xa229, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xa6e5, .a=0x2b, .x=0xb2, .y=0xfb, .sp=0xc8, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xa6e5, .value=0x28}, {.addr=0xa6e6, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xa6e7, .a=0x03, .x=0xb2, .y=0xfb, .sp=0xc8, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa6e5, .value=0x28}, {.addr=0xa6e6, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xa6e5, .value=0x28, .type=IO_READ},
        {.addr=0xa6e6, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x2352, .a=0xf4, .x=0x75, .y=0x11, .sp=0x70, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x2352, .value=0x28}, {.addr=0x2353, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x2354, .a=0x10, .x=0x75, .y=0x11, .sp=0x70, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2352, .value=0x28}, {.addr=0x2353, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x2352, .value=0x28, .type=IO_READ},
        {.addr=0x2353, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xee4b, .a=0x3c, .x=0xaf, .y=0xac, .sp=0x2b, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xee4b, .value=0x28}, {.addr=0xee4c, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xee4d, .a=0x34, .x=0xaf, .y=0xac, .sp=0x2b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xee4b, .value=0x28}, {.addr=0xee4c, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xee4b, .value=0x28, .type=IO_READ},
        {.addr=0xee4c, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x281b, .a=0xa0, .x=0x71, .y=0x9f, .sp=0x8c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x281b, .value=0x28}, {.addr=0x281c, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x281d, .a=0x00, .x=0x71, .y=0x9f, .sp=0x8c, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x281b, .value=0x28}, {.addr=0x281c, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x281b, .value=0x28, .type=IO_READ},
        {.addr=0x281c, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x482d, .a=0xe6, .x=0x86, .y=0xee, .sp=0x99, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x482d, .value=0x28}, {.addr=0x482e, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x482f, .a=0x60, .x=0x86, .y=0xee, .sp=0x99, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x482d, .value=0x28}, {.addr=0x482e, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x482d, .value=0x28, .type=IO_READ},
        {.addr=0x482e, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xb176, .a=0xd9, .x=0x68, .y=0x4a, .sp=0xff, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xb176, .value=0x28}, {.addr=0xb177, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xb178, .a=0x11, .x=0x68, .y=0x4a, .sp=0xff, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb176, .value=0x28}, {.addr=0xb177, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xb176, .value=0x28, .type=IO_READ},
        {.addr=0xb177, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x934d, .a=0x42, .x=0x7b, .y=0x53, .sp=0xe8, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x934d, .value=0x28}, {.addr=0x934e, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x934f, .a=0x00, .x=0x7b, .y=0x53, .sp=0xe8, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x934d, .value=0x28}, {.addr=0x934e, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x934d, .value=0x28, .type=IO_READ},
        {.addr=0x934e, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x3012, .a=0x56, .x=0xe9, .y=0xd7, .sp=0x5e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x3012, .value=0x28}, {.addr=0x3013, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3014, .a=0x06, .x=0xe9, .y=0xd7, .sp=0x5e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x3012, .value=0x28}, {.addr=0x3013, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3012, .value=0x28, .type=IO_READ},
        {.addr=0x3013, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xf557, .a=0x6c, .x=0x57, .y=0xa1, .sp=0xe6, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xf557, .value=0x28}, {.addr=0xf558, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xf559, .a=0x24, .x=0x57, .y=0xa1, .sp=0xe6, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xf557, .value=0x28}, {.addr=0xf558, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xf557, .value=0x28, .type=IO_READ},
        {.addr=0xf558, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xa183, .a=0x51, .x=0xe4, .y=0xa2, .sp=0xc9, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xa183, .value=0x28}, {.addr=0xa184, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xa185, .a=0x01, .x=0xe4, .y=0xa2, .sp=0xc9, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xa183, .value=0x28}, {.addr=0xa184, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xa183, .value=0x28, .type=IO_READ},
        {.addr=0xa184, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x26b7, .a=0x7c, .x=0x59, .y=0x89, .sp=0x55, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x26b7, .value=0x28}, {.addr=0x26b8, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x26b9, .a=0x10, .x=0x59, .y=0x89, .sp=0x55, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x26b7, .value=0x28}, {.addr=0x26b8, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x26b7, .value=0x28, .type=IO_READ},
        {.addr=0x26b8, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x2934, .a=0xbb, .x=0xbf, .y=0xac, .sp=0xb4, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2934, .value=0x28}, {.addr=0x2935, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x2936, .a=0x92, .x=0xbf, .y=0xac, .sp=0xb4, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2934, .value=0x28}, {.addr=0x2935, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x2934, .value=0x28, .type=IO_READ},
        {.addr=0x2935, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xfb54, .a=0xa0, .x=0xe9, .y=0x3b, .sp=0x59, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xfb54, .value=0x28}, {.addr=0xfb55, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xfb56, .a=0x80, .x=0xe9, .y=0x3b, .sp=0x59, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xfb54, .value=0x28}, {.addr=0xfb55, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xfb54, .value=0x28, .type=IO_READ},
        {.addr=0xfb55, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x44e8, .a=0x79, .x=0x96, .y=0x3a, .sp=0x50, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x44e8, .value=0x28}, {.addr=0x44e9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x44ea, .a=0x18, .x=0x96, .y=0x3a, .sp=0x50, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x44e8, .value=0x28}, {.addr=0x44e9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x44e8, .value=0x28, .type=IO_READ},
        {.addr=0x44e9, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x6f10, .a=0x4c, .x=0x39, .y=0xdc, .sp=0x5c, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x6f10, .value=0x28}, {.addr=0x6f11, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x6f12, .a=0x04, .x=0x39, .y=0xdc, .sp=0x5c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6f10, .value=0x28}, {.addr=0x6f11, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x6f10, .value=0x28, .type=IO_READ},
        {.addr=0x6f11, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x0ca6, .a=0x60, .x=0x0f, .y=0x67, .sp=0x50, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca6, .value=0x28}, {.addr=0x0ca7, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x0ca8, .a=0x20, .x=0x0f, .y=0x67, .sp=0x50, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0ca6, .value=0x28}, {.addr=0x0ca7, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x0ca6, .value=0x28, .type=IO_READ},
        {.addr=0x0ca7, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x1791, .a=0x7c, .x=0xdb, .y=0x34, .sp=0x6a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x1791, .value=0x28}, {.addr=0x1792, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x1793, .a=0x54, .x=0xdb, .y=0x34, .sp=0x6a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1791, .value=0x28}, {.addr=0x1792, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x1791, .value=0x28, .type=IO_READ},
        {.addr=0x1792, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x3b37, .a=0x48, .x=0x92, .y=0x61, .sp=0xd4, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x3b37, .value=0x28}, {.addr=0x3b38, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x3b39, .a=0x48, .x=0x92, .y=0x61, .sp=0xd4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3b37, .value=0x28}, {.addr=0x3b38, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x3b37, .value=0x28, .type=IO_READ},
        {.addr=0x3b38, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x77ca, .a=0x7d, .x=0x4b, .y=0x44, .sp=0x8d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x77ca, .value=0x28}, {.addr=0x77cb, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x77cc, .a=0x01, .x=0x4b, .y=0x44, .sp=0x8d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x77ca, .value=0x28}, {.addr=0x77cb, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x77ca, .value=0x28, .type=IO_READ},
        {.addr=0x77cb, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x4315, .a=0x05, .x=0x33, .y=0x26, .sp=0x22, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x4315, .value=0x28}, {.addr=0x4316, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x4317, .a=0x05, .x=0x33, .y=0x26, .sp=0x22, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4315, .value=0x28}, {.addr=0x4316, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x4315, .value=0x28, .type=IO_READ},
        {.addr=0x4316, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xed0d, .a=0x83, .x=0x89, .y=0xda, .sp=0xc2, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xed0d, .value=0x28}, {.addr=0xed0e, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xed0f, .a=0x83, .x=0x89, .y=0xda, .sp=0xc2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xed0d, .value=0x28}, {.addr=0xed0e, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xed0d, .value=0x28, .type=IO_READ},
        {.addr=0xed0e, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x900a, .a=0x25, .x=0x1b, .y=0xb0, .sp=0x95, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x900a, .value=0x28}, {.addr=0x900b, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x900c, .a=0x25, .x=0x1b, .y=0xb0, .sp=0x95, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x900a, .value=0x28}, {.addr=0x900b, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x900a, .value=0x28, .type=IO_READ},
        {.addr=0x900b, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xb6a1, .a=0x80, .x=0x78, .y=0x3e, .sp=0x86, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xb6a1, .value=0x28}, {.addr=0xb6a2, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xb6a3, .a=0x80, .x=0x78, .y=0x3e, .sp=0x86, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb6a1, .value=0x28}, {.addr=0xb6a2, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xb6a1, .value=0x28, .type=IO_READ},
        {.addr=0xb6a2, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xe560, .a=0x79, .x=0x61, .y=0xa3, .sp=0x80, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xe560, .value=0x28}, {.addr=0xe561, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xe562, .a=0x79, .x=0x61, .y=0xa3, .sp=0x80, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xe560, .value=0x28}, {.addr=0xe561, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xe560, .value=0x28, .type=IO_READ},
        {.addr=0xe561, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x8d68, .a=0x14, .x=0xb5, .y=0xc7, .sp=0x9e, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x8d68, .value=0x28}, {.addr=0x8d69, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x8d6a, .a=0x00, .x=0xb5, .y=0xc7, .sp=0x9e, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x8d68, .value=0x28}, {.addr=0x8d69, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x8d68, .value=0x28, .type=IO_READ},
        {.addr=0x8d69, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x1cfd, .a=0x12, .x=0x60, .y=0x3b, .sp=0xdf, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x1cfd, .value=0x28}, {.addr=0x1cfe, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x1cff, .a=0x10, .x=0x60, .y=0x3b, .sp=0xdf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1cfd, .value=0x28}, {.addr=0x1cfe, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x1cfd, .value=0x28, .type=IO_READ},
        {.addr=0x1cfe, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0300) {
    const struct CPU_State initial_cpu = {.pc=0x82f0, .a=0xb4, .x=0x41, .y=0x44, .sp=0xea, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x82f0, .value=0x28}, {.addr=0x82f1, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x82f2, .a=0x80, .x=0x41, .y=0x44, .sp=0xea, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x82f0, .value=0x28}, {.addr=0x82f1, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x82f0, .value=0x28, .type=IO_READ},
        {.addr=0x82f1, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0301) {
    const struct CPU_State initial_cpu = {.pc=0xee32, .a=0xf5, .x=0x6c, .y=0x88, .sp=0x88, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xee32, .value=0x28}, {.addr=0xee33, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xee34, .a=0xa1, .x=0x6c, .y=0x88, .sp=0x88, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xee32, .value=0x28}, {.addr=0xee33, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xee32, .value=0x28, .type=IO_READ},
        {.addr=0xee33, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0302) {
    const struct CPU_State initial_cpu = {.pc=0x4c26, .a=0x60, .x=0x87, .y=0xa3, .sp=0x02, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x4c26, .value=0x28}, {.addr=0x4c27, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x4c28, .a=0x40, .x=0x87, .y=0xa3, .sp=0x02, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4c26, .value=0x28}, {.addr=0x4c27, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x4c26, .value=0x28, .type=IO_READ},
        {.addr=0x4c27, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0303) {
    const struct CPU_State initial_cpu = {.pc=0xa06a, .a=0x00, .x=0x7f, .y=0xea, .sp=0x16, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xa06a, .value=0x28}, {.addr=0xa06b, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xa06c, .a=0x00, .x=0x7f, .y=0xea, .sp=0x16, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xa06a, .value=0x28}, {.addr=0xa06b, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xa06a, .value=0x28, .type=IO_READ},
        {.addr=0xa06b, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0304) {
    const struct CPU_State initial_cpu = {.pc=0x61a4, .a=0xc3, .x=0x16, .y=0x16, .sp=0x3b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x61a4, .value=0x28}, {.addr=0x61a5, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x61a6, .a=0x42, .x=0x16, .y=0x16, .sp=0x3b, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x61a4, .value=0x28}, {.addr=0x61a5, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x61a4, .value=0x28, .type=IO_READ},
        {.addr=0x61a5, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0305) {
    const struct CPU_State initial_cpu = {.pc=0x3ab3, .a=0x5c, .x=0x86, .y=0x41, .sp=0xc5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x3ab3, .value=0x28}, {.addr=0x3ab4, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x3ab5, .a=0x54, .x=0x86, .y=0x41, .sp=0xc5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x3ab3, .value=0x28}, {.addr=0x3ab4, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x3ab3, .value=0x28, .type=IO_READ},
        {.addr=0x3ab4, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0306) {
    const struct CPU_State initial_cpu = {.pc=0x0630, .a=0xa3, .x=0x35, .y=0xa7, .sp=0x9c, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0630, .value=0x28}, {.addr=0x0631, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x0632, .a=0x82, .x=0x35, .y=0xa7, .sp=0x9c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0630, .value=0x28}, {.addr=0x0631, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x0630, .value=0x28, .type=IO_READ},
        {.addr=0x0631, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0307) {
    const struct CPU_State initial_cpu = {.pc=0x3b36, .a=0x92, .x=0xc1, .y=0x85, .sp=0xda, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x3b36, .value=0x28}, {.addr=0x3b37, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3b38, .a=0x82, .x=0xc1, .y=0x85, .sp=0xda, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3b36, .value=0x28}, {.addr=0x3b37, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3b36, .value=0x28, .type=IO_READ},
        {.addr=0x3b37, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0308) {
    const struct CPU_State initial_cpu = {.pc=0x0ca6, .a=0xae, .x=0x2a, .y=0x0c, .sp=0xff, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca6, .value=0x28}, {.addr=0x0ca7, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x0ca8, .a=0x22, .x=0x2a, .y=0x0c, .sp=0xff, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0ca6, .value=0x28}, {.addr=0x0ca7, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x0ca6, .value=0x28, .type=IO_READ},
        {.addr=0x0ca7, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0309) {
    const struct CPU_State initial_cpu = {.pc=0x0407, .a=0x64, .x=0xdd, .y=0x57, .sp=0xb8, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0407, .value=0x28}, {.addr=0x0408, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x0409, .a=0x44, .x=0xdd, .y=0x57, .sp=0xb8, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0407, .value=0x28}, {.addr=0x0408, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x0407, .value=0x28, .type=IO_READ},
        {.addr=0x0408, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_030A) {
    const struct CPU_State initial_cpu = {.pc=0x6014, .a=0x6e, .x=0x55, .y=0xf3, .sp=0x31, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x6014, .value=0x28}, {.addr=0x6015, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x6016, .a=0x6c, .x=0x55, .y=0xf3, .sp=0x31, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x6014, .value=0x28}, {.addr=0x6015, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x6014, .value=0x28, .type=IO_READ},
        {.addr=0x6015, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_030B) {
    const struct CPU_State initial_cpu = {.pc=0x80f0, .a=0x30, .x=0x24, .y=0x52, .sp=0xb6, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x80f0, .value=0x28}, {.addr=0x80f1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x80f2, .a=0x00, .x=0x24, .y=0x52, .sp=0xb6, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x80f0, .value=0x28}, {.addr=0x80f1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x80f0, .value=0x28, .type=IO_READ},
        {.addr=0x80f1, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_030C) {
    const struct CPU_State initial_cpu = {.pc=0xa2c7, .a=0xe8, .x=0x7f, .y=0x27, .sp=0xc2, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xa2c7, .value=0x28}, {.addr=0xa2c8, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xa2c9, .a=0x00, .x=0x7f, .y=0x27, .sp=0xc2, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xa2c7, .value=0x28}, {.addr=0xa2c8, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xa2c7, .value=0x28, .type=IO_READ},
        {.addr=0xa2c8, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_030D) {
    const struct CPU_State initial_cpu = {.pc=0xad8c, .a=0xd6, .x=0x47, .y=0x6b, .sp=0x42, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xad8c, .value=0x28}, {.addr=0xad8d, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xad8e, .a=0x44, .x=0x47, .y=0x6b, .sp=0x42, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xad8c, .value=0x28}, {.addr=0xad8d, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xad8c, .value=0x28, .type=IO_READ},
        {.addr=0xad8d, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_030E) {
    const struct CPU_State initial_cpu = {.pc=0x0b50, .a=0x7f, .x=0x39, .y=0x85, .sp=0x5b, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0b50, .value=0x28}, {.addr=0x0b51, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x0b52, .a=0x32, .x=0x39, .y=0x85, .sp=0x5b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0b50, .value=0x28}, {.addr=0x0b51, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x0b50, .value=0x28, .type=IO_READ},
        {.addr=0x0b51, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_030F) {
    const struct CPU_State initial_cpu = {.pc=0xab71, .a=0x01, .x=0x02, .y=0xb8, .sp=0x6c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xab71, .value=0x28}, {.addr=0xab72, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xab73, .a=0x00, .x=0x02, .y=0xb8, .sp=0x6c, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xab71, .value=0x28}, {.addr=0xab72, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xab71, .value=0x28, .type=IO_READ},
        {.addr=0xab72, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0310) {
    const struct CPU_State initial_cpu = {.pc=0x9083, .a=0x9a, .x=0x18, .y=0x72, .sp=0xb5, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x9083, .value=0x28}, {.addr=0x9084, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x9085, .a=0x80, .x=0x18, .y=0x72, .sp=0xb5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9083, .value=0x28}, {.addr=0x9084, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x9083, .value=0x28, .type=IO_READ},
        {.addr=0x9084, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0311) {
    const struct CPU_State initial_cpu = {.pc=0x1b7c, .a=0x05, .x=0x23, .y=0x39, .sp=0x17, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x1b7c, .value=0x28}, {.addr=0x1b7d, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x1b7e, .a=0x05, .x=0x23, .y=0x39, .sp=0x17, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x1b7c, .value=0x28}, {.addr=0x1b7d, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x1b7c, .value=0x28, .type=IO_READ},
        {.addr=0x1b7d, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0312) {
    const struct CPU_State initial_cpu = {.pc=0x0787, .a=0x49, .x=0x7e, .y=0xf0, .sp=0xfe, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0787, .value=0x28}, {.addr=0x0788, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x0789, .a=0x40, .x=0x7e, .y=0xf0, .sp=0xfe, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0787, .value=0x28}, {.addr=0x0788, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x0787, .value=0x28, .type=IO_READ},
        {.addr=0x0788, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0313) {
    const struct CPU_State initial_cpu = {.pc=0x4778, .a=0x08, .x=0x1e, .y=0x74, .sp=0x34, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x4778, .value=0x28}, {.addr=0x4779, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x477a, .a=0x00, .x=0x1e, .y=0x74, .sp=0x34, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x4778, .value=0x28}, {.addr=0x4779, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x4778, .value=0x28, .type=IO_READ},
        {.addr=0x4779, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0314) {
    const struct CPU_State initial_cpu = {.pc=0xacea, .a=0x6a, .x=0x3b, .y=0x9f, .sp=0x5a, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xacea, .value=0x28}, {.addr=0xaceb, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xacec, .a=0x0a, .x=0x3b, .y=0x9f, .sp=0x5a, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xacea, .value=0x28}, {.addr=0xaceb, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xacea, .value=0x28, .type=IO_READ},
        {.addr=0xaceb, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0315) {
    const struct CPU_State initial_cpu = {.pc=0x04c6, .a=0x4a, .x=0x6b, .y=0x26, .sp=0x7c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x04c6, .value=0x28}, {.addr=0x04c7, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x04c8, .a=0x40, .x=0x6b, .y=0x26, .sp=0x7c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x04c6, .value=0x28}, {.addr=0x04c7, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x04c6, .value=0x28, .type=IO_READ},
        {.addr=0x04c7, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0316) {
    const struct CPU_State initial_cpu = {.pc=0x54d7, .a=0x00, .x=0x11, .y=0xee, .sp=0x85, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x54d7, .value=0x28}, {.addr=0x54d8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x54d9, .a=0x00, .x=0x11, .y=0xee, .sp=0x85, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x54d7, .value=0x28}, {.addr=0x54d8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x54d7, .value=0x28, .type=IO_READ},
        {.addr=0x54d8, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0317) {
    const struct CPU_State initial_cpu = {.pc=0x6842, .a=0x73, .x=0xc6, .y=0x7e, .sp=0xfc, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6842, .value=0x28}, {.addr=0x6843, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x6844, .a=0x51, .x=0xc6, .y=0x7e, .sp=0xfc, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6842, .value=0x28}, {.addr=0x6843, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x6842, .value=0x28, .type=IO_READ},
        {.addr=0x6843, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0318) {
    const struct CPU_State initial_cpu = {.pc=0x96b5, .a=0x9e, .x=0xfb, .y=0xee, .sp=0xfa, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x96b5, .value=0x28}, {.addr=0x96b6, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x96b7, .a=0x8c, .x=0xfb, .y=0xee, .sp=0xfa, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x96b5, .value=0x28}, {.addr=0x96b6, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x96b5, .value=0x28, .type=IO_READ},
        {.addr=0x96b6, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0319) {
    const struct CPU_State initial_cpu = {.pc=0x5b7d, .a=0x0f, .x=0x91, .y=0xb5, .sp=0x2c, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x5b7d, .value=0x28}, {.addr=0x5b7e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5b7f, .a=0x0d, .x=0x91, .y=0xb5, .sp=0x2c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5b7d, .value=0x28}, {.addr=0x5b7e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5b7d, .value=0x28, .type=IO_READ},
        {.addr=0x5b7e, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_031A) {
    const struct CPU_State initial_cpu = {.pc=0xfc4c, .a=0x12, .x=0x86, .y=0x5b, .sp=0xdf, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xfc4c, .value=0x28}, {.addr=0xfc4d, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xfc4e, .a=0x12, .x=0x86, .y=0x5b, .sp=0xdf, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xfc4c, .value=0x28}, {.addr=0xfc4d, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xfc4c, .value=0x28, .type=IO_READ},
        {.addr=0xfc4d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_031B) {
    const struct CPU_State initial_cpu = {.pc=0x671a, .a=0x1e, .x=0x58, .y=0xd6, .sp=0x6a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x671a, .value=0x28}, {.addr=0x671b, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x671c, .a=0x08, .x=0x58, .y=0xd6, .sp=0x6a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x671a, .value=0x28}, {.addr=0x671b, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x671a, .value=0x28, .type=IO_READ},
        {.addr=0x671b, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_031C) {
    const struct CPU_State initial_cpu = {.pc=0x4b5c, .a=0x76, .x=0x08, .y=0x48, .sp=0xc5, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x4b5c, .value=0x28}, {.addr=0x4b5d, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x4b5e, .a=0x52, .x=0x08, .y=0x48, .sp=0xc5, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4b5c, .value=0x28}, {.addr=0x4b5d, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x4b5c, .value=0x28, .type=IO_READ},
        {.addr=0x4b5d, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_031D) {
    const struct CPU_State initial_cpu = {.pc=0x727c, .a=0xa5, .x=0xd1, .y=0xad, .sp=0x30, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x727c, .value=0x28}, {.addr=0x727d, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x727e, .a=0x21, .x=0xd1, .y=0xad, .sp=0x30, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x727c, .value=0x28}, {.addr=0x727d, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x727c, .value=0x28, .type=IO_READ},
        {.addr=0x727d, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_031E) {
    const struct CPU_State initial_cpu = {.pc=0x777a, .a=0x48, .x=0x64, .y=0xc4, .sp=0x60, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x777a, .value=0x28}, {.addr=0x777b, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x777c, .a=0x40, .x=0x64, .y=0xc4, .sp=0x60, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x777a, .value=0x28}, {.addr=0x777b, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x777a, .value=0x28, .type=IO_READ},
        {.addr=0x777b, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_031F) {
    const struct CPU_State initial_cpu = {.pc=0xe59c, .a=0x50, .x=0x82, .y=0xea, .sp=0x22, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xe59c, .value=0x28}, {.addr=0xe59d, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xe59e, .a=0x10, .x=0x82, .y=0xea, .sp=0x22, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe59c, .value=0x28}, {.addr=0xe59d, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xe59c, .value=0x28, .type=IO_READ},
        {.addr=0xe59d, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0320) {
    const struct CPU_State initial_cpu = {.pc=0x7d83, .a=0xbe, .x=0x68, .y=0x32, .sp=0x97, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x7d83, .value=0x28}, {.addr=0x7d84, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x7d85, .a=0x2e, .x=0x68, .y=0x32, .sp=0x97, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7d83, .value=0x28}, {.addr=0x7d84, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x7d83, .value=0x28, .type=IO_READ},
        {.addr=0x7d84, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0321) {
    const struct CPU_State initial_cpu = {.pc=0xdd2d, .a=0xae, .x=0x2c, .y=0x48, .sp=0xff, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xdd2d, .value=0x28}, {.addr=0xdd2e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdd2f, .a=0x0c, .x=0x2c, .y=0x48, .sp=0xff, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xdd2d, .value=0x28}, {.addr=0xdd2e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdd2d, .value=0x28, .type=IO_READ},
        {.addr=0xdd2e, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0322) {
    const struct CPU_State initial_cpu = {.pc=0x2ef2, .a=0x85, .x=0x97, .y=0xaf, .sp=0x29, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x2ef2, .value=0x28}, {.addr=0x2ef3, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x2ef4, .a=0x85, .x=0x97, .y=0xaf, .sp=0x29, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2ef2, .value=0x28}, {.addr=0x2ef3, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x2ef2, .value=0x28, .type=IO_READ},
        {.addr=0x2ef3, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0323) {
    const struct CPU_State initial_cpu = {.pc=0x0e30, .a=0x90, .x=0xc2, .y=0xe0, .sp=0xde, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0e30, .value=0x28}, {.addr=0x0e31, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x0e32, .a=0x00, .x=0xc2, .y=0xe0, .sp=0xde, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0e30, .value=0x28}, {.addr=0x0e31, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x0e30, .value=0x28, .type=IO_READ},
        {.addr=0x0e31, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0324) {
    const struct CPU_State initial_cpu = {.pc=0xba9c, .a=0x49, .x=0xbb, .y=0x37, .sp=0x46, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xba9c, .value=0x28}, {.addr=0xba9d, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xba9e, .a=0x49, .x=0xbb, .y=0x37, .sp=0x46, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xba9c, .value=0x28}, {.addr=0xba9d, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xba9c, .value=0x28, .type=IO_READ},
        {.addr=0xba9d, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0325) {
    const struct CPU_State initial_cpu = {.pc=0xd4ef, .a=0xfd, .x=0x82, .y=0x8a, .sp=0x4b, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ef, .value=0x28}, {.addr=0xd4f0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd4f1, .a=0x6d, .x=0x82, .y=0x8a, .sp=0x4b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd4ef, .value=0x28}, {.addr=0xd4f0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd4ef, .value=0x28, .type=IO_READ},
        {.addr=0xd4f0, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0326) {
    const struct CPU_State initial_cpu = {.pc=0xdfb9, .a=0x84, .x=0xce, .y=0x5f, .sp=0x39, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xdfb9, .value=0x28}, {.addr=0xdfba, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xdfbb, .a=0x04, .x=0xce, .y=0x5f, .sp=0x39, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xdfb9, .value=0x28}, {.addr=0xdfba, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xdfb9, .value=0x28, .type=IO_READ},
        {.addr=0xdfba, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0327) {
    const struct CPU_State initial_cpu = {.pc=0x05cc, .a=0x14, .x=0xc2, .y=0x92, .sp=0xbe, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x05cc, .value=0x28}, {.addr=0x05cd, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x05ce, .a=0x10, .x=0xc2, .y=0x92, .sp=0xbe, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x05cc, .value=0x28}, {.addr=0x05cd, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x05cc, .value=0x28, .type=IO_READ},
        {.addr=0x05cd, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0328) {
    const struct CPU_State initial_cpu = {.pc=0xc8e2, .a=0x63, .x=0xab, .y=0x17, .sp=0x02, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e2, .value=0x28}, {.addr=0xc8e3, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xc8e4, .a=0x22, .x=0xab, .y=0x17, .sp=0x02, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xc8e2, .value=0x28}, {.addr=0xc8e3, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xc8e2, .value=0x28, .type=IO_READ},
        {.addr=0xc8e3, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0329) {
    const struct CPU_State initial_cpu = {.pc=0xef3b, .a=0x40, .x=0xbf, .y=0x15, .sp=0x0b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xef3b, .value=0x28}, {.addr=0xef3c, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xef3d, .a=0x40, .x=0xbf, .y=0x15, .sp=0x0b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xef3b, .value=0x28}, {.addr=0xef3c, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xef3b, .value=0x28, .type=IO_READ},
        {.addr=0xef3c, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_032A) {
    const struct CPU_State initial_cpu = {.pc=0x26bc, .a=0x62, .x=0x80, .y=0x89, .sp=0x9b, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x26bc, .value=0x28}, {.addr=0x26bd, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x26be, .a=0x02, .x=0x80, .y=0x89, .sp=0x9b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x26bc, .value=0x28}, {.addr=0x26bd, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x26bc, .value=0x28, .type=IO_READ},
        {.addr=0x26bd, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_032B) {
    const struct CPU_State initial_cpu = {.pc=0xedce, .a=0x17, .x=0xa0, .y=0x7a, .sp=0xc7, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xedce, .value=0x28}, {.addr=0xedcf, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xedd0, .a=0x15, .x=0xa0, .y=0x7a, .sp=0xc7, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xedce, .value=0x28}, {.addr=0xedcf, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xedce, .value=0x28, .type=IO_READ},
        {.addr=0xedcf, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_032C) {
    const struct CPU_State initial_cpu = {.pc=0x7e48, .a=0xd4, .x=0xaf, .y=0xa1, .sp=0x7b, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x7e48, .value=0x28}, {.addr=0x7e49, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x7e4a, .a=0x40, .x=0xaf, .y=0xa1, .sp=0x7b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7e48, .value=0x28}, {.addr=0x7e49, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x7e48, .value=0x28, .type=IO_READ},
        {.addr=0x7e49, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_032D) {
    const struct CPU_State initial_cpu = {.pc=0xdc1e, .a=0x27, .x=0xea, .y=0xf6, .sp=0xcc, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xdc1e, .value=0x28}, {.addr=0xdc1f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdc20, .a=0x05, .x=0xea, .y=0xf6, .sp=0xcc, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xdc1e, .value=0x28}, {.addr=0xdc1f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdc1e, .value=0x28, .type=IO_READ},
        {.addr=0xdc1f, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_032E) {
    const struct CPU_State initial_cpu = {.pc=0x4c22, .a=0xed, .x=0xdb, .y=0xae, .sp=0xfc, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x4c22, .value=0x28}, {.addr=0x4c23, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x4c24, .a=0xc9, .x=0xdb, .y=0xae, .sp=0xfc, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4c22, .value=0x28}, {.addr=0x4c23, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x4c22, .value=0x28, .type=IO_READ},
        {.addr=0x4c23, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_032F) {
    const struct CPU_State initial_cpu = {.pc=0x450d, .a=0x97, .x=0x69, .y=0xba, .sp=0x15, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x450d, .value=0x28}, {.addr=0x450e, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x450f, .a=0x94, .x=0x69, .y=0xba, .sp=0x15, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x450d, .value=0x28}, {.addr=0x450e, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x450d, .value=0x28, .type=IO_READ},
        {.addr=0x450e, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0330) {
    const struct CPU_State initial_cpu = {.pc=0xd068, .a=0x76, .x=0xc3, .y=0x1d, .sp=0x6a, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xd068, .value=0x28}, {.addr=0xd069, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xd06a, .a=0x30, .x=0xc3, .y=0x1d, .sp=0x6a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd068, .value=0x28}, {.addr=0xd069, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xd068, .value=0x28, .type=IO_READ},
        {.addr=0xd069, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0331) {
    const struct CPU_State initial_cpu = {.pc=0x5adf, .a=0xde, .x=0xb2, .y=0x32, .sp=0x76, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x5adf, .value=0x28}, {.addr=0x5ae0, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x5ae1, .a=0x98, .x=0xb2, .y=0x32, .sp=0x76, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5adf, .value=0x28}, {.addr=0x5ae0, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x5adf, .value=0x28, .type=IO_READ},
        {.addr=0x5ae0, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0332) {
    const struct CPU_State initial_cpu = {.pc=0x31cd, .a=0x31, .x=0x51, .y=0x5c, .sp=0x83, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x31cd, .value=0x28}, {.addr=0x31ce, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x31cf, .a=0x11, .x=0x51, .y=0x5c, .sp=0x83, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x31cd, .value=0x28}, {.addr=0x31ce, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x31cd, .value=0x28, .type=IO_READ},
        {.addr=0x31ce, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0333) {
    const struct CPU_State initial_cpu = {.pc=0xee1c, .a=0xb4, .x=0x0a, .y=0x03, .sp=0x11, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xee1c, .value=0x28}, {.addr=0xee1d, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xee1e, .a=0x84, .x=0x0a, .y=0x03, .sp=0x11, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xee1c, .value=0x28}, {.addr=0xee1d, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xee1c, .value=0x28, .type=IO_READ},
        {.addr=0xee1d, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0334) {
    const struct CPU_State initial_cpu = {.pc=0xe98f, .a=0x28, .x=0x5b, .y=0xdb, .sp=0xf9, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xe98f, .value=0x28}, {.addr=0xe990, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xe991, .a=0x28, .x=0x5b, .y=0xdb, .sp=0xf9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xe98f, .value=0x28}, {.addr=0xe990, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xe98f, .value=0x28, .type=IO_READ},
        {.addr=0xe990, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0335) {
    const struct CPU_State initial_cpu = {.pc=0x9bcf, .a=0x7f, .x=0xea, .y=0x05, .sp=0x40, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x9bcf, .value=0x28}, {.addr=0x9bd0, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x9bd1, .a=0x39, .x=0xea, .y=0x05, .sp=0x40, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x9bcf, .value=0x28}, {.addr=0x9bd0, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x9bcf, .value=0x28, .type=IO_READ},
        {.addr=0x9bd0, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0336) {
    const struct CPU_State initial_cpu = {.pc=0xe51a, .a=0x07, .x=0xa9, .y=0xf9, .sp=0xeb, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xe51a, .value=0x28}, {.addr=0xe51b, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xe51c, .a=0x03, .x=0xa9, .y=0xf9, .sp=0xeb, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe51a, .value=0x28}, {.addr=0xe51b, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xe51a, .value=0x28, .type=IO_READ},
        {.addr=0xe51b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0337) {
    const struct CPU_State initial_cpu = {.pc=0x518c, .a=0x31, .x=0xe0, .y=0x82, .sp=0xc0, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x518c, .value=0x28}, {.addr=0x518d, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x518e, .a=0x00, .x=0xe0, .y=0x82, .sp=0xc0, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x518c, .value=0x28}, {.addr=0x518d, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x518c, .value=0x28, .type=IO_READ},
        {.addr=0x518d, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0338) {
    const struct CPU_State initial_cpu = {.pc=0x3060, .a=0x14, .x=0xdb, .y=0x78, .sp=0x55, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x3060, .value=0x28}, {.addr=0x3061, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x3062, .a=0x04, .x=0xdb, .y=0x78, .sp=0x55, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3060, .value=0x28}, {.addr=0x3061, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x3060, .value=0x28, .type=IO_READ},
        {.addr=0x3061, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0339) {
    const struct CPU_State initial_cpu = {.pc=0xbe88, .a=0xb8, .x=0x2b, .y=0xbc, .sp=0xbd, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xbe88, .value=0x28}, {.addr=0xbe89, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbe8a, .a=0x80, .x=0x2b, .y=0xbc, .sp=0xbd, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xbe88, .value=0x28}, {.addr=0xbe89, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbe88, .value=0x28, .type=IO_READ},
        {.addr=0xbe89, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_033A) {
    const struct CPU_State initial_cpu = {.pc=0xa183, .a=0x50, .x=0x65, .y=0xbb, .sp=0xf8, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xa183, .value=0x28}, {.addr=0xa184, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xa185, .a=0x40, .x=0x65, .y=0xbb, .sp=0xf8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xa183, .value=0x28}, {.addr=0xa184, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xa183, .value=0x28, .type=IO_READ},
        {.addr=0xa184, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_033B) {
    const struct CPU_State initial_cpu = {.pc=0xd7dc, .a=0xbe, .x=0x91, .y=0xb0, .sp=0xa5, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xd7dc, .value=0x28}, {.addr=0xd7dd, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xd7de, .a=0x9a, .x=0x91, .y=0xb0, .sp=0xa5, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xd7dc, .value=0x28}, {.addr=0xd7dd, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xd7dc, .value=0x28, .type=IO_READ},
        {.addr=0xd7dd, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_033C) {
    const struct CPU_State initial_cpu = {.pc=0x6c02, .a=0x36, .x=0x9e, .y=0xf7, .sp=0x4e, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x6c02, .value=0x28}, {.addr=0x6c03, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x6c04, .a=0x20, .x=0x9e, .y=0xf7, .sp=0x4e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x6c02, .value=0x28}, {.addr=0x6c03, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x6c02, .value=0x28, .type=IO_READ},
        {.addr=0x6c03, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_033D) {
    const struct CPU_State initial_cpu = {.pc=0x4e67, .a=0xd6, .x=0x73, .y=0xa0, .sp=0xa4, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x4e67, .value=0x28}, {.addr=0x4e68, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x4e69, .a=0x56, .x=0x73, .y=0xa0, .sp=0xa4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4e67, .value=0x28}, {.addr=0x4e68, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x4e67, .value=0x28, .type=IO_READ},
        {.addr=0x4e68, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_033E) {
    const struct CPU_State initial_cpu = {.pc=0x09ff, .a=0x54, .x=0xee, .y=0xc9, .sp=0xcf, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x09ff, .value=0x28}, {.addr=0x0a00, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x0a01, .a=0x00, .x=0xee, .y=0xc9, .sp=0xcf, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x09ff, .value=0x28}, {.addr=0x0a00, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x09ff, .value=0x28, .type=IO_READ},
        {.addr=0x0a00, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_033F) {
    const struct CPU_State initial_cpu = {.pc=0x5b5e, .a=0x29, .x=0x26, .y=0x97, .sp=0xb1, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x5b5e, .value=0x28}, {.addr=0x5b5f, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x5b60, .a=0x21, .x=0x26, .y=0x97, .sp=0xb1, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x5b5e, .value=0x28}, {.addr=0x5b5f, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x5b5e, .value=0x28, .type=IO_READ},
        {.addr=0x5b5f, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0340) {
    const struct CPU_State initial_cpu = {.pc=0xe919, .a=0x30, .x=0x35, .y=0x6f, .sp=0xa8, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xe919, .value=0x28}, {.addr=0xe91a, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xe91b, .a=0x00, .x=0x35, .y=0x6f, .sp=0xa8, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xe919, .value=0x28}, {.addr=0xe91a, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xe919, .value=0x28, .type=IO_READ},
        {.addr=0xe91a, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0341) {
    const struct CPU_State initial_cpu = {.pc=0x83d4, .a=0x62, .x=0x8f, .y=0xdd, .sp=0x10, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x83d4, .value=0x28}, {.addr=0x83d5, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x83d6, .a=0x40, .x=0x8f, .y=0xdd, .sp=0x10, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x83d4, .value=0x28}, {.addr=0x83d5, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x83d4, .value=0x28, .type=IO_READ},
        {.addr=0x83d5, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0342) {
    const struct CPU_State initial_cpu = {.pc=0xe4f6, .a=0x1e, .x=0x2a, .y=0x63, .sp=0xd4, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xe4f6, .value=0x28}, {.addr=0xe4f7, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xe4f8, .a=0x06, .x=0x2a, .y=0x63, .sp=0xd4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe4f6, .value=0x28}, {.addr=0xe4f7, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xe4f6, .value=0x28, .type=IO_READ},
        {.addr=0xe4f7, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0343) {
    const struct CPU_State initial_cpu = {.pc=0xb8fa, .a=0x24, .x=0x3e, .y=0x41, .sp=0xd2, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xb8fa, .value=0x28}, {.addr=0xb8fb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb8fc, .a=0x04, .x=0x3e, .y=0x41, .sp=0xd2, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb8fa, .value=0x28}, {.addr=0xb8fb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb8fa, .value=0x28, .type=IO_READ},
        {.addr=0xb8fb, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0344) {
    const struct CPU_State initial_cpu = {.pc=0x397f, .a=0xf6, .x=0xfc, .y=0x0d, .sp=0xdf, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x397f, .value=0x28}, {.addr=0x3980, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x3981, .a=0x32, .x=0xfc, .y=0x0d, .sp=0xdf, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x397f, .value=0x28}, {.addr=0x3980, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x397f, .value=0x28, .type=IO_READ},
        {.addr=0x3980, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0345) {
    const struct CPU_State initial_cpu = {.pc=0x3c71, .a=0xcf, .x=0xef, .y=0x64, .sp=0x15, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x3c71, .value=0x28}, {.addr=0x3c72, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x3c73, .a=0xc1, .x=0xef, .y=0x64, .sp=0x15, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3c71, .value=0x28}, {.addr=0x3c72, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x3c71, .value=0x28, .type=IO_READ},
        {.addr=0x3c72, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0346) {
    const struct CPU_State initial_cpu = {.pc=0x1dc4, .a=0x21, .x=0xe6, .y=0x5a, .sp=0x4e, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1dc4, .value=0x28}, {.addr=0x1dc5, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x1dc6, .a=0x00, .x=0xe6, .y=0x5a, .sp=0x4e, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x1dc4, .value=0x28}, {.addr=0x1dc5, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x1dc4, .value=0x28, .type=IO_READ},
        {.addr=0x1dc5, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0347) {
    const struct CPU_State initial_cpu = {.pc=0xcd36, .a=0x69, .x=0x41, .y=0x59, .sp=0x8b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xcd36, .value=0x28}, {.addr=0xcd37, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xcd38, .a=0x48, .x=0x41, .y=0x59, .sp=0x8b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xcd36, .value=0x28}, {.addr=0xcd37, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xcd36, .value=0x28, .type=IO_READ},
        {.addr=0xcd37, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0348) {
    const struct CPU_State initial_cpu = {.pc=0x89a8, .a=0x9e, .x=0x81, .y=0x51, .sp=0x93, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x89a8, .value=0x28}, {.addr=0x89a9, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x89aa, .a=0x96, .x=0x81, .y=0x51, .sp=0x93, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x89a8, .value=0x28}, {.addr=0x89a9, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x89a8, .value=0x28, .type=IO_READ},
        {.addr=0x89a9, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0349) {
    const struct CPU_State initial_cpu = {.pc=0xedf0, .a=0x9b, .x=0x4b, .y=0x35, .sp=0x43, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xedf0, .value=0x28}, {.addr=0xedf1, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xedf2, .a=0x01, .x=0x4b, .y=0x35, .sp=0x43, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xedf0, .value=0x28}, {.addr=0xedf1, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xedf0, .value=0x28, .type=IO_READ},
        {.addr=0xedf1, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_034A) {
    const struct CPU_State initial_cpu = {.pc=0xdae8, .a=0x7a, .x=0x8e, .y=0xaf, .sp=0x0b, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xdae8, .value=0x28}, {.addr=0xdae9, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xdaea, .a=0x22, .x=0x8e, .y=0xaf, .sp=0x0b, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xdae8, .value=0x28}, {.addr=0xdae9, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xdae8, .value=0x28, .type=IO_READ},
        {.addr=0xdae9, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_034B) {
    const struct CPU_State initial_cpu = {.pc=0x70ef, .a=0xd7, .x=0xff, .y=0xc4, .sp=0xe4, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x70ef, .value=0x28}, {.addr=0x70f0, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x70f1, .a=0x83, .x=0xff, .y=0xc4, .sp=0xe4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x70ef, .value=0x28}, {.addr=0x70f0, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x70ef, .value=0x28, .type=IO_READ},
        {.addr=0x70f0, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_034C) {
    const struct CPU_State initial_cpu = {.pc=0x5304, .a=0x1b, .x=0xaa, .y=0x72, .sp=0xf3, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x5304, .value=0x28}, {.addr=0x5305, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x5306, .a=0x02, .x=0xaa, .y=0x72, .sp=0xf3, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5304, .value=0x28}, {.addr=0x5305, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x5304, .value=0x28, .type=IO_READ},
        {.addr=0x5305, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_034D) {
    const struct CPU_State initial_cpu = {.pc=0x767e, .a=0x04, .x=0x3f, .y=0x56, .sp=0xd6, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x767e, .value=0x28}, {.addr=0x767f, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x7680, .a=0x00, .x=0x3f, .y=0x56, .sp=0xd6, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x767e, .value=0x28}, {.addr=0x767f, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x767e, .value=0x28, .type=IO_READ},
        {.addr=0x767f, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_034E) {
    const struct CPU_State initial_cpu = {.pc=0x416b, .a=0xf8, .x=0x1e, .y=0x9c, .sp=0x13, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x416b, .value=0x28}, {.addr=0x416c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x416d, .a=0x20, .x=0x1e, .y=0x9c, .sp=0x13, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x416b, .value=0x28}, {.addr=0x416c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x416b, .value=0x28, .type=IO_READ},
        {.addr=0x416c, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_034F) {
    const struct CPU_State initial_cpu = {.pc=0x6aa5, .a=0x5d, .x=0x25, .y=0x25, .sp=0xd9, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x6aa5, .value=0x28}, {.addr=0x6aa6, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x6aa7, .a=0x09, .x=0x25, .y=0x25, .sp=0xd9, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x6aa5, .value=0x28}, {.addr=0x6aa6, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x6aa5, .value=0x28, .type=IO_READ},
        {.addr=0x6aa6, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0350) {
    const struct CPU_State initial_cpu = {.pc=0xfe26, .a=0x50, .x=0xce, .y=0x1f, .sp=0xff, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xfe26, .value=0x28}, {.addr=0xfe27, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xfe28, .a=0x10, .x=0xce, .y=0x1f, .sp=0xff, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xfe26, .value=0x28}, {.addr=0xfe27, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xfe26, .value=0x28, .type=IO_READ},
        {.addr=0xfe27, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0351) {
    const struct CPU_State initial_cpu = {.pc=0x9c19, .a=0xf2, .x=0xe0, .y=0x92, .sp=0x3f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x9c19, .value=0x28}, {.addr=0x9c1a, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x9c1b, .a=0x52, .x=0xe0, .y=0x92, .sp=0x3f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9c19, .value=0x28}, {.addr=0x9c1a, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x9c19, .value=0x28, .type=IO_READ},
        {.addr=0x9c1a, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0352) {
    const struct CPU_State initial_cpu = {.pc=0xb007, .a=0x38, .x=0x9b, .y=0x99, .sp=0x5a, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xb007, .value=0x28}, {.addr=0xb008, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb009, .a=0x38, .x=0x9b, .y=0x99, .sp=0x5a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xb007, .value=0x28}, {.addr=0xb008, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb007, .value=0x28, .type=IO_READ},
        {.addr=0xb008, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0353) {
    const struct CPU_State initial_cpu = {.pc=0x03ea, .a=0x08, .x=0x2c, .y=0x5e, .sp=0x0a, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x03ea, .value=0x28}, {.addr=0x03eb, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x03ec, .a=0x00, .x=0x2c, .y=0x5e, .sp=0x0a, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x03ea, .value=0x28}, {.addr=0x03eb, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x03ea, .value=0x28, .type=IO_READ},
        {.addr=0x03eb, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0354) {
    const struct CPU_State initial_cpu = {.pc=0x28d1, .a=0x99, .x=0xc3, .y=0x9c, .sp=0x4c, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x28d1, .value=0x28}, {.addr=0x28d2, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x28d3, .a=0x81, .x=0xc3, .y=0x9c, .sp=0x4c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x28d1, .value=0x28}, {.addr=0x28d2, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x28d1, .value=0x28, .type=IO_READ},
        {.addr=0x28d2, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0355) {
    const struct CPU_State initial_cpu = {.pc=0xd125, .a=0x4f, .x=0x24, .y=0x24, .sp=0xc9, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xd125, .value=0x28}, {.addr=0xd126, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xd127, .a=0x42, .x=0x24, .y=0x24, .sp=0xc9, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xd125, .value=0x28}, {.addr=0xd126, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xd125, .value=0x28, .type=IO_READ},
        {.addr=0xd126, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0356) {
    const struct CPU_State initial_cpu = {.pc=0x9bd2, .a=0xdd, .x=0xc6, .y=0x52, .sp=0x85, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x9bd2, .value=0x28}, {.addr=0x9bd3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9bd4, .a=0xc0, .x=0xc6, .y=0x52, .sp=0x85, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9bd2, .value=0x28}, {.addr=0x9bd3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9bd2, .value=0x28, .type=IO_READ},
        {.addr=0x9bd3, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0357) {
    const struct CPU_State initial_cpu = {.pc=0x34e1, .a=0xb9, .x=0x99, .y=0x33, .sp=0x38, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x34e1, .value=0x28}, {.addr=0x34e2, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x34e3, .a=0x31, .x=0x99, .y=0x33, .sp=0x38, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x34e1, .value=0x28}, {.addr=0x34e2, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x34e1, .value=0x28, .type=IO_READ},
        {.addr=0x34e2, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0358) {
    const struct CPU_State initial_cpu = {.pc=0xeb96, .a=0x27, .x=0x6c, .y=0x74, .sp=0x40, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xeb96, .value=0x28}, {.addr=0xeb97, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xeb98, .a=0x23, .x=0x6c, .y=0x74, .sp=0x40, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xeb96, .value=0x28}, {.addr=0xeb97, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xeb96, .value=0x28, .type=IO_READ},
        {.addr=0xeb97, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0359) {
    const struct CPU_State initial_cpu = {.pc=0xb7a1, .a=0x37, .x=0x0f, .y=0xb4, .sp=0x77, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xb7a1, .value=0x28}, {.addr=0xb7a2, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xb7a3, .a=0x07, .x=0x0f, .y=0xb4, .sp=0x77, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb7a1, .value=0x28}, {.addr=0xb7a2, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xb7a1, .value=0x28, .type=IO_READ},
        {.addr=0xb7a2, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_035A) {
    const struct CPU_State initial_cpu = {.pc=0x090a, .a=0x67, .x=0x88, .y=0x03, .sp=0xa3, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x090a, .value=0x28}, {.addr=0x090b, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x090c, .a=0x25, .x=0x88, .y=0x03, .sp=0xa3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x090a, .value=0x28}, {.addr=0x090b, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x090a, .value=0x28, .type=IO_READ},
        {.addr=0x090b, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_035B) {
    const struct CPU_State initial_cpu = {.pc=0x841d, .a=0x60, .x=0x12, .y=0x7f, .sp=0x84, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x841d, .value=0x28}, {.addr=0x841e, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x841f, .a=0x40, .x=0x12, .y=0x7f, .sp=0x84, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x841d, .value=0x28}, {.addr=0x841e, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x841d, .value=0x28, .type=IO_READ},
        {.addr=0x841e, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_035C) {
    const struct CPU_State initial_cpu = {.pc=0xfda5, .a=0xbd, .x=0x12, .y=0x3f, .sp=0x6e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xfda5, .value=0x28}, {.addr=0xfda6, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xfda7, .a=0x09, .x=0x12, .y=0x3f, .sp=0x6e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xfda5, .value=0x28}, {.addr=0xfda6, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xfda5, .value=0x28, .type=IO_READ},
        {.addr=0xfda6, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_035D) {
    const struct CPU_State initial_cpu = {.pc=0xb3a9, .a=0xb7, .x=0x43, .y=0x29, .sp=0x3a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xb3a9, .value=0x28}, {.addr=0xb3aa, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xb3ab, .a=0xa3, .x=0x43, .y=0x29, .sp=0x3a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb3a9, .value=0x28}, {.addr=0xb3aa, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xb3a9, .value=0x28, .type=IO_READ},
        {.addr=0xb3aa, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_035E) {
    const struct CPU_State initial_cpu = {.pc=0xe8f9, .a=0x2c, .x=0x29, .y=0x02, .sp=0x73, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f9, .value=0x28}, {.addr=0xe8fa, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xe8fb, .a=0x08, .x=0x29, .y=0x02, .sp=0x73, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xe8f9, .value=0x28}, {.addr=0xe8fa, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xe8f9, .value=0x28, .type=IO_READ},
        {.addr=0xe8fa, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_035F) {
    const struct CPU_State initial_cpu = {.pc=0x75c2, .a=0x19, .x=0xe1, .y=0xc7, .sp=0x9d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x75c2, .value=0x28}, {.addr=0x75c3, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x75c4, .a=0x09, .x=0xe1, .y=0xc7, .sp=0x9d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x75c2, .value=0x28}, {.addr=0x75c3, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x75c2, .value=0x28, .type=IO_READ},
        {.addr=0x75c3, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0360) {
    const struct CPU_State initial_cpu = {.pc=0xea4b, .a=0x31, .x=0x23, .y=0xd2, .sp=0xde, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xea4b, .value=0x28}, {.addr=0xea4c, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xea4d, .a=0x01, .x=0x23, .y=0xd2, .sp=0xde, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xea4b, .value=0x28}, {.addr=0xea4c, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xea4b, .value=0x28, .type=IO_READ},
        {.addr=0xea4c, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0361) {
    const struct CPU_State initial_cpu = {.pc=0xec0f, .a=0x96, .x=0x61, .y=0xf3, .sp=0x5b, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xec0f, .value=0x28}, {.addr=0xec10, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xec11, .a=0x90, .x=0x61, .y=0xf3, .sp=0x5b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xec0f, .value=0x28}, {.addr=0xec10, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xec0f, .value=0x28, .type=IO_READ},
        {.addr=0xec10, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0362) {
    const struct CPU_State initial_cpu = {.pc=0x59b1, .a=0xf6, .x=0xfd, .y=0xd4, .sp=0xb1, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x59b1, .value=0x28}, {.addr=0x59b2, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x59b3, .a=0x72, .x=0xfd, .y=0xd4, .sp=0xb1, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x59b1, .value=0x28}, {.addr=0x59b2, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x59b1, .value=0x28, .type=IO_READ},
        {.addr=0x59b2, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0363) {
    const struct CPU_State initial_cpu = {.pc=0x4d19, .a=0x96, .x=0x5d, .y=0x61, .sp=0xed, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x4d19, .value=0x28}, {.addr=0x4d1a, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x4d1b, .a=0x10, .x=0x5d, .y=0x61, .sp=0xed, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4d19, .value=0x28}, {.addr=0x4d1a, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x4d19, .value=0x28, .type=IO_READ},
        {.addr=0x4d1a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0364) {
    const struct CPU_State initial_cpu = {.pc=0x365d, .a=0x16, .x=0x98, .y=0xba, .sp=0x59, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x365d, .value=0x28}, {.addr=0x365e, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x365f, .a=0x00, .x=0x98, .y=0xba, .sp=0x59, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x365d, .value=0x28}, {.addr=0x365e, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x365d, .value=0x28, .type=IO_READ},
        {.addr=0x365e, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0365) {
    const struct CPU_State initial_cpu = {.pc=0x6744, .a=0x32, .x=0x05, .y=0xa1, .sp=0x9f, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x6744, .value=0x28}, {.addr=0x6745, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x6746, .a=0x32, .x=0x05, .y=0xa1, .sp=0x9f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x6744, .value=0x28}, {.addr=0x6745, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x6744, .value=0x28, .type=IO_READ},
        {.addr=0x6745, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0366) {
    const struct CPU_State initial_cpu = {.pc=0x0fc4, .a=0x59, .x=0x3a, .y=0x72, .sp=0xa9, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0fc4, .value=0x28}, {.addr=0x0fc5, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0fc6, .a=0x58, .x=0x3a, .y=0x72, .sp=0xa9, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0fc4, .value=0x28}, {.addr=0x0fc5, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0fc4, .value=0x28, .type=IO_READ},
        {.addr=0x0fc5, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0367) {
    const struct CPU_State initial_cpu = {.pc=0xeb29, .a=0x21, .x=0x88, .y=0x61, .sp=0x8a, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xeb29, .value=0x28}, {.addr=0xeb2a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xeb2b, .a=0x21, .x=0x88, .y=0x61, .sp=0x8a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xeb29, .value=0x28}, {.addr=0xeb2a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xeb29, .value=0x28, .type=IO_READ},
        {.addr=0xeb2a, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0368) {
    const struct CPU_State initial_cpu = {.pc=0xed25, .a=0xf6, .x=0x3b, .y=0x9b, .sp=0xa0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xed25, .value=0x28}, {.addr=0xed26, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xed27, .a=0x52, .x=0x3b, .y=0x9b, .sp=0xa0, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xed25, .value=0x28}, {.addr=0xed26, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xed25, .value=0x28, .type=IO_READ},
        {.addr=0xed26, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0369) {
    const struct CPU_State initial_cpu = {.pc=0x4946, .a=0x56, .x=0xc9, .y=0xa7, .sp=0x94, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x4946, .value=0x28}, {.addr=0x4947, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x4948, .a=0x10, .x=0xc9, .y=0xa7, .sp=0x94, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4946, .value=0x28}, {.addr=0x4947, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x4946, .value=0x28, .type=IO_READ},
        {.addr=0x4947, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_036A) {
    const struct CPU_State initial_cpu = {.pc=0xcd06, .a=0xc8, .x=0x97, .y=0x6f, .sp=0x55, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xcd06, .value=0x28}, {.addr=0xcd07, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcd08, .a=0x88, .x=0x97, .y=0x6f, .sp=0x55, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xcd06, .value=0x28}, {.addr=0xcd07, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcd06, .value=0x28, .type=IO_READ},
        {.addr=0xcd07, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_036B) {
    const struct CPU_State initial_cpu = {.pc=0xc433, .a=0xe5, .x=0xe8, .y=0xdb, .sp=0xae, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xc433, .value=0x28}, {.addr=0xc434, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xc435, .a=0xc1, .x=0xe8, .y=0xdb, .sp=0xae, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xc433, .value=0x28}, {.addr=0xc434, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xc433, .value=0x28, .type=IO_READ},
        {.addr=0xc434, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_036C) {
    const struct CPU_State initial_cpu = {.pc=0xb636, .a=0x9d, .x=0x9d, .y=0x33, .sp=0x48, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xb636, .value=0x28}, {.addr=0xb637, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xb638, .a=0x91, .x=0x9d, .y=0x33, .sp=0x48, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xb636, .value=0x28}, {.addr=0xb637, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xb636, .value=0x28, .type=IO_READ},
        {.addr=0xb637, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_036D) {
    const struct CPU_State initial_cpu = {.pc=0xf3da, .a=0xc6, .x=0x46, .y=0x99, .sp=0x45, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xf3da, .value=0x28}, {.addr=0xf3db, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xf3dc, .a=0x00, .x=0x46, .y=0x99, .sp=0x45, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xf3da, .value=0x28}, {.addr=0xf3db, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xf3da, .value=0x28, .type=IO_READ},
        {.addr=0xf3db, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_036E) {
    const struct CPU_State initial_cpu = {.pc=0x8972, .a=0x9d, .x=0xaa, .y=0x03, .sp=0x63, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x8972, .value=0x28}, {.addr=0x8973, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x8974, .a=0x91, .x=0xaa, .y=0x03, .sp=0x63, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8972, .value=0x28}, {.addr=0x8973, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x8972, .value=0x28, .type=IO_READ},
        {.addr=0x8973, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_036F) {
    const struct CPU_State initial_cpu = {.pc=0x59c4, .a=0xc2, .x=0xdd, .y=0x19, .sp=0x53, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x59c4, .value=0x28}, {.addr=0x59c5, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x59c6, .a=0x40, .x=0xdd, .y=0x19, .sp=0x53, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x59c4, .value=0x28}, {.addr=0x59c5, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x59c4, .value=0x28, .type=IO_READ},
        {.addr=0x59c5, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0370) {
    const struct CPU_State initial_cpu = {.pc=0xf34e, .a=0x21, .x=0x46, .y=0x30, .sp=0xb4, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xf34e, .value=0x28}, {.addr=0xf34f, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xf350, .a=0x21, .x=0x46, .y=0x30, .sp=0xb4, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xf34e, .value=0x28}, {.addr=0xf34f, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xf34e, .value=0x28, .type=IO_READ},
        {.addr=0xf34f, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0371) {
    const struct CPU_State initial_cpu = {.pc=0x1c63, .a=0x7f, .x=0x79, .y=0x29, .sp=0xf8, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x1c63, .value=0x28}, {.addr=0x1c64, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x1c65, .a=0x0b, .x=0x79, .y=0x29, .sp=0xf8, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1c63, .value=0x28}, {.addr=0x1c64, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x1c63, .value=0x28, .type=IO_READ},
        {.addr=0x1c64, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0372) {
    const struct CPU_State initial_cpu = {.pc=0xd2c8, .a=0xab, .x=0xcf, .y=0x28, .sp=0x8c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c8, .value=0x28}, {.addr=0xd2c9, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xd2ca, .a=0x03, .x=0xcf, .y=0x28, .sp=0x8c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xd2c8, .value=0x28}, {.addr=0xd2c9, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xd2c8, .value=0x28, .type=IO_READ},
        {.addr=0xd2c9, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0373) {
    const struct CPU_State initial_cpu = {.pc=0xc9c8, .a=0x45, .x=0x9a, .y=0x25, .sp=0x70, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xc9c8, .value=0x28}, {.addr=0xc9c9, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xc9ca, .a=0x04, .x=0x9a, .y=0x25, .sp=0x70, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc9c8, .value=0x28}, {.addr=0xc9c9, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xc9c8, .value=0x28, .type=IO_READ},
        {.addr=0xc9c9, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0374) {
    const struct CPU_State initial_cpu = {.pc=0xdde7, .a=0x23, .x=0xbe, .y=0xe4, .sp=0x26, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xdde7, .value=0x28}, {.addr=0xdde8, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xdde9, .a=0x01, .x=0xbe, .y=0xe4, .sp=0x26, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xdde7, .value=0x28}, {.addr=0xdde8, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xdde7, .value=0x28, .type=IO_READ},
        {.addr=0xdde8, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0375) {
    const struct CPU_State initial_cpu = {.pc=0x065b, .a=0x81, .x=0xc0, .y=0x26, .sp=0x00, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x065b, .value=0x28}, {.addr=0x065c, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x065d, .a=0x01, .x=0xc0, .y=0x26, .sp=0x00, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x065b, .value=0x28}, {.addr=0x065c, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x065b, .value=0x28, .type=IO_READ},
        {.addr=0x065c, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0376) {
    const struct CPU_State initial_cpu = {.pc=0xdfdb, .a=0x97, .x=0xbb, .y=0x72, .sp=0x08, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xdfdb, .value=0x28}, {.addr=0xdfdc, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xdfdd, .a=0x94, .x=0xbb, .y=0x72, .sp=0x08, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xdfdb, .value=0x28}, {.addr=0xdfdc, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xdfdb, .value=0x28, .type=IO_READ},
        {.addr=0xdfdc, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0377) {
    const struct CPU_State initial_cpu = {.pc=0x6298, .a=0xc3, .x=0x07, .y=0xa7, .sp=0x3a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x6298, .value=0x28}, {.addr=0x6299, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x629a, .a=0x80, .x=0x07, .y=0xa7, .sp=0x3a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x6298, .value=0x28}, {.addr=0x6299, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6298, .value=0x28, .type=IO_READ},
        {.addr=0x6299, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0378) {
    const struct CPU_State initial_cpu = {.pc=0x5b6b, .a=0x0f, .x=0x36, .y=0x19, .sp=0x49, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x5b6b, .value=0x28}, {.addr=0x5b6c, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x5b6d, .a=0x0e, .x=0x36, .y=0x19, .sp=0x49, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x5b6b, .value=0x28}, {.addr=0x5b6c, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x5b6b, .value=0x28, .type=IO_READ},
        {.addr=0x5b6c, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0379) {
    const struct CPU_State initial_cpu = {.pc=0x5883, .a=0xf8, .x=0x14, .y=0x33, .sp=0x14, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x5883, .value=0x28}, {.addr=0x5884, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x5885, .a=0x38, .x=0x14, .y=0x33, .sp=0x14, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x5883, .value=0x28}, {.addr=0x5884, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x5883, .value=0x28, .type=IO_READ},
        {.addr=0x5884, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_037A) {
    const struct CPU_State initial_cpu = {.pc=0xdb78, .a=0x5d, .x=0x4a, .y=0xbd, .sp=0x77, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xdb78, .value=0x28}, {.addr=0xdb79, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdb7a, .a=0x0c, .x=0x4a, .y=0xbd, .sp=0x77, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xdb78, .value=0x28}, {.addr=0xdb79, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdb78, .value=0x28, .type=IO_READ},
        {.addr=0xdb79, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_037B) {
    const struct CPU_State initial_cpu = {.pc=0xf729, .a=0xce, .x=0xe6, .y=0x92, .sp=0x04, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xf729, .value=0x28}, {.addr=0xf72a, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xf72b, .a=0x44, .x=0xe6, .y=0x92, .sp=0x04, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xf729, .value=0x28}, {.addr=0xf72a, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xf729, .value=0x28, .type=IO_READ},
        {.addr=0xf72a, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_037C) {
    const struct CPU_State initial_cpu = {.pc=0xb771, .a=0xfe, .x=0x72, .y=0xd0, .sp=0xdc, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xb771, .value=0x28}, {.addr=0xb772, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xb773, .a=0xba, .x=0x72, .y=0xd0, .sp=0xdc, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb771, .value=0x28}, {.addr=0xb772, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xb771, .value=0x28, .type=IO_READ},
        {.addr=0xb772, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_037D) {
    const struct CPU_State initial_cpu = {.pc=0xdf13, .a=0x45, .x=0x12, .y=0xb0, .sp=0xe8, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xdf13, .value=0x28}, {.addr=0xdf14, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xdf15, .a=0x00, .x=0x12, .y=0xb0, .sp=0xe8, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xdf13, .value=0x28}, {.addr=0xdf14, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xdf13, .value=0x28, .type=IO_READ},
        {.addr=0xdf14, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_037E) {
    const struct CPU_State initial_cpu = {.pc=0xa683, .a=0x25, .x=0x87, .y=0xf1, .sp=0x6e, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa683, .value=0x28}, {.addr=0xa684, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xa685, .a=0x00, .x=0x87, .y=0xf1, .sp=0x6e, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xa683, .value=0x28}, {.addr=0xa684, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xa683, .value=0x28, .type=IO_READ},
        {.addr=0xa684, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_037F) {
    const struct CPU_State initial_cpu = {.pc=0x2c20, .a=0x2d, .x=0xa1, .y=0x69, .sp=0x54, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2c20, .value=0x28}, {.addr=0x2c21, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x2c22, .a=0x25, .x=0xa1, .y=0x69, .sp=0x54, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2c20, .value=0x28}, {.addr=0x2c21, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x2c20, .value=0x28, .type=IO_READ},
        {.addr=0x2c21, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0380) {
    const struct CPU_State initial_cpu = {.pc=0xcf34, .a=0xb6, .x=0x7f, .y=0x70, .sp=0xeb, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xcf34, .value=0x28}, {.addr=0xcf35, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcf36, .a=0x24, .x=0x7f, .y=0x70, .sp=0xeb, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xcf34, .value=0x28}, {.addr=0xcf35, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcf34, .value=0x28, .type=IO_READ},
        {.addr=0xcf35, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0381) {
    const struct CPU_State initial_cpu = {.pc=0x1e6c, .a=0x53, .x=0x69, .y=0x42, .sp=0x83, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1e6c, .value=0x28}, {.addr=0x1e6d, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x1e6e, .a=0x40, .x=0x69, .y=0x42, .sp=0x83, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1e6c, .value=0x28}, {.addr=0x1e6d, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x1e6c, .value=0x28, .type=IO_READ},
        {.addr=0x1e6d, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0382) {
    const struct CPU_State initial_cpu = {.pc=0xf6cf, .a=0xf6, .x=0xd4, .y=0xef, .sp=0x7f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xf6cf, .value=0x28}, {.addr=0xf6d0, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xf6d1, .a=0x46, .x=0xd4, .y=0xef, .sp=0x7f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf6cf, .value=0x28}, {.addr=0xf6d0, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xf6cf, .value=0x28, .type=IO_READ},
        {.addr=0xf6d0, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0383) {
    const struct CPU_State initial_cpu = {.pc=0x79b4, .a=0x78, .x=0xba, .y=0xb5, .sp=0xca, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x79b4, .value=0x28}, {.addr=0x79b5, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x79b6, .a=0x70, .x=0xba, .y=0xb5, .sp=0xca, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x79b4, .value=0x28}, {.addr=0x79b5, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x79b4, .value=0x28, .type=IO_READ},
        {.addr=0x79b5, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0384) {
    const struct CPU_State initial_cpu = {.pc=0x02b6, .a=0x83, .x=0x3e, .y=0x2a, .sp=0xcd, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x02b6, .value=0x28}, {.addr=0x02b7, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x02b8, .a=0x81, .x=0x3e, .y=0x2a, .sp=0xcd, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x02b6, .value=0x28}, {.addr=0x02b7, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x02b6, .value=0x28, .type=IO_READ},
        {.addr=0x02b7, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0385) {
    const struct CPU_State initial_cpu = {.pc=0x9ac4, .a=0xb8, .x=0x93, .y=0x41, .sp=0xd8, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9ac4, .value=0x28}, {.addr=0x9ac5, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x9ac6, .a=0xa0, .x=0x93, .y=0x41, .sp=0xd8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9ac4, .value=0x28}, {.addr=0x9ac5, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x9ac4, .value=0x28, .type=IO_READ},
        {.addr=0x9ac5, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0386) {
    const struct CPU_State initial_cpu = {.pc=0xac6a, .a=0x6c, .x=0x31, .y=0xc0, .sp=0x15, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xac6a, .value=0x28}, {.addr=0xac6b, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xac6c, .a=0x28, .x=0x31, .y=0xc0, .sp=0x15, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xac6a, .value=0x28}, {.addr=0xac6b, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xac6a, .value=0x28, .type=IO_READ},
        {.addr=0xac6b, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0387) {
    const struct CPU_State initial_cpu = {.pc=0xf067, .a=0xba, .x=0xb8, .y=0x89, .sp=0xf1, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf067, .value=0x28}, {.addr=0xf068, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xf069, .a=0x20, .x=0xb8, .y=0x89, .sp=0xf1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf067, .value=0x28}, {.addr=0xf068, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xf067, .value=0x28, .type=IO_READ},
        {.addr=0xf068, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0388) {
    const struct CPU_State initial_cpu = {.pc=0x4dec, .a=0xa2, .x=0xe5, .y=0xb0, .sp=0x7f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x4dec, .value=0x28}, {.addr=0x4ded, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x4dee, .a=0x80, .x=0xe5, .y=0xb0, .sp=0x7f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4dec, .value=0x28}, {.addr=0x4ded, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x4dec, .value=0x28, .type=IO_READ},
        {.addr=0x4ded, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0389) {
    const struct CPU_State initial_cpu = {.pc=0x064b, .a=0x30, .x=0x61, .y=0xef, .sp=0x18, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x064b, .value=0x28}, {.addr=0x064c, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x064d, .a=0x20, .x=0x61, .y=0xef, .sp=0x18, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x064b, .value=0x28}, {.addr=0x064c, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x064b, .value=0x28, .type=IO_READ},
        {.addr=0x064c, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_038A) {
    const struct CPU_State initial_cpu = {.pc=0xfe3f, .a=0xbb, .x=0x8d, .y=0x71, .sp=0xce, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xfe3f, .value=0x28}, {.addr=0xfe40, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xfe41, .a=0x92, .x=0x8d, .y=0x71, .sp=0xce, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfe3f, .value=0x28}, {.addr=0xfe40, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xfe3f, .value=0x28, .type=IO_READ},
        {.addr=0xfe40, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_038B) {
    const struct CPU_State initial_cpu = {.pc=0x0837, .a=0x42, .x=0xa5, .y=0x11, .sp=0xc7, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0837, .value=0x28}, {.addr=0x0838, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x0839, .a=0x02, .x=0xa5, .y=0x11, .sp=0xc7, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0837, .value=0x28}, {.addr=0x0838, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x0837, .value=0x28, .type=IO_READ},
        {.addr=0x0838, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_038C) {
    const struct CPU_State initial_cpu = {.pc=0x925e, .a=0x78, .x=0xdf, .y=0xe5, .sp=0xd8, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x925e, .value=0x28}, {.addr=0x925f, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x9260, .a=0x38, .x=0xdf, .y=0xe5, .sp=0xd8, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x925e, .value=0x28}, {.addr=0x925f, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x925e, .value=0x28, .type=IO_READ},
        {.addr=0x925f, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_038D) {
    const struct CPU_State initial_cpu = {.pc=0xbc58, .a=0xe9, .x=0xdd, .y=0x06, .sp=0xdc, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xbc58, .value=0x28}, {.addr=0xbc59, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xbc5a, .a=0x69, .x=0xdd, .y=0x06, .sp=0xdc, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xbc58, .value=0x28}, {.addr=0xbc59, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xbc58, .value=0x28, .type=IO_READ},
        {.addr=0xbc59, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_038E) {
    const struct CPU_State initial_cpu = {.pc=0x6d12, .a=0x14, .x=0xd8, .y=0x96, .sp=0xec, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x6d12, .value=0x28}, {.addr=0x6d13, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x6d14, .a=0x00, .x=0xd8, .y=0x96, .sp=0xec, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x6d12, .value=0x28}, {.addr=0x6d13, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x6d12, .value=0x28, .type=IO_READ},
        {.addr=0x6d13, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_038F) {
    const struct CPU_State initial_cpu = {.pc=0x2e17, .a=0x9d, .x=0xb9, .y=0xa9, .sp=0xea, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x2e17, .value=0x28}, {.addr=0x2e18, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x2e19, .a=0x88, .x=0xb9, .y=0xa9, .sp=0xea, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x2e17, .value=0x28}, {.addr=0x2e18, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x2e17, .value=0x28, .type=IO_READ},
        {.addr=0x2e18, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0390) {
    const struct CPU_State initial_cpu = {.pc=0xfc18, .a=0x8f, .x=0xc0, .y=0x18, .sp=0xdb, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xfc18, .value=0x28}, {.addr=0xfc19, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xfc1a, .a=0x0f, .x=0xc0, .y=0x18, .sp=0xdb, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xfc18, .value=0x28}, {.addr=0xfc19, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xfc18, .value=0x28, .type=IO_READ},
        {.addr=0xfc19, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0391) {
    const struct CPU_State initial_cpu = {.pc=0x2c9a, .a=0x33, .x=0x4d, .y=0x8c, .sp=0x15, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x2c9a, .value=0x28}, {.addr=0x2c9b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2c9c, .a=0x31, .x=0x4d, .y=0x8c, .sp=0x15, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2c9a, .value=0x28}, {.addr=0x2c9b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2c9a, .value=0x28, .type=IO_READ},
        {.addr=0x2c9b, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0392) {
    const struct CPU_State initial_cpu = {.pc=0x00d3, .a=0x1f, .x=0x11, .y=0x11, .sp=0x62, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x28}, {.addr=0x00d4, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x00d5, .a=0x11, .x=0x11, .y=0x11, .sp=0x62, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x28}, {.addr=0x00d4, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x00d3, .value=0x28, .type=IO_READ},
        {.addr=0x00d4, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0393) {
    const struct CPU_State initial_cpu = {.pc=0x4cf7, .a=0xbb, .x=0x71, .y=0x93, .sp=0xa1, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf7, .value=0x28}, {.addr=0x4cf8, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x4cf9, .a=0x9a, .x=0x71, .y=0x93, .sp=0xa1, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4cf7, .value=0x28}, {.addr=0x4cf8, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x4cf7, .value=0x28, .type=IO_READ},
        {.addr=0x4cf8, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0394) {
    const struct CPU_State initial_cpu = {.pc=0xa146, .a=0x8f, .x=0xf9, .y=0x8c, .sp=0x0b, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xa146, .value=0x28}, {.addr=0xa147, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xa148, .a=0x84, .x=0xf9, .y=0x8c, .sp=0x0b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xa146, .value=0x28}, {.addr=0xa147, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xa146, .value=0x28, .type=IO_READ},
        {.addr=0xa147, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0395) {
    const struct CPU_State initial_cpu = {.pc=0x1f2e, .a=0x63, .x=0x9a, .y=0x84, .sp=0x64, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x1f2e, .value=0x28}, {.addr=0x1f2f, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x1f30, .a=0x23, .x=0x9a, .y=0x84, .sp=0x64, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x1f2e, .value=0x28}, {.addr=0x1f2f, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x1f2e, .value=0x28, .type=IO_READ},
        {.addr=0x1f2f, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0396) {
    const struct CPU_State initial_cpu = {.pc=0xb8b2, .a=0x1e, .x=0x42, .y=0xfe, .sp=0x9d, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xb8b2, .value=0x28}, {.addr=0xb8b3, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xb8b4, .a=0x0a, .x=0x42, .y=0xfe, .sp=0x9d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb8b2, .value=0x28}, {.addr=0xb8b3, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xb8b2, .value=0x28, .type=IO_READ},
        {.addr=0xb8b3, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0397) {
    const struct CPU_State initial_cpu = {.pc=0xf45a, .a=0xfb, .x=0x3f, .y=0xd6, .sp=0x4b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xf45a, .value=0x28}, {.addr=0xf45b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf45c, .a=0x39, .x=0x3f, .y=0xd6, .sp=0x4b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf45a, .value=0x28}, {.addr=0xf45b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf45a, .value=0x28, .type=IO_READ},
        {.addr=0xf45b, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0398) {
    const struct CPU_State initial_cpu = {.pc=0x4f85, .a=0x6d, .x=0x0e, .y=0x71, .sp=0x53, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x4f85, .value=0x28}, {.addr=0x4f86, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x4f87, .a=0x05, .x=0x0e, .y=0x71, .sp=0x53, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4f85, .value=0x28}, {.addr=0x4f86, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x4f85, .value=0x28, .type=IO_READ},
        {.addr=0x4f86, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_0399) {
    const struct CPU_State initial_cpu = {.pc=0x0f10, .a=0xa2, .x=0xaa, .y=0x7e, .sp=0x5f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0f10, .value=0x28}, {.addr=0x0f11, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x0f12, .a=0x00, .x=0xaa, .y=0x7e, .sp=0x5f, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0f10, .value=0x28}, {.addr=0x0f11, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x0f10, .value=0x28, .type=IO_READ},
        {.addr=0x0f11, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_039A) {
    const struct CPU_State initial_cpu = {.pc=0x0dc1, .a=0xd7, .x=0x5b, .y=0x66, .sp=0x5e, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0dc1, .value=0x28}, {.addr=0x0dc2, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x0dc3, .a=0x82, .x=0x5b, .y=0x66, .sp=0x5e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0dc1, .value=0x28}, {.addr=0x0dc2, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x0dc1, .value=0x28, .type=IO_READ},
        {.addr=0x0dc2, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_039B) {
    const struct CPU_State initial_cpu = {.pc=0xe318, .a=0xb4, .x=0xf8, .y=0xfb, .sp=0x32, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xe318, .value=0x28}, {.addr=0xe319, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe31a, .a=0x80, .x=0xf8, .y=0xfb, .sp=0x32, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xe318, .value=0x28}, {.addr=0xe319, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe318, .value=0x28, .type=IO_READ},
        {.addr=0xe319, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_039C) {
    const struct CPU_State initial_cpu = {.pc=0xd6bd, .a=0xac, .x=0xc5, .y=0x7a, .sp=0x50, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xd6bd, .value=0x28}, {.addr=0xd6be, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xd6bf, .a=0x84, .x=0xc5, .y=0x7a, .sp=0x50, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd6bd, .value=0x28}, {.addr=0xd6be, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xd6bd, .value=0x28, .type=IO_READ},
        {.addr=0xd6be, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_039D) {
    const struct CPU_State initial_cpu = {.pc=0x08f0, .a=0x73, .x=0xea, .y=0x0a, .sp=0xa1, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x08f0, .value=0x28}, {.addr=0x08f1, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x08f2, .a=0x63, .x=0xea, .y=0x0a, .sp=0xa1, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x08f0, .value=0x28}, {.addr=0x08f1, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x08f0, .value=0x28, .type=IO_READ},
        {.addr=0x08f1, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_039E) {
    const struct CPU_State initial_cpu = {.pc=0x6ca0, .a=0xfc, .x=0x10, .y=0xd0, .sp=0x14, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x6ca0, .value=0x28}, {.addr=0x6ca1, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x6ca2, .a=0xac, .x=0x10, .y=0xd0, .sp=0x14, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x6ca0, .value=0x28}, {.addr=0x6ca1, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x6ca0, .value=0x28, .type=IO_READ},
        {.addr=0x6ca1, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_039F) {
    const struct CPU_State initial_cpu = {.pc=0x4dc5, .a=0x6a, .x=0x0b, .y=0xe0, .sp=0xdd, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4dc5, .value=0x28}, {.addr=0x4dc6, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x4dc7, .a=0x6a, .x=0x0b, .y=0xe0, .sp=0xdd, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4dc5, .value=0x28}, {.addr=0x4dc6, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x4dc5, .value=0x28, .type=IO_READ},
        {.addr=0x4dc6, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xebf7, .a=0x90, .x=0xb6, .y=0xb4, .sp=0xc7, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xebf7, .value=0x28}, {.addr=0xebf8, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xebf9, .a=0x80, .x=0xb6, .y=0xb4, .sp=0xc7, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xebf7, .value=0x28}, {.addr=0xebf8, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xebf7, .value=0x28, .type=IO_READ},
        {.addr=0xebf8, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x989c, .a=0xae, .x=0xe3, .y=0x24, .sp=0x52, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x989c, .value=0x28}, {.addr=0x989d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x989e, .a=0x2c, .x=0xe3, .y=0x24, .sp=0x52, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x989c, .value=0x28}, {.addr=0x989d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x989c, .value=0x28, .type=IO_READ},
        {.addr=0x989d, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x2d78, .a=0xd5, .x=0xc7, .y=0x33, .sp=0x5d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x2d78, .value=0x28}, {.addr=0x2d79, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x2d7a, .a=0xd4, .x=0xc7, .y=0x33, .sp=0x5d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2d78, .value=0x28}, {.addr=0x2d79, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x2d78, .value=0x28, .type=IO_READ},
        {.addr=0x2d79, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x926a, .a=0xf6, .x=0xe6, .y=0xd2, .sp=0x40, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x926a, .value=0x28}, {.addr=0x926b, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x926c, .a=0x26, .x=0xe6, .y=0xd2, .sp=0x40, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x926a, .value=0x28}, {.addr=0x926b, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x926a, .value=0x28, .type=IO_READ},
        {.addr=0x926b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xd1a2, .a=0x23, .x=0x43, .y=0xc3, .sp=0xa2, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xd1a2, .value=0x28}, {.addr=0xd1a3, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xd1a4, .a=0x22, .x=0x43, .y=0xc3, .sp=0xa2, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd1a2, .value=0x28}, {.addr=0xd1a3, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xd1a2, .value=0x28, .type=IO_READ},
        {.addr=0xd1a3, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x66af, .a=0x0b, .x=0x54, .y=0x32, .sp=0xa7, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x66af, .value=0x28}, {.addr=0x66b0, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x66b1, .a=0x00, .x=0x54, .y=0x32, .sp=0xa7, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x66af, .value=0x28}, {.addr=0x66b0, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x66af, .value=0x28, .type=IO_READ},
        {.addr=0x66b0, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xd600, .a=0x7d, .x=0x74, .y=0x50, .sp=0xa2, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xd600, .value=0x28}, {.addr=0xd601, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xd602, .a=0x31, .x=0x74, .y=0x50, .sp=0xa2, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xd600, .value=0x28}, {.addr=0xd601, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xd600, .value=0x28, .type=IO_READ},
        {.addr=0xd601, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x2788, .a=0x51, .x=0x5f, .y=0x15, .sp=0xfa, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x2788, .value=0x28}, {.addr=0x2789, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x278a, .a=0x11, .x=0x5f, .y=0x15, .sp=0xfa, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x2788, .value=0x28}, {.addr=0x2789, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x2788, .value=0x28, .type=IO_READ},
        {.addr=0x2789, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xbc3c, .a=0x03, .x=0x7e, .y=0x91, .sp=0x55, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xbc3c, .value=0x28}, {.addr=0xbc3d, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xbc3e, .a=0x03, .x=0x7e, .y=0x91, .sp=0x55, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xbc3c, .value=0x28}, {.addr=0xbc3d, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xbc3c, .value=0x28, .type=IO_READ},
        {.addr=0xbc3d, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x5a6a, .a=0xb3, .x=0x03, .y=0x00, .sp=0x7f, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x5a6a, .value=0x28}, {.addr=0x5a6b, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x5a6c, .a=0x12, .x=0x03, .y=0x00, .sp=0x7f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5a6a, .value=0x28}, {.addr=0x5a6b, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x5a6a, .value=0x28, .type=IO_READ},
        {.addr=0x5a6b, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xcd5a, .a=0xcb, .x=0xe0, .y=0x80, .sp=0xde, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xcd5a, .value=0x28}, {.addr=0xcd5b, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xcd5c, .a=0x8a, .x=0xe0, .y=0x80, .sp=0xde, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xcd5a, .value=0x28}, {.addr=0xcd5b, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xcd5a, .value=0x28, .type=IO_READ},
        {.addr=0xcd5b, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xf980, .a=0xa4, .x=0x16, .y=0xe7, .sp=0xb2, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xf980, .value=0x28}, {.addr=0xf981, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf982, .a=0x84, .x=0x16, .y=0xe7, .sp=0xb2, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf980, .value=0x28}, {.addr=0xf981, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf980, .value=0x28, .type=IO_READ},
        {.addr=0xf981, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x9ef6, .a=0xc7, .x=0x86, .y=0xf6, .sp=0xee, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x9ef6, .value=0x28}, {.addr=0x9ef7, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x9ef8, .a=0x01, .x=0x86, .y=0xf6, .sp=0xee, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x9ef6, .value=0x28}, {.addr=0x9ef7, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x9ef6, .value=0x28, .type=IO_READ},
        {.addr=0x9ef7, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x7f7f, .a=0xdb, .x=0xf5, .y=0xb7, .sp=0xe7, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x7f7f, .value=0x28}, {.addr=0x7f80, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x7f81, .a=0x51, .x=0xf5, .y=0xb7, .sp=0xe7, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x7f7f, .value=0x28}, {.addr=0x7f80, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x7f7f, .value=0x28, .type=IO_READ},
        {.addr=0x7f80, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x8e29, .a=0xc6, .x=0xcb, .y=0xc3, .sp=0xb4, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8e29, .value=0x28}, {.addr=0x8e2a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8e2b, .a=0x80, .x=0xcb, .y=0xc3, .sp=0xb4, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x8e29, .value=0x28}, {.addr=0x8e2a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8e29, .value=0x28, .type=IO_READ},
        {.addr=0x8e2a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xa16e, .a=0x7e, .x=0x40, .y=0x33, .sp=0x20, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa16e, .value=0x28}, {.addr=0xa16f, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xa170, .a=0x38, .x=0x40, .y=0x33, .sp=0x20, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa16e, .value=0x28}, {.addr=0xa16f, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xa16e, .value=0x28, .type=IO_READ},
        {.addr=0xa16f, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x07a8, .a=0x1e, .x=0xe8, .y=0x37, .sp=0xa4, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x07a8, .value=0x28}, {.addr=0x07a9, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x07aa, .a=0x08, .x=0xe8, .y=0x37, .sp=0xa4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x07a8, .value=0x28}, {.addr=0x07a9, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x07a8, .value=0x28, .type=IO_READ},
        {.addr=0x07a9, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x01ab, .a=0x45, .x=0x0d, .y=0xae, .sp=0x18, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x28}, {.addr=0x01ac, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x01ad, .a=0x41, .x=0x0d, .y=0xae, .sp=0x18, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x28}, {.addr=0x01ac, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x01ab, .value=0x28, .type=IO_READ},
        {.addr=0x01ac, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x6941, .a=0x37, .x=0x55, .y=0xc5, .sp=0xfe, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x6941, .value=0x28}, {.addr=0x6942, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x6943, .a=0x16, .x=0x55, .y=0xc5, .sp=0xfe, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6941, .value=0x28}, {.addr=0x6942, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x6941, .value=0x28, .type=IO_READ},
        {.addr=0x6942, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x5577, .a=0x82, .x=0x0f, .y=0xfb, .sp=0xab, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x5577, .value=0x28}, {.addr=0x5578, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5579, .a=0x82, .x=0x0f, .y=0xfb, .sp=0xab, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x5577, .value=0x28}, {.addr=0x5578, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5577, .value=0x28, .type=IO_READ},
        {.addr=0x5578, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xc766, .a=0x4c, .x=0x1f, .y=0x69, .sp=0xbf, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xc766, .value=0x28}, {.addr=0xc767, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xc768, .a=0x44, .x=0x1f, .y=0x69, .sp=0xbf, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xc766, .value=0x28}, {.addr=0xc767, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xc766, .value=0x28, .type=IO_READ},
        {.addr=0xc767, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x1a41, .a=0x60, .x=0x7a, .y=0x36, .sp=0x7e, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x1a41, .value=0x28}, {.addr=0x1a42, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1a43, .a=0x60, .x=0x7a, .y=0x36, .sp=0x7e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x1a41, .value=0x28}, {.addr=0x1a42, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1a41, .value=0x28, .type=IO_READ},
        {.addr=0x1a42, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xcf84, .a=0x2b, .x=0x24, .y=0x7a, .sp=0x39, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xcf84, .value=0x28}, {.addr=0xcf85, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xcf86, .a=0x0a, .x=0x24, .y=0x7a, .sp=0x39, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xcf84, .value=0x28}, {.addr=0xcf85, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xcf84, .value=0x28, .type=IO_READ},
        {.addr=0xcf85, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x2aec, .a=0xb0, .x=0x67, .y=0x9b, .sp=0x34, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2aec, .value=0x28}, {.addr=0x2aed, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x2aee, .a=0xa0, .x=0x67, .y=0x9b, .sp=0x34, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2aec, .value=0x28}, {.addr=0x2aed, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x2aec, .value=0x28, .type=IO_READ},
        {.addr=0x2aed, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x755c, .a=0x25, .x=0xba, .y=0x89, .sp=0x95, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x755c, .value=0x28}, {.addr=0x755d, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x755e, .a=0x20, .x=0xba, .y=0x89, .sp=0x95, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x755c, .value=0x28}, {.addr=0x755d, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x755c, .value=0x28, .type=IO_READ},
        {.addr=0x755d, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xd839, .a=0x2d, .x=0xbb, .y=0x8c, .sp=0xf5, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xd839, .value=0x28}, {.addr=0xd83a, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xd83b, .a=0x09, .x=0xbb, .y=0x8c, .sp=0xf5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd839, .value=0x28}, {.addr=0xd83a, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xd839, .value=0x28, .type=IO_READ},
        {.addr=0xd83a, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x2b6b, .a=0x61, .x=0x38, .y=0xf1, .sp=0x33, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x2b6b, .value=0x28}, {.addr=0x2b6c, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x2b6d, .a=0x41, .x=0x38, .y=0xf1, .sp=0x33, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2b6b, .value=0x28}, {.addr=0x2b6c, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x2b6b, .value=0x28, .type=IO_READ},
        {.addr=0x2b6c, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xf62c, .a=0xc1, .x=0x32, .y=0x6f, .sp=0xa0, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xf62c, .value=0x28}, {.addr=0xf62d, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xf62e, .a=0xc1, .x=0x32, .y=0x6f, .sp=0xa0, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xf62c, .value=0x28}, {.addr=0xf62d, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xf62c, .value=0x28, .type=IO_READ},
        {.addr=0xf62d, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x0471, .a=0x7a, .x=0xba, .y=0xf1, .sp=0x88, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0471, .value=0x28}, {.addr=0x0472, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x0473, .a=0x7a, .x=0xba, .y=0xf1, .sp=0x88, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0471, .value=0x28}, {.addr=0x0472, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x0471, .value=0x28, .type=IO_READ},
        {.addr=0x0472, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x7bff, .a=0xfb, .x=0xd5, .y=0xe3, .sp=0x53, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7bff, .value=0x28}, {.addr=0x7c00, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x7c01, .a=0x90, .x=0xd5, .y=0xe3, .sp=0x53, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x7bff, .value=0x28}, {.addr=0x7c00, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x7bff, .value=0x28, .type=IO_READ},
        {.addr=0x7c00, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x27ed, .a=0xab, .x=0xb7, .y=0x1d, .sp=0x15, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x27ed, .value=0x28}, {.addr=0x27ee, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x27ef, .a=0x28, .x=0xb7, .y=0x1d, .sp=0x15, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x27ed, .value=0x28}, {.addr=0x27ee, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x27ed, .value=0x28, .type=IO_READ},
        {.addr=0x27ee, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xf458, .a=0xbe, .x=0x27, .y=0xd6, .sp=0x13, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xf458, .value=0x28}, {.addr=0xf459, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xf45a, .a=0x8c, .x=0x27, .y=0xd6, .sp=0x13, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xf458, .value=0x28}, {.addr=0xf459, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xf458, .value=0x28, .type=IO_READ},
        {.addr=0xf459, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xdd03, .a=0x01, .x=0xfc, .y=0xfd, .sp=0x09, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xdd03, .value=0x28}, {.addr=0xdd04, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdd05, .a=0x00, .x=0xfc, .y=0xfd, .sp=0x09, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xdd03, .value=0x28}, {.addr=0xdd04, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdd03, .value=0x28, .type=IO_READ},
        {.addr=0xdd04, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xe3e4, .a=0x45, .x=0xd5, .y=0x1b, .sp=0x95, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e4, .value=0x28}, {.addr=0xe3e5, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xe3e6, .a=0x40, .x=0xd5, .y=0x1b, .sp=0x95, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xe3e4, .value=0x28}, {.addr=0xe3e5, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xe3e4, .value=0x28, .type=IO_READ},
        {.addr=0xe3e5, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xb63a, .a=0x58, .x=0x60, .y=0x9b, .sp=0x5a, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xb63a, .value=0x28}, {.addr=0xb63b, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xb63c, .a=0x00, .x=0x60, .y=0x9b, .sp=0x5a, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xb63a, .value=0x28}, {.addr=0xb63b, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xb63a, .value=0x28, .type=IO_READ},
        {.addr=0xb63b, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xf8c2, .a=0x9b, .x=0x04, .y=0x5b, .sp=0x49, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xf8c2, .value=0x28}, {.addr=0xf8c3, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xf8c4, .a=0x90, .x=0x04, .y=0x5b, .sp=0x49, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf8c2, .value=0x28}, {.addr=0xf8c3, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xf8c2, .value=0x28, .type=IO_READ},
        {.addr=0xf8c3, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x8ce9, .a=0x85, .x=0x33, .y=0x9f, .sp=0xaf, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce9, .value=0x28}, {.addr=0x8cea, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x8ceb, .a=0x00, .x=0x33, .y=0x9f, .sp=0xaf, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x8ce9, .value=0x28}, {.addr=0x8cea, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x8ce9, .value=0x28, .type=IO_READ},
        {.addr=0x8cea, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x3f08, .a=0x7c, .x=0x71, .y=0xe3, .sp=0xb6, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x3f08, .value=0x28}, {.addr=0x3f09, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3f0a, .a=0x5c, .x=0x71, .y=0xe3, .sp=0xb6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3f08, .value=0x28}, {.addr=0x3f09, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3f08, .value=0x28, .type=IO_READ},
        {.addr=0x3f09, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xf17b, .a=0x8d, .x=0x6c, .y=0x1c, .sp=0xd5, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xf17b, .value=0x28}, {.addr=0xf17c, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xf17d, .a=0x8d, .x=0x6c, .y=0x1c, .sp=0xd5, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xf17b, .value=0x28}, {.addr=0xf17c, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xf17b, .value=0x28, .type=IO_READ},
        {.addr=0xf17c, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x4250, .a=0x1c, .x=0x18, .y=0x5e, .sp=0x65, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x4250, .value=0x28}, {.addr=0x4251, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x4252, .a=0x08, .x=0x18, .y=0x5e, .sp=0x65, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4250, .value=0x28}, {.addr=0x4251, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x4250, .value=0x28, .type=IO_READ},
        {.addr=0x4251, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x5af1, .a=0x2a, .x=0x86, .y=0xb6, .sp=0xce, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x5af1, .value=0x28}, {.addr=0x5af2, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x5af3, .a=0x00, .x=0x86, .y=0xb6, .sp=0xce, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x5af1, .value=0x28}, {.addr=0x5af2, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x5af1, .value=0x28, .type=IO_READ},
        {.addr=0x5af2, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xe08e, .a=0x5f, .x=0x0e, .y=0x2e, .sp=0xd7, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xe08e, .value=0x28}, {.addr=0xe08f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe090, .a=0x5d, .x=0x0e, .y=0x2e, .sp=0xd7, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe08e, .value=0x28}, {.addr=0xe08f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe08e, .value=0x28, .type=IO_READ},
        {.addr=0xe08f, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x4ecc, .a=0x8a, .x=0xb1, .y=0x2d, .sp=0xe9, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x4ecc, .value=0x28}, {.addr=0x4ecd, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x4ece, .a=0x0a, .x=0xb1, .y=0x2d, .sp=0xe9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x4ecc, .value=0x28}, {.addr=0x4ecd, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x4ecc, .value=0x28, .type=IO_READ},
        {.addr=0x4ecd, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xa4b9, .a=0x55, .x=0x7d, .y=0x9e, .sp=0xa7, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b9, .value=0x28}, {.addr=0xa4ba, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xa4bb, .a=0x41, .x=0x7d, .y=0x9e, .sp=0xa7, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa4b9, .value=0x28}, {.addr=0xa4ba, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xa4b9, .value=0x28, .type=IO_READ},
        {.addr=0xa4ba, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xfd02, .a=0x9c, .x=0x47, .y=0x63, .sp=0x96, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xfd02, .value=0x28}, {.addr=0xfd03, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xfd04, .a=0x0c, .x=0x47, .y=0x63, .sp=0x96, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfd02, .value=0x28}, {.addr=0xfd03, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xfd02, .value=0x28, .type=IO_READ},
        {.addr=0xfd03, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x127c, .a=0x4a, .x=0x53, .y=0x36, .sp=0x80, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x127c, .value=0x28}, {.addr=0x127d, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x127e, .a=0x40, .x=0x53, .y=0x36, .sp=0x80, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x127c, .value=0x28}, {.addr=0x127d, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x127c, .value=0x28, .type=IO_READ},
        {.addr=0x127d, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x2c0a, .a=0x46, .x=0x02, .y=0x85, .sp=0xf8, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x2c0a, .value=0x28}, {.addr=0x2c0b, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x2c0c, .a=0x46, .x=0x02, .y=0x85, .sp=0xf8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2c0a, .value=0x28}, {.addr=0x2c0b, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x2c0a, .value=0x28, .type=IO_READ},
        {.addr=0x2c0b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x6af6, .a=0xf1, .x=0x28, .y=0x9e, .sp=0xcc, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x6af6, .value=0x28}, {.addr=0x6af7, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x6af8, .a=0x20, .x=0x28, .y=0x9e, .sp=0xcc, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6af6, .value=0x28}, {.addr=0x6af7, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x6af6, .value=0x28, .type=IO_READ},
        {.addr=0x6af7, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x2d09, .a=0x09, .x=0xab, .y=0x1c, .sp=0xc1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x2d09, .value=0x28}, {.addr=0x2d0a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2d0b, .a=0x09, .x=0xab, .y=0x1c, .sp=0xc1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x2d09, .value=0x28}, {.addr=0x2d0a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2d09, .value=0x28, .type=IO_READ},
        {.addr=0x2d0a, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x22fe, .a=0xe7, .x=0xf3, .y=0xad, .sp=0x65, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x22fe, .value=0x28}, {.addr=0x22ff, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x2300, .a=0xe7, .x=0xf3, .y=0xad, .sp=0x65, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x22fe, .value=0x28}, {.addr=0x22ff, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x22fe, .value=0x28, .type=IO_READ},
        {.addr=0x22ff, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x9d29, .a=0x25, .x=0x2b, .y=0x5c, .sp=0x40, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x9d29, .value=0x28}, {.addr=0x9d2a, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x9d2b, .a=0x00, .x=0x2b, .y=0x5c, .sp=0x40, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x9d29, .value=0x28}, {.addr=0x9d2a, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x9d29, .value=0x28, .type=IO_READ},
        {.addr=0x9d2a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x5fa2, .a=0x33, .x=0x23, .y=0xe9, .sp=0xf7, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa2, .value=0x28}, {.addr=0x5fa3, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x5fa4, .a=0x10, .x=0x23, .y=0xe9, .sp=0xf7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x5fa2, .value=0x28}, {.addr=0x5fa3, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x5fa2, .value=0x28, .type=IO_READ},
        {.addr=0x5fa3, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xba46, .a=0xda, .x=0x63, .y=0x18, .sp=0x95, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xba46, .value=0x28}, {.addr=0xba47, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xba48, .a=0x98, .x=0x63, .y=0x18, .sp=0x95, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xba46, .value=0x28}, {.addr=0xba47, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xba46, .value=0x28, .type=IO_READ},
        {.addr=0xba47, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x67af, .a=0xc5, .x=0xbb, .y=0x28, .sp=0x56, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x67af, .value=0x28}, {.addr=0x67b0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x67b1, .a=0xc4, .x=0xbb, .y=0x28, .sp=0x56, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x67af, .value=0x28}, {.addr=0x67b0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x67af, .value=0x28, .type=IO_READ},
        {.addr=0x67b0, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xb824, .a=0x5b, .x=0x74, .y=0xca, .sp=0x15, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb824, .value=0x28}, {.addr=0xb825, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xb826, .a=0x08, .x=0x74, .y=0xca, .sp=0x15, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb824, .value=0x28}, {.addr=0xb825, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xb824, .value=0x28, .type=IO_READ},
        {.addr=0xb825, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x2523, .a=0xe7, .x=0x25, .y=0xd4, .sp=0xa9, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2523, .value=0x28}, {.addr=0x2524, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x2525, .a=0xc5, .x=0x25, .y=0xd4, .sp=0xa9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2523, .value=0x28}, {.addr=0x2524, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x2523, .value=0x28, .type=IO_READ},
        {.addr=0x2524, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x5e19, .a=0x7a, .x=0x5e, .y=0x6b, .sp=0x3a, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x5e19, .value=0x28}, {.addr=0x5e1a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5e1b, .a=0x38, .x=0x5e, .y=0x6b, .sp=0x3a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5e19, .value=0x28}, {.addr=0x5e1a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5e19, .value=0x28, .type=IO_READ},
        {.addr=0x5e1a, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xc2d4, .a=0xfe, .x=0x74, .y=0x46, .sp=0x97, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xc2d4, .value=0x28}, {.addr=0xc2d5, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xc2d6, .a=0x9a, .x=0x74, .y=0x46, .sp=0x97, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xc2d4, .value=0x28}, {.addr=0xc2d5, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xc2d4, .value=0x28, .type=IO_READ},
        {.addr=0xc2d5, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x46de, .a=0x48, .x=0x5b, .y=0x9d, .sp=0x54, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x46de, .value=0x28}, {.addr=0x46df, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x46e0, .a=0x08, .x=0x5b, .y=0x9d, .sp=0x54, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x46de, .value=0x28}, {.addr=0x46df, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x46de, .value=0x28, .type=IO_READ},
        {.addr=0x46df, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xd036, .a=0x3a, .x=0x0d, .y=0xa7, .sp=0x93, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd036, .value=0x28}, {.addr=0xd037, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xd038, .a=0x28, .x=0x0d, .y=0xa7, .sp=0x93, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd036, .value=0x28}, {.addr=0xd037, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xd036, .value=0x28, .type=IO_READ},
        {.addr=0xd037, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xb29a, .a=0x1b, .x=0x29, .y=0xa4, .sp=0x22, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xb29a, .value=0x28}, {.addr=0xb29b, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xb29c, .a=0x10, .x=0x29, .y=0xa4, .sp=0x22, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb29a, .value=0x28}, {.addr=0xb29b, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xb29a, .value=0x28, .type=IO_READ},
        {.addr=0xb29b, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x54e2, .a=0x22, .x=0x01, .y=0xcc, .sp=0x93, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x54e2, .value=0x28}, {.addr=0x54e3, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x54e4, .a=0x02, .x=0x01, .y=0xcc, .sp=0x93, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x54e2, .value=0x28}, {.addr=0x54e3, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x54e2, .value=0x28, .type=IO_READ},
        {.addr=0x54e3, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x70d4, .a=0x4e, .x=0x0f, .y=0xed, .sp=0xbe, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x70d4, .value=0x28}, {.addr=0x70d5, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x70d6, .a=0x00, .x=0x0f, .y=0xed, .sp=0xbe, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x70d4, .value=0x28}, {.addr=0x70d5, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x70d4, .value=0x28, .type=IO_READ},
        {.addr=0x70d5, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x312b, .a=0x2b, .x=0x5c, .y=0x43, .sp=0xf6, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x312b, .value=0x28}, {.addr=0x312c, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x312d, .a=0x2a, .x=0x5c, .y=0x43, .sp=0xf6, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x312b, .value=0x28}, {.addr=0x312c, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x312b, .value=0x28, .type=IO_READ},
        {.addr=0x312c, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x47a8, .a=0x2e, .x=0x1b, .y=0x00, .sp=0xdd, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x47a8, .value=0x28}, {.addr=0x47a9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x47aa, .a=0x06, .x=0x1b, .y=0x00, .sp=0xdd, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x47a8, .value=0x28}, {.addr=0x47a9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x47a8, .value=0x28, .type=IO_READ},
        {.addr=0x47a9, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xbeaa, .a=0x97, .x=0x8e, .y=0xc1, .sp=0xda, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xbeaa, .value=0x28}, {.addr=0xbeab, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xbeac, .a=0x03, .x=0x8e, .y=0xc1, .sp=0xda, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xbeaa, .value=0x28}, {.addr=0xbeab, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xbeaa, .value=0x28, .type=IO_READ},
        {.addr=0xbeab, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xe0ed, .a=0xad, .x=0x35, .y=0xb0, .sp=0x6b, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xe0ed, .value=0x28}, {.addr=0xe0ee, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xe0ef, .a=0xa0, .x=0x35, .y=0xb0, .sp=0x6b, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xe0ed, .value=0x28}, {.addr=0xe0ee, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xe0ed, .value=0x28, .type=IO_READ},
        {.addr=0xe0ee, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x156d, .a=0xb6, .x=0x55, .y=0x8c, .sp=0x06, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x156d, .value=0x28}, {.addr=0x156e, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x156f, .a=0xb0, .x=0x55, .y=0x8c, .sp=0x06, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x156d, .value=0x28}, {.addr=0x156e, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x156d, .value=0x28, .type=IO_READ},
        {.addr=0x156e, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x2f46, .a=0x50, .x=0x60, .y=0xc4, .sp=0x96, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x2f46, .value=0x28}, {.addr=0x2f47, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x2f48, .a=0x50, .x=0x60, .y=0xc4, .sp=0x96, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2f46, .value=0x28}, {.addr=0x2f47, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x2f46, .value=0x28, .type=IO_READ},
        {.addr=0x2f47, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xfdfa, .a=0x62, .x=0xce, .y=0x54, .sp=0xd1, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xfdfa, .value=0x28}, {.addr=0xfdfb, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xfdfc, .a=0x22, .x=0xce, .y=0x54, .sp=0xd1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xfdfa, .value=0x28}, {.addr=0xfdfb, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xfdfa, .value=0x28, .type=IO_READ},
        {.addr=0xfdfb, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xc9f2, .a=0x0c, .x=0x97, .y=0xa9, .sp=0x5f, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xc9f2, .value=0x28}, {.addr=0xc9f3, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xc9f4, .a=0x00, .x=0x97, .y=0xa9, .sp=0x5f, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xc9f2, .value=0x28}, {.addr=0xc9f3, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xc9f2, .value=0x28, .type=IO_READ},
        {.addr=0xc9f3, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_28, _28_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xf886, .a=0x37, .x=0xc3, .y=0x3d, .sp=0xa0, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xf886, .value=0x28}, {.addr=0xf887, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xf888, .a=0x15, .x=0xc3, .y=0x3d, .sp=0xa0, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xf886, .value=0x28}, {.addr=0xf887, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xf886, .value=0x28, .type=IO_READ},
        {.addr=0xf887, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("28 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
