#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_A8, _A8_0000) {
    const struct CPU_State initial_cpu = {.pc=0xf2b0, .a=0x96, .x=0x28, .y=0x4c, .sp=0xb9, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b0, .value=0xa8}, {.addr=0xf2b1, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xf2b2, .a=0x83, .x=0x28, .y=0x4c, .sp=0xb9, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xf2b0, .value=0xa8}, {.addr=0xf2b1, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xf2b0, .value=0xa8, .type=IO_READ},
        {.addr=0xf2b1, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0001) {
    const struct CPU_State initial_cpu = {.pc=0x6947, .a=0x03, .x=0xab, .y=0x1d, .sp=0x54, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6947, .value=0xa8}, {.addr=0x6948, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6949, .a=0x46, .x=0xab, .y=0x1d, .sp=0x54, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6947, .value=0xa8}, {.addr=0x6948, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6947, .value=0xa8, .type=IO_READ},
        {.addr=0x6948, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0002) {
    const struct CPU_State initial_cpu = {.pc=0x6e37, .a=0x8f, .x=0x74, .y=0x45, .sp=0x26, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x6e37, .value=0xa8}, {.addr=0x6e38, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x6e39, .a=0xec, .x=0x74, .y=0x45, .sp=0x26, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x6e37, .value=0xa8}, {.addr=0x6e38, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x6e37, .value=0xa8, .type=IO_READ},
        {.addr=0x6e38, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0003) {
    const struct CPU_State initial_cpu = {.pc=0x185e, .a=0x46, .x=0xdb, .y=0x7d, .sp=0x73, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x185e, .value=0xa8}, {.addr=0x185f, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x1860, .a=0x98, .x=0xdb, .y=0x7d, .sp=0x73, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x185e, .value=0xa8}, {.addr=0x185f, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x185e, .value=0xa8, .type=IO_READ},
        {.addr=0x185f, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0004) {
    const struct CPU_State initial_cpu = {.pc=0xdc61, .a=0xeb, .x=0xee, .y=0xe9, .sp=0x4e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xdc61, .value=0xa8}, {.addr=0xdc62, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xdc63, .a=0xa2, .x=0xee, .y=0xe9, .sp=0x4e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xdc61, .value=0xa8}, {.addr=0xdc62, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xdc61, .value=0xa8, .type=IO_READ},
        {.addr=0xdc62, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0005) {
    const struct CPU_State initial_cpu = {.pc=0x42ed, .a=0xa0, .x=0x96, .y=0x20, .sp=0xc8, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x42ed, .value=0xa8}, {.addr=0x42ee, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x42ef, .a=0x30, .x=0x96, .y=0x20, .sp=0xc8, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x42ed, .value=0xa8}, {.addr=0x42ee, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x42ed, .value=0xa8, .type=IO_READ},
        {.addr=0x42ee, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0006) {
    const struct CPU_State initial_cpu = {.pc=0x79af, .a=0x4a, .x=0xbe, .y=0xc8, .sp=0x33, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x79af, .value=0xa8}, {.addr=0x79b0, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x79b1, .a=0x90, .x=0xbe, .y=0xc8, .sp=0x33, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x79af, .value=0xa8}, {.addr=0x79b0, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x79af, .value=0xa8, .type=IO_READ},
        {.addr=0x79b0, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0007) {
    const struct CPU_State initial_cpu = {.pc=0x1c3b, .a=0xea, .x=0x86, .y=0x09, .sp=0xa2, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x1c3b, .value=0xa8}, {.addr=0x1c3c, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x1c3d, .a=0xc3, .x=0x86, .y=0x09, .sp=0xa2, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x1c3b, .value=0xa8}, {.addr=0x1c3c, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x1c3b, .value=0xa8, .type=IO_READ},
        {.addr=0x1c3c, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0008) {
    const struct CPU_State initial_cpu = {.pc=0xf9e2, .a=0x8c, .x=0xe3, .y=0x8b, .sp=0x1e, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xf9e2, .value=0xa8}, {.addr=0xf9e3, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xf9e4, .a=0x20, .x=0xe3, .y=0x8b, .sp=0x1e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xf9e2, .value=0xa8}, {.addr=0xf9e3, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xf9e2, .value=0xa8, .type=IO_READ},
        {.addr=0xf9e3, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0009) {
    const struct CPU_State initial_cpu = {.pc=0x326c, .a=0x76, .x=0xef, .y=0x31, .sp=0x4e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x326c, .value=0xa8}, {.addr=0x326d, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x326e, .a=0xfa, .x=0xef, .y=0x31, .sp=0x4e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x326c, .value=0xa8}, {.addr=0x326d, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x326c, .value=0xa8, .type=IO_READ},
        {.addr=0x326d, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_000A) {
    const struct CPU_State initial_cpu = {.pc=0xda45, .a=0x62, .x=0x2a, .y=0xd1, .sp=0x5a, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xda45, .value=0xa8}, {.addr=0xda46, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xda47, .a=0xa6, .x=0x2a, .y=0xd1, .sp=0x5a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xda45, .value=0xa8}, {.addr=0xda46, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xda45, .value=0xa8, .type=IO_READ},
        {.addr=0xda46, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_000B) {
    const struct CPU_State initial_cpu = {.pc=0xbaa8, .a=0xe1, .x=0x57, .y=0x99, .sp=0x4e, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xbaa8, .value=0xa8}, {.addr=0xbaa9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbaaa, .a=0x22, .x=0x57, .y=0x99, .sp=0x4e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xbaa8, .value=0xa8}, {.addr=0xbaa9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbaa8, .value=0xa8, .type=IO_READ},
        {.addr=0xbaa9, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_000C) {
    const struct CPU_State initial_cpu = {.pc=0x1591, .a=0x1e, .x=0x5f, .y=0xf8, .sp=0x51, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x1591, .value=0xa8}, {.addr=0x1592, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x1593, .a=0x35, .x=0x5f, .y=0xf8, .sp=0x51, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1591, .value=0xa8}, {.addr=0x1592, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x1591, .value=0xa8, .type=IO_READ},
        {.addr=0x1592, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_000D) {
    const struct CPU_State initial_cpu = {.pc=0x0542, .a=0x67, .x=0x2c, .y=0x8a, .sp=0xd3, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0542, .value=0xa8}, {.addr=0x0543, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x0544, .a=0x49, .x=0x2c, .y=0x8a, .sp=0xd3, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0542, .value=0xa8}, {.addr=0x0543, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x0542, .value=0xa8, .type=IO_READ},
        {.addr=0x0543, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_000E) {
    const struct CPU_State initial_cpu = {.pc=0x5218, .a=0x8f, .x=0xd5, .y=0xde, .sp=0x70, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x5218, .value=0xa8}, {.addr=0x5219, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x521a, .a=0xe0, .x=0xd5, .y=0xde, .sp=0x70, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5218, .value=0xa8}, {.addr=0x5219, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5218, .value=0xa8, .type=IO_READ},
        {.addr=0x5219, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_000F) {
    const struct CPU_State initial_cpu = {.pc=0x6387, .a=0xe2, .x=0x32, .y=0xe1, .sp=0x35, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x6387, .value=0xa8}, {.addr=0x6388, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x6389, .a=0xab, .x=0x32, .y=0xe1, .sp=0x35, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x6387, .value=0xa8}, {.addr=0x6388, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x6387, .value=0xa8, .type=IO_READ},
        {.addr=0x6388, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0010) {
    const struct CPU_State initial_cpu = {.pc=0x1dc4, .a=0xb9, .x=0x01, .y=0x1e, .sp=0x8a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x1dc4, .value=0xa8}, {.addr=0x1dc5, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x1dc6, .a=0xd7, .x=0x01, .y=0x1e, .sp=0x8a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x1dc4, .value=0xa8}, {.addr=0x1dc5, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x1dc4, .value=0xa8, .type=IO_READ},
        {.addr=0x1dc5, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0011) {
    const struct CPU_State initial_cpu = {.pc=0x04b6, .a=0x8c, .x=0x72, .y=0x1d, .sp=0x41, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x04b6, .value=0xa8}, {.addr=0x04b7, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x04b8, .a=0xf7, .x=0x72, .y=0x1d, .sp=0x41, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x04b6, .value=0xa8}, {.addr=0x04b7, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x04b6, .value=0xa8, .type=IO_READ},
        {.addr=0x04b7, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0012) {
    const struct CPU_State initial_cpu = {.pc=0x9be5, .a=0xde, .x=0xc6, .y=0xb5, .sp=0x2a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x9be5, .value=0xa8}, {.addr=0x9be6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9be7, .a=0x1f, .x=0xc6, .y=0xb5, .sp=0x2a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9be5, .value=0xa8}, {.addr=0x9be6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9be5, .value=0xa8, .type=IO_READ},
        {.addr=0x9be6, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0013) {
    const struct CPU_State initial_cpu = {.pc=0xfbe4, .a=0xa0, .x=0x72, .y=0x42, .sp=0x84, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe4, .value=0xa8}, {.addr=0xfbe5, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xfbe6, .a=0x3c, .x=0x72, .y=0x42, .sp=0x84, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xfbe4, .value=0xa8}, {.addr=0xfbe5, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xfbe4, .value=0xa8, .type=IO_READ},
        {.addr=0xfbe5, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0014) {
    const struct CPU_State initial_cpu = {.pc=0xad50, .a=0x05, .x=0x15, .y=0x0d, .sp=0x0d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xad50, .value=0xa8}, {.addr=0xad51, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xad52, .a=0x0f, .x=0x15, .y=0x0d, .sp=0x0d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xad50, .value=0xa8}, {.addr=0xad51, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xad50, .value=0xa8, .type=IO_READ},
        {.addr=0xad51, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0015) {
    const struct CPU_State initial_cpu = {.pc=0x9b82, .a=0x7b, .x=0x43, .y=0x07, .sp=0xba, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x9b82, .value=0xa8}, {.addr=0x9b83, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x9b84, .a=0x10, .x=0x43, .y=0x07, .sp=0xba, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x9b82, .value=0xa8}, {.addr=0x9b83, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x9b82, .value=0xa8, .type=IO_READ},
        {.addr=0x9b83, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0016) {
    const struct CPU_State initial_cpu = {.pc=0x4428, .a=0xa2, .x=0x05, .y=0x5e, .sp=0xa1, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x4428, .value=0xa8}, {.addr=0x4429, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x442a, .a=0x0e, .x=0x05, .y=0x5e, .sp=0xa1, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4428, .value=0xa8}, {.addr=0x4429, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x4428, .value=0xa8, .type=IO_READ},
        {.addr=0x4429, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0017) {
    const struct CPU_State initial_cpu = {.pc=0x6dd8, .a=0x27, .x=0xd1, .y=0xc8, .sp=0xfe, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd8, .value=0xa8}, {.addr=0x6dd9, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x6dda, .a=0xa3, .x=0xd1, .y=0xc8, .sp=0xfe, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6dd8, .value=0xa8}, {.addr=0x6dd9, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x6dd8, .value=0xa8, .type=IO_READ},
        {.addr=0x6dd9, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0018) {
    const struct CPU_State initial_cpu = {.pc=0xa0ce, .a=0x06, .x=0x4c, .y=0x2d, .sp=0xa5, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ce, .value=0xa8}, {.addr=0xa0cf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa0d0, .a=0xf8, .x=0x4c, .y=0x2d, .sp=0xa5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa0ce, .value=0xa8}, {.addr=0xa0cf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa0ce, .value=0xa8, .type=IO_READ},
        {.addr=0xa0cf, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0019) {
    const struct CPU_State initial_cpu = {.pc=0x4b48, .a=0x72, .x=0x0f, .y=0xdf, .sp=0xe8, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x4b48, .value=0xa8}, {.addr=0x4b49, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x4b4a, .a=0x18, .x=0x0f, .y=0xdf, .sp=0xe8, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x4b48, .value=0xa8}, {.addr=0x4b49, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x4b48, .value=0xa8, .type=IO_READ},
        {.addr=0x4b49, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_001A) {
    const struct CPU_State initial_cpu = {.pc=0x83aa, .a=0x55, .x=0xbd, .y=0x5c, .sp=0x4f, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x83aa, .value=0xa8}, {.addr=0x83ab, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x83ac, .a=0xea, .x=0xbd, .y=0x5c, .sp=0x4f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x83aa, .value=0xa8}, {.addr=0x83ab, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x83aa, .value=0xa8, .type=IO_READ},
        {.addr=0x83ab, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_001B) {
    const struct CPU_State initial_cpu = {.pc=0xf56a, .a=0x2a, .x=0xba, .y=0x8b, .sp=0xa9, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xf56a, .value=0xa8}, {.addr=0xf56b, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xf56c, .a=0x36, .x=0xba, .y=0x8b, .sp=0xa9, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf56a, .value=0xa8}, {.addr=0xf56b, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xf56a, .value=0xa8, .type=IO_READ},
        {.addr=0xf56b, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_001C) {
    const struct CPU_State initial_cpu = {.pc=0xa66d, .a=0xdd, .x=0x58, .y=0x63, .sp=0x38, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xa66d, .value=0xa8}, {.addr=0xa66e, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xa66f, .a=0x68, .x=0x58, .y=0x63, .sp=0x38, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xa66d, .value=0xa8}, {.addr=0xa66e, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xa66d, .value=0xa8, .type=IO_READ},
        {.addr=0xa66e, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_001D) {
    const struct CPU_State initial_cpu = {.pc=0x7898, .a=0xde, .x=0xcb, .y=0xca, .sp=0xca, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x7898, .value=0xa8}, {.addr=0x7899, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x789a, .a=0xd7, .x=0xcb, .y=0xca, .sp=0xca, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x7898, .value=0xa8}, {.addr=0x7899, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7898, .value=0xa8, .type=IO_READ},
        {.addr=0x7899, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_001E) {
    const struct CPU_State initial_cpu = {.pc=0x3df8, .a=0x6a, .x=0x23, .y=0x81, .sp=0x71, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x3df8, .value=0xa8}, {.addr=0x3df9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3dfa, .a=0x6e, .x=0x23, .y=0x81, .sp=0x71, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x3df8, .value=0xa8}, {.addr=0x3df9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3df8, .value=0xa8, .type=IO_READ},
        {.addr=0x3df9, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_001F) {
    const struct CPU_State initial_cpu = {.pc=0xb27d, .a=0xef, .x=0x54, .y=0xb4, .sp=0x36, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xb27d, .value=0xa8}, {.addr=0xb27e, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xb27f, .a=0x7e, .x=0x54, .y=0xb4, .sp=0x36, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb27d, .value=0xa8}, {.addr=0xb27e, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xb27d, .value=0xa8, .type=IO_READ},
        {.addr=0xb27e, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0020) {
    const struct CPU_State initial_cpu = {.pc=0x448c, .a=0x5c, .x=0xbb, .y=0x44, .sp=0x99, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x448c, .value=0xa8}, {.addr=0x448d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x448e, .a=0x75, .x=0xbb, .y=0x44, .sp=0x99, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x448c, .value=0xa8}, {.addr=0x448d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x448c, .value=0xa8, .type=IO_READ},
        {.addr=0x448d, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0021) {
    const struct CPU_State initial_cpu = {.pc=0x075d, .a=0x5e, .x=0xd3, .y=0xb8, .sp=0xa0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x075d, .value=0xa8}, {.addr=0x075e, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x075f, .a=0x5f, .x=0xd3, .y=0xb8, .sp=0xa0, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x075d, .value=0xa8}, {.addr=0x075e, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x075d, .value=0xa8, .type=IO_READ},
        {.addr=0x075e, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0022) {
    const struct CPU_State initial_cpu = {.pc=0xd1e7, .a=0xbe, .x=0x89, .y=0xae, .sp=0x4c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xd1e7, .value=0xa8}, {.addr=0xd1e8, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xd1e9, .a=0x4a, .x=0x89, .y=0xae, .sp=0x4c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd1e7, .value=0xa8}, {.addr=0xd1e8, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xd1e7, .value=0xa8, .type=IO_READ},
        {.addr=0xd1e8, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0023) {
    const struct CPU_State initial_cpu = {.pc=0x6bbb, .a=0x72, .x=0xd8, .y=0x39, .sp=0x77, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6bbb, .value=0xa8}, {.addr=0x6bbc, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x6bbd, .a=0xff, .x=0xd8, .y=0x39, .sp=0x77, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6bbb, .value=0xa8}, {.addr=0x6bbc, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x6bbb, .value=0xa8, .type=IO_READ},
        {.addr=0x6bbc, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0024) {
    const struct CPU_State initial_cpu = {.pc=0x46de, .a=0xee, .x=0xb6, .y=0xea, .sp=0x0e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x46de, .value=0xa8}, {.addr=0x46df, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x46e0, .a=0xf9, .x=0xb6, .y=0xea, .sp=0x0e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x46de, .value=0xa8}, {.addr=0x46df, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x46de, .value=0xa8, .type=IO_READ},
        {.addr=0x46df, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0025) {
    const struct CPU_State initial_cpu = {.pc=0x4fad, .a=0x1f, .x=0xd5, .y=0x4c, .sp=0xfb, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x4fad, .value=0xa8}, {.addr=0x4fae, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x4faf, .a=0x2e, .x=0xd5, .y=0x4c, .sp=0xfb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4fad, .value=0xa8}, {.addr=0x4fae, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x4fad, .value=0xa8, .type=IO_READ},
        {.addr=0x4fae, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0026) {
    const struct CPU_State initial_cpu = {.pc=0xe8d3, .a=0xe6, .x=0x0d, .y=0xe0, .sp=0xaa, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xe8d3, .value=0xa8}, {.addr=0xe8d4, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xe8d5, .a=0x62, .x=0x0d, .y=0xe0, .sp=0xaa, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe8d3, .value=0xa8}, {.addr=0xe8d4, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xe8d3, .value=0xa8, .type=IO_READ},
        {.addr=0xe8d4, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0027) {
    const struct CPU_State initial_cpu = {.pc=0xe059, .a=0x16, .x=0x67, .y=0x71, .sp=0x30, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xe059, .value=0xa8}, {.addr=0xe05a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe05b, .a=0xc8, .x=0x67, .y=0x71, .sp=0x30, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe059, .value=0xa8}, {.addr=0xe05a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe059, .value=0xa8, .type=IO_READ},
        {.addr=0xe05a, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0028) {
    const struct CPU_State initial_cpu = {.pc=0xb533, .a=0xdb, .x=0xd9, .y=0xe6, .sp=0x3a, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xb533, .value=0xa8}, {.addr=0xb534, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb535, .a=0xbf, .x=0xd9, .y=0xe6, .sp=0x3a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xb533, .value=0xa8}, {.addr=0xb534, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb533, .value=0xa8, .type=IO_READ},
        {.addr=0xb534, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0029) {
    const struct CPU_State initial_cpu = {.pc=0x839f, .a=0x7b, .x=0x14, .y=0xf9, .sp=0xf1, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x839f, .value=0xa8}, {.addr=0x83a0, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x83a1, .a=0xce, .x=0x14, .y=0xf9, .sp=0xf1, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x839f, .value=0xa8}, {.addr=0x83a0, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x839f, .value=0xa8, .type=IO_READ},
        {.addr=0x83a0, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_002A) {
    const struct CPU_State initial_cpu = {.pc=0x4635, .a=0x86, .x=0xc9, .y=0x6f, .sp=0x7c, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x4635, .value=0xa8}, {.addr=0x4636, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x4637, .a=0x15, .x=0xc9, .y=0x6f, .sp=0x7c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4635, .value=0xa8}, {.addr=0x4636, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x4635, .value=0xa8, .type=IO_READ},
        {.addr=0x4636, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_002B) {
    const struct CPU_State initial_cpu = {.pc=0x2d07, .a=0x21, .x=0xf3, .y=0x02, .sp=0x11, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x2d07, .value=0xa8}, {.addr=0x2d08, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x2d09, .a=0xef, .x=0xf3, .y=0x02, .sp=0x11, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2d07, .value=0xa8}, {.addr=0x2d08, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x2d07, .value=0xa8, .type=IO_READ},
        {.addr=0x2d08, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_002C) {
    const struct CPU_State initial_cpu = {.pc=0xb364, .a=0x4c, .x=0xed, .y=0x27, .sp=0xc0, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xb364, .value=0xa8}, {.addr=0xb365, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xb366, .a=0x14, .x=0xed, .y=0x27, .sp=0xc0, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb364, .value=0xa8}, {.addr=0xb365, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xb364, .value=0xa8, .type=IO_READ},
        {.addr=0xb365, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_002D) {
    const struct CPU_State initial_cpu = {.pc=0x99fd, .a=0xae, .x=0x19, .y=0x38, .sp=0x5d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x99fd, .value=0xa8}, {.addr=0x99fe, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x99ff, .a=0xc4, .x=0x19, .y=0x38, .sp=0x5d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x99fd, .value=0xa8}, {.addr=0x99fe, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x99fd, .value=0xa8, .type=IO_READ},
        {.addr=0x99fe, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_002E) {
    const struct CPU_State initial_cpu = {.pc=0xbb2a, .a=0x52, .x=0x9f, .y=0x7e, .sp=0xb0, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xbb2a, .value=0xa8}, {.addr=0xbb2b, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xbb2c, .a=0xe3, .x=0x9f, .y=0x7e, .sp=0xb0, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xbb2a, .value=0xa8}, {.addr=0xbb2b, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xbb2a, .value=0xa8, .type=IO_READ},
        {.addr=0xbb2b, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_002F) {
    const struct CPU_State initial_cpu = {.pc=0x8834, .a=0x74, .x=0x02, .y=0x52, .sp=0xe1, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x8834, .value=0xa8}, {.addr=0x8835, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x8836, .a=0x63, .x=0x02, .y=0x52, .sp=0xe1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x8834, .value=0xa8}, {.addr=0x8835, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x8834, .value=0xa8, .type=IO_READ},
        {.addr=0x8835, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0030) {
    const struct CPU_State initial_cpu = {.pc=0xe8c3, .a=0x02, .x=0x72, .y=0xf0, .sp=0x16, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xe8c3, .value=0xa8}, {.addr=0xe8c4, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xe8c5, .a=0x8e, .x=0x72, .y=0xf0, .sp=0x16, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe8c3, .value=0xa8}, {.addr=0xe8c4, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xe8c3, .value=0xa8, .type=IO_READ},
        {.addr=0xe8c4, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0031) {
    const struct CPU_State initial_cpu = {.pc=0x8fc6, .a=0xfa, .x=0x44, .y=0x20, .sp=0x14, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x8fc6, .value=0xa8}, {.addr=0x8fc7, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x8fc8, .a=0xb2, .x=0x44, .y=0x20, .sp=0x14, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8fc6, .value=0xa8}, {.addr=0x8fc7, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x8fc6, .value=0xa8, .type=IO_READ},
        {.addr=0x8fc7, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0032) {
    const struct CPU_State initial_cpu = {.pc=0x62a9, .a=0x54, .x=0xc9, .y=0xdf, .sp=0xe3, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x62a9, .value=0xa8}, {.addr=0x62aa, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x62ab, .a=0x29, .x=0xc9, .y=0xdf, .sp=0xe3, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x62a9, .value=0xa8}, {.addr=0x62aa, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x62a9, .value=0xa8, .type=IO_READ},
        {.addr=0x62aa, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0033) {
    const struct CPU_State initial_cpu = {.pc=0x9a8a, .a=0xbf, .x=0x83, .y=0x01, .sp=0xaf, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x9a8a, .value=0xa8}, {.addr=0x9a8b, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x9a8c, .a=0x2b, .x=0x83, .y=0x01, .sp=0xaf, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9a8a, .value=0xa8}, {.addr=0x9a8b, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x9a8a, .value=0xa8, .type=IO_READ},
        {.addr=0x9a8b, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0034) {
    const struct CPU_State initial_cpu = {.pc=0xd8a9, .a=0xb4, .x=0xfd, .y=0xee, .sp=0x97, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xd8a9, .value=0xa8}, {.addr=0xd8aa, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xd8ab, .a=0x40, .x=0xfd, .y=0xee, .sp=0x97, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xd8a9, .value=0xa8}, {.addr=0xd8aa, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xd8a9, .value=0xa8, .type=IO_READ},
        {.addr=0xd8aa, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0035) {
    const struct CPU_State initial_cpu = {.pc=0x8c30, .a=0x21, .x=0x42, .y=0xff, .sp=0xff, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x8c30, .value=0xa8}, {.addr=0x8c31, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x8c32, .a=0x6a, .x=0x42, .y=0xff, .sp=0xff, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8c30, .value=0xa8}, {.addr=0x8c31, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x8c30, .value=0xa8, .type=IO_READ},
        {.addr=0x8c31, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0036) {
    const struct CPU_State initial_cpu = {.pc=0x1c47, .a=0x39, .x=0xf3, .y=0xe3, .sp=0x56, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x1c47, .value=0xa8}, {.addr=0x1c48, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x1c49, .a=0x28, .x=0xf3, .y=0xe3, .sp=0x56, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1c47, .value=0xa8}, {.addr=0x1c48, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x1c47, .value=0xa8, .type=IO_READ},
        {.addr=0x1c48, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0037) {
    const struct CPU_State initial_cpu = {.pc=0x2d17, .a=0x15, .x=0x44, .y=0x21, .sp=0x52, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x2d17, .value=0xa8}, {.addr=0x2d18, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x2d19, .a=0x0d, .x=0x44, .y=0x21, .sp=0x52, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2d17, .value=0xa8}, {.addr=0x2d18, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x2d17, .value=0xa8, .type=IO_READ},
        {.addr=0x2d18, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0038) {
    const struct CPU_State initial_cpu = {.pc=0x3717, .a=0x9e, .x=0xa1, .y=0x71, .sp=0x09, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x3717, .value=0xa8}, {.addr=0x3718, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x3719, .a=0xcf, .x=0xa1, .y=0x71, .sp=0x09, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3717, .value=0xa8}, {.addr=0x3718, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x3717, .value=0xa8, .type=IO_READ},
        {.addr=0x3718, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0039) {
    const struct CPU_State initial_cpu = {.pc=0xe624, .a=0x43, .x=0x3a, .y=0x95, .sp=0x33, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xe624, .value=0xa8}, {.addr=0xe625, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xe626, .a=0xc9, .x=0x3a, .y=0x95, .sp=0x33, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe624, .value=0xa8}, {.addr=0xe625, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xe624, .value=0xa8, .type=IO_READ},
        {.addr=0xe625, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_003A) {
    const struct CPU_State initial_cpu = {.pc=0x1402, .a=0xf3, .x=0x68, .y=0x52, .sp=0x7f, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x1402, .value=0xa8}, {.addr=0x1403, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1404, .a=0x12, .x=0x68, .y=0x52, .sp=0x7f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1402, .value=0xa8}, {.addr=0x1403, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1402, .value=0xa8, .type=IO_READ},
        {.addr=0x1403, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_003B) {
    const struct CPU_State initial_cpu = {.pc=0x3fb3, .a=0x91, .x=0x62, .y=0x18, .sp=0x98, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x3fb3, .value=0xa8}, {.addr=0x3fb4, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x3fb5, .a=0x5f, .x=0x62, .y=0x18, .sp=0x98, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3fb3, .value=0xa8}, {.addr=0x3fb4, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x3fb3, .value=0xa8, .type=IO_READ},
        {.addr=0x3fb4, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_003C) {
    const struct CPU_State initial_cpu = {.pc=0x6fbd, .a=0x3c, .x=0xb3, .y=0x87, .sp=0x2c, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x6fbd, .value=0xa8}, {.addr=0x6fbe, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x6fbf, .a=0x1c, .x=0xb3, .y=0x87, .sp=0x2c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x6fbd, .value=0xa8}, {.addr=0x6fbe, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x6fbd, .value=0xa8, .type=IO_READ},
        {.addr=0x6fbe, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_003D) {
    const struct CPU_State initial_cpu = {.pc=0x6e29, .a=0x5f, .x=0x56, .y=0xd2, .sp=0xdf, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x6e29, .value=0xa8}, {.addr=0x6e2a, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x6e2b, .a=0x8b, .x=0x56, .y=0xd2, .sp=0xdf, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6e29, .value=0xa8}, {.addr=0x6e2a, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x6e29, .value=0xa8, .type=IO_READ},
        {.addr=0x6e2a, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_003E) {
    const struct CPU_State initial_cpu = {.pc=0x3ba7, .a=0xcd, .x=0x72, .y=0x3d, .sp=0xc2, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x3ba7, .value=0xa8}, {.addr=0x3ba8, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x3ba9, .a=0xb5, .x=0x72, .y=0x3d, .sp=0xc2, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3ba7, .value=0xa8}, {.addr=0x3ba8, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x3ba7, .value=0xa8, .type=IO_READ},
        {.addr=0x3ba8, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_003F) {
    const struct CPU_State initial_cpu = {.pc=0x2a15, .a=0xff, .x=0xa7, .y=0x7f, .sp=0xd2, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x2a15, .value=0xa8}, {.addr=0x2a16, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2a17, .a=0x62, .x=0xa7, .y=0x7f, .sp=0xd2, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2a15, .value=0xa8}, {.addr=0x2a16, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2a15, .value=0xa8, .type=IO_READ},
        {.addr=0x2a16, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0040) {
    const struct CPU_State initial_cpu = {.pc=0xb18d, .a=0x6a, .x=0x41, .y=0x69, .sp=0xb3, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xb18d, .value=0xa8}, {.addr=0xb18e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb18f, .a=0x3c, .x=0x41, .y=0x69, .sp=0xb3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xb18d, .value=0xa8}, {.addr=0xb18e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb18d, .value=0xa8, .type=IO_READ},
        {.addr=0xb18e, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0041) {
    const struct CPU_State initial_cpu = {.pc=0xa8b6, .a=0xe1, .x=0x17, .y=0x8a, .sp=0x28, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xa8b6, .value=0xa8}, {.addr=0xa8b7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa8b8, .a=0x13, .x=0x17, .y=0x8a, .sp=0x28, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa8b6, .value=0xa8}, {.addr=0xa8b7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa8b6, .value=0xa8, .type=IO_READ},
        {.addr=0xa8b7, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0042) {
    const struct CPU_State initial_cpu = {.pc=0xb58e, .a=0x32, .x=0x14, .y=0xa3, .sp=0x9c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xb58e, .value=0xa8}, {.addr=0xb58f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb590, .a=0xf4, .x=0x14, .y=0xa3, .sp=0x9c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb58e, .value=0xa8}, {.addr=0xb58f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb58e, .value=0xa8, .type=IO_READ},
        {.addr=0xb58f, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0043) {
    const struct CPU_State initial_cpu = {.pc=0x6bc5, .a=0xdb, .x=0x7d, .y=0x16, .sp=0xd1, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x6bc5, .value=0xa8}, {.addr=0x6bc6, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x6bc7, .a=0x25, .x=0x7d, .y=0x16, .sp=0xd1, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6bc5, .value=0xa8}, {.addr=0x6bc6, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x6bc5, .value=0xa8, .type=IO_READ},
        {.addr=0x6bc6, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0044) {
    const struct CPU_State initial_cpu = {.pc=0xb948, .a=0x1f, .x=0xd0, .y=0xae, .sp=0x81, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xb948, .value=0xa8}, {.addr=0xb949, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xb94a, .a=0x4a, .x=0xd0, .y=0xae, .sp=0x81, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb948, .value=0xa8}, {.addr=0xb949, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xb948, .value=0xa8, .type=IO_READ},
        {.addr=0xb949, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0045) {
    const struct CPU_State initial_cpu = {.pc=0x695b, .a=0x0a, .x=0x98, .y=0x05, .sp=0x91, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x695b, .value=0xa8}, {.addr=0x695c, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x695d, .a=0x5f, .x=0x98, .y=0x05, .sp=0x91, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x695b, .value=0xa8}, {.addr=0x695c, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x695b, .value=0xa8, .type=IO_READ},
        {.addr=0x695c, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0046) {
    const struct CPU_State initial_cpu = {.pc=0xf59c, .a=0x44, .x=0xca, .y=0xef, .sp=0xdf, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xf59c, .value=0xa8}, {.addr=0xf59d, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xf59e, .a=0x19, .x=0xca, .y=0xef, .sp=0xdf, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xf59c, .value=0xa8}, {.addr=0xf59d, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xf59c, .value=0xa8, .type=IO_READ},
        {.addr=0xf59d, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0047) {
    const struct CPU_State initial_cpu = {.pc=0xf115, .a=0xe8, .x=0xc2, .y=0xfc, .sp=0x58, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xf115, .value=0xa8}, {.addr=0xf116, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xf117, .a=0xac, .x=0xc2, .y=0xfc, .sp=0x58, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf115, .value=0xa8}, {.addr=0xf116, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xf115, .value=0xa8, .type=IO_READ},
        {.addr=0xf116, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0048) {
    const struct CPU_State initial_cpu = {.pc=0x3e71, .a=0x32, .x=0xe7, .y=0x73, .sp=0x54, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x3e71, .value=0xa8}, {.addr=0x3e72, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x3e73, .a=0x48, .x=0xe7, .y=0x73, .sp=0x54, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x3e71, .value=0xa8}, {.addr=0x3e72, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x3e71, .value=0xa8, .type=IO_READ},
        {.addr=0x3e72, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0049) {
    const struct CPU_State initial_cpu = {.pc=0xd548, .a=0x42, .x=0x64, .y=0xf5, .sp=0xfe, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xd548, .value=0xa8}, {.addr=0xd549, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xd54a, .a=0x6c, .x=0x64, .y=0xf5, .sp=0xfe, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xd548, .value=0xa8}, {.addr=0xd549, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xd548, .value=0xa8, .type=IO_READ},
        {.addr=0xd549, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_004A) {
    const struct CPU_State initial_cpu = {.pc=0xb776, .a=0x2f, .x=0xc0, .y=0xb4, .sp=0xf7, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xb776, .value=0xa8}, {.addr=0xb777, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xb778, .a=0x20, .x=0xc0, .y=0xb4, .sp=0xf7, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb776, .value=0xa8}, {.addr=0xb777, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xb776, .value=0xa8, .type=IO_READ},
        {.addr=0xb777, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_004B) {
    const struct CPU_State initial_cpu = {.pc=0xba1d, .a=0xcf, .x=0x5b, .y=0x64, .sp=0x8b, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xba1d, .value=0xa8}, {.addr=0xba1e, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xba1f, .a=0xdf, .x=0x5b, .y=0x64, .sp=0x8b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xba1d, .value=0xa8}, {.addr=0xba1e, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xba1d, .value=0xa8, .type=IO_READ},
        {.addr=0xba1e, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_004C) {
    const struct CPU_State initial_cpu = {.pc=0x841a, .a=0x3a, .x=0xff, .y=0xde, .sp=0xbf, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x841a, .value=0xa8}, {.addr=0x841b, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x841c, .a=0x42, .x=0xff, .y=0xde, .sp=0xbf, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x841a, .value=0xa8}, {.addr=0x841b, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x841a, .value=0xa8, .type=IO_READ},
        {.addr=0x841b, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_004D) {
    const struct CPU_State initial_cpu = {.pc=0x3a82, .a=0x10, .x=0x50, .y=0xe5, .sp=0x27, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x3a82, .value=0xa8}, {.addr=0x3a83, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x3a84, .a=0x9b, .x=0x50, .y=0xe5, .sp=0x27, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3a82, .value=0xa8}, {.addr=0x3a83, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x3a82, .value=0xa8, .type=IO_READ},
        {.addr=0x3a83, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_004E) {
    const struct CPU_State initial_cpu = {.pc=0x8641, .a=0xc7, .x=0x0d, .y=0x5f, .sp=0x4b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x8641, .value=0xa8}, {.addr=0x8642, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8643, .a=0x08, .x=0x0d, .y=0x5f, .sp=0x4b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8641, .value=0xa8}, {.addr=0x8642, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8641, .value=0xa8, .type=IO_READ},
        {.addr=0x8642, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_004F) {
    const struct CPU_State initial_cpu = {.pc=0x1fbc, .a=0xba, .x=0x26, .y=0x19, .sp=0x84, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x1fbc, .value=0xa8}, {.addr=0x1fbd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1fbe, .a=0x9e, .x=0x26, .y=0x19, .sp=0x84, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1fbc, .value=0xa8}, {.addr=0x1fbd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1fbc, .value=0xa8, .type=IO_READ},
        {.addr=0x1fbd, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0050) {
    const struct CPU_State initial_cpu = {.pc=0x0636, .a=0xf8, .x=0x04, .y=0x7a, .sp=0x65, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0636, .value=0xa8}, {.addr=0x0637, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x0638, .a=0xaf, .x=0x04, .y=0x7a, .sp=0x65, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0636, .value=0xa8}, {.addr=0x0637, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x0636, .value=0xa8, .type=IO_READ},
        {.addr=0x0637, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0051) {
    const struct CPU_State initial_cpu = {.pc=0x5b2d, .a=0x0e, .x=0xf4, .y=0x63, .sp=0x3a, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x5b2d, .value=0xa8}, {.addr=0x5b2e, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x5b2f, .a=0x6a, .x=0xf4, .y=0x63, .sp=0x3a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x5b2d, .value=0xa8}, {.addr=0x5b2e, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x5b2d, .value=0xa8, .type=IO_READ},
        {.addr=0x5b2e, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0052) {
    const struct CPU_State initial_cpu = {.pc=0xe13b, .a=0x33, .x=0x18, .y=0x97, .sp=0x61, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xe13b, .value=0xa8}, {.addr=0xe13c, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xe13d, .a=0xe6, .x=0x18, .y=0x97, .sp=0x61, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe13b, .value=0xa8}, {.addr=0xe13c, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xe13b, .value=0xa8, .type=IO_READ},
        {.addr=0xe13c, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0053) {
    const struct CPU_State initial_cpu = {.pc=0x32e3, .a=0x97, .x=0x29, .y=0xf0, .sp=0x5a, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x32e3, .value=0xa8}, {.addr=0x32e4, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x32e5, .a=0xe7, .x=0x29, .y=0xf0, .sp=0x5a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x32e3, .value=0xa8}, {.addr=0x32e4, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x32e3, .value=0xa8, .type=IO_READ},
        {.addr=0x32e4, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0054) {
    const struct CPU_State initial_cpu = {.pc=0xb7b7, .a=0x76, .x=0x2b, .y=0xcc, .sp=0xac, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb7b7, .value=0xa8}, {.addr=0xb7b8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb7b9, .a=0xf6, .x=0x2b, .y=0xcc, .sp=0xac, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb7b7, .value=0xa8}, {.addr=0xb7b8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb7b7, .value=0xa8, .type=IO_READ},
        {.addr=0xb7b8, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0055) {
    const struct CPU_State initial_cpu = {.pc=0xb16b, .a=0x43, .x=0x34, .y=0xcc, .sp=0xf2, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb16b, .value=0xa8}, {.addr=0xb16c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb16d, .a=0x83, .x=0x34, .y=0xcc, .sp=0xf2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xb16b, .value=0xa8}, {.addr=0xb16c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb16b, .value=0xa8, .type=IO_READ},
        {.addr=0xb16c, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0056) {
    const struct CPU_State initial_cpu = {.pc=0x31a4, .a=0x66, .x=0x45, .y=0xd0, .sp=0x73, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x31a4, .value=0xa8}, {.addr=0x31a5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x31a6, .a=0x5f, .x=0x45, .y=0xd0, .sp=0x73, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x31a4, .value=0xa8}, {.addr=0x31a5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x31a4, .value=0xa8, .type=IO_READ},
        {.addr=0x31a5, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0057) {
    const struct CPU_State initial_cpu = {.pc=0x85dc, .a=0xed, .x=0x4c, .y=0x5b, .sp=0x57, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x85dc, .value=0xa8}, {.addr=0x85dd, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x85de, .a=0xb1, .x=0x4c, .y=0x5b, .sp=0x57, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x85dc, .value=0xa8}, {.addr=0x85dd, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x85dc, .value=0xa8, .type=IO_READ},
        {.addr=0x85dd, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0058) {
    const struct CPU_State initial_cpu = {.pc=0x80f8, .a=0xdf, .x=0xde, .y=0x41, .sp=0x20, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x80f8, .value=0xa8}, {.addr=0x80f9, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x80fa, .a=0xe8, .x=0xde, .y=0x41, .sp=0x20, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x80f8, .value=0xa8}, {.addr=0x80f9, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x80f8, .value=0xa8, .type=IO_READ},
        {.addr=0x80f9, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0059) {
    const struct CPU_State initial_cpu = {.pc=0xaf8a, .a=0x71, .x=0x10, .y=0x82, .sp=0x59, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xaf8a, .value=0xa8}, {.addr=0xaf8b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xaf8c, .a=0xd5, .x=0x10, .y=0x82, .sp=0x59, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xaf8a, .value=0xa8}, {.addr=0xaf8b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xaf8a, .value=0xa8, .type=IO_READ},
        {.addr=0xaf8b, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_005A) {
    const struct CPU_State initial_cpu = {.pc=0x3712, .a=0x0a, .x=0xbc, .y=0x2b, .sp=0x17, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x3712, .value=0xa8}, {.addr=0x3713, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x3714, .a=0x10, .x=0xbc, .y=0x2b, .sp=0x17, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3712, .value=0xa8}, {.addr=0x3713, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x3712, .value=0xa8, .type=IO_READ},
        {.addr=0x3713, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_005B) {
    const struct CPU_State initial_cpu = {.pc=0x390c, .a=0x02, .x=0x81, .y=0xdb, .sp=0xd2, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x390c, .value=0xa8}, {.addr=0x390d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x390e, .a=0x41, .x=0x81, .y=0xdb, .sp=0xd2, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x390c, .value=0xa8}, {.addr=0x390d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x390c, .value=0xa8, .type=IO_READ},
        {.addr=0x390d, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_005C) {
    const struct CPU_State initial_cpu = {.pc=0x8e2f, .a=0x79, .x=0x94, .y=0x41, .sp=0x93, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x8e2f, .value=0xa8}, {.addr=0x8e30, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8e31, .a=0xca, .x=0x94, .y=0x41, .sp=0x93, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x8e2f, .value=0xa8}, {.addr=0x8e30, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8e2f, .value=0xa8, .type=IO_READ},
        {.addr=0x8e30, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_005D) {
    const struct CPU_State initial_cpu = {.pc=0x441e, .a=0xef, .x=0x23, .y=0xed, .sp=0x1c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x441e, .value=0xa8}, {.addr=0x441f, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x4420, .a=0xe5, .x=0x23, .y=0xed, .sp=0x1c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x441e, .value=0xa8}, {.addr=0x441f, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x441e, .value=0xa8, .type=IO_READ},
        {.addr=0x441f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_005E) {
    const struct CPU_State initial_cpu = {.pc=0x7901, .a=0x9a, .x=0x2a, .y=0xb4, .sp=0xa1, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7901, .value=0xa8}, {.addr=0x7902, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x7903, .a=0x77, .x=0x2a, .y=0xb4, .sp=0xa1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7901, .value=0xa8}, {.addr=0x7902, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x7901, .value=0xa8, .type=IO_READ},
        {.addr=0x7902, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_005F) {
    const struct CPU_State initial_cpu = {.pc=0x5eec, .a=0x8a, .x=0x33, .y=0xc5, .sp=0xeb, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x5eec, .value=0xa8}, {.addr=0x5eed, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x5eee, .a=0x69, .x=0x33, .y=0xc5, .sp=0xeb, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5eec, .value=0xa8}, {.addr=0x5eed, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x5eec, .value=0xa8, .type=IO_READ},
        {.addr=0x5eed, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0060) {
    const struct CPU_State initial_cpu = {.pc=0x439b, .a=0xa4, .x=0x1d, .y=0x3b, .sp=0x31, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x439b, .value=0xa8}, {.addr=0x439c, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x439d, .a=0x2c, .x=0x1d, .y=0x3b, .sp=0x31, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x439b, .value=0xa8}, {.addr=0x439c, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x439b, .value=0xa8, .type=IO_READ},
        {.addr=0x439c, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0061) {
    const struct CPU_State initial_cpu = {.pc=0x373e, .a=0x5e, .x=0x78, .y=0x16, .sp=0x4a, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x373e, .value=0xa8}, {.addr=0x373f, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x3740, .a=0xf8, .x=0x78, .y=0x16, .sp=0x4a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x373e, .value=0xa8}, {.addr=0x373f, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x373e, .value=0xa8, .type=IO_READ},
        {.addr=0x373f, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0062) {
    const struct CPU_State initial_cpu = {.pc=0x9e11, .a=0x4d, .x=0x17, .y=0x7c, .sp=0x6e, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x9e11, .value=0xa8}, {.addr=0x9e12, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9e13, .a=0x2f, .x=0x17, .y=0x7c, .sp=0x6e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x9e11, .value=0xa8}, {.addr=0x9e12, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9e11, .value=0xa8, .type=IO_READ},
        {.addr=0x9e12, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0063) {
    const struct CPU_State initial_cpu = {.pc=0x265f, .a=0x0d, .x=0x0d, .y=0xae, .sp=0x2a, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x265f, .value=0xa8}, {.addr=0x2660, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x2661, .a=0x6b, .x=0x0d, .y=0xae, .sp=0x2a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x265f, .value=0xa8}, {.addr=0x2660, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x265f, .value=0xa8, .type=IO_READ},
        {.addr=0x2660, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0064) {
    const struct CPU_State initial_cpu = {.pc=0x2a32, .a=0x3f, .x=0xae, .y=0x09, .sp=0xb6, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x2a32, .value=0xa8}, {.addr=0x2a33, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x2a34, .a=0xf5, .x=0xae, .y=0x09, .sp=0xb6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x2a32, .value=0xa8}, {.addr=0x2a33, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x2a32, .value=0xa8, .type=IO_READ},
        {.addr=0x2a33, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0065) {
    const struct CPU_State initial_cpu = {.pc=0x8dc1, .a=0x4d, .x=0xae, .y=0x7e, .sp=0x89, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x8dc1, .value=0xa8}, {.addr=0x8dc2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8dc3, .a=0xa7, .x=0xae, .y=0x7e, .sp=0x89, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8dc1, .value=0xa8}, {.addr=0x8dc2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8dc1, .value=0xa8, .type=IO_READ},
        {.addr=0x8dc2, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0066) {
    const struct CPU_State initial_cpu = {.pc=0x5f99, .a=0x62, .x=0xd1, .y=0x32, .sp=0x8f, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x5f99, .value=0xa8}, {.addr=0x5f9a, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x5f9b, .a=0x8f, .x=0xd1, .y=0x32, .sp=0x8f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5f99, .value=0xa8}, {.addr=0x5f9a, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x5f99, .value=0xa8, .type=IO_READ},
        {.addr=0x5f9a, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0067) {
    const struct CPU_State initial_cpu = {.pc=0x18bf, .a=0x5b, .x=0x7a, .y=0xe9, .sp=0x59, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x18bf, .value=0xa8}, {.addr=0x18c0, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x18c1, .a=0x42, .x=0x7a, .y=0xe9, .sp=0x59, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x18bf, .value=0xa8}, {.addr=0x18c0, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x18bf, .value=0xa8, .type=IO_READ},
        {.addr=0x18c0, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0068) {
    const struct CPU_State initial_cpu = {.pc=0x94d9, .a=0x7d, .x=0x65, .y=0xe8, .sp=0xf3, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x94d9, .value=0xa8}, {.addr=0x94da, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x94db, .a=0x8a, .x=0x65, .y=0xe8, .sp=0xf3, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x94d9, .value=0xa8}, {.addr=0x94da, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x94d9, .value=0xa8, .type=IO_READ},
        {.addr=0x94da, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0069) {
    const struct CPU_State initial_cpu = {.pc=0x02ea, .a=0x80, .x=0xb2, .y=0x73, .sp=0x05, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x02ea, .value=0xa8}, {.addr=0x02eb, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x02ec, .a=0xfb, .x=0xb2, .y=0x73, .sp=0x05, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x02ea, .value=0xa8}, {.addr=0x02eb, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x02ea, .value=0xa8, .type=IO_READ},
        {.addr=0x02eb, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_006A) {
    const struct CPU_State initial_cpu = {.pc=0x6dab, .a=0x1b, .x=0x97, .y=0xa6, .sp=0x2e, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x6dab, .value=0xa8}, {.addr=0x6dac, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x6dad, .a=0x27, .x=0x97, .y=0xa6, .sp=0x2e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x6dab, .value=0xa8}, {.addr=0x6dac, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x6dab, .value=0xa8, .type=IO_READ},
        {.addr=0x6dac, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_006B) {
    const struct CPU_State initial_cpu = {.pc=0x9a96, .a=0xe4, .x=0xf9, .y=0xfb, .sp=0x75, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x9a96, .value=0xa8}, {.addr=0x9a97, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x9a98, .a=0xd1, .x=0xf9, .y=0xfb, .sp=0x75, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9a96, .value=0xa8}, {.addr=0x9a97, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x9a96, .value=0xa8, .type=IO_READ},
        {.addr=0x9a97, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_006C) {
    const struct CPU_State initial_cpu = {.pc=0xea60, .a=0x90, .x=0x9f, .y=0xbc, .sp=0x8e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xea60, .value=0xa8}, {.addr=0xea61, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xea62, .a=0xef, .x=0x9f, .y=0xbc, .sp=0x8e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xea60, .value=0xa8}, {.addr=0xea61, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xea60, .value=0xa8, .type=IO_READ},
        {.addr=0xea61, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_006D) {
    const struct CPU_State initial_cpu = {.pc=0xa812, .a=0x71, .x=0x2d, .y=0x8f, .sp=0x19, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xa812, .value=0xa8}, {.addr=0xa813, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xa814, .a=0x4a, .x=0x2d, .y=0x8f, .sp=0x19, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa812, .value=0xa8}, {.addr=0xa813, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xa812, .value=0xa8, .type=IO_READ},
        {.addr=0xa813, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_006E) {
    const struct CPU_State initial_cpu = {.pc=0xa451, .a=0x1e, .x=0xaa, .y=0xb5, .sp=0xe8, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xa451, .value=0xa8}, {.addr=0xa452, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xa453, .a=0x4f, .x=0xaa, .y=0xb5, .sp=0xe8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa451, .value=0xa8}, {.addr=0xa452, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xa451, .value=0xa8, .type=IO_READ},
        {.addr=0xa452, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_006F) {
    const struct CPU_State initial_cpu = {.pc=0xb5e3, .a=0xe9, .x=0x02, .y=0xdc, .sp=0x0d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e3, .value=0xa8}, {.addr=0xb5e4, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xb5e5, .a=0x12, .x=0x02, .y=0xdc, .sp=0x0d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb5e3, .value=0xa8}, {.addr=0xb5e4, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xb5e3, .value=0xa8, .type=IO_READ},
        {.addr=0xb5e4, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0070) {
    const struct CPU_State initial_cpu = {.pc=0x7652, .a=0xd6, .x=0x91, .y=0xa8, .sp=0x1c, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x7652, .value=0xa8}, {.addr=0x7653, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7654, .a=0x10, .x=0x91, .y=0xa8, .sp=0x1c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x7652, .value=0xa8}, {.addr=0x7653, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7652, .value=0xa8, .type=IO_READ},
        {.addr=0x7653, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0071) {
    const struct CPU_State initial_cpu = {.pc=0x1739, .a=0x25, .x=0x11, .y=0x47, .sp=0x08, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x1739, .value=0xa8}, {.addr=0x173a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x173b, .a=0xc5, .x=0x11, .y=0x47, .sp=0x08, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x1739, .value=0xa8}, {.addr=0x173a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1739, .value=0xa8, .type=IO_READ},
        {.addr=0x173a, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0072) {
    const struct CPU_State initial_cpu = {.pc=0x6709, .a=0xd8, .x=0x71, .y=0x10, .sp=0x04, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x6709, .value=0xa8}, {.addr=0x670a, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x670b, .a=0xf5, .x=0x71, .y=0x10, .sp=0x04, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6709, .value=0xa8}, {.addr=0x670a, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x6709, .value=0xa8, .type=IO_READ},
        {.addr=0x670a, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0073) {
    const struct CPU_State initial_cpu = {.pc=0xf857, .a=0xde, .x=0x71, .y=0xb2, .sp=0x96, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xf857, .value=0xa8}, {.addr=0xf858, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xf859, .a=0xec, .x=0x71, .y=0xb2, .sp=0x96, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf857, .value=0xa8}, {.addr=0xf858, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xf857, .value=0xa8, .type=IO_READ},
        {.addr=0xf858, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0074) {
    const struct CPU_State initial_cpu = {.pc=0x993c, .a=0x1e, .x=0x4d, .y=0xc9, .sp=0x0e, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x993c, .value=0xa8}, {.addr=0x993d, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x993e, .a=0xea, .x=0x4d, .y=0xc9, .sp=0x0e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x993c, .value=0xa8}, {.addr=0x993d, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x993c, .value=0xa8, .type=IO_READ},
        {.addr=0x993d, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0075) {
    const struct CPU_State initial_cpu = {.pc=0x3f01, .a=0xec, .x=0x90, .y=0x13, .sp=0x6a, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x3f01, .value=0xa8}, {.addr=0x3f02, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x3f03, .a=0x9c, .x=0x90, .y=0x13, .sp=0x6a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x3f01, .value=0xa8}, {.addr=0x3f02, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x3f01, .value=0xa8, .type=IO_READ},
        {.addr=0x3f02, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0076) {
    const struct CPU_State initial_cpu = {.pc=0x97f5, .a=0x65, .x=0xb9, .y=0xad, .sp=0x15, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x97f5, .value=0xa8}, {.addr=0x97f6, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x97f7, .a=0x2c, .x=0xb9, .y=0xad, .sp=0x15, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x97f5, .value=0xa8}, {.addr=0x97f6, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x97f5, .value=0xa8, .type=IO_READ},
        {.addr=0x97f6, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0077) {
    const struct CPU_State initial_cpu = {.pc=0x02c5, .a=0x4a, .x=0x5e, .y=0xac, .sp=0x0b, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x02c5, .value=0xa8}, {.addr=0x02c6, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x02c7, .a=0x28, .x=0x5e, .y=0xac, .sp=0x0b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x02c5, .value=0xa8}, {.addr=0x02c6, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x02c5, .value=0xa8, .type=IO_READ},
        {.addr=0x02c6, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0078) {
    const struct CPU_State initial_cpu = {.pc=0xecba, .a=0x87, .x=0x16, .y=0xb7, .sp=0xd9, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xecba, .value=0xa8}, {.addr=0xecbb, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xecbc, .a=0x59, .x=0x16, .y=0xb7, .sp=0xd9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xecba, .value=0xa8}, {.addr=0xecbb, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xecba, .value=0xa8, .type=IO_READ},
        {.addr=0xecbb, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0079) {
    const struct CPU_State initial_cpu = {.pc=0x81aa, .a=0xf3, .x=0x64, .y=0x2b, .sp=0xff, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x81aa, .value=0xa8}, {.addr=0x81ab, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x81ac, .a=0xfc, .x=0x64, .y=0x2b, .sp=0xff, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x81aa, .value=0xa8}, {.addr=0x81ab, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x81aa, .value=0xa8, .type=IO_READ},
        {.addr=0x81ab, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_007A) {
    const struct CPU_State initial_cpu = {.pc=0xef07, .a=0xa2, .x=0x7a, .y=0x6e, .sp=0x02, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xef07, .value=0xa8}, {.addr=0xef08, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xef09, .a=0x25, .x=0x7a, .y=0x6e, .sp=0x02, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xef07, .value=0xa8}, {.addr=0xef08, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xef07, .value=0xa8, .type=IO_READ},
        {.addr=0xef08, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_007B) {
    const struct CPU_State initial_cpu = {.pc=0x543d, .a=0xac, .x=0xda, .y=0xe5, .sp=0xd8, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x543d, .value=0xa8}, {.addr=0x543e, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x543f, .a=0x85, .x=0xda, .y=0xe5, .sp=0xd8, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x543d, .value=0xa8}, {.addr=0x543e, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x543d, .value=0xa8, .type=IO_READ},
        {.addr=0x543e, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_007C) {
    const struct CPU_State initial_cpu = {.pc=0xbcd3, .a=0xb5, .x=0x3d, .y=0x6e, .sp=0x1f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xbcd3, .value=0xa8}, {.addr=0xbcd4, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xbcd5, .a=0xe0, .x=0x3d, .y=0x6e, .sp=0x1f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xbcd3, .value=0xa8}, {.addr=0xbcd4, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xbcd3, .value=0xa8, .type=IO_READ},
        {.addr=0xbcd4, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_007D) {
    const struct CPU_State initial_cpu = {.pc=0x280f, .a=0x88, .x=0x70, .y=0x7b, .sp=0x77, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x280f, .value=0xa8}, {.addr=0x2810, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2811, .a=0x9b, .x=0x70, .y=0x7b, .sp=0x77, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x280f, .value=0xa8}, {.addr=0x2810, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x280f, .value=0xa8, .type=IO_READ},
        {.addr=0x2810, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_007E) {
    const struct CPU_State initial_cpu = {.pc=0x339e, .a=0x30, .x=0xb3, .y=0x4b, .sp=0x20, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x339e, .value=0xa8}, {.addr=0x339f, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x33a0, .a=0x69, .x=0xb3, .y=0x4b, .sp=0x20, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x339e, .value=0xa8}, {.addr=0x339f, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x339e, .value=0xa8, .type=IO_READ},
        {.addr=0x339f, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_007F) {
    const struct CPU_State initial_cpu = {.pc=0xd47f, .a=0x53, .x=0x13, .y=0x89, .sp=0xe7, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xd47f, .value=0xa8}, {.addr=0xd480, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xd481, .a=0xa6, .x=0x13, .y=0x89, .sp=0xe7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd47f, .value=0xa8}, {.addr=0xd480, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xd47f, .value=0xa8, .type=IO_READ},
        {.addr=0xd480, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0080) {
    const struct CPU_State initial_cpu = {.pc=0x3f2f, .a=0x8f, .x=0x3f, .y=0x7e, .sp=0xd4, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x3f2f, .value=0xa8}, {.addr=0x3f30, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x3f31, .a=0xe2, .x=0x3f, .y=0x7e, .sp=0xd4, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3f2f, .value=0xa8}, {.addr=0x3f30, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x3f2f, .value=0xa8, .type=IO_READ},
        {.addr=0x3f30, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0081) {
    const struct CPU_State initial_cpu = {.pc=0xff4b, .a=0xa1, .x=0x21, .y=0xb3, .sp=0x53, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xff4b, .value=0xa8}, {.addr=0xff4c, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xff4d, .a=0x1c, .x=0x21, .y=0xb3, .sp=0x53, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xff4b, .value=0xa8}, {.addr=0xff4c, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xff4b, .value=0xa8, .type=IO_READ},
        {.addr=0xff4c, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0082) {
    const struct CPU_State initial_cpu = {.pc=0x6ea5, .a=0x26, .x=0xc8, .y=0xf5, .sp=0x83, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x6ea5, .value=0xa8}, {.addr=0x6ea6, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x6ea7, .a=0xef, .x=0xc8, .y=0xf5, .sp=0x83, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6ea5, .value=0xa8}, {.addr=0x6ea6, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x6ea5, .value=0xa8, .type=IO_READ},
        {.addr=0x6ea6, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0083) {
    const struct CPU_State initial_cpu = {.pc=0xac09, .a=0x88, .x=0x07, .y=0xc9, .sp=0xce, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xac09, .value=0xa8}, {.addr=0xac0a, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xac0b, .a=0xed, .x=0x07, .y=0xc9, .sp=0xce, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xac09, .value=0xa8}, {.addr=0xac0a, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xac09, .value=0xa8, .type=IO_READ},
        {.addr=0xac0a, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0084) {
    const struct CPU_State initial_cpu = {.pc=0x89c9, .a=0x83, .x=0x20, .y=0x18, .sp=0x0a, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x89c9, .value=0xa8}, {.addr=0x89ca, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x89cb, .a=0x38, .x=0x20, .y=0x18, .sp=0x0a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x89c9, .value=0xa8}, {.addr=0x89ca, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x89c9, .value=0xa8, .type=IO_READ},
        {.addr=0x89ca, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0085) {
    const struct CPU_State initial_cpu = {.pc=0x61a5, .a=0xd8, .x=0x62, .y=0xd6, .sp=0xfd, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x61a5, .value=0xa8}, {.addr=0x61a6, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x61a7, .a=0xc0, .x=0x62, .y=0xd6, .sp=0xfd, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x61a5, .value=0xa8}, {.addr=0x61a6, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x61a5, .value=0xa8, .type=IO_READ},
        {.addr=0x61a6, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0086) {
    const struct CPU_State initial_cpu = {.pc=0xd464, .a=0xba, .x=0x1e, .y=0xb5, .sp=0xed, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xd464, .value=0xa8}, {.addr=0xd465, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xd466, .a=0x3f, .x=0x1e, .y=0xb5, .sp=0xed, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd464, .value=0xa8}, {.addr=0xd465, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xd464, .value=0xa8, .type=IO_READ},
        {.addr=0xd465, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0087) {
    const struct CPU_State initial_cpu = {.pc=0xb0b2, .a=0xb1, .x=0xc1, .y=0x92, .sp=0x25, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xb0b2, .value=0xa8}, {.addr=0xb0b3, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xb0b4, .a=0x5b, .x=0xc1, .y=0x92, .sp=0x25, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb0b2, .value=0xa8}, {.addr=0xb0b3, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xb0b2, .value=0xa8, .type=IO_READ},
        {.addr=0xb0b3, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0088) {
    const struct CPU_State initial_cpu = {.pc=0xaab4, .a=0xd2, .x=0x05, .y=0x67, .sp=0x7c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xaab4, .value=0xa8}, {.addr=0xaab5, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xaab6, .a=0x27, .x=0x05, .y=0x67, .sp=0x7c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xaab4, .value=0xa8}, {.addr=0xaab5, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xaab4, .value=0xa8, .type=IO_READ},
        {.addr=0xaab5, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0089) {
    const struct CPU_State initial_cpu = {.pc=0x9864, .a=0xfc, .x=0x52, .y=0xb3, .sp=0x7f, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x9864, .value=0xa8}, {.addr=0x9865, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x9866, .a=0x6b, .x=0x52, .y=0xb3, .sp=0x7f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9864, .value=0xa8}, {.addr=0x9865, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x9864, .value=0xa8, .type=IO_READ},
        {.addr=0x9865, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_008A) {
    const struct CPU_State initial_cpu = {.pc=0x6fb8, .a=0x9d, .x=0x89, .y=0x9b, .sp=0x34, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb8, .value=0xa8}, {.addr=0x6fb9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6fba, .a=0x97, .x=0x89, .y=0x9b, .sp=0x34, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x6fb8, .value=0xa8}, {.addr=0x6fb9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6fb8, .value=0xa8, .type=IO_READ},
        {.addr=0x6fb9, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_008B) {
    const struct CPU_State initial_cpu = {.pc=0x515e, .a=0xf5, .x=0xfa, .y=0xfc, .sp=0x31, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x515e, .value=0xa8}, {.addr=0x515f, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x5160, .a=0x4a, .x=0xfa, .y=0xfc, .sp=0x31, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x515e, .value=0xa8}, {.addr=0x515f, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x515e, .value=0xa8, .type=IO_READ},
        {.addr=0x515f, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_008C) {
    const struct CPU_State initial_cpu = {.pc=0x3cf8, .a=0xdb, .x=0x35, .y=0xe2, .sp=0x85, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x3cf8, .value=0xa8}, {.addr=0x3cf9, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x3cfa, .a=0x39, .x=0x35, .y=0xe2, .sp=0x85, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3cf8, .value=0xa8}, {.addr=0x3cf9, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x3cf8, .value=0xa8, .type=IO_READ},
        {.addr=0x3cf9, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_008D) {
    const struct CPU_State initial_cpu = {.pc=0x20f4, .a=0x48, .x=0xb3, .y=0x7c, .sp=0xae, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x20f4, .value=0xa8}, {.addr=0x20f5, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x20f6, .a=0x85, .x=0xb3, .y=0x7c, .sp=0xae, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x20f4, .value=0xa8}, {.addr=0x20f5, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x20f4, .value=0xa8, .type=IO_READ},
        {.addr=0x20f5, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_008E) {
    const struct CPU_State initial_cpu = {.pc=0xbf4e, .a=0x98, .x=0xc1, .y=0x42, .sp=0x4e, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xbf4e, .value=0xa8}, {.addr=0xbf4f, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xbf50, .a=0xa2, .x=0xc1, .y=0x42, .sp=0x4e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xbf4e, .value=0xa8}, {.addr=0xbf4f, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xbf4e, .value=0xa8, .type=IO_READ},
        {.addr=0xbf4f, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_008F) {
    const struct CPU_State initial_cpu = {.pc=0xdef7, .a=0x28, .x=0x31, .y=0xd7, .sp=0x99, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xdef7, .value=0xa8}, {.addr=0xdef8, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xdef9, .a=0x23, .x=0x31, .y=0xd7, .sp=0x99, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xdef7, .value=0xa8}, {.addr=0xdef8, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xdef7, .value=0xa8, .type=IO_READ},
        {.addr=0xdef8, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0090) {
    const struct CPU_State initial_cpu = {.pc=0x0b64, .a=0x96, .x=0xf4, .y=0x85, .sp=0xa2, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0b64, .value=0xa8}, {.addr=0x0b65, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0b66, .a=0xc8, .x=0xf4, .y=0x85, .sp=0xa2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0b64, .value=0xa8}, {.addr=0x0b65, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0b64, .value=0xa8, .type=IO_READ},
        {.addr=0x0b65, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0091) {
    const struct CPU_State initial_cpu = {.pc=0xd0dd, .a=0xf5, .x=0xd2, .y=0x59, .sp=0xfd, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xd0dd, .value=0xa8}, {.addr=0xd0de, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xd0df, .a=0xab, .x=0xd2, .y=0x59, .sp=0xfd, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xd0dd, .value=0xa8}, {.addr=0xd0de, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xd0dd, .value=0xa8, .type=IO_READ},
        {.addr=0xd0de, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0092) {
    const struct CPU_State initial_cpu = {.pc=0x5654, .a=0x79, .x=0x70, .y=0x51, .sp=0xb2, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x5654, .value=0xa8}, {.addr=0x5655, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x5656, .a=0x94, .x=0x70, .y=0x51, .sp=0xb2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5654, .value=0xa8}, {.addr=0x5655, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x5654, .value=0xa8, .type=IO_READ},
        {.addr=0x5655, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0093) {
    const struct CPU_State initial_cpu = {.pc=0x66ab, .a=0x7a, .x=0xb3, .y=0xe8, .sp=0xec, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x66ab, .value=0xa8}, {.addr=0x66ac, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x66ad, .a=0x37, .x=0xb3, .y=0xe8, .sp=0xec, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x66ab, .value=0xa8}, {.addr=0x66ac, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x66ab, .value=0xa8, .type=IO_READ},
        {.addr=0x66ac, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0094) {
    const struct CPU_State initial_cpu = {.pc=0x776b, .a=0x7d, .x=0x8c, .y=0xfc, .sp=0x32, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x776b, .value=0xa8}, {.addr=0x776c, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x776d, .a=0xfb, .x=0x8c, .y=0xfc, .sp=0x32, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x776b, .value=0xa8}, {.addr=0x776c, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x776b, .value=0xa8, .type=IO_READ},
        {.addr=0x776c, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0095) {
    const struct CPU_State initial_cpu = {.pc=0x1f43, .a=0x8d, .x=0x74, .y=0x21, .sp=0x5e, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x1f43, .value=0xa8}, {.addr=0x1f44, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x1f45, .a=0xf6, .x=0x74, .y=0x21, .sp=0x5e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x1f43, .value=0xa8}, {.addr=0x1f44, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x1f43, .value=0xa8, .type=IO_READ},
        {.addr=0x1f44, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0096) {
    const struct CPU_State initial_cpu = {.pc=0x6e23, .a=0xef, .x=0x94, .y=0x03, .sp=0xb4, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x6e23, .value=0xa8}, {.addr=0x6e24, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x6e25, .a=0x09, .x=0x94, .y=0x03, .sp=0xb4, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x6e23, .value=0xa8}, {.addr=0x6e24, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x6e23, .value=0xa8, .type=IO_READ},
        {.addr=0x6e24, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0097) {
    const struct CPU_State initial_cpu = {.pc=0x4088, .a=0xf7, .x=0x60, .y=0x3c, .sp=0xc7, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x4088, .value=0xa8}, {.addr=0x4089, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x408a, .a=0x39, .x=0x60, .y=0x3c, .sp=0xc7, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x4088, .value=0xa8}, {.addr=0x4089, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4088, .value=0xa8, .type=IO_READ},
        {.addr=0x4089, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0098) {
    const struct CPU_State initial_cpu = {.pc=0x87cd, .a=0x82, .x=0xd9, .y=0x92, .sp=0xcd, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x87cd, .value=0xa8}, {.addr=0x87ce, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x87cf, .a=0x1e, .x=0xd9, .y=0x92, .sp=0xcd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x87cd, .value=0xa8}, {.addr=0x87ce, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x87cd, .value=0xa8, .type=IO_READ},
        {.addr=0x87ce, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0099) {
    const struct CPU_State initial_cpu = {.pc=0xe711, .a=0xa7, .x=0xc5, .y=0xd6, .sp=0xed, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xe711, .value=0xa8}, {.addr=0xe712, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xe713, .a=0x9d, .x=0xc5, .y=0xd6, .sp=0xed, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xe711, .value=0xa8}, {.addr=0xe712, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xe711, .value=0xa8, .type=IO_READ},
        {.addr=0xe712, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_009A) {
    const struct CPU_State initial_cpu = {.pc=0x5add, .a=0xe7, .x=0xf0, .y=0x08, .sp=0xb7, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x5add, .value=0xa8}, {.addr=0x5ade, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x5adf, .a=0x5c, .x=0xf0, .y=0x08, .sp=0xb7, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5add, .value=0xa8}, {.addr=0x5ade, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x5add, .value=0xa8, .type=IO_READ},
        {.addr=0x5ade, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_009B) {
    const struct CPU_State initial_cpu = {.pc=0x7bd7, .a=0x5b, .x=0xf3, .y=0x69, .sp=0x03, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x7bd7, .value=0xa8}, {.addr=0x7bd8, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x7bd9, .a=0xb7, .x=0xf3, .y=0x69, .sp=0x03, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x7bd7, .value=0xa8}, {.addr=0x7bd8, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x7bd7, .value=0xa8, .type=IO_READ},
        {.addr=0x7bd8, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_009C) {
    const struct CPU_State initial_cpu = {.pc=0x98ee, .a=0x20, .x=0xd8, .y=0xae, .sp=0xd1, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x98ee, .value=0xa8}, {.addr=0x98ef, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x98f0, .a=0x76, .x=0xd8, .y=0xae, .sp=0xd1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x98ee, .value=0xa8}, {.addr=0x98ef, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x98ee, .value=0xa8, .type=IO_READ},
        {.addr=0x98ef, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_009D) {
    const struct CPU_State initial_cpu = {.pc=0x5ca1, .a=0x36, .x=0x8f, .y=0x10, .sp=0x5d, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x5ca1, .value=0xa8}, {.addr=0x5ca2, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x5ca3, .a=0xad, .x=0x8f, .y=0x10, .sp=0x5d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x5ca1, .value=0xa8}, {.addr=0x5ca2, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x5ca1, .value=0xa8, .type=IO_READ},
        {.addr=0x5ca2, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_009E) {
    const struct CPU_State initial_cpu = {.pc=0x03a2, .a=0xf8, .x=0xeb, .y=0xa5, .sp=0x43, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x03a2, .value=0xa8}, {.addr=0x03a3, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x03a4, .a=0x0c, .x=0xeb, .y=0xa5, .sp=0x43, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x03a2, .value=0xa8}, {.addr=0x03a3, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x03a2, .value=0xa8, .type=IO_READ},
        {.addr=0x03a3, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_009F) {
    const struct CPU_State initial_cpu = {.pc=0x00ea, .a=0xc1, .x=0x22, .y=0x68, .sp=0x70, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0xa8}, {.addr=0x00eb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x00ec, .a=0x5b, .x=0x22, .y=0x68, .sp=0x70, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0xa8}, {.addr=0x00eb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x00ea, .value=0xa8, .type=IO_READ},
        {.addr=0x00eb, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xf2ef, .a=0x9d, .x=0x92, .y=0xab, .sp=0x54, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf2ef, .value=0xa8}, {.addr=0xf2f0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf2f1, .a=0xa0, .x=0x92, .y=0xab, .sp=0x54, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xf2ef, .value=0xa8}, {.addr=0xf2f0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf2ef, .value=0xa8, .type=IO_READ},
        {.addr=0xf2f0, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x3c21, .a=0x81, .x=0x6a, .y=0xdc, .sp=0x6e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x3c21, .value=0xa8}, {.addr=0x3c22, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x3c23, .a=0xcf, .x=0x6a, .y=0xdc, .sp=0x6e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3c21, .value=0xa8}, {.addr=0x3c22, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x3c21, .value=0xa8, .type=IO_READ},
        {.addr=0x3c22, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x9416, .a=0x10, .x=0x6f, .y=0x10, .sp=0xa2, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9416, .value=0xa8}, {.addr=0x9417, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9418, .a=0xd4, .x=0x6f, .y=0x10, .sp=0xa2, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9416, .value=0xa8}, {.addr=0x9417, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9416, .value=0xa8, .type=IO_READ},
        {.addr=0x9417, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x15d4, .a=0x30, .x=0x71, .y=0xdf, .sp=0xe4, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x15d4, .value=0xa8}, {.addr=0x15d5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x15d6, .a=0x80, .x=0x71, .y=0xdf, .sp=0xe4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x15d4, .value=0xa8}, {.addr=0x15d5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x15d4, .value=0xa8, .type=IO_READ},
        {.addr=0x15d5, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x79d2, .a=0x7a, .x=0x8e, .y=0xd4, .sp=0x6b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x79d2, .value=0xa8}, {.addr=0x79d3, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x79d4, .a=0x3d, .x=0x8e, .y=0xd4, .sp=0x6b, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x79d2, .value=0xa8}, {.addr=0x79d3, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x79d2, .value=0xa8, .type=IO_READ},
        {.addr=0x79d3, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xa154, .a=0xe6, .x=0xdb, .y=0x12, .sp=0x64, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xa154, .value=0xa8}, {.addr=0xa155, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xa156, .a=0x63, .x=0xdb, .y=0x12, .sp=0x64, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa154, .value=0xa8}, {.addr=0xa155, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xa154, .value=0xa8, .type=IO_READ},
        {.addr=0xa155, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xc397, .a=0x32, .x=0x7b, .y=0x3c, .sp=0x9d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xc397, .value=0xa8}, {.addr=0xc398, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xc399, .a=0x09, .x=0x7b, .y=0x3c, .sp=0x9d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc397, .value=0xa8}, {.addr=0xc398, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xc397, .value=0xa8, .type=IO_READ},
        {.addr=0xc398, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xc872, .a=0x8a, .x=0x38, .y=0x85, .sp=0x71, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xc872, .value=0xa8}, {.addr=0xc873, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xc874, .a=0x1d, .x=0x38, .y=0x85, .sp=0x71, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xc872, .value=0xa8}, {.addr=0xc873, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xc872, .value=0xa8, .type=IO_READ},
        {.addr=0xc873, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xebf6, .a=0x5e, .x=0x1d, .y=0x01, .sp=0xe4, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xebf6, .value=0xa8}, {.addr=0xebf7, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xebf8, .a=0x04, .x=0x1d, .y=0x01, .sp=0xe4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xebf6, .value=0xa8}, {.addr=0xebf7, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xebf6, .value=0xa8, .type=IO_READ},
        {.addr=0xebf7, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xf9ca, .a=0x04, .x=0xb1, .y=0xb4, .sp=0xc3, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ca, .value=0xa8}, {.addr=0xf9cb, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xf9cc, .a=0x1f, .x=0xb1, .y=0xb4, .sp=0xc3, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf9ca, .value=0xa8}, {.addr=0xf9cb, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xf9ca, .value=0xa8, .type=IO_READ},
        {.addr=0xf9cb, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x732d, .a=0x04, .x=0xc3, .y=0x46, .sp=0xd5, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x732d, .value=0xa8}, {.addr=0x732e, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x732f, .a=0x78, .x=0xc3, .y=0x46, .sp=0xd5, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x732d, .value=0xa8}, {.addr=0x732e, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x732d, .value=0xa8, .type=IO_READ},
        {.addr=0x732e, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x0825, .a=0x6e, .x=0x70, .y=0xbe, .sp=0x6a, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0825, .value=0xa8}, {.addr=0x0826, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x0827, .a=0xc7, .x=0x70, .y=0xbe, .sp=0x6a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0825, .value=0xa8}, {.addr=0x0826, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x0825, .value=0xa8, .type=IO_READ},
        {.addr=0x0826, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xbb02, .a=0xe6, .x=0xdc, .y=0x99, .sp=0xc5, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xbb02, .value=0xa8}, {.addr=0xbb03, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xbb04, .a=0x35, .x=0xdc, .y=0x99, .sp=0xc5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xbb02, .value=0xa8}, {.addr=0xbb03, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xbb02, .value=0xa8, .type=IO_READ},
        {.addr=0xbb03, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xb973, .a=0xeb, .x=0x69, .y=0xed, .sp=0x49, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xb973, .value=0xa8}, {.addr=0xb974, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb975, .a=0xab, .x=0x69, .y=0xed, .sp=0x49, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb973, .value=0xa8}, {.addr=0xb974, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb973, .value=0xa8, .type=IO_READ},
        {.addr=0xb974, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xcf33, .a=0x50, .x=0xc8, .y=0x81, .sp=0xeb, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xcf33, .value=0xa8}, {.addr=0xcf34, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xcf35, .a=0xd4, .x=0xc8, .y=0x81, .sp=0xeb, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xcf33, .value=0xa8}, {.addr=0xcf34, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xcf33, .value=0xa8, .type=IO_READ},
        {.addr=0xcf34, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x0440, .a=0x5b, .x=0x7c, .y=0x51, .sp=0xa7, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0440, .value=0xa8}, {.addr=0x0441, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x0442, .a=0xc4, .x=0x7c, .y=0x51, .sp=0xa7, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0440, .value=0xa8}, {.addr=0x0441, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x0440, .value=0xa8, .type=IO_READ},
        {.addr=0x0441, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x40b9, .a=0x40, .x=0x9d, .y=0x2b, .sp=0x9b, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x40b9, .value=0xa8}, {.addr=0x40ba, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x40bb, .a=0x62, .x=0x9d, .y=0x2b, .sp=0x9b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x40b9, .value=0xa8}, {.addr=0x40ba, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x40b9, .value=0xa8, .type=IO_READ},
        {.addr=0x40ba, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x0dee, .a=0x6d, .x=0xff, .y=0x9a, .sp=0xa4, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0dee, .value=0xa8}, {.addr=0x0def, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0df0, .a=0xf0, .x=0xff, .y=0x9a, .sp=0xa4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0dee, .value=0xa8}, {.addr=0x0def, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0dee, .value=0xa8, .type=IO_READ},
        {.addr=0x0def, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x2eef, .a=0xd4, .x=0x7a, .y=0x2b, .sp=0x7e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x2eef, .value=0xa8}, {.addr=0x2ef0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2ef1, .a=0x06, .x=0x7a, .y=0x2b, .sp=0x7e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2eef, .value=0xa8}, {.addr=0x2ef0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2eef, .value=0xa8, .type=IO_READ},
        {.addr=0x2ef0, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xec60, .a=0x70, .x=0x90, .y=0x2d, .sp=0xeb, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xec60, .value=0xa8}, {.addr=0xec61, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xec62, .a=0x3f, .x=0x90, .y=0x2d, .sp=0xeb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xec60, .value=0xa8}, {.addr=0xec61, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xec60, .value=0xa8, .type=IO_READ},
        {.addr=0xec61, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xe491, .a=0x20, .x=0x46, .y=0xd2, .sp=0x1d, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xe491, .value=0xa8}, {.addr=0xe492, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xe493, .a=0x19, .x=0x46, .y=0xd2, .sp=0x1d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe491, .value=0xa8}, {.addr=0xe492, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xe491, .value=0xa8, .type=IO_READ},
        {.addr=0xe492, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x340f, .a=0xd1, .x=0x92, .y=0x3e, .sp=0xa7, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x340f, .value=0xa8}, {.addr=0x3410, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3411, .a=0x35, .x=0x92, .y=0x3e, .sp=0xa7, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x340f, .value=0xa8}, {.addr=0x3410, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x340f, .value=0xa8, .type=IO_READ},
        {.addr=0x3410, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x0bba, .a=0xed, .x=0x0a, .y=0x58, .sp=0xcf, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0bba, .value=0xa8}, {.addr=0x0bbb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0bbc, .a=0x0e, .x=0x0a, .y=0x58, .sp=0xcf, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0bba, .value=0xa8}, {.addr=0x0bbb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0bba, .value=0xa8, .type=IO_READ},
        {.addr=0x0bbb, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xab4a, .a=0x99, .x=0x9e, .y=0xac, .sp=0x54, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xab4a, .value=0xa8}, {.addr=0xab4b, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xab4c, .a=0x33, .x=0x9e, .y=0xac, .sp=0x54, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xab4a, .value=0xa8}, {.addr=0xab4b, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xab4a, .value=0xa8, .type=IO_READ},
        {.addr=0xab4b, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x56f4, .a=0x3a, .x=0x0b, .y=0x6b, .sp=0xd7, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x56f4, .value=0xa8}, {.addr=0x56f5, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x56f6, .a=0x78, .x=0x0b, .y=0x6b, .sp=0xd7, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x56f4, .value=0xa8}, {.addr=0x56f5, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x56f4, .value=0xa8, .type=IO_READ},
        {.addr=0x56f5, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x6f11, .a=0x1c, .x=0x41, .y=0xc3, .sp=0x35, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6f11, .value=0xa8}, {.addr=0x6f12, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x6f13, .a=0x42, .x=0x41, .y=0xc3, .sp=0x35, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x6f11, .value=0xa8}, {.addr=0x6f12, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x6f11, .value=0xa8, .type=IO_READ},
        {.addr=0x6f12, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x5d27, .a=0xc9, .x=0x06, .y=0x80, .sp=0xe0, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x5d27, .value=0xa8}, {.addr=0x5d28, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x5d29, .a=0x9e, .x=0x06, .y=0x80, .sp=0xe0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5d27, .value=0xa8}, {.addr=0x5d28, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x5d27, .value=0xa8, .type=IO_READ},
        {.addr=0x5d28, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x9ba6, .a=0x59, .x=0xc9, .y=0xc5, .sp=0x49, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x9ba6, .value=0xa8}, {.addr=0x9ba7, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x9ba8, .a=0x58, .x=0xc9, .y=0xc5, .sp=0x49, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x9ba6, .value=0xa8}, {.addr=0x9ba7, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x9ba6, .value=0xa8, .type=IO_READ},
        {.addr=0x9ba7, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x7f15, .a=0x78, .x=0x70, .y=0x34, .sp=0xf5, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7f15, .value=0xa8}, {.addr=0x7f16, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x7f17, .a=0xd0, .x=0x70, .y=0x34, .sp=0xf5, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7f15, .value=0xa8}, {.addr=0x7f16, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x7f15, .value=0xa8, .type=IO_READ},
        {.addr=0x7f16, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x58a7, .a=0xed, .x=0x01, .y=0xaa, .sp=0x97, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x58a7, .value=0xa8}, {.addr=0x58a8, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x58a9, .a=0x6e, .x=0x01, .y=0xaa, .sp=0x97, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x58a7, .value=0xa8}, {.addr=0x58a8, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x58a7, .value=0xa8, .type=IO_READ},
        {.addr=0x58a8, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xd201, .a=0xbd, .x=0x9c, .y=0xac, .sp=0xa1, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xd201, .value=0xa8}, {.addr=0xd202, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xd203, .a=0x99, .x=0x9c, .y=0xac, .sp=0xa1, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xd201, .value=0xa8}, {.addr=0xd202, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xd201, .value=0xa8, .type=IO_READ},
        {.addr=0xd202, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xb919, .a=0xa5, .x=0x71, .y=0xc2, .sp=0x84, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xb919, .value=0xa8}, {.addr=0xb91a, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xb91b, .a=0x2a, .x=0x71, .y=0xc2, .sp=0x84, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb919, .value=0xa8}, {.addr=0xb91a, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xb919, .value=0xa8, .type=IO_READ},
        {.addr=0xb91a, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x86c1, .a=0x21, .x=0xef, .y=0x10, .sp=0x2d, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x86c1, .value=0xa8}, {.addr=0x86c2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x86c3, .a=0x24, .x=0xef, .y=0x10, .sp=0x2d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x86c1, .value=0xa8}, {.addr=0x86c2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x86c1, .value=0xa8, .type=IO_READ},
        {.addr=0x86c2, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xaa5c, .a=0x7d, .x=0x90, .y=0x8f, .sp=0xfb, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xaa5c, .value=0xa8}, {.addr=0xaa5d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xaa5e, .a=0x2f, .x=0x90, .y=0x8f, .sp=0xfb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xaa5c, .value=0xa8}, {.addr=0xaa5d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xaa5c, .value=0xa8, .type=IO_READ},
        {.addr=0xaa5d, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x82e2, .a=0x4e, .x=0xc5, .y=0xe4, .sp=0xd4, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x82e2, .value=0xa8}, {.addr=0x82e3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x82e4, .a=0x48, .x=0xc5, .y=0xe4, .sp=0xd4, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x82e2, .value=0xa8}, {.addr=0x82e3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x82e2, .value=0xa8, .type=IO_READ},
        {.addr=0x82e3, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x5b9f, .a=0x01, .x=0xf1, .y=0x43, .sp=0x01, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x5b9f, .value=0xa8}, {.addr=0x5ba0, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x5ba1, .a=0xb5, .x=0xf1, .y=0x43, .sp=0x01, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5b9f, .value=0xa8}, {.addr=0x5ba0, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x5b9f, .value=0xa8, .type=IO_READ},
        {.addr=0x5ba0, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x44ad, .a=0x8b, .x=0xa6, .y=0x56, .sp=0xfa, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x44ad, .value=0xa8}, {.addr=0x44ae, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x44af, .a=0x28, .x=0xa6, .y=0x56, .sp=0xfa, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x44ad, .value=0xa8}, {.addr=0x44ae, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x44ad, .value=0xa8, .type=IO_READ},
        {.addr=0x44ae, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x3ea6, .a=0x7d, .x=0xb4, .y=0x1f, .sp=0x36, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x3ea6, .value=0xa8}, {.addr=0x3ea7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3ea8, .a=0x1f, .x=0xb4, .y=0x1f, .sp=0x36, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3ea6, .value=0xa8}, {.addr=0x3ea7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3ea6, .value=0xa8, .type=IO_READ},
        {.addr=0x3ea7, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x8395, .a=0xa2, .x=0xb8, .y=0x8b, .sp=0xbd, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x8395, .value=0xa8}, {.addr=0x8396, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x8397, .a=0xe0, .x=0xb8, .y=0x8b, .sp=0xbd, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8395, .value=0xa8}, {.addr=0x8396, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x8395, .value=0xa8, .type=IO_READ},
        {.addr=0x8396, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xb0c2, .a=0xad, .x=0x02, .y=0xef, .sp=0xf4, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c2, .value=0xa8}, {.addr=0xb0c3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb0c4, .a=0x50, .x=0x02, .y=0xef, .sp=0xf4, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xb0c2, .value=0xa8}, {.addr=0xb0c3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb0c2, .value=0xa8, .type=IO_READ},
        {.addr=0xb0c3, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xf55f, .a=0x5d, .x=0x6d, .y=0x93, .sp=0x12, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xf55f, .value=0xa8}, {.addr=0xf560, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf561, .a=0x80, .x=0x6d, .y=0x93, .sp=0x12, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xf55f, .value=0xa8}, {.addr=0xf560, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf55f, .value=0xa8, .type=IO_READ},
        {.addr=0xf560, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x6c31, .a=0x98, .x=0xb1, .y=0x0a, .sp=0xc3, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x6c31, .value=0xa8}, {.addr=0x6c32, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6c33, .a=0x97, .x=0xb1, .y=0x0a, .sp=0xc3, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x6c31, .value=0xa8}, {.addr=0x6c32, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6c31, .value=0xa8, .type=IO_READ},
        {.addr=0x6c32, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xb703, .a=0xe7, .x=0xf2, .y=0x03, .sp=0x62, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb703, .value=0xa8}, {.addr=0xb704, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xb705, .a=0x6d, .x=0xf2, .y=0x03, .sp=0x62, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xb703, .value=0xa8}, {.addr=0xb704, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xb703, .value=0xa8, .type=IO_READ},
        {.addr=0xb704, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x1057, .a=0xa8, .x=0x80, .y=0x53, .sp=0xd6, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x1057, .value=0xa8}, {.addr=0x1058, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x1059, .a=0xb1, .x=0x80, .y=0x53, .sp=0xd6, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x1057, .value=0xa8}, {.addr=0x1058, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x1057, .value=0xa8, .type=IO_READ},
        {.addr=0x1058, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x0b17, .a=0x6e, .x=0x08, .y=0x35, .sp=0xe5, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0b17, .value=0xa8}, {.addr=0x0b18, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x0b19, .a=0x0e, .x=0x08, .y=0x35, .sp=0xe5, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0b17, .value=0xa8}, {.addr=0x0b18, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x0b17, .value=0xa8, .type=IO_READ},
        {.addr=0x0b18, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x9666, .a=0xab, .x=0x18, .y=0xf3, .sp=0x40, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x9666, .value=0xa8}, {.addr=0x9667, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x9668, .a=0x52, .x=0x18, .y=0xf3, .sp=0x40, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9666, .value=0xa8}, {.addr=0x9667, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x9666, .value=0xa8, .type=IO_READ},
        {.addr=0x9667, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x4671, .a=0xaf, .x=0x86, .y=0x32, .sp=0x5a, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x4671, .value=0xa8}, {.addr=0x4672, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x4673, .a=0x67, .x=0x86, .y=0x32, .sp=0x5a, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4671, .value=0xa8}, {.addr=0x4672, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x4671, .value=0xa8, .type=IO_READ},
        {.addr=0x4672, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x0521, .a=0x23, .x=0xb4, .y=0x59, .sp=0x7e, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0521, .value=0xa8}, {.addr=0x0522, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x0523, .a=0x98, .x=0xb4, .y=0x59, .sp=0x7e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0521, .value=0xa8}, {.addr=0x0522, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x0521, .value=0xa8, .type=IO_READ},
        {.addr=0x0522, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x53b1, .a=0x26, .x=0xa6, .y=0xcd, .sp=0xe2, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x53b1, .value=0xa8}, {.addr=0x53b2, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x53b3, .a=0xd5, .x=0xa6, .y=0xcd, .sp=0xe2, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x53b1, .value=0xa8}, {.addr=0x53b2, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x53b1, .value=0xa8, .type=IO_READ},
        {.addr=0x53b2, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x821a, .a=0x60, .x=0x81, .y=0xde, .sp=0xad, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x821a, .value=0xa8}, {.addr=0x821b, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x821c, .a=0xa1, .x=0x81, .y=0xde, .sp=0xad, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x821a, .value=0xa8}, {.addr=0x821b, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x821a, .value=0xa8, .type=IO_READ},
        {.addr=0x821b, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x68a1, .a=0x01, .x=0x69, .y=0x90, .sp=0xe6, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x68a1, .value=0xa8}, {.addr=0x68a2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x68a3, .a=0xd3, .x=0x69, .y=0x90, .sp=0xe6, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x68a1, .value=0xa8}, {.addr=0x68a2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x68a1, .value=0xa8, .type=IO_READ},
        {.addr=0x68a2, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xe9ab, .a=0x12, .x=0xb0, .y=0xd6, .sp=0x8f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xe9ab, .value=0xa8}, {.addr=0xe9ac, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe9ad, .a=0x95, .x=0xb0, .y=0xd6, .sp=0x8f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe9ab, .value=0xa8}, {.addr=0xe9ac, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe9ab, .value=0xa8, .type=IO_READ},
        {.addr=0xe9ac, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xeaed, .a=0xdd, .x=0x78, .y=0x3c, .sp=0x77, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xeaed, .value=0xa8}, {.addr=0xeaee, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xeaef, .a=0xfe, .x=0x78, .y=0x3c, .sp=0x77, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xeaed, .value=0xa8}, {.addr=0xeaee, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xeaed, .value=0xa8, .type=IO_READ},
        {.addr=0xeaee, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xb5ae, .a=0x0f, .x=0xc1, .y=0xa5, .sp=0x3d, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ae, .value=0xa8}, {.addr=0xb5af, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xb5b0, .a=0xed, .x=0xc1, .y=0xa5, .sp=0x3d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb5ae, .value=0xa8}, {.addr=0xb5af, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xb5ae, .value=0xa8, .type=IO_READ},
        {.addr=0xb5af, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x4e10, .a=0xe7, .x=0x7b, .y=0xdd, .sp=0xe2, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x4e10, .value=0xa8}, {.addr=0x4e11, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4e12, .a=0x6a, .x=0x7b, .y=0xdd, .sp=0xe2, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4e10, .value=0xa8}, {.addr=0x4e11, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4e10, .value=0xa8, .type=IO_READ},
        {.addr=0x4e11, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x5895, .a=0x86, .x=0xfb, .y=0x15, .sp=0x8c, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x5895, .value=0xa8}, {.addr=0x5896, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x5897, .a=0xde, .x=0xfb, .y=0x15, .sp=0x8c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5895, .value=0xa8}, {.addr=0x5896, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x5895, .value=0xa8, .type=IO_READ},
        {.addr=0x5896, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x39ab, .a=0xb7, .x=0x87, .y=0xc8, .sp=0xdf, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x39ab, .value=0xa8}, {.addr=0x39ac, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x39ad, .a=0x57, .x=0x87, .y=0xc8, .sp=0xdf, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x39ab, .value=0xa8}, {.addr=0x39ac, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x39ab, .value=0xa8, .type=IO_READ},
        {.addr=0x39ac, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x52b1, .a=0x61, .x=0x8b, .y=0x43, .sp=0xf0, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x52b1, .value=0xa8}, {.addr=0x52b2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x52b3, .a=0x82, .x=0x8b, .y=0x43, .sp=0xf0, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x52b1, .value=0xa8}, {.addr=0x52b2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x52b1, .value=0xa8, .type=IO_READ},
        {.addr=0x52b2, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x4e74, .a=0xdc, .x=0x20, .y=0x50, .sp=0x3b, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x4e74, .value=0xa8}, {.addr=0x4e75, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x4e76, .a=0x4a, .x=0x20, .y=0x50, .sp=0x3b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4e74, .value=0xa8}, {.addr=0x4e75, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x4e74, .value=0xa8, .type=IO_READ},
        {.addr=0x4e75, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xa900, .a=0xe6, .x=0xae, .y=0xeb, .sp=0x52, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xa900, .value=0xa8}, {.addr=0xa901, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xa902, .a=0xf5, .x=0xae, .y=0xeb, .sp=0x52, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa900, .value=0xa8}, {.addr=0xa901, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xa900, .value=0xa8, .type=IO_READ},
        {.addr=0xa901, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x19e4, .a=0x0a, .x=0xa5, .y=0x10, .sp=0x3b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x19e4, .value=0xa8}, {.addr=0x19e5, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x19e6, .a=0x41, .x=0xa5, .y=0x10, .sp=0x3b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x19e4, .value=0xa8}, {.addr=0x19e5, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x19e4, .value=0xa8, .type=IO_READ},
        {.addr=0x19e5, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x7615, .a=0x88, .x=0x2b, .y=0x2a, .sp=0x9a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7615, .value=0xa8}, {.addr=0x7616, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x7617, .a=0x58, .x=0x2b, .y=0x2a, .sp=0x9a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7615, .value=0xa8}, {.addr=0x7616, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x7615, .value=0xa8, .type=IO_READ},
        {.addr=0x7616, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x8df1, .a=0x54, .x=0xa0, .y=0x7d, .sp=0xe7, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x8df1, .value=0xa8}, {.addr=0x8df2, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x8df3, .a=0xfa, .x=0xa0, .y=0x7d, .sp=0xe7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8df1, .value=0xa8}, {.addr=0x8df2, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x8df1, .value=0xa8, .type=IO_READ},
        {.addr=0x8df2, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x2e9c, .a=0x8a, .x=0x81, .y=0x34, .sp=0xb8, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2e9c, .value=0xa8}, {.addr=0x2e9d, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x2e9e, .a=0xb7, .x=0x81, .y=0x34, .sp=0xb8, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x2e9c, .value=0xa8}, {.addr=0x2e9d, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x2e9c, .value=0xa8, .type=IO_READ},
        {.addr=0x2e9d, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x308f, .a=0x2b, .x=0x0f, .y=0xfb, .sp=0xc6, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x308f, .value=0xa8}, {.addr=0x3090, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x3091, .a=0x57, .x=0x0f, .y=0xfb, .sp=0xc6, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x308f, .value=0xa8}, {.addr=0x3090, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x308f, .value=0xa8, .type=IO_READ},
        {.addr=0x3090, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x06b7, .a=0x00, .x=0x2e, .y=0xb7, .sp=0xfb, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x06b7, .value=0xa8}, {.addr=0x06b8, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x06b9, .a=0x1c, .x=0x2e, .y=0xb7, .sp=0xfb, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x06b7, .value=0xa8}, {.addr=0x06b8, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x06b7, .value=0xa8, .type=IO_READ},
        {.addr=0x06b8, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x7ecc, .a=0xb9, .x=0x57, .y=0x10, .sp=0x0c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x7ecc, .value=0xa8}, {.addr=0x7ecd, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x7ece, .a=0x11, .x=0x57, .y=0x10, .sp=0x0c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x7ecc, .value=0xa8}, {.addr=0x7ecd, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x7ecc, .value=0xa8, .type=IO_READ},
        {.addr=0x7ecd, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x10f6, .a=0x0f, .x=0xa4, .y=0x32, .sp=0x6a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x10f6, .value=0xa8}, {.addr=0x10f7, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x10f8, .a=0x7c, .x=0xa4, .y=0x32, .sp=0x6a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x10f6, .value=0xa8}, {.addr=0x10f7, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x10f6, .value=0xa8, .type=IO_READ},
        {.addr=0x10f7, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xc2a0, .a=0x59, .x=0xae, .y=0x3b, .sp=0x4f, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xc2a0, .value=0xa8}, {.addr=0xc2a1, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xc2a2, .a=0xe5, .x=0xae, .y=0x3b, .sp=0x4f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc2a0, .value=0xa8}, {.addr=0xc2a1, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xc2a0, .value=0xa8, .type=IO_READ},
        {.addr=0xc2a1, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xcbd8, .a=0x1b, .x=0x1b, .y=0xfa, .sp=0xe4, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xcbd8, .value=0xa8}, {.addr=0xcbd9, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xcbda, .a=0x05, .x=0x1b, .y=0xfa, .sp=0xe4, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xcbd8, .value=0xa8}, {.addr=0xcbd9, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xcbd8, .value=0xa8, .type=IO_READ},
        {.addr=0xcbd9, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x6a46, .a=0xa4, .x=0x3c, .y=0xa8, .sp=0x35, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x6a46, .value=0xa8}, {.addr=0x6a47, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6a48, .a=0x56, .x=0x3c, .y=0xa8, .sp=0x35, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6a46, .value=0xa8}, {.addr=0x6a47, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6a46, .value=0xa8, .type=IO_READ},
        {.addr=0x6a47, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xda46, .a=0x85, .x=0xba, .y=0x08, .sp=0xf5, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xda46, .value=0xa8}, {.addr=0xda47, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xda48, .a=0xb3, .x=0xba, .y=0x08, .sp=0xf5, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xda46, .value=0xa8}, {.addr=0xda47, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xda46, .value=0xa8, .type=IO_READ},
        {.addr=0xda47, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xadd3, .a=0x05, .x=0xe8, .y=0xd6, .sp=0x9c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xadd3, .value=0xa8}, {.addr=0xadd4, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xadd5, .a=0x98, .x=0xe8, .y=0xd6, .sp=0x9c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xadd3, .value=0xa8}, {.addr=0xadd4, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xadd3, .value=0xa8, .type=IO_READ},
        {.addr=0xadd4, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xccb0, .a=0xde, .x=0x79, .y=0xd7, .sp=0xcd, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xccb0, .value=0xa8}, {.addr=0xccb1, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xccb2, .a=0xc8, .x=0x79, .y=0xd7, .sp=0xcd, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xccb0, .value=0xa8}, {.addr=0xccb1, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xccb0, .value=0xa8, .type=IO_READ},
        {.addr=0xccb1, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x9325, .a=0xb0, .x=0xb9, .y=0x90, .sp=0xe7, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x9325, .value=0xa8}, {.addr=0x9326, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x9327, .a=0x72, .x=0xb9, .y=0x90, .sp=0xe7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x9325, .value=0xa8}, {.addr=0x9326, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x9325, .value=0xa8, .type=IO_READ},
        {.addr=0x9326, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x6df2, .a=0x74, .x=0x32, .y=0x4e, .sp=0xce, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6df2, .value=0xa8}, {.addr=0x6df3, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x6df4, .a=0x5b, .x=0x32, .y=0x4e, .sp=0xce, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6df2, .value=0xa8}, {.addr=0x6df3, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x6df2, .value=0xa8, .type=IO_READ},
        {.addr=0x6df3, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xa966, .a=0xba, .x=0x80, .y=0x97, .sp=0xb7, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xa966, .value=0xa8}, {.addr=0xa967, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xa968, .a=0x06, .x=0x80, .y=0x97, .sp=0xb7, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xa966, .value=0xa8}, {.addr=0xa967, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xa966, .value=0xa8, .type=IO_READ},
        {.addr=0xa967, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x13b2, .a=0x2e, .x=0x16, .y=0xa7, .sp=0xfd, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x13b2, .value=0xa8}, {.addr=0x13b3, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x13b4, .a=0x3e, .x=0x16, .y=0xa7, .sp=0xfd, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x13b2, .value=0xa8}, {.addr=0x13b3, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x13b2, .value=0xa8, .type=IO_READ},
        {.addr=0x13b3, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x55ec, .a=0x24, .x=0x60, .y=0x20, .sp=0xf6, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x55ec, .value=0xa8}, {.addr=0x55ed, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x55ee, .a=0xc1, .x=0x60, .y=0x20, .sp=0xf6, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x55ec, .value=0xa8}, {.addr=0x55ed, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x55ec, .value=0xa8, .type=IO_READ},
        {.addr=0x55ed, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x8bd4, .a=0x2b, .x=0xcf, .y=0x59, .sp=0x82, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x8bd4, .value=0xa8}, {.addr=0x8bd5, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x8bd6, .a=0x01, .x=0xcf, .y=0x59, .sp=0x82, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8bd4, .value=0xa8}, {.addr=0x8bd5, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x8bd4, .value=0xa8, .type=IO_READ},
        {.addr=0x8bd5, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x8da6, .a=0xd2, .x=0x7d, .y=0xe1, .sp=0x3c, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x8da6, .value=0xa8}, {.addr=0x8da7, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x8da8, .a=0xd6, .x=0x7d, .y=0xe1, .sp=0x3c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8da6, .value=0xa8}, {.addr=0x8da7, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x8da6, .value=0xa8, .type=IO_READ},
        {.addr=0x8da7, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x6c68, .a=0x56, .x=0x06, .y=0x3a, .sp=0x3c, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x6c68, .value=0xa8}, {.addr=0x6c69, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x6c6a, .a=0xc1, .x=0x06, .y=0x3a, .sp=0x3c, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6c68, .value=0xa8}, {.addr=0x6c69, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x6c68, .value=0xa8, .type=IO_READ},
        {.addr=0x6c69, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xc431, .a=0x0c, .x=0x2f, .y=0x42, .sp=0xa0, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xc431, .value=0xa8}, {.addr=0xc432, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xc433, .a=0x97, .x=0x2f, .y=0x42, .sp=0xa0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc431, .value=0xa8}, {.addr=0xc432, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xc431, .value=0xa8, .type=IO_READ},
        {.addr=0xc432, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x107f, .a=0x83, .x=0x78, .y=0x20, .sp=0xf6, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x107f, .value=0xa8}, {.addr=0x1080, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x1081, .a=0x8c, .x=0x78, .y=0x20, .sp=0xf6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x107f, .value=0xa8}, {.addr=0x1080, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x107f, .value=0xa8, .type=IO_READ},
        {.addr=0x1080, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xe90f, .a=0x4d, .x=0xe6, .y=0xc3, .sp=0x8f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xe90f, .value=0xa8}, {.addr=0xe910, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xe911, .a=0xed, .x=0xe6, .y=0xc3, .sp=0x8f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe90f, .value=0xa8}, {.addr=0xe910, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xe90f, .value=0xa8, .type=IO_READ},
        {.addr=0xe910, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x74ea, .a=0xc3, .x=0x09, .y=0xf3, .sp=0xb7, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x74ea, .value=0xa8}, {.addr=0x74eb, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x74ec, .a=0x53, .x=0x09, .y=0xf3, .sp=0xb7, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x74ea, .value=0xa8}, {.addr=0x74eb, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x74ea, .value=0xa8, .type=IO_READ},
        {.addr=0x74eb, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x2a05, .a=0x84, .x=0xaf, .y=0xc8, .sp=0xe3, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x2a05, .value=0xa8}, {.addr=0x2a06, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x2a07, .a=0x72, .x=0xaf, .y=0xc8, .sp=0xe3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2a05, .value=0xa8}, {.addr=0x2a06, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x2a05, .value=0xa8, .type=IO_READ},
        {.addr=0x2a06, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x1322, .a=0x55, .x=0x50, .y=0x57, .sp=0x50, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x1322, .value=0xa8}, {.addr=0x1323, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x1324, .a=0x83, .x=0x50, .y=0x57, .sp=0x50, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x1322, .value=0xa8}, {.addr=0x1323, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x1322, .value=0xa8, .type=IO_READ},
        {.addr=0x1323, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x2726, .a=0xd4, .x=0x79, .y=0x0d, .sp=0x3d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x2726, .value=0xa8}, {.addr=0x2727, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x2728, .a=0x5b, .x=0x79, .y=0x0d, .sp=0x3d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x2726, .value=0xa8}, {.addr=0x2727, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x2726, .value=0xa8, .type=IO_READ},
        {.addr=0x2727, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x56eb, .a=0xcc, .x=0x98, .y=0x45, .sp=0xb5, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x56eb, .value=0xa8}, {.addr=0x56ec, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x56ed, .a=0xe9, .x=0x98, .y=0x45, .sp=0xb5, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x56eb, .value=0xa8}, {.addr=0x56ec, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x56eb, .value=0xa8, .type=IO_READ},
        {.addr=0x56ec, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xffd3, .a=0x85, .x=0x92, .y=0xe9, .sp=0x31, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xffd3, .value=0xa8}, {.addr=0xffd4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xffd5, .a=0x67, .x=0x92, .y=0xe9, .sp=0x31, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xffd3, .value=0xa8}, {.addr=0xffd4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xffd3, .value=0xa8, .type=IO_READ},
        {.addr=0xffd4, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xe78a, .a=0x82, .x=0x4c, .y=0x7b, .sp=0xe9, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xe78a, .value=0xa8}, {.addr=0xe78b, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xe78c, .a=0xa9, .x=0x4c, .y=0x7b, .sp=0xe9, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xe78a, .value=0xa8}, {.addr=0xe78b, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xe78a, .value=0xa8, .type=IO_READ},
        {.addr=0xe78b, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xa78d, .a=0x43, .x=0x00, .y=0x7e, .sp=0x95, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xa78d, .value=0xa8}, {.addr=0xa78e, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xa78f, .a=0x35, .x=0x00, .y=0x7e, .sp=0x95, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa78d, .value=0xa8}, {.addr=0xa78e, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xa78d, .value=0xa8, .type=IO_READ},
        {.addr=0xa78e, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x29df, .a=0x80, .x=0xce, .y=0xaf, .sp=0xdc, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x29df, .value=0xa8}, {.addr=0x29e0, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x29e1, .a=0x25, .x=0xce, .y=0xaf, .sp=0xdc, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x29df, .value=0xa8}, {.addr=0x29e0, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x29df, .value=0xa8, .type=IO_READ},
        {.addr=0x29e0, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x11a7, .a=0x80, .x=0xda, .y=0x3f, .sp=0x96, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x11a7, .value=0xa8}, {.addr=0x11a8, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x11a9, .a=0xf3, .x=0xda, .y=0x3f, .sp=0x96, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x11a7, .value=0xa8}, {.addr=0x11a8, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x11a7, .value=0xa8, .type=IO_READ},
        {.addr=0x11a8, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xa885, .a=0xfc, .x=0xa1, .y=0x21, .sp=0x1d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xa885, .value=0xa8}, {.addr=0xa886, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xa887, .a=0x83, .x=0xa1, .y=0x21, .sp=0x1d, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xa885, .value=0xa8}, {.addr=0xa886, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xa885, .value=0xa8, .type=IO_READ},
        {.addr=0xa886, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0100) {
    const struct CPU_State initial_cpu = {.pc=0xc303, .a=0xd6, .x=0x7c, .y=0xc4, .sp=0xc1, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xc303, .value=0xa8}, {.addr=0xc304, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xc305, .a=0xdd, .x=0x7c, .y=0xc4, .sp=0xc1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xc303, .value=0xa8}, {.addr=0xc304, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xc303, .value=0xa8, .type=IO_READ},
        {.addr=0xc304, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0101) {
    const struct CPU_State initial_cpu = {.pc=0x4dc4, .a=0xb0, .x=0x96, .y=0xec, .sp=0x64, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x4dc4, .value=0xa8}, {.addr=0x4dc5, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x4dc6, .a=0xcf, .x=0x96, .y=0xec, .sp=0x64, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4dc4, .value=0xa8}, {.addr=0x4dc5, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x4dc4, .value=0xa8, .type=IO_READ},
        {.addr=0x4dc5, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0102) {
    const struct CPU_State initial_cpu = {.pc=0x00a9, .a=0xa5, .x=0xb8, .y=0x17, .sp=0x2e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0xa8}, {.addr=0x00aa, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x00ab, .a=0x4b, .x=0xb8, .y=0x17, .sp=0x2e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0xa8}, {.addr=0x00aa, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x00a9, .value=0xa8, .type=IO_READ},
        {.addr=0x00aa, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0103) {
    const struct CPU_State initial_cpu = {.pc=0x6d4a, .a=0x99, .x=0xd4, .y=0xa2, .sp=0x55, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x6d4a, .value=0xa8}, {.addr=0x6d4b, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x6d4c, .a=0xa5, .x=0xd4, .y=0xa2, .sp=0x55, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6d4a, .value=0xa8}, {.addr=0x6d4b, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x6d4a, .value=0xa8, .type=IO_READ},
        {.addr=0x6d4b, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0104) {
    const struct CPU_State initial_cpu = {.pc=0x8d63, .a=0x04, .x=0xda, .y=0x47, .sp=0x75, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x8d63, .value=0xa8}, {.addr=0x8d64, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8d65, .a=0x55, .x=0xda, .y=0x47, .sp=0x75, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8d63, .value=0xa8}, {.addr=0x8d64, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8d63, .value=0xa8, .type=IO_READ},
        {.addr=0x8d64, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0105) {
    const struct CPU_State initial_cpu = {.pc=0x1347, .a=0x5f, .x=0x8b, .y=0xe0, .sp=0x68, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x1347, .value=0xa8}, {.addr=0x1348, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x1349, .a=0xbd, .x=0x8b, .y=0xe0, .sp=0x68, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x1347, .value=0xa8}, {.addr=0x1348, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x1347, .value=0xa8, .type=IO_READ},
        {.addr=0x1348, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0106) {
    const struct CPU_State initial_cpu = {.pc=0x2d29, .a=0xf2, .x=0xf0, .y=0xde, .sp=0x52, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x2d29, .value=0xa8}, {.addr=0x2d2a, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x2d2b, .a=0x89, .x=0xf0, .y=0xde, .sp=0x52, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2d29, .value=0xa8}, {.addr=0x2d2a, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x2d29, .value=0xa8, .type=IO_READ},
        {.addr=0x2d2a, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0107) {
    const struct CPU_State initial_cpu = {.pc=0x4095, .a=0xb3, .x=0x16, .y=0xfb, .sp=0x1b, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x4095, .value=0xa8}, {.addr=0x4096, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x4097, .a=0x46, .x=0x16, .y=0xfb, .sp=0x1b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4095, .value=0xa8}, {.addr=0x4096, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x4095, .value=0xa8, .type=IO_READ},
        {.addr=0x4096, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0108) {
    const struct CPU_State initial_cpu = {.pc=0x6c7a, .a=0x3f, .x=0xf4, .y=0x12, .sp=0x24, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x6c7a, .value=0xa8}, {.addr=0x6c7b, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x6c7c, .a=0x76, .x=0xf4, .y=0x12, .sp=0x24, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x6c7a, .value=0xa8}, {.addr=0x6c7b, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x6c7a, .value=0xa8, .type=IO_READ},
        {.addr=0x6c7b, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0109) {
    const struct CPU_State initial_cpu = {.pc=0xdc6a, .a=0x04, .x=0x66, .y=0x6d, .sp=0x3e, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xdc6a, .value=0xa8}, {.addr=0xdc6b, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xdc6c, .a=0x66, .x=0x66, .y=0x6d, .sp=0x3e, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xdc6a, .value=0xa8}, {.addr=0xdc6b, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xdc6a, .value=0xa8, .type=IO_READ},
        {.addr=0xdc6b, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_010A) {
    const struct CPU_State initial_cpu = {.pc=0xf258, .a=0xc3, .x=0x36, .y=0x13, .sp=0x90, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xf258, .value=0xa8}, {.addr=0xf259, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xf25a, .a=0xc1, .x=0x36, .y=0x13, .sp=0x90, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xf258, .value=0xa8}, {.addr=0xf259, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xf258, .value=0xa8, .type=IO_READ},
        {.addr=0xf259, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_010B) {
    const struct CPU_State initial_cpu = {.pc=0xcb86, .a=0xb0, .x=0xea, .y=0x4d, .sp=0x79, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xcb86, .value=0xa8}, {.addr=0xcb87, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xcb88, .a=0xbe, .x=0xea, .y=0x4d, .sp=0x79, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xcb86, .value=0xa8}, {.addr=0xcb87, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xcb86, .value=0xa8, .type=IO_READ},
        {.addr=0xcb87, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_010C) {
    const struct CPU_State initial_cpu = {.pc=0x369a, .a=0x4d, .x=0x84, .y=0x01, .sp=0xc4, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x369a, .value=0xa8}, {.addr=0x369b, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x369c, .a=0x62, .x=0x84, .y=0x01, .sp=0xc4, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x369a, .value=0xa8}, {.addr=0x369b, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x369a, .value=0xa8, .type=IO_READ},
        {.addr=0x369b, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_010D) {
    const struct CPU_State initial_cpu = {.pc=0x46ac, .a=0xe0, .x=0xab, .y=0x5e, .sp=0x71, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x46ac, .value=0xa8}, {.addr=0x46ad, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x46ae, .a=0x97, .x=0xab, .y=0x5e, .sp=0x71, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x46ac, .value=0xa8}, {.addr=0x46ad, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x46ac, .value=0xa8, .type=IO_READ},
        {.addr=0x46ad, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_010E) {
    const struct CPU_State initial_cpu = {.pc=0x4e60, .a=0x99, .x=0xe7, .y=0xfc, .sp=0x80, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x4e60, .value=0xa8}, {.addr=0x4e61, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x4e62, .a=0x66, .x=0xe7, .y=0xfc, .sp=0x80, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4e60, .value=0xa8}, {.addr=0x4e61, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x4e60, .value=0xa8, .type=IO_READ},
        {.addr=0x4e61, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_010F) {
    const struct CPU_State initial_cpu = {.pc=0xa805, .a=0x2b, .x=0x6f, .y=0xbd, .sp=0xd4, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xa805, .value=0xa8}, {.addr=0xa806, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa807, .a=0xc4, .x=0x6f, .y=0xbd, .sp=0xd4, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa805, .value=0xa8}, {.addr=0xa806, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa805, .value=0xa8, .type=IO_READ},
        {.addr=0xa806, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0110) {
    const struct CPU_State initial_cpu = {.pc=0x9871, .a=0x3d, .x=0x04, .y=0x28, .sp=0xba, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x9871, .value=0xa8}, {.addr=0x9872, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x9873, .a=0x04, .x=0x04, .y=0x28, .sp=0xba, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9871, .value=0xa8}, {.addr=0x9872, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x9871, .value=0xa8, .type=IO_READ},
        {.addr=0x9872, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0111) {
    const struct CPU_State initial_cpu = {.pc=0x252c, .a=0xa4, .x=0x43, .y=0xee, .sp=0x7e, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x252c, .value=0xa8}, {.addr=0x252d, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x252e, .a=0x5c, .x=0x43, .y=0xee, .sp=0x7e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x252c, .value=0xa8}, {.addr=0x252d, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x252c, .value=0xa8, .type=IO_READ},
        {.addr=0x252d, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0112) {
    const struct CPU_State initial_cpu = {.pc=0xa0e5, .a=0x25, .x=0xba, .y=0xc9, .sp=0xac, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xa0e5, .value=0xa8}, {.addr=0xa0e6, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xa0e7, .a=0xcf, .x=0xba, .y=0xc9, .sp=0xac, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa0e5, .value=0xa8}, {.addr=0xa0e6, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xa0e5, .value=0xa8, .type=IO_READ},
        {.addr=0xa0e6, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0113) {
    const struct CPU_State initial_cpu = {.pc=0x08ac, .a=0xde, .x=0xa5, .y=0xfc, .sp=0x40, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x08ac, .value=0xa8}, {.addr=0x08ad, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x08ae, .a=0x4d, .x=0xa5, .y=0xfc, .sp=0x40, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x08ac, .value=0xa8}, {.addr=0x08ad, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x08ac, .value=0xa8, .type=IO_READ},
        {.addr=0x08ad, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0114) {
    const struct CPU_State initial_cpu = {.pc=0x7766, .a=0xd0, .x=0x9b, .y=0x3e, .sp=0x25, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x7766, .value=0xa8}, {.addr=0x7767, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x7768, .a=0x55, .x=0x9b, .y=0x3e, .sp=0x25, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x7766, .value=0xa8}, {.addr=0x7767, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x7766, .value=0xa8, .type=IO_READ},
        {.addr=0x7767, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0115) {
    const struct CPU_State initial_cpu = {.pc=0x59f2, .a=0x79, .x=0xfb, .y=0xb5, .sp=0x1c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x59f2, .value=0xa8}, {.addr=0x59f3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x59f4, .a=0xdb, .x=0xfb, .y=0xb5, .sp=0x1c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x59f2, .value=0xa8}, {.addr=0x59f3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x59f2, .value=0xa8, .type=IO_READ},
        {.addr=0x59f3, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0116) {
    const struct CPU_State initial_cpu = {.pc=0xe690, .a=0x86, .x=0x80, .y=0xbb, .sp=0x9c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xe690, .value=0xa8}, {.addr=0xe691, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xe692, .a=0x3d, .x=0x80, .y=0xbb, .sp=0x9c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xe690, .value=0xa8}, {.addr=0xe691, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xe690, .value=0xa8, .type=IO_READ},
        {.addr=0xe691, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0117) {
    const struct CPU_State initial_cpu = {.pc=0x2a57, .a=0x52, .x=0xe2, .y=0xe7, .sp=0xb7, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2a57, .value=0xa8}, {.addr=0x2a58, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x2a59, .a=0x4b, .x=0xe2, .y=0xe7, .sp=0xb7, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2a57, .value=0xa8}, {.addr=0x2a58, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x2a57, .value=0xa8, .type=IO_READ},
        {.addr=0x2a58, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0118) {
    const struct CPU_State initial_cpu = {.pc=0x16f0, .a=0x96, .x=0x7a, .y=0x69, .sp=0xd4, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x16f0, .value=0xa8}, {.addr=0x16f1, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x16f2, .a=0x09, .x=0x7a, .y=0x69, .sp=0xd4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x16f0, .value=0xa8}, {.addr=0x16f1, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x16f0, .value=0xa8, .type=IO_READ},
        {.addr=0x16f1, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0119) {
    const struct CPU_State initial_cpu = {.pc=0x9816, .a=0x30, .x=0xbb, .y=0x02, .sp=0x9a, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x9816, .value=0xa8}, {.addr=0x9817, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9818, .a=0xb0, .x=0xbb, .y=0x02, .sp=0x9a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x9816, .value=0xa8}, {.addr=0x9817, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9816, .value=0xa8, .type=IO_READ},
        {.addr=0x9817, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_011A) {
    const struct CPU_State initial_cpu = {.pc=0xfe20, .a=0x06, .x=0x59, .y=0x40, .sp=0x6a, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xfe20, .value=0xa8}, {.addr=0xfe21, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xfe22, .a=0x39, .x=0x59, .y=0x40, .sp=0x6a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfe20, .value=0xa8}, {.addr=0xfe21, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xfe20, .value=0xa8, .type=IO_READ},
        {.addr=0xfe21, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_011B) {
    const struct CPU_State initial_cpu = {.pc=0x7ee4, .a=0x04, .x=0xdf, .y=0x94, .sp=0xee, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x7ee4, .value=0xa8}, {.addr=0x7ee5, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x7ee6, .a=0xf4, .x=0xdf, .y=0x94, .sp=0xee, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7ee4, .value=0xa8}, {.addr=0x7ee5, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x7ee4, .value=0xa8, .type=IO_READ},
        {.addr=0x7ee5, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_011C) {
    const struct CPU_State initial_cpu = {.pc=0x114c, .a=0xb8, .x=0x40, .y=0x88, .sp=0x3a, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x114c, .value=0xa8}, {.addr=0x114d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x114e, .a=0x9a, .x=0x40, .y=0x88, .sp=0x3a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x114c, .value=0xa8}, {.addr=0x114d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x114c, .value=0xa8, .type=IO_READ},
        {.addr=0x114d, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_011D) {
    const struct CPU_State initial_cpu = {.pc=0x6e64, .a=0x9a, .x=0x59, .y=0xa4, .sp=0x92, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x6e64, .value=0xa8}, {.addr=0x6e65, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x6e66, .a=0x81, .x=0x59, .y=0xa4, .sp=0x92, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x6e64, .value=0xa8}, {.addr=0x6e65, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x6e64, .value=0xa8, .type=IO_READ},
        {.addr=0x6e65, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_011E) {
    const struct CPU_State initial_cpu = {.pc=0x11a6, .a=0x51, .x=0xde, .y=0x63, .sp=0x4b, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x11a6, .value=0xa8}, {.addr=0x11a7, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x11a8, .a=0x5c, .x=0xde, .y=0x63, .sp=0x4b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x11a6, .value=0xa8}, {.addr=0x11a7, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x11a6, .value=0xa8, .type=IO_READ},
        {.addr=0x11a7, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_011F) {
    const struct CPU_State initial_cpu = {.pc=0xf51a, .a=0x70, .x=0xa7, .y=0x88, .sp=0x23, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xf51a, .value=0xa8}, {.addr=0xf51b, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xf51c, .a=0x1d, .x=0xa7, .y=0x88, .sp=0x23, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf51a, .value=0xa8}, {.addr=0xf51b, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xf51a, .value=0xa8, .type=IO_READ},
        {.addr=0xf51b, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0120) {
    const struct CPU_State initial_cpu = {.pc=0x686d, .a=0xd5, .x=0x1c, .y=0x21, .sp=0x10, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x686d, .value=0xa8}, {.addr=0x686e, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x686f, .a=0x72, .x=0x1c, .y=0x21, .sp=0x10, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x686d, .value=0xa8}, {.addr=0x686e, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x686d, .value=0xa8, .type=IO_READ},
        {.addr=0x686e, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0121) {
    const struct CPU_State initial_cpu = {.pc=0x77c3, .a=0xca, .x=0x6b, .y=0x5a, .sp=0xf2, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x77c3, .value=0xa8}, {.addr=0x77c4, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x77c5, .a=0xc3, .x=0x6b, .y=0x5a, .sp=0xf2, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x77c3, .value=0xa8}, {.addr=0x77c4, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x77c3, .value=0xa8, .type=IO_READ},
        {.addr=0x77c4, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0122) {
    const struct CPU_State initial_cpu = {.pc=0x1054, .a=0x16, .x=0x28, .y=0x5f, .sp=0x98, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x1054, .value=0xa8}, {.addr=0x1055, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x1056, .a=0x0b, .x=0x28, .y=0x5f, .sp=0x98, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1054, .value=0xa8}, {.addr=0x1055, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x1054, .value=0xa8, .type=IO_READ},
        {.addr=0x1055, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0123) {
    const struct CPU_State initial_cpu = {.pc=0x7121, .a=0xd7, .x=0x99, .y=0xba, .sp=0x09, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x7121, .value=0xa8}, {.addr=0x7122, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x7123, .a=0x38, .x=0x99, .y=0xba, .sp=0x09, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7121, .value=0xa8}, {.addr=0x7122, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x7121, .value=0xa8, .type=IO_READ},
        {.addr=0x7122, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0124) {
    const struct CPU_State initial_cpu = {.pc=0x8e6b, .a=0x87, .x=0x89, .y=0x3f, .sp=0xf7, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x8e6b, .value=0xa8}, {.addr=0x8e6c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8e6d, .a=0xa7, .x=0x89, .y=0x3f, .sp=0xf7, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8e6b, .value=0xa8}, {.addr=0x8e6c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8e6b, .value=0xa8, .type=IO_READ},
        {.addr=0x8e6c, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0125) {
    const struct CPU_State initial_cpu = {.pc=0xe68c, .a=0xda, .x=0x26, .y=0xf4, .sp=0x30, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xe68c, .value=0xa8}, {.addr=0xe68d, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xe68e, .a=0x45, .x=0x26, .y=0xf4, .sp=0x30, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe68c, .value=0xa8}, {.addr=0xe68d, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xe68c, .value=0xa8, .type=IO_READ},
        {.addr=0xe68d, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0126) {
    const struct CPU_State initial_cpu = {.pc=0x94e1, .a=0xe2, .x=0x4d, .y=0xb1, .sp=0x09, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x94e1, .value=0xa8}, {.addr=0x94e2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x94e3, .a=0x01, .x=0x4d, .y=0xb1, .sp=0x09, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x94e1, .value=0xa8}, {.addr=0x94e2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x94e1, .value=0xa8, .type=IO_READ},
        {.addr=0x94e2, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0127) {
    const struct CPU_State initial_cpu = {.pc=0x9e7a, .a=0x62, .x=0xef, .y=0xce, .sp=0x98, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x9e7a, .value=0xa8}, {.addr=0x9e7b, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x9e7c, .a=0xb7, .x=0xef, .y=0xce, .sp=0x98, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9e7a, .value=0xa8}, {.addr=0x9e7b, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x9e7a, .value=0xa8, .type=IO_READ},
        {.addr=0x9e7b, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0128) {
    const struct CPU_State initial_cpu = {.pc=0x1441, .a=0x90, .x=0x01, .y=0x05, .sp=0x03, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x1441, .value=0xa8}, {.addr=0x1442, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x1443, .a=0x7a, .x=0x01, .y=0x05, .sp=0x03, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x1441, .value=0xa8}, {.addr=0x1442, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x1441, .value=0xa8, .type=IO_READ},
        {.addr=0x1442, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0129) {
    const struct CPU_State initial_cpu = {.pc=0x5de5, .a=0xdb, .x=0xa7, .y=0x5e, .sp=0xdb, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x5de5, .value=0xa8}, {.addr=0x5de6, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5de7, .a=0x3a, .x=0xa7, .y=0x5e, .sp=0xdb, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5de5, .value=0xa8}, {.addr=0x5de6, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5de5, .value=0xa8, .type=IO_READ},
        {.addr=0x5de6, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_012A) {
    const struct CPU_State initial_cpu = {.pc=0xeed4, .a=0x9f, .x=0x18, .y=0xe6, .sp=0x30, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xeed4, .value=0xa8}, {.addr=0xeed5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xeed6, .a=0xfe, .x=0x18, .y=0xe6, .sp=0x30, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xeed4, .value=0xa8}, {.addr=0xeed5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xeed4, .value=0xa8, .type=IO_READ},
        {.addr=0xeed5, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_012B) {
    const struct CPU_State initial_cpu = {.pc=0x908b, .a=0x1f, .x=0xce, .y=0x3c, .sp=0x9b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x908b, .value=0xa8}, {.addr=0x908c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x908d, .a=0xa3, .x=0xce, .y=0x3c, .sp=0x9b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x908b, .value=0xa8}, {.addr=0x908c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x908b, .value=0xa8, .type=IO_READ},
        {.addr=0x908c, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_012C) {
    const struct CPU_State initial_cpu = {.pc=0x3545, .a=0x97, .x=0x3c, .y=0xf7, .sp=0xc1, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x3545, .value=0xa8}, {.addr=0x3546, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x3547, .a=0xe1, .x=0x3c, .y=0xf7, .sp=0xc1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3545, .value=0xa8}, {.addr=0x3546, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x3545, .value=0xa8, .type=IO_READ},
        {.addr=0x3546, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_012D) {
    const struct CPU_State initial_cpu = {.pc=0x7259, .a=0xfa, .x=0xd4, .y=0x47, .sp=0x4f, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x7259, .value=0xa8}, {.addr=0x725a, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x725b, .a=0x2b, .x=0xd4, .y=0x47, .sp=0x4f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x7259, .value=0xa8}, {.addr=0x725a, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x7259, .value=0xa8, .type=IO_READ},
        {.addr=0x725a, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_012E) {
    const struct CPU_State initial_cpu = {.pc=0x0789, .a=0x47, .x=0xe4, .y=0x12, .sp=0x01, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0789, .value=0xa8}, {.addr=0x078a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x078b, .a=0x80, .x=0xe4, .y=0x12, .sp=0x01, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0789, .value=0xa8}, {.addr=0x078a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0789, .value=0xa8, .type=IO_READ},
        {.addr=0x078a, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_012F) {
    const struct CPU_State initial_cpu = {.pc=0x72c6, .a=0x0c, .x=0x64, .y=0xcf, .sp=0x48, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x72c6, .value=0xa8}, {.addr=0x72c7, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x72c8, .a=0x98, .x=0x64, .y=0xcf, .sp=0x48, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x72c6, .value=0xa8}, {.addr=0x72c7, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x72c6, .value=0xa8, .type=IO_READ},
        {.addr=0x72c7, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0130) {
    const struct CPU_State initial_cpu = {.pc=0x983b, .a=0x3c, .x=0x80, .y=0x52, .sp=0x2e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x983b, .value=0xa8}, {.addr=0x983c, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x983d, .a=0x54, .x=0x80, .y=0x52, .sp=0x2e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x983b, .value=0xa8}, {.addr=0x983c, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x983b, .value=0xa8, .type=IO_READ},
        {.addr=0x983c, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0131) {
    const struct CPU_State initial_cpu = {.pc=0x393d, .a=0xe0, .x=0x45, .y=0xdf, .sp=0x12, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x393d, .value=0xa8}, {.addr=0x393e, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x393f, .a=0xf6, .x=0x45, .y=0xdf, .sp=0x12, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x393d, .value=0xa8}, {.addr=0x393e, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x393d, .value=0xa8, .type=IO_READ},
        {.addr=0x393e, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0132) {
    const struct CPU_State initial_cpu = {.pc=0x0de3, .a=0x88, .x=0x30, .y=0x34, .sp=0xe0, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0de3, .value=0xa8}, {.addr=0x0de4, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x0de5, .a=0xb2, .x=0x30, .y=0x34, .sp=0xe0, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0de3, .value=0xa8}, {.addr=0x0de4, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x0de3, .value=0xa8, .type=IO_READ},
        {.addr=0x0de4, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0133) {
    const struct CPU_State initial_cpu = {.pc=0x23c7, .a=0x40, .x=0x79, .y=0xd6, .sp=0x3b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x23c7, .value=0xa8}, {.addr=0x23c8, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x23c9, .a=0x4a, .x=0x79, .y=0xd6, .sp=0x3b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x23c7, .value=0xa8}, {.addr=0x23c8, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x23c7, .value=0xa8, .type=IO_READ},
        {.addr=0x23c8, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0134) {
    const struct CPU_State initial_cpu = {.pc=0x3e8f, .a=0x7a, .x=0xfd, .y=0x5a, .sp=0x2c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x3e8f, .value=0xa8}, {.addr=0x3e90, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x3e91, .a=0x26, .x=0xfd, .y=0x5a, .sp=0x2c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3e8f, .value=0xa8}, {.addr=0x3e90, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x3e8f, .value=0xa8, .type=IO_READ},
        {.addr=0x3e90, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0135) {
    const struct CPU_State initial_cpu = {.pc=0x0a49, .a=0x4c, .x=0x69, .y=0x72, .sp=0x7c, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0a49, .value=0xa8}, {.addr=0x0a4a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0a4b, .a=0x5e, .x=0x69, .y=0x72, .sp=0x7c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0a49, .value=0xa8}, {.addr=0x0a4a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0a49, .value=0xa8, .type=IO_READ},
        {.addr=0x0a4a, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0136) {
    const struct CPU_State initial_cpu = {.pc=0x9933, .a=0x1b, .x=0xc2, .y=0xe2, .sp=0xe3, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x9933, .value=0xa8}, {.addr=0x9934, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x9935, .a=0x75, .x=0xc2, .y=0xe2, .sp=0xe3, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9933, .value=0xa8}, {.addr=0x9934, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x9933, .value=0xa8, .type=IO_READ},
        {.addr=0x9934, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0137) {
    const struct CPU_State initial_cpu = {.pc=0xa34b, .a=0x17, .x=0x2b, .y=0x3b, .sp=0xfd, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xa34b, .value=0xa8}, {.addr=0xa34c, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xa34d, .a=0xde, .x=0x2b, .y=0x3b, .sp=0xfd, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa34b, .value=0xa8}, {.addr=0xa34c, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xa34b, .value=0xa8, .type=IO_READ},
        {.addr=0xa34c, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0138) {
    const struct CPU_State initial_cpu = {.pc=0xe914, .a=0xd6, .x=0x49, .y=0x25, .sp=0xde, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xe914, .value=0xa8}, {.addr=0xe915, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xe916, .a=0xbe, .x=0x49, .y=0x25, .sp=0xde, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xe914, .value=0xa8}, {.addr=0xe915, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xe914, .value=0xa8, .type=IO_READ},
        {.addr=0xe915, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0139) {
    const struct CPU_State initial_cpu = {.pc=0x297d, .a=0x37, .x=0x53, .y=0xf1, .sp=0x6e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x297d, .value=0xa8}, {.addr=0x297e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x297f, .a=0x91, .x=0x53, .y=0xf1, .sp=0x6e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x297d, .value=0xa8}, {.addr=0x297e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x297d, .value=0xa8, .type=IO_READ},
        {.addr=0x297e, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_013A) {
    const struct CPU_State initial_cpu = {.pc=0x5e58, .a=0xd1, .x=0xe4, .y=0xb7, .sp=0x90, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x5e58, .value=0xa8}, {.addr=0x5e59, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x5e5a, .a=0x79, .x=0xe4, .y=0xb7, .sp=0x90, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5e58, .value=0xa8}, {.addr=0x5e59, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x5e58, .value=0xa8, .type=IO_READ},
        {.addr=0x5e59, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_013B) {
    const struct CPU_State initial_cpu = {.pc=0x5e5f, .a=0x4f, .x=0xad, .y=0xb3, .sp=0xfb, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x5e5f, .value=0xa8}, {.addr=0x5e60, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x5e61, .a=0xae, .x=0xad, .y=0xb3, .sp=0xfb, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x5e5f, .value=0xa8}, {.addr=0x5e60, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x5e5f, .value=0xa8, .type=IO_READ},
        {.addr=0x5e60, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_013C) {
    const struct CPU_State initial_cpu = {.pc=0x7886, .a=0x87, .x=0xe0, .y=0x00, .sp=0x06, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x7886, .value=0xa8}, {.addr=0x7887, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7888, .a=0x26, .x=0xe0, .y=0x00, .sp=0x06, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7886, .value=0xa8}, {.addr=0x7887, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7886, .value=0xa8, .type=IO_READ},
        {.addr=0x7887, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_013D) {
    const struct CPU_State initial_cpu = {.pc=0xf0ea, .a=0x39, .x=0xdb, .y=0x78, .sp=0x15, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xf0ea, .value=0xa8}, {.addr=0xf0eb, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xf0ec, .a=0xc0, .x=0xdb, .y=0x78, .sp=0x15, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf0ea, .value=0xa8}, {.addr=0xf0eb, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xf0ea, .value=0xa8, .type=IO_READ},
        {.addr=0xf0eb, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_013E) {
    const struct CPU_State initial_cpu = {.pc=0xd313, .a=0x76, .x=0xf7, .y=0x58, .sp=0xdb, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd313, .value=0xa8}, {.addr=0xd314, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xd315, .a=0x94, .x=0xf7, .y=0x58, .sp=0xdb, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xd313, .value=0xa8}, {.addr=0xd314, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xd313, .value=0xa8, .type=IO_READ},
        {.addr=0xd314, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_013F) {
    const struct CPU_State initial_cpu = {.pc=0xdaff, .a=0x7a, .x=0xe3, .y=0x40, .sp=0x90, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xdaff, .value=0xa8}, {.addr=0xdb00, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xdb01, .a=0xa6, .x=0xe3, .y=0x40, .sp=0x90, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xdaff, .value=0xa8}, {.addr=0xdb00, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xdaff, .value=0xa8, .type=IO_READ},
        {.addr=0xdb00, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0140) {
    const struct CPU_State initial_cpu = {.pc=0xa233, .a=0x0b, .x=0xca, .y=0xc2, .sp=0x87, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa233, .value=0xa8}, {.addr=0xa234, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xa235, .a=0x2a, .x=0xca, .y=0xc2, .sp=0x87, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xa233, .value=0xa8}, {.addr=0xa234, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xa233, .value=0xa8, .type=IO_READ},
        {.addr=0xa234, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0141) {
    const struct CPU_State initial_cpu = {.pc=0x0323, .a=0x16, .x=0x59, .y=0x53, .sp=0x09, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0323, .value=0xa8}, {.addr=0x0324, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x0325, .a=0x7d, .x=0x59, .y=0x53, .sp=0x09, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0323, .value=0xa8}, {.addr=0x0324, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x0323, .value=0xa8, .type=IO_READ},
        {.addr=0x0324, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0142) {
    const struct CPU_State initial_cpu = {.pc=0x209a, .a=0x0e, .x=0x62, .y=0x60, .sp=0x1b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x209a, .value=0xa8}, {.addr=0x209b, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x209c, .a=0xd4, .x=0x62, .y=0x60, .sp=0x1b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x209a, .value=0xa8}, {.addr=0x209b, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x209a, .value=0xa8, .type=IO_READ},
        {.addr=0x209b, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0143) {
    const struct CPU_State initial_cpu = {.pc=0xfa88, .a=0xdf, .x=0xc0, .y=0x28, .sp=0x69, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xfa88, .value=0xa8}, {.addr=0xfa89, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xfa8a, .a=0xef, .x=0xc0, .y=0x28, .sp=0x69, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xfa88, .value=0xa8}, {.addr=0xfa89, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xfa88, .value=0xa8, .type=IO_READ},
        {.addr=0xfa89, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0144) {
    const struct CPU_State initial_cpu = {.pc=0x6efe, .a=0xdd, .x=0x33, .y=0x64, .sp=0x69, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x6efe, .value=0xa8}, {.addr=0x6eff, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x6f00, .a=0xd2, .x=0x33, .y=0x64, .sp=0x69, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x6efe, .value=0xa8}, {.addr=0x6eff, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x6efe, .value=0xa8, .type=IO_READ},
        {.addr=0x6eff, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0145) {
    const struct CPU_State initial_cpu = {.pc=0x6ac1, .a=0xc2, .x=0x56, .y=0x4f, .sp=0x02, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x6ac1, .value=0xa8}, {.addr=0x6ac2, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x6ac3, .a=0xc4, .x=0x56, .y=0x4f, .sp=0x02, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6ac1, .value=0xa8}, {.addr=0x6ac2, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x6ac1, .value=0xa8, .type=IO_READ},
        {.addr=0x6ac2, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0146) {
    const struct CPU_State initial_cpu = {.pc=0xf191, .a=0x83, .x=0xde, .y=0x0e, .sp=0x20, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xf191, .value=0xa8}, {.addr=0xf192, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xf193, .a=0x74, .x=0xde, .y=0x0e, .sp=0x20, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xf191, .value=0xa8}, {.addr=0xf192, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xf191, .value=0xa8, .type=IO_READ},
        {.addr=0xf192, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0147) {
    const struct CPU_State initial_cpu = {.pc=0xfe23, .a=0xa3, .x=0x1c, .y=0x73, .sp=0x48, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xfe23, .value=0xa8}, {.addr=0xfe24, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xfe25, .a=0x8f, .x=0x1c, .y=0x73, .sp=0x48, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xfe23, .value=0xa8}, {.addr=0xfe24, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xfe23, .value=0xa8, .type=IO_READ},
        {.addr=0xfe24, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0148) {
    const struct CPU_State initial_cpu = {.pc=0x540a, .a=0x02, .x=0x11, .y=0x19, .sp=0x80, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x540a, .value=0xa8}, {.addr=0x540b, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x540c, .a=0x91, .x=0x11, .y=0x19, .sp=0x80, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x540a, .value=0xa8}, {.addr=0x540b, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x540a, .value=0xa8, .type=IO_READ},
        {.addr=0x540b, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0149) {
    const struct CPU_State initial_cpu = {.pc=0x13ba, .a=0x3b, .x=0xdf, .y=0xae, .sp=0xda, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x13ba, .value=0xa8}, {.addr=0x13bb, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x13bc, .a=0x73, .x=0xdf, .y=0xae, .sp=0xda, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x13ba, .value=0xa8}, {.addr=0x13bb, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x13ba, .value=0xa8, .type=IO_READ},
        {.addr=0x13bb, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_014A) {
    const struct CPU_State initial_cpu = {.pc=0xa0f1, .a=0x04, .x=0xa0, .y=0x3f, .sp=0xa3, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xa0f1, .value=0xa8}, {.addr=0xa0f2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa0f3, .a=0x47, .x=0xa0, .y=0x3f, .sp=0xa3, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xa0f1, .value=0xa8}, {.addr=0xa0f2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa0f1, .value=0xa8, .type=IO_READ},
        {.addr=0xa0f2, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_014B) {
    const struct CPU_State initial_cpu = {.pc=0x9da2, .a=0x28, .x=0x4a, .y=0x1a, .sp=0xae, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x9da2, .value=0xa8}, {.addr=0x9da3, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x9da4, .a=0xc1, .x=0x4a, .y=0x1a, .sp=0xae, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9da2, .value=0xa8}, {.addr=0x9da3, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x9da2, .value=0xa8, .type=IO_READ},
        {.addr=0x9da3, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_014C) {
    const struct CPU_State initial_cpu = {.pc=0x387f, .a=0x6d, .x=0xed, .y=0x33, .sp=0x95, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x387f, .value=0xa8}, {.addr=0x3880, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x3881, .a=0x7c, .x=0xed, .y=0x33, .sp=0x95, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x387f, .value=0xa8}, {.addr=0x3880, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x387f, .value=0xa8, .type=IO_READ},
        {.addr=0x3880, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_014D) {
    const struct CPU_State initial_cpu = {.pc=0x1a0c, .a=0x12, .x=0x5e, .y=0x16, .sp=0x0c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x1a0c, .value=0xa8}, {.addr=0x1a0d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1a0e, .a=0xf2, .x=0x5e, .y=0x16, .sp=0x0c, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x1a0c, .value=0xa8}, {.addr=0x1a0d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1a0c, .value=0xa8, .type=IO_READ},
        {.addr=0x1a0d, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_014E) {
    const struct CPU_State initial_cpu = {.pc=0x7350, .a=0x2b, .x=0x7e, .y=0x09, .sp=0x01, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x7350, .value=0xa8}, {.addr=0x7351, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7352, .a=0x3c, .x=0x7e, .y=0x09, .sp=0x01, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7350, .value=0xa8}, {.addr=0x7351, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7350, .value=0xa8, .type=IO_READ},
        {.addr=0x7351, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_014F) {
    const struct CPU_State initial_cpu = {.pc=0xdbc3, .a=0x1f, .x=0xa0, .y=0x4e, .sp=0x20, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xdbc3, .value=0xa8}, {.addr=0xdbc4, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xdbc5, .a=0xcb, .x=0xa0, .y=0x4e, .sp=0x20, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xdbc3, .value=0xa8}, {.addr=0xdbc4, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xdbc3, .value=0xa8, .type=IO_READ},
        {.addr=0xdbc4, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0150) {
    const struct CPU_State initial_cpu = {.pc=0x32e1, .a=0xec, .x=0x69, .y=0x9e, .sp=0x6d, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x32e1, .value=0xa8}, {.addr=0x32e2, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x32e3, .a=0xbb, .x=0x69, .y=0x9e, .sp=0x6d, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x32e1, .value=0xa8}, {.addr=0x32e2, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x32e1, .value=0xa8, .type=IO_READ},
        {.addr=0x32e2, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0151) {
    const struct CPU_State initial_cpu = {.pc=0x2bfd, .a=0x55, .x=0x68, .y=0x4f, .sp=0x40, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x2bfd, .value=0xa8}, {.addr=0x2bfe, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x2bff, .a=0xfc, .x=0x68, .y=0x4f, .sp=0x40, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2bfd, .value=0xa8}, {.addr=0x2bfe, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x2bfd, .value=0xa8, .type=IO_READ},
        {.addr=0x2bfe, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0152) {
    const struct CPU_State initial_cpu = {.pc=0x53dc, .a=0xbf, .x=0x4a, .y=0x30, .sp=0x75, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x53dc, .value=0xa8}, {.addr=0x53dd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x53de, .a=0xe1, .x=0x4a, .y=0x30, .sp=0x75, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x53dc, .value=0xa8}, {.addr=0x53dd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x53dc, .value=0xa8, .type=IO_READ},
        {.addr=0x53dd, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0153) {
    const struct CPU_State initial_cpu = {.pc=0x37a2, .a=0x7c, .x=0x29, .y=0x84, .sp=0x97, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x37a2, .value=0xa8}, {.addr=0x37a3, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x37a4, .a=0xfd, .x=0x29, .y=0x84, .sp=0x97, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x37a2, .value=0xa8}, {.addr=0x37a3, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x37a2, .value=0xa8, .type=IO_READ},
        {.addr=0x37a3, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0154) {
    const struct CPU_State initial_cpu = {.pc=0x34b3, .a=0xfe, .x=0x57, .y=0x22, .sp=0x17, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x34b3, .value=0xa8}, {.addr=0x34b4, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x34b5, .a=0xe6, .x=0x57, .y=0x22, .sp=0x17, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x34b3, .value=0xa8}, {.addr=0x34b4, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x34b3, .value=0xa8, .type=IO_READ},
        {.addr=0x34b4, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0155) {
    const struct CPU_State initial_cpu = {.pc=0x1981, .a=0xc2, .x=0xb0, .y=0x45, .sp=0xbb, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x1981, .value=0xa8}, {.addr=0x1982, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1983, .a=0x1b, .x=0xb0, .y=0x45, .sp=0xbb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1981, .value=0xa8}, {.addr=0x1982, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1981, .value=0xa8, .type=IO_READ},
        {.addr=0x1982, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0156) {
    const struct CPU_State initial_cpu = {.pc=0xada0, .a=0x59, .x=0x9a, .y=0x24, .sp=0x14, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xada0, .value=0xa8}, {.addr=0xada1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xada2, .a=0x3c, .x=0x9a, .y=0x24, .sp=0x14, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xada0, .value=0xa8}, {.addr=0xada1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xada0, .value=0xa8, .type=IO_READ},
        {.addr=0xada1, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0157) {
    const struct CPU_State initial_cpu = {.pc=0x1702, .a=0x52, .x=0xe9, .y=0xfb, .sp=0x26, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x1702, .value=0xa8}, {.addr=0x1703, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x1704, .a=0xe9, .x=0xe9, .y=0xfb, .sp=0x26, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x1702, .value=0xa8}, {.addr=0x1703, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x1702, .value=0xa8, .type=IO_READ},
        {.addr=0x1703, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0158) {
    const struct CPU_State initial_cpu = {.pc=0x623f, .a=0x4a, .x=0x90, .y=0x77, .sp=0xef, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x623f, .value=0xa8}, {.addr=0x6240, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x6241, .a=0xe2, .x=0x90, .y=0x77, .sp=0xef, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x623f, .value=0xa8}, {.addr=0x6240, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x623f, .value=0xa8, .type=IO_READ},
        {.addr=0x6240, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0159) {
    const struct CPU_State initial_cpu = {.pc=0xde22, .a=0x8f, .x=0x5a, .y=0x9e, .sp=0x4c, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xde22, .value=0xa8}, {.addr=0xde23, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xde24, .a=0x8d, .x=0x5a, .y=0x9e, .sp=0x4c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xde22, .value=0xa8}, {.addr=0xde23, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xde22, .value=0xa8, .type=IO_READ},
        {.addr=0xde23, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_015A) {
    const struct CPU_State initial_cpu = {.pc=0x4f3d, .a=0xfe, .x=0xdf, .y=0xdb, .sp=0x45, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x4f3d, .value=0xa8}, {.addr=0x4f3e, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x4f3f, .a=0xb8, .x=0xdf, .y=0xdb, .sp=0x45, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x4f3d, .value=0xa8}, {.addr=0x4f3e, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x4f3d, .value=0xa8, .type=IO_READ},
        {.addr=0x4f3e, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_015B) {
    const struct CPU_State initial_cpu = {.pc=0x2e1c, .a=0x83, .x=0xd3, .y=0xe6, .sp=0x3c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x2e1c, .value=0xa8}, {.addr=0x2e1d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2e1e, .a=0xe6, .x=0xd3, .y=0xe6, .sp=0x3c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2e1c, .value=0xa8}, {.addr=0x2e1d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2e1c, .value=0xa8, .type=IO_READ},
        {.addr=0x2e1d, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_015C) {
    const struct CPU_State initial_cpu = {.pc=0x98a9, .a=0xba, .x=0x50, .y=0xc7, .sp=0xa5, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x98a9, .value=0xa8}, {.addr=0x98aa, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x98ab, .a=0x18, .x=0x50, .y=0xc7, .sp=0xa5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x98a9, .value=0xa8}, {.addr=0x98aa, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x98a9, .value=0xa8, .type=IO_READ},
        {.addr=0x98aa, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_015D) {
    const struct CPU_State initial_cpu = {.pc=0x6c1d, .a=0x77, .x=0xd5, .y=0x77, .sp=0xd0, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x6c1d, .value=0xa8}, {.addr=0x6c1e, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x6c1f, .a=0xf5, .x=0xd5, .y=0x77, .sp=0xd0, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x6c1d, .value=0xa8}, {.addr=0x6c1e, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x6c1d, .value=0xa8, .type=IO_READ},
        {.addr=0x6c1e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_015E) {
    const struct CPU_State initial_cpu = {.pc=0xdc51, .a=0x48, .x=0xc5, .y=0x8b, .sp=0x7f, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xdc51, .value=0xa8}, {.addr=0xdc52, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xdc53, .a=0x93, .x=0xc5, .y=0x8b, .sp=0x7f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xdc51, .value=0xa8}, {.addr=0xdc52, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xdc51, .value=0xa8, .type=IO_READ},
        {.addr=0xdc52, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_015F) {
    const struct CPU_State initial_cpu = {.pc=0x346f, .a=0x70, .x=0x0f, .y=0x39, .sp=0x8c, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x346f, .value=0xa8}, {.addr=0x3470, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3471, .a=0xf3, .x=0x0f, .y=0x39, .sp=0x8c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x346f, .value=0xa8}, {.addr=0x3470, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x346f, .value=0xa8, .type=IO_READ},
        {.addr=0x3470, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0160) {
    const struct CPU_State initial_cpu = {.pc=0x854c, .a=0x6c, .x=0xc3, .y=0x62, .sp=0xa7, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x854c, .value=0xa8}, {.addr=0x854d, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x854e, .a=0x91, .x=0xc3, .y=0x62, .sp=0xa7, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x854c, .value=0xa8}, {.addr=0x854d, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x854c, .value=0xa8, .type=IO_READ},
        {.addr=0x854d, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0161) {
    const struct CPU_State initial_cpu = {.pc=0x6fa7, .a=0x67, .x=0x62, .y=0xb2, .sp=0x6e, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x6fa7, .value=0xa8}, {.addr=0x6fa8, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x6fa9, .a=0xb1, .x=0x62, .y=0xb2, .sp=0x6e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x6fa7, .value=0xa8}, {.addr=0x6fa8, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x6fa7, .value=0xa8, .type=IO_READ},
        {.addr=0x6fa8, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0162) {
    const struct CPU_State initial_cpu = {.pc=0x5858, .a=0x4a, .x=0xf4, .y=0x18, .sp=0xbb, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x5858, .value=0xa8}, {.addr=0x5859, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x585a, .a=0x2c, .x=0xf4, .y=0x18, .sp=0xbb, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5858, .value=0xa8}, {.addr=0x5859, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5858, .value=0xa8, .type=IO_READ},
        {.addr=0x5859, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0163) {
    const struct CPU_State initial_cpu = {.pc=0xaa11, .a=0xa5, .x=0x29, .y=0xb7, .sp=0x14, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xaa11, .value=0xa8}, {.addr=0xaa12, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xaa13, .a=0x76, .x=0x29, .y=0xb7, .sp=0x14, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xaa11, .value=0xa8}, {.addr=0xaa12, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xaa11, .value=0xa8, .type=IO_READ},
        {.addr=0xaa12, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0164) {
    const struct CPU_State initial_cpu = {.pc=0x6438, .a=0x7e, .x=0x5b, .y=0x3d, .sp=0x60, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x6438, .value=0xa8}, {.addr=0x6439, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x643a, .a=0x91, .x=0x5b, .y=0x3d, .sp=0x60, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6438, .value=0xa8}, {.addr=0x6439, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x6438, .value=0xa8, .type=IO_READ},
        {.addr=0x6439, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0165) {
    const struct CPU_State initial_cpu = {.pc=0x061c, .a=0x5e, .x=0x29, .y=0xb0, .sp=0x44, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x061c, .value=0xa8}, {.addr=0x061d, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x061e, .a=0x4f, .x=0x29, .y=0xb0, .sp=0x44, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x061c, .value=0xa8}, {.addr=0x061d, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x061c, .value=0xa8, .type=IO_READ},
        {.addr=0x061d, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0166) {
    const struct CPU_State initial_cpu = {.pc=0x7765, .a=0x44, .x=0x17, .y=0x22, .sp=0x47, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x7765, .value=0xa8}, {.addr=0x7766, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x7767, .a=0xc0, .x=0x17, .y=0x22, .sp=0x47, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7765, .value=0xa8}, {.addr=0x7766, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x7765, .value=0xa8, .type=IO_READ},
        {.addr=0x7766, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0167) {
    const struct CPU_State initial_cpu = {.pc=0xa89a, .a=0x7f, .x=0x92, .y=0x42, .sp=0x38, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xa89a, .value=0xa8}, {.addr=0xa89b, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xa89c, .a=0xa8, .x=0x92, .y=0x42, .sp=0x38, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa89a, .value=0xa8}, {.addr=0xa89b, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xa89a, .value=0xa8, .type=IO_READ},
        {.addr=0xa89b, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0168) {
    const struct CPU_State initial_cpu = {.pc=0xd76a, .a=0xcc, .x=0x63, .y=0x27, .sp=0xe5, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xd76a, .value=0xa8}, {.addr=0xd76b, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xd76c, .a=0x94, .x=0x63, .y=0x27, .sp=0xe5, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xd76a, .value=0xa8}, {.addr=0xd76b, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xd76a, .value=0xa8, .type=IO_READ},
        {.addr=0xd76b, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0169) {
    const struct CPU_State initial_cpu = {.pc=0x4bfc, .a=0xc0, .x=0x22, .y=0x09, .sp=0x1b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x4bfc, .value=0xa8}, {.addr=0x4bfd, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x4bfe, .a=0xc8, .x=0x22, .y=0x09, .sp=0x1b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4bfc, .value=0xa8}, {.addr=0x4bfd, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x4bfc, .value=0xa8, .type=IO_READ},
        {.addr=0x4bfd, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_016A) {
    const struct CPU_State initial_cpu = {.pc=0xebd2, .a=0xbc, .x=0x7a, .y=0x05, .sp=0x9c, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xebd2, .value=0xa8}, {.addr=0xebd3, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xebd4, .a=0xc0, .x=0x7a, .y=0x05, .sp=0x9c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xebd2, .value=0xa8}, {.addr=0xebd3, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xebd2, .value=0xa8, .type=IO_READ},
        {.addr=0xebd3, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_016B) {
    const struct CPU_State initial_cpu = {.pc=0x08ec, .a=0xb2, .x=0x83, .y=0x24, .sp=0x49, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x08ec, .value=0xa8}, {.addr=0x08ed, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x08ee, .a=0xf0, .x=0x83, .y=0x24, .sp=0x49, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x08ec, .value=0xa8}, {.addr=0x08ed, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x08ec, .value=0xa8, .type=IO_READ},
        {.addr=0x08ed, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_016C) {
    const struct CPU_State initial_cpu = {.pc=0xd029, .a=0x58, .x=0x34, .y=0xc7, .sp=0x43, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xd029, .value=0xa8}, {.addr=0xd02a, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xd02b, .a=0xc1, .x=0x34, .y=0xc7, .sp=0x43, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd029, .value=0xa8}, {.addr=0xd02a, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xd029, .value=0xa8, .type=IO_READ},
        {.addr=0xd02a, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_016D) {
    const struct CPU_State initial_cpu = {.pc=0x4cf5, .a=0x1e, .x=0x29, .y=0xa1, .sp=0xf9, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf5, .value=0xa8}, {.addr=0x4cf6, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x4cf7, .a=0xfd, .x=0x29, .y=0xa1, .sp=0xf9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4cf5, .value=0xa8}, {.addr=0x4cf6, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x4cf5, .value=0xa8, .type=IO_READ},
        {.addr=0x4cf6, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_016E) {
    const struct CPU_State initial_cpu = {.pc=0x801b, .a=0x6c, .x=0xba, .y=0xd9, .sp=0xf1, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x801b, .value=0xa8}, {.addr=0x801c, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x801d, .a=0xc7, .x=0xba, .y=0xd9, .sp=0xf1, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x801b, .value=0xa8}, {.addr=0x801c, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x801b, .value=0xa8, .type=IO_READ},
        {.addr=0x801c, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_016F) {
    const struct CPU_State initial_cpu = {.pc=0xa017, .a=0x74, .x=0xa5, .y=0xec, .sp=0x8c, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa017, .value=0xa8}, {.addr=0xa018, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xa019, .a=0x08, .x=0xa5, .y=0xec, .sp=0x8c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa017, .value=0xa8}, {.addr=0xa018, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xa017, .value=0xa8, .type=IO_READ},
        {.addr=0xa018, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0170) {
    const struct CPU_State initial_cpu = {.pc=0x54e1, .a=0x2b, .x=0xa2, .y=0x4b, .sp=0xd8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x54e1, .value=0xa8}, {.addr=0x54e2, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x54e3, .a=0x20, .x=0xa2, .y=0x4b, .sp=0xd8, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x54e1, .value=0xa8}, {.addr=0x54e2, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x54e1, .value=0xa8, .type=IO_READ},
        {.addr=0x54e2, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0171) {
    const struct CPU_State initial_cpu = {.pc=0x01f5, .a=0x34, .x=0x17, .y=0x09, .sp=0x3c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xa8}, {.addr=0x01f6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x01f7, .a=0x97, .x=0x17, .y=0x09, .sp=0x3c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xa8}, {.addr=0x01f6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x01f5, .value=0xa8, .type=IO_READ},
        {.addr=0x01f6, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0172) {
    const struct CPU_State initial_cpu = {.pc=0x4804, .a=0xb1, .x=0x6d, .y=0xfb, .sp=0xf6, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x4804, .value=0xa8}, {.addr=0x4805, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x4806, .a=0xf6, .x=0x6d, .y=0xfb, .sp=0xf6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4804, .value=0xa8}, {.addr=0x4805, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x4804, .value=0xa8, .type=IO_READ},
        {.addr=0x4805, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0173) {
    const struct CPU_State initial_cpu = {.pc=0x02f9, .a=0x4c, .x=0x18, .y=0x4d, .sp=0x86, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x02f9, .value=0xa8}, {.addr=0x02fa, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x02fb, .a=0x58, .x=0x18, .y=0x4d, .sp=0x86, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x02f9, .value=0xa8}, {.addr=0x02fa, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x02f9, .value=0xa8, .type=IO_READ},
        {.addr=0x02fa, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0174) {
    const struct CPU_State initial_cpu = {.pc=0xfaaa, .a=0x5c, .x=0x55, .y=0xf6, .sp=0xfc, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xfaaa, .value=0xa8}, {.addr=0xfaab, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xfaac, .a=0xc3, .x=0x55, .y=0xf6, .sp=0xfc, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xfaaa, .value=0xa8}, {.addr=0xfaab, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xfaaa, .value=0xa8, .type=IO_READ},
        {.addr=0xfaab, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0175) {
    const struct CPU_State initial_cpu = {.pc=0xa314, .a=0x38, .x=0x5a, .y=0xac, .sp=0x4e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xa314, .value=0xa8}, {.addr=0xa315, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xa316, .a=0x34, .x=0x5a, .y=0xac, .sp=0x4e, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xa314, .value=0xa8}, {.addr=0xa315, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xa314, .value=0xa8, .type=IO_READ},
        {.addr=0xa315, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0176) {
    const struct CPU_State initial_cpu = {.pc=0xacb2, .a=0xf8, .x=0xfc, .y=0x40, .sp=0x55, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xacb2, .value=0xa8}, {.addr=0xacb3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xacb4, .a=0x9a, .x=0xfc, .y=0x40, .sp=0x55, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xacb2, .value=0xa8}, {.addr=0xacb3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xacb2, .value=0xa8, .type=IO_READ},
        {.addr=0xacb3, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0177) {
    const struct CPU_State initial_cpu = {.pc=0x0e5d, .a=0x23, .x=0xf3, .y=0x22, .sp=0x62, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0e5d, .value=0xa8}, {.addr=0x0e5e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0e5f, .a=0x25, .x=0xf3, .y=0x22, .sp=0x62, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0e5d, .value=0xa8}, {.addr=0x0e5e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0e5d, .value=0xa8, .type=IO_READ},
        {.addr=0x0e5e, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0178) {
    const struct CPU_State initial_cpu = {.pc=0x3117, .a=0x26, .x=0xb9, .y=0x05, .sp=0xa7, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x3117, .value=0xa8}, {.addr=0x3118, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x3119, .a=0xad, .x=0xb9, .y=0x05, .sp=0xa7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3117, .value=0xa8}, {.addr=0x3118, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x3117, .value=0xa8, .type=IO_READ},
        {.addr=0x3118, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0179) {
    const struct CPU_State initial_cpu = {.pc=0x63bd, .a=0x6b, .x=0xd3, .y=0xb9, .sp=0xdb, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x63bd, .value=0xa8}, {.addr=0x63be, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x63bf, .a=0xd8, .x=0xd3, .y=0xb9, .sp=0xdb, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x63bd, .value=0xa8}, {.addr=0x63be, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x63bd, .value=0xa8, .type=IO_READ},
        {.addr=0x63be, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_017A) {
    const struct CPU_State initial_cpu = {.pc=0xc947, .a=0x25, .x=0x4c, .y=0x57, .sp=0x7e, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xc947, .value=0xa8}, {.addr=0xc948, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc949, .a=0x64, .x=0x4c, .y=0x57, .sp=0x7e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xc947, .value=0xa8}, {.addr=0xc948, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc947, .value=0xa8, .type=IO_READ},
        {.addr=0xc948, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_017B) {
    const struct CPU_State initial_cpu = {.pc=0xd61f, .a=0x57, .x=0x2b, .y=0x89, .sp=0x00, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xd61f, .value=0xa8}, {.addr=0xd620, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xd621, .a=0x61, .x=0x2b, .y=0x89, .sp=0x00, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xd61f, .value=0xa8}, {.addr=0xd620, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xd61f, .value=0xa8, .type=IO_READ},
        {.addr=0xd620, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_017C) {
    const struct CPU_State initial_cpu = {.pc=0xd575, .a=0xf8, .x=0x38, .y=0xb8, .sp=0xe3, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xd575, .value=0xa8}, {.addr=0xd576, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xd577, .a=0x63, .x=0x38, .y=0xb8, .sp=0xe3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xd575, .value=0xa8}, {.addr=0xd576, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xd575, .value=0xa8, .type=IO_READ},
        {.addr=0xd576, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_017D) {
    const struct CPU_State initial_cpu = {.pc=0xeada, .a=0x01, .x=0x09, .y=0x91, .sp=0x65, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xeada, .value=0xa8}, {.addr=0xeadb, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xeadc, .a=0x67, .x=0x09, .y=0x91, .sp=0x65, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xeada, .value=0xa8}, {.addr=0xeadb, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xeada, .value=0xa8, .type=IO_READ},
        {.addr=0xeadb, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_017E) {
    const struct CPU_State initial_cpu = {.pc=0xb018, .a=0x7f, .x=0x92, .y=0xef, .sp=0x3e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xb018, .value=0xa8}, {.addr=0xb019, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xb01a, .a=0x26, .x=0x92, .y=0xef, .sp=0x3e, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb018, .value=0xa8}, {.addr=0xb019, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xb018, .value=0xa8, .type=IO_READ},
        {.addr=0xb019, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_017F) {
    const struct CPU_State initial_cpu = {.pc=0xee51, .a=0x75, .x=0x18, .y=0x8b, .sp=0x23, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xee51, .value=0xa8}, {.addr=0xee52, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xee53, .a=0xd5, .x=0x18, .y=0x8b, .sp=0x23, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xee51, .value=0xa8}, {.addr=0xee52, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xee51, .value=0xa8, .type=IO_READ},
        {.addr=0xee52, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0180) {
    const struct CPU_State initial_cpu = {.pc=0xecd0, .a=0x1a, .x=0x0a, .y=0xaf, .sp=0x01, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xecd0, .value=0xa8}, {.addr=0xecd1, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xecd2, .a=0x9c, .x=0x0a, .y=0xaf, .sp=0x01, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xecd0, .value=0xa8}, {.addr=0xecd1, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xecd0, .value=0xa8, .type=IO_READ},
        {.addr=0xecd1, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0181) {
    const struct CPU_State initial_cpu = {.pc=0x5331, .a=0x63, .x=0x47, .y=0xbc, .sp=0x97, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x5331, .value=0xa8}, {.addr=0x5332, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x5333, .a=0x2a, .x=0x47, .y=0xbc, .sp=0x97, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5331, .value=0xa8}, {.addr=0x5332, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x5331, .value=0xa8, .type=IO_READ},
        {.addr=0x5332, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0182) {
    const struct CPU_State initial_cpu = {.pc=0x112f, .a=0xb5, .x=0xb2, .y=0xdb, .sp=0x2d, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x112f, .value=0xa8}, {.addr=0x1130, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x1131, .a=0x30, .x=0xb2, .y=0xdb, .sp=0x2d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x112f, .value=0xa8}, {.addr=0x1130, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x112f, .value=0xa8, .type=IO_READ},
        {.addr=0x1130, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0183) {
    const struct CPU_State initial_cpu = {.pc=0x236e, .a=0xf6, .x=0xbe, .y=0xc8, .sp=0xea, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x236e, .value=0xa8}, {.addr=0x236f, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x2370, .a=0xfa, .x=0xbe, .y=0xc8, .sp=0xea, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x236e, .value=0xa8}, {.addr=0x236f, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x236e, .value=0xa8, .type=IO_READ},
        {.addr=0x236f, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0184) {
    const struct CPU_State initial_cpu = {.pc=0x32db, .a=0xa5, .x=0x7e, .y=0x38, .sp=0x4c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x32db, .value=0xa8}, {.addr=0x32dc, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x32dd, .a=0x59, .x=0x7e, .y=0x38, .sp=0x4c, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x32db, .value=0xa8}, {.addr=0x32dc, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x32db, .value=0xa8, .type=IO_READ},
        {.addr=0x32dc, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0185) {
    const struct CPU_State initial_cpu = {.pc=0x6f52, .a=0x13, .x=0x80, .y=0x93, .sp=0x1d, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x6f52, .value=0xa8}, {.addr=0x6f53, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x6f54, .a=0xfe, .x=0x80, .y=0x93, .sp=0x1d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6f52, .value=0xa8}, {.addr=0x6f53, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x6f52, .value=0xa8, .type=IO_READ},
        {.addr=0x6f53, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0186) {
    const struct CPU_State initial_cpu = {.pc=0xd11e, .a=0x2d, .x=0xa5, .y=0x71, .sp=0x59, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xd11e, .value=0xa8}, {.addr=0xd11f, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xd120, .a=0xf8, .x=0xa5, .y=0x71, .sp=0x59, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd11e, .value=0xa8}, {.addr=0xd11f, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xd11e, .value=0xa8, .type=IO_READ},
        {.addr=0xd11f, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0187) {
    const struct CPU_State initial_cpu = {.pc=0x711c, .a=0xb1, .x=0xdb, .y=0x7d, .sp=0xea, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x711c, .value=0xa8}, {.addr=0x711d, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x711e, .a=0x67, .x=0xdb, .y=0x7d, .sp=0xea, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x711c, .value=0xa8}, {.addr=0x711d, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x711c, .value=0xa8, .type=IO_READ},
        {.addr=0x711d, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0188) {
    const struct CPU_State initial_cpu = {.pc=0x9ba4, .a=0xdf, .x=0xc6, .y=0x29, .sp=0x41, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x9ba4, .value=0xa8}, {.addr=0x9ba5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9ba6, .a=0x02, .x=0xc6, .y=0x29, .sp=0x41, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9ba4, .value=0xa8}, {.addr=0x9ba5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9ba4, .value=0xa8, .type=IO_READ},
        {.addr=0x9ba5, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0189) {
    const struct CPU_State initial_cpu = {.pc=0x43e6, .a=0x88, .x=0xcd, .y=0x3e, .sp=0x80, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x43e6, .value=0xa8}, {.addr=0x43e7, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x43e8, .a=0xa4, .x=0xcd, .y=0x3e, .sp=0x80, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x43e6, .value=0xa8}, {.addr=0x43e7, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x43e6, .value=0xa8, .type=IO_READ},
        {.addr=0x43e7, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_018A) {
    const struct CPU_State initial_cpu = {.pc=0x5404, .a=0x1b, .x=0xa0, .y=0x8f, .sp=0x76, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x5404, .value=0xa8}, {.addr=0x5405, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x5406, .a=0x73, .x=0xa0, .y=0x8f, .sp=0x76, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x5404, .value=0xa8}, {.addr=0x5405, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x5404, .value=0xa8, .type=IO_READ},
        {.addr=0x5405, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_018B) {
    const struct CPU_State initial_cpu = {.pc=0x665c, .a=0xb3, .x=0xfc, .y=0xcd, .sp=0x11, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x665c, .value=0xa8}, {.addr=0x665d, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x665e, .a=0x2e, .x=0xfc, .y=0xcd, .sp=0x11, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x665c, .value=0xa8}, {.addr=0x665d, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x665c, .value=0xa8, .type=IO_READ},
        {.addr=0x665d, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_018C) {
    const struct CPU_State initial_cpu = {.pc=0xd0e8, .a=0x1c, .x=0x41, .y=0x05, .sp=0xcb, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e8, .value=0xa8}, {.addr=0xd0e9, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xd0ea, .a=0x79, .x=0x41, .y=0x05, .sp=0xcb, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd0e8, .value=0xa8}, {.addr=0xd0e9, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xd0e8, .value=0xa8, .type=IO_READ},
        {.addr=0xd0e9, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_018D) {
    const struct CPU_State initial_cpu = {.pc=0xa4aa, .a=0xe7, .x=0x50, .y=0xec, .sp=0xe6, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xa4aa, .value=0xa8}, {.addr=0xa4ab, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xa4ac, .a=0x54, .x=0x50, .y=0xec, .sp=0xe6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa4aa, .value=0xa8}, {.addr=0xa4ab, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xa4aa, .value=0xa8, .type=IO_READ},
        {.addr=0xa4ab, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_018E) {
    const struct CPU_State initial_cpu = {.pc=0x9c75, .a=0x75, .x=0xd9, .y=0x9a, .sp=0x3b, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x9c75, .value=0xa8}, {.addr=0x9c76, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x9c77, .a=0x71, .x=0xd9, .y=0x9a, .sp=0x3b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9c75, .value=0xa8}, {.addr=0x9c76, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x9c75, .value=0xa8, .type=IO_READ},
        {.addr=0x9c76, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_018F) {
    const struct CPU_State initial_cpu = {.pc=0xddd2, .a=0x26, .x=0x0a, .y=0xb9, .sp=0x56, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xddd2, .value=0xa8}, {.addr=0xddd3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xddd4, .a=0x88, .x=0x0a, .y=0xb9, .sp=0x56, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xddd2, .value=0xa8}, {.addr=0xddd3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xddd2, .value=0xa8, .type=IO_READ},
        {.addr=0xddd3, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0190) {
    const struct CPU_State initial_cpu = {.pc=0x4e2f, .a=0xaa, .x=0x3e, .y=0xb8, .sp=0xf6, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x4e2f, .value=0xa8}, {.addr=0x4e30, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x4e31, .a=0x9a, .x=0x3e, .y=0xb8, .sp=0xf6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x4e2f, .value=0xa8}, {.addr=0x4e30, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x4e2f, .value=0xa8, .type=IO_READ},
        {.addr=0x4e30, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0191) {
    const struct CPU_State initial_cpu = {.pc=0x41fd, .a=0x07, .x=0x5d, .y=0xcb, .sp=0xf3, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x41fd, .value=0xa8}, {.addr=0x41fe, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x41ff, .a=0xd9, .x=0x5d, .y=0xcb, .sp=0xf3, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x41fd, .value=0xa8}, {.addr=0x41fe, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x41fd, .value=0xa8, .type=IO_READ},
        {.addr=0x41fe, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0192) {
    const struct CPU_State initial_cpu = {.pc=0xeae9, .a=0xcc, .x=0xdd, .y=0x64, .sp=0x18, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xeae9, .value=0xa8}, {.addr=0xeaea, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xeaeb, .a=0xb0, .x=0xdd, .y=0x64, .sp=0x18, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xeae9, .value=0xa8}, {.addr=0xeaea, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xeae9, .value=0xa8, .type=IO_READ},
        {.addr=0xeaea, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0193) {
    const struct CPU_State initial_cpu = {.pc=0x4cf0, .a=0x3a, .x=0xef, .y=0x98, .sp=0xc9, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf0, .value=0xa8}, {.addr=0x4cf1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4cf2, .a=0x0d, .x=0xef, .y=0x98, .sp=0xc9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4cf0, .value=0xa8}, {.addr=0x4cf1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4cf0, .value=0xa8, .type=IO_READ},
        {.addr=0x4cf1, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0194) {
    const struct CPU_State initial_cpu = {.pc=0x099f, .a=0x73, .x=0x2c, .y=0x26, .sp=0xbd, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x099f, .value=0xa8}, {.addr=0x09a0, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x09a1, .a=0xf4, .x=0x2c, .y=0x26, .sp=0xbd, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x099f, .value=0xa8}, {.addr=0x09a0, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x099f, .value=0xa8, .type=IO_READ},
        {.addr=0x09a0, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0195) {
    const struct CPU_State initial_cpu = {.pc=0xb07f, .a=0xfb, .x=0xcb, .y=0xda, .sp=0xc7, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xb07f, .value=0xa8}, {.addr=0xb080, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xb081, .a=0x0a, .x=0xcb, .y=0xda, .sp=0xc7, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb07f, .value=0xa8}, {.addr=0xb080, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xb07f, .value=0xa8, .type=IO_READ},
        {.addr=0xb080, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0196) {
    const struct CPU_State initial_cpu = {.pc=0x2a39, .a=0x45, .x=0x84, .y=0x47, .sp=0x01, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2a39, .value=0xa8}, {.addr=0x2a3a, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x2a3b, .a=0xfc, .x=0x84, .y=0x47, .sp=0x01, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2a39, .value=0xa8}, {.addr=0x2a3a, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x2a39, .value=0xa8, .type=IO_READ},
        {.addr=0x2a3a, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0197) {
    const struct CPU_State initial_cpu = {.pc=0x0c53, .a=0xd0, .x=0xea, .y=0x7d, .sp=0x46, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0c53, .value=0xa8}, {.addr=0x0c54, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x0c55, .a=0x6e, .x=0xea, .y=0x7d, .sp=0x46, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0c53, .value=0xa8}, {.addr=0x0c54, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x0c53, .value=0xa8, .type=IO_READ},
        {.addr=0x0c54, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0198) {
    const struct CPU_State initial_cpu = {.pc=0xe3e2, .a=0x26, .x=0xdc, .y=0x48, .sp=0xba, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e2, .value=0xa8}, {.addr=0xe3e3, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xe3e4, .a=0x55, .x=0xdc, .y=0x48, .sp=0xba, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xe3e2, .value=0xa8}, {.addr=0xe3e3, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xe3e2, .value=0xa8, .type=IO_READ},
        {.addr=0xe3e3, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0199) {
    const struct CPU_State initial_cpu = {.pc=0x4a50, .a=0x3e, .x=0x95, .y=0xf4, .sp=0xed, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4a50, .value=0xa8}, {.addr=0x4a51, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x4a52, .a=0x0a, .x=0x95, .y=0xf4, .sp=0xed, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4a50, .value=0xa8}, {.addr=0x4a51, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x4a50, .value=0xa8, .type=IO_READ},
        {.addr=0x4a51, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_019A) {
    const struct CPU_State initial_cpu = {.pc=0x4f7d, .a=0x37, .x=0xea, .y=0xa2, .sp=0x34, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x4f7d, .value=0xa8}, {.addr=0x4f7e, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x4f7f, .a=0xc3, .x=0xea, .y=0xa2, .sp=0x34, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4f7d, .value=0xa8}, {.addr=0x4f7e, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x4f7d, .value=0xa8, .type=IO_READ},
        {.addr=0x4f7e, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_019B) {
    const struct CPU_State initial_cpu = {.pc=0x2e0e, .a=0x26, .x=0x20, .y=0x86, .sp=0xbd, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x2e0e, .value=0xa8}, {.addr=0x2e0f, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x2e10, .a=0x93, .x=0x20, .y=0x86, .sp=0xbd, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2e0e, .value=0xa8}, {.addr=0x2e0f, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x2e0e, .value=0xa8, .type=IO_READ},
        {.addr=0x2e0f, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_019C) {
    const struct CPU_State initial_cpu = {.pc=0xa6a5, .a=0xab, .x=0x34, .y=0xe1, .sp=0xb3, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xa6a5, .value=0xa8}, {.addr=0xa6a6, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xa6a7, .a=0xd7, .x=0x34, .y=0xe1, .sp=0xb3, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa6a5, .value=0xa8}, {.addr=0xa6a6, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xa6a5, .value=0xa8, .type=IO_READ},
        {.addr=0xa6a6, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_019D) {
    const struct CPU_State initial_cpu = {.pc=0xf0f1, .a=0xe5, .x=0x14, .y=0x1a, .sp=0x63, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xf0f1, .value=0xa8}, {.addr=0xf0f2, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xf0f3, .a=0xd3, .x=0x14, .y=0x1a, .sp=0x63, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xf0f1, .value=0xa8}, {.addr=0xf0f2, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xf0f1, .value=0xa8, .type=IO_READ},
        {.addr=0xf0f2, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_019E) {
    const struct CPU_State initial_cpu = {.pc=0x9134, .a=0xc0, .x=0x23, .y=0xc0, .sp=0x41, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x9134, .value=0xa8}, {.addr=0x9135, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9136, .a=0xff, .x=0x23, .y=0xc0, .sp=0x41, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x9134, .value=0xa8}, {.addr=0x9135, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9134, .value=0xa8, .type=IO_READ},
        {.addr=0x9135, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_019F) {
    const struct CPU_State initial_cpu = {.pc=0x3f94, .a=0x86, .x=0x8a, .y=0x86, .sp=0x54, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3f94, .value=0xa8}, {.addr=0x3f95, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3f96, .a=0xc0, .x=0x8a, .y=0x86, .sp=0x54, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3f94, .value=0xa8}, {.addr=0x3f95, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3f94, .value=0xa8, .type=IO_READ},
        {.addr=0x3f95, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xbd4f, .a=0x30, .x=0x65, .y=0xd2, .sp=0x1f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xbd4f, .value=0xa8}, {.addr=0xbd50, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xbd51, .a=0x8e, .x=0x65, .y=0xd2, .sp=0x1f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xbd4f, .value=0xa8}, {.addr=0xbd50, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xbd4f, .value=0xa8, .type=IO_READ},
        {.addr=0xbd50, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x0906, .a=0xd4, .x=0x5c, .y=0xb8, .sp=0x20, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0906, .value=0xa8}, {.addr=0x0907, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x0908, .a=0x11, .x=0x5c, .y=0xb8, .sp=0x20, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0906, .value=0xa8}, {.addr=0x0907, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x0906, .value=0xa8, .type=IO_READ},
        {.addr=0x0907, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xdc5c, .a=0x9a, .x=0xce, .y=0xf0, .sp=0xec, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xdc5c, .value=0xa8}, {.addr=0xdc5d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdc5e, .a=0xfd, .x=0xce, .y=0xf0, .sp=0xec, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xdc5c, .value=0xa8}, {.addr=0xdc5d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdc5c, .value=0xa8, .type=IO_READ},
        {.addr=0xdc5d, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x7936, .a=0xf4, .x=0xef, .y=0x4e, .sp=0x96, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x7936, .value=0xa8}, {.addr=0x7937, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x7938, .a=0xe1, .x=0xef, .y=0x4e, .sp=0x96, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7936, .value=0xa8}, {.addr=0x7937, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x7936, .value=0xa8, .type=IO_READ},
        {.addr=0x7937, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x321b, .a=0x58, .x=0x30, .y=0x89, .sp=0x31, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x321b, .value=0xa8}, {.addr=0x321c, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x321d, .a=0xab, .x=0x30, .y=0x89, .sp=0x31, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x321b, .value=0xa8}, {.addr=0x321c, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x321b, .value=0xa8, .type=IO_READ},
        {.addr=0x321c, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x8f05, .a=0x51, .x=0xc6, .y=0x0b, .sp=0x3e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x8f05, .value=0xa8}, {.addr=0x8f06, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x8f07, .a=0xce, .x=0xc6, .y=0x0b, .sp=0x3e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8f05, .value=0xa8}, {.addr=0x8f06, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x8f05, .value=0xa8, .type=IO_READ},
        {.addr=0x8f06, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x841f, .a=0x87, .x=0x50, .y=0x9b, .sp=0xed, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x841f, .value=0xa8}, {.addr=0x8420, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x8421, .a=0xbc, .x=0x50, .y=0x9b, .sp=0xed, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x841f, .value=0xa8}, {.addr=0x8420, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x841f, .value=0xa8, .type=IO_READ},
        {.addr=0x8420, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x2443, .a=0x7c, .x=0xbb, .y=0xd6, .sp=0xdc, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x2443, .value=0xa8}, {.addr=0x2444, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x2445, .a=0x5c, .x=0xbb, .y=0xd6, .sp=0xdc, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x2443, .value=0xa8}, {.addr=0x2444, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x2443, .value=0xa8, .type=IO_READ},
        {.addr=0x2444, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x8463, .a=0x7c, .x=0x01, .y=0x2c, .sp=0xd1, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8463, .value=0xa8}, {.addr=0x8464, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8465, .a=0x8f, .x=0x01, .y=0x2c, .sp=0xd1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8463, .value=0xa8}, {.addr=0x8464, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8463, .value=0xa8, .type=IO_READ},
        {.addr=0x8464, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xacb1, .a=0x90, .x=0xf4, .y=0xf1, .sp=0x1c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xacb1, .value=0xa8}, {.addr=0xacb2, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xacb3, .a=0xeb, .x=0xf4, .y=0xf1, .sp=0x1c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xacb1, .value=0xa8}, {.addr=0xacb2, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xacb1, .value=0xa8, .type=IO_READ},
        {.addr=0xacb2, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x0609, .a=0xdd, .x=0x04, .y=0xe8, .sp=0xc3, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0609, .value=0xa8}, {.addr=0x060a, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x060b, .a=0xfc, .x=0x04, .y=0xe8, .sp=0xc3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0609, .value=0xa8}, {.addr=0x060a, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x0609, .value=0xa8, .type=IO_READ},
        {.addr=0x060a, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x1d40, .a=0xbe, .x=0x96, .y=0x65, .sp=0xc5, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x1d40, .value=0xa8}, {.addr=0x1d41, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x1d42, .a=0x73, .x=0x96, .y=0x65, .sp=0xc5, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1d40, .value=0xa8}, {.addr=0x1d41, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x1d40, .value=0xa8, .type=IO_READ},
        {.addr=0x1d41, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xf940, .a=0x11, .x=0xd1, .y=0x0f, .sp=0x2c, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xf940, .value=0xa8}, {.addr=0xf941, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf942, .a=0xb3, .x=0xd1, .y=0x0f, .sp=0x2c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf940, .value=0xa8}, {.addr=0xf941, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf940, .value=0xa8, .type=IO_READ},
        {.addr=0xf941, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x4216, .a=0xc0, .x=0x91, .y=0x6c, .sp=0xd2, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x4216, .value=0xa8}, {.addr=0x4217, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x4218, .a=0x57, .x=0x91, .y=0x6c, .sp=0xd2, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x4216, .value=0xa8}, {.addr=0x4217, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x4216, .value=0xa8, .type=IO_READ},
        {.addr=0x4217, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x73d7, .a=0x49, .x=0xaf, .y=0x61, .sp=0x8d, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x73d7, .value=0xa8}, {.addr=0x73d8, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x73d9, .a=0xbe, .x=0xaf, .y=0x61, .sp=0x8d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x73d7, .value=0xa8}, {.addr=0x73d8, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x73d7, .value=0xa8, .type=IO_READ},
        {.addr=0x73d8, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x5232, .a=0xb0, .x=0xfd, .y=0x1e, .sp=0x1a, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x5232, .value=0xa8}, {.addr=0x5233, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x5234, .a=0xdb, .x=0xfd, .y=0x1e, .sp=0x1a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x5232, .value=0xa8}, {.addr=0x5233, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x5232, .value=0xa8, .type=IO_READ},
        {.addr=0x5233, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xa070, .a=0xe6, .x=0x48, .y=0x04, .sp=0xe4, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xa070, .value=0xa8}, {.addr=0xa071, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xa072, .a=0xeb, .x=0x48, .y=0x04, .sp=0xe4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa070, .value=0xa8}, {.addr=0xa071, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xa070, .value=0xa8, .type=IO_READ},
        {.addr=0xa071, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x64b0, .a=0xd7, .x=0x4f, .y=0xd8, .sp=0x97, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x64b0, .value=0xa8}, {.addr=0x64b1, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x64b2, .a=0xcf, .x=0x4f, .y=0xd8, .sp=0x97, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x64b0, .value=0xa8}, {.addr=0x64b1, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x64b0, .value=0xa8, .type=IO_READ},
        {.addr=0x64b1, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x10eb, .a=0x2c, .x=0x99, .y=0x2b, .sp=0xff, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x10eb, .value=0xa8}, {.addr=0x10ec, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x10ed, .a=0xd3, .x=0x99, .y=0x2b, .sp=0xff, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x10eb, .value=0xa8}, {.addr=0x10ec, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x10eb, .value=0xa8, .type=IO_READ},
        {.addr=0x10ec, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x5e72, .a=0x73, .x=0x26, .y=0x18, .sp=0x1c, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x5e72, .value=0xa8}, {.addr=0x5e73, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x5e74, .a=0x5f, .x=0x26, .y=0x18, .sp=0x1c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x5e72, .value=0xa8}, {.addr=0x5e73, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x5e72, .value=0xa8, .type=IO_READ},
        {.addr=0x5e73, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x9290, .a=0xfa, .x=0xc5, .y=0x2c, .sp=0xcb, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x9290, .value=0xa8}, {.addr=0x9291, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x9292, .a=0x11, .x=0xc5, .y=0x2c, .sp=0xcb, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9290, .value=0xa8}, {.addr=0x9291, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x9290, .value=0xa8, .type=IO_READ},
        {.addr=0x9291, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x5378, .a=0x0e, .x=0x2d, .y=0x66, .sp=0x03, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x5378, .value=0xa8}, {.addr=0x5379, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x537a, .a=0x78, .x=0x2d, .y=0x66, .sp=0x03, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x5378, .value=0xa8}, {.addr=0x5379, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x5378, .value=0xa8, .type=IO_READ},
        {.addr=0x5379, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x8746, .a=0x37, .x=0xe5, .y=0x35, .sp=0xdb, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x8746, .value=0xa8}, {.addr=0x8747, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x8748, .a=0x61, .x=0xe5, .y=0x35, .sp=0xdb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8746, .value=0xa8}, {.addr=0x8747, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x8746, .value=0xa8, .type=IO_READ},
        {.addr=0x8747, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xbfcf, .a=0xfb, .x=0x4b, .y=0x61, .sp=0xed, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xbfcf, .value=0xa8}, {.addr=0xbfd0, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xbfd1, .a=0xe8, .x=0x4b, .y=0x61, .sp=0xed, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xbfcf, .value=0xa8}, {.addr=0xbfd0, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xbfcf, .value=0xa8, .type=IO_READ},
        {.addr=0xbfd0, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xd415, .a=0x02, .x=0x55, .y=0x13, .sp=0xed, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xd415, .value=0xa8}, {.addr=0xd416, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xd417, .a=0x9f, .x=0x55, .y=0x13, .sp=0xed, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xd415, .value=0xa8}, {.addr=0xd416, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xd415, .value=0xa8, .type=IO_READ},
        {.addr=0xd416, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xc202, .a=0x4c, .x=0xdd, .y=0xff, .sp=0x8e, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xc202, .value=0xa8}, {.addr=0xc203, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xc204, .a=0x40, .x=0xdd, .y=0xff, .sp=0x8e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xc202, .value=0xa8}, {.addr=0xc203, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xc202, .value=0xa8, .type=IO_READ},
        {.addr=0xc203, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x83cd, .a=0x19, .x=0xe2, .y=0xec, .sp=0x72, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x83cd, .value=0xa8}, {.addr=0x83ce, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x83cf, .a=0x3e, .x=0xe2, .y=0xec, .sp=0x72, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x83cd, .value=0xa8}, {.addr=0x83ce, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x83cd, .value=0xa8, .type=IO_READ},
        {.addr=0x83ce, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x5d99, .a=0x98, .x=0x14, .y=0x2e, .sp=0x8c, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x5d99, .value=0xa8}, {.addr=0x5d9a, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x5d9b, .a=0x95, .x=0x14, .y=0x2e, .sp=0x8c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x5d99, .value=0xa8}, {.addr=0x5d9a, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x5d99, .value=0xa8, .type=IO_READ},
        {.addr=0x5d9a, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xbc74, .a=0xc0, .x=0xff, .y=0x49, .sp=0xb4, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xbc74, .value=0xa8}, {.addr=0xbc75, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xbc76, .a=0xca, .x=0xff, .y=0x49, .sp=0xb4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xbc74, .value=0xa8}, {.addr=0xbc75, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xbc74, .value=0xa8, .type=IO_READ},
        {.addr=0xbc75, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xbe97, .a=0xbb, .x=0x70, .y=0xd2, .sp=0xcd, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xbe97, .value=0xa8}, {.addr=0xbe98, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xbe99, .a=0x9d, .x=0x70, .y=0xd2, .sp=0xcd, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xbe97, .value=0xa8}, {.addr=0xbe98, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xbe97, .value=0xa8, .type=IO_READ},
        {.addr=0xbe98, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x3bc8, .a=0x39, .x=0x98, .y=0xf1, .sp=0x3d, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x3bc8, .value=0xa8}, {.addr=0x3bc9, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x3bca, .a=0x71, .x=0x98, .y=0xf1, .sp=0x3d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x3bc8, .value=0xa8}, {.addr=0x3bc9, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x3bc8, .value=0xa8, .type=IO_READ},
        {.addr=0x3bc9, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x9d13, .a=0x4e, .x=0x88, .y=0x04, .sp=0xfa, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9d13, .value=0xa8}, {.addr=0x9d14, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x9d15, .a=0x29, .x=0x88, .y=0x04, .sp=0xfa, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x9d13, .value=0xa8}, {.addr=0x9d14, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x9d13, .value=0xa8, .type=IO_READ},
        {.addr=0x9d14, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x88b3, .a=0x24, .x=0xcc, .y=0x61, .sp=0x82, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x88b3, .value=0xa8}, {.addr=0x88b4, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x88b5, .a=0xf0, .x=0xcc, .y=0x61, .sp=0x82, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x88b3, .value=0xa8}, {.addr=0x88b4, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x88b3, .value=0xa8, .type=IO_READ},
        {.addr=0x88b4, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x89c6, .a=0x26, .x=0x58, .y=0x2c, .sp=0x56, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x89c6, .value=0xa8}, {.addr=0x89c7, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x89c8, .a=0xb7, .x=0x58, .y=0x2c, .sp=0x56, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x89c6, .value=0xa8}, {.addr=0x89c7, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x89c6, .value=0xa8, .type=IO_READ},
        {.addr=0x89c7, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xf9db, .a=0xde, .x=0x7a, .y=0x7c, .sp=0x1e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xf9db, .value=0xa8}, {.addr=0xf9dc, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xf9dd, .a=0x84, .x=0x7a, .y=0x7c, .sp=0x1e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xf9db, .value=0xa8}, {.addr=0xf9dc, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xf9db, .value=0xa8, .type=IO_READ},
        {.addr=0xf9dc, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xac2d, .a=0x1a, .x=0x4b, .y=0x2e, .sp=0xee, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xac2d, .value=0xa8}, {.addr=0xac2e, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xac2f, .a=0x64, .x=0x4b, .y=0x2e, .sp=0xee, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xac2d, .value=0xa8}, {.addr=0xac2e, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xac2d, .value=0xa8, .type=IO_READ},
        {.addr=0xac2e, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x310d, .a=0x5e, .x=0xf2, .y=0x08, .sp=0xf0, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x310d, .value=0xa8}, {.addr=0x310e, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x310f, .a=0x4b, .x=0xf2, .y=0x08, .sp=0xf0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x310d, .value=0xa8}, {.addr=0x310e, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x310d, .value=0xa8, .type=IO_READ},
        {.addr=0x310e, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x0818, .a=0x2b, .x=0x4f, .y=0x6b, .sp=0x23, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0818, .value=0xa8}, {.addr=0x0819, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x081a, .a=0xdf, .x=0x4f, .y=0x6b, .sp=0x23, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0818, .value=0xa8}, {.addr=0x0819, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x0818, .value=0xa8, .type=IO_READ},
        {.addr=0x0819, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xab75, .a=0xa0, .x=0x3a, .y=0xcc, .sp=0xf3, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xab75, .value=0xa8}, {.addr=0xab76, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xab77, .a=0x12, .x=0x3a, .y=0xcc, .sp=0xf3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xab75, .value=0xa8}, {.addr=0xab76, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xab75, .value=0xa8, .type=IO_READ},
        {.addr=0xab76, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x0de9, .a=0x3f, .x=0xa6, .y=0x52, .sp=0xcf, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0de9, .value=0xa8}, {.addr=0x0dea, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x0deb, .a=0xef, .x=0xa6, .y=0x52, .sp=0xcf, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0de9, .value=0xa8}, {.addr=0x0dea, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x0de9, .value=0xa8, .type=IO_READ},
        {.addr=0x0dea, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xcfed, .a=0xe8, .x=0x40, .y=0xc9, .sp=0x5c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xcfed, .value=0xa8}, {.addr=0xcfee, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xcfef, .a=0x1d, .x=0x40, .y=0xc9, .sp=0x5c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xcfed, .value=0xa8}, {.addr=0xcfee, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xcfed, .value=0xa8, .type=IO_READ},
        {.addr=0xcfee, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xa4a7, .a=0x73, .x=0x9f, .y=0xd9, .sp=0x9f, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xa4a7, .value=0xa8}, {.addr=0xa4a8, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xa4a9, .a=0xab, .x=0x9f, .y=0xd9, .sp=0x9f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa4a7, .value=0xa8}, {.addr=0xa4a8, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xa4a7, .value=0xa8, .type=IO_READ},
        {.addr=0xa4a8, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x54a4, .a=0x2c, .x=0xf8, .y=0x62, .sp=0xfb, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x54a4, .value=0xa8}, {.addr=0x54a5, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x54a6, .a=0xbb, .x=0xf8, .y=0x62, .sp=0xfb, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x54a4, .value=0xa8}, {.addr=0x54a5, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x54a4, .value=0xa8, .type=IO_READ},
        {.addr=0x54a5, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xa3e8, .a=0x87, .x=0x86, .y=0x8a, .sp=0xbd, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xa3e8, .value=0xa8}, {.addr=0xa3e9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa3ea, .a=0xca, .x=0x86, .y=0x8a, .sp=0xbd, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa3e8, .value=0xa8}, {.addr=0xa3e9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa3e8, .value=0xa8, .type=IO_READ},
        {.addr=0xa3e9, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xe3eb, .a=0x38, .x=0x37, .y=0x6a, .sp=0x18, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xe3eb, .value=0xa8}, {.addr=0xe3ec, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xe3ed, .a=0x16, .x=0x37, .y=0x6a, .sp=0x18, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe3eb, .value=0xa8}, {.addr=0xe3ec, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xe3eb, .value=0xa8, .type=IO_READ},
        {.addr=0xe3ec, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x2e1b, .a=0xb6, .x=0xc8, .y=0x35, .sp=0x8f, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x2e1b, .value=0xa8}, {.addr=0x2e1c, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x2e1d, .a=0xe5, .x=0xc8, .y=0x35, .sp=0x8f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2e1b, .value=0xa8}, {.addr=0x2e1c, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x2e1b, .value=0xa8, .type=IO_READ},
        {.addr=0x2e1c, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x55c0, .a=0xd6, .x=0x60, .y=0xa5, .sp=0x1f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x55c0, .value=0xa8}, {.addr=0x55c1, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x55c2, .a=0xc2, .x=0x60, .y=0xa5, .sp=0x1f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x55c0, .value=0xa8}, {.addr=0x55c1, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x55c0, .value=0xa8, .type=IO_READ},
        {.addr=0x55c1, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xd852, .a=0x35, .x=0x36, .y=0x6f, .sp=0x75, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xd852, .value=0xa8}, {.addr=0xd853, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xd854, .a=0x21, .x=0x36, .y=0x6f, .sp=0x75, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd852, .value=0xa8}, {.addr=0xd853, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xd852, .value=0xa8, .type=IO_READ},
        {.addr=0xd853, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xd03d, .a=0xa8, .x=0xe0, .y=0x3a, .sp=0x19, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xd03d, .value=0xa8}, {.addr=0xd03e, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xd03f, .a=0x56, .x=0xe0, .y=0x3a, .sp=0x19, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd03d, .value=0xa8}, {.addr=0xd03e, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xd03d, .value=0xa8, .type=IO_READ},
        {.addr=0xd03e, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x013c, .a=0xbb, .x=0x64, .y=0x81, .sp=0xcd, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xa8}, {.addr=0x013d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x013e, .a=0xfa, .x=0x64, .y=0x81, .sp=0xcd, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xa8}, {.addr=0x013d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x013c, .value=0xa8, .type=IO_READ},
        {.addr=0x013d, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x531c, .a=0x76, .x=0xe6, .y=0x07, .sp=0x67, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x531c, .value=0xa8}, {.addr=0x531d, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x531e, .a=0x37, .x=0xe6, .y=0x07, .sp=0x67, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x531c, .value=0xa8}, {.addr=0x531d, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x531c, .value=0xa8, .type=IO_READ},
        {.addr=0x531d, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x0d8f, .a=0xc5, .x=0xdd, .y=0xbf, .sp=0x81, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0d8f, .value=0xa8}, {.addr=0x0d90, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x0d91, .a=0x1a, .x=0xdd, .y=0xbf, .sp=0x81, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0d8f, .value=0xa8}, {.addr=0x0d90, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x0d8f, .value=0xa8, .type=IO_READ},
        {.addr=0x0d90, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x1417, .a=0x59, .x=0x1a, .y=0xb2, .sp=0x07, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x1417, .value=0xa8}, {.addr=0x1418, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1419, .a=0x12, .x=0x1a, .y=0xb2, .sp=0x07, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1417, .value=0xa8}, {.addr=0x1418, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1417, .value=0xa8, .type=IO_READ},
        {.addr=0x1418, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xd0a2, .a=0xdf, .x=0xb8, .y=0xb5, .sp=0x3b, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xd0a2, .value=0xa8}, {.addr=0xd0a3, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xd0a4, .a=0x56, .x=0xb8, .y=0xb5, .sp=0x3b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xd0a2, .value=0xa8}, {.addr=0xd0a3, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xd0a2, .value=0xa8, .type=IO_READ},
        {.addr=0xd0a3, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xcfdf, .a=0xb0, .x=0x3e, .y=0x8c, .sp=0x76, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xcfdf, .value=0xa8}, {.addr=0xcfe0, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xcfe1, .a=0xd7, .x=0x3e, .y=0x8c, .sp=0x76, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xcfdf, .value=0xa8}, {.addr=0xcfe0, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xcfdf, .value=0xa8, .type=IO_READ},
        {.addr=0xcfe0, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xccaa, .a=0x92, .x=0xe4, .y=0xfa, .sp=0x7b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xccaa, .value=0xa8}, {.addr=0xccab, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xccac, .a=0x11, .x=0xe4, .y=0xfa, .sp=0x7b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xccaa, .value=0xa8}, {.addr=0xccab, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xccaa, .value=0xa8, .type=IO_READ},
        {.addr=0xccab, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x40fc, .a=0x21, .x=0x9a, .y=0xb1, .sp=0x9f, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x40fc, .value=0xa8}, {.addr=0x40fd, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x40fe, .a=0x74, .x=0x9a, .y=0xb1, .sp=0x9f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x40fc, .value=0xa8}, {.addr=0x40fd, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x40fc, .value=0xa8, .type=IO_READ},
        {.addr=0x40fd, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xecf8, .a=0x38, .x=0x24, .y=0xcd, .sp=0xd5, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xecf8, .value=0xa8}, {.addr=0xecf9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xecfa, .a=0xfa, .x=0x24, .y=0xcd, .sp=0xd5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xecf8, .value=0xa8}, {.addr=0xecf9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xecf8, .value=0xa8, .type=IO_READ},
        {.addr=0xecf9, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x2940, .a=0x33, .x=0xc2, .y=0xa7, .sp=0xe2, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x2940, .value=0xa8}, {.addr=0x2941, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x2942, .a=0x28, .x=0xc2, .y=0xa7, .sp=0xe2, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2940, .value=0xa8}, {.addr=0x2941, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x2940, .value=0xa8, .type=IO_READ},
        {.addr=0x2941, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xa620, .a=0x58, .x=0xff, .y=0xd7, .sp=0x18, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa620, .value=0xa8}, {.addr=0xa621, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xa622, .a=0x76, .x=0xff, .y=0xd7, .sp=0x18, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa620, .value=0xa8}, {.addr=0xa621, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xa620, .value=0xa8, .type=IO_READ},
        {.addr=0xa621, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xcf35, .a=0xec, .x=0x89, .y=0x1a, .sp=0x07, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xcf35, .value=0xa8}, {.addr=0xcf36, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xcf37, .a=0x44, .x=0x89, .y=0x1a, .sp=0x07, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xcf35, .value=0xa8}, {.addr=0xcf36, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xcf35, .value=0xa8, .type=IO_READ},
        {.addr=0xcf36, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x94d3, .a=0x46, .x=0xb2, .y=0xf3, .sp=0x28, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x94d3, .value=0xa8}, {.addr=0x94d4, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x94d5, .a=0xd2, .x=0xb2, .y=0xf3, .sp=0x28, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x94d3, .value=0xa8}, {.addr=0x94d4, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x94d3, .value=0xa8, .type=IO_READ},
        {.addr=0x94d4, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x614f, .a=0xb4, .x=0xcb, .y=0xf9, .sp=0xf2, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x614f, .value=0xa8}, {.addr=0x6150, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6151, .a=0x77, .x=0xcb, .y=0xf9, .sp=0xf2, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x614f, .value=0xa8}, {.addr=0x6150, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x614f, .value=0xa8, .type=IO_READ},
        {.addr=0x6150, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x57db, .a=0x7b, .x=0x46, .y=0x3d, .sp=0x7b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x57db, .value=0xa8}, {.addr=0x57dc, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x57dd, .a=0xf5, .x=0x46, .y=0x3d, .sp=0x7b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x57db, .value=0xa8}, {.addr=0x57dc, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x57db, .value=0xa8, .type=IO_READ},
        {.addr=0x57dc, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x7267, .a=0x10, .x=0x31, .y=0x59, .sp=0x82, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x7267, .value=0xa8}, {.addr=0x7268, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7269, .a=0x61, .x=0x31, .y=0x59, .sp=0x82, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7267, .value=0xa8}, {.addr=0x7268, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7267, .value=0xa8, .type=IO_READ},
        {.addr=0x7268, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xf952, .a=0xe8, .x=0x88, .y=0xef, .sp=0x6d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xf952, .value=0xa8}, {.addr=0xf953, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf954, .a=0xac, .x=0x88, .y=0xef, .sp=0x6d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf952, .value=0xa8}, {.addr=0xf953, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf952, .value=0xa8, .type=IO_READ},
        {.addr=0xf953, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x3cba, .a=0xe7, .x=0x67, .y=0x58, .sp=0x3f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x3cba, .value=0xa8}, {.addr=0x3cbb, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x3cbc, .a=0xa0, .x=0x67, .y=0x58, .sp=0x3f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x3cba, .value=0xa8}, {.addr=0x3cbb, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x3cba, .value=0xa8, .type=IO_READ},
        {.addr=0x3cbb, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xe5a0, .a=0x02, .x=0x3c, .y=0x96, .sp=0x07, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xe5a0, .value=0xa8}, {.addr=0xe5a1, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xe5a2, .a=0xab, .x=0x3c, .y=0x96, .sp=0x07, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xe5a0, .value=0xa8}, {.addr=0xe5a1, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xe5a0, .value=0xa8, .type=IO_READ},
        {.addr=0xe5a1, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xe758, .a=0xc0, .x=0xc8, .y=0x32, .sp=0x86, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xe758, .value=0xa8}, {.addr=0xe759, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xe75a, .a=0xe2, .x=0xc8, .y=0x32, .sp=0x86, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe758, .value=0xa8}, {.addr=0xe759, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xe758, .value=0xa8, .type=IO_READ},
        {.addr=0xe759, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xf27f, .a=0xd8, .x=0xee, .y=0x95, .sp=0x82, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xf27f, .value=0xa8}, {.addr=0xf280, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf281, .a=0x29, .x=0xee, .y=0x95, .sp=0x82, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf27f, .value=0xa8}, {.addr=0xf280, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf27f, .value=0xa8, .type=IO_READ},
        {.addr=0xf280, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x0bca, .a=0xd2, .x=0x80, .y=0x01, .sp=0xba, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0bca, .value=0xa8}, {.addr=0x0bcb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0bcc, .a=0x24, .x=0x80, .y=0x01, .sp=0xba, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0bca, .value=0xa8}, {.addr=0x0bcb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0bca, .value=0xa8, .type=IO_READ},
        {.addr=0x0bcb, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x973e, .a=0x2b, .x=0x6b, .y=0x52, .sp=0xd4, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x973e, .value=0xa8}, {.addr=0x973f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9740, .a=0xdd, .x=0x6b, .y=0x52, .sp=0xd4, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x973e, .value=0xa8}, {.addr=0x973f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x973e, .value=0xa8, .type=IO_READ},
        {.addr=0x973f, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xde7b, .a=0xa2, .x=0xcb, .y=0x20, .sp=0x36, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xde7b, .value=0xa8}, {.addr=0xde7c, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xde7d, .a=0x1d, .x=0xcb, .y=0x20, .sp=0x36, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xde7b, .value=0xa8}, {.addr=0xde7c, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xde7b, .value=0xa8, .type=IO_READ},
        {.addr=0xde7c, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x00bb, .a=0x2c, .x=0x64, .y=0x11, .sp=0x51, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0xa8}, {.addr=0x00bc, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x00bd, .a=0x40, .x=0x64, .y=0x11, .sp=0x51, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0xa8}, {.addr=0x00bc, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x00bb, .value=0xa8, .type=IO_READ},
        {.addr=0x00bc, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x4e18, .a=0xf7, .x=0x94, .y=0xac, .sp=0x79, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4e18, .value=0xa8}, {.addr=0x4e19, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x4e1a, .a=0xfe, .x=0x94, .y=0xac, .sp=0x79, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4e18, .value=0xa8}, {.addr=0x4e19, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x4e18, .value=0xa8, .type=IO_READ},
        {.addr=0x4e19, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xc1d9, .a=0xd8, .x=0x7f, .y=0x66, .sp=0xc8, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xc1d9, .value=0xa8}, {.addr=0xc1da, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc1db, .a=0xf1, .x=0x7f, .y=0x66, .sp=0xc8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xc1d9, .value=0xa8}, {.addr=0xc1da, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc1d9, .value=0xa8, .type=IO_READ},
        {.addr=0xc1da, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x23a5, .a=0xe4, .x=0x6f, .y=0x19, .sp=0xb6, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x23a5, .value=0xa8}, {.addr=0x23a6, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x23a7, .a=0x3e, .x=0x6f, .y=0x19, .sp=0xb6, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x23a5, .value=0xa8}, {.addr=0x23a6, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x23a5, .value=0xa8, .type=IO_READ},
        {.addr=0x23a6, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xe47a, .a=0x86, .x=0x8b, .y=0xa3, .sp=0xe3, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xe47a, .value=0xa8}, {.addr=0xe47b, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xe47c, .a=0xad, .x=0x8b, .y=0xa3, .sp=0xe3, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe47a, .value=0xa8}, {.addr=0xe47b, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xe47a, .value=0xa8, .type=IO_READ},
        {.addr=0xe47b, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x9f67, .a=0x22, .x=0x0f, .y=0xac, .sp=0xca, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x9f67, .value=0xa8}, {.addr=0x9f68, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x9f69, .a=0xbd, .x=0x0f, .y=0xac, .sp=0xca, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9f67, .value=0xa8}, {.addr=0x9f68, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x9f67, .value=0xa8, .type=IO_READ},
        {.addr=0x9f68, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x20ed, .a=0xe5, .x=0x37, .y=0x89, .sp=0x28, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x20ed, .value=0xa8}, {.addr=0x20ee, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x20ef, .a=0x5b, .x=0x37, .y=0x89, .sp=0x28, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x20ed, .value=0xa8}, {.addr=0x20ee, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x20ed, .value=0xa8, .type=IO_READ},
        {.addr=0x20ee, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x348d, .a=0x7c, .x=0x1c, .y=0x82, .sp=0x1a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x348d, .value=0xa8}, {.addr=0x348e, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x348f, .a=0x28, .x=0x1c, .y=0x82, .sp=0x1a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x348d, .value=0xa8}, {.addr=0x348e, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x348d, .value=0xa8, .type=IO_READ},
        {.addr=0x348e, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xef49, .a=0xdf, .x=0x07, .y=0x8a, .sp=0x9b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xef49, .value=0xa8}, {.addr=0xef4a, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xef4b, .a=0xdc, .x=0x07, .y=0x8a, .sp=0x9b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xef49, .value=0xa8}, {.addr=0xef4a, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xef49, .value=0xa8, .type=IO_READ},
        {.addr=0xef4a, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xa565, .a=0xa6, .x=0xe5, .y=0xe5, .sp=0xe2, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xa565, .value=0xa8}, {.addr=0xa566, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa567, .a=0x2a, .x=0xe5, .y=0xe5, .sp=0xe2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa565, .value=0xa8}, {.addr=0xa566, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa565, .value=0xa8, .type=IO_READ},
        {.addr=0xa566, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x81b1, .a=0x54, .x=0xf6, .y=0xc3, .sp=0xf0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x81b1, .value=0xa8}, {.addr=0x81b2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x81b3, .a=0x66, .x=0xf6, .y=0xc3, .sp=0xf0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x81b1, .value=0xa8}, {.addr=0x81b2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x81b1, .value=0xa8, .type=IO_READ},
        {.addr=0x81b2, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xaac0, .a=0x51, .x=0x9b, .y=0x5b, .sp=0x8a, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xaac0, .value=0xa8}, {.addr=0xaac1, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xaac2, .a=0x19, .x=0x9b, .y=0x5b, .sp=0x8a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xaac0, .value=0xa8}, {.addr=0xaac1, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xaac0, .value=0xa8, .type=IO_READ},
        {.addr=0xaac1, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xdc11, .a=0x8f, .x=0x2f, .y=0x57, .sp=0xb0, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xdc11, .value=0xa8}, {.addr=0xdc12, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xdc13, .a=0x4e, .x=0x2f, .y=0x57, .sp=0xb0, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xdc11, .value=0xa8}, {.addr=0xdc12, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xdc11, .value=0xa8, .type=IO_READ},
        {.addr=0xdc12, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x3b94, .a=0x83, .x=0x6f, .y=0xab, .sp=0x78, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x3b94, .value=0xa8}, {.addr=0x3b95, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x3b96, .a=0x9f, .x=0x6f, .y=0xab, .sp=0x78, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3b94, .value=0xa8}, {.addr=0x3b95, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x3b94, .value=0xa8, .type=IO_READ},
        {.addr=0x3b95, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x579c, .a=0xda, .x=0x8f, .y=0x5f, .sp=0xa8, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x579c, .value=0xa8}, {.addr=0x579d, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x579e, .a=0x09, .x=0x8f, .y=0x5f, .sp=0xa8, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x579c, .value=0xa8}, {.addr=0x579d, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x579c, .value=0xa8, .type=IO_READ},
        {.addr=0x579d, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x9497, .a=0x56, .x=0x22, .y=0x3d, .sp=0xf1, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x9497, .value=0xa8}, {.addr=0x9498, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x9499, .a=0x17, .x=0x22, .y=0x3d, .sp=0xf1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9497, .value=0xa8}, {.addr=0x9498, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x9497, .value=0xa8, .type=IO_READ},
        {.addr=0x9498, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x4c99, .a=0x41, .x=0x05, .y=0x37, .sp=0xdb, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x4c99, .value=0xa8}, {.addr=0x4c9a, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x4c9b, .a=0xf2, .x=0x05, .y=0x37, .sp=0xdb, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4c99, .value=0xa8}, {.addr=0x4c9a, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x4c99, .value=0xa8, .type=IO_READ},
        {.addr=0x4c9a, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x44d0, .a=0xfb, .x=0x9e, .y=0x28, .sp=0x31, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x44d0, .value=0xa8}, {.addr=0x44d1, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x44d2, .a=0x57, .x=0x9e, .y=0x28, .sp=0x31, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x44d0, .value=0xa8}, {.addr=0x44d1, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x44d0, .value=0xa8, .type=IO_READ},
        {.addr=0x44d1, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xd0a6, .a=0x8f, .x=0x75, .y=0xfd, .sp=0xbe, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xd0a6, .value=0xa8}, {.addr=0xd0a7, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xd0a8, .a=0x80, .x=0x75, .y=0xfd, .sp=0xbe, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xd0a6, .value=0xa8}, {.addr=0xd0a7, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xd0a6, .value=0xa8, .type=IO_READ},
        {.addr=0xd0a7, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x34ad, .a=0xdd, .x=0x68, .y=0x6f, .sp=0x15, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x34ad, .value=0xa8}, {.addr=0x34ae, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x34af, .a=0xde, .x=0x68, .y=0x6f, .sp=0x15, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x34ad, .value=0xa8}, {.addr=0x34ae, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x34ad, .value=0xa8, .type=IO_READ},
        {.addr=0x34ae, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x0131, .a=0x22, .x=0xfb, .y=0xe8, .sp=0x60, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0xa8}, {.addr=0x0132, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0133, .a=0x66, .x=0xfb, .y=0xe8, .sp=0x60, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xa8}, {.addr=0x0132, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0131, .value=0xa8, .type=IO_READ},
        {.addr=0x0132, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x1903, .a=0xa1, .x=0x8e, .y=0x5d, .sp=0x23, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x1903, .value=0xa8}, {.addr=0x1904, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x1905, .a=0x92, .x=0x8e, .y=0x5d, .sp=0x23, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1903, .value=0xa8}, {.addr=0x1904, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x1903, .value=0xa8, .type=IO_READ},
        {.addr=0x1904, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x35f4, .a=0x2b, .x=0xc8, .y=0x02, .sp=0xfd, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x35f4, .value=0xa8}, {.addr=0x35f5, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x35f6, .a=0x99, .x=0xc8, .y=0x02, .sp=0xfd, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x35f4, .value=0xa8}, {.addr=0x35f5, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x35f4, .value=0xa8, .type=IO_READ},
        {.addr=0x35f5, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0200) {
    const struct CPU_State initial_cpu = {.pc=0xb83d, .a=0xd1, .x=0xd7, .y=0xb7, .sp=0x3f, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xb83d, .value=0xa8}, {.addr=0xb83e, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xb83f, .a=0x72, .x=0xd7, .y=0xb7, .sp=0x3f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb83d, .value=0xa8}, {.addr=0xb83e, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xb83d, .value=0xa8, .type=IO_READ},
        {.addr=0xb83e, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0201) {
    const struct CPU_State initial_cpu = {.pc=0x0e1b, .a=0x4c, .x=0x01, .y=0x04, .sp=0x6e, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0e1b, .value=0xa8}, {.addr=0x0e1c, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x0e1d, .a=0x49, .x=0x01, .y=0x04, .sp=0x6e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0e1b, .value=0xa8}, {.addr=0x0e1c, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x0e1b, .value=0xa8, .type=IO_READ},
        {.addr=0x0e1c, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0202) {
    const struct CPU_State initial_cpu = {.pc=0x9dd6, .a=0xd3, .x=0xd8, .y=0xf6, .sp=0x29, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd6, .value=0xa8}, {.addr=0x9dd7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9dd8, .a=0xac, .x=0xd8, .y=0xf6, .sp=0x29, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9dd6, .value=0xa8}, {.addr=0x9dd7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9dd6, .value=0xa8, .type=IO_READ},
        {.addr=0x9dd7, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0203) {
    const struct CPU_State initial_cpu = {.pc=0x5edf, .a=0xb2, .x=0x27, .y=0xcb, .sp=0x60, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x5edf, .value=0xa8}, {.addr=0x5ee0, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x5ee1, .a=0xc1, .x=0x27, .y=0xcb, .sp=0x60, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x5edf, .value=0xa8}, {.addr=0x5ee0, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x5edf, .value=0xa8, .type=IO_READ},
        {.addr=0x5ee0, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0204) {
    const struct CPU_State initial_cpu = {.pc=0xf87b, .a=0x66, .x=0xe7, .y=0x83, .sp=0x73, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xf87b, .value=0xa8}, {.addr=0xf87c, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xf87d, .a=0xcb, .x=0xe7, .y=0x83, .sp=0x73, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf87b, .value=0xa8}, {.addr=0xf87c, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xf87b, .value=0xa8, .type=IO_READ},
        {.addr=0xf87c, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0205) {
    const struct CPU_State initial_cpu = {.pc=0x946c, .a=0x61, .x=0x71, .y=0x98, .sp=0x8c, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x946c, .value=0xa8}, {.addr=0x946d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x946e, .a=0xa2, .x=0x71, .y=0x98, .sp=0x8c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x946c, .value=0xa8}, {.addr=0x946d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x946c, .value=0xa8, .type=IO_READ},
        {.addr=0x946d, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0206) {
    const struct CPU_State initial_cpu = {.pc=0x0578, .a=0x99, .x=0x70, .y=0xb2, .sp=0xd3, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0578, .value=0xa8}, {.addr=0x0579, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x057a, .a=0xcf, .x=0x70, .y=0xb2, .sp=0xd3, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0578, .value=0xa8}, {.addr=0x0579, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x0578, .value=0xa8, .type=IO_READ},
        {.addr=0x0579, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0207) {
    const struct CPU_State initial_cpu = {.pc=0x7a70, .a=0xa6, .x=0xa7, .y=0x4a, .sp=0x28, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x7a70, .value=0xa8}, {.addr=0x7a71, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7a72, .a=0x60, .x=0xa7, .y=0x4a, .sp=0x28, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7a70, .value=0xa8}, {.addr=0x7a71, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7a70, .value=0xa8, .type=IO_READ},
        {.addr=0x7a71, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0208) {
    const struct CPU_State initial_cpu = {.pc=0x5432, .a=0x39, .x=0xe0, .y=0x4b, .sp=0xc7, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x5432, .value=0xa8}, {.addr=0x5433, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x5434, .a=0xda, .x=0xe0, .y=0x4b, .sp=0xc7, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5432, .value=0xa8}, {.addr=0x5433, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x5432, .value=0xa8, .type=IO_READ},
        {.addr=0x5433, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0209) {
    const struct CPU_State initial_cpu = {.pc=0x610f, .a=0xc7, .x=0xce, .y=0xc9, .sp=0x50, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x610f, .value=0xa8}, {.addr=0x6110, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x6111, .a=0x63, .x=0xce, .y=0xc9, .sp=0x50, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x610f, .value=0xa8}, {.addr=0x6110, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x610f, .value=0xa8, .type=IO_READ},
        {.addr=0x6110, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_020A) {
    const struct CPU_State initial_cpu = {.pc=0x9b10, .a=0xfb, .x=0xec, .y=0x5d, .sp=0x56, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x9b10, .value=0xa8}, {.addr=0x9b11, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x9b12, .a=0x2d, .x=0xec, .y=0x5d, .sp=0x56, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9b10, .value=0xa8}, {.addr=0x9b11, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x9b10, .value=0xa8, .type=IO_READ},
        {.addr=0x9b11, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_020B) {
    const struct CPU_State initial_cpu = {.pc=0x3ad5, .a=0xd8, .x=0xcc, .y=0xca, .sp=0x47, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x3ad5, .value=0xa8}, {.addr=0x3ad6, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x3ad7, .a=0x2f, .x=0xcc, .y=0xca, .sp=0x47, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3ad5, .value=0xa8}, {.addr=0x3ad6, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x3ad5, .value=0xa8, .type=IO_READ},
        {.addr=0x3ad6, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_020C) {
    const struct CPU_State initial_cpu = {.pc=0xf0ee, .a=0xdd, .x=0x02, .y=0x8b, .sp=0x43, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf0ee, .value=0xa8}, {.addr=0xf0ef, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xf0f0, .a=0xb8, .x=0x02, .y=0x8b, .sp=0x43, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xf0ee, .value=0xa8}, {.addr=0xf0ef, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xf0ee, .value=0xa8, .type=IO_READ},
        {.addr=0xf0ef, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_020D) {
    const struct CPU_State initial_cpu = {.pc=0x7c8a, .a=0xc8, .x=0x61, .y=0x7e, .sp=0x02, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x7c8a, .value=0xa8}, {.addr=0x7c8b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7c8c, .a=0x48, .x=0x61, .y=0x7e, .sp=0x02, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7c8a, .value=0xa8}, {.addr=0x7c8b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7c8a, .value=0xa8, .type=IO_READ},
        {.addr=0x7c8b, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_020E) {
    const struct CPU_State initial_cpu = {.pc=0x72e1, .a=0x78, .x=0x63, .y=0x5d, .sp=0x72, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x72e1, .value=0xa8}, {.addr=0x72e2, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x72e3, .a=0x5a, .x=0x63, .y=0x5d, .sp=0x72, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x72e1, .value=0xa8}, {.addr=0x72e2, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x72e1, .value=0xa8, .type=IO_READ},
        {.addr=0x72e2, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_020F) {
    const struct CPU_State initial_cpu = {.pc=0x91f9, .a=0xb8, .x=0xc9, .y=0x6a, .sp=0xae, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x91f9, .value=0xa8}, {.addr=0x91fa, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x91fb, .a=0x6b, .x=0xc9, .y=0x6a, .sp=0xae, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x91f9, .value=0xa8}, {.addr=0x91fa, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x91f9, .value=0xa8, .type=IO_READ},
        {.addr=0x91fa, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0210) {
    const struct CPU_State initial_cpu = {.pc=0xdae9, .a=0x84, .x=0x77, .y=0x47, .sp=0x60, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xdae9, .value=0xa8}, {.addr=0xdaea, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xdaeb, .a=0x74, .x=0x77, .y=0x47, .sp=0x60, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xdae9, .value=0xa8}, {.addr=0xdaea, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xdae9, .value=0xa8, .type=IO_READ},
        {.addr=0xdaea, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0211) {
    const struct CPU_State initial_cpu = {.pc=0x77a3, .a=0x7b, .x=0xcd, .y=0x2f, .sp=0x8a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x77a3, .value=0xa8}, {.addr=0x77a4, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x77a5, .a=0x73, .x=0xcd, .y=0x2f, .sp=0x8a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x77a3, .value=0xa8}, {.addr=0x77a4, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x77a3, .value=0xa8, .type=IO_READ},
        {.addr=0x77a4, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0212) {
    const struct CPU_State initial_cpu = {.pc=0x7080, .a=0x5f, .x=0x3e, .y=0x16, .sp=0x2d, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7080, .value=0xa8}, {.addr=0x7081, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x7082, .a=0x9b, .x=0x3e, .y=0x16, .sp=0x2d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7080, .value=0xa8}, {.addr=0x7081, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x7080, .value=0xa8, .type=IO_READ},
        {.addr=0x7081, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0213) {
    const struct CPU_State initial_cpu = {.pc=0x2e32, .a=0x98, .x=0xf7, .y=0xc6, .sp=0x00, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x2e32, .value=0xa8}, {.addr=0x2e33, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x2e34, .a=0xe0, .x=0xf7, .y=0xc6, .sp=0x00, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2e32, .value=0xa8}, {.addr=0x2e33, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x2e32, .value=0xa8, .type=IO_READ},
        {.addr=0x2e33, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0214) {
    const struct CPU_State initial_cpu = {.pc=0x8576, .a=0xcb, .x=0x56, .y=0x7f, .sp=0x64, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x8576, .value=0xa8}, {.addr=0x8577, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x8578, .a=0x30, .x=0x56, .y=0x7f, .sp=0x64, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x8576, .value=0xa8}, {.addr=0x8577, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x8576, .value=0xa8, .type=IO_READ},
        {.addr=0x8577, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0215) {
    const struct CPU_State initial_cpu = {.pc=0xa5a8, .a=0xa2, .x=0x5c, .y=0x09, .sp=0x8e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa5a8, .value=0xa8}, {.addr=0xa5a9, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xa5aa, .a=0xbb, .x=0x5c, .y=0x09, .sp=0x8e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa5a8, .value=0xa8}, {.addr=0xa5a9, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xa5a8, .value=0xa8, .type=IO_READ},
        {.addr=0xa5a9, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0216) {
    const struct CPU_State initial_cpu = {.pc=0x26e3, .a=0xa4, .x=0xf7, .y=0xf9, .sp=0xbc, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x26e3, .value=0xa8}, {.addr=0x26e4, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x26e5, .a=0x8a, .x=0xf7, .y=0xf9, .sp=0xbc, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x26e3, .value=0xa8}, {.addr=0x26e4, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x26e3, .value=0xa8, .type=IO_READ},
        {.addr=0x26e4, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0217) {
    const struct CPU_State initial_cpu = {.pc=0x9cee, .a=0x56, .x=0x1c, .y=0x02, .sp=0x86, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x9cee, .value=0xa8}, {.addr=0x9cef, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x9cf0, .a=0x71, .x=0x1c, .y=0x02, .sp=0x86, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x9cee, .value=0xa8}, {.addr=0x9cef, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x9cee, .value=0xa8, .type=IO_READ},
        {.addr=0x9cef, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0218) {
    const struct CPU_State initial_cpu = {.pc=0x355c, .a=0x62, .x=0x1f, .y=0x93, .sp=0x3c, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x355c, .value=0xa8}, {.addr=0x355d, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x355e, .a=0x09, .x=0x1f, .y=0x93, .sp=0x3c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x355c, .value=0xa8}, {.addr=0x355d, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x355c, .value=0xa8, .type=IO_READ},
        {.addr=0x355d, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0219) {
    const struct CPU_State initial_cpu = {.pc=0x7cae, .a=0x9f, .x=0x20, .y=0xbd, .sp=0xb7, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x7cae, .value=0xa8}, {.addr=0x7caf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7cb0, .a=0x19, .x=0x20, .y=0xbd, .sp=0xb7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7cae, .value=0xa8}, {.addr=0x7caf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7cae, .value=0xa8, .type=IO_READ},
        {.addr=0x7caf, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_021A) {
    const struct CPU_State initial_cpu = {.pc=0xf09c, .a=0xac, .x=0x74, .y=0x17, .sp=0xa2, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xf09c, .value=0xa8}, {.addr=0xf09d, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xf09e, .a=0xd7, .x=0x74, .y=0x17, .sp=0xa2, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xf09c, .value=0xa8}, {.addr=0xf09d, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xf09c, .value=0xa8, .type=IO_READ},
        {.addr=0xf09d, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_021B) {
    const struct CPU_State initial_cpu = {.pc=0xadec, .a=0x5c, .x=0xc6, .y=0x03, .sp=0x82, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xadec, .value=0xa8}, {.addr=0xaded, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xadee, .a=0xea, .x=0xc6, .y=0x03, .sp=0x82, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xadec, .value=0xa8}, {.addr=0xaded, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xadec, .value=0xa8, .type=IO_READ},
        {.addr=0xaded, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_021C) {
    const struct CPU_State initial_cpu = {.pc=0x8454, .a=0x7b, .x=0x3b, .y=0x41, .sp=0xfa, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x8454, .value=0xa8}, {.addr=0x8455, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8456, .a=0x95, .x=0x3b, .y=0x41, .sp=0xfa, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8454, .value=0xa8}, {.addr=0x8455, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8454, .value=0xa8, .type=IO_READ},
        {.addr=0x8455, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_021D) {
    const struct CPU_State initial_cpu = {.pc=0x1321, .a=0x45, .x=0xe9, .y=0xf9, .sp=0xfc, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x1321, .value=0xa8}, {.addr=0x1322, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x1323, .a=0x6b, .x=0xe9, .y=0xf9, .sp=0xfc, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1321, .value=0xa8}, {.addr=0x1322, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x1321, .value=0xa8, .type=IO_READ},
        {.addr=0x1322, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_021E) {
    const struct CPU_State initial_cpu = {.pc=0x4133, .a=0x9f, .x=0x69, .y=0x84, .sp=0x6a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x4133, .value=0xa8}, {.addr=0x4134, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x4135, .a=0x2f, .x=0x69, .y=0x84, .sp=0x6a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4133, .value=0xa8}, {.addr=0x4134, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x4133, .value=0xa8, .type=IO_READ},
        {.addr=0x4134, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_021F) {
    const struct CPU_State initial_cpu = {.pc=0xb581, .a=0x00, .x=0x7f, .y=0x54, .sp=0x2d, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb581, .value=0xa8}, {.addr=0xb582, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xb583, .a=0x88, .x=0x7f, .y=0x54, .sp=0x2d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xb581, .value=0xa8}, {.addr=0xb582, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xb581, .value=0xa8, .type=IO_READ},
        {.addr=0xb582, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0220) {
    const struct CPU_State initial_cpu = {.pc=0x5063, .a=0x2c, .x=0x3c, .y=0x16, .sp=0x5e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x5063, .value=0xa8}, {.addr=0x5064, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x5065, .a=0x05, .x=0x3c, .y=0x16, .sp=0x5e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x5063, .value=0xa8}, {.addr=0x5064, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x5063, .value=0xa8, .type=IO_READ},
        {.addr=0x5064, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0221) {
    const struct CPU_State initial_cpu = {.pc=0xc1e0, .a=0x79, .x=0xcb, .y=0xa1, .sp=0x46, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xc1e0, .value=0xa8}, {.addr=0xc1e1, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xc1e2, .a=0xe1, .x=0xcb, .y=0xa1, .sp=0x46, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc1e0, .value=0xa8}, {.addr=0xc1e1, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xc1e0, .value=0xa8, .type=IO_READ},
        {.addr=0xc1e1, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0222) {
    const struct CPU_State initial_cpu = {.pc=0x8857, .a=0x54, .x=0xbc, .y=0xaa, .sp=0x39, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8857, .value=0xa8}, {.addr=0x8858, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x8859, .a=0xd0, .x=0xbc, .y=0xaa, .sp=0x39, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8857, .value=0xa8}, {.addr=0x8858, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x8857, .value=0xa8, .type=IO_READ},
        {.addr=0x8858, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0223) {
    const struct CPU_State initial_cpu = {.pc=0x4b73, .a=0x25, .x=0x72, .y=0x97, .sp=0xf8, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x4b73, .value=0xa8}, {.addr=0x4b74, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x4b75, .a=0x26, .x=0x72, .y=0x97, .sp=0xf8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x4b73, .value=0xa8}, {.addr=0x4b74, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x4b73, .value=0xa8, .type=IO_READ},
        {.addr=0x4b74, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0224) {
    const struct CPU_State initial_cpu = {.pc=0x9bff, .a=0x01, .x=0x40, .y=0xd6, .sp=0x98, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x9bff, .value=0xa8}, {.addr=0x9c00, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x9c01, .a=0x83, .x=0x40, .y=0xd6, .sp=0x98, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9bff, .value=0xa8}, {.addr=0x9c00, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x9bff, .value=0xa8, .type=IO_READ},
        {.addr=0x9c00, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0225) {
    const struct CPU_State initial_cpu = {.pc=0xe52b, .a=0xa6, .x=0xda, .y=0x3a, .sp=0xa0, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xe52b, .value=0xa8}, {.addr=0xe52c, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xe52d, .a=0xb3, .x=0xda, .y=0x3a, .sp=0xa0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe52b, .value=0xa8}, {.addr=0xe52c, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xe52b, .value=0xa8, .type=IO_READ},
        {.addr=0xe52c, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0226) {
    const struct CPU_State initial_cpu = {.pc=0xb7e1, .a=0xd3, .x=0xc3, .y=0x6a, .sp=0xfa, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xb7e1, .value=0xa8}, {.addr=0xb7e2, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xb7e3, .a=0x3a, .x=0xc3, .y=0x6a, .sp=0xfa, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb7e1, .value=0xa8}, {.addr=0xb7e2, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xb7e1, .value=0xa8, .type=IO_READ},
        {.addr=0xb7e2, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0227) {
    const struct CPU_State initial_cpu = {.pc=0x4545, .a=0x0b, .x=0x82, .y=0x15, .sp=0x1a, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4545, .value=0xa8}, {.addr=0x4546, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4547, .a=0xdd, .x=0x82, .y=0x15, .sp=0x1a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4545, .value=0xa8}, {.addr=0x4546, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4545, .value=0xa8, .type=IO_READ},
        {.addr=0x4546, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0228) {
    const struct CPU_State initial_cpu = {.pc=0x72ef, .a=0x0c, .x=0xac, .y=0xb6, .sp=0x28, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x72ef, .value=0xa8}, {.addr=0x72f0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x72f1, .a=0x66, .x=0xac, .y=0xb6, .sp=0x28, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x72ef, .value=0xa8}, {.addr=0x72f0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x72ef, .value=0xa8, .type=IO_READ},
        {.addr=0x72f0, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0229) {
    const struct CPU_State initial_cpu = {.pc=0x90bc, .a=0x75, .x=0x5d, .y=0x6a, .sp=0x10, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x90bc, .value=0xa8}, {.addr=0x90bd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x90be, .a=0x95, .x=0x5d, .y=0x6a, .sp=0x10, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x90bc, .value=0xa8}, {.addr=0x90bd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x90bc, .value=0xa8, .type=IO_READ},
        {.addr=0x90bd, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_022A) {
    const struct CPU_State initial_cpu = {.pc=0xada2, .a=0x48, .x=0x84, .y=0xc9, .sp=0x14, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xada2, .value=0xa8}, {.addr=0xada3, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xada4, .a=0xcd, .x=0x84, .y=0xc9, .sp=0x14, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xada2, .value=0xa8}, {.addr=0xada3, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xada2, .value=0xa8, .type=IO_READ},
        {.addr=0xada3, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_022B) {
    const struct CPU_State initial_cpu = {.pc=0xc445, .a=0xca, .x=0x68, .y=0xf2, .sp=0xe0, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xc445, .value=0xa8}, {.addr=0xc446, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xc447, .a=0x29, .x=0x68, .y=0xf2, .sp=0xe0, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xc445, .value=0xa8}, {.addr=0xc446, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xc445, .value=0xa8, .type=IO_READ},
        {.addr=0xc446, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_022C) {
    const struct CPU_State initial_cpu = {.pc=0x5460, .a=0xc4, .x=0x76, .y=0xdf, .sp=0x71, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x5460, .value=0xa8}, {.addr=0x5461, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x5462, .a=0x0c, .x=0x76, .y=0xdf, .sp=0x71, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5460, .value=0xa8}, {.addr=0x5461, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x5460, .value=0xa8, .type=IO_READ},
        {.addr=0x5461, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_022D) {
    const struct CPU_State initial_cpu = {.pc=0x8e67, .a=0x5d, .x=0xf7, .y=0x27, .sp=0x43, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x8e67, .value=0xa8}, {.addr=0x8e68, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8e69, .a=0x41, .x=0xf7, .y=0x27, .sp=0x43, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8e67, .value=0xa8}, {.addr=0x8e68, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8e67, .value=0xa8, .type=IO_READ},
        {.addr=0x8e68, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_022E) {
    const struct CPU_State initial_cpu = {.pc=0x307b, .a=0xc0, .x=0x62, .y=0x39, .sp=0x3d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x307b, .value=0xa8}, {.addr=0x307c, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x307d, .a=0xcb, .x=0x62, .y=0x39, .sp=0x3d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x307b, .value=0xa8}, {.addr=0x307c, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x307b, .value=0xa8, .type=IO_READ},
        {.addr=0x307c, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_022F) {
    const struct CPU_State initial_cpu = {.pc=0x7334, .a=0x43, .x=0x6a, .y=0xba, .sp=0x77, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x7334, .value=0xa8}, {.addr=0x7335, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x7336, .a=0x70, .x=0x6a, .y=0xba, .sp=0x77, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7334, .value=0xa8}, {.addr=0x7335, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x7334, .value=0xa8, .type=IO_READ},
        {.addr=0x7335, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0230) {
    const struct CPU_State initial_cpu = {.pc=0x14c9, .a=0x03, .x=0x4c, .y=0x46, .sp=0x44, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x14c9, .value=0xa8}, {.addr=0x14ca, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x14cb, .a=0x6f, .x=0x4c, .y=0x46, .sp=0x44, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x14c9, .value=0xa8}, {.addr=0x14ca, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x14c9, .value=0xa8, .type=IO_READ},
        {.addr=0x14ca, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0231) {
    const struct CPU_State initial_cpu = {.pc=0xce93, .a=0xaf, .x=0x6f, .y=0x33, .sp=0x25, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xce93, .value=0xa8}, {.addr=0xce94, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xce95, .a=0x01, .x=0x6f, .y=0x33, .sp=0x25, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xce93, .value=0xa8}, {.addr=0xce94, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xce93, .value=0xa8, .type=IO_READ},
        {.addr=0xce94, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0232) {
    const struct CPU_State initial_cpu = {.pc=0x996c, .a=0x91, .x=0x1d, .y=0x95, .sp=0x5b, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x996c, .value=0xa8}, {.addr=0x996d, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x996e, .a=0x66, .x=0x1d, .y=0x95, .sp=0x5b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x996c, .value=0xa8}, {.addr=0x996d, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x996c, .value=0xa8, .type=IO_READ},
        {.addr=0x996d, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0233) {
    const struct CPU_State initial_cpu = {.pc=0x7bac, .a=0x15, .x=0x60, .y=0x40, .sp=0x24, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x7bac, .value=0xa8}, {.addr=0x7bad, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x7bae, .a=0x16, .x=0x60, .y=0x40, .sp=0x24, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7bac, .value=0xa8}, {.addr=0x7bad, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x7bac, .value=0xa8, .type=IO_READ},
        {.addr=0x7bad, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0234) {
    const struct CPU_State initial_cpu = {.pc=0xac4a, .a=0xe0, .x=0x83, .y=0x85, .sp=0xfc, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xac4a, .value=0xa8}, {.addr=0xac4b, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xac4c, .a=0x3c, .x=0x83, .y=0x85, .sp=0xfc, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xac4a, .value=0xa8}, {.addr=0xac4b, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xac4a, .value=0xa8, .type=IO_READ},
        {.addr=0xac4b, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0235) {
    const struct CPU_State initial_cpu = {.pc=0xd72a, .a=0x6d, .x=0x8e, .y=0x3b, .sp=0xf4, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xd72a, .value=0xa8}, {.addr=0xd72b, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xd72c, .a=0x3e, .x=0x8e, .y=0x3b, .sp=0xf4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xd72a, .value=0xa8}, {.addr=0xd72b, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xd72a, .value=0xa8, .type=IO_READ},
        {.addr=0xd72b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0236) {
    const struct CPU_State initial_cpu = {.pc=0x28e3, .a=0x70, .x=0xf9, .y=0xbd, .sp=0x04, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x28e3, .value=0xa8}, {.addr=0x28e4, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x28e5, .a=0xef, .x=0xf9, .y=0xbd, .sp=0x04, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x28e3, .value=0xa8}, {.addr=0x28e4, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x28e3, .value=0xa8, .type=IO_READ},
        {.addr=0x28e4, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0237) {
    const struct CPU_State initial_cpu = {.pc=0xb2e5, .a=0xb8, .x=0x38, .y=0x66, .sp=0x5e, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb2e5, .value=0xa8}, {.addr=0xb2e6, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xb2e7, .a=0x87, .x=0x38, .y=0x66, .sp=0x5e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb2e5, .value=0xa8}, {.addr=0xb2e6, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xb2e5, .value=0xa8, .type=IO_READ},
        {.addr=0xb2e6, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0238) {
    const struct CPU_State initial_cpu = {.pc=0x0adb, .a=0xdb, .x=0x5d, .y=0x4c, .sp=0x1c, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0adb, .value=0xa8}, {.addr=0x0adc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0add, .a=0x14, .x=0x5d, .y=0x4c, .sp=0x1c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0adb, .value=0xa8}, {.addr=0x0adc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0adb, .value=0xa8, .type=IO_READ},
        {.addr=0x0adc, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0239) {
    const struct CPU_State initial_cpu = {.pc=0xb250, .a=0xf0, .x=0xea, .y=0x8e, .sp=0x19, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xb250, .value=0xa8}, {.addr=0xb251, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xb252, .a=0x7e, .x=0xea, .y=0x8e, .sp=0x19, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb250, .value=0xa8}, {.addr=0xb251, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xb250, .value=0xa8, .type=IO_READ},
        {.addr=0xb251, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_023A) {
    const struct CPU_State initial_cpu = {.pc=0xb218, .a=0x9b, .x=0xe7, .y=0x52, .sp=0x43, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xb218, .value=0xa8}, {.addr=0xb219, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb21a, .a=0xfb, .x=0xe7, .y=0x52, .sp=0x43, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb218, .value=0xa8}, {.addr=0xb219, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb218, .value=0xa8, .type=IO_READ},
        {.addr=0xb219, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_023B) {
    const struct CPU_State initial_cpu = {.pc=0xaa7a, .a=0xd6, .x=0x3d, .y=0x06, .sp=0x7c, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xaa7a, .value=0xa8}, {.addr=0xaa7b, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xaa7c, .a=0x68, .x=0x3d, .y=0x06, .sp=0x7c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xaa7a, .value=0xa8}, {.addr=0xaa7b, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xaa7a, .value=0xa8, .type=IO_READ},
        {.addr=0xaa7b, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_023C) {
    const struct CPU_State initial_cpu = {.pc=0x8851, .a=0xa1, .x=0x1a, .y=0xbe, .sp=0x51, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x8851, .value=0xa8}, {.addr=0x8852, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x8853, .a=0x0d, .x=0x1a, .y=0xbe, .sp=0x51, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8851, .value=0xa8}, {.addr=0x8852, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x8851, .value=0xa8, .type=IO_READ},
        {.addr=0x8852, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_023D) {
    const struct CPU_State initial_cpu = {.pc=0x9d46, .a=0xe7, .x=0x02, .y=0x06, .sp=0xb3, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x9d46, .value=0xa8}, {.addr=0x9d47, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x9d48, .a=0x00, .x=0x02, .y=0x06, .sp=0xb3, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x9d46, .value=0xa8}, {.addr=0x9d47, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x9d46, .value=0xa8, .type=IO_READ},
        {.addr=0x9d47, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_023E) {
    const struct CPU_State initial_cpu = {.pc=0x7335, .a=0x9c, .x=0xca, .y=0xbf, .sp=0x33, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7335, .value=0xa8}, {.addr=0x7336, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x7337, .a=0xe8, .x=0xca, .y=0xbf, .sp=0x33, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x7335, .value=0xa8}, {.addr=0x7336, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x7335, .value=0xa8, .type=IO_READ},
        {.addr=0x7336, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_023F) {
    const struct CPU_State initial_cpu = {.pc=0x0771, .a=0x60, .x=0x96, .y=0x20, .sp=0xe0, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0771, .value=0xa8}, {.addr=0x0772, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0773, .a=0x7f, .x=0x96, .y=0x20, .sp=0xe0, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0771, .value=0xa8}, {.addr=0x0772, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0771, .value=0xa8, .type=IO_READ},
        {.addr=0x0772, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0240) {
    const struct CPU_State initial_cpu = {.pc=0x95f4, .a=0xa0, .x=0x17, .y=0x24, .sp=0x9d, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x95f4, .value=0xa8}, {.addr=0x95f5, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x95f6, .a=0xc2, .x=0x17, .y=0x24, .sp=0x9d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x95f4, .value=0xa8}, {.addr=0x95f5, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x95f4, .value=0xa8, .type=IO_READ},
        {.addr=0x95f5, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0241) {
    const struct CPU_State initial_cpu = {.pc=0x60dc, .a=0x40, .x=0xc9, .y=0xee, .sp=0x3b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x60dc, .value=0xa8}, {.addr=0x60dd, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x60de, .a=0x2f, .x=0xc9, .y=0xee, .sp=0x3b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x60dc, .value=0xa8}, {.addr=0x60dd, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x60dc, .value=0xa8, .type=IO_READ},
        {.addr=0x60dd, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0242) {
    const struct CPU_State initial_cpu = {.pc=0xc242, .a=0x65, .x=0xfe, .y=0x49, .sp=0x3c, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xc242, .value=0xa8}, {.addr=0xc243, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc244, .a=0x1f, .x=0xfe, .y=0x49, .sp=0x3c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc242, .value=0xa8}, {.addr=0xc243, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc242, .value=0xa8, .type=IO_READ},
        {.addr=0xc243, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0243) {
    const struct CPU_State initial_cpu = {.pc=0xaf9e, .a=0xe3, .x=0xfd, .y=0x29, .sp=0x1c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xaf9e, .value=0xa8}, {.addr=0xaf9f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xafa0, .a=0x22, .x=0xfd, .y=0x29, .sp=0x1c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xaf9e, .value=0xa8}, {.addr=0xaf9f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xaf9e, .value=0xa8, .type=IO_READ},
        {.addr=0xaf9f, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0244) {
    const struct CPU_State initial_cpu = {.pc=0xafcf, .a=0x5d, .x=0x8d, .y=0xab, .sp=0xe4, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xafcf, .value=0xa8}, {.addr=0xafd0, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xafd1, .a=0x81, .x=0x8d, .y=0xab, .sp=0xe4, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xafcf, .value=0xa8}, {.addr=0xafd0, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xafcf, .value=0xa8, .type=IO_READ},
        {.addr=0xafd0, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0245) {
    const struct CPU_State initial_cpu = {.pc=0xc3bf, .a=0xcc, .x=0xb0, .y=0x2a, .sp=0x0c, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xc3bf, .value=0xa8}, {.addr=0xc3c0, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xc3c1, .a=0x58, .x=0xb0, .y=0x2a, .sp=0x0c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xc3bf, .value=0xa8}, {.addr=0xc3c0, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xc3bf, .value=0xa8, .type=IO_READ},
        {.addr=0xc3c0, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0246) {
    const struct CPU_State initial_cpu = {.pc=0x942d, .a=0x31, .x=0x7b, .y=0xd4, .sp=0x6d, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x942d, .value=0xa8}, {.addr=0x942e, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x942f, .a=0x3a, .x=0x7b, .y=0xd4, .sp=0x6d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x942d, .value=0xa8}, {.addr=0x942e, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x942d, .value=0xa8, .type=IO_READ},
        {.addr=0x942e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0247) {
    const struct CPU_State initial_cpu = {.pc=0x8c15, .a=0x3e, .x=0x31, .y=0x5b, .sp=0x0c, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x8c15, .value=0xa8}, {.addr=0x8c16, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x8c17, .a=0xf8, .x=0x31, .y=0x5b, .sp=0x0c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8c15, .value=0xa8}, {.addr=0x8c16, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x8c15, .value=0xa8, .type=IO_READ},
        {.addr=0x8c16, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0248) {
    const struct CPU_State initial_cpu = {.pc=0x84d6, .a=0xe9, .x=0x4d, .y=0x17, .sp=0x5b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x84d6, .value=0xa8}, {.addr=0x84d7, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x84d8, .a=0x94, .x=0x4d, .y=0x17, .sp=0x5b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x84d6, .value=0xa8}, {.addr=0x84d7, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x84d6, .value=0xa8, .type=IO_READ},
        {.addr=0x84d7, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0249) {
    const struct CPU_State initial_cpu = {.pc=0x5a6b, .a=0xa1, .x=0xb0, .y=0x6d, .sp=0x1c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x5a6b, .value=0xa8}, {.addr=0x5a6c, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x5a6d, .a=0xfe, .x=0xb0, .y=0x6d, .sp=0x1c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5a6b, .value=0xa8}, {.addr=0x5a6c, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x5a6b, .value=0xa8, .type=IO_READ},
        {.addr=0x5a6c, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_024A) {
    const struct CPU_State initial_cpu = {.pc=0xb280, .a=0xad, .x=0x08, .y=0xc5, .sp=0x93, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xb280, .value=0xa8}, {.addr=0xb281, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xb282, .a=0xf7, .x=0x08, .y=0xc5, .sp=0x93, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb280, .value=0xa8}, {.addr=0xb281, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xb280, .value=0xa8, .type=IO_READ},
        {.addr=0xb281, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_024B) {
    const struct CPU_State initial_cpu = {.pc=0x17d8, .a=0x6d, .x=0x8b, .y=0x3c, .sp=0xff, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x17d8, .value=0xa8}, {.addr=0x17d9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x17da, .a=0x0d, .x=0x8b, .y=0x3c, .sp=0xff, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x17d8, .value=0xa8}, {.addr=0x17d9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x17d8, .value=0xa8, .type=IO_READ},
        {.addr=0x17d9, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_024C) {
    const struct CPU_State initial_cpu = {.pc=0x12b0, .a=0x49, .x=0x59, .y=0x89, .sp=0x6a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x12b0, .value=0xa8}, {.addr=0x12b1, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x12b2, .a=0x4a, .x=0x59, .y=0x89, .sp=0x6a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x12b0, .value=0xa8}, {.addr=0x12b1, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x12b0, .value=0xa8, .type=IO_READ},
        {.addr=0x12b1, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_024D) {
    const struct CPU_State initial_cpu = {.pc=0x03ae, .a=0x57, .x=0xe2, .y=0x8d, .sp=0x8b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x03ae, .value=0xa8}, {.addr=0x03af, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x03b0, .a=0xb9, .x=0xe2, .y=0x8d, .sp=0x8b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x03ae, .value=0xa8}, {.addr=0x03af, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x03ae, .value=0xa8, .type=IO_READ},
        {.addr=0x03af, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_024E) {
    const struct CPU_State initial_cpu = {.pc=0xb324, .a=0xa7, .x=0x87, .y=0x5f, .sp=0xef, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xb324, .value=0xa8}, {.addr=0xb325, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xb326, .a=0x7b, .x=0x87, .y=0x5f, .sp=0xef, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb324, .value=0xa8}, {.addr=0xb325, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xb324, .value=0xa8, .type=IO_READ},
        {.addr=0xb325, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_024F) {
    const struct CPU_State initial_cpu = {.pc=0xed36, .a=0xa0, .x=0xe1, .y=0x3f, .sp=0xcf, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xed36, .value=0xa8}, {.addr=0xed37, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xed38, .a=0xc0, .x=0xe1, .y=0x3f, .sp=0xcf, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xed36, .value=0xa8}, {.addr=0xed37, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xed36, .value=0xa8, .type=IO_READ},
        {.addr=0xed37, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0250) {
    const struct CPU_State initial_cpu = {.pc=0x23dd, .a=0x3c, .x=0x6f, .y=0xec, .sp=0xa4, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x23dd, .value=0xa8}, {.addr=0x23de, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x23df, .a=0x14, .x=0x6f, .y=0xec, .sp=0xa4, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x23dd, .value=0xa8}, {.addr=0x23de, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x23dd, .value=0xa8, .type=IO_READ},
        {.addr=0x23de, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0251) {
    const struct CPU_State initial_cpu = {.pc=0x4fcc, .a=0x38, .x=0xc3, .y=0xc9, .sp=0xb2, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x4fcc, .value=0xa8}, {.addr=0x4fcd, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x4fce, .a=0x36, .x=0xc3, .y=0xc9, .sp=0xb2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4fcc, .value=0xa8}, {.addr=0x4fcd, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x4fcc, .value=0xa8, .type=IO_READ},
        {.addr=0x4fcd, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0252) {
    const struct CPU_State initial_cpu = {.pc=0x0708, .a=0x39, .x=0x72, .y=0x7f, .sp=0x91, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0708, .value=0xa8}, {.addr=0x0709, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x070a, .a=0x05, .x=0x72, .y=0x7f, .sp=0x91, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0708, .value=0xa8}, {.addr=0x0709, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x0708, .value=0xa8, .type=IO_READ},
        {.addr=0x0709, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0253) {
    const struct CPU_State initial_cpu = {.pc=0x231e, .a=0xca, .x=0x00, .y=0x38, .sp=0xa7, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x231e, .value=0xa8}, {.addr=0x231f, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x2320, .a=0x85, .x=0x00, .y=0x38, .sp=0xa7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x231e, .value=0xa8}, {.addr=0x231f, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x231e, .value=0xa8, .type=IO_READ},
        {.addr=0x231f, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0254) {
    const struct CPU_State initial_cpu = {.pc=0xf198, .a=0xf8, .x=0x37, .y=0x02, .sp=0xe6, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xf198, .value=0xa8}, {.addr=0xf199, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xf19a, .a=0x11, .x=0x37, .y=0x02, .sp=0xe6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf198, .value=0xa8}, {.addr=0xf199, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xf198, .value=0xa8, .type=IO_READ},
        {.addr=0xf199, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0255) {
    const struct CPU_State initial_cpu = {.pc=0xec5c, .a=0x07, .x=0x61, .y=0x31, .sp=0x0f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xec5c, .value=0xa8}, {.addr=0xec5d, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xec5e, .a=0x23, .x=0x61, .y=0x31, .sp=0x0f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xec5c, .value=0xa8}, {.addr=0xec5d, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xec5c, .value=0xa8, .type=IO_READ},
        {.addr=0xec5d, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0256) {
    const struct CPU_State initial_cpu = {.pc=0x9fcd, .a=0x41, .x=0x8f, .y=0x23, .sp=0xa9, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x9fcd, .value=0xa8}, {.addr=0x9fce, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x9fcf, .a=0xa0, .x=0x8f, .y=0x23, .sp=0xa9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9fcd, .value=0xa8}, {.addr=0x9fce, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x9fcd, .value=0xa8, .type=IO_READ},
        {.addr=0x9fce, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0257) {
    const struct CPU_State initial_cpu = {.pc=0x54c4, .a=0xb7, .x=0x6b, .y=0xd3, .sp=0x69, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x54c4, .value=0xa8}, {.addr=0x54c5, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x54c6, .a=0x48, .x=0x6b, .y=0xd3, .sp=0x69, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x54c4, .value=0xa8}, {.addr=0x54c5, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x54c4, .value=0xa8, .type=IO_READ},
        {.addr=0x54c5, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0258) {
    const struct CPU_State initial_cpu = {.pc=0xa01c, .a=0x61, .x=0xbc, .y=0x2d, .sp=0x67, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xa01c, .value=0xa8}, {.addr=0xa01d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa01e, .a=0xe0, .x=0xbc, .y=0x2d, .sp=0x67, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa01c, .value=0xa8}, {.addr=0xa01d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa01c, .value=0xa8, .type=IO_READ},
        {.addr=0xa01d, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0259) {
    const struct CPU_State initial_cpu = {.pc=0x9885, .a=0x47, .x=0x04, .y=0x05, .sp=0x7c, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x9885, .value=0xa8}, {.addr=0x9886, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x9887, .a=0x10, .x=0x04, .y=0x05, .sp=0x7c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9885, .value=0xa8}, {.addr=0x9886, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x9885, .value=0xa8, .type=IO_READ},
        {.addr=0x9886, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_025A) {
    const struct CPU_State initial_cpu = {.pc=0x2f9e, .a=0xce, .x=0xbf, .y=0xb7, .sp=0xa3, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x2f9e, .value=0xa8}, {.addr=0x2f9f, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x2fa0, .a=0x38, .x=0xbf, .y=0xb7, .sp=0xa3, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2f9e, .value=0xa8}, {.addr=0x2f9f, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x2f9e, .value=0xa8, .type=IO_READ},
        {.addr=0x2f9f, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_025B) {
    const struct CPU_State initial_cpu = {.pc=0x67ae, .a=0x93, .x=0xa9, .y=0x76, .sp=0x95, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x67ae, .value=0xa8}, {.addr=0x67af, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x67b0, .a=0xad, .x=0xa9, .y=0x76, .sp=0x95, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x67ae, .value=0xa8}, {.addr=0x67af, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x67ae, .value=0xa8, .type=IO_READ},
        {.addr=0x67af, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_025C) {
    const struct CPU_State initial_cpu = {.pc=0xb45e, .a=0x40, .x=0xc0, .y=0x04, .sp=0x93, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb45e, .value=0xa8}, {.addr=0xb45f, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xb460, .a=0x7a, .x=0xc0, .y=0x04, .sp=0x93, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb45e, .value=0xa8}, {.addr=0xb45f, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xb45e, .value=0xa8, .type=IO_READ},
        {.addr=0xb45f, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_025D) {
    const struct CPU_State initial_cpu = {.pc=0xc242, .a=0x42, .x=0x54, .y=0x10, .sp=0xc8, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xc242, .value=0xa8}, {.addr=0xc243, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xc244, .a=0x7b, .x=0x54, .y=0x10, .sp=0xc8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xc242, .value=0xa8}, {.addr=0xc243, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xc242, .value=0xa8, .type=IO_READ},
        {.addr=0xc243, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_025E) {
    const struct CPU_State initial_cpu = {.pc=0xa616, .a=0x41, .x=0x1f, .y=0x68, .sp=0x6f, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xa616, .value=0xa8}, {.addr=0xa617, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xa618, .a=0x8e, .x=0x1f, .y=0x68, .sp=0x6f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa616, .value=0xa8}, {.addr=0xa617, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xa616, .value=0xa8, .type=IO_READ},
        {.addr=0xa617, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_025F) {
    const struct CPU_State initial_cpu = {.pc=0x7141, .a=0x8e, .x=0x5b, .y=0x67, .sp=0x0f, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7141, .value=0xa8}, {.addr=0x7142, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x7143, .a=0xff, .x=0x5b, .y=0x67, .sp=0x0f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x7141, .value=0xa8}, {.addr=0x7142, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x7141, .value=0xa8, .type=IO_READ},
        {.addr=0x7142, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0260) {
    const struct CPU_State initial_cpu = {.pc=0x4d45, .a=0xb8, .x=0x4b, .y=0xc9, .sp=0x97, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x4d45, .value=0xa8}, {.addr=0x4d46, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x4d47, .a=0xe7, .x=0x4b, .y=0xc9, .sp=0x97, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x4d45, .value=0xa8}, {.addr=0x4d46, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x4d45, .value=0xa8, .type=IO_READ},
        {.addr=0x4d46, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0261) {
    const struct CPU_State initial_cpu = {.pc=0x3550, .a=0x1b, .x=0x20, .y=0x27, .sp=0x71, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x3550, .value=0xa8}, {.addr=0x3551, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x3552, .a=0xba, .x=0x20, .y=0x27, .sp=0x71, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3550, .value=0xa8}, {.addr=0x3551, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x3550, .value=0xa8, .type=IO_READ},
        {.addr=0x3551, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0262) {
    const struct CPU_State initial_cpu = {.pc=0x6bc8, .a=0xc6, .x=0xbb, .y=0x69, .sp=0x1a, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x6bc8, .value=0xa8}, {.addr=0x6bc9, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x6bca, .a=0x4f, .x=0xbb, .y=0x69, .sp=0x1a, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6bc8, .value=0xa8}, {.addr=0x6bc9, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x6bc8, .value=0xa8, .type=IO_READ},
        {.addr=0x6bc9, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0263) {
    const struct CPU_State initial_cpu = {.pc=0x21ac, .a=0x89, .x=0x95, .y=0x17, .sp=0x0f, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x21ac, .value=0xa8}, {.addr=0x21ad, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x21ae, .a=0xf9, .x=0x95, .y=0x17, .sp=0x0f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x21ac, .value=0xa8}, {.addr=0x21ad, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x21ac, .value=0xa8, .type=IO_READ},
        {.addr=0x21ad, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0264) {
    const struct CPU_State initial_cpu = {.pc=0x694c, .a=0x15, .x=0x55, .y=0x07, .sp=0x65, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x694c, .value=0xa8}, {.addr=0x694d, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x694e, .a=0x59, .x=0x55, .y=0x07, .sp=0x65, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x694c, .value=0xa8}, {.addr=0x694d, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x694c, .value=0xa8, .type=IO_READ},
        {.addr=0x694d, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0265) {
    const struct CPU_State initial_cpu = {.pc=0xf750, .a=0xcc, .x=0x29, .y=0x20, .sp=0x95, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xf750, .value=0xa8}, {.addr=0xf751, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xf752, .a=0x84, .x=0x29, .y=0x20, .sp=0x95, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf750, .value=0xa8}, {.addr=0xf751, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xf750, .value=0xa8, .type=IO_READ},
        {.addr=0xf751, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0266) {
    const struct CPU_State initial_cpu = {.pc=0x510f, .a=0xf8, .x=0x06, .y=0x73, .sp=0x81, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x510f, .value=0xa8}, {.addr=0x5110, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x5111, .a=0xb0, .x=0x06, .y=0x73, .sp=0x81, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x510f, .value=0xa8}, {.addr=0x5110, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x510f, .value=0xa8, .type=IO_READ},
        {.addr=0x5110, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0267) {
    const struct CPU_State initial_cpu = {.pc=0x19a2, .a=0xdb, .x=0x8c, .y=0x06, .sp=0x44, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x19a2, .value=0xa8}, {.addr=0x19a3, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x19a4, .a=0xa2, .x=0x8c, .y=0x06, .sp=0x44, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x19a2, .value=0xa8}, {.addr=0x19a3, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x19a2, .value=0xa8, .type=IO_READ},
        {.addr=0x19a3, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0268) {
    const struct CPU_State initial_cpu = {.pc=0x55d7, .a=0x55, .x=0xa9, .y=0xde, .sp=0x0a, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x55d7, .value=0xa8}, {.addr=0x55d8, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x55d9, .a=0xe3, .x=0xa9, .y=0xde, .sp=0x0a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x55d7, .value=0xa8}, {.addr=0x55d8, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x55d7, .value=0xa8, .type=IO_READ},
        {.addr=0x55d8, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0269) {
    const struct CPU_State initial_cpu = {.pc=0x2a08, .a=0x03, .x=0x27, .y=0xaf, .sp=0x42, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x2a08, .value=0xa8}, {.addr=0x2a09, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x2a0a, .a=0x81, .x=0x27, .y=0xaf, .sp=0x42, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2a08, .value=0xa8}, {.addr=0x2a09, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x2a08, .value=0xa8, .type=IO_READ},
        {.addr=0x2a09, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_026A) {
    const struct CPU_State initial_cpu = {.pc=0xf544, .a=0x2f, .x=0x38, .y=0xa7, .sp=0x6c, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xf544, .value=0xa8}, {.addr=0xf545, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xf546, .a=0x76, .x=0x38, .y=0xa7, .sp=0x6c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf544, .value=0xa8}, {.addr=0xf545, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xf544, .value=0xa8, .type=IO_READ},
        {.addr=0xf545, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_026B) {
    const struct CPU_State initial_cpu = {.pc=0xa696, .a=0x90, .x=0x89, .y=0x38, .sp=0x6e, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xa696, .value=0xa8}, {.addr=0xa697, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xa698, .a=0x66, .x=0x89, .y=0x38, .sp=0x6e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xa696, .value=0xa8}, {.addr=0xa697, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xa696, .value=0xa8, .type=IO_READ},
        {.addr=0xa697, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_026C) {
    const struct CPU_State initial_cpu = {.pc=0x5889, .a=0xd4, .x=0x09, .y=0xea, .sp=0xa4, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x5889, .value=0xa8}, {.addr=0x588a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x588b, .a=0x57, .x=0x09, .y=0xea, .sp=0xa4, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5889, .value=0xa8}, {.addr=0x588a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5889, .value=0xa8, .type=IO_READ},
        {.addr=0x588a, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_026D) {
    const struct CPU_State initial_cpu = {.pc=0xca90, .a=0x61, .x=0x65, .y=0x4e, .sp=0x67, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xca90, .value=0xa8}, {.addr=0xca91, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xca92, .a=0x24, .x=0x65, .y=0x4e, .sp=0x67, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xca90, .value=0xa8}, {.addr=0xca91, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xca90, .value=0xa8, .type=IO_READ},
        {.addr=0xca91, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_026E) {
    const struct CPU_State initial_cpu = {.pc=0xd5f6, .a=0xde, .x=0xb3, .y=0x7f, .sp=0x4a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f6, .value=0xa8}, {.addr=0xd5f7, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xd5f8, .a=0xb4, .x=0xb3, .y=0x7f, .sp=0x4a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xd5f6, .value=0xa8}, {.addr=0xd5f7, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xd5f6, .value=0xa8, .type=IO_READ},
        {.addr=0xd5f7, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_026F) {
    const struct CPU_State initial_cpu = {.pc=0xfb35, .a=0x02, .x=0x14, .y=0x0b, .sp=0x34, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xfb35, .value=0xa8}, {.addr=0xfb36, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfb37, .a=0x62, .x=0x14, .y=0x0b, .sp=0x34, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xfb35, .value=0xa8}, {.addr=0xfb36, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfb35, .value=0xa8, .type=IO_READ},
        {.addr=0xfb36, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0270) {
    const struct CPU_State initial_cpu = {.pc=0x90c4, .a=0x86, .x=0xf9, .y=0x3a, .sp=0x32, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x90c4, .value=0xa8}, {.addr=0x90c5, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x90c6, .a=0xb2, .x=0xf9, .y=0x3a, .sp=0x32, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x90c4, .value=0xa8}, {.addr=0x90c5, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x90c4, .value=0xa8, .type=IO_READ},
        {.addr=0x90c5, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0271) {
    const struct CPU_State initial_cpu = {.pc=0x9ac7, .a=0x1d, .x=0x5b, .y=0xf2, .sp=0x5c, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x9ac7, .value=0xa8}, {.addr=0x9ac8, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x9ac9, .a=0x43, .x=0x5b, .y=0xf2, .sp=0x5c, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x9ac7, .value=0xa8}, {.addr=0x9ac8, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x9ac7, .value=0xa8, .type=IO_READ},
        {.addr=0x9ac8, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0272) {
    const struct CPU_State initial_cpu = {.pc=0x25a6, .a=0x87, .x=0xe7, .y=0x09, .sp=0x8f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x25a6, .value=0xa8}, {.addr=0x25a7, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x25a8, .a=0xf6, .x=0xe7, .y=0x09, .sp=0x8f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x25a6, .value=0xa8}, {.addr=0x25a7, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x25a6, .value=0xa8, .type=IO_READ},
        {.addr=0x25a7, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0273) {
    const struct CPU_State initial_cpu = {.pc=0x7583, .a=0x55, .x=0x0b, .y=0xae, .sp=0x45, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x7583, .value=0xa8}, {.addr=0x7584, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x7585, .a=0xe1, .x=0x0b, .y=0xae, .sp=0x45, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7583, .value=0xa8}, {.addr=0x7584, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x7583, .value=0xa8, .type=IO_READ},
        {.addr=0x7584, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0274) {
    const struct CPU_State initial_cpu = {.pc=0xe22b, .a=0xfc, .x=0x14, .y=0xc2, .sp=0x93, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xe22b, .value=0xa8}, {.addr=0xe22c, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xe22d, .a=0x40, .x=0x14, .y=0xc2, .sp=0x93, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe22b, .value=0xa8}, {.addr=0xe22c, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xe22b, .value=0xa8, .type=IO_READ},
        {.addr=0xe22c, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0275) {
    const struct CPU_State initial_cpu = {.pc=0xb72c, .a=0x7d, .x=0x7b, .y=0xb8, .sp=0x38, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xb72c, .value=0xa8}, {.addr=0xb72d, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xb72e, .a=0xe2, .x=0x7b, .y=0xb8, .sp=0x38, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb72c, .value=0xa8}, {.addr=0xb72d, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xb72c, .value=0xa8, .type=IO_READ},
        {.addr=0xb72d, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0276) {
    const struct CPU_State initial_cpu = {.pc=0x96b5, .a=0x5c, .x=0xd4, .y=0x1a, .sp=0x96, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x96b5, .value=0xa8}, {.addr=0x96b6, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x96b7, .a=0x19, .x=0xd4, .y=0x1a, .sp=0x96, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x96b5, .value=0xa8}, {.addr=0x96b6, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x96b5, .value=0xa8, .type=IO_READ},
        {.addr=0x96b6, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0277) {
    const struct CPU_State initial_cpu = {.pc=0xcdf6, .a=0x74, .x=0x47, .y=0xba, .sp=0x5e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xcdf6, .value=0xa8}, {.addr=0xcdf7, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xcdf8, .a=0xcc, .x=0x47, .y=0xba, .sp=0x5e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xcdf6, .value=0xa8}, {.addr=0xcdf7, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xcdf6, .value=0xa8, .type=IO_READ},
        {.addr=0xcdf7, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0278) {
    const struct CPU_State initial_cpu = {.pc=0xa920, .a=0x42, .x=0xc8, .y=0xd2, .sp=0xa1, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xa920, .value=0xa8}, {.addr=0xa921, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xa922, .a=0x74, .x=0xc8, .y=0xd2, .sp=0xa1, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xa920, .value=0xa8}, {.addr=0xa921, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xa920, .value=0xa8, .type=IO_READ},
        {.addr=0xa921, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0279) {
    const struct CPU_State initial_cpu = {.pc=0x35cc, .a=0x26, .x=0x85, .y=0x06, .sp=0x2b, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x35cc, .value=0xa8}, {.addr=0x35cd, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x35ce, .a=0x7e, .x=0x85, .y=0x06, .sp=0x2b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x35cc, .value=0xa8}, {.addr=0x35cd, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x35cc, .value=0xa8, .type=IO_READ},
        {.addr=0x35cd, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_027A) {
    const struct CPU_State initial_cpu = {.pc=0xb47e, .a=0xe8, .x=0x93, .y=0x2a, .sp=0x92, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xb47e, .value=0xa8}, {.addr=0xb47f, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xb480, .a=0xc0, .x=0x93, .y=0x2a, .sp=0x92, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xb47e, .value=0xa8}, {.addr=0xb47f, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xb47e, .value=0xa8, .type=IO_READ},
        {.addr=0xb47f, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_027B) {
    const struct CPU_State initial_cpu = {.pc=0x53a2, .a=0xae, .x=0xe2, .y=0x18, .sp=0xfe, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x53a2, .value=0xa8}, {.addr=0x53a3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x53a4, .a=0x68, .x=0xe2, .y=0x18, .sp=0xfe, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x53a2, .value=0xa8}, {.addr=0x53a3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x53a2, .value=0xa8, .type=IO_READ},
        {.addr=0x53a3, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_027C) {
    const struct CPU_State initial_cpu = {.pc=0xdc84, .a=0xe9, .x=0xc0, .y=0x1d, .sp=0x64, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xdc84, .value=0xa8}, {.addr=0xdc85, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xdc86, .a=0x93, .x=0xc0, .y=0x1d, .sp=0x64, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xdc84, .value=0xa8}, {.addr=0xdc85, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xdc84, .value=0xa8, .type=IO_READ},
        {.addr=0xdc85, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_027D) {
    const struct CPU_State initial_cpu = {.pc=0x70ca, .a=0xba, .x=0xdc, .y=0xe4, .sp=0x76, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x70ca, .value=0xa8}, {.addr=0x70cb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x70cc, .a=0x34, .x=0xdc, .y=0xe4, .sp=0x76, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x70ca, .value=0xa8}, {.addr=0x70cb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x70ca, .value=0xa8, .type=IO_READ},
        {.addr=0x70cb, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_027E) {
    const struct CPU_State initial_cpu = {.pc=0x7763, .a=0xc7, .x=0xde, .y=0x14, .sp=0x67, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x7763, .value=0xa8}, {.addr=0x7764, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x7765, .a=0xde, .x=0xde, .y=0x14, .sp=0x67, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7763, .value=0xa8}, {.addr=0x7764, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x7763, .value=0xa8, .type=IO_READ},
        {.addr=0x7764, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_027F) {
    const struct CPU_State initial_cpu = {.pc=0x5754, .a=0x6d, .x=0x2d, .y=0x03, .sp=0xc7, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x5754, .value=0xa8}, {.addr=0x5755, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x5756, .a=0xfa, .x=0x2d, .y=0x03, .sp=0xc7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5754, .value=0xa8}, {.addr=0x5755, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x5754, .value=0xa8, .type=IO_READ},
        {.addr=0x5755, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0280) {
    const struct CPU_State initial_cpu = {.pc=0x7090, .a=0xb3, .x=0x5a, .y=0x5e, .sp=0xb6, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x7090, .value=0xa8}, {.addr=0x7091, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x7092, .a=0x59, .x=0x5a, .y=0x5e, .sp=0xb6, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7090, .value=0xa8}, {.addr=0x7091, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x7090, .value=0xa8, .type=IO_READ},
        {.addr=0x7091, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0281) {
    const struct CPU_State initial_cpu = {.pc=0x7160, .a=0xc2, .x=0x94, .y=0xb1, .sp=0xf9, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x7160, .value=0xa8}, {.addr=0x7161, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x7162, .a=0xae, .x=0x94, .y=0xb1, .sp=0xf9, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x7160, .value=0xa8}, {.addr=0x7161, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x7160, .value=0xa8, .type=IO_READ},
        {.addr=0x7161, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0282) {
    const struct CPU_State initial_cpu = {.pc=0xbec1, .a=0x2d, .x=0xdc, .y=0x29, .sp=0x42, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xbec1, .value=0xa8}, {.addr=0xbec2, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xbec3, .a=0x67, .x=0xdc, .y=0x29, .sp=0x42, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xbec1, .value=0xa8}, {.addr=0xbec2, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xbec1, .value=0xa8, .type=IO_READ},
        {.addr=0xbec2, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0283) {
    const struct CPU_State initial_cpu = {.pc=0xfa8b, .a=0xe8, .x=0x0d, .y=0xfc, .sp=0x72, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xfa8b, .value=0xa8}, {.addr=0xfa8c, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xfa8d, .a=0x7d, .x=0x0d, .y=0xfc, .sp=0x72, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xfa8b, .value=0xa8}, {.addr=0xfa8c, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xfa8b, .value=0xa8, .type=IO_READ},
        {.addr=0xfa8c, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0284) {
    const struct CPU_State initial_cpu = {.pc=0x2554, .a=0x4f, .x=0xa4, .y=0xb8, .sp=0x8f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2554, .value=0xa8}, {.addr=0x2555, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x2556, .a=0xb1, .x=0xa4, .y=0xb8, .sp=0x8f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2554, .value=0xa8}, {.addr=0x2555, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x2554, .value=0xa8, .type=IO_READ},
        {.addr=0x2555, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0285) {
    const struct CPU_State initial_cpu = {.pc=0x80d7, .a=0x58, .x=0xd7, .y=0x92, .sp=0x33, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x80d7, .value=0xa8}, {.addr=0x80d8, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x80d9, .a=0x5d, .x=0xd7, .y=0x92, .sp=0x33, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x80d7, .value=0xa8}, {.addr=0x80d8, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x80d7, .value=0xa8, .type=IO_READ},
        {.addr=0x80d8, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0286) {
    const struct CPU_State initial_cpu = {.pc=0xd032, .a=0x82, .x=0x1d, .y=0xd3, .sp=0xbc, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xd032, .value=0xa8}, {.addr=0xd033, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xd034, .a=0x1f, .x=0x1d, .y=0xd3, .sp=0xbc, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd032, .value=0xa8}, {.addr=0xd033, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xd032, .value=0xa8, .type=IO_READ},
        {.addr=0xd033, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0287) {
    const struct CPU_State initial_cpu = {.pc=0x8f7b, .a=0xf6, .x=0x97, .y=0x0a, .sp=0x27, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x8f7b, .value=0xa8}, {.addr=0x8f7c, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x8f7d, .a=0xe7, .x=0x97, .y=0x0a, .sp=0x27, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x8f7b, .value=0xa8}, {.addr=0x8f7c, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x8f7b, .value=0xa8, .type=IO_READ},
        {.addr=0x8f7c, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0288) {
    const struct CPU_State initial_cpu = {.pc=0x7d42, .a=0x5a, .x=0xbc, .y=0xea, .sp=0x9f, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7d42, .value=0xa8}, {.addr=0x7d43, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x7d44, .a=0x82, .x=0xbc, .y=0xea, .sp=0x9f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7d42, .value=0xa8}, {.addr=0x7d43, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x7d42, .value=0xa8, .type=IO_READ},
        {.addr=0x7d43, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0289) {
    const struct CPU_State initial_cpu = {.pc=0x2183, .a=0xea, .x=0xf3, .y=0xb3, .sp=0x9f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x2183, .value=0xa8}, {.addr=0x2184, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x2185, .a=0x1e, .x=0xf3, .y=0xb3, .sp=0x9f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2183, .value=0xa8}, {.addr=0x2184, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x2183, .value=0xa8, .type=IO_READ},
        {.addr=0x2184, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_028A) {
    const struct CPU_State initial_cpu = {.pc=0x5077, .a=0x42, .x=0xd6, .y=0xd8, .sp=0xb6, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x5077, .value=0xa8}, {.addr=0x5078, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5079, .a=0x64, .x=0xd6, .y=0xd8, .sp=0xb6, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x5077, .value=0xa8}, {.addr=0x5078, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5077, .value=0xa8, .type=IO_READ},
        {.addr=0x5078, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_028B) {
    const struct CPU_State initial_cpu = {.pc=0x3e89, .a=0xe8, .x=0x5c, .y=0x39, .sp=0x01, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x3e89, .value=0xa8}, {.addr=0x3e8a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3e8b, .a=0xa2, .x=0x5c, .y=0x39, .sp=0x01, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x3e89, .value=0xa8}, {.addr=0x3e8a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3e89, .value=0xa8, .type=IO_READ},
        {.addr=0x3e8a, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_028C) {
    const struct CPU_State initial_cpu = {.pc=0xa0da, .a=0x82, .x=0xb7, .y=0x89, .sp=0x3a, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xa0da, .value=0xa8}, {.addr=0xa0db, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xa0dc, .a=0xad, .x=0xb7, .y=0x89, .sp=0x3a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa0da, .value=0xa8}, {.addr=0xa0db, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xa0da, .value=0xa8, .type=IO_READ},
        {.addr=0xa0db, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_028D) {
    const struct CPU_State initial_cpu = {.pc=0xf6ae, .a=0x15, .x=0xe6, .y=0x71, .sp=0xa3, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ae, .value=0xa8}, {.addr=0xf6af, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xf6b0, .a=0x76, .x=0xe6, .y=0x71, .sp=0xa3, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf6ae, .value=0xa8}, {.addr=0xf6af, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xf6ae, .value=0xa8, .type=IO_READ},
        {.addr=0xf6af, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_028E) {
    const struct CPU_State initial_cpu = {.pc=0xcc54, .a=0xe9, .x=0xb9, .y=0x5e, .sp=0x20, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xcc54, .value=0xa8}, {.addr=0xcc55, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xcc56, .a=0xe6, .x=0xb9, .y=0x5e, .sp=0x20, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xcc54, .value=0xa8}, {.addr=0xcc55, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xcc54, .value=0xa8, .type=IO_READ},
        {.addr=0xcc55, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_028F) {
    const struct CPU_State initial_cpu = {.pc=0x68ad, .a=0xcf, .x=0x9a, .y=0xb6, .sp=0x8b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x68ad, .value=0xa8}, {.addr=0x68ae, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x68af, .a=0x22, .x=0x9a, .y=0xb6, .sp=0x8b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x68ad, .value=0xa8}, {.addr=0x68ae, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x68ad, .value=0xa8, .type=IO_READ},
        {.addr=0x68ae, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0290) {
    const struct CPU_State initial_cpu = {.pc=0x9157, .a=0x0f, .x=0x06, .y=0x1d, .sp=0x62, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x9157, .value=0xa8}, {.addr=0x9158, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x9159, .a=0x5a, .x=0x06, .y=0x1d, .sp=0x62, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9157, .value=0xa8}, {.addr=0x9158, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x9157, .value=0xa8, .type=IO_READ},
        {.addr=0x9158, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0291) {
    const struct CPU_State initial_cpu = {.pc=0xa025, .a=0x5a, .x=0x4c, .y=0xdc, .sp=0xb1, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xa025, .value=0xa8}, {.addr=0xa026, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xa027, .a=0x20, .x=0x4c, .y=0xdc, .sp=0xb1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xa025, .value=0xa8}, {.addr=0xa026, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xa025, .value=0xa8, .type=IO_READ},
        {.addr=0xa026, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0292) {
    const struct CPU_State initial_cpu = {.pc=0xa060, .a=0x0d, .x=0x15, .y=0xa8, .sp=0x73, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xa060, .value=0xa8}, {.addr=0xa061, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xa062, .a=0xf2, .x=0x15, .y=0xa8, .sp=0x73, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xa060, .value=0xa8}, {.addr=0xa061, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xa060, .value=0xa8, .type=IO_READ},
        {.addr=0xa061, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0293) {
    const struct CPU_State initial_cpu = {.pc=0x9428, .a=0xcd, .x=0x78, .y=0xc9, .sp=0x8f, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x9428, .value=0xa8}, {.addr=0x9429, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x942a, .a=0x8e, .x=0x78, .y=0xc9, .sp=0x8f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9428, .value=0xa8}, {.addr=0x9429, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x9428, .value=0xa8, .type=IO_READ},
        {.addr=0x9429, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0294) {
    const struct CPU_State initial_cpu = {.pc=0x8f97, .a=0xf9, .x=0xf4, .y=0x1a, .sp=0xd7, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x8f97, .value=0xa8}, {.addr=0x8f98, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x8f99, .a=0xf7, .x=0xf4, .y=0x1a, .sp=0xd7, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8f97, .value=0xa8}, {.addr=0x8f98, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x8f97, .value=0xa8, .type=IO_READ},
        {.addr=0x8f98, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0295) {
    const struct CPU_State initial_cpu = {.pc=0x2629, .a=0x82, .x=0x4a, .y=0xf0, .sp=0x55, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x2629, .value=0xa8}, {.addr=0x262a, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x262b, .a=0x00, .x=0x4a, .y=0xf0, .sp=0x55, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x2629, .value=0xa8}, {.addr=0x262a, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x2629, .value=0xa8, .type=IO_READ},
        {.addr=0x262a, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0296) {
    const struct CPU_State initial_cpu = {.pc=0x56b5, .a=0x00, .x=0xb7, .y=0x66, .sp=0xaa, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x56b5, .value=0xa8}, {.addr=0x56b6, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x56b7, .a=0x66, .x=0xb7, .y=0x66, .sp=0xaa, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x56b5, .value=0xa8}, {.addr=0x56b6, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x56b5, .value=0xa8, .type=IO_READ},
        {.addr=0x56b6, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0297) {
    const struct CPU_State initial_cpu = {.pc=0xb2ad, .a=0xa9, .x=0x4d, .y=0xea, .sp=0x49, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xb2ad, .value=0xa8}, {.addr=0xb2ae, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xb2af, .a=0x3c, .x=0x4d, .y=0xea, .sp=0x49, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xb2ad, .value=0xa8}, {.addr=0xb2ae, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xb2ad, .value=0xa8, .type=IO_READ},
        {.addr=0xb2ae, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0298) {
    const struct CPU_State initial_cpu = {.pc=0xdbcb, .a=0x4d, .x=0x2c, .y=0x95, .sp=0xfc, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xdbcb, .value=0xa8}, {.addr=0xdbcc, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xdbcd, .a=0x57, .x=0x2c, .y=0x95, .sp=0xfc, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xdbcb, .value=0xa8}, {.addr=0xdbcc, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xdbcb, .value=0xa8, .type=IO_READ},
        {.addr=0xdbcc, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0299) {
    const struct CPU_State initial_cpu = {.pc=0x4395, .a=0x36, .x=0xc8, .y=0x0c, .sp=0x4a, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4395, .value=0xa8}, {.addr=0x4396, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x4397, .a=0xac, .x=0xc8, .y=0x0c, .sp=0x4a, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4395, .value=0xa8}, {.addr=0x4396, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x4395, .value=0xa8, .type=IO_READ},
        {.addr=0x4396, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_029A) {
    const struct CPU_State initial_cpu = {.pc=0xd26a, .a=0xc1, .x=0xc3, .y=0x79, .sp=0x75, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xd26a, .value=0xa8}, {.addr=0xd26b, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xd26c, .a=0x7d, .x=0xc3, .y=0x79, .sp=0x75, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xd26a, .value=0xa8}, {.addr=0xd26b, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xd26a, .value=0xa8, .type=IO_READ},
        {.addr=0xd26b, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_029B) {
    const struct CPU_State initial_cpu = {.pc=0x07a6, .a=0xe4, .x=0x6f, .y=0x0a, .sp=0x10, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x07a6, .value=0xa8}, {.addr=0x07a7, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x07a8, .a=0xcc, .x=0x6f, .y=0x0a, .sp=0x10, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x07a6, .value=0xa8}, {.addr=0x07a7, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x07a6, .value=0xa8, .type=IO_READ},
        {.addr=0x07a7, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_029C) {
    const struct CPU_State initial_cpu = {.pc=0xdf7f, .a=0x8e, .x=0xf7, .y=0xb0, .sp=0x6f, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xdf7f, .value=0xa8}, {.addr=0xdf80, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xdf81, .a=0x92, .x=0xf7, .y=0xb0, .sp=0x6f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xdf7f, .value=0xa8}, {.addr=0xdf80, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xdf7f, .value=0xa8, .type=IO_READ},
        {.addr=0xdf80, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_029D) {
    const struct CPU_State initial_cpu = {.pc=0xb535, .a=0xd2, .x=0x26, .y=0x68, .sp=0xab, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xb535, .value=0xa8}, {.addr=0xb536, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xb537, .a=0xe0, .x=0x26, .y=0x68, .sp=0xab, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb535, .value=0xa8}, {.addr=0xb536, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xb535, .value=0xa8, .type=IO_READ},
        {.addr=0xb536, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_029E) {
    const struct CPU_State initial_cpu = {.pc=0x9d1a, .a=0x5d, .x=0x8a, .y=0xf7, .sp=0x87, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9d1a, .value=0xa8}, {.addr=0x9d1b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9d1c, .a=0x80, .x=0x8a, .y=0xf7, .sp=0x87, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9d1a, .value=0xa8}, {.addr=0x9d1b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9d1a, .value=0xa8, .type=IO_READ},
        {.addr=0x9d1b, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_029F) {
    const struct CPU_State initial_cpu = {.pc=0xb742, .a=0x0a, .x=0x04, .y=0x43, .sp=0xed, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xb742, .value=0xa8}, {.addr=0xb743, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xb744, .a=0xa5, .x=0x04, .y=0x43, .sp=0xed, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb742, .value=0xa8}, {.addr=0xb743, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xb742, .value=0xa8, .type=IO_READ},
        {.addr=0xb743, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xd1e9, .a=0x06, .x=0xe3, .y=0x16, .sp=0x91, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xd1e9, .value=0xa8}, {.addr=0xd1ea, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xd1eb, .a=0x6a, .x=0xe3, .y=0x16, .sp=0x91, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd1e9, .value=0xa8}, {.addr=0xd1ea, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xd1e9, .value=0xa8, .type=IO_READ},
        {.addr=0xd1ea, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x279c, .a=0x77, .x=0x81, .y=0x45, .sp=0xc6, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x279c, .value=0xa8}, {.addr=0x279d, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x279e, .a=0x90, .x=0x81, .y=0x45, .sp=0xc6, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x279c, .value=0xa8}, {.addr=0x279d, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x279c, .value=0xa8, .type=IO_READ},
        {.addr=0x279d, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x4dab, .a=0x6a, .x=0x77, .y=0xdb, .sp=0x60, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x4dab, .value=0xa8}, {.addr=0x4dac, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x4dad, .a=0xe0, .x=0x77, .y=0xdb, .sp=0x60, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4dab, .value=0xa8}, {.addr=0x4dac, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x4dab, .value=0xa8, .type=IO_READ},
        {.addr=0x4dac, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xc865, .a=0x7b, .x=0xe1, .y=0x5b, .sp=0xec, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xc865, .value=0xa8}, {.addr=0xc866, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc867, .a=0x7e, .x=0xe1, .y=0x5b, .sp=0xec, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc865, .value=0xa8}, {.addr=0xc866, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc865, .value=0xa8, .type=IO_READ},
        {.addr=0xc866, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xbc69, .a=0xd8, .x=0x59, .y=0xa7, .sp=0xa0, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xbc69, .value=0xa8}, {.addr=0xbc6a, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xbc6b, .a=0x9f, .x=0x59, .y=0xa7, .sp=0xa0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xbc69, .value=0xa8}, {.addr=0xbc6a, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xbc69, .value=0xa8, .type=IO_READ},
        {.addr=0xbc6a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xe841, .a=0x93, .x=0x35, .y=0x84, .sp=0x5a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xe841, .value=0xa8}, {.addr=0xe842, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe843, .a=0xd6, .x=0x35, .y=0x84, .sp=0x5a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe841, .value=0xa8}, {.addr=0xe842, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe841, .value=0xa8, .type=IO_READ},
        {.addr=0xe842, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x3b2b, .a=0x7c, .x=0xb5, .y=0x20, .sp=0x7e, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x3b2b, .value=0xa8}, {.addr=0x3b2c, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x3b2d, .a=0x58, .x=0xb5, .y=0x20, .sp=0x7e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3b2b, .value=0xa8}, {.addr=0x3b2c, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x3b2b, .value=0xa8, .type=IO_READ},
        {.addr=0x3b2c, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xd921, .a=0xa3, .x=0xae, .y=0x8c, .sp=0x43, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xd921, .value=0xa8}, {.addr=0xd922, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd923, .a=0x26, .x=0xae, .y=0x8c, .sp=0x43, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd921, .value=0xa8}, {.addr=0xd922, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd921, .value=0xa8, .type=IO_READ},
        {.addr=0xd922, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x0d52, .a=0x16, .x=0x40, .y=0x90, .sp=0xc5, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0d52, .value=0xa8}, {.addr=0x0d53, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x0d54, .a=0x5d, .x=0x40, .y=0x90, .sp=0xc5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0d52, .value=0xa8}, {.addr=0x0d53, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x0d52, .value=0xa8, .type=IO_READ},
        {.addr=0x0d53, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x5a53, .a=0xc8, .x=0x41, .y=0x99, .sp=0x8c, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x5a53, .value=0xa8}, {.addr=0x5a54, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x5a55, .a=0xed, .x=0x41, .y=0x99, .sp=0x8c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5a53, .value=0xa8}, {.addr=0x5a54, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x5a53, .value=0xa8, .type=IO_READ},
        {.addr=0x5a54, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xbcbc, .a=0x8f, .x=0x45, .y=0xb8, .sp=0x99, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xbcbc, .value=0xa8}, {.addr=0xbcbd, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xbcbe, .a=0xfb, .x=0x45, .y=0xb8, .sp=0x99, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbcbc, .value=0xa8}, {.addr=0xbcbd, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xbcbc, .value=0xa8, .type=IO_READ},
        {.addr=0xbcbd, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x3611, .a=0xb0, .x=0xdf, .y=0x16, .sp=0x70, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x3611, .value=0xa8}, {.addr=0x3612, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x3613, .a=0x06, .x=0xdf, .y=0x16, .sp=0x70, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3611, .value=0xa8}, {.addr=0x3612, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x3611, .value=0xa8, .type=IO_READ},
        {.addr=0x3612, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xd0a2, .a=0x20, .x=0x4f, .y=0xf3, .sp=0x22, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xd0a2, .value=0xa8}, {.addr=0xd0a3, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xd0a4, .a=0xda, .x=0x4f, .y=0xf3, .sp=0x22, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd0a2, .value=0xa8}, {.addr=0xd0a3, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xd0a2, .value=0xa8, .type=IO_READ},
        {.addr=0xd0a3, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xa480, .a=0xeb, .x=0x37, .y=0x5b, .sp=0x5f, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xa480, .value=0xa8}, {.addr=0xa481, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xa482, .a=0xdd, .x=0x37, .y=0x5b, .sp=0x5f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa480, .value=0xa8}, {.addr=0xa481, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xa480, .value=0xa8, .type=IO_READ},
        {.addr=0xa481, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x3812, .a=0x60, .x=0x89, .y=0xf7, .sp=0x6a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x3812, .value=0xa8}, {.addr=0x3813, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x3814, .a=0x78, .x=0x89, .y=0xf7, .sp=0x6a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3812, .value=0xa8}, {.addr=0x3813, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x3812, .value=0xa8, .type=IO_READ},
        {.addr=0x3813, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x761e, .a=0x19, .x=0xff, .y=0xb0, .sp=0x54, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x761e, .value=0xa8}, {.addr=0x761f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7620, .a=0x69, .x=0xff, .y=0xb0, .sp=0x54, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x761e, .value=0xa8}, {.addr=0x761f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x761e, .value=0xa8, .type=IO_READ},
        {.addr=0x761f, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x1512, .a=0x4b, .x=0xe8, .y=0xcd, .sp=0x74, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x1512, .value=0xa8}, {.addr=0x1513, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x1514, .a=0x87, .x=0xe8, .y=0xcd, .sp=0x74, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x1512, .value=0xa8}, {.addr=0x1513, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x1512, .value=0xa8, .type=IO_READ},
        {.addr=0x1513, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x0c52, .a=0x33, .x=0x5a, .y=0xbd, .sp=0xe4, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0c52, .value=0xa8}, {.addr=0x0c53, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x0c54, .a=0xf7, .x=0x5a, .y=0xbd, .sp=0xe4, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0c52, .value=0xa8}, {.addr=0x0c53, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x0c52, .value=0xa8, .type=IO_READ},
        {.addr=0x0c53, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x8791, .a=0x7e, .x=0x2b, .y=0x58, .sp=0x37, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x8791, .value=0xa8}, {.addr=0x8792, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x8793, .a=0xbd, .x=0x2b, .y=0x58, .sp=0x37, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x8791, .value=0xa8}, {.addr=0x8792, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x8791, .value=0xa8, .type=IO_READ},
        {.addr=0x8792, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x7ac3, .a=0x74, .x=0x2d, .y=0x7d, .sp=0x28, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x7ac3, .value=0xa8}, {.addr=0x7ac4, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x7ac5, .a=0x6e, .x=0x2d, .y=0x7d, .sp=0x28, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7ac3, .value=0xa8}, {.addr=0x7ac4, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x7ac3, .value=0xa8, .type=IO_READ},
        {.addr=0x7ac4, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xebd4, .a=0xc1, .x=0x07, .y=0xf6, .sp=0xa0, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xebd4, .value=0xa8}, {.addr=0xebd5, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xebd6, .a=0x8d, .x=0x07, .y=0xf6, .sp=0xa0, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xebd4, .value=0xa8}, {.addr=0xebd5, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xebd4, .value=0xa8, .type=IO_READ},
        {.addr=0xebd5, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xb114, .a=0x17, .x=0x9a, .y=0x12, .sp=0x3c, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xb114, .value=0xa8}, {.addr=0xb115, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xb116, .a=0x25, .x=0x9a, .y=0x12, .sp=0x3c, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xb114, .value=0xa8}, {.addr=0xb115, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xb114, .value=0xa8, .type=IO_READ},
        {.addr=0xb115, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xfc75, .a=0xee, .x=0x9b, .y=0xd5, .sp=0x61, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xfc75, .value=0xa8}, {.addr=0xfc76, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xfc77, .a=0xa5, .x=0x9b, .y=0xd5, .sp=0x61, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xfc75, .value=0xa8}, {.addr=0xfc76, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xfc75, .value=0xa8, .type=IO_READ},
        {.addr=0xfc76, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x3e4f, .a=0xc1, .x=0x59, .y=0xfc, .sp=0xff, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x3e4f, .value=0xa8}, {.addr=0x3e50, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x3e51, .a=0x78, .x=0x59, .y=0xfc, .sp=0xff, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3e4f, .value=0xa8}, {.addr=0x3e50, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x3e4f, .value=0xa8, .type=IO_READ},
        {.addr=0x3e50, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x0fe3, .a=0x83, .x=0x7a, .y=0x3d, .sp=0x4c, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0fe3, .value=0xa8}, {.addr=0x0fe4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0fe5, .a=0xd5, .x=0x7a, .y=0x3d, .sp=0x4c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0fe3, .value=0xa8}, {.addr=0x0fe4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0fe3, .value=0xa8, .type=IO_READ},
        {.addr=0x0fe4, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xd8be, .a=0xfd, .x=0x84, .y=0xcc, .sp=0x2b, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xd8be, .value=0xa8}, {.addr=0xd8bf, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xd8c0, .a=0xac, .x=0x84, .y=0xcc, .sp=0x2b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xd8be, .value=0xa8}, {.addr=0xd8bf, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xd8be, .value=0xa8, .type=IO_READ},
        {.addr=0xd8bf, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x5830, .a=0xda, .x=0xc4, .y=0xbc, .sp=0x25, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x5830, .value=0xa8}, {.addr=0x5831, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x5832, .a=0xf0, .x=0xc4, .y=0xbc, .sp=0x25, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5830, .value=0xa8}, {.addr=0x5831, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x5830, .value=0xa8, .type=IO_READ},
        {.addr=0x5831, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xce38, .a=0xe8, .x=0x5b, .y=0xe1, .sp=0x68, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xce38, .value=0xa8}, {.addr=0xce39, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xce3a, .a=0x43, .x=0x5b, .y=0xe1, .sp=0x68, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xce38, .value=0xa8}, {.addr=0xce39, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xce38, .value=0xa8, .type=IO_READ},
        {.addr=0xce39, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xa451, .a=0x39, .x=0x07, .y=0x27, .sp=0x2d, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xa451, .value=0xa8}, {.addr=0xa452, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa453, .a=0x3c, .x=0x07, .y=0x27, .sp=0x2d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa451, .value=0xa8}, {.addr=0xa452, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa451, .value=0xa8, .type=IO_READ},
        {.addr=0xa452, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x141f, .a=0x95, .x=0xdf, .y=0x6a, .sp=0x2a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x141f, .value=0xa8}, {.addr=0x1420, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x1421, .a=0xcb, .x=0xdf, .y=0x6a, .sp=0x2a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x141f, .value=0xa8}, {.addr=0x1420, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x141f, .value=0xa8, .type=IO_READ},
        {.addr=0x1420, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xb6c1, .a=0xfc, .x=0x16, .y=0x84, .sp=0xd8, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb6c1, .value=0xa8}, {.addr=0xb6c2, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xb6c3, .a=0xd1, .x=0x16, .y=0x84, .sp=0xd8, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xb6c1, .value=0xa8}, {.addr=0xb6c2, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xb6c1, .value=0xa8, .type=IO_READ},
        {.addr=0xb6c2, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xd3d1, .a=0x7a, .x=0xda, .y=0x76, .sp=0xcb, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d1, .value=0xa8}, {.addr=0xd3d2, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xd3d3, .a=0xcd, .x=0xda, .y=0x76, .sp=0xcb, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd3d1, .value=0xa8}, {.addr=0xd3d2, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xd3d1, .value=0xa8, .type=IO_READ},
        {.addr=0xd3d2, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x71fd, .a=0x52, .x=0xc2, .y=0xb2, .sp=0x50, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x71fd, .value=0xa8}, {.addr=0x71fe, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x71ff, .a=0x78, .x=0xc2, .y=0xb2, .sp=0x50, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x71fd, .value=0xa8}, {.addr=0x71fe, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x71fd, .value=0xa8, .type=IO_READ},
        {.addr=0x71fe, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x99f0, .a=0x2d, .x=0x5e, .y=0x4d, .sp=0xcf, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x99f0, .value=0xa8}, {.addr=0x99f1, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x99f2, .a=0x8b, .x=0x5e, .y=0x4d, .sp=0xcf, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x99f0, .value=0xa8}, {.addr=0x99f1, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x99f0, .value=0xa8, .type=IO_READ},
        {.addr=0x99f1, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xd968, .a=0xa3, .x=0x27, .y=0xb6, .sp=0x03, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xd968, .value=0xa8}, {.addr=0xd969, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xd96a, .a=0xd9, .x=0x27, .y=0xb6, .sp=0x03, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd968, .value=0xa8}, {.addr=0xd969, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xd968, .value=0xa8, .type=IO_READ},
        {.addr=0xd969, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x9f85, .a=0x19, .x=0x65, .y=0xfa, .sp=0x1d, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x9f85, .value=0xa8}, {.addr=0x9f86, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x9f87, .a=0xf5, .x=0x65, .y=0xfa, .sp=0x1d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9f85, .value=0xa8}, {.addr=0x9f86, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x9f85, .value=0xa8, .type=IO_READ},
        {.addr=0x9f86, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xa8e0, .a=0xe6, .x=0xec, .y=0xb9, .sp=0x10, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xa8e0, .value=0xa8}, {.addr=0xa8e1, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xa8e2, .a=0x67, .x=0xec, .y=0xb9, .sp=0x10, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa8e0, .value=0xa8}, {.addr=0xa8e1, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xa8e0, .value=0xa8, .type=IO_READ},
        {.addr=0xa8e1, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x55ec, .a=0x6f, .x=0x46, .y=0x01, .sp=0xf8, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x55ec, .value=0xa8}, {.addr=0x55ed, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x55ee, .a=0x03, .x=0x46, .y=0x01, .sp=0xf8, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x55ec, .value=0xa8}, {.addr=0x55ed, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x55ec, .value=0xa8, .type=IO_READ},
        {.addr=0x55ed, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x327b, .a=0x8e, .x=0xae, .y=0xf7, .sp=0x4f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x327b, .value=0xa8}, {.addr=0x327c, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x327d, .a=0x5d, .x=0xae, .y=0xf7, .sp=0x4f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x327b, .value=0xa8}, {.addr=0x327c, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x327b, .value=0xa8, .type=IO_READ},
        {.addr=0x327c, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x2ffe, .a=0xc0, .x=0x83, .y=0x4f, .sp=0x10, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x2ffe, .value=0xa8}, {.addr=0x2fff, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x3000, .a=0xed, .x=0x83, .y=0x4f, .sp=0x10, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2ffe, .value=0xa8}, {.addr=0x2fff, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x2ffe, .value=0xa8, .type=IO_READ},
        {.addr=0x2fff, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x2fa9, .a=0xf6, .x=0x14, .y=0x16, .sp=0x20, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x2fa9, .value=0xa8}, {.addr=0x2faa, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x2fab, .a=0xaa, .x=0x14, .y=0x16, .sp=0x20, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2fa9, .value=0xa8}, {.addr=0x2faa, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x2fa9, .value=0xa8, .type=IO_READ},
        {.addr=0x2faa, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xbdb7, .a=0x1a, .x=0xdc, .y=0x93, .sp=0xcf, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xbdb7, .value=0xa8}, {.addr=0xbdb8, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xbdb9, .a=0x87, .x=0xdc, .y=0x93, .sp=0xcf, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xbdb7, .value=0xa8}, {.addr=0xbdb8, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xbdb7, .value=0xa8, .type=IO_READ},
        {.addr=0xbdb8, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xe152, .a=0x4a, .x=0x2c, .y=0x59, .sp=0x16, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xe152, .value=0xa8}, {.addr=0xe153, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xe154, .a=0x01, .x=0x2c, .y=0x59, .sp=0x16, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe152, .value=0xa8}, {.addr=0xe153, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xe152, .value=0xa8, .type=IO_READ},
        {.addr=0xe153, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xdf87, .a=0xf6, .x=0xc3, .y=0x84, .sp=0x08, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xdf87, .value=0xa8}, {.addr=0xdf88, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xdf89, .a=0x04, .x=0xc3, .y=0x84, .sp=0x08, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xdf87, .value=0xa8}, {.addr=0xdf88, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xdf87, .value=0xa8, .type=IO_READ},
        {.addr=0xdf88, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x5ec5, .a=0xcc, .x=0xf9, .y=0xb0, .sp=0xf0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec5, .value=0xa8}, {.addr=0x5ec6, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x5ec7, .a=0x42, .x=0xf9, .y=0xb0, .sp=0xf0, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x5ec5, .value=0xa8}, {.addr=0x5ec6, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x5ec5, .value=0xa8, .type=IO_READ},
        {.addr=0x5ec6, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x902d, .a=0xad, .x=0x42, .y=0xa7, .sp=0x9f, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x902d, .value=0xa8}, {.addr=0x902e, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x902f, .a=0x73, .x=0x42, .y=0xa7, .sp=0x9f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x902d, .value=0xa8}, {.addr=0x902e, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x902d, .value=0xa8, .type=IO_READ},
        {.addr=0x902e, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x5e10, .a=0xa0, .x=0xd8, .y=0x0e, .sp=0x58, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x5e10, .value=0xa8}, {.addr=0x5e11, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x5e12, .a=0x91, .x=0xd8, .y=0x0e, .sp=0x58, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x5e10, .value=0xa8}, {.addr=0x5e11, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x5e10, .value=0xa8, .type=IO_READ},
        {.addr=0x5e11, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x21ba, .a=0xbc, .x=0x4b, .y=0x5a, .sp=0xc1, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x21ba, .value=0xa8}, {.addr=0x21bb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x21bc, .a=0x0c, .x=0x4b, .y=0x5a, .sp=0xc1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x21ba, .value=0xa8}, {.addr=0x21bb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x21ba, .value=0xa8, .type=IO_READ},
        {.addr=0x21bb, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x847a, .a=0xef, .x=0xbb, .y=0x25, .sp=0x9c, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x847a, .value=0xa8}, {.addr=0x847b, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x847c, .a=0x2b, .x=0xbb, .y=0x25, .sp=0x9c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x847a, .value=0xa8}, {.addr=0x847b, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x847a, .value=0xa8, .type=IO_READ},
        {.addr=0x847b, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x3463, .a=0x31, .x=0xc9, .y=0xc5, .sp=0xf1, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3463, .value=0xa8}, {.addr=0x3464, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3465, .a=0x71, .x=0xc9, .y=0xc5, .sp=0xf1, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3463, .value=0xa8}, {.addr=0x3464, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3463, .value=0xa8, .type=IO_READ},
        {.addr=0x3464, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x1f80, .a=0x13, .x=0x6d, .y=0x09, .sp=0xc2, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x1f80, .value=0xa8}, {.addr=0x1f81, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x1f82, .a=0x18, .x=0x6d, .y=0x09, .sp=0xc2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1f80, .value=0xa8}, {.addr=0x1f81, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x1f80, .value=0xa8, .type=IO_READ},
        {.addr=0x1f81, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xb93b, .a=0xbe, .x=0xb3, .y=0x95, .sp=0x31, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xb93b, .value=0xa8}, {.addr=0xb93c, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xb93d, .a=0x64, .x=0xb3, .y=0x95, .sp=0x31, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xb93b, .value=0xa8}, {.addr=0xb93c, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xb93b, .value=0xa8, .type=IO_READ},
        {.addr=0xb93c, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x56d3, .a=0xba, .x=0x60, .y=0x14, .sp=0x8f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x56d3, .value=0xa8}, {.addr=0x56d4, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x56d5, .a=0xf6, .x=0x60, .y=0x14, .sp=0x8f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x56d3, .value=0xa8}, {.addr=0x56d4, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x56d3, .value=0xa8, .type=IO_READ},
        {.addr=0x56d4, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x13b4, .a=0x5a, .x=0x70, .y=0xed, .sp=0x5f, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x13b4, .value=0xa8}, {.addr=0x13b5, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x13b6, .a=0x16, .x=0x70, .y=0xed, .sp=0x5f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x13b4, .value=0xa8}, {.addr=0x13b5, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x13b4, .value=0xa8, .type=IO_READ},
        {.addr=0x13b5, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x179d, .a=0x46, .x=0xca, .y=0x81, .sp=0xa9, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x179d, .value=0xa8}, {.addr=0x179e, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x179f, .a=0x72, .x=0xca, .y=0x81, .sp=0xa9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x179d, .value=0xa8}, {.addr=0x179e, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x179d, .value=0xa8, .type=IO_READ},
        {.addr=0x179e, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xcdf6, .a=0x3a, .x=0x62, .y=0x97, .sp=0x40, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xcdf6, .value=0xa8}, {.addr=0xcdf7, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xcdf8, .a=0xa2, .x=0x62, .y=0x97, .sp=0x40, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xcdf6, .value=0xa8}, {.addr=0xcdf7, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xcdf6, .value=0xa8, .type=IO_READ},
        {.addr=0xcdf7, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xc735, .a=0x50, .x=0x02, .y=0x03, .sp=0x1a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xc735, .value=0xa8}, {.addr=0xc736, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xc737, .a=0x8e, .x=0x02, .y=0x03, .sp=0x1a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc735, .value=0xa8}, {.addr=0xc736, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xc735, .value=0xa8, .type=IO_READ},
        {.addr=0xc736, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x5891, .a=0x82, .x=0x29, .y=0xda, .sp=0x93, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x5891, .value=0xa8}, {.addr=0x5892, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x5893, .a=0x9e, .x=0x29, .y=0xda, .sp=0x93, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5891, .value=0xa8}, {.addr=0x5892, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x5891, .value=0xa8, .type=IO_READ},
        {.addr=0x5892, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x1aa5, .a=0x4c, .x=0x80, .y=0xdc, .sp=0xca, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x1aa5, .value=0xa8}, {.addr=0x1aa6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1aa7, .a=0x5e, .x=0x80, .y=0xdc, .sp=0xca, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1aa5, .value=0xa8}, {.addr=0x1aa6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1aa5, .value=0xa8, .type=IO_READ},
        {.addr=0x1aa6, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x4b08, .a=0xe2, .x=0xce, .y=0x69, .sp=0xa8, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x4b08, .value=0xa8}, {.addr=0x4b09, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x4b0a, .a=0x52, .x=0xce, .y=0x69, .sp=0xa8, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4b08, .value=0xa8}, {.addr=0x4b09, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x4b08, .value=0xa8, .type=IO_READ},
        {.addr=0x4b09, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x0c8b, .a=0x6f, .x=0x97, .y=0xe5, .sp=0xc3, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0c8b, .value=0xa8}, {.addr=0x0c8c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0c8d, .a=0x6e, .x=0x97, .y=0xe5, .sp=0xc3, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0c8b, .value=0xa8}, {.addr=0x0c8c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0c8b, .value=0xa8, .type=IO_READ},
        {.addr=0x0c8c, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xe991, .a=0x07, .x=0x0c, .y=0x2f, .sp=0x49, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xe991, .value=0xa8}, {.addr=0xe992, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe993, .a=0x2a, .x=0x0c, .y=0x2f, .sp=0x49, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe991, .value=0xa8}, {.addr=0xe992, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe991, .value=0xa8, .type=IO_READ},
        {.addr=0xe992, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x56d6, .a=0xea, .x=0x6f, .y=0x4c, .sp=0x5b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x56d6, .value=0xa8}, {.addr=0x56d7, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x56d8, .a=0x1e, .x=0x6f, .y=0x4c, .sp=0x5b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x56d6, .value=0xa8}, {.addr=0x56d7, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x56d6, .value=0xa8, .type=IO_READ},
        {.addr=0x56d7, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x6805, .a=0x03, .x=0x6b, .y=0x04, .sp=0xdc, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x6805, .value=0xa8}, {.addr=0x6806, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x6807, .a=0x76, .x=0x6b, .y=0x04, .sp=0xdc, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x6805, .value=0xa8}, {.addr=0x6806, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x6805, .value=0xa8, .type=IO_READ},
        {.addr=0x6806, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x1080, .a=0x30, .x=0x8e, .y=0xae, .sp=0x6b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x1080, .value=0xa8}, {.addr=0x1081, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1082, .a=0xd2, .x=0x8e, .y=0xae, .sp=0x6b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1080, .value=0xa8}, {.addr=0x1081, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1080, .value=0xa8, .type=IO_READ},
        {.addr=0x1081, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x38d7, .a=0x28, .x=0xab, .y=0xcc, .sp=0x0d, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x38d7, .value=0xa8}, {.addr=0x38d8, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x38d9, .a=0x3e, .x=0xab, .y=0xcc, .sp=0x0d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x38d7, .value=0xa8}, {.addr=0x38d8, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x38d7, .value=0xa8, .type=IO_READ},
        {.addr=0x38d8, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xa38d, .a=0x51, .x=0x5b, .y=0x39, .sp=0x34, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xa38d, .value=0xa8}, {.addr=0xa38e, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xa38f, .a=0x4c, .x=0x5b, .y=0x39, .sp=0x34, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa38d, .value=0xa8}, {.addr=0xa38e, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xa38d, .value=0xa8, .type=IO_READ},
        {.addr=0xa38e, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x2c5a, .a=0x90, .x=0x98, .y=0xb4, .sp=0x79, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x2c5a, .value=0xa8}, {.addr=0x2c5b, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x2c5c, .a=0xae, .x=0x98, .y=0xb4, .sp=0x79, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2c5a, .value=0xa8}, {.addr=0x2c5b, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x2c5a, .value=0xa8, .type=IO_READ},
        {.addr=0x2c5b, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xbbb5, .a=0xbb, .x=0x9d, .y=0xd9, .sp=0x0d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xbbb5, .value=0xa8}, {.addr=0xbbb6, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xbbb7, .a=0xff, .x=0x9d, .y=0xd9, .sp=0x0d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xbbb5, .value=0xa8}, {.addr=0xbbb6, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xbbb5, .value=0xa8, .type=IO_READ},
        {.addr=0xbbb6, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x38b6, .a=0x6b, .x=0x8e, .y=0x28, .sp=0xfb, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x38b6, .value=0xa8}, {.addr=0x38b7, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x38b8, .a=0x40, .x=0x8e, .y=0x28, .sp=0xfb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x38b6, .value=0xa8}, {.addr=0x38b7, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x38b6, .value=0xa8, .type=IO_READ},
        {.addr=0x38b7, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x3681, .a=0xc8, .x=0xbf, .y=0x0c, .sp=0xfa, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x3681, .value=0xa8}, {.addr=0x3682, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x3683, .a=0xfe, .x=0xbf, .y=0x0c, .sp=0xfa, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3681, .value=0xa8}, {.addr=0x3682, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x3681, .value=0xa8, .type=IO_READ},
        {.addr=0x3682, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xfc17, .a=0x48, .x=0x96, .y=0x93, .sp=0xbd, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xfc17, .value=0xa8}, {.addr=0xfc18, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xfc19, .a=0x5f, .x=0x96, .y=0x93, .sp=0xbd, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xfc17, .value=0xa8}, {.addr=0xfc18, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xfc17, .value=0xa8, .type=IO_READ},
        {.addr=0xfc18, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x03ae, .a=0x15, .x=0x47, .y=0xe2, .sp=0xc5, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x03ae, .value=0xa8}, {.addr=0x03af, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x03b0, .a=0x4b, .x=0x47, .y=0xe2, .sp=0xc5, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x03ae, .value=0xa8}, {.addr=0x03af, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x03ae, .value=0xa8, .type=IO_READ},
        {.addr=0x03af, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xb2ce, .a=0xca, .x=0x5d, .y=0x98, .sp=0xaf, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xb2ce, .value=0xa8}, {.addr=0xb2cf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xb2d0, .a=0xdb, .x=0x5d, .y=0x98, .sp=0xaf, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb2ce, .value=0xa8}, {.addr=0xb2cf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xb2ce, .value=0xa8, .type=IO_READ},
        {.addr=0xb2cf, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x1213, .a=0x79, .x=0x60, .y=0x9e, .sp=0x27, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x1213, .value=0xa8}, {.addr=0x1214, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x1215, .a=0x3c, .x=0x60, .y=0x9e, .sp=0x27, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1213, .value=0xa8}, {.addr=0x1214, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x1213, .value=0xa8, .type=IO_READ},
        {.addr=0x1214, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x98bb, .a=0x5c, .x=0x1a, .y=0x3d, .sp=0x8b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x98bb, .value=0xa8}, {.addr=0x98bc, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x98bd, .a=0xca, .x=0x1a, .y=0x3d, .sp=0x8b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x98bb, .value=0xa8}, {.addr=0x98bc, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x98bb, .value=0xa8, .type=IO_READ},
        {.addr=0x98bc, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xf059, .a=0xdc, .x=0x54, .y=0x2d, .sp=0xd5, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xf059, .value=0xa8}, {.addr=0xf05a, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xf05b, .a=0x40, .x=0x54, .y=0x2d, .sp=0xd5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf059, .value=0xa8}, {.addr=0xf05a, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xf059, .value=0xa8, .type=IO_READ},
        {.addr=0xf05a, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xea93, .a=0xe9, .x=0x4c, .y=0xd2, .sp=0x03, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xea93, .value=0xa8}, {.addr=0xea94, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xea95, .a=0x7c, .x=0x4c, .y=0xd2, .sp=0x03, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xea93, .value=0xa8}, {.addr=0xea94, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xea93, .value=0xa8, .type=IO_READ},
        {.addr=0xea94, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x5d44, .a=0xf8, .x=0x2b, .y=0x92, .sp=0xc7, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5d44, .value=0xa8}, {.addr=0x5d45, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x5d46, .a=0xc6, .x=0x2b, .y=0x92, .sp=0xc7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5d44, .value=0xa8}, {.addr=0x5d45, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x5d44, .value=0xa8, .type=IO_READ},
        {.addr=0x5d45, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x8fca, .a=0x46, .x=0x3b, .y=0x92, .sp=0x56, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x8fca, .value=0xa8}, {.addr=0x8fcb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8fcc, .a=0x2a, .x=0x3b, .y=0x92, .sp=0x56, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x8fca, .value=0xa8}, {.addr=0x8fcb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8fca, .value=0xa8, .type=IO_READ},
        {.addr=0x8fcb, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xd515, .a=0x53, .x=0xde, .y=0x9c, .sp=0x58, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xd515, .value=0xa8}, {.addr=0xd516, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xd517, .a=0x5e, .x=0xde, .y=0x9c, .sp=0x58, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd515, .value=0xa8}, {.addr=0xd516, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xd515, .value=0xa8, .type=IO_READ},
        {.addr=0xd516, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xb1b6, .a=0xf7, .x=0xbf, .y=0xdc, .sp=0x53, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xb1b6, .value=0xa8}, {.addr=0xb1b7, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xb1b8, .a=0x3d, .x=0xbf, .y=0xdc, .sp=0x53, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb1b6, .value=0xa8}, {.addr=0xb1b7, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xb1b6, .value=0xa8, .type=IO_READ},
        {.addr=0xb1b7, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x6c4c, .a=0xb7, .x=0x04, .y=0x96, .sp=0xf4, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x6c4c, .value=0xa8}, {.addr=0x6c4d, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x6c4e, .a=0x4f, .x=0x04, .y=0x96, .sp=0xf4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x6c4c, .value=0xa8}, {.addr=0x6c4d, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x6c4c, .value=0xa8, .type=IO_READ},
        {.addr=0x6c4d, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x4b47, .a=0x6b, .x=0x8d, .y=0x42, .sp=0x66, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x4b47, .value=0xa8}, {.addr=0x4b48, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x4b49, .a=0xf9, .x=0x8d, .y=0x42, .sp=0x66, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x4b47, .value=0xa8}, {.addr=0x4b48, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x4b47, .value=0xa8, .type=IO_READ},
        {.addr=0x4b48, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x7962, .a=0x50, .x=0x07, .y=0x71, .sp=0x4a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x7962, .value=0xa8}, {.addr=0x7963, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x7964, .a=0xba, .x=0x07, .y=0x71, .sp=0x4a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x7962, .value=0xa8}, {.addr=0x7963, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x7962, .value=0xa8, .type=IO_READ},
        {.addr=0x7963, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x5a3b, .a=0xb4, .x=0x9b, .y=0x2e, .sp=0xac, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x5a3b, .value=0xa8}, {.addr=0x5a3c, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x5a3d, .a=0x6c, .x=0x9b, .y=0x2e, .sp=0xac, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5a3b, .value=0xa8}, {.addr=0x5a3c, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x5a3b, .value=0xa8, .type=IO_READ},
        {.addr=0x5a3c, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x77a0, .a=0xc3, .x=0xf5, .y=0xf9, .sp=0xa6, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x77a0, .value=0xa8}, {.addr=0x77a1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x77a2, .a=0xbd, .x=0xf5, .y=0xf9, .sp=0xa6, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x77a0, .value=0xa8}, {.addr=0x77a1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x77a0, .value=0xa8, .type=IO_READ},
        {.addr=0x77a1, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xc1ea, .a=0x96, .x=0x96, .y=0x23, .sp=0x68, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xc1ea, .value=0xa8}, {.addr=0xc1eb, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xc1ec, .a=0x41, .x=0x96, .y=0x23, .sp=0x68, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc1ea, .value=0xa8}, {.addr=0xc1eb, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xc1ea, .value=0xa8, .type=IO_READ},
        {.addr=0xc1eb, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xa216, .a=0x08, .x=0x82, .y=0x9a, .sp=0x61, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xa216, .value=0xa8}, {.addr=0xa217, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xa218, .a=0xcf, .x=0x82, .y=0x9a, .sp=0x61, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa216, .value=0xa8}, {.addr=0xa217, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xa216, .value=0xa8, .type=IO_READ},
        {.addr=0xa217, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xc16d, .a=0xdc, .x=0xb9, .y=0xcb, .sp=0xa5, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xc16d, .value=0xa8}, {.addr=0xc16e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc16f, .a=0xf6, .x=0xb9, .y=0xcb, .sp=0xa5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc16d, .value=0xa8}, {.addr=0xc16e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc16d, .value=0xa8, .type=IO_READ},
        {.addr=0xc16e, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xe1a1, .a=0x1a, .x=0xab, .y=0x15, .sp=0x45, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xe1a1, .value=0xa8}, {.addr=0xe1a2, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xe1a3, .a=0xe6, .x=0xab, .y=0x15, .sp=0x45, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xe1a1, .value=0xa8}, {.addr=0xe1a2, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xe1a1, .value=0xa8, .type=IO_READ},
        {.addr=0xe1a2, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xbc5a, .a=0x07, .x=0x77, .y=0x10, .sp=0x83, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xbc5a, .value=0xa8}, {.addr=0xbc5b, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbc5c, .a=0x0a, .x=0x77, .y=0x10, .sp=0x83, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xbc5a, .value=0xa8}, {.addr=0xbc5b, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbc5a, .value=0xa8, .type=IO_READ},
        {.addr=0xbc5b, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x2c55, .a=0x97, .x=0x77, .y=0x7c, .sp=0x43, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x2c55, .value=0xa8}, {.addr=0x2c56, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x2c57, .a=0x28, .x=0x77, .y=0x7c, .sp=0x43, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x2c55, .value=0xa8}, {.addr=0x2c56, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x2c55, .value=0xa8, .type=IO_READ},
        {.addr=0x2c56, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x94e1, .a=0x63, .x=0x20, .y=0xf2, .sp=0x87, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x94e1, .value=0xa8}, {.addr=0x94e2, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x94e3, .a=0x38, .x=0x20, .y=0xf2, .sp=0x87, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x94e1, .value=0xa8}, {.addr=0x94e2, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x94e1, .value=0xa8, .type=IO_READ},
        {.addr=0x94e2, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x6c1d, .a=0xce, .x=0x05, .y=0xc1, .sp=0x1b, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x6c1d, .value=0xa8}, {.addr=0x6c1e, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x6c1f, .a=0xd6, .x=0x05, .y=0xc1, .sp=0x1b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x6c1d, .value=0xa8}, {.addr=0x6c1e, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x6c1d, .value=0xa8, .type=IO_READ},
        {.addr=0x6c1e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x28ee, .a=0x37, .x=0x5c, .y=0xd1, .sp=0x7a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x28ee, .value=0xa8}, {.addr=0x28ef, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x28f0, .a=0x6e, .x=0x5c, .y=0xd1, .sp=0x7a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x28ee, .value=0xa8}, {.addr=0x28ef, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x28ee, .value=0xa8, .type=IO_READ},
        {.addr=0x28ef, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0300) {
    const struct CPU_State initial_cpu = {.pc=0x044b, .a=0xe3, .x=0x42, .y=0xe1, .sp=0x5a, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x044b, .value=0xa8}, {.addr=0x044c, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x044d, .a=0x2c, .x=0x42, .y=0xe1, .sp=0x5a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x044b, .value=0xa8}, {.addr=0x044c, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x044b, .value=0xa8, .type=IO_READ},
        {.addr=0x044c, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0301) {
    const struct CPU_State initial_cpu = {.pc=0xfd1a, .a=0xba, .x=0x78, .y=0x53, .sp=0x26, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1a, .value=0xa8}, {.addr=0xfd1b, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xfd1c, .a=0xad, .x=0x78, .y=0x53, .sp=0x26, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xfd1a, .value=0xa8}, {.addr=0xfd1b, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xfd1a, .value=0xa8, .type=IO_READ},
        {.addr=0xfd1b, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0302) {
    const struct CPU_State initial_cpu = {.pc=0xbc71, .a=0x1f, .x=0xbf, .y=0x1c, .sp=0x43, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xbc71, .value=0xa8}, {.addr=0xbc72, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbc73, .a=0x98, .x=0xbf, .y=0x1c, .sp=0x43, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbc71, .value=0xa8}, {.addr=0xbc72, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbc71, .value=0xa8, .type=IO_READ},
        {.addr=0xbc72, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0303) {
    const struct CPU_State initial_cpu = {.pc=0x83a0, .a=0x07, .x=0x8e, .y=0xfc, .sp=0x38, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x83a0, .value=0xa8}, {.addr=0x83a1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x83a2, .a=0x61, .x=0x8e, .y=0xfc, .sp=0x38, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x83a0, .value=0xa8}, {.addr=0x83a1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x83a0, .value=0xa8, .type=IO_READ},
        {.addr=0x83a1, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0304) {
    const struct CPU_State initial_cpu = {.pc=0x489d, .a=0xb1, .x=0xd2, .y=0xdf, .sp=0x45, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x489d, .value=0xa8}, {.addr=0x489e, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x489f, .a=0x7e, .x=0xd2, .y=0xdf, .sp=0x45, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x489d, .value=0xa8}, {.addr=0x489e, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x489d, .value=0xa8, .type=IO_READ},
        {.addr=0x489e, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0305) {
    const struct CPU_State initial_cpu = {.pc=0x91b4, .a=0x25, .x=0x8f, .y=0x34, .sp=0xac, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x91b4, .value=0xa8}, {.addr=0x91b5, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x91b6, .a=0xe2, .x=0x8f, .y=0x34, .sp=0xac, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x91b4, .value=0xa8}, {.addr=0x91b5, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x91b4, .value=0xa8, .type=IO_READ},
        {.addr=0x91b5, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0306) {
    const struct CPU_State initial_cpu = {.pc=0x0e53, .a=0x1c, .x=0x15, .y=0xe6, .sp=0xea, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0e53, .value=0xa8}, {.addr=0x0e54, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x0e55, .a=0xd5, .x=0x15, .y=0xe6, .sp=0xea, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0e53, .value=0xa8}, {.addr=0x0e54, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x0e53, .value=0xa8, .type=IO_READ},
        {.addr=0x0e54, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0307) {
    const struct CPU_State initial_cpu = {.pc=0xf036, .a=0x01, .x=0x0a, .y=0x7a, .sp=0x7e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xf036, .value=0xa8}, {.addr=0xf037, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xf038, .a=0x2e, .x=0x0a, .y=0x7a, .sp=0x7e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xf036, .value=0xa8}, {.addr=0xf037, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xf036, .value=0xa8, .type=IO_READ},
        {.addr=0xf037, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0308) {
    const struct CPU_State initial_cpu = {.pc=0xdf2b, .a=0x66, .x=0x6f, .y=0xb6, .sp=0x43, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xdf2b, .value=0xa8}, {.addr=0xdf2c, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xdf2d, .a=0x67, .x=0x6f, .y=0xb6, .sp=0x43, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xdf2b, .value=0xa8}, {.addr=0xdf2c, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xdf2b, .value=0xa8, .type=IO_READ},
        {.addr=0xdf2c, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0309) {
    const struct CPU_State initial_cpu = {.pc=0x67d0, .a=0x48, .x=0x71, .y=0xfa, .sp=0x18, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x67d0, .value=0xa8}, {.addr=0x67d1, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x67d2, .a=0xcd, .x=0x71, .y=0xfa, .sp=0x18, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x67d0, .value=0xa8}, {.addr=0x67d1, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x67d0, .value=0xa8, .type=IO_READ},
        {.addr=0x67d1, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_030A) {
    const struct CPU_State initial_cpu = {.pc=0x3f15, .a=0x5a, .x=0x8d, .y=0x81, .sp=0x92, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x3f15, .value=0xa8}, {.addr=0x3f16, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3f17, .a=0x4c, .x=0x8d, .y=0x81, .sp=0x92, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3f15, .value=0xa8}, {.addr=0x3f16, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3f15, .value=0xa8, .type=IO_READ},
        {.addr=0x3f16, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_030B) {
    const struct CPU_State initial_cpu = {.pc=0x42ed, .a=0x70, .x=0x65, .y=0xc6, .sp=0xec, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x42ed, .value=0xa8}, {.addr=0x42ee, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x42ef, .a=0x21, .x=0x65, .y=0xc6, .sp=0xec, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x42ed, .value=0xa8}, {.addr=0x42ee, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x42ed, .value=0xa8, .type=IO_READ},
        {.addr=0x42ee, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_030C) {
    const struct CPU_State initial_cpu = {.pc=0x05f7, .a=0x7c, .x=0x4c, .y=0x28, .sp=0x81, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x05f7, .value=0xa8}, {.addr=0x05f8, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x05f9, .a=0xda, .x=0x4c, .y=0x28, .sp=0x81, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x05f7, .value=0xa8}, {.addr=0x05f8, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x05f7, .value=0xa8, .type=IO_READ},
        {.addr=0x05f8, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_030D) {
    const struct CPU_State initial_cpu = {.pc=0x8bae, .a=0x75, .x=0x80, .y=0x71, .sp=0x6d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x8bae, .value=0xa8}, {.addr=0x8baf, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x8bb0, .a=0xcf, .x=0x80, .y=0x71, .sp=0x6d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8bae, .value=0xa8}, {.addr=0x8baf, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x8bae, .value=0xa8, .type=IO_READ},
        {.addr=0x8baf, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_030E) {
    const struct CPU_State initial_cpu = {.pc=0xaf6b, .a=0x86, .x=0xde, .y=0xcc, .sp=0x1d, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xaf6b, .value=0xa8}, {.addr=0xaf6c, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xaf6d, .a=0x27, .x=0xde, .y=0xcc, .sp=0x1d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xaf6b, .value=0xa8}, {.addr=0xaf6c, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xaf6b, .value=0xa8, .type=IO_READ},
        {.addr=0xaf6c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_030F) {
    const struct CPU_State initial_cpu = {.pc=0x95fa, .a=0x25, .x=0xec, .y=0xf1, .sp=0x14, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x95fa, .value=0xa8}, {.addr=0x95fb, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x95fc, .a=0x20, .x=0xec, .y=0xf1, .sp=0x14, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x95fa, .value=0xa8}, {.addr=0x95fb, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x95fa, .value=0xa8, .type=IO_READ},
        {.addr=0x95fb, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0310) {
    const struct CPU_State initial_cpu = {.pc=0x926e, .a=0xbf, .x=0x66, .y=0xa5, .sp=0xa5, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x926e, .value=0xa8}, {.addr=0x926f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9270, .a=0x3e, .x=0x66, .y=0xa5, .sp=0xa5, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x926e, .value=0xa8}, {.addr=0x926f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x926e, .value=0xa8, .type=IO_READ},
        {.addr=0x926f, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0311) {
    const struct CPU_State initial_cpu = {.pc=0x4da9, .a=0x53, .x=0x83, .y=0x1b, .sp=0x72, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x4da9, .value=0xa8}, {.addr=0x4daa, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x4dab, .a=0x20, .x=0x83, .y=0x1b, .sp=0x72, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4da9, .value=0xa8}, {.addr=0x4daa, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x4da9, .value=0xa8, .type=IO_READ},
        {.addr=0x4daa, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0312) {
    const struct CPU_State initial_cpu = {.pc=0x305c, .a=0xf7, .x=0x2c, .y=0x85, .sp=0x06, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x305c, .value=0xa8}, {.addr=0x305d, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x305e, .a=0xc8, .x=0x2c, .y=0x85, .sp=0x06, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x305c, .value=0xa8}, {.addr=0x305d, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x305c, .value=0xa8, .type=IO_READ},
        {.addr=0x305d, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0313) {
    const struct CPU_State initial_cpu = {.pc=0x6fdb, .a=0x1a, .x=0x58, .y=0x99, .sp=0xc6, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x6fdb, .value=0xa8}, {.addr=0x6fdc, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x6fdd, .a=0x34, .x=0x58, .y=0x99, .sp=0xc6, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x6fdb, .value=0xa8}, {.addr=0x6fdc, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x6fdb, .value=0xa8, .type=IO_READ},
        {.addr=0x6fdc, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0314) {
    const struct CPU_State initial_cpu = {.pc=0xca8f, .a=0xbf, .x=0x62, .y=0x78, .sp=0x09, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xca8f, .value=0xa8}, {.addr=0xca90, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xca91, .a=0x1a, .x=0x62, .y=0x78, .sp=0x09, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xca8f, .value=0xa8}, {.addr=0xca90, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xca8f, .value=0xa8, .type=IO_READ},
        {.addr=0xca90, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0315) {
    const struct CPU_State initial_cpu = {.pc=0x9489, .a=0x6b, .x=0x9c, .y=0xff, .sp=0xac, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9489, .value=0xa8}, {.addr=0x948a, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x948b, .a=0xd9, .x=0x9c, .y=0xff, .sp=0xac, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9489, .value=0xa8}, {.addr=0x948a, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x9489, .value=0xa8, .type=IO_READ},
        {.addr=0x948a, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0316) {
    const struct CPU_State initial_cpu = {.pc=0xd391, .a=0x17, .x=0x1a, .y=0xf6, .sp=0x9c, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd391, .value=0xa8}, {.addr=0xd392, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xd393, .a=0xee, .x=0x1a, .y=0xf6, .sp=0x9c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xd391, .value=0xa8}, {.addr=0xd392, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xd391, .value=0xa8, .type=IO_READ},
        {.addr=0xd392, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0317) {
    const struct CPU_State initial_cpu = {.pc=0x9968, .a=0xc1, .x=0x5b, .y=0x9e, .sp=0xfc, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9968, .value=0xa8}, {.addr=0x9969, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x996a, .a=0xc2, .x=0x5b, .y=0x9e, .sp=0xfc, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9968, .value=0xa8}, {.addr=0x9969, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x9968, .value=0xa8, .type=IO_READ},
        {.addr=0x9969, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0318) {
    const struct CPU_State initial_cpu = {.pc=0x2d89, .a=0xf5, .x=0xe8, .y=0xec, .sp=0x7d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x2d89, .value=0xa8}, {.addr=0x2d8a, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x2d8b, .a=0xec, .x=0xe8, .y=0xec, .sp=0x7d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x2d89, .value=0xa8}, {.addr=0x2d8a, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x2d89, .value=0xa8, .type=IO_READ},
        {.addr=0x2d8a, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0319) {
    const struct CPU_State initial_cpu = {.pc=0x6ca2, .a=0xec, .x=0x43, .y=0x84, .sp=0xed, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x6ca2, .value=0xa8}, {.addr=0x6ca3, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x6ca4, .a=0xf8, .x=0x43, .y=0x84, .sp=0xed, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6ca2, .value=0xa8}, {.addr=0x6ca3, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x6ca2, .value=0xa8, .type=IO_READ},
        {.addr=0x6ca3, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_031A) {
    const struct CPU_State initial_cpu = {.pc=0x9d25, .a=0x86, .x=0xe6, .y=0x7c, .sp=0x9e, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x9d25, .value=0xa8}, {.addr=0x9d26, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x9d27, .a=0x37, .x=0xe6, .y=0x7c, .sp=0x9e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9d25, .value=0xa8}, {.addr=0x9d26, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x9d25, .value=0xa8, .type=IO_READ},
        {.addr=0x9d26, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_031B) {
    const struct CPU_State initial_cpu = {.pc=0xe07f, .a=0x53, .x=0x61, .y=0x9f, .sp=0x22, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xe07f, .value=0xa8}, {.addr=0xe080, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xe081, .a=0xc6, .x=0x61, .y=0x9f, .sp=0x22, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe07f, .value=0xa8}, {.addr=0xe080, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xe07f, .value=0xa8, .type=IO_READ},
        {.addr=0xe080, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_031C) {
    const struct CPU_State initial_cpu = {.pc=0x50f8, .a=0x5b, .x=0x9f, .y=0x37, .sp=0x0b, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x50f8, .value=0xa8}, {.addr=0x50f9, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x50fa, .a=0xe1, .x=0x9f, .y=0x37, .sp=0x0b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x50f8, .value=0xa8}, {.addr=0x50f9, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x50f8, .value=0xa8, .type=IO_READ},
        {.addr=0x50f9, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_031D) {
    const struct CPU_State initial_cpu = {.pc=0xba11, .a=0xa8, .x=0x16, .y=0x42, .sp=0xae, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xba11, .value=0xa8}, {.addr=0xba12, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xba13, .a=0x20, .x=0x16, .y=0x42, .sp=0xae, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xba11, .value=0xa8}, {.addr=0xba12, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xba11, .value=0xa8, .type=IO_READ},
        {.addr=0xba12, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_031E) {
    const struct CPU_State initial_cpu = {.pc=0x2506, .a=0x32, .x=0xe8, .y=0x6c, .sp=0x1c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x2506, .value=0xa8}, {.addr=0x2507, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x2508, .a=0x6a, .x=0xe8, .y=0x6c, .sp=0x1c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2506, .value=0xa8}, {.addr=0x2507, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x2506, .value=0xa8, .type=IO_READ},
        {.addr=0x2507, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_031F) {
    const struct CPU_State initial_cpu = {.pc=0x5e96, .a=0x9f, .x=0x04, .y=0x13, .sp=0x23, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x5e96, .value=0xa8}, {.addr=0x5e97, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5e98, .a=0x22, .x=0x04, .y=0x13, .sp=0x23, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5e96, .value=0xa8}, {.addr=0x5e97, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5e96, .value=0xa8, .type=IO_READ},
        {.addr=0x5e97, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0320) {
    const struct CPU_State initial_cpu = {.pc=0xac9e, .a=0x33, .x=0x3f, .y=0x7c, .sp=0x32, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xac9e, .value=0xa8}, {.addr=0xac9f, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xaca0, .a=0xd0, .x=0x3f, .y=0x7c, .sp=0x32, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xac9e, .value=0xa8}, {.addr=0xac9f, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xac9e, .value=0xa8, .type=IO_READ},
        {.addr=0xac9f, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0321) {
    const struct CPU_State initial_cpu = {.pc=0x435b, .a=0x63, .x=0x26, .y=0x2e, .sp=0xa5, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x435b, .value=0xa8}, {.addr=0x435c, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x435d, .a=0xaa, .x=0x26, .y=0x2e, .sp=0xa5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x435b, .value=0xa8}, {.addr=0x435c, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x435b, .value=0xa8, .type=IO_READ},
        {.addr=0x435c, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0322) {
    const struct CPU_State initial_cpu = {.pc=0x339e, .a=0x17, .x=0x86, .y=0x4c, .sp=0x22, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x339e, .value=0xa8}, {.addr=0x339f, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x33a0, .a=0x32, .x=0x86, .y=0x4c, .sp=0x22, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x339e, .value=0xa8}, {.addr=0x339f, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x339e, .value=0xa8, .type=IO_READ},
        {.addr=0x339f, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0323) {
    const struct CPU_State initial_cpu = {.pc=0x7510, .a=0xd1, .x=0x22, .y=0x32, .sp=0xba, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x7510, .value=0xa8}, {.addr=0x7511, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7512, .a=0x0b, .x=0x22, .y=0x32, .sp=0xba, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7510, .value=0xa8}, {.addr=0x7511, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7510, .value=0xa8, .type=IO_READ},
        {.addr=0x7511, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0324) {
    const struct CPU_State initial_cpu = {.pc=0xc8dc, .a=0x3c, .x=0x7d, .y=0x25, .sp=0x47, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc8dc, .value=0xa8}, {.addr=0xc8dd, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xc8de, .a=0x8b, .x=0x7d, .y=0x25, .sp=0x47, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc8dc, .value=0xa8}, {.addr=0xc8dd, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xc8dc, .value=0xa8, .type=IO_READ},
        {.addr=0xc8dd, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0325) {
    const struct CPU_State initial_cpu = {.pc=0x49a5, .a=0xc6, .x=0xaf, .y=0xc1, .sp=0xe4, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x49a5, .value=0xa8}, {.addr=0x49a6, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x49a7, .a=0x67, .x=0xaf, .y=0xc1, .sp=0xe4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x49a5, .value=0xa8}, {.addr=0x49a6, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x49a5, .value=0xa8, .type=IO_READ},
        {.addr=0x49a6, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0326) {
    const struct CPU_State initial_cpu = {.pc=0xe9ec, .a=0xd3, .x=0xb0, .y=0x03, .sp=0x25, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xe9ec, .value=0xa8}, {.addr=0xe9ed, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xe9ee, .a=0x67, .x=0xb0, .y=0x03, .sp=0x25, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe9ec, .value=0xa8}, {.addr=0xe9ed, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xe9ec, .value=0xa8, .type=IO_READ},
        {.addr=0xe9ed, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0327) {
    const struct CPU_State initial_cpu = {.pc=0x3254, .a=0x6c, .x=0x3d, .y=0x9e, .sp=0xd5, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x3254, .value=0xa8}, {.addr=0x3255, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x3256, .a=0xe5, .x=0x3d, .y=0x9e, .sp=0xd5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3254, .value=0xa8}, {.addr=0x3255, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x3254, .value=0xa8, .type=IO_READ},
        {.addr=0x3255, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0328) {
    const struct CPU_State initial_cpu = {.pc=0xb822, .a=0x8b, .x=0x00, .y=0x8a, .sp=0xd3, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xb822, .value=0xa8}, {.addr=0xb823, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xb824, .a=0x2a, .x=0x00, .y=0x8a, .sp=0xd3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb822, .value=0xa8}, {.addr=0xb823, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xb822, .value=0xa8, .type=IO_READ},
        {.addr=0xb823, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0329) {
    const struct CPU_State initial_cpu = {.pc=0x6009, .a=0xb2, .x=0x05, .y=0x73, .sp=0xdf, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x6009, .value=0xa8}, {.addr=0x600a, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x600b, .a=0x2a, .x=0x05, .y=0x73, .sp=0xdf, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6009, .value=0xa8}, {.addr=0x600a, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x6009, .value=0xa8, .type=IO_READ},
        {.addr=0x600a, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_032A) {
    const struct CPU_State initial_cpu = {.pc=0x3c8b, .a=0x87, .x=0x2d, .y=0xe6, .sp=0x31, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x3c8b, .value=0xa8}, {.addr=0x3c8c, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x3c8d, .a=0xed, .x=0x2d, .y=0xe6, .sp=0x31, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3c8b, .value=0xa8}, {.addr=0x3c8c, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x3c8b, .value=0xa8, .type=IO_READ},
        {.addr=0x3c8c, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_032B) {
    const struct CPU_State initial_cpu = {.pc=0x862c, .a=0x8c, .x=0x16, .y=0x80, .sp=0xca, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x862c, .value=0xa8}, {.addr=0x862d, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x862e, .a=0x0a, .x=0x16, .y=0x80, .sp=0xca, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x862c, .value=0xa8}, {.addr=0x862d, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x862c, .value=0xa8, .type=IO_READ},
        {.addr=0x862d, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_032C) {
    const struct CPU_State initial_cpu = {.pc=0x80d8, .a=0xff, .x=0x55, .y=0x2f, .sp=0x31, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x80d8, .value=0xa8}, {.addr=0x80d9, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x80da, .a=0x80, .x=0x55, .y=0x2f, .sp=0x31, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x80d8, .value=0xa8}, {.addr=0x80d9, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x80d8, .value=0xa8, .type=IO_READ},
        {.addr=0x80d9, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_032D) {
    const struct CPU_State initial_cpu = {.pc=0xdbbb, .a=0x19, .x=0x6f, .y=0x2d, .sp=0xac, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xdbbb, .value=0xa8}, {.addr=0xdbbc, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xdbbd, .a=0xa3, .x=0x6f, .y=0x2d, .sp=0xac, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xdbbb, .value=0xa8}, {.addr=0xdbbc, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xdbbb, .value=0xa8, .type=IO_READ},
        {.addr=0xdbbc, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_032E) {
    const struct CPU_State initial_cpu = {.pc=0xc498, .a=0x41, .x=0xb2, .y=0xfe, .sp=0xeb, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xc498, .value=0xa8}, {.addr=0xc499, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xc49a, .a=0x34, .x=0xb2, .y=0xfe, .sp=0xeb, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc498, .value=0xa8}, {.addr=0xc499, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xc498, .value=0xa8, .type=IO_READ},
        {.addr=0xc499, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_032F) {
    const struct CPU_State initial_cpu = {.pc=0xdf09, .a=0xe2, .x=0xb4, .y=0xb5, .sp=0x73, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xdf09, .value=0xa8}, {.addr=0xdf0a, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xdf0b, .a=0xfa, .x=0xb4, .y=0xb5, .sp=0x73, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xdf09, .value=0xa8}, {.addr=0xdf0a, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xdf09, .value=0xa8, .type=IO_READ},
        {.addr=0xdf0a, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0330) {
    const struct CPU_State initial_cpu = {.pc=0xedda, .a=0xc0, .x=0x61, .y=0x42, .sp=0x9e, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xedda, .value=0xa8}, {.addr=0xeddb, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xeddc, .a=0x1e, .x=0x61, .y=0x42, .sp=0x9e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xedda, .value=0xa8}, {.addr=0xeddb, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xedda, .value=0xa8, .type=IO_READ},
        {.addr=0xeddb, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0331) {
    const struct CPU_State initial_cpu = {.pc=0x9378, .a=0xee, .x=0xf4, .y=0xc9, .sp=0xa9, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x9378, .value=0xa8}, {.addr=0x9379, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x937a, .a=0x2c, .x=0xf4, .y=0xc9, .sp=0xa9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x9378, .value=0xa8}, {.addr=0x9379, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x9378, .value=0xa8, .type=IO_READ},
        {.addr=0x9379, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0332) {
    const struct CPU_State initial_cpu = {.pc=0x6bcf, .a=0x36, .x=0xe8, .y=0xf3, .sp=0xfe, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x6bcf, .value=0xa8}, {.addr=0x6bd0, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x6bd1, .a=0xe2, .x=0xe8, .y=0xf3, .sp=0xfe, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6bcf, .value=0xa8}, {.addr=0x6bd0, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x6bcf, .value=0xa8, .type=IO_READ},
        {.addr=0x6bd0, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0333) {
    const struct CPU_State initial_cpu = {.pc=0xb040, .a=0xe1, .x=0x63, .y=0x28, .sp=0x85, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xb040, .value=0xa8}, {.addr=0xb041, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xb042, .a=0xad, .x=0x63, .y=0x28, .sp=0x85, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xb040, .value=0xa8}, {.addr=0xb041, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xb040, .value=0xa8, .type=IO_READ},
        {.addr=0xb041, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0334) {
    const struct CPU_State initial_cpu = {.pc=0xa1c7, .a=0x1d, .x=0xe0, .y=0x0c, .sp=0xfd, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa1c7, .value=0xa8}, {.addr=0xa1c8, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xa1c9, .a=0x8a, .x=0xe0, .y=0x0c, .sp=0xfd, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xa1c7, .value=0xa8}, {.addr=0xa1c8, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xa1c7, .value=0xa8, .type=IO_READ},
        {.addr=0xa1c8, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0335) {
    const struct CPU_State initial_cpu = {.pc=0xfab3, .a=0x07, .x=0xa3, .y=0x29, .sp=0x63, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xfab3, .value=0xa8}, {.addr=0xfab4, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xfab5, .a=0x30, .x=0xa3, .y=0x29, .sp=0x63, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xfab3, .value=0xa8}, {.addr=0xfab4, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xfab3, .value=0xa8, .type=IO_READ},
        {.addr=0xfab4, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0336) {
    const struct CPU_State initial_cpu = {.pc=0x8700, .a=0xe5, .x=0x74, .y=0x9b, .sp=0x4f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x8700, .value=0xa8}, {.addr=0x8701, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x8702, .a=0x7f, .x=0x74, .y=0x9b, .sp=0x4f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x8700, .value=0xa8}, {.addr=0x8701, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x8700, .value=0xa8, .type=IO_READ},
        {.addr=0x8701, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0337) {
    const struct CPU_State initial_cpu = {.pc=0xb065, .a=0x08, .x=0x36, .y=0x27, .sp=0xe4, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xb065, .value=0xa8}, {.addr=0xb066, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xb067, .a=0xbf, .x=0x36, .y=0x27, .sp=0xe4, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb065, .value=0xa8}, {.addr=0xb066, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xb065, .value=0xa8, .type=IO_READ},
        {.addr=0xb066, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0338) {
    const struct CPU_State initial_cpu = {.pc=0x31f4, .a=0x1e, .x=0xb0, .y=0xb9, .sp=0x71, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x31f4, .value=0xa8}, {.addr=0x31f5, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x31f6, .a=0xd0, .x=0xb0, .y=0xb9, .sp=0x71, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x31f4, .value=0xa8}, {.addr=0x31f5, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x31f4, .value=0xa8, .type=IO_READ},
        {.addr=0x31f5, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0339) {
    const struct CPU_State initial_cpu = {.pc=0xd6f0, .a=0xd0, .x=0x4d, .y=0xb3, .sp=0x95, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xd6f0, .value=0xa8}, {.addr=0xd6f1, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xd6f2, .a=0xf1, .x=0x4d, .y=0xb3, .sp=0x95, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xd6f0, .value=0xa8}, {.addr=0xd6f1, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xd6f0, .value=0xa8, .type=IO_READ},
        {.addr=0xd6f1, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_033A) {
    const struct CPU_State initial_cpu = {.pc=0xe8c5, .a=0xb9, .x=0x38, .y=0x37, .sp=0x9a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xe8c5, .value=0xa8}, {.addr=0xe8c6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xe8c7, .a=0xdb, .x=0x38, .y=0x37, .sp=0x9a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe8c5, .value=0xa8}, {.addr=0xe8c6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xe8c5, .value=0xa8, .type=IO_READ},
        {.addr=0xe8c6, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_033B) {
    const struct CPU_State initial_cpu = {.pc=0x0fe1, .a=0x70, .x=0xee, .y=0xa2, .sp=0x19, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0fe1, .value=0xa8}, {.addr=0x0fe2, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x0fe3, .a=0x9a, .x=0xee, .y=0xa2, .sp=0x19, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0fe1, .value=0xa8}, {.addr=0x0fe2, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x0fe1, .value=0xa8, .type=IO_READ},
        {.addr=0x0fe2, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_033C) {
    const struct CPU_State initial_cpu = {.pc=0x1c3f, .a=0x02, .x=0xf2, .y=0xc4, .sp=0x25, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x1c3f, .value=0xa8}, {.addr=0x1c40, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x1c41, .a=0x59, .x=0xf2, .y=0xc4, .sp=0x25, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1c3f, .value=0xa8}, {.addr=0x1c40, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x1c3f, .value=0xa8, .type=IO_READ},
        {.addr=0x1c40, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_033D) {
    const struct CPU_State initial_cpu = {.pc=0x91fe, .a=0x6b, .x=0x01, .y=0x59, .sp=0xe3, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x91fe, .value=0xa8}, {.addr=0x91ff, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x9200, .a=0xa9, .x=0x01, .y=0x59, .sp=0xe3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x91fe, .value=0xa8}, {.addr=0x91ff, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x91fe, .value=0xa8, .type=IO_READ},
        {.addr=0x91ff, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_033E) {
    const struct CPU_State initial_cpu = {.pc=0xd0c4, .a=0xe6, .x=0x4b, .y=0x5d, .sp=0x49, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xd0c4, .value=0xa8}, {.addr=0xd0c5, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xd0c6, .a=0xf3, .x=0x4b, .y=0x5d, .sp=0x49, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd0c4, .value=0xa8}, {.addr=0xd0c5, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xd0c4, .value=0xa8, .type=IO_READ},
        {.addr=0xd0c5, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_033F) {
    const struct CPU_State initial_cpu = {.pc=0x08cf, .a=0x70, .x=0xa1, .y=0xa6, .sp=0x73, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x08cf, .value=0xa8}, {.addr=0x08d0, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x08d1, .a=0x27, .x=0xa1, .y=0xa6, .sp=0x73, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x08cf, .value=0xa8}, {.addr=0x08d0, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x08cf, .value=0xa8, .type=IO_READ},
        {.addr=0x08d0, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0340) {
    const struct CPU_State initial_cpu = {.pc=0x38c7, .a=0x6c, .x=0xbb, .y=0x0b, .sp=0xab, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x38c7, .value=0xa8}, {.addr=0x38c8, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x38c9, .a=0xe2, .x=0xbb, .y=0x0b, .sp=0xab, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x38c7, .value=0xa8}, {.addr=0x38c8, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x38c7, .value=0xa8, .type=IO_READ},
        {.addr=0x38c8, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0341) {
    const struct CPU_State initial_cpu = {.pc=0x05c6, .a=0xb3, .x=0x99, .y=0x0f, .sp=0xcf, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x05c6, .value=0xa8}, {.addr=0x05c7, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x05c8, .a=0xd9, .x=0x99, .y=0x0f, .sp=0xcf, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x05c6, .value=0xa8}, {.addr=0x05c7, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x05c6, .value=0xa8, .type=IO_READ},
        {.addr=0x05c7, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0342) {
    const struct CPU_State initial_cpu = {.pc=0x64c0, .a=0x44, .x=0x47, .y=0x83, .sp=0x07, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x64c0, .value=0xa8}, {.addr=0x64c1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x64c2, .a=0x03, .x=0x47, .y=0x83, .sp=0x07, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x64c0, .value=0xa8}, {.addr=0x64c1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x64c0, .value=0xa8, .type=IO_READ},
        {.addr=0x64c1, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0343) {
    const struct CPU_State initial_cpu = {.pc=0xc15f, .a=0xd9, .x=0xa4, .y=0x0a, .sp=0xa4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xc15f, .value=0xa8}, {.addr=0xc160, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xc161, .a=0xca, .x=0xa4, .y=0x0a, .sp=0xa4, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc15f, .value=0xa8}, {.addr=0xc160, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xc15f, .value=0xa8, .type=IO_READ},
        {.addr=0xc160, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0344) {
    const struct CPU_State initial_cpu = {.pc=0x4c11, .a=0xfe, .x=0xab, .y=0xbe, .sp=0x50, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x4c11, .value=0xa8}, {.addr=0x4c12, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x4c13, .a=0x89, .x=0xab, .y=0xbe, .sp=0x50, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4c11, .value=0xa8}, {.addr=0x4c12, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x4c11, .value=0xa8, .type=IO_READ},
        {.addr=0x4c12, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0345) {
    const struct CPU_State initial_cpu = {.pc=0x8e5d, .a=0x20, .x=0x60, .y=0x0a, .sp=0xd8, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x8e5d, .value=0xa8}, {.addr=0x8e5e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8e5f, .a=0xb2, .x=0x60, .y=0x0a, .sp=0xd8, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8e5d, .value=0xa8}, {.addr=0x8e5e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8e5d, .value=0xa8, .type=IO_READ},
        {.addr=0x8e5e, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0346) {
    const struct CPU_State initial_cpu = {.pc=0xf93e, .a=0x98, .x=0xbc, .y=0x3f, .sp=0x09, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xf93e, .value=0xa8}, {.addr=0xf93f, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xf940, .a=0x99, .x=0xbc, .y=0x3f, .sp=0x09, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf93e, .value=0xa8}, {.addr=0xf93f, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xf93e, .value=0xa8, .type=IO_READ},
        {.addr=0xf93f, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0347) {
    const struct CPU_State initial_cpu = {.pc=0x497e, .a=0xa7, .x=0x21, .y=0x28, .sp=0x99, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x497e, .value=0xa8}, {.addr=0x497f, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x4980, .a=0xde, .x=0x21, .y=0x28, .sp=0x99, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x497e, .value=0xa8}, {.addr=0x497f, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x497e, .value=0xa8, .type=IO_READ},
        {.addr=0x497f, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0348) {
    const struct CPU_State initial_cpu = {.pc=0x9483, .a=0x84, .x=0xa1, .y=0xb3, .sp=0x8a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9483, .value=0xa8}, {.addr=0x9484, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x9485, .a=0xc1, .x=0xa1, .y=0xb3, .sp=0x8a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9483, .value=0xa8}, {.addr=0x9484, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x9483, .value=0xa8, .type=IO_READ},
        {.addr=0x9484, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0349) {
    const struct CPU_State initial_cpu = {.pc=0xf9d4, .a=0xfb, .x=0x1d, .y=0xfd, .sp=0x34, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xf9d4, .value=0xa8}, {.addr=0xf9d5, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xf9d6, .a=0xa3, .x=0x1d, .y=0xfd, .sp=0x34, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xf9d4, .value=0xa8}, {.addr=0xf9d5, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xf9d4, .value=0xa8, .type=IO_READ},
        {.addr=0xf9d5, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_034A) {
    const struct CPU_State initial_cpu = {.pc=0xa423, .a=0xe7, .x=0xc5, .y=0x81, .sp=0xdf, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xa423, .value=0xa8}, {.addr=0xa424, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xa425, .a=0x6d, .x=0xc5, .y=0x81, .sp=0xdf, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa423, .value=0xa8}, {.addr=0xa424, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xa423, .value=0xa8, .type=IO_READ},
        {.addr=0xa424, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_034B) {
    const struct CPU_State initial_cpu = {.pc=0xac16, .a=0x3b, .x=0xc5, .y=0xf5, .sp=0x17, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xac16, .value=0xa8}, {.addr=0xac17, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xac18, .a=0x20, .x=0xc5, .y=0xf5, .sp=0x17, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xac16, .value=0xa8}, {.addr=0xac17, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xac16, .value=0xa8, .type=IO_READ},
        {.addr=0xac17, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_034C) {
    const struct CPU_State initial_cpu = {.pc=0xc2db, .a=0x75, .x=0xb7, .y=0xa7, .sp=0x0d, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xc2db, .value=0xa8}, {.addr=0xc2dc, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xc2dd, .a=0x4b, .x=0xb7, .y=0xa7, .sp=0x0d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc2db, .value=0xa8}, {.addr=0xc2dc, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xc2db, .value=0xa8, .type=IO_READ},
        {.addr=0xc2dc, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_034D) {
    const struct CPU_State initial_cpu = {.pc=0xd4c0, .a=0xac, .x=0xd3, .y=0x0c, .sp=0xd2, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c0, .value=0xa8}, {.addr=0xd4c1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd4c2, .a=0xcf, .x=0xd3, .y=0x0c, .sp=0xd2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd4c0, .value=0xa8}, {.addr=0xd4c1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd4c0, .value=0xa8, .type=IO_READ},
        {.addr=0xd4c1, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_034E) {
    const struct CPU_State initial_cpu = {.pc=0x3bef, .a=0xf4, .x=0x63, .y=0xec, .sp=0x08, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x3bef, .value=0xa8}, {.addr=0x3bf0, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x3bf1, .a=0xd9, .x=0x63, .y=0xec, .sp=0x08, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x3bef, .value=0xa8}, {.addr=0x3bf0, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x3bef, .value=0xa8, .type=IO_READ},
        {.addr=0x3bf0, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_034F) {
    const struct CPU_State initial_cpu = {.pc=0x7089, .a=0x88, .x=0x5c, .y=0xec, .sp=0x8e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x7089, .value=0xa8}, {.addr=0x708a, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x708b, .a=0x6c, .x=0x5c, .y=0xec, .sp=0x8e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7089, .value=0xa8}, {.addr=0x708a, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x7089, .value=0xa8, .type=IO_READ},
        {.addr=0x708a, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0350) {
    const struct CPU_State initial_cpu = {.pc=0x3684, .a=0x19, .x=0x84, .y=0xa4, .sp=0xdc, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x3684, .value=0xa8}, {.addr=0x3685, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3686, .a=0xb3, .x=0x84, .y=0xa4, .sp=0xdc, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3684, .value=0xa8}, {.addr=0x3685, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3684, .value=0xa8, .type=IO_READ},
        {.addr=0x3685, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0351) {
    const struct CPU_State initial_cpu = {.pc=0xeeb7, .a=0xc1, .x=0x6e, .y=0x80, .sp=0x68, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xeeb7, .value=0xa8}, {.addr=0xeeb8, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xeeb9, .a=0xf5, .x=0x6e, .y=0x80, .sp=0x68, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xeeb7, .value=0xa8}, {.addr=0xeeb8, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xeeb7, .value=0xa8, .type=IO_READ},
        {.addr=0xeeb8, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0352) {
    const struct CPU_State initial_cpu = {.pc=0x07d4, .a=0x09, .x=0x6c, .y=0x3f, .sp=0x6c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x07d4, .value=0xa8}, {.addr=0x07d5, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x07d6, .a=0xf2, .x=0x6c, .y=0x3f, .sp=0x6c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x07d4, .value=0xa8}, {.addr=0x07d5, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x07d4, .value=0xa8, .type=IO_READ},
        {.addr=0x07d5, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0353) {
    const struct CPU_State initial_cpu = {.pc=0x53e1, .a=0xd8, .x=0x58, .y=0xdf, .sp=0x6e, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x53e1, .value=0xa8}, {.addr=0x53e2, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x53e3, .a=0x59, .x=0x58, .y=0xdf, .sp=0x6e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x53e1, .value=0xa8}, {.addr=0x53e2, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x53e1, .value=0xa8, .type=IO_READ},
        {.addr=0x53e2, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0354) {
    const struct CPU_State initial_cpu = {.pc=0x99ce, .a=0x70, .x=0x98, .y=0xe0, .sp=0xe1, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x99ce, .value=0xa8}, {.addr=0x99cf, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x99d0, .a=0x9a, .x=0x98, .y=0xe0, .sp=0xe1, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x99ce, .value=0xa8}, {.addr=0x99cf, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x99ce, .value=0xa8, .type=IO_READ},
        {.addr=0x99cf, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0355) {
    const struct CPU_State initial_cpu = {.pc=0xc5a3, .a=0x0e, .x=0x51, .y=0xf3, .sp=0x94, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xc5a3, .value=0xa8}, {.addr=0xc5a4, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xc5a5, .a=0x0f, .x=0x51, .y=0xf3, .sp=0x94, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xc5a3, .value=0xa8}, {.addr=0xc5a4, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xc5a3, .value=0xa8, .type=IO_READ},
        {.addr=0xc5a4, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0356) {
    const struct CPU_State initial_cpu = {.pc=0xe847, .a=0x2c, .x=0x45, .y=0xb3, .sp=0xd7, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xe847, .value=0xa8}, {.addr=0xe848, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xe849, .a=0x80, .x=0x45, .y=0xb3, .sp=0xd7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe847, .value=0xa8}, {.addr=0xe848, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xe847, .value=0xa8, .type=IO_READ},
        {.addr=0xe848, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0357) {
    const struct CPU_State initial_cpu = {.pc=0x8a7d, .a=0x1e, .x=0x3d, .y=0x62, .sp=0xd1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x8a7d, .value=0xa8}, {.addr=0x8a7e, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x8a7f, .a=0xe0, .x=0x3d, .y=0x62, .sp=0xd1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8a7d, .value=0xa8}, {.addr=0x8a7e, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x8a7d, .value=0xa8, .type=IO_READ},
        {.addr=0x8a7e, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0358) {
    const struct CPU_State initial_cpu = {.pc=0xe130, .a=0xd7, .x=0x6e, .y=0x4d, .sp=0x89, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xe130, .value=0xa8}, {.addr=0xe131, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xe132, .a=0x4c, .x=0x6e, .y=0x4d, .sp=0x89, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe130, .value=0xa8}, {.addr=0xe131, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xe130, .value=0xa8, .type=IO_READ},
        {.addr=0xe131, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0359) {
    const struct CPU_State initial_cpu = {.pc=0x297e, .a=0x34, .x=0xbc, .y=0xc8, .sp=0x68, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x297e, .value=0xa8}, {.addr=0x297f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2980, .a=0x54, .x=0xbc, .y=0xc8, .sp=0x68, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x297e, .value=0xa8}, {.addr=0x297f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x297e, .value=0xa8, .type=IO_READ},
        {.addr=0x297f, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_035A) {
    const struct CPU_State initial_cpu = {.pc=0x5aa3, .a=0xd8, .x=0xeb, .y=0x46, .sp=0x47, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x5aa3, .value=0xa8}, {.addr=0x5aa4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x5aa5, .a=0xf2, .x=0xeb, .y=0x46, .sp=0x47, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x5aa3, .value=0xa8}, {.addr=0x5aa4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x5aa3, .value=0xa8, .type=IO_READ},
        {.addr=0x5aa4, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_035B) {
    const struct CPU_State initial_cpu = {.pc=0x251a, .a=0xc9, .x=0x08, .y=0xbf, .sp=0xf7, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x251a, .value=0xa8}, {.addr=0x251b, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x251c, .a=0xd7, .x=0x08, .y=0xbf, .sp=0xf7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x251a, .value=0xa8}, {.addr=0x251b, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x251a, .value=0xa8, .type=IO_READ},
        {.addr=0x251b, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_035C) {
    const struct CPU_State initial_cpu = {.pc=0x477a, .a=0x97, .x=0xbb, .y=0x93, .sp=0xa6, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x477a, .value=0xa8}, {.addr=0x477b, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x477c, .a=0xa2, .x=0xbb, .y=0x93, .sp=0xa6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x477a, .value=0xa8}, {.addr=0x477b, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x477a, .value=0xa8, .type=IO_READ},
        {.addr=0x477b, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_035D) {
    const struct CPU_State initial_cpu = {.pc=0x65c7, .a=0xc9, .x=0xe5, .y=0xa4, .sp=0xcb, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x65c7, .value=0xa8}, {.addr=0x65c8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x65c9, .a=0xfa, .x=0xe5, .y=0xa4, .sp=0xcb, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x65c7, .value=0xa8}, {.addr=0x65c8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x65c7, .value=0xa8, .type=IO_READ},
        {.addr=0x65c8, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_035E) {
    const struct CPU_State initial_cpu = {.pc=0x51ea, .a=0x06, .x=0x04, .y=0xe6, .sp=0xc0, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x51ea, .value=0xa8}, {.addr=0x51eb, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x51ec, .a=0x1e, .x=0x04, .y=0xe6, .sp=0xc0, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x51ea, .value=0xa8}, {.addr=0x51eb, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x51ea, .value=0xa8, .type=IO_READ},
        {.addr=0x51eb, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_035F) {
    const struct CPU_State initial_cpu = {.pc=0x2652, .a=0xf1, .x=0xdb, .y=0x63, .sp=0xac, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x2652, .value=0xa8}, {.addr=0x2653, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x2654, .a=0x60, .x=0xdb, .y=0x63, .sp=0xac, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2652, .value=0xa8}, {.addr=0x2653, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x2652, .value=0xa8, .type=IO_READ},
        {.addr=0x2653, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0360) {
    const struct CPU_State initial_cpu = {.pc=0x7793, .a=0xda, .x=0x29, .y=0x9a, .sp=0x03, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x7793, .value=0xa8}, {.addr=0x7794, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x7795, .a=0x6f, .x=0x29, .y=0x9a, .sp=0x03, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7793, .value=0xa8}, {.addr=0x7794, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x7793, .value=0xa8, .type=IO_READ},
        {.addr=0x7794, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0361) {
    const struct CPU_State initial_cpu = {.pc=0x9912, .a=0x6f, .x=0xa2, .y=0x02, .sp=0x89, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x9912, .value=0xa8}, {.addr=0x9913, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x9914, .a=0x5f, .x=0xa2, .y=0x02, .sp=0x89, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9912, .value=0xa8}, {.addr=0x9913, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x9912, .value=0xa8, .type=IO_READ},
        {.addr=0x9913, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0362) {
    const struct CPU_State initial_cpu = {.pc=0x440e, .a=0x8b, .x=0xd9, .y=0x33, .sp=0xe0, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x440e, .value=0xa8}, {.addr=0x440f, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x4410, .a=0xc2, .x=0xd9, .y=0x33, .sp=0xe0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x440e, .value=0xa8}, {.addr=0x440f, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x440e, .value=0xa8, .type=IO_READ},
        {.addr=0x440f, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0363) {
    const struct CPU_State initial_cpu = {.pc=0x0321, .a=0x18, .x=0xac, .y=0xea, .sp=0x4d, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0321, .value=0xa8}, {.addr=0x0322, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x0323, .a=0x1e, .x=0xac, .y=0xea, .sp=0x4d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0321, .value=0xa8}, {.addr=0x0322, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x0321, .value=0xa8, .type=IO_READ},
        {.addr=0x0322, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0364) {
    const struct CPU_State initial_cpu = {.pc=0xa128, .a=0x52, .x=0x00, .y=0x9d, .sp=0x60, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xa128, .value=0xa8}, {.addr=0xa129, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xa12a, .a=0x36, .x=0x00, .y=0x9d, .sp=0x60, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa128, .value=0xa8}, {.addr=0xa129, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xa128, .value=0xa8, .type=IO_READ},
        {.addr=0xa129, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0365) {
    const struct CPU_State initial_cpu = {.pc=0x7619, .a=0x4c, .x=0x29, .y=0xe9, .sp=0xf7, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x7619, .value=0xa8}, {.addr=0x761a, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x761b, .a=0xe9, .x=0x29, .y=0xe9, .sp=0xf7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x7619, .value=0xa8}, {.addr=0x761a, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x7619, .value=0xa8, .type=IO_READ},
        {.addr=0x761a, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0366) {
    const struct CPU_State initial_cpu = {.pc=0xd1e1, .a=0x89, .x=0xaf, .y=0xc7, .sp=0x11, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xd1e1, .value=0xa8}, {.addr=0xd1e2, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xd1e3, .a=0xbe, .x=0xaf, .y=0xc7, .sp=0x11, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xd1e1, .value=0xa8}, {.addr=0xd1e2, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xd1e1, .value=0xa8, .type=IO_READ},
        {.addr=0xd1e2, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0367) {
    const struct CPU_State initial_cpu = {.pc=0x7756, .a=0x56, .x=0x6c, .y=0xd0, .sp=0xb2, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x7756, .value=0xa8}, {.addr=0x7757, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x7758, .a=0xe0, .x=0x6c, .y=0xd0, .sp=0xb2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7756, .value=0xa8}, {.addr=0x7757, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x7756, .value=0xa8, .type=IO_READ},
        {.addr=0x7757, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0368) {
    const struct CPU_State initial_cpu = {.pc=0x32b5, .a=0xa3, .x=0x27, .y=0x88, .sp=0x73, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x32b5, .value=0xa8}, {.addr=0x32b6, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x32b7, .a=0x31, .x=0x27, .y=0x88, .sp=0x73, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x32b5, .value=0xa8}, {.addr=0x32b6, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x32b5, .value=0xa8, .type=IO_READ},
        {.addr=0x32b6, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0369) {
    const struct CPU_State initial_cpu = {.pc=0xfae7, .a=0x4a, .x=0x1f, .y=0x4c, .sp=0x27, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xfae7, .value=0xa8}, {.addr=0xfae8, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xfae9, .a=0xa1, .x=0x1f, .y=0x4c, .sp=0x27, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xfae7, .value=0xa8}, {.addr=0xfae8, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xfae7, .value=0xa8, .type=IO_READ},
        {.addr=0xfae8, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_036A) {
    const struct CPU_State initial_cpu = {.pc=0xf167, .a=0xc5, .x=0x57, .y=0xd3, .sp=0xb6, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xf167, .value=0xa8}, {.addr=0xf168, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xf169, .a=0x4b, .x=0x57, .y=0xd3, .sp=0xb6, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xf167, .value=0xa8}, {.addr=0xf168, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xf167, .value=0xa8, .type=IO_READ},
        {.addr=0xf168, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_036B) {
    const struct CPU_State initial_cpu = {.pc=0x23f7, .a=0x7e, .x=0x18, .y=0xfb, .sp=0x7f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x23f7, .value=0xa8}, {.addr=0x23f8, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x23f9, .a=0xee, .x=0x18, .y=0xfb, .sp=0x7f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x23f7, .value=0xa8}, {.addr=0x23f8, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x23f7, .value=0xa8, .type=IO_READ},
        {.addr=0x23f8, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_036C) {
    const struct CPU_State initial_cpu = {.pc=0x1b10, .a=0x20, .x=0xbf, .y=0xc2, .sp=0xcb, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x1b10, .value=0xa8}, {.addr=0x1b11, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x1b12, .a=0xef, .x=0xbf, .y=0xc2, .sp=0xcb, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x1b10, .value=0xa8}, {.addr=0x1b11, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x1b10, .value=0xa8, .type=IO_READ},
        {.addr=0x1b11, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_036D) {
    const struct CPU_State initial_cpu = {.pc=0x1947, .a=0x4b, .x=0x7f, .y=0xfd, .sp=0x24, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x1947, .value=0xa8}, {.addr=0x1948, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x1949, .a=0x07, .x=0x7f, .y=0xfd, .sp=0x24, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1947, .value=0xa8}, {.addr=0x1948, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x1947, .value=0xa8, .type=IO_READ},
        {.addr=0x1948, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_036E) {
    const struct CPU_State initial_cpu = {.pc=0xe1c1, .a=0xad, .x=0x2b, .y=0xcc, .sp=0x9a, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xe1c1, .value=0xa8}, {.addr=0xe1c2, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xe1c3, .a=0x68, .x=0x2b, .y=0xcc, .sp=0x9a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe1c1, .value=0xa8}, {.addr=0xe1c2, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xe1c1, .value=0xa8, .type=IO_READ},
        {.addr=0xe1c2, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_036F) {
    const struct CPU_State initial_cpu = {.pc=0x97fa, .a=0x2e, .x=0x37, .y=0x76, .sp=0x2c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x97fa, .value=0xa8}, {.addr=0x97fb, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x97fc, .a=0x1f, .x=0x37, .y=0x76, .sp=0x2c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x97fa, .value=0xa8}, {.addr=0x97fb, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x97fa, .value=0xa8, .type=IO_READ},
        {.addr=0x97fb, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0370) {
    const struct CPU_State initial_cpu = {.pc=0x8f94, .a=0x68, .x=0xf1, .y=0x99, .sp=0x55, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x8f94, .value=0xa8}, {.addr=0x8f95, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8f96, .a=0x5a, .x=0xf1, .y=0x99, .sp=0x55, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8f94, .value=0xa8}, {.addr=0x8f95, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8f94, .value=0xa8, .type=IO_READ},
        {.addr=0x8f95, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0371) {
    const struct CPU_State initial_cpu = {.pc=0xe884, .a=0x8f, .x=0x80, .y=0x4b, .sp=0x22, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xe884, .value=0xa8}, {.addr=0xe885, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xe886, .a=0xb4, .x=0x80, .y=0x4b, .sp=0x22, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe884, .value=0xa8}, {.addr=0xe885, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xe884, .value=0xa8, .type=IO_READ},
        {.addr=0xe885, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0372) {
    const struct CPU_State initial_cpu = {.pc=0x5554, .a=0xbf, .x=0xde, .y=0x02, .sp=0xba, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x5554, .value=0xa8}, {.addr=0x5555, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x5556, .a=0x58, .x=0xde, .y=0x02, .sp=0xba, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5554, .value=0xa8}, {.addr=0x5555, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x5554, .value=0xa8, .type=IO_READ},
        {.addr=0x5555, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0373) {
    const struct CPU_State initial_cpu = {.pc=0x9566, .a=0x5d, .x=0x28, .y=0x05, .sp=0xd8, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x9566, .value=0xa8}, {.addr=0x9567, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9568, .a=0x20, .x=0x28, .y=0x05, .sp=0xd8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9566, .value=0xa8}, {.addr=0x9567, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9566, .value=0xa8, .type=IO_READ},
        {.addr=0x9567, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0374) {
    const struct CPU_State initial_cpu = {.pc=0xbe75, .a=0x23, .x=0xeb, .y=0x3a, .sp=0x76, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xbe75, .value=0xa8}, {.addr=0xbe76, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xbe77, .a=0x60, .x=0xeb, .y=0x3a, .sp=0x76, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xbe75, .value=0xa8}, {.addr=0xbe76, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xbe75, .value=0xa8, .type=IO_READ},
        {.addr=0xbe76, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0375) {
    const struct CPU_State initial_cpu = {.pc=0x26e0, .a=0x09, .x=0xb4, .y=0xe5, .sp=0x79, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x26e0, .value=0xa8}, {.addr=0x26e1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x26e2, .a=0x02, .x=0xb4, .y=0xe5, .sp=0x79, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x26e0, .value=0xa8}, {.addr=0x26e1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x26e0, .value=0xa8, .type=IO_READ},
        {.addr=0x26e1, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0376) {
    const struct CPU_State initial_cpu = {.pc=0x696b, .a=0xbe, .x=0x90, .y=0xba, .sp=0xcb, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x696b, .value=0xa8}, {.addr=0x696c, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x696d, .a=0x94, .x=0x90, .y=0xba, .sp=0xcb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x696b, .value=0xa8}, {.addr=0x696c, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x696b, .value=0xa8, .type=IO_READ},
        {.addr=0x696c, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0377) {
    const struct CPU_State initial_cpu = {.pc=0x545a, .a=0xa0, .x=0x6d, .y=0x78, .sp=0xf0, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x545a, .value=0xa8}, {.addr=0x545b, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x545c, .a=0x65, .x=0x6d, .y=0x78, .sp=0xf0, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x545a, .value=0xa8}, {.addr=0x545b, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x545a, .value=0xa8, .type=IO_READ},
        {.addr=0x545b, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0378) {
    const struct CPU_State initial_cpu = {.pc=0x7442, .a=0xcc, .x=0xba, .y=0x08, .sp=0xe7, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x7442, .value=0xa8}, {.addr=0x7443, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x7444, .a=0x8b, .x=0xba, .y=0x08, .sp=0xe7, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x7442, .value=0xa8}, {.addr=0x7443, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x7442, .value=0xa8, .type=IO_READ},
        {.addr=0x7443, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0379) {
    const struct CPU_State initial_cpu = {.pc=0x86d6, .a=0xf6, .x=0x12, .y=0x0b, .sp=0x7c, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x86d6, .value=0xa8}, {.addr=0x86d7, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x86d8, .a=0xca, .x=0x12, .y=0x0b, .sp=0x7c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x86d6, .value=0xa8}, {.addr=0x86d7, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x86d6, .value=0xa8, .type=IO_READ},
        {.addr=0x86d7, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_037A) {
    const struct CPU_State initial_cpu = {.pc=0x500f, .a=0x89, .x=0x8d, .y=0xce, .sp=0xdb, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x500f, .value=0xa8}, {.addr=0x5010, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x5011, .a=0x6d, .x=0x8d, .y=0xce, .sp=0xdb, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x500f, .value=0xa8}, {.addr=0x5010, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x500f, .value=0xa8, .type=IO_READ},
        {.addr=0x5010, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_037B) {
    const struct CPU_State initial_cpu = {.pc=0x9fe8, .a=0x59, .x=0x7a, .y=0x14, .sp=0xc3, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe8, .value=0xa8}, {.addr=0x9fe9, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x9fea, .a=0xb8, .x=0x7a, .y=0x14, .sp=0xc3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x9fe8, .value=0xa8}, {.addr=0x9fe9, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x9fe8, .value=0xa8, .type=IO_READ},
        {.addr=0x9fe9, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_037C) {
    const struct CPU_State initial_cpu = {.pc=0x843f, .a=0x95, .x=0x4c, .y=0xa4, .sp=0x8a, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x843f, .value=0xa8}, {.addr=0x8440, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x8441, .a=0xfd, .x=0x4c, .y=0xa4, .sp=0x8a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x843f, .value=0xa8}, {.addr=0x8440, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x843f, .value=0xa8, .type=IO_READ},
        {.addr=0x8440, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_037D) {
    const struct CPU_State initial_cpu = {.pc=0xb1d5, .a=0xb8, .x=0x1e, .y=0x32, .sp=0xde, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d5, .value=0xa8}, {.addr=0xb1d6, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xb1d7, .a=0x1f, .x=0x1e, .y=0x32, .sp=0xde, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb1d5, .value=0xa8}, {.addr=0xb1d6, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xb1d5, .value=0xa8, .type=IO_READ},
        {.addr=0xb1d6, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_037E) {
    const struct CPU_State initial_cpu = {.pc=0xd597, .a=0x53, .x=0x66, .y=0xa8, .sp=0xf0, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xd597, .value=0xa8}, {.addr=0xd598, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xd599, .a=0x52, .x=0x66, .y=0xa8, .sp=0xf0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd597, .value=0xa8}, {.addr=0xd598, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xd597, .value=0xa8, .type=IO_READ},
        {.addr=0xd598, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_037F) {
    const struct CPU_State initial_cpu = {.pc=0xf67a, .a=0x54, .x=0xb2, .y=0xef, .sp=0x50, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf67a, .value=0xa8}, {.addr=0xf67b, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xf67c, .a=0xd9, .x=0xb2, .y=0xef, .sp=0x50, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf67a, .value=0xa8}, {.addr=0xf67b, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xf67a, .value=0xa8, .type=IO_READ},
        {.addr=0xf67b, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0380) {
    const struct CPU_State initial_cpu = {.pc=0x3a5b, .a=0xe3, .x=0x64, .y=0x64, .sp=0xbf, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x3a5b, .value=0xa8}, {.addr=0x3a5c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3a5d, .a=0xe3, .x=0x64, .y=0x64, .sp=0xbf, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x3a5b, .value=0xa8}, {.addr=0x3a5c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3a5b, .value=0xa8, .type=IO_READ},
        {.addr=0x3a5c, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0381) {
    const struct CPU_State initial_cpu = {.pc=0x537b, .a=0x35, .x=0x02, .y=0x13, .sp=0xf0, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x537b, .value=0xa8}, {.addr=0x537c, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x537d, .a=0x69, .x=0x02, .y=0x13, .sp=0xf0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x537b, .value=0xa8}, {.addr=0x537c, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x537b, .value=0xa8, .type=IO_READ},
        {.addr=0x537c, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0382) {
    const struct CPU_State initial_cpu = {.pc=0x0e97, .a=0x76, .x=0xa2, .y=0x32, .sp=0x40, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0e97, .value=0xa8}, {.addr=0x0e98, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x0e99, .a=0x0a, .x=0xa2, .y=0x32, .sp=0x40, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0e97, .value=0xa8}, {.addr=0x0e98, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x0e97, .value=0xa8, .type=IO_READ},
        {.addr=0x0e98, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0383) {
    const struct CPU_State initial_cpu = {.pc=0x8810, .a=0xc1, .x=0xd6, .y=0x20, .sp=0x13, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x8810, .value=0xa8}, {.addr=0x8811, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x8812, .a=0x88, .x=0xd6, .y=0x20, .sp=0x13, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8810, .value=0xa8}, {.addr=0x8811, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x8810, .value=0xa8, .type=IO_READ},
        {.addr=0x8811, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0384) {
    const struct CPU_State initial_cpu = {.pc=0x24fd, .a=0x6f, .x=0xd8, .y=0x9a, .sp=0xf6, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x24fd, .value=0xa8}, {.addr=0x24fe, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x24ff, .a=0xe9, .x=0xd8, .y=0x9a, .sp=0xf6, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x24fd, .value=0xa8}, {.addr=0x24fe, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x24fd, .value=0xa8, .type=IO_READ},
        {.addr=0x24fe, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0385) {
    const struct CPU_State initial_cpu = {.pc=0x12d0, .a=0x27, .x=0x6f, .y=0xb3, .sp=0x0f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x12d0, .value=0xa8}, {.addr=0x12d1, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x12d2, .a=0xdc, .x=0x6f, .y=0xb3, .sp=0x0f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x12d0, .value=0xa8}, {.addr=0x12d1, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x12d0, .value=0xa8, .type=IO_READ},
        {.addr=0x12d1, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0386) {
    const struct CPU_State initial_cpu = {.pc=0x1565, .a=0xa8, .x=0x53, .y=0x95, .sp=0x7e, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x1565, .value=0xa8}, {.addr=0x1566, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x1567, .a=0xd8, .x=0x53, .y=0x95, .sp=0x7e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1565, .value=0xa8}, {.addr=0x1566, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x1565, .value=0xa8, .type=IO_READ},
        {.addr=0x1566, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0387) {
    const struct CPU_State initial_cpu = {.pc=0x2e51, .a=0x65, .x=0x74, .y=0xe6, .sp=0x05, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x2e51, .value=0xa8}, {.addr=0x2e52, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x2e53, .a=0xd5, .x=0x74, .y=0xe6, .sp=0x05, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2e51, .value=0xa8}, {.addr=0x2e52, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x2e51, .value=0xa8, .type=IO_READ},
        {.addr=0x2e52, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0388) {
    const struct CPU_State initial_cpu = {.pc=0x6e62, .a=0xba, .x=0xb3, .y=0x3a, .sp=0x7a, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x6e62, .value=0xa8}, {.addr=0x6e63, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6e64, .a=0x3e, .x=0xb3, .y=0x3a, .sp=0x7a, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6e62, .value=0xa8}, {.addr=0x6e63, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6e62, .value=0xa8, .type=IO_READ},
        {.addr=0x6e63, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0389) {
    const struct CPU_State initial_cpu = {.pc=0x546e, .a=0xf2, .x=0xdf, .y=0x5c, .sp=0x48, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x546e, .value=0xa8}, {.addr=0x546f, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x5470, .a=0x7d, .x=0xdf, .y=0x5c, .sp=0x48, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x546e, .value=0xa8}, {.addr=0x546f, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x546e, .value=0xa8, .type=IO_READ},
        {.addr=0x546f, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_038A) {
    const struct CPU_State initial_cpu = {.pc=0x6515, .a=0xab, .x=0x0a, .y=0x6a, .sp=0xe2, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x6515, .value=0xa8}, {.addr=0x6516, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6517, .a=0x45, .x=0x0a, .y=0x6a, .sp=0xe2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x6515, .value=0xa8}, {.addr=0x6516, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6515, .value=0xa8, .type=IO_READ},
        {.addr=0x6516, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_038B) {
    const struct CPU_State initial_cpu = {.pc=0xbe2d, .a=0xba, .x=0x7f, .y=0x2b, .sp=0x18, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xbe2d, .value=0xa8}, {.addr=0xbe2e, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xbe2f, .a=0xf6, .x=0x7f, .y=0x2b, .sp=0x18, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xbe2d, .value=0xa8}, {.addr=0xbe2e, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xbe2d, .value=0xa8, .type=IO_READ},
        {.addr=0xbe2e, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_038C) {
    const struct CPU_State initial_cpu = {.pc=0xbd73, .a=0x64, .x=0xf8, .y=0x10, .sp=0x4c, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xbd73, .value=0xa8}, {.addr=0xbd74, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xbd75, .a=0xca, .x=0xf8, .y=0x10, .sp=0x4c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xbd73, .value=0xa8}, {.addr=0xbd74, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xbd73, .value=0xa8, .type=IO_READ},
        {.addr=0xbd74, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_038D) {
    const struct CPU_State initial_cpu = {.pc=0x8639, .a=0xa7, .x=0xac, .y=0x38, .sp=0x02, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x8639, .value=0xa8}, {.addr=0x863a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x863b, .a=0xe7, .x=0xac, .y=0x38, .sp=0x02, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x8639, .value=0xa8}, {.addr=0x863a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8639, .value=0xa8, .type=IO_READ},
        {.addr=0x863a, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_038E) {
    const struct CPU_State initial_cpu = {.pc=0x654f, .a=0x40, .x=0xca, .y=0x10, .sp=0xea, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x654f, .value=0xa8}, {.addr=0x6550, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x6551, .a=0xb0, .x=0xca, .y=0x10, .sp=0xea, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x654f, .value=0xa8}, {.addr=0x6550, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x654f, .value=0xa8, .type=IO_READ},
        {.addr=0x6550, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_038F) {
    const struct CPU_State initial_cpu = {.pc=0x4646, .a=0x9f, .x=0xb4, .y=0xbf, .sp=0x51, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4646, .value=0xa8}, {.addr=0x4647, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x4648, .a=0xe6, .x=0xb4, .y=0xbf, .sp=0x51, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4646, .value=0xa8}, {.addr=0x4647, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x4646, .value=0xa8, .type=IO_READ},
        {.addr=0x4647, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0390) {
    const struct CPU_State initial_cpu = {.pc=0x92c0, .a=0xda, .x=0x34, .y=0x21, .sp=0x1d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x92c0, .value=0xa8}, {.addr=0x92c1, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x92c2, .a=0xf2, .x=0x34, .y=0x21, .sp=0x1d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x92c0, .value=0xa8}, {.addr=0x92c1, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x92c0, .value=0xa8, .type=IO_READ},
        {.addr=0x92c1, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0391) {
    const struct CPU_State initial_cpu = {.pc=0x513c, .a=0x44, .x=0xa4, .y=0x62, .sp=0x4a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x513c, .value=0xa8}, {.addr=0x513d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x513e, .a=0x1e, .x=0xa4, .y=0x62, .sp=0x4a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x513c, .value=0xa8}, {.addr=0x513d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x513c, .value=0xa8, .type=IO_READ},
        {.addr=0x513d, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0392) {
    const struct CPU_State initial_cpu = {.pc=0x4396, .a=0x6b, .x=0xd1, .y=0x0f, .sp=0x4b, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x4396, .value=0xa8}, {.addr=0x4397, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x4398, .a=0xc7, .x=0xd1, .y=0x0f, .sp=0x4b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4396, .value=0xa8}, {.addr=0x4397, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x4396, .value=0xa8, .type=IO_READ},
        {.addr=0x4397, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0393) {
    const struct CPU_State initial_cpu = {.pc=0x1e0d, .a=0xb6, .x=0x1b, .y=0x75, .sp=0x00, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x1e0d, .value=0xa8}, {.addr=0x1e0e, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x1e0f, .a=0xcd, .x=0x1b, .y=0x75, .sp=0x00, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x1e0d, .value=0xa8}, {.addr=0x1e0e, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x1e0d, .value=0xa8, .type=IO_READ},
        {.addr=0x1e0e, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0394) {
    const struct CPU_State initial_cpu = {.pc=0x3398, .a=0x93, .x=0x42, .y=0x24, .sp=0xfb, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x3398, .value=0xa8}, {.addr=0x3399, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x339a, .a=0xce, .x=0x42, .y=0x24, .sp=0xfb, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3398, .value=0xa8}, {.addr=0x3399, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x3398, .value=0xa8, .type=IO_READ},
        {.addr=0x3399, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0395) {
    const struct CPU_State initial_cpu = {.pc=0xaef9, .a=0x24, .x=0x46, .y=0x19, .sp=0x6c, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xaef9, .value=0xa8}, {.addr=0xaefa, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xaefb, .a=0xc3, .x=0x46, .y=0x19, .sp=0x6c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xaef9, .value=0xa8}, {.addr=0xaefa, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xaef9, .value=0xa8, .type=IO_READ},
        {.addr=0xaefa, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0396) {
    const struct CPU_State initial_cpu = {.pc=0x2637, .a=0xb9, .x=0xab, .y=0x52, .sp=0x1b, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x2637, .value=0xa8}, {.addr=0x2638, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x2639, .a=0xc4, .x=0xab, .y=0x52, .sp=0x1b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x2637, .value=0xa8}, {.addr=0x2638, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x2637, .value=0xa8, .type=IO_READ},
        {.addr=0x2638, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0397) {
    const struct CPU_State initial_cpu = {.pc=0x58cc, .a=0x0b, .x=0x1e, .y=0x4c, .sp=0xf1, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x58cc, .value=0xa8}, {.addr=0x58cd, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x58ce, .a=0x69, .x=0x1e, .y=0x4c, .sp=0xf1, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x58cc, .value=0xa8}, {.addr=0x58cd, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x58cc, .value=0xa8, .type=IO_READ},
        {.addr=0x58cd, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0398) {
    const struct CPU_State initial_cpu = {.pc=0x6a4b, .a=0x99, .x=0x5d, .y=0x0e, .sp=0xbf, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x6a4b, .value=0xa8}, {.addr=0x6a4c, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x6a4d, .a=0x3a, .x=0x5d, .y=0x0e, .sp=0xbf, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6a4b, .value=0xa8}, {.addr=0x6a4c, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x6a4b, .value=0xa8, .type=IO_READ},
        {.addr=0x6a4c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_0399) {
    const struct CPU_State initial_cpu = {.pc=0xeda5, .a=0x42, .x=0xef, .y=0xf5, .sp=0x23, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xeda5, .value=0xa8}, {.addr=0xeda6, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xeda7, .a=0x7d, .x=0xef, .y=0xf5, .sp=0x23, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xeda5, .value=0xa8}, {.addr=0xeda6, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xeda5, .value=0xa8, .type=IO_READ},
        {.addr=0xeda6, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_039A) {
    const struct CPU_State initial_cpu = {.pc=0x3ff4, .a=0xe2, .x=0x97, .y=0xb8, .sp=0x96, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x3ff4, .value=0xa8}, {.addr=0x3ff5, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3ff6, .a=0x22, .x=0x97, .y=0xb8, .sp=0x96, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3ff4, .value=0xa8}, {.addr=0x3ff5, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3ff4, .value=0xa8, .type=IO_READ},
        {.addr=0x3ff5, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_039B) {
    const struct CPU_State initial_cpu = {.pc=0xa206, .a=0x73, .x=0xc4, .y=0xa9, .sp=0xee, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa206, .value=0xa8}, {.addr=0xa207, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xa208, .a=0xf2, .x=0xc4, .y=0xa9, .sp=0xee, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xa206, .value=0xa8}, {.addr=0xa207, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xa206, .value=0xa8, .type=IO_READ},
        {.addr=0xa207, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_039C) {
    const struct CPU_State initial_cpu = {.pc=0x700d, .a=0x04, .x=0xa7, .y=0x8d, .sp=0x6b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x700d, .value=0xa8}, {.addr=0x700e, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x700f, .a=0x4c, .x=0xa7, .y=0x8d, .sp=0x6b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x700d, .value=0xa8}, {.addr=0x700e, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x700d, .value=0xa8, .type=IO_READ},
        {.addr=0x700e, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_039D) {
    const struct CPU_State initial_cpu = {.pc=0xc952, .a=0x7a, .x=0x84, .y=0xaf, .sp=0xe7, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xc952, .value=0xa8}, {.addr=0xc953, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc954, .a=0xfd, .x=0x84, .y=0xaf, .sp=0xe7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc952, .value=0xa8}, {.addr=0xc953, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc952, .value=0xa8, .type=IO_READ},
        {.addr=0xc953, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_039E) {
    const struct CPU_State initial_cpu = {.pc=0x9cb2, .a=0x65, .x=0x0a, .y=0xfa, .sp=0x04, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x9cb2, .value=0xa8}, {.addr=0x9cb3, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x9cb4, .a=0xd5, .x=0x0a, .y=0xfa, .sp=0x04, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9cb2, .value=0xa8}, {.addr=0x9cb3, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x9cb2, .value=0xa8, .type=IO_READ},
        {.addr=0x9cb3, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_039F) {
    const struct CPU_State initial_cpu = {.pc=0x39c0, .a=0x5f, .x=0x7f, .y=0x10, .sp=0xe7, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x39c0, .value=0xa8}, {.addr=0x39c1, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x39c2, .a=0x48, .x=0x7f, .y=0x10, .sp=0xe7, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x39c0, .value=0xa8}, {.addr=0x39c1, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x39c0, .value=0xa8, .type=IO_READ},
        {.addr=0x39c1, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xb011, .a=0xec, .x=0xee, .y=0x1a, .sp=0xf6, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xb011, .value=0xa8}, {.addr=0xb012, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xb013, .a=0x61, .x=0xee, .y=0x1a, .sp=0xf6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb011, .value=0xa8}, {.addr=0xb012, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xb011, .value=0xa8, .type=IO_READ},
        {.addr=0xb012, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xac0d, .a=0x54, .x=0x00, .y=0xac, .sp=0x28, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xac0d, .value=0xa8}, {.addr=0xac0e, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xac0f, .a=0x44, .x=0x00, .y=0xac, .sp=0x28, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xac0d, .value=0xa8}, {.addr=0xac0e, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xac0d, .value=0xa8, .type=IO_READ},
        {.addr=0xac0e, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x725e, .a=0x7b, .x=0xf5, .y=0xe2, .sp=0x5e, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x725e, .value=0xa8}, {.addr=0x725f, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x7260, .a=0x36, .x=0xf5, .y=0xe2, .sp=0x5e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x725e, .value=0xa8}, {.addr=0x725f, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x725e, .value=0xa8, .type=IO_READ},
        {.addr=0x725f, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x9c75, .a=0xd3, .x=0x5e, .y=0x75, .sp=0x86, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x9c75, .value=0xa8}, {.addr=0x9c76, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9c77, .a=0x6c, .x=0x5e, .y=0x75, .sp=0x86, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x9c75, .value=0xa8}, {.addr=0x9c76, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9c75, .value=0xa8, .type=IO_READ},
        {.addr=0x9c76, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xce53, .a=0xf2, .x=0x0e, .y=0xd9, .sp=0xde, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xce53, .value=0xa8}, {.addr=0xce54, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xce55, .a=0x98, .x=0x0e, .y=0xd9, .sp=0xde, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xce53, .value=0xa8}, {.addr=0xce54, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xce53, .value=0xa8, .type=IO_READ},
        {.addr=0xce54, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x23bf, .a=0xf1, .x=0xdf, .y=0x70, .sp=0x73, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x23bf, .value=0xa8}, {.addr=0x23c0, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x23c1, .a=0x28, .x=0xdf, .y=0x70, .sp=0x73, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x23bf, .value=0xa8}, {.addr=0x23c0, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x23bf, .value=0xa8, .type=IO_READ},
        {.addr=0x23c0, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x9110, .a=0xe9, .x=0x16, .y=0x00, .sp=0x88, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x9110, .value=0xa8}, {.addr=0x9111, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9112, .a=0xcc, .x=0x16, .y=0x00, .sp=0x88, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x9110, .value=0xa8}, {.addr=0x9111, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9110, .value=0xa8, .type=IO_READ},
        {.addr=0x9111, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xc6d2, .a=0x23, .x=0x99, .y=0xd7, .sp=0xf6, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xc6d2, .value=0xa8}, {.addr=0xc6d3, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xc6d4, .a=0x0d, .x=0x99, .y=0xd7, .sp=0xf6, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc6d2, .value=0xa8}, {.addr=0xc6d3, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xc6d2, .value=0xa8, .type=IO_READ},
        {.addr=0xc6d3, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x6086, .a=0x44, .x=0x11, .y=0x93, .sp=0xc9, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x6086, .value=0xa8}, {.addr=0x6087, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x6088, .a=0x40, .x=0x11, .y=0x93, .sp=0xc9, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6086, .value=0xa8}, {.addr=0x6087, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x6086, .value=0xa8, .type=IO_READ},
        {.addr=0x6087, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x29ce, .a=0xa3, .x=0x58, .y=0x98, .sp=0xa1, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x29ce, .value=0xa8}, {.addr=0x29cf, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x29d0, .a=0x08, .x=0x58, .y=0x98, .sp=0xa1, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x29ce, .value=0xa8}, {.addr=0x29cf, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x29ce, .value=0xa8, .type=IO_READ},
        {.addr=0x29cf, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x383f, .a=0xa7, .x=0x2c, .y=0x89, .sp=0x8e, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x383f, .value=0xa8}, {.addr=0x3840, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x3841, .a=0x8d, .x=0x2c, .y=0x89, .sp=0x8e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x383f, .value=0xa8}, {.addr=0x3840, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x383f, .value=0xa8, .type=IO_READ},
        {.addr=0x3840, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x63a3, .a=0xdb, .x=0x96, .y=0x5b, .sp=0x3d, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x63a3, .value=0xa8}, {.addr=0x63a4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x63a5, .a=0x2d, .x=0x96, .y=0x5b, .sp=0x3d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x63a3, .value=0xa8}, {.addr=0x63a4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x63a3, .value=0xa8, .type=IO_READ},
        {.addr=0x63a4, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x222b, .a=0x2e, .x=0x73, .y=0x9e, .sp=0x3b, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x222b, .value=0xa8}, {.addr=0x222c, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x222d, .a=0x9b, .x=0x73, .y=0x9e, .sp=0x3b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x222b, .value=0xa8}, {.addr=0x222c, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x222b, .value=0xa8, .type=IO_READ},
        {.addr=0x222c, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x40b5, .a=0x3f, .x=0x8d, .y=0x9b, .sp=0xbf, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x40b5, .value=0xa8}, {.addr=0x40b6, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x40b7, .a=0xb5, .x=0x8d, .y=0x9b, .sp=0xbf, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x40b5, .value=0xa8}, {.addr=0x40b6, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x40b5, .value=0xa8, .type=IO_READ},
        {.addr=0x40b6, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x2bc8, .a=0x4e, .x=0x4b, .y=0xc5, .sp=0x62, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x2bc8, .value=0xa8}, {.addr=0x2bc9, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x2bca, .a=0x49, .x=0x4b, .y=0xc5, .sp=0x62, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2bc8, .value=0xa8}, {.addr=0x2bc9, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x2bc8, .value=0xa8, .type=IO_READ},
        {.addr=0x2bc9, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xb236, .a=0x9f, .x=0xb6, .y=0xb1, .sp=0x15, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xb236, .value=0xa8}, {.addr=0xb237, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xb238, .a=0x0a, .x=0xb6, .y=0xb1, .sp=0x15, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xb236, .value=0xa8}, {.addr=0xb237, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xb236, .value=0xa8, .type=IO_READ},
        {.addr=0xb237, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x51bd, .a=0xce, .x=0xe6, .y=0x7b, .sp=0x7b, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x51bd, .value=0xa8}, {.addr=0x51be, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x51bf, .a=0x67, .x=0xe6, .y=0x7b, .sp=0x7b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x51bd, .value=0xa8}, {.addr=0x51be, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x51bd, .value=0xa8, .type=IO_READ},
        {.addr=0x51be, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xaa9c, .a=0x31, .x=0xfd, .y=0x1c, .sp=0x80, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xaa9c, .value=0xa8}, {.addr=0xaa9d, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xaa9e, .a=0x7d, .x=0xfd, .y=0x1c, .sp=0x80, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xaa9c, .value=0xa8}, {.addr=0xaa9d, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xaa9c, .value=0xa8, .type=IO_READ},
        {.addr=0xaa9d, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xe4c9, .a=0x7b, .x=0xd5, .y=0xd9, .sp=0xfa, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xe4c9, .value=0xa8}, {.addr=0xe4ca, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe4cb, .a=0x34, .x=0xd5, .y=0xd9, .sp=0xfa, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe4c9, .value=0xa8}, {.addr=0xe4ca, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe4c9, .value=0xa8, .type=IO_READ},
        {.addr=0xe4ca, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xe29a, .a=0x48, .x=0x8f, .y=0x49, .sp=0x1f, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xe29a, .value=0xa8}, {.addr=0xe29b, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xe29c, .a=0xda, .x=0x8f, .y=0x49, .sp=0x1f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe29a, .value=0xa8}, {.addr=0xe29b, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xe29a, .value=0xa8, .type=IO_READ},
        {.addr=0xe29b, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x0ccb, .a=0x85, .x=0xbb, .y=0x0f, .sp=0xdc, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0ccb, .value=0xa8}, {.addr=0x0ccc, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x0ccd, .a=0x05, .x=0xbb, .y=0x0f, .sp=0xdc, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0ccb, .value=0xa8}, {.addr=0x0ccc, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x0ccb, .value=0xa8, .type=IO_READ},
        {.addr=0x0ccc, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xfc54, .a=0x8e, .x=0x68, .y=0x60, .sp=0xcf, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xfc54, .value=0xa8}, {.addr=0xfc55, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xfc56, .a=0x68, .x=0x68, .y=0x60, .sp=0xcf, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xfc54, .value=0xa8}, {.addr=0xfc55, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xfc54, .value=0xa8, .type=IO_READ},
        {.addr=0xfc55, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x5b87, .a=0x38, .x=0x63, .y=0x75, .sp=0xed, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x5b87, .value=0xa8}, {.addr=0x5b88, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x5b89, .a=0xb8, .x=0x63, .y=0x75, .sp=0xed, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5b87, .value=0xa8}, {.addr=0x5b88, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x5b87, .value=0xa8, .type=IO_READ},
        {.addr=0x5b88, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xffd6, .a=0xa4, .x=0x8f, .y=0xb5, .sp=0x29, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xffd6, .value=0xa8}, {.addr=0xffd7, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xffd8, .a=0xa5, .x=0x8f, .y=0xb5, .sp=0x29, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xffd6, .value=0xa8}, {.addr=0xffd7, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xffd6, .value=0xa8, .type=IO_READ},
        {.addr=0xffd7, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xe9cd, .a=0xfb, .x=0xa5, .y=0x9e, .sp=0x7a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xe9cd, .value=0xa8}, {.addr=0xe9ce, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe9cf, .a=0xfe, .x=0xa5, .y=0x9e, .sp=0x7a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe9cd, .value=0xa8}, {.addr=0xe9ce, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe9cd, .value=0xa8, .type=IO_READ},
        {.addr=0xe9ce, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x0814, .a=0xdb, .x=0x2b, .y=0x51, .sp=0x53, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0814, .value=0xa8}, {.addr=0x0815, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x0816, .a=0xeb, .x=0x2b, .y=0x51, .sp=0x53, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0814, .value=0xa8}, {.addr=0x0815, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x0814, .value=0xa8, .type=IO_READ},
        {.addr=0x0815, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x0e16, .a=0xd7, .x=0x62, .y=0xa4, .sp=0xed, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0e16, .value=0xa8}, {.addr=0x0e17, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x0e18, .a=0x54, .x=0x62, .y=0xa4, .sp=0xed, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0e16, .value=0xa8}, {.addr=0x0e17, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x0e16, .value=0xa8, .type=IO_READ},
        {.addr=0x0e17, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x1c3a, .a=0x8c, .x=0xd0, .y=0xdb, .sp=0xde, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x1c3a, .value=0xa8}, {.addr=0x1c3b, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x1c3c, .a=0x68, .x=0xd0, .y=0xdb, .sp=0xde, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1c3a, .value=0xa8}, {.addr=0x1c3b, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x1c3a, .value=0xa8, .type=IO_READ},
        {.addr=0x1c3b, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xe5f5, .a=0x5a, .x=0xca, .y=0x02, .sp=0x65, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xe5f5, .value=0xa8}, {.addr=0xe5f6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe5f7, .a=0xcb, .x=0xca, .y=0x02, .sp=0x65, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe5f5, .value=0xa8}, {.addr=0xe5f6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe5f5, .value=0xa8, .type=IO_READ},
        {.addr=0xe5f6, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xf50e, .a=0x09, .x=0x34, .y=0xdf, .sp=0x4a, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xf50e, .value=0xa8}, {.addr=0xf50f, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xf510, .a=0x56, .x=0x34, .y=0xdf, .sp=0x4a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf50e, .value=0xa8}, {.addr=0xf50f, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xf50e, .value=0xa8, .type=IO_READ},
        {.addr=0xf50f, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xaa04, .a=0x13, .x=0x67, .y=0x3c, .sp=0x6d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xaa04, .value=0xa8}, {.addr=0xaa05, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xaa06, .a=0x49, .x=0x67, .y=0x3c, .sp=0x6d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xaa04, .value=0xa8}, {.addr=0xaa05, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xaa04, .value=0xa8, .type=IO_READ},
        {.addr=0xaa05, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x0043, .a=0x13, .x=0x6a, .y=0x74, .sp=0x57, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xa8}, {.addr=0x0044, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x0045, .a=0x6e, .x=0x6a, .y=0x74, .sp=0x57, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xa8}, {.addr=0x0044, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x0043, .value=0xa8, .type=IO_READ},
        {.addr=0x0044, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x85ac, .a=0x5f, .x=0xfc, .y=0x4f, .sp=0x0f, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x85ac, .value=0xa8}, {.addr=0x85ad, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x85ae, .a=0x6c, .x=0xfc, .y=0x4f, .sp=0x0f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x85ac, .value=0xa8}, {.addr=0x85ad, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x85ac, .value=0xa8, .type=IO_READ},
        {.addr=0x85ad, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x32cb, .a=0x55, .x=0xbf, .y=0xcb, .sp=0x32, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x32cb, .value=0xa8}, {.addr=0x32cc, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x32cd, .a=0x59, .x=0xbf, .y=0xcb, .sp=0x32, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x32cb, .value=0xa8}, {.addr=0x32cc, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x32cb, .value=0xa8, .type=IO_READ},
        {.addr=0x32cc, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x5b2a, .a=0x3e, .x=0x2f, .y=0x35, .sp=0x9a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x5b2a, .value=0xa8}, {.addr=0x5b2b, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x5b2c, .a=0x85, .x=0x2f, .y=0x35, .sp=0x9a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5b2a, .value=0xa8}, {.addr=0x5b2b, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x5b2a, .value=0xa8, .type=IO_READ},
        {.addr=0x5b2b, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x341f, .a=0xf6, .x=0x17, .y=0xba, .sp=0x78, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x341f, .value=0xa8}, {.addr=0x3420, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x3421, .a=0x0f, .x=0x17, .y=0xba, .sp=0x78, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x341f, .value=0xa8}, {.addr=0x3420, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x341f, .value=0xa8, .type=IO_READ},
        {.addr=0x3420, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x7cc1, .a=0x98, .x=0x7a, .y=0xde, .sp=0x48, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7cc1, .value=0xa8}, {.addr=0x7cc2, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x7cc3, .a=0x3a, .x=0x7a, .y=0xde, .sp=0x48, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7cc1, .value=0xa8}, {.addr=0x7cc2, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x7cc1, .value=0xa8, .type=IO_READ},
        {.addr=0x7cc2, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x1df0, .a=0x7b, .x=0xb0, .y=0x30, .sp=0x8f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x1df0, .value=0xa8}, {.addr=0x1df1, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x1df2, .a=0x1c, .x=0xb0, .y=0x30, .sp=0x8f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1df0, .value=0xa8}, {.addr=0x1df1, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x1df0, .value=0xa8, .type=IO_READ},
        {.addr=0x1df1, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x224a, .a=0xb7, .x=0xe1, .y=0xfc, .sp=0x06, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x224a, .value=0xa8}, {.addr=0x224b, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x224c, .a=0xbd, .x=0xe1, .y=0xfc, .sp=0x06, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x224a, .value=0xa8}, {.addr=0x224b, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x224a, .value=0xa8, .type=IO_READ},
        {.addr=0x224b, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x3d4b, .a=0x0b, .x=0xb4, .y=0x4d, .sp=0xb5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3d4b, .value=0xa8}, {.addr=0x3d4c, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x3d4d, .a=0x15, .x=0xb4, .y=0x4d, .sp=0xb5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x3d4b, .value=0xa8}, {.addr=0x3d4c, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x3d4b, .value=0xa8, .type=IO_READ},
        {.addr=0x3d4c, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x643b, .a=0x62, .x=0xf2, .y=0xac, .sp=0xd3, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x643b, .value=0xa8}, {.addr=0x643c, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x643d, .a=0x90, .x=0xf2, .y=0xac, .sp=0xd3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x643b, .value=0xa8}, {.addr=0x643c, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x643b, .value=0xa8, .type=IO_READ},
        {.addr=0x643c, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x07cf, .a=0xa0, .x=0x76, .y=0x24, .sp=0xaf, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x07cf, .value=0xa8}, {.addr=0x07d0, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x07d1, .a=0xe8, .x=0x76, .y=0x24, .sp=0xaf, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x07cf, .value=0xa8}, {.addr=0x07d0, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x07cf, .value=0xa8, .type=IO_READ},
        {.addr=0x07d0, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x1713, .a=0xb2, .x=0xff, .y=0xfe, .sp=0x99, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x1713, .value=0xa8}, {.addr=0x1714, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x1715, .a=0x16, .x=0xff, .y=0xfe, .sp=0x99, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x1713, .value=0xa8}, {.addr=0x1714, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x1713, .value=0xa8, .type=IO_READ},
        {.addr=0x1714, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x3ac3, .a=0xd1, .x=0xb0, .y=0xfc, .sp=0xb9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x3ac3, .value=0xa8}, {.addr=0x3ac4, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x3ac5, .a=0x61, .x=0xb0, .y=0xfc, .sp=0xb9, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3ac3, .value=0xa8}, {.addr=0x3ac4, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x3ac3, .value=0xa8, .type=IO_READ},
        {.addr=0x3ac4, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x8123, .a=0xef, .x=0xfd, .y=0x97, .sp=0xf2, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x8123, .value=0xa8}, {.addr=0x8124, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x8125, .a=0x0d, .x=0xfd, .y=0x97, .sp=0xf2, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8123, .value=0xa8}, {.addr=0x8124, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x8123, .value=0xa8, .type=IO_READ},
        {.addr=0x8124, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xb4b0, .a=0x02, .x=0x41, .y=0xde, .sp=0x5e, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xb4b0, .value=0xa8}, {.addr=0xb4b1, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xb4b2, .a=0x55, .x=0x41, .y=0xde, .sp=0x5e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb4b0, .value=0xa8}, {.addr=0xb4b1, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xb4b0, .value=0xa8, .type=IO_READ},
        {.addr=0xb4b1, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xb0b4, .a=0x6d, .x=0x2a, .y=0x68, .sp=0x20, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xb0b4, .value=0xa8}, {.addr=0xb0b5, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xb0b6, .a=0xc0, .x=0x2a, .y=0x68, .sp=0x20, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb0b4, .value=0xa8}, {.addr=0xb0b5, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xb0b4, .value=0xa8, .type=IO_READ},
        {.addr=0xb0b5, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x92b0, .a=0xab, .x=0xe6, .y=0x04, .sp=0xb4, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x92b0, .value=0xa8}, {.addr=0x92b1, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x92b2, .a=0xca, .x=0xe6, .y=0x04, .sp=0xb4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x92b0, .value=0xa8}, {.addr=0x92b1, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x92b0, .value=0xa8, .type=IO_READ},
        {.addr=0x92b1, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xb1c8, .a=0x52, .x=0x86, .y=0x76, .sp=0xa0, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xb1c8, .value=0xa8}, {.addr=0xb1c9, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xb1ca, .a=0x6e, .x=0x86, .y=0x76, .sp=0xa0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb1c8, .value=0xa8}, {.addr=0xb1c9, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xb1c8, .value=0xa8, .type=IO_READ},
        {.addr=0xb1c9, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xf79d, .a=0xe3, .x=0xb2, .y=0xd7, .sp=0x97, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xf79d, .value=0xa8}, {.addr=0xf79e, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xf79f, .a=0x13, .x=0xb2, .y=0xd7, .sp=0x97, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf79d, .value=0xa8}, {.addr=0xf79e, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xf79d, .value=0xa8, .type=IO_READ},
        {.addr=0xf79e, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xd7f5, .a=0x91, .x=0x44, .y=0x56, .sp=0xd0, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xd7f5, .value=0xa8}, {.addr=0xd7f6, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xd7f7, .a=0x59, .x=0x44, .y=0x56, .sp=0xd0, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd7f5, .value=0xa8}, {.addr=0xd7f6, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xd7f5, .value=0xa8, .type=IO_READ},
        {.addr=0xd7f6, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x7052, .a=0x79, .x=0xd7, .y=0x87, .sp=0x09, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x7052, .value=0xa8}, {.addr=0x7053, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7054, .a=0x72, .x=0xd7, .y=0x87, .sp=0x09, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7052, .value=0xa8}, {.addr=0x7053, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7052, .value=0xa8, .type=IO_READ},
        {.addr=0x7053, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xbe22, .a=0x9f, .x=0xee, .y=0xbc, .sp=0x11, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xbe22, .value=0xa8}, {.addr=0xbe23, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xbe24, .a=0xad, .x=0xee, .y=0xbc, .sp=0x11, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xbe22, .value=0xa8}, {.addr=0xbe23, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xbe22, .value=0xa8, .type=IO_READ},
        {.addr=0xbe23, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x6045, .a=0xf6, .x=0xc9, .y=0xf3, .sp=0xc2, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x6045, .value=0xa8}, {.addr=0x6046, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6047, .a=0xf9, .x=0xc9, .y=0xf3, .sp=0xc2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6045, .value=0xa8}, {.addr=0x6046, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6045, .value=0xa8, .type=IO_READ},
        {.addr=0x6046, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x28ff, .a=0xf6, .x=0x41, .y=0x49, .sp=0x5e, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x28ff, .value=0xa8}, {.addr=0x2900, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x2901, .a=0x9b, .x=0x41, .y=0x49, .sp=0x5e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x28ff, .value=0xa8}, {.addr=0x2900, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x28ff, .value=0xa8, .type=IO_READ},
        {.addr=0x2900, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x1f97, .a=0x56, .x=0x9e, .y=0x21, .sp=0x49, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x1f97, .value=0xa8}, {.addr=0x1f98, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x1f99, .a=0xe0, .x=0x9e, .y=0x21, .sp=0x49, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1f97, .value=0xa8}, {.addr=0x1f98, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x1f97, .value=0xa8, .type=IO_READ},
        {.addr=0x1f98, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x45bc, .a=0x19, .x=0x5d, .y=0x1a, .sp=0x11, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x45bc, .value=0xa8}, {.addr=0x45bd, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x45be, .a=0x4c, .x=0x5d, .y=0x1a, .sp=0x11, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x45bc, .value=0xa8}, {.addr=0x45bd, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x45bc, .value=0xa8, .type=IO_READ},
        {.addr=0x45bd, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xb85e, .a=0x42, .x=0x4a, .y=0x8d, .sp=0x10, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xb85e, .value=0xa8}, {.addr=0xb85f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb860, .a=0xa2, .x=0x4a, .y=0x8d, .sp=0x10, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xb85e, .value=0xa8}, {.addr=0xb85f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb85e, .value=0xa8, .type=IO_READ},
        {.addr=0xb85f, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x1e34, .a=0xc7, .x=0x7a, .y=0xfd, .sp=0x77, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x1e34, .value=0xa8}, {.addr=0x1e35, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x1e36, .a=0xdc, .x=0x7a, .y=0xfd, .sp=0x77, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x1e34, .value=0xa8}, {.addr=0x1e35, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x1e34, .value=0xa8, .type=IO_READ},
        {.addr=0x1e35, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xf7c9, .a=0xe5, .x=0x52, .y=0xf4, .sp=0xe6, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xf7c9, .value=0xa8}, {.addr=0xf7ca, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xf7cb, .a=0x4c, .x=0x52, .y=0xf4, .sp=0xe6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf7c9, .value=0xa8}, {.addr=0xf7ca, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xf7c9, .value=0xa8, .type=IO_READ},
        {.addr=0xf7ca, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x899e, .a=0xd8, .x=0x30, .y=0xb9, .sp=0x70, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x899e, .value=0xa8}, {.addr=0x899f, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x89a0, .a=0x2e, .x=0x30, .y=0xb9, .sp=0x70, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x899e, .value=0xa8}, {.addr=0x899f, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x899e, .value=0xa8, .type=IO_READ},
        {.addr=0x899f, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x821c, .a=0xa3, .x=0x07, .y=0xbd, .sp=0x2e, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x821c, .value=0xa8}, {.addr=0x821d, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x821e, .a=0x15, .x=0x07, .y=0xbd, .sp=0x2e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x821c, .value=0xa8}, {.addr=0x821d, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x821c, .value=0xa8, .type=IO_READ},
        {.addr=0x821d, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x6508, .a=0xa0, .x=0xee, .y=0x17, .sp=0x1f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x6508, .value=0xa8}, {.addr=0x6509, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x650a, .a=0x3e, .x=0xee, .y=0x17, .sp=0x1f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6508, .value=0xa8}, {.addr=0x6509, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x6508, .value=0xa8, .type=IO_READ},
        {.addr=0x6509, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x0ab7, .a=0x67, .x=0xf4, .y=0x66, .sp=0xdf, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0ab7, .value=0xa8}, {.addr=0x0ab8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0ab9, .a=0xc8, .x=0xf4, .y=0x66, .sp=0xdf, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0ab7, .value=0xa8}, {.addr=0x0ab8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0ab7, .value=0xa8, .type=IO_READ},
        {.addr=0x0ab8, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x6298, .a=0x91, .x=0x12, .y=0x69, .sp=0xdb, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x6298, .value=0xa8}, {.addr=0x6299, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x629a, .a=0xcf, .x=0x12, .y=0x69, .sp=0xdb, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x6298, .value=0xa8}, {.addr=0x6299, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x6298, .value=0xa8, .type=IO_READ},
        {.addr=0x6299, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xe992, .a=0x6e, .x=0xcd, .y=0xdb, .sp=0xee, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xe992, .value=0xa8}, {.addr=0xe993, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xe994, .a=0xec, .x=0xcd, .y=0xdb, .sp=0xee, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe992, .value=0xa8}, {.addr=0xe993, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xe992, .value=0xa8, .type=IO_READ},
        {.addr=0xe993, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x675a, .a=0xd6, .x=0x44, .y=0xb5, .sp=0x3c, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x675a, .value=0xa8}, {.addr=0x675b, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x675c, .a=0x37, .x=0x44, .y=0xb5, .sp=0x3c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x675a, .value=0xa8}, {.addr=0x675b, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x675a, .value=0xa8, .type=IO_READ},
        {.addr=0x675b, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xa697, .a=0x0a, .x=0x51, .y=0xb0, .sp=0xa3, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xa697, .value=0xa8}, {.addr=0xa698, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa699, .a=0x2d, .x=0x51, .y=0xb0, .sp=0xa3, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa697, .value=0xa8}, {.addr=0xa698, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa697, .value=0xa8, .type=IO_READ},
        {.addr=0xa698, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x4964, .a=0xf6, .x=0x75, .y=0xbe, .sp=0xab, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x4964, .value=0xa8}, {.addr=0x4965, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4966, .a=0x88, .x=0x75, .y=0xbe, .sp=0xab, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4964, .value=0xa8}, {.addr=0x4965, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4964, .value=0xa8, .type=IO_READ},
        {.addr=0x4965, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x2ab5, .a=0x2d, .x=0x37, .y=0x0e, .sp=0x65, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab5, .value=0xa8}, {.addr=0x2ab6, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x2ab7, .a=0x33, .x=0x37, .y=0x0e, .sp=0x65, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2ab5, .value=0xa8}, {.addr=0x2ab6, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x2ab5, .value=0xa8, .type=IO_READ},
        {.addr=0x2ab6, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x9c6d, .a=0x71, .x=0x13, .y=0x05, .sp=0x44, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x9c6d, .value=0xa8}, {.addr=0x9c6e, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x9c6f, .a=0x05, .x=0x13, .y=0x05, .sp=0x44, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9c6d, .value=0xa8}, {.addr=0x9c6e, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x9c6d, .value=0xa8, .type=IO_READ},
        {.addr=0x9c6e, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A8, _A8_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xaf07, .a=0x95, .x=0xa9, .y=0x23, .sp=0xad, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xaf07, .value=0xa8}, {.addr=0xaf08, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xaf09, .a=0x3f, .x=0xa9, .y=0x23, .sp=0xad, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xaf07, .value=0xa8}, {.addr=0xaf08, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xaf07, .value=0xa8, .type=IO_READ},
        {.addr=0xaf08, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A8 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
