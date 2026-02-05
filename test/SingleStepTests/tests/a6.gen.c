#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_A6, _A6_0000) {
    const struct CPU_State initial_cpu = {.pc=0x21be, .a=0x1e, .x=0x23, .y=0x05, .sp=0x5c, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0xbd}, {.addr=0x21be, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x21bf, .a=0x60, .x=0x23, .y=0x05, .sp=0x5c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0xbd}, {.addr=0x21be, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x21be, .value=0xa6, .type=IO_READ},
        {.addr=0x21bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0001) {
    const struct CPU_State initial_cpu = {.pc=0x2dc1, .a=0x37, .x=0x6e, .y=0xf7, .sp=0xf6, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xa7}, {.addr=0x2dc1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2dc2, .a=0x90, .x=0x6e, .y=0xf7, .sp=0xf6, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xa7}, {.addr=0x2dc1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2dc1, .value=0xa6, .type=IO_READ},
        {.addr=0x2dc2, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0002) {
    const struct CPU_State initial_cpu = {.pc=0xdf0e, .a=0xa0, .x=0x55, .y=0x1b, .sp=0x4d, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xeb}, {.addr=0xdf0e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdf0f, .a=0xb4, .x=0x55, .y=0x1b, .sp=0x4d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xeb}, {.addr=0xdf0e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdf0e, .value=0xa6, .type=IO_READ},
        {.addr=0xdf0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0003) {
    const struct CPU_State initial_cpu = {.pc=0xac68, .a=0xd1, .x=0x77, .y=0xea, .sp=0x23, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0xc3}, {.addr=0xac68, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xac69, .a=0x0e, .x=0x77, .y=0xea, .sp=0x23, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0xc3}, {.addr=0xac68, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xac68, .value=0xa6, .type=IO_READ},
        {.addr=0xac69, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0004) {
    const struct CPU_State initial_cpu = {.pc=0x8c0c, .a=0x76, .x=0x16, .y=0x06, .sp=0x54, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0x1e}, {.addr=0x8c0c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8c0d, .a=0x57, .x=0x16, .y=0x06, .sp=0x54, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0x1e}, {.addr=0x8c0c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8c0c, .value=0xa6, .type=IO_READ},
        {.addr=0x8c0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0005) {
    const struct CPU_State initial_cpu = {.pc=0xa739, .a=0x1b, .x=0xb7, .y=0xe9, .sp=0xe3, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0xdc}, {.addr=0xa739, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa73a, .a=0x3e, .x=0xb7, .y=0xe9, .sp=0xe3, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0xdc}, {.addr=0xa739, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa739, .value=0xa6, .type=IO_READ},
        {.addr=0xa73a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0006) {
    const struct CPU_State initial_cpu = {.pc=0x3ee4, .a=0x84, .x=0x65, .y=0x86, .sp=0x33, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0x03}, {.addr=0x3ee4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3ee5, .a=0x80, .x=0x65, .y=0x86, .sp=0x33, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0x03}, {.addr=0x3ee4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3ee4, .value=0xa6, .type=IO_READ},
        {.addr=0x3ee5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0007) {
    const struct CPU_State initial_cpu = {.pc=0xd38f, .a=0x68, .x=0xc9, .y=0x52, .sp=0xd2, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x4b}, {.addr=0xd38f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd390, .a=0x1c, .x=0xc9, .y=0x52, .sp=0xd2, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x4b}, {.addr=0xd38f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd38f, .value=0xa6, .type=IO_READ},
        {.addr=0xd390, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0008) {
    const struct CPU_State initial_cpu = {.pc=0x297a, .a=0x6b, .x=0x9c, .y=0x94, .sp=0x08, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x33}, {.addr=0x297a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x297b, .a=0x38, .x=0x9c, .y=0x94, .sp=0x08, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x33}, {.addr=0x297a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x297a, .value=0xa6, .type=IO_READ},
        {.addr=0x297b, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0009) {
    const struct CPU_State initial_cpu = {.pc=0x4957, .a=0x03, .x=0x95, .y=0xd5, .sp=0x3d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0xe2}, {.addr=0x4957, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4958, .a=0x21, .x=0x95, .y=0xd5, .sp=0x3d, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0xe2}, {.addr=0x4957, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4957, .value=0xa6, .type=IO_READ},
        {.addr=0x4958, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_000A) {
    const struct CPU_State initial_cpu = {.pc=0x99b9, .a=0xb6, .x=0x5f, .y=0x21, .sp=0xe5, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x35}, {.addr=0x99b9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x99ba, .a=0x81, .x=0x5f, .y=0x21, .sp=0xe5, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x35}, {.addr=0x99b9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x99b9, .value=0xa6, .type=IO_READ},
        {.addr=0x99ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_000B) {
    const struct CPU_State initial_cpu = {.pc=0xd44d, .a=0x33, .x=0x56, .y=0xa1, .sp=0xbb, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x12}, {.addr=0xd44d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd44e, .a=0x21, .x=0x56, .y=0xa1, .sp=0xbb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x12}, {.addr=0xd44d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd44d, .value=0xa6, .type=IO_READ},
        {.addr=0xd44e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_000C) {
    const struct CPU_State initial_cpu = {.pc=0x13a6, .a=0x93, .x=0x0c, .y=0x33, .sp=0x83, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x72}, {.addr=0x13a6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x13a7, .a=0x20, .x=0x0c, .y=0x33, .sp=0x83, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x72}, {.addr=0x13a6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x13a6, .value=0xa6, .type=IO_READ},
        {.addr=0x13a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_000D) {
    const struct CPU_State initial_cpu = {.pc=0x51a7, .a=0x85, .x=0x10, .y=0x30, .sp=0x84, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x09}, {.addr=0x51a7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x51a8, .a=0x7b, .x=0x10, .y=0x30, .sp=0x84, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x09}, {.addr=0x51a7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x51a7, .value=0xa6, .type=IO_READ},
        {.addr=0x51a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_000E) {
    const struct CPU_State initial_cpu = {.pc=0x0bb0, .a=0x12, .x=0x39, .y=0xdd, .sp=0x6e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xa7}, {.addr=0x0bb0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0bb1, .a=0x6b, .x=0x39, .y=0xdd, .sp=0x6e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xa7}, {.addr=0x0bb0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0bb0, .value=0xa6, .type=IO_READ},
        {.addr=0x0bb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_000F) {
    const struct CPU_State initial_cpu = {.pc=0x4e8e, .a=0x71, .x=0x7c, .y=0x66, .sp=0x6f, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x99}, {.addr=0x4e8e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4e8f, .a=0xd7, .x=0x7c, .y=0x66, .sp=0x6f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x99}, {.addr=0x4e8e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4e8e, .value=0xa6, .type=IO_READ},
        {.addr=0x4e8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0010) {
    const struct CPU_State initial_cpu = {.pc=0x1bbb, .a=0x34, .x=0x31, .y=0xa1, .sp=0xc1, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x28}, {.addr=0x1bbb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1bbc, .a=0x0b, .x=0x31, .y=0xa1, .sp=0xc1, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x28}, {.addr=0x1bbb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1bbb, .value=0xa6, .type=IO_READ},
        {.addr=0x1bbc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0011) {
    const struct CPU_State initial_cpu = {.pc=0x64fd, .a=0x68, .x=0xfa, .y=0x2b, .sp=0xfe, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x48}, {.addr=0x64fd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x64fe, .a=0x1f, .x=0xfa, .y=0x2b, .sp=0xfe, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x48}, {.addr=0x64fd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x64fd, .value=0xa6, .type=IO_READ},
        {.addr=0x64fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0012) {
    const struct CPU_State initial_cpu = {.pc=0x6c9f, .a=0x20, .x=0x13, .y=0xae, .sp=0xe1, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xb8}, {.addr=0x6c9f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6ca0, .a=0x68, .x=0x13, .y=0xae, .sp=0xe1, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xb8}, {.addr=0x6c9f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6c9f, .value=0xa6, .type=IO_READ},
        {.addr=0x6ca0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0013) {
    const struct CPU_State initial_cpu = {.pc=0xd6e1, .a=0x1c, .x=0x18, .y=0x13, .sp=0x63, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x31}, {.addr=0xd6e1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd6e2, .a=0xeb, .x=0x18, .y=0x13, .sp=0x63, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x31}, {.addr=0xd6e1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd6e1, .value=0xa6, .type=IO_READ},
        {.addr=0xd6e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0014) {
    const struct CPU_State initial_cpu = {.pc=0x495d, .a=0x86, .x=0xe1, .y=0x6e, .sp=0xda, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0xe2}, {.addr=0x495d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x495e, .a=0xa3, .x=0xe1, .y=0x6e, .sp=0xda, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xe2}, {.addr=0x495d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x495d, .value=0xa6, .type=IO_READ},
        {.addr=0x495e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0015) {
    const struct CPU_State initial_cpu = {.pc=0x6cdd, .a=0x0c, .x=0xfd, .y=0x74, .sp=0x4a, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x12}, {.addr=0x6cdd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6cde, .a=0xfa, .x=0xfd, .y=0x74, .sp=0x4a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x12}, {.addr=0x6cdd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6cdd, .value=0xa6, .type=IO_READ},
        {.addr=0x6cde, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0016) {
    const struct CPU_State initial_cpu = {.pc=0x0a14, .a=0xd4, .x=0x5a, .y=0x23, .sp=0x44, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xed}, {.addr=0x0a14, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0a15, .a=0xe7, .x=0x5a, .y=0x23, .sp=0x44, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xed}, {.addr=0x0a14, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0a14, .value=0xa6, .type=IO_READ},
        {.addr=0x0a15, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0017) {
    const struct CPU_State initial_cpu = {.pc=0xb491, .a=0x1d, .x=0x97, .y=0x49, .sp=0x67, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x18}, {.addr=0xb491, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb492, .a=0x04, .x=0x97, .y=0x49, .sp=0x67, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x18}, {.addr=0xb491, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb491, .value=0xa6, .type=IO_READ},
        {.addr=0xb492, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0018) {
    const struct CPU_State initial_cpu = {.pc=0xcad8, .a=0x94, .x=0x9e, .y=0x21, .sp=0xa9, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x58}, {.addr=0xcad8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcad9, .a=0x3c, .x=0x9e, .y=0x21, .sp=0xa9, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x58}, {.addr=0xcad8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcad8, .value=0xa6, .type=IO_READ},
        {.addr=0xcad9, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0019) {
    const struct CPU_State initial_cpu = {.pc=0xe090, .a=0x25, .x=0x78, .y=0x46, .sp=0xc2, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0xe4}, {.addr=0xe090, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe091, .a=0x40, .x=0x78, .y=0x46, .sp=0xc2, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0xe4}, {.addr=0xe090, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe090, .value=0xa6, .type=IO_READ},
        {.addr=0xe091, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_001A) {
    const struct CPU_State initial_cpu = {.pc=0x01c2, .a=0xa1, .x=0x57, .y=0x29, .sp=0x03, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x64}, {.addr=0x01c2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x01c3, .a=0x3c, .x=0x57, .y=0x29, .sp=0x03, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x64}, {.addr=0x01c2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x01c2, .value=0xa6, .type=IO_READ},
        {.addr=0x01c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_001B) {
    const struct CPU_State initial_cpu = {.pc=0x4645, .a=0x4d, .x=0x43, .y=0x30, .sp=0x5e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x16}, {.addr=0x4645, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4646, .a=0x37, .x=0x43, .y=0x30, .sp=0x5e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x16}, {.addr=0x4645, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4645, .value=0xa6, .type=IO_READ},
        {.addr=0x4646, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_001C) {
    const struct CPU_State initial_cpu = {.pc=0x9ee1, .a=0x33, .x=0xa2, .y=0x0b, .sp=0xce, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xa2}, {.addr=0x9ee1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9ee2, .a=0x91, .x=0xa2, .y=0x0b, .sp=0xce, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xa2}, {.addr=0x9ee1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9ee1, .value=0xa6, .type=IO_READ},
        {.addr=0x9ee2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_001D) {
    const struct CPU_State initial_cpu = {.pc=0x414d, .a=0x9a, .x=0x87, .y=0x22, .sp=0xa8, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xe6}, {.addr=0x414d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x414e, .a=0xb3, .x=0x87, .y=0x22, .sp=0xa8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xe6}, {.addr=0x414d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x414d, .value=0xa6, .type=IO_READ},
        {.addr=0x414e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_001E) {
    const struct CPU_State initial_cpu = {.pc=0xade2, .a=0x15, .x=0x5b, .y=0x6f, .sp=0x12, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0xd8}, {.addr=0xade2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xade3, .a=0x3c, .x=0x5b, .y=0x6f, .sp=0x12, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0xd8}, {.addr=0xade2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xade2, .value=0xa6, .type=IO_READ},
        {.addr=0xade3, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_001F) {
    const struct CPU_State initial_cpu = {.pc=0x9352, .a=0xba, .x=0x67, .y=0x31, .sp=0x51, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x73}, {.addr=0x9352, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9353, .a=0x46, .x=0x67, .y=0x31, .sp=0x51, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x73}, {.addr=0x9352, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9352, .value=0xa6, .type=IO_READ},
        {.addr=0x9353, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0020) {
    const struct CPU_State initial_cpu = {.pc=0xf141, .a=0xf5, .x=0xad, .y=0x14, .sp=0xd4, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0xc4}, {.addr=0xf141, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf142, .a=0x30, .x=0xad, .y=0x14, .sp=0xd4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xc4}, {.addr=0xf141, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf141, .value=0xa6, .type=IO_READ},
        {.addr=0xf142, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0021) {
    const struct CPU_State initial_cpu = {.pc=0xae3f, .a=0xaf, .x=0x1b, .y=0x3e, .sp=0xe2, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x28}, {.addr=0xae3f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xae40, .a=0x86, .x=0x1b, .y=0x3e, .sp=0xe2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x28}, {.addr=0xae3f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xae3f, .value=0xa6, .type=IO_READ},
        {.addr=0xae40, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0022) {
    const struct CPU_State initial_cpu = {.pc=0xb37f, .a=0x4b, .x=0x9c, .y=0x84, .sp=0xd4, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xa1}, {.addr=0xb37f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb380, .a=0xa9, .x=0x9c, .y=0x84, .sp=0xd4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xa1}, {.addr=0xb37f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb37f, .value=0xa6, .type=IO_READ},
        {.addr=0xb380, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0023) {
    const struct CPU_State initial_cpu = {.pc=0x7e77, .a=0x5e, .x=0xd3, .y=0xac, .sp=0xe4, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x74}, {.addr=0x7e77, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7e78, .a=0xe9, .x=0xd3, .y=0xac, .sp=0xe4, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x74}, {.addr=0x7e77, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7e77, .value=0xa6, .type=IO_READ},
        {.addr=0x7e78, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0024) {
    const struct CPU_State initial_cpu = {.pc=0x25ae, .a=0xfc, .x=0xc9, .y=0x7f, .sp=0x75, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xbd}, {.addr=0x25ae, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x25af, .a=0x3e, .x=0xc9, .y=0x7f, .sp=0x75, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xbd}, {.addr=0x25ae, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x25ae, .value=0xa6, .type=IO_READ},
        {.addr=0x25af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0025) {
    const struct CPU_State initial_cpu = {.pc=0x44af, .a=0xf8, .x=0x40, .y=0x71, .sp=0x35, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0xe9}, {.addr=0x44af, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x44b0, .a=0x0e, .x=0x40, .y=0x71, .sp=0x35, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0xe9}, {.addr=0x44af, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x44af, .value=0xa6, .type=IO_READ},
        {.addr=0x44b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0026) {
    const struct CPU_State initial_cpu = {.pc=0x2fb9, .a=0xba, .x=0xf5, .y=0x20, .sp=0x3d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xd9}, {.addr=0x2fb9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2fba, .a=0xe1, .x=0xf5, .y=0x20, .sp=0x3d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xd9}, {.addr=0x2fb9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2fb9, .value=0xa6, .type=IO_READ},
        {.addr=0x2fba, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0027) {
    const struct CPU_State initial_cpu = {.pc=0xcf81, .a=0x8e, .x=0x4c, .y=0xd4, .sp=0xd3, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0xf1}, {.addr=0xcf81, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcf82, .a=0x9d, .x=0x4c, .y=0xd4, .sp=0xd3, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xf1}, {.addr=0xcf81, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcf81, .value=0xa6, .type=IO_READ},
        {.addr=0xcf82, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0028) {
    const struct CPU_State initial_cpu = {.pc=0xbe6e, .a=0xab, .x=0xd9, .y=0x7e, .sp=0xff, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0xd2}, {.addr=0xbe6e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbe6f, .a=0xd8, .x=0xd9, .y=0x7e, .sp=0xff, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xd2}, {.addr=0xbe6e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbe6e, .value=0xa6, .type=IO_READ},
        {.addr=0xbe6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0029) {
    const struct CPU_State initial_cpu = {.pc=0x14b0, .a=0x3d, .x=0xbf, .y=0x18, .sp=0xe6, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x9b}, {.addr=0x14b0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x14b1, .a=0xa1, .x=0xbf, .y=0x18, .sp=0xe6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x9b}, {.addr=0x14b0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x14b0, .value=0xa6, .type=IO_READ},
        {.addr=0x14b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_002A) {
    const struct CPU_State initial_cpu = {.pc=0x1b83, .a=0x0a, .x=0xc9, .y=0xea, .sp=0x82, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x58}, {.addr=0x1b83, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1b84, .a=0xb2, .x=0xc9, .y=0xea, .sp=0x82, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x58}, {.addr=0x1b83, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1b83, .value=0xa6, .type=IO_READ},
        {.addr=0x1b84, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_002B) {
    const struct CPU_State initial_cpu = {.pc=0x9841, .a=0x6c, .x=0x21, .y=0xfe, .sp=0x4f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xeb}, {.addr=0x9841, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9842, .a=0x80, .x=0x21, .y=0xfe, .sp=0x4f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xeb}, {.addr=0x9841, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9841, .value=0xa6, .type=IO_READ},
        {.addr=0x9842, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_002C) {
    const struct CPU_State initial_cpu = {.pc=0x4803, .a=0x52, .x=0x68, .y=0xb5, .sp=0x88, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xbc}, {.addr=0x4803, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4804, .a=0x95, .x=0x68, .y=0xb5, .sp=0x88, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xbc}, {.addr=0x4803, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4803, .value=0xa6, .type=IO_READ},
        {.addr=0x4804, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_002D) {
    const struct CPU_State initial_cpu = {.pc=0xd07d, .a=0x7a, .x=0xb3, .y=0x8b, .sp=0x7e, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0xa9}, {.addr=0xd07d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd07e, .a=0xd1, .x=0xb3, .y=0x8b, .sp=0x7e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0xa9}, {.addr=0xd07d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd07d, .value=0xa6, .type=IO_READ},
        {.addr=0xd07e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_002E) {
    const struct CPU_State initial_cpu = {.pc=0x6022, .a=0x9b, .x=0x8b, .y=0x90, .sp=0xc6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x7a}, {.addr=0x6022, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6023, .a=0x20, .x=0x8b, .y=0x90, .sp=0xc6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x7a}, {.addr=0x6022, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6022, .value=0xa6, .type=IO_READ},
        {.addr=0x6023, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_002F) {
    const struct CPU_State initial_cpu = {.pc=0xc61a, .a=0xdb, .x=0x56, .y=0x65, .sp=0x06, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x65}, {.addr=0xc61a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc61b, .a=0x76, .x=0x56, .y=0x65, .sp=0x06, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x65}, {.addr=0xc61a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc61a, .value=0xa6, .type=IO_READ},
        {.addr=0xc61b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0030) {
    const struct CPU_State initial_cpu = {.pc=0x4050, .a=0x8b, .x=0x38, .y=0xa4, .sp=0x3a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0xf2}, {.addr=0x4050, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4051, .a=0x99, .x=0x38, .y=0xa4, .sp=0x3a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0xf2}, {.addr=0x4050, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4050, .value=0xa6, .type=IO_READ},
        {.addr=0x4051, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0031) {
    const struct CPU_State initial_cpu = {.pc=0x296f, .a=0x9d, .x=0x46, .y=0xf3, .sp=0x21, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x07}, {.addr=0x296f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2970, .a=0x96, .x=0x46, .y=0xf3, .sp=0x21, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x07}, {.addr=0x296f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x296f, .value=0xa6, .type=IO_READ},
        {.addr=0x2970, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0032) {
    const struct CPU_State initial_cpu = {.pc=0xf553, .a=0xcf, .x=0x09, .y=0x18, .sp=0xbd, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xc4}, {.addr=0xf553, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf554, .a=0x0b, .x=0x09, .y=0x18, .sp=0xbd, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xc4}, {.addr=0xf553, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf553, .value=0xa6, .type=IO_READ},
        {.addr=0xf554, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0033) {
    const struct CPU_State initial_cpu = {.pc=0x75c5, .a=0x6f, .x=0xaf, .y=0xa5, .sp=0x00, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x81}, {.addr=0x75c5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x75c6, .a=0xee, .x=0xaf, .y=0xa5, .sp=0x00, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x81}, {.addr=0x75c5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x75c5, .value=0xa6, .type=IO_READ},
        {.addr=0x75c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0034) {
    const struct CPU_State initial_cpu = {.pc=0x9be6, .a=0x88, .x=0x76, .y=0x57, .sp=0x7f, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xfa}, {.addr=0x9be6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9be7, .a=0x8e, .x=0x76, .y=0x57, .sp=0x7f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xfa}, {.addr=0x9be6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9be6, .value=0xa6, .type=IO_READ},
        {.addr=0x9be7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0035) {
    const struct CPU_State initial_cpu = {.pc=0x2952, .a=0x75, .x=0x9d, .y=0xa8, .sp=0x17, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x30}, {.addr=0x2952, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2953, .a=0x45, .x=0x9d, .y=0xa8, .sp=0x17, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x30}, {.addr=0x2952, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2952, .value=0xa6, .type=IO_READ},
        {.addr=0x2953, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0036) {
    const struct CPU_State initial_cpu = {.pc=0x1166, .a=0xa1, .x=0xd9, .y=0x9d, .sp=0xd0, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x96}, {.addr=0x1166, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1167, .a=0x0b, .x=0xd9, .y=0x9d, .sp=0xd0, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x96}, {.addr=0x1166, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1166, .value=0xa6, .type=IO_READ},
        {.addr=0x1167, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0037) {
    const struct CPU_State initial_cpu = {.pc=0xb752, .a=0x4f, .x=0xd7, .y=0xa7, .sp=0x3b, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xec}, {.addr=0xb752, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb753, .a=0x63, .x=0xd7, .y=0xa7, .sp=0x3b, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xec}, {.addr=0xb752, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb752, .value=0xa6, .type=IO_READ},
        {.addr=0xb753, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0038) {
    const struct CPU_State initial_cpu = {.pc=0x8fad, .a=0x25, .x=0xec, .y=0x41, .sp=0xe5, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0xb1}, {.addr=0x8fad, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8fae, .a=0x74, .x=0xec, .y=0x41, .sp=0xe5, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0xb1}, {.addr=0x8fad, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8fad, .value=0xa6, .type=IO_READ},
        {.addr=0x8fae, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0039) {
    const struct CPU_State initial_cpu = {.pc=0xe079, .a=0x77, .x=0xad, .y=0x50, .sp=0xd3, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x72}, {.addr=0xe079, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe07a, .a=0x05, .x=0xad, .y=0x50, .sp=0xd3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x72}, {.addr=0xe079, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe079, .value=0xa6, .type=IO_READ},
        {.addr=0xe07a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_003A) {
    const struct CPU_State initial_cpu = {.pc=0x7792, .a=0x77, .x=0x62, .y=0xd5, .sp=0xa0, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x06}, {.addr=0x7792, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7793, .a=0x70, .x=0x62, .y=0xd5, .sp=0xa0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x06}, {.addr=0x7792, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7792, .value=0xa6, .type=IO_READ},
        {.addr=0x7793, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_003B) {
    const struct CPU_State initial_cpu = {.pc=0x159f, .a=0x94, .x=0x1b, .y=0xad, .sp=0x70, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x1a}, {.addr=0x159f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x15a0, .a=0x79, .x=0x1b, .y=0xad, .sp=0x70, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x1a}, {.addr=0x159f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x159f, .value=0xa6, .type=IO_READ},
        {.addr=0x15a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_003C) {
    const struct CPU_State initial_cpu = {.pc=0xb1fc, .a=0x67, .x=0xd7, .y=0x4f, .sp=0x0c, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x3b}, {.addr=0xb1fc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb1fd, .a=0x2b, .x=0xd7, .y=0x4f, .sp=0x0c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x3b}, {.addr=0xb1fc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb1fc, .value=0xa6, .type=IO_READ},
        {.addr=0xb1fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_003D) {
    const struct CPU_State initial_cpu = {.pc=0x28e0, .a=0x90, .x=0x00, .y=0x42, .sp=0xe7, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x23}, {.addr=0x28e0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x28e1, .a=0x6d, .x=0x00, .y=0x42, .sp=0xe7, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x23}, {.addr=0x28e0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x28e0, .value=0xa6, .type=IO_READ},
        {.addr=0x28e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_003E) {
    const struct CPU_State initial_cpu = {.pc=0xeb29, .a=0x7c, .x=0x5a, .y=0xf9, .sp=0xd7, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0xa0}, {.addr=0xeb29, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xeb2a, .a=0xdc, .x=0x5a, .y=0xf9, .sp=0xd7, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0xa0}, {.addr=0xeb29, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xeb29, .value=0xa6, .type=IO_READ},
        {.addr=0xeb2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_003F) {
    const struct CPU_State initial_cpu = {.pc=0xcd26, .a=0xb5, .x=0x65, .y=0x09, .sp=0x0a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0x9e}, {.addr=0xcd26, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcd27, .a=0x16, .x=0x65, .y=0x09, .sp=0x0a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0x9e}, {.addr=0xcd26, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcd26, .value=0xa6, .type=IO_READ},
        {.addr=0xcd27, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0040) {
    const struct CPU_State initial_cpu = {.pc=0x1126, .a=0x77, .x=0x1e, .y=0x7a, .sp=0x8b, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x54}, {.addr=0x1126, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1127, .a=0x23, .x=0x1e, .y=0x7a, .sp=0x8b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x54}, {.addr=0x1126, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1126, .value=0xa6, .type=IO_READ},
        {.addr=0x1127, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0042) {
    const struct CPU_State initial_cpu = {.pc=0xa6b0, .a=0x83, .x=0x2f, .y=0x79, .sp=0x61, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x99}, {.addr=0xa6b0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa6b1, .a=0xe9, .x=0x2f, .y=0x79, .sp=0x61, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x99}, {.addr=0xa6b0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa6b0, .value=0xa6, .type=IO_READ},
        {.addr=0xa6b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0043) {
    const struct CPU_State initial_cpu = {.pc=0x02ca, .a=0xd3, .x=0x9d, .y=0xea, .sp=0x01, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x6b}, {.addr=0x02ca, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x02cb, .a=0x68, .x=0x9d, .y=0xea, .sp=0x01, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x6b}, {.addr=0x02ca, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x02ca, .value=0xa6, .type=IO_READ},
        {.addr=0x02cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0044) {
    const struct CPU_State initial_cpu = {.pc=0x8534, .a=0x5d, .x=0x08, .y=0x5c, .sp=0x43, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xa4}, {.addr=0x8534, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8535, .a=0xb9, .x=0x08, .y=0x5c, .sp=0x43, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xa4}, {.addr=0x8534, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8534, .value=0xa6, .type=IO_READ},
        {.addr=0x8535, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0045) {
    const struct CPU_State initial_cpu = {.pc=0x2486, .a=0x73, .x=0x9e, .y=0x86, .sp=0x87, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0x0a}, {.addr=0x2486, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2487, .a=0x69, .x=0x9e, .y=0x86, .sp=0x87, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0x0a}, {.addr=0x2486, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2486, .value=0xa6, .type=IO_READ},
        {.addr=0x2487, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0047) {
    const struct CPU_State initial_cpu = {.pc=0x056d, .a=0x10, .x=0xde, .y=0xa2, .sp=0x24, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0x5b}, {.addr=0x056d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x056e, .a=0xb4, .x=0xde, .y=0xa2, .sp=0x24, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0x5b}, {.addr=0x056d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x056d, .value=0xa6, .type=IO_READ},
        {.addr=0x056e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00de, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0048) {
    const struct CPU_State initial_cpu = {.pc=0x0db0, .a=0xa2, .x=0x78, .y=0x06, .sp=0x94, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x8c}, {.addr=0x0db0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0db1, .a=0x15, .x=0x78, .y=0x06, .sp=0x94, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x8c}, {.addr=0x0db0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0db0, .value=0xa6, .type=IO_READ},
        {.addr=0x0db1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0049) {
    const struct CPU_State initial_cpu = {.pc=0x7816, .a=0x22, .x=0x26, .y=0x9c, .sp=0x53, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0x29}, {.addr=0x7816, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7817, .a=0xf8, .x=0x26, .y=0x9c, .sp=0x53, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0x29}, {.addr=0x7816, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7816, .value=0xa6, .type=IO_READ},
        {.addr=0x7817, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_004A) {
    const struct CPU_State initial_cpu = {.pc=0xb716, .a=0x95, .x=0xd5, .y=0x1d, .sp=0xe8, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x41}, {.addr=0xb716, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb717, .a=0x53, .x=0xd5, .y=0x1d, .sp=0xe8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x41}, {.addr=0xb716, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb716, .value=0xa6, .type=IO_READ},
        {.addr=0xb717, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_004B) {
    const struct CPU_State initial_cpu = {.pc=0xcaf7, .a=0x9f, .x=0xa9, .y=0x79, .sp=0x20, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xdb}, {.addr=0xcaf7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcaf8, .a=0xc4, .x=0xa9, .y=0x79, .sp=0x20, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xdb}, {.addr=0xcaf7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcaf7, .value=0xa6, .type=IO_READ},
        {.addr=0xcaf8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_004C) {
    const struct CPU_State initial_cpu = {.pc=0xfa6f, .a=0x73, .x=0x21, .y=0x71, .sp=0xcf, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x9a}, {.addr=0xfa6f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfa70, .a=0xd9, .x=0x21, .y=0x71, .sp=0xcf, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x9a}, {.addr=0xfa6f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfa6f, .value=0xa6, .type=IO_READ},
        {.addr=0xfa70, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_004D) {
    const struct CPU_State initial_cpu = {.pc=0x31a7, .a=0x2d, .x=0xa0, .y=0x67, .sp=0x7e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0x38}, {.addr=0x31a7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x31a8, .a=0xf5, .x=0xa0, .y=0x67, .sp=0x7e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0x38}, {.addr=0x31a7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x31a7, .value=0xa6, .type=IO_READ},
        {.addr=0x31a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_004E) {
    const struct CPU_State initial_cpu = {.pc=0xf2d1, .a=0xf5, .x=0x0c, .y=0xda, .sp=0xeb, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x80}, {.addr=0xf2d1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf2d2, .a=0x75, .x=0x0c, .y=0xda, .sp=0xeb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x80}, {.addr=0xf2d1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf2d1, .value=0xa6, .type=IO_READ},
        {.addr=0xf2d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_004F) {
    const struct CPU_State initial_cpu = {.pc=0x6027, .a=0x6f, .x=0x7f, .y=0x84, .sp=0xbd, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0xc7}, {.addr=0x6027, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6028, .a=0xa7, .x=0x7f, .y=0x84, .sp=0xbd, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xc7}, {.addr=0x6027, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6027, .value=0xa6, .type=IO_READ},
        {.addr=0x6028, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0050) {
    const struct CPU_State initial_cpu = {.pc=0x324b, .a=0x5e, .x=0x68, .y=0x13, .sp=0x77, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0xc8}, {.addr=0x324b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x324c, .a=0x95, .x=0x68, .y=0x13, .sp=0x77, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0xc8}, {.addr=0x324b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x324b, .value=0xa6, .type=IO_READ},
        {.addr=0x324c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0051) {
    const struct CPU_State initial_cpu = {.pc=0x6ddd, .a=0x84, .x=0xc3, .y=0xb4, .sp=0xad, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xe3}, {.addr=0x6ddd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6dde, .a=0xa1, .x=0xc3, .y=0xb4, .sp=0xad, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xe3}, {.addr=0x6ddd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6ddd, .value=0xa6, .type=IO_READ},
        {.addr=0x6dde, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0052) {
    const struct CPU_State initial_cpu = {.pc=0x00b7, .a=0x8a, .x=0x64, .y=0xc3, .sp=0xf9, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0xa6}, {.addr=0x0164, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x00b8, .a=0x8d, .x=0x64, .y=0xc3, .sp=0xf9, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0xa6}, {.addr=0x0164, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x00b7, .value=0xa6, .type=IO_READ},
        {.addr=0x00b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0053) {
    const struct CPU_State initial_cpu = {.pc=0xcc5e, .a=0xbe, .x=0xcd, .y=0x0a, .sp=0x5a, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x1d}, {.addr=0xcc5e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcc5f, .a=0xa1, .x=0xcd, .y=0x0a, .sp=0x5a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x1d}, {.addr=0xcc5e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcc5e, .value=0xa6, .type=IO_READ},
        {.addr=0xcc5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0054) {
    const struct CPU_State initial_cpu = {.pc=0xf7fc, .a=0x4a, .x=0xab, .y=0xe9, .sp=0xd9, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0xba}, {.addr=0xf7fc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf7fd, .a=0x90, .x=0xab, .y=0xe9, .sp=0xd9, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xba}, {.addr=0xf7fc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf7fc, .value=0xa6, .type=IO_READ},
        {.addr=0xf7fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0055) {
    const struct CPU_State initial_cpu = {.pc=0xc9c6, .a=0xde, .x=0x33, .y=0x1b, .sp=0xad, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x99}, {.addr=0xc9c6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc9c7, .a=0x45, .x=0x33, .y=0x1b, .sp=0xad, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x99}, {.addr=0xc9c6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc9c6, .value=0xa6, .type=IO_READ},
        {.addr=0xc9c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0056) {
    const struct CPU_State initial_cpu = {.pc=0x224a, .a=0x38, .x=0xb0, .y=0x6e, .sp=0x04, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x48}, {.addr=0x224a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x224b, .a=0xef, .x=0xb0, .y=0x6e, .sp=0x04, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x48}, {.addr=0x224a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x224a, .value=0xa6, .type=IO_READ},
        {.addr=0x224b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0057) {
    const struct CPU_State initial_cpu = {.pc=0x9c05, .a=0xbb, .x=0x50, .y=0xe9, .sp=0x36, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x6c}, {.addr=0x9c05, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9c06, .a=0x4e, .x=0x50, .y=0xe9, .sp=0x36, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x6c}, {.addr=0x9c05, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9c05, .value=0xa6, .type=IO_READ},
        {.addr=0x9c06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0058) {
    const struct CPU_State initial_cpu = {.pc=0xf122, .a=0x76, .x=0xeb, .y=0x64, .sp=0xe3, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x3d}, {.addr=0xf122, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf123, .a=0x39, .x=0xeb, .y=0x64, .sp=0xe3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x3d}, {.addr=0xf122, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf122, .value=0xa6, .type=IO_READ},
        {.addr=0xf123, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0059) {
    const struct CPU_State initial_cpu = {.pc=0x7167, .a=0x2b, .x=0x34, .y=0x73, .sp=0x9a, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0x6f}, {.addr=0x7167, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7168, .a=0xbc, .x=0x34, .y=0x73, .sp=0x9a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0x6f}, {.addr=0x7167, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7167, .value=0xa6, .type=IO_READ},
        {.addr=0x7168, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_005A) {
    const struct CPU_State initial_cpu = {.pc=0xa1b6, .a=0x72, .x=0x89, .y=0x44, .sp=0x5d, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0xf8}, {.addr=0xa1b6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa1b7, .a=0x79, .x=0x89, .y=0x44, .sp=0x5d, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xf8}, {.addr=0xa1b6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa1b6, .value=0xa6, .type=IO_READ},
        {.addr=0xa1b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_005B) {
    const struct CPU_State initial_cpu = {.pc=0x3755, .a=0x03, .x=0xf7, .y=0xd2, .sp=0xa0, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xac}, {.addr=0x3755, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3756, .a=0x56, .x=0xf7, .y=0xd2, .sp=0xa0, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xac}, {.addr=0x3755, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3755, .value=0xa6, .type=IO_READ},
        {.addr=0x3756, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_005C) {
    const struct CPU_State initial_cpu = {.pc=0x8f38, .a=0x89, .x=0x64, .y=0x96, .sp=0xd9, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x02}, {.addr=0x8f38, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8f39, .a=0x87, .x=0x64, .y=0x96, .sp=0xd9, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x02}, {.addr=0x8f38, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8f38, .value=0xa6, .type=IO_READ},
        {.addr=0x8f39, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_005D) {
    const struct CPU_State initial_cpu = {.pc=0x6c09, .a=0xe4, .x=0x79, .y=0x76, .sp=0x5f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0xd3}, {.addr=0x6c09, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6c0a, .a=0x10, .x=0x79, .y=0x76, .sp=0x5f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0xd3}, {.addr=0x6c09, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6c09, .value=0xa6, .type=IO_READ},
        {.addr=0x6c0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_005E) {
    const struct CPU_State initial_cpu = {.pc=0x9fa2, .a=0xe8, .x=0x84, .y=0x2e, .sp=0x2c, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xe2}, {.addr=0x9fa2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9fa3, .a=0x06, .x=0x84, .y=0x2e, .sp=0x2c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xe2}, {.addr=0x9fa2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9fa2, .value=0xa6, .type=IO_READ},
        {.addr=0x9fa3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_005F) {
    const struct CPU_State initial_cpu = {.pc=0xbf05, .a=0xfc, .x=0x90, .y=0xd9, .sp=0x8f, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xdd}, {.addr=0xbf05, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbf06, .a=0x1e, .x=0x90, .y=0xd9, .sp=0x8f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xdd}, {.addr=0xbf05, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbf05, .value=0xa6, .type=IO_READ},
        {.addr=0xbf06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0060) {
    const struct CPU_State initial_cpu = {.pc=0x8b6d, .a=0x29, .x=0x3a, .y=0x03, .sp=0xf2, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x91}, {.addr=0x8b6d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8b6e, .a=0x97, .x=0x3a, .y=0x03, .sp=0xf2, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x91}, {.addr=0x8b6d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8b6d, .value=0xa6, .type=IO_READ},
        {.addr=0x8b6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0061) {
    const struct CPU_State initial_cpu = {.pc=0x1396, .a=0xab, .x=0x88, .y=0x05, .sp=0x90, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0xd9}, {.addr=0x1396, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1397, .a=0xd2, .x=0x88, .y=0x05, .sp=0x90, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0xd9}, {.addr=0x1396, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1396, .value=0xa6, .type=IO_READ},
        {.addr=0x1397, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0062) {
    const struct CPU_State initial_cpu = {.pc=0xf2f3, .a=0x8a, .x=0x91, .y=0xf2, .sp=0x73, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x38}, {.addr=0xf2f3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf2f4, .a=0x51, .x=0x91, .y=0xf2, .sp=0x73, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x38}, {.addr=0xf2f3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf2f3, .value=0xa6, .type=IO_READ},
        {.addr=0xf2f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0063) {
    const struct CPU_State initial_cpu = {.pc=0x239a, .a=0xba, .x=0x74, .y=0x4c, .sp=0x92, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xae}, {.addr=0x239a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x239b, .a=0x0b, .x=0x74, .y=0x4c, .sp=0x92, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xae}, {.addr=0x239a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x239a, .value=0xa6, .type=IO_READ},
        {.addr=0x239b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0064) {
    const struct CPU_State initial_cpu = {.pc=0x0025, .a=0x3f, .x=0x0c, .y=0xc0, .sp=0x79, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0xdc}, {.addr=0x0025, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0026, .a=0x63, .x=0x0c, .y=0xc0, .sp=0x79, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0xdc}, {.addr=0x0025, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0025, .value=0xa6, .type=IO_READ},
        {.addr=0x0026, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0065) {
    const struct CPU_State initial_cpu = {.pc=0x29b5, .a=0x67, .x=0xba, .y=0xa8, .sp=0xd6, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x43}, {.addr=0x29b5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x29b6, .a=0x23, .x=0xba, .y=0xa8, .sp=0xd6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x43}, {.addr=0x29b5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x29b5, .value=0xa6, .type=IO_READ},
        {.addr=0x29b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0066) {
    const struct CPU_State initial_cpu = {.pc=0x21a8, .a=0x29, .x=0x2e, .y=0xe6, .sp=0xa9, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xcc}, {.addr=0x21a8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x21a9, .a=0x5d, .x=0x2e, .y=0xe6, .sp=0xa9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xcc}, {.addr=0x21a8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x21a8, .value=0xa6, .type=IO_READ},
        {.addr=0x21a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0067) {
    const struct CPU_State initial_cpu = {.pc=0x61c0, .a=0x24, .x=0xbe, .y=0xf7, .sp=0x88, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0x00}, {.addr=0x61c0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x61c1, .a=0x24, .x=0xbe, .y=0xf7, .sp=0x88, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0x00}, {.addr=0x61c0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x61c0, .value=0xa6, .type=IO_READ},
        {.addr=0x61c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00be, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0068) {
    const struct CPU_State initial_cpu = {.pc=0xfc65, .a=0x55, .x=0x94, .y=0xc0, .sp=0xf5, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0xd4}, {.addr=0xfc65, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfc66, .a=0x80, .x=0x94, .y=0xc0, .sp=0xf5, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0xd4}, {.addr=0xfc65, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfc65, .value=0xa6, .type=IO_READ},
        {.addr=0xfc66, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0069) {
    const struct CPU_State initial_cpu = {.pc=0xdb8f, .a=0xd8, .x=0x50, .y=0x77, .sp=0x35, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x3f}, {.addr=0xdb8f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdb90, .a=0x98, .x=0x50, .y=0x77, .sp=0x35, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x3f}, {.addr=0xdb8f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdb8f, .value=0xa6, .type=IO_READ},
        {.addr=0xdb90, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_006A) {
    const struct CPU_State initial_cpu = {.pc=0x3c0c, .a=0xf5, .x=0x64, .y=0x37, .sp=0xe4, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x9b}, {.addr=0x3c0c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3c0d, .a=0x5a, .x=0x64, .y=0x37, .sp=0xe4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x9b}, {.addr=0x3c0c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3c0c, .value=0xa6, .type=IO_READ},
        {.addr=0x3c0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_006B) {
    const struct CPU_State initial_cpu = {.pc=0x3c5f, .a=0x11, .x=0xcb, .y=0x46, .sp=0x69, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x4f}, {.addr=0x3c5f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3c60, .a=0xc1, .x=0xcb, .y=0x46, .sp=0x69, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0x4f}, {.addr=0x3c5f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3c5f, .value=0xa6, .type=IO_READ},
        {.addr=0x3c60, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_006C) {
    const struct CPU_State initial_cpu = {.pc=0x5a05, .a=0xe4, .x=0x78, .y=0xf3, .sp=0x46, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0xc3}, {.addr=0x5a05, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5a06, .a=0x21, .x=0x78, .y=0xf3, .sp=0x46, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0xc3}, {.addr=0x5a05, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5a05, .value=0xa6, .type=IO_READ},
        {.addr=0x5a06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_006D) {
    const struct CPU_State initial_cpu = {.pc=0xe414, .a=0xbe, .x=0x1f, .y=0xfb, .sp=0x67, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xa2}, {.addr=0xe414, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe415, .a=0x1b, .x=0x1f, .y=0xfb, .sp=0x67, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xa2}, {.addr=0xe414, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe414, .value=0xa6, .type=IO_READ},
        {.addr=0xe415, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_006E) {
    const struct CPU_State initial_cpu = {.pc=0x921b, .a=0x96, .x=0x2d, .y=0xd6, .sp=0xc3, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xa4}, {.addr=0x921b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x921c, .a=0xf1, .x=0x2d, .y=0xd6, .sp=0xc3, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xa4}, {.addr=0x921b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x921b, .value=0xa6, .type=IO_READ},
        {.addr=0x921c, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_006F) {
    const struct CPU_State initial_cpu = {.pc=0xb30d, .a=0xfd, .x=0x19, .y=0xcd, .sp=0xda, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x72}, {.addr=0xb30d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb30e, .a=0x8a, .x=0x19, .y=0xcd, .sp=0xda, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x72}, {.addr=0xb30d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb30d, .value=0xa6, .type=IO_READ},
        {.addr=0xb30e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0070) {
    const struct CPU_State initial_cpu = {.pc=0xdfb7, .a=0x22, .x=0xce, .y=0x18, .sp=0x79, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x7e}, {.addr=0xdfb7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdfb8, .a=0xa3, .x=0xce, .y=0x18, .sp=0x79, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x7e}, {.addr=0xdfb7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdfb7, .value=0xa6, .type=IO_READ},
        {.addr=0xdfb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0071) {
    const struct CPU_State initial_cpu = {.pc=0x7dba, .a=0x99, .x=0x12, .y=0x6c, .sp=0xbf, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0x99}, {.addr=0x7dba, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7dbb, .a=0x00, .x=0x12, .y=0x6c, .sp=0xbf, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0x99}, {.addr=0x7dba, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7dba, .value=0xa6, .type=IO_READ},
        {.addr=0x7dbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0072) {
    const struct CPU_State initial_cpu = {.pc=0x3e22, .a=0xb6, .x=0x33, .y=0x7c, .sp=0x2c, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x69}, {.addr=0x3e22, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3e23, .a=0x4c, .x=0x33, .y=0x7c, .sp=0x2c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x69}, {.addr=0x3e22, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3e22, .value=0xa6, .type=IO_READ},
        {.addr=0x3e23, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0073) {
    const struct CPU_State initial_cpu = {.pc=0xb4b5, .a=0x2d, .x=0x00, .y=0xa0, .sp=0xc0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xd4}, {.addr=0xb4b5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb4b6, .a=0x58, .x=0x00, .y=0xa0, .sp=0xc0, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xd4}, {.addr=0xb4b5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb4b5, .value=0xa6, .type=IO_READ},
        {.addr=0xb4b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0074) {
    const struct CPU_State initial_cpu = {.pc=0xeb29, .a=0xe0, .x=0x3d, .y=0xd5, .sp=0xcd, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x77}, {.addr=0xeb29, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xeb2a, .a=0x69, .x=0x3d, .y=0xd5, .sp=0xcd, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x77}, {.addr=0xeb29, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xeb29, .value=0xa6, .type=IO_READ},
        {.addr=0xeb2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0075) {
    const struct CPU_State initial_cpu = {.pc=0x4507, .a=0xea, .x=0x5b, .y=0xf2, .sp=0xaa, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x8e}, {.addr=0x4507, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4508, .a=0x5c, .x=0x5b, .y=0xf2, .sp=0xaa, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x8e}, {.addr=0x4507, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4507, .value=0xa6, .type=IO_READ},
        {.addr=0x4508, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0076) {
    const struct CPU_State initial_cpu = {.pc=0x1ad5, .a=0x92, .x=0x87, .y=0xf5, .sp=0x84, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x36}, {.addr=0x1ad5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1ad6, .a=0x5c, .x=0x87, .y=0xf5, .sp=0x84, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x36}, {.addr=0x1ad5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1ad5, .value=0xa6, .type=IO_READ},
        {.addr=0x1ad6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0077) {
    const struct CPU_State initial_cpu = {.pc=0x1d07, .a=0xb0, .x=0x85, .y=0x48, .sp=0xae, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0x1b}, {.addr=0x1d07, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1d08, .a=0x95, .x=0x85, .y=0x48, .sp=0xae, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0x1b}, {.addr=0x1d07, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1d07, .value=0xa6, .type=IO_READ},
        {.addr=0x1d08, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0079) {
    const struct CPU_State initial_cpu = {.pc=0x1f6e, .a=0xcb, .x=0xb1, .y=0xe2, .sp=0x34, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x2b}, {.addr=0x1f6e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1f6f, .a=0x9f, .x=0xb1, .y=0xe2, .sp=0x34, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x2b}, {.addr=0x1f6e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1f6e, .value=0xa6, .type=IO_READ},
        {.addr=0x1f6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_007A) {
    const struct CPU_State initial_cpu = {.pc=0x84ad, .a=0xd1, .x=0xc5, .y=0xce, .sp=0xb7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x62}, {.addr=0x84ad, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x84ae, .a=0x6f, .x=0xc5, .y=0xce, .sp=0xb7, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x62}, {.addr=0x84ad, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x84ad, .value=0xa6, .type=IO_READ},
        {.addr=0x84ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_007B) {
    const struct CPU_State initial_cpu = {.pc=0xfd8d, .a=0xd5, .x=0x8e, .y=0xac, .sp=0x97, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x47}, {.addr=0xfd8d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfd8e, .a=0x8e, .x=0x8e, .y=0xac, .sp=0x97, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x47}, {.addr=0xfd8d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfd8d, .value=0xa6, .type=IO_READ},
        {.addr=0xfd8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_007C) {
    const struct CPU_State initial_cpu = {.pc=0x41cf, .a=0x5f, .x=0x76, .y=0xba, .sp=0x49, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x51}, {.addr=0x41cf, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x41d0, .a=0x0d, .x=0x76, .y=0xba, .sp=0x49, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x51}, {.addr=0x41cf, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x41cf, .value=0xa6, .type=IO_READ},
        {.addr=0x41d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_007D) {
    const struct CPU_State initial_cpu = {.pc=0x3ffd, .a=0x9e, .x=0x30, .y=0x4b, .sp=0xc3, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x5f}, {.addr=0x3ffd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3ffe, .a=0x3f, .x=0x30, .y=0x4b, .sp=0xc3, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x5f}, {.addr=0x3ffd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3ffd, .value=0xa6, .type=IO_READ},
        {.addr=0x3ffe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_007E) {
    const struct CPU_State initial_cpu = {.pc=0x6121, .a=0x44, .x=0xd4, .y=0x65, .sp=0x33, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xc4}, {.addr=0x6121, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6122, .a=0x7f, .x=0xd4, .y=0x65, .sp=0x33, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xc4}, {.addr=0x6121, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6121, .value=0xa6, .type=IO_READ},
        {.addr=0x6122, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_007F) {
    const struct CPU_State initial_cpu = {.pc=0x3702, .a=0xd6, .x=0xf1, .y=0x87, .sp=0xd4, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x95}, {.addr=0x3702, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3703, .a=0x41, .x=0xf1, .y=0x87, .sp=0xd4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x95}, {.addr=0x3702, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3702, .value=0xa6, .type=IO_READ},
        {.addr=0x3703, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0080) {
    const struct CPU_State initial_cpu = {.pc=0x52c5, .a=0x58, .x=0x5a, .y=0x5e, .sp=0xe7, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x4d}, {.addr=0x52c5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x52c6, .a=0x0a, .x=0x5a, .y=0x5e, .sp=0xe7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x4d}, {.addr=0x52c5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x52c5, .value=0xa6, .type=IO_READ},
        {.addr=0x52c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0081) {
    const struct CPU_State initial_cpu = {.pc=0x7f51, .a=0x12, .x=0x98, .y=0x7d, .sp=0x95, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x65}, {.addr=0x7f51, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7f52, .a=0xad, .x=0x98, .y=0x7d, .sp=0x95, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x65}, {.addr=0x7f51, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7f51, .value=0xa6, .type=IO_READ},
        {.addr=0x7f52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0082) {
    const struct CPU_State initial_cpu = {.pc=0x06d3, .a=0x46, .x=0x5f, .y=0xcc, .sp=0x0d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x94}, {.addr=0x06d3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x06d4, .a=0xb2, .x=0x5f, .y=0xcc, .sp=0x0d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x94}, {.addr=0x06d3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x06d3, .value=0xa6, .type=IO_READ},
        {.addr=0x06d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0083) {
    const struct CPU_State initial_cpu = {.pc=0xdade, .a=0xc1, .x=0xbd, .y=0x29, .sp=0x20, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x50}, {.addr=0xdade, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdadf, .a=0x70, .x=0xbd, .y=0x29, .sp=0x20, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x50}, {.addr=0xdade, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdade, .value=0xa6, .type=IO_READ},
        {.addr=0xdadf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0084) {
    const struct CPU_State initial_cpu = {.pc=0xe542, .a=0xcb, .x=0xc9, .y=0x97, .sp=0xb5, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x5b}, {.addr=0xe542, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe543, .a=0x70, .x=0xc9, .y=0x97, .sp=0xb5, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x5b}, {.addr=0xe542, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe542, .value=0xa6, .type=IO_READ},
        {.addr=0xe543, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0085) {
    const struct CPU_State initial_cpu = {.pc=0x2b7c, .a=0x8e, .x=0xe2, .y=0xb9, .sp=0x18, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0xd4}, {.addr=0x2b7c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2b7d, .a=0xba, .x=0xe2, .y=0xb9, .sp=0x18, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0xd4}, {.addr=0x2b7c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2b7c, .value=0xa6, .type=IO_READ},
        {.addr=0x2b7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0086) {
    const struct CPU_State initial_cpu = {.pc=0xc635, .a=0x52, .x=0x35, .y=0x2a, .sp=0x18, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0x9f}, {.addr=0xc635, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc636, .a=0xb2, .x=0x35, .y=0x2a, .sp=0x18, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x9f}, {.addr=0xc635, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc635, .value=0xa6, .type=IO_READ},
        {.addr=0xc636, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0087) {
    const struct CPU_State initial_cpu = {.pc=0x9f88, .a=0x2f, .x=0x4c, .y=0x7d, .sp=0xcc, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x6f}, {.addr=0x9f88, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9f89, .a=0xc0, .x=0x4c, .y=0x7d, .sp=0xcc, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x6f}, {.addr=0x9f88, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9f88, .value=0xa6, .type=IO_READ},
        {.addr=0x9f89, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0088) {
    const struct CPU_State initial_cpu = {.pc=0x1ff1, .a=0x57, .x=0x0a, .y=0xd7, .sp=0xb0, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x98}, {.addr=0x1ff1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1ff2, .a=0xbf, .x=0x0a, .y=0xd7, .sp=0xb0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x98}, {.addr=0x1ff1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1ff1, .value=0xa6, .type=IO_READ},
        {.addr=0x1ff2, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0089) {
    const struct CPU_State initial_cpu = {.pc=0xdc24, .a=0xdb, .x=0x09, .y=0xa6, .sp=0xa4, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0xcd}, {.addr=0xdc24, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdc25, .a=0x0d, .x=0x09, .y=0xa6, .sp=0xa4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xcd}, {.addr=0xdc24, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdc24, .value=0xa6, .type=IO_READ},
        {.addr=0xdc25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_008A) {
    const struct CPU_State initial_cpu = {.pc=0xcb42, .a=0x4b, .x=0xdd, .y=0x1c, .sp=0xc7, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x36}, {.addr=0xcb42, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcb43, .a=0x14, .x=0xdd, .y=0x1c, .sp=0xc7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x36}, {.addr=0xcb42, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcb42, .value=0xa6, .type=IO_READ},
        {.addr=0xcb43, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_008B) {
    const struct CPU_State initial_cpu = {.pc=0x6a01, .a=0x55, .x=0x58, .y=0xe0, .sp=0x6a, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xb9}, {.addr=0x6a01, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6a02, .a=0x9b, .x=0x58, .y=0xe0, .sp=0x6a, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xb9}, {.addr=0x6a01, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6a01, .value=0xa6, .type=IO_READ},
        {.addr=0x6a02, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_008C) {
    const struct CPU_State initial_cpu = {.pc=0x5306, .a=0x4b, .x=0xd2, .y=0x78, .sp=0x0e, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x1b}, {.addr=0x5306, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5307, .a=0x30, .x=0xd2, .y=0x78, .sp=0x0e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x1b}, {.addr=0x5306, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5306, .value=0xa6, .type=IO_READ},
        {.addr=0x5307, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_008D) {
    const struct CPU_State initial_cpu = {.pc=0x718b, .a=0xa0, .x=0x70, .y=0xa1, .sp=0x99, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0xd0}, {.addr=0x718b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x718c, .a=0xd0, .x=0x70, .y=0xa1, .sp=0x99, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xd0}, {.addr=0x718b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x718b, .value=0xa6, .type=IO_READ},
        {.addr=0x718c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_008E) {
    const struct CPU_State initial_cpu = {.pc=0x1662, .a=0xbb, .x=0xc9, .y=0xaa, .sp=0xb1, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xcf}, {.addr=0x1662, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1663, .a=0xeb, .x=0xc9, .y=0xaa, .sp=0xb1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xcf}, {.addr=0x1662, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1662, .value=0xa6, .type=IO_READ},
        {.addr=0x1663, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_008F) {
    const struct CPU_State initial_cpu = {.pc=0x5e13, .a=0xa2, .x=0x36, .y=0x2b, .sp=0x11, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xbb}, {.addr=0x5e13, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5e14, .a=0xe7, .x=0x36, .y=0x2b, .sp=0x11, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xbb}, {.addr=0x5e13, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5e13, .value=0xa6, .type=IO_READ},
        {.addr=0x5e14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0090) {
    const struct CPU_State initial_cpu = {.pc=0x14ee, .a=0xc2, .x=0x9b, .y=0x2e, .sp=0x10, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x1d}, {.addr=0x14ee, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x14ef, .a=0xa5, .x=0x9b, .y=0x2e, .sp=0x10, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0x1d}, {.addr=0x14ee, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x14ee, .value=0xa6, .type=IO_READ},
        {.addr=0x14ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0091) {
    const struct CPU_State initial_cpu = {.pc=0x6912, .a=0x7a, .x=0x1b, .y=0x72, .sp=0x29, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x7f}, {.addr=0x6912, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6913, .a=0xfa, .x=0x1b, .y=0x72, .sp=0x29, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x7f}, {.addr=0x6912, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6912, .value=0xa6, .type=IO_READ},
        {.addr=0x6913, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0092) {
    const struct CPU_State initial_cpu = {.pc=0x1e80, .a=0x18, .x=0x3d, .y=0x37, .sp=0xf5, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xef}, {.addr=0x1e80, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1e81, .a=0x29, .x=0x3d, .y=0x37, .sp=0xf5, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xef}, {.addr=0x1e80, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1e80, .value=0xa6, .type=IO_READ},
        {.addr=0x1e81, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0093) {
    const struct CPU_State initial_cpu = {.pc=0xea54, .a=0x40, .x=0x2f, .y=0x3e, .sp=0xb8, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x43}, {.addr=0xea54, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xea55, .a=0xfc, .x=0x2f, .y=0x3e, .sp=0xb8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x43}, {.addr=0xea54, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xea54, .value=0xa6, .type=IO_READ},
        {.addr=0xea55, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0094) {
    const struct CPU_State initial_cpu = {.pc=0x3c66, .a=0xf8, .x=0x75, .y=0x0b, .sp=0x60, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0x06}, {.addr=0x3c66, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3c67, .a=0xf2, .x=0x75, .y=0x0b, .sp=0x60, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0x06}, {.addr=0x3c66, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3c66, .value=0xa6, .type=IO_READ},
        {.addr=0x3c67, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0095) {
    const struct CPU_State initial_cpu = {.pc=0x362e, .a=0xd3, .x=0x9d, .y=0x01, .sp=0x40, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0xb5}, {.addr=0x362e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x362f, .a=0x1e, .x=0x9d, .y=0x01, .sp=0x40, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0xb5}, {.addr=0x362e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x362e, .value=0xa6, .type=IO_READ},
        {.addr=0x362f, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0096) {
    const struct CPU_State initial_cpu = {.pc=0x7dff, .a=0xef, .x=0xf5, .y=0xf2, .sp=0xaf, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xd2}, {.addr=0x7dff, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7e00, .a=0x1d, .x=0xf5, .y=0xf2, .sp=0xaf, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xd2}, {.addr=0x7dff, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7dff, .value=0xa6, .type=IO_READ},
        {.addr=0x7e00, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0097) {
    const struct CPU_State initial_cpu = {.pc=0xc2c7, .a=0xfc, .x=0x2d, .y=0xa1, .sp=0x77, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x23}, {.addr=0xc2c7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc2c8, .a=0xd8, .x=0x2d, .y=0xa1, .sp=0x77, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x23}, {.addr=0xc2c7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc2c7, .value=0xa6, .type=IO_READ},
        {.addr=0xc2c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0098) {
    const struct CPU_State initial_cpu = {.pc=0xdb14, .a=0x8b, .x=0x14, .y=0xcf, .sp=0xee, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0xfe}, {.addr=0xdb14, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdb15, .a=0x8d, .x=0x14, .y=0xcf, .sp=0xee, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xfe}, {.addr=0xdb14, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdb14, .value=0xa6, .type=IO_READ},
        {.addr=0xdb15, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0099) {
    const struct CPU_State initial_cpu = {.pc=0xec5c, .a=0x8d, .x=0x2f, .y=0x10, .sp=0x1c, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x4b}, {.addr=0xec5c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xec5d, .a=0x41, .x=0x2f, .y=0x10, .sp=0x1c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x4b}, {.addr=0xec5c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xec5c, .value=0xa6, .type=IO_READ},
        {.addr=0xec5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_009A) {
    const struct CPU_State initial_cpu = {.pc=0xb44b, .a=0x77, .x=0xd7, .y=0x68, .sp=0xc3, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x7b}, {.addr=0xb44b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb44c, .a=0xfb, .x=0xd7, .y=0x68, .sp=0xc3, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x7b}, {.addr=0xb44b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb44b, .value=0xa6, .type=IO_READ},
        {.addr=0xb44c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_009B) {
    const struct CPU_State initial_cpu = {.pc=0xc2b6, .a=0xdf, .x=0xb8, .y=0x15, .sp=0x41, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x29}, {.addr=0xc2b6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc2b7, .a=0xb5, .x=0xb8, .y=0x15, .sp=0x41, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x29}, {.addr=0xc2b6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc2b6, .value=0xa6, .type=IO_READ},
        {.addr=0xc2b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_009C) {
    const struct CPU_State initial_cpu = {.pc=0x8210, .a=0x65, .x=0xff, .y=0xd0, .sp=0xa8, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0xac}, {.addr=0x8210, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8211, .a=0xb9, .x=0xff, .y=0xd0, .sp=0xa8, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xac}, {.addr=0x8210, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8210, .value=0xa6, .type=IO_READ},
        {.addr=0x8211, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_009D) {
    const struct CPU_State initial_cpu = {.pc=0xbdd0, .a=0x76, .x=0x32, .y=0xf0, .sp=0x94, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x47}, {.addr=0xbdd0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbdd1, .a=0x2e, .x=0x32, .y=0xf0, .sp=0x94, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x47}, {.addr=0xbdd0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbdd0, .value=0xa6, .type=IO_READ},
        {.addr=0xbdd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_009E) {
    const struct CPU_State initial_cpu = {.pc=0x4100, .a=0x8b, .x=0x5a, .y=0xbf, .sp=0xb1, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x98}, {.addr=0x4100, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4101, .a=0xf2, .x=0x5a, .y=0xbf, .sp=0xb1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x98}, {.addr=0x4100, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4100, .value=0xa6, .type=IO_READ},
        {.addr=0x4101, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_009F) {
    const struct CPU_State initial_cpu = {.pc=0x2d7e, .a=0xe2, .x=0xac, .y=0xe4, .sp=0xa4, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x16}, {.addr=0x2d7e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2d7f, .a=0xcb, .x=0xac, .y=0xe4, .sp=0xa4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x16}, {.addr=0x2d7e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2d7e, .value=0xa6, .type=IO_READ},
        {.addr=0x2d7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xbe27, .a=0x16, .x=0xe0, .y=0xd3, .sp=0x9e, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x1c}, {.addr=0xbe27, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbe28, .a=0xf9, .x=0xe0, .y=0xd3, .sp=0x9e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x1c}, {.addr=0xbe27, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbe27, .value=0xa6, .type=IO_READ},
        {.addr=0xbe28, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x8314, .a=0xcb, .x=0x14, .y=0x69, .sp=0xe5, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x5b}, {.addr=0x8314, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8315, .a=0x70, .x=0x14, .y=0x69, .sp=0xe5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x5b}, {.addr=0x8314, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8314, .value=0xa6, .type=IO_READ},
        {.addr=0x8315, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xec33, .a=0xde, .x=0x81, .y=0xee, .sp=0x81, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xc7}, {.addr=0xec33, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xec34, .a=0x17, .x=0x81, .y=0xee, .sp=0x81, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xc7}, {.addr=0xec33, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xec33, .value=0xa6, .type=IO_READ},
        {.addr=0xec34, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xe63a, .a=0xf6, .x=0x72, .y=0x25, .sp=0x5d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x94}, {.addr=0xe63a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe63b, .a=0x61, .x=0x72, .y=0x25, .sp=0x5d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x94}, {.addr=0xe63a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe63a, .value=0xa6, .type=IO_READ},
        {.addr=0xe63b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x231e, .a=0x21, .x=0x0e, .y=0x96, .sp=0x36, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x2d}, {.addr=0x231e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x231f, .a=0xf4, .x=0x0e, .y=0x96, .sp=0x36, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x2d}, {.addr=0x231e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x231e, .value=0xa6, .type=IO_READ},
        {.addr=0x231f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x8a3a, .a=0xc4, .x=0x56, .y=0xcd, .sp=0x16, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x17}, {.addr=0x8a3a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8a3b, .a=0xac, .x=0x56, .y=0xcd, .sp=0x16, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x17}, {.addr=0x8a3a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8a3a, .value=0xa6, .type=IO_READ},
        {.addr=0x8a3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x91ce, .a=0x79, .x=0x3e, .y=0xaa, .sp=0x14, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0x64}, {.addr=0x91ce, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x91cf, .a=0x15, .x=0x3e, .y=0xaa, .sp=0x14, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0x64}, {.addr=0x91ce, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x91ce, .value=0xa6, .type=IO_READ},
        {.addr=0x91cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x3f26, .a=0xe8, .x=0x9e, .y=0x70, .sp=0xb6, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0xcd}, {.addr=0x3f26, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3f27, .a=0x1a, .x=0x9e, .y=0x70, .sp=0xb6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0xcd}, {.addr=0x3f26, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3f26, .value=0xa6, .type=IO_READ},
        {.addr=0x3f27, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x04c4, .a=0x41, .x=0x58, .y=0xf5, .sp=0x7b, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xac}, {.addr=0x04c4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x04c5, .a=0x95, .x=0x58, .y=0xf5, .sp=0x7b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xac}, {.addr=0x04c4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x04c4, .value=0xa6, .type=IO_READ},
        {.addr=0x04c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x9530, .a=0x65, .x=0x1a, .y=0x6b, .sp=0x5a, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0xf4}, {.addr=0x9530, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9531, .a=0x71, .x=0x1a, .y=0x6b, .sp=0x5a, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0xf4}, {.addr=0x9530, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9530, .value=0xa6, .type=IO_READ},
        {.addr=0x9531, .value=DUMMY, .type=IO_READ},
        {.addr=0x001a, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x348c, .a=0x2e, .x=0x1b, .y=0xd5, .sp=0xe4, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x38}, {.addr=0x348c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x348d, .a=0xf5, .x=0x1b, .y=0xd5, .sp=0xe4, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x38}, {.addr=0x348c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x348c, .value=0xa6, .type=IO_READ},
        {.addr=0x348d, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x3698, .a=0x04, .x=0xed, .y=0xac, .sp=0x0a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0xb0}, {.addr=0x3698, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3699, .a=0x53, .x=0xed, .y=0xac, .sp=0x0a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0xb0}, {.addr=0x3698, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3698, .value=0xa6, .type=IO_READ},
        {.addr=0x3699, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x0ee1, .a=0x6c, .x=0xa4, .y=0xd5, .sp=0x95, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0xeb}, {.addr=0x0ee1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0ee2, .a=0x81, .x=0xa4, .y=0xd5, .sp=0x95, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xeb}, {.addr=0x0ee1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0ee1, .value=0xa6, .type=IO_READ},
        {.addr=0x0ee2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xeb45, .a=0xc1, .x=0x0c, .y=0x58, .sp=0x21, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0xf2}, {.addr=0xeb45, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xeb46, .a=0xce, .x=0x0c, .y=0x58, .sp=0x21, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0xf2}, {.addr=0xeb45, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xeb45, .value=0xa6, .type=IO_READ},
        {.addr=0xeb46, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xee8b, .a=0x65, .x=0xc9, .y=0xb2, .sp=0xb0, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x51}, {.addr=0xee8b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xee8c, .a=0x13, .x=0xc9, .y=0xb2, .sp=0xb0, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x51}, {.addr=0xee8b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xee8b, .value=0xa6, .type=IO_READ},
        {.addr=0xee8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xf6bb, .a=0x19, .x=0x3c, .y=0x30, .sp=0xd2, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x90}, {.addr=0xf6bb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf6bc, .a=0x88, .x=0x3c, .y=0x30, .sp=0xd2, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x90}, {.addr=0xf6bb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf6bb, .value=0xa6, .type=IO_READ},
        {.addr=0xf6bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x7ab4, .a=0x22, .x=0xea, .y=0xf1, .sp=0x1f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xd3}, {.addr=0x7ab4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7ab5, .a=0x4f, .x=0xea, .y=0xf1, .sp=0x1f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xd3}, {.addr=0x7ab4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7ab4, .value=0xa6, .type=IO_READ},
        {.addr=0x7ab5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x5190, .a=0xc5, .x=0x6a, .y=0xae, .sp=0xd6, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x9c}, {.addr=0x5190, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5191, .a=0x28, .x=0x6a, .y=0xae, .sp=0xd6, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0x9c}, {.addr=0x5190, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5190, .value=0xa6, .type=IO_READ},
        {.addr=0x5191, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xaab0, .a=0x35, .x=0x92, .y=0x89, .sp=0x3d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0xce}, {.addr=0xaab0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xaab1, .a=0x67, .x=0x92, .y=0x89, .sp=0x3d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xce}, {.addr=0xaab0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xaab0, .value=0xa6, .type=IO_READ},
        {.addr=0xaab1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x4ca4, .a=0xb4, .x=0xcb, .y=0x6c, .sp=0xe8, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x7d}, {.addr=0x4ca4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4ca5, .a=0x37, .x=0xcb, .y=0x6c, .sp=0xe8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x7d}, {.addr=0x4ca4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4ca4, .value=0xa6, .type=IO_READ},
        {.addr=0x4ca5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xd300, .a=0x97, .x=0xee, .y=0xac, .sp=0x1c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0xc5}, {.addr=0xd300, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd301, .a=0xd2, .x=0xee, .y=0xac, .sp=0x1c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0xc5}, {.addr=0xd300, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd300, .value=0xa6, .type=IO_READ},
        {.addr=0xd301, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xaa59, .a=0xda, .x=0x06, .y=0x9c, .sp=0xc3, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x31}, {.addr=0xaa59, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xaa5a, .a=0xa9, .x=0x06, .y=0x9c, .sp=0xc3, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x31}, {.addr=0xaa59, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xaa59, .value=0xa6, .type=IO_READ},
        {.addr=0xaa5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x505c, .a=0x78, .x=0x5a, .y=0x79, .sp=0xa2, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xe5}, {.addr=0x505c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x505d, .a=0x93, .x=0x5a, .y=0x79, .sp=0xa2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xe5}, {.addr=0x505c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x505c, .value=0xa6, .type=IO_READ},
        {.addr=0x505d, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x7e76, .a=0xfc, .x=0xe0, .y=0x80, .sp=0x8c, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x83}, {.addr=0x7e76, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7e77, .a=0x78, .x=0xe0, .y=0x80, .sp=0x8c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x83}, {.addr=0x7e76, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7e76, .value=0xa6, .type=IO_READ},
        {.addr=0x7e77, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xd0e0, .a=0xd3, .x=0x97, .y=0xe9, .sp=0xee, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0xf3}, {.addr=0xd0e0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd0e1, .a=0xe0, .x=0x97, .y=0xe9, .sp=0xee, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0xf3}, {.addr=0xd0e0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd0e0, .value=0xa6, .type=IO_READ},
        {.addr=0xd0e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xb1e0, .a=0x09, .x=0x0d, .y=0xfb, .sp=0xf3, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xb6}, {.addr=0xb1e0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb1e1, .a=0x53, .x=0x0d, .y=0xfb, .sp=0xf3, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xb6}, {.addr=0xb1e0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb1e0, .value=0xa6, .type=IO_READ},
        {.addr=0xb1e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xb7be, .a=0x79, .x=0x63, .y=0x19, .sp=0xd0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0x7e}, {.addr=0xb7be, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb7bf, .a=0xfa, .x=0x63, .y=0x19, .sp=0xd0, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0x7e}, {.addr=0xb7be, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb7be, .value=0xa6, .type=IO_READ},
        {.addr=0xb7bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xa13a, .a=0x51, .x=0xdc, .y=0xaa, .sp=0x36, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0xb6}, {.addr=0xa13a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa13b, .a=0x9b, .x=0xdc, .y=0xaa, .sp=0x36, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0xb6}, {.addr=0xa13a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa13a, .value=0xa6, .type=IO_READ},
        {.addr=0xa13b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x95c3, .a=0xc8, .x=0x42, .y=0xec, .sp=0x80, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x90}, {.addr=0x95c3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x95c4, .a=0x38, .x=0x42, .y=0xec, .sp=0x80, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x90}, {.addr=0x95c3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x95c3, .value=0xa6, .type=IO_READ},
        {.addr=0x95c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xce1f, .a=0x6b, .x=0x57, .y=0xfa, .sp=0xb7, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0xc8}, {.addr=0xce1f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xce20, .a=0xa3, .x=0x57, .y=0xfa, .sp=0xb7, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0xc8}, {.addr=0xce1f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xce1f, .value=0xa6, .type=IO_READ},
        {.addr=0xce20, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x438a, .a=0xf6, .x=0x33, .y=0x0b, .sp=0x4f, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0xf8}, {.addr=0x438a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x438b, .a=0xfd, .x=0x33, .y=0x0b, .sp=0x4f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0xf8}, {.addr=0x438a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x438a, .value=0xa6, .type=IO_READ},
        {.addr=0x438b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xc647, .a=0x37, .x=0xa1, .y=0x74, .sp=0x33, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xb6}, {.addr=0xc647, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc648, .a=0x80, .x=0xa1, .y=0x74, .sp=0x33, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xb6}, {.addr=0xc647, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc647, .value=0xa6, .type=IO_READ},
        {.addr=0xc648, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xc849, .a=0xc6, .x=0x2b, .y=0xd9, .sp=0xa2, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xc7}, {.addr=0xc849, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc84a, .a=0xfe, .x=0x2b, .y=0xd9, .sp=0xa2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xc7}, {.addr=0xc849, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc849, .value=0xa6, .type=IO_READ},
        {.addr=0xc84a, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x3e2d, .a=0x55, .x=0x1d, .y=0x1a, .sp=0x21, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x40}, {.addr=0x3e2d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3e2e, .a=0x15, .x=0x1d, .y=0x1a, .sp=0x21, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x40}, {.addr=0x3e2d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3e2d, .value=0xa6, .type=IO_READ},
        {.addr=0x3e2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xeedb, .a=0x9f, .x=0xaf, .y=0xe7, .sp=0x7e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0xd1}, {.addr=0xeedb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xeedc, .a=0xcd, .x=0xaf, .y=0xe7, .sp=0x7e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0xd1}, {.addr=0xeedb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xeedb, .value=0xa6, .type=IO_READ},
        {.addr=0xeedc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x0e09, .a=0xf8, .x=0xab, .y=0x06, .sp=0xba, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x5f}, {.addr=0x0e09, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0e0a, .a=0x99, .x=0xab, .y=0x06, .sp=0xba, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x5f}, {.addr=0x0e09, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0e09, .value=0xa6, .type=IO_READ},
        {.addr=0x0e0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xd7e4, .a=0x87, .x=0x3f, .y=0xd7, .sp=0x7c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x2b}, {.addr=0xd7e4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd7e5, .a=0x5c, .x=0x3f, .y=0xd7, .sp=0x7c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x2b}, {.addr=0xd7e4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd7e4, .value=0xa6, .type=IO_READ},
        {.addr=0xd7e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x696d, .a=0x35, .x=0xc8, .y=0x89, .sp=0xc1, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0xe7}, {.addr=0x696d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x696e, .a=0x4e, .x=0xc8, .y=0x89, .sp=0xc1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0xe7}, {.addr=0x696d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x696d, .value=0xa6, .type=IO_READ},
        {.addr=0x696e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xf591, .a=0xe7, .x=0xa6, .y=0x49, .sp=0xba, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x33}, {.addr=0xf591, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf592, .a=0xb4, .x=0xa6, .y=0x49, .sp=0xba, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0x33}, {.addr=0xf591, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf591, .value=0xa6, .type=IO_READ},
        {.addr=0xf592, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x8767, .a=0x17, .x=0x43, .y=0x29, .sp=0x1a, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x61}, {.addr=0x8767, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8768, .a=0xb6, .x=0x43, .y=0x29, .sp=0x1a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x61}, {.addr=0x8767, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8767, .value=0xa6, .type=IO_READ},
        {.addr=0x8768, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x7e11, .a=0xad, .x=0x03, .y=0x5a, .sp=0x2f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xd1}, {.addr=0x7e11, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7e12, .a=0xdc, .x=0x03, .y=0x5a, .sp=0x2f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xd1}, {.addr=0x7e11, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7e11, .value=0xa6, .type=IO_READ},
        {.addr=0x7e12, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x4d5c, .a=0xb4, .x=0x03, .y=0x3b, .sp=0x26, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0x88}, {.addr=0x4d5c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4d5d, .a=0x2c, .x=0x03, .y=0x3b, .sp=0x26, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0x88}, {.addr=0x4d5c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4d5c, .value=0xa6, .type=IO_READ},
        {.addr=0x4d5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xe22e, .a=0x89, .x=0x5d, .y=0xf0, .sp=0x23, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x51}, {.addr=0xe22e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe22f, .a=0x38, .x=0x5d, .y=0xf0, .sp=0x23, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x51}, {.addr=0xe22e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe22e, .value=0xa6, .type=IO_READ},
        {.addr=0xe22f, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x97a7, .a=0x43, .x=0x64, .y=0x7d, .sp=0x74, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x3c}, {.addr=0x97a7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x97a8, .a=0x07, .x=0x64, .y=0x7d, .sp=0x74, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x3c}, {.addr=0x97a7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x97a7, .value=0xa6, .type=IO_READ},
        {.addr=0x97a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xf7d6, .a=0x51, .x=0xa9, .y=0x9d, .sp=0xd9, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x4a}, {.addr=0xf7d6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf7d7, .a=0x06, .x=0xa9, .y=0x9d, .sp=0xd9, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0x4a}, {.addr=0xf7d6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf7d6, .value=0xa6, .type=IO_READ},
        {.addr=0xf7d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x01f6, .a=0xa0, .x=0xf4, .y=0x24, .sp=0x53, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x5c}, {.addr=0x01f6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x01f7, .a=0x43, .x=0xf4, .y=0x24, .sp=0x53, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x5c}, {.addr=0x01f6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x01f6, .value=0xa6, .type=IO_READ},
        {.addr=0x01f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x4bc5, .a=0xf5, .x=0x32, .y=0x1a, .sp=0x67, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0xaf}, {.addr=0x4bc5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4bc6, .a=0x46, .x=0x32, .y=0x1a, .sp=0x67, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0xaf}, {.addr=0x4bc5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4bc5, .value=0xa6, .type=IO_READ},
        {.addr=0x4bc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x227b, .a=0xc7, .x=0xab, .y=0x7f, .sp=0xe3, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x23}, {.addr=0x227b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x227c, .a=0xa4, .x=0xab, .y=0x7f, .sp=0xe3, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x23}, {.addr=0x227b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x227b, .value=0xa6, .type=IO_READ},
        {.addr=0x227c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xd0c9, .a=0xdd, .x=0x37, .y=0xad, .sp=0x23, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x8d}, {.addr=0xd0c9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd0ca, .a=0x50, .x=0x37, .y=0xad, .sp=0x23, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x8d}, {.addr=0xd0c9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd0c9, .value=0xa6, .type=IO_READ},
        {.addr=0xd0ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xec8b, .a=0x3c, .x=0x7b, .y=0x7a, .sp=0x5a, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x8e}, {.addr=0xec8b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xec8c, .a=0xae, .x=0x7b, .y=0x7a, .sp=0x5a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0x8e}, {.addr=0xec8b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xec8b, .value=0xa6, .type=IO_READ},
        {.addr=0xec8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x484f, .a=0x57, .x=0x43, .y=0x51, .sp=0x62, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xf2}, {.addr=0x484f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4850, .a=0x64, .x=0x43, .y=0x51, .sp=0x62, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xf2}, {.addr=0x484f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x484f, .value=0xa6, .type=IO_READ},
        {.addr=0x4850, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x5483, .a=0x75, .x=0x9f, .y=0xe7, .sp=0x59, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x9a}, {.addr=0x5483, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5484, .a=0xda, .x=0x9f, .y=0xe7, .sp=0x59, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0x9a}, {.addr=0x5483, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5483, .value=0xa6, .type=IO_READ},
        {.addr=0x5484, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x6b05, .a=0xe4, .x=0x5c, .y=0x80, .sp=0xfa, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x44}, {.addr=0x6b05, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6b06, .a=0x9f, .x=0x5c, .y=0x80, .sp=0xfa, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x44}, {.addr=0x6b05, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6b05, .value=0xa6, .type=IO_READ},
        {.addr=0x6b06, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xcc46, .a=0x1e, .x=0xa9, .y=0x57, .sp=0xca, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x26}, {.addr=0xcc46, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcc47, .a=0xf8, .x=0xa9, .y=0x57, .sp=0xca, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x26}, {.addr=0xcc46, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcc46, .value=0xa6, .type=IO_READ},
        {.addr=0xcc47, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xacc2, .a=0xb3, .x=0x91, .y=0x19, .sp=0xa4, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0x3f}, {.addr=0xacc2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xacc3, .a=0x73, .x=0x91, .y=0x19, .sp=0xa4, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0x3f}, {.addr=0xacc2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xacc2, .value=0xa6, .type=IO_READ},
        {.addr=0xacc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0091, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x11e8, .a=0xea, .x=0x43, .y=0x77, .sp=0x3b, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x45}, {.addr=0x11e8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x11e9, .a=0xa4, .x=0x43, .y=0x77, .sp=0x3b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x45}, {.addr=0x11e8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x11e8, .value=0xa6, .type=IO_READ},
        {.addr=0x11e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x6f60, .a=0x1f, .x=0x4a, .y=0xe7, .sp=0x44, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0xab}, {.addr=0x6f60, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6f61, .a=0x73, .x=0x4a, .y=0xe7, .sp=0x44, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0xab}, {.addr=0x6f60, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6f60, .value=0xa6, .type=IO_READ},
        {.addr=0x6f61, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x4477, .a=0xb0, .x=0x85, .y=0x97, .sp=0x58, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xe8}, {.addr=0x4477, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4478, .a=0xc7, .x=0x85, .y=0x97, .sp=0x58, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xe8}, {.addr=0x4477, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4477, .value=0xa6, .type=IO_READ},
        {.addr=0x4478, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x5365, .a=0xb9, .x=0x25, .y=0x0e, .sp=0xc4, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x2c}, {.addr=0x5365, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5366, .a=0x8d, .x=0x25, .y=0x0e, .sp=0xc4, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x2c}, {.addr=0x5365, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5365, .value=0xa6, .type=IO_READ},
        {.addr=0x5366, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xfbe5, .a=0xd6, .x=0xa6, .y=0x1a, .sp=0xae, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x44}, {.addr=0xfbe5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfbe6, .a=0x91, .x=0xa6, .y=0x1a, .sp=0xae, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x44}, {.addr=0xfbe5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfbe5, .value=0xa6, .type=IO_READ},
        {.addr=0xfbe6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x7ebf, .a=0xdd, .x=0xb4, .y=0xd0, .sp=0x88, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x52}, {.addr=0x7ebf, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7ec0, .a=0x8b, .x=0xb4, .y=0xd0, .sp=0x88, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x52}, {.addr=0x7ebf, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7ebf, .value=0xa6, .type=IO_READ},
        {.addr=0x7ec0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xf2dd, .a=0xc3, .x=0xb6, .y=0xe0, .sp=0xde, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x9f}, {.addr=0xf2dd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf2de, .a=0x24, .x=0xb6, .y=0xe0, .sp=0xde, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x9f}, {.addr=0xf2dd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf2dd, .value=0xa6, .type=IO_READ},
        {.addr=0xf2de, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xdeaf, .a=0xa7, .x=0xb8, .y=0xd2, .sp=0x08, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x82}, {.addr=0xdeaf, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdeb0, .a=0x24, .x=0xb8, .y=0xd2, .sp=0x08, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x82}, {.addr=0xdeaf, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdeaf, .value=0xa6, .type=IO_READ},
        {.addr=0xdeb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xa5e9, .a=0xd1, .x=0x10, .y=0x4b, .sp=0xb9, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x1a}, {.addr=0xa5e9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa5ea, .a=0xb7, .x=0x10, .y=0x4b, .sp=0xb9, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x1a}, {.addr=0xa5e9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa5e9, .value=0xa6, .type=IO_READ},
        {.addr=0xa5ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x10b8, .a=0x95, .x=0x6e, .y=0xd5, .sp=0x7d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0xdb}, {.addr=0x10b8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x10b9, .a=0xba, .x=0x6e, .y=0xd5, .sp=0x7d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0xdb}, {.addr=0x10b8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x10b8, .value=0xa6, .type=IO_READ},
        {.addr=0x10b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x46dd, .a=0x7b, .x=0x93, .y=0x5b, .sp=0x68, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x86}, {.addr=0x46dd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x46de, .a=0xf4, .x=0x93, .y=0x5b, .sp=0x68, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x86}, {.addr=0x46dd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x46dd, .value=0xa6, .type=IO_READ},
        {.addr=0x46de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xff25, .a=0xbd, .x=0xb5, .y=0xe6, .sp=0x7f, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x7a}, {.addr=0xff25, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xff26, .a=0x43, .x=0xb5, .y=0xe6, .sp=0x7f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x7a}, {.addr=0xff25, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xff25, .value=0xa6, .type=IO_READ},
        {.addr=0xff26, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xb3fa, .a=0x6d, .x=0xa3, .y=0x14, .sp=0xac, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x57}, {.addr=0xb3fa, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb3fb, .a=0x16, .x=0xa3, .y=0x14, .sp=0xac, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x57}, {.addr=0xb3fa, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb3fa, .value=0xa6, .type=IO_READ},
        {.addr=0xb3fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x0d60, .a=0x56, .x=0xc5, .y=0x11, .sp=0xff, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xd2}, {.addr=0x0d60, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0d61, .a=0x84, .x=0xc5, .y=0x11, .sp=0xff, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xd2}, {.addr=0x0d60, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0d60, .value=0xa6, .type=IO_READ},
        {.addr=0x0d61, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x66bb, .a=0xbb, .x=0x8d, .y=0x93, .sp=0x6d, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0xa6}, {.addr=0x66bb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x66bc, .a=0x14, .x=0x8d, .y=0x93, .sp=0x6d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0xa6}, {.addr=0x66bb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x66bb, .value=0xa6, .type=IO_READ},
        {.addr=0x66bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x7ffc, .a=0xaf, .x=0x21, .y=0xe7, .sp=0xce, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xcc}, {.addr=0x7ffc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7ffd, .a=0xe2, .x=0x21, .y=0xe7, .sp=0xce, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xcc}, {.addr=0x7ffc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7ffc, .value=0xa6, .type=IO_READ},
        {.addr=0x7ffd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xf635, .a=0xa8, .x=0x93, .y=0xea, .sp=0x2c, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0xe2}, {.addr=0xf635, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf636, .a=0xc6, .x=0x93, .y=0xea, .sp=0x2c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0xe2}, {.addr=0xf635, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf635, .value=0xa6, .type=IO_READ},
        {.addr=0xf636, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xc495, .a=0x42, .x=0x07, .y=0x9a, .sp=0xfb, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0xe4}, {.addr=0xc495, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc496, .a=0x5e, .x=0x07, .y=0x9a, .sp=0xfb, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0xe4}, {.addr=0xc495, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc495, .value=0xa6, .type=IO_READ},
        {.addr=0xc496, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x48e6, .a=0xf6, .x=0xf1, .y=0x11, .sp=0x96, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x64}, {.addr=0x48e6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x48e7, .a=0x91, .x=0xf1, .y=0x11, .sp=0x96, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x64}, {.addr=0x48e6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x48e6, .value=0xa6, .type=IO_READ},
        {.addr=0x48e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xea46, .a=0xa7, .x=0xc6, .y=0x6e, .sp=0x35, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x94}, {.addr=0xea46, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xea47, .a=0x13, .x=0xc6, .y=0x6e, .sp=0x35, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x94}, {.addr=0xea46, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xea46, .value=0xa6, .type=IO_READ},
        {.addr=0xea47, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x6df4, .a=0xa3, .x=0x01, .y=0x6f, .sp=0x17, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x6b}, {.addr=0x6df4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6df5, .a=0x38, .x=0x01, .y=0x6f, .sp=0x17, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x6b}, {.addr=0x6df4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6df4, .value=0xa6, .type=IO_READ},
        {.addr=0x6df5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x315c, .a=0x14, .x=0x28, .y=0xfa, .sp=0xf6, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xc9}, {.addr=0x315c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x315d, .a=0x4a, .x=0x28, .y=0xfa, .sp=0xf6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xc9}, {.addr=0x315c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x315c, .value=0xa6, .type=IO_READ},
        {.addr=0x315d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x071e, .a=0xfa, .x=0x0e, .y=0x6b, .sp=0x72, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x5f}, {.addr=0x071e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x071f, .a=0x9a, .x=0x0e, .y=0x6b, .sp=0x72, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x5f}, {.addr=0x071e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x071e, .value=0xa6, .type=IO_READ},
        {.addr=0x071f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x1336, .a=0xae, .x=0xe8, .y=0xac, .sp=0x23, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x0b}, {.addr=0x1336, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1337, .a=0xa3, .x=0xe8, .y=0xac, .sp=0x23, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x0b}, {.addr=0x1336, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1336, .value=0xa6, .type=IO_READ},
        {.addr=0x1337, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xc5d6, .a=0xb7, .x=0x2e, .y=0xa1, .sp=0x42, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0xb3}, {.addr=0xc5d6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc5d7, .a=0x03, .x=0x2e, .y=0xa1, .sp=0x42, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0xb3}, {.addr=0xc5d6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc5d6, .value=0xa6, .type=IO_READ},
        {.addr=0xc5d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x511b, .a=0x7f, .x=0xf4, .y=0x2c, .sp=0x24, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xd1}, {.addr=0x511b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x511c, .a=0xae, .x=0xf4, .y=0x2c, .sp=0x24, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xd1}, {.addr=0x511b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x511b, .value=0xa6, .type=IO_READ},
        {.addr=0x511c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xff80, .a=0xdf, .x=0x4c, .y=0xc0, .sp=0x91, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0xd6}, {.addr=0xff80, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xff81, .a=0x08, .x=0x4c, .y=0xc0, .sp=0x91, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xd6}, {.addr=0xff80, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xff80, .value=0xa6, .type=IO_READ},
        {.addr=0xff81, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x791e, .a=0x5c, .x=0x7d, .y=0x9b, .sp=0x7c, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0xd0}, {.addr=0x791e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x791f, .a=0x8c, .x=0x7d, .y=0x9b, .sp=0x7c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0xd0}, {.addr=0x791e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x791e, .value=0xa6, .type=IO_READ},
        {.addr=0x791f, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x918b, .a=0x96, .x=0x5a, .y=0x7f, .sp=0x78, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x8e}, {.addr=0x918b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x918c, .a=0x08, .x=0x5a, .y=0x7f, .sp=0x78, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x8e}, {.addr=0x918b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x918b, .value=0xa6, .type=IO_READ},
        {.addr=0x918c, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xd742, .a=0x42, .x=0x38, .y=0xb4, .sp=0xcf, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0xbc}, {.addr=0xd742, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd743, .a=0x85, .x=0x38, .y=0xb4, .sp=0xcf, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0xbc}, {.addr=0xd742, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd742, .value=0xa6, .type=IO_READ},
        {.addr=0xd743, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xfe75, .a=0xb5, .x=0x97, .y=0xe4, .sp=0xbc, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x7d}, {.addr=0xfe75, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfe76, .a=0x37, .x=0x97, .y=0xe4, .sp=0xbc, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x7d}, {.addr=0xfe75, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfe75, .value=0xa6, .type=IO_READ},
        {.addr=0xfe76, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x5f08, .a=0x97, .x=0x41, .y=0x82, .sp=0xe8, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xd6}, {.addr=0x5f08, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5f09, .a=0xc0, .x=0x41, .y=0x82, .sp=0xe8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xd6}, {.addr=0x5f08, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5f08, .value=0xa6, .type=IO_READ},
        {.addr=0x5f09, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x2d37, .a=0x0a, .x=0x5c, .y=0xc5, .sp=0x4d, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x4c}, {.addr=0x2d37, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2d38, .a=0xbd, .x=0x5c, .y=0xc5, .sp=0x4d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x4c}, {.addr=0x2d37, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2d37, .value=0xa6, .type=IO_READ},
        {.addr=0x2d38, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xe3cf, .a=0xcc, .x=0x83, .y=0x3f, .sp=0xa4, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x0a}, {.addr=0xe3cf, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe3d0, .a=0xc2, .x=0x83, .y=0x3f, .sp=0xa4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x0a}, {.addr=0xe3cf, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe3cf, .value=0xa6, .type=IO_READ},
        {.addr=0xe3d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xc711, .a=0x7d, .x=0xe2, .y=0x85, .sp=0xa5, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xbc}, {.addr=0xc711, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc712, .a=0xc0, .x=0xe2, .y=0x85, .sp=0xa5, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xbc}, {.addr=0xc711, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc711, .value=0xa6, .type=IO_READ},
        {.addr=0xc712, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xf3bd, .a=0x0c, .x=0x79, .y=0x47, .sp=0xe1, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0xbe}, {.addr=0xf3bd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf3be, .a=0x4d, .x=0x79, .y=0x47, .sp=0xe1, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xbe}, {.addr=0xf3bd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf3bd, .value=0xa6, .type=IO_READ},
        {.addr=0xf3be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xae02, .a=0xcc, .x=0x14, .y=0xe3, .sp=0x34, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x1c}, {.addr=0xae02, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xae03, .a=0xb0, .x=0x14, .y=0xe3, .sp=0x34, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x1c}, {.addr=0xae02, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xae02, .value=0xa6, .type=IO_READ},
        {.addr=0xae03, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x9cb5, .a=0x25, .x=0xff, .y=0x87, .sp=0x0e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0xdb}, {.addr=0x9cb5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9cb6, .a=0x4a, .x=0xff, .y=0x87, .sp=0x0e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xdb}, {.addr=0x9cb5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9cb5, .value=0xa6, .type=IO_READ},
        {.addr=0x9cb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xbf2b, .a=0x0b, .x=0xe3, .y=0xf8, .sp=0x3a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0xb8}, {.addr=0xbf2b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbf2c, .a=0x52, .x=0xe3, .y=0xf8, .sp=0x3a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0xb8}, {.addr=0xbf2b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbf2b, .value=0xa6, .type=IO_READ},
        {.addr=0xbf2c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xc12a, .a=0x4a, .x=0x1b, .y=0xc4, .sp=0x50, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x2d}, {.addr=0xc12a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc12b, .a=0x1c, .x=0x1b, .y=0xc4, .sp=0x50, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x2d}, {.addr=0xc12a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc12a, .value=0xa6, .type=IO_READ},
        {.addr=0xc12b, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0100) {
    const struct CPU_State initial_cpu = {.pc=0x2d43, .a=0xcf, .x=0xdb, .y=0x6e, .sp=0x84, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x60}, {.addr=0x2d43, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2d44, .a=0x6e, .x=0xdb, .y=0x6e, .sp=0x84, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x60}, {.addr=0x2d43, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2d43, .value=0xa6, .type=IO_READ},
        {.addr=0x2d44, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0101) {
    const struct CPU_State initial_cpu = {.pc=0xe897, .a=0xad, .x=0x0e, .y=0x8d, .sp=0x1d, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0xae}, {.addr=0xe897, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe898, .a=0xff, .x=0x0e, .y=0x8d, .sp=0x1d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0xae}, {.addr=0xe897, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe897, .value=0xa6, .type=IO_READ},
        {.addr=0xe898, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0102) {
    const struct CPU_State initial_cpu = {.pc=0xb2f3, .a=0xa5, .x=0x38, .y=0x1a, .sp=0xbd, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x7e}, {.addr=0xb2f3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb2f4, .a=0x27, .x=0x38, .y=0x1a, .sp=0xbd, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x7e}, {.addr=0xb2f3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb2f3, .value=0xa6, .type=IO_READ},
        {.addr=0xb2f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0103) {
    const struct CPU_State initial_cpu = {.pc=0x9ef8, .a=0x1c, .x=0x69, .y=0x5c, .sp=0xa7, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x18}, {.addr=0x9ef8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9ef9, .a=0x04, .x=0x69, .y=0x5c, .sp=0xa7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x18}, {.addr=0x9ef8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9ef8, .value=0xa6, .type=IO_READ},
        {.addr=0x9ef9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0104) {
    const struct CPU_State initial_cpu = {.pc=0xc013, .a=0xb9, .x=0xeb, .y=0x33, .sp=0x5a, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xf4}, {.addr=0xc013, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc014, .a=0xc5, .x=0xeb, .y=0x33, .sp=0x5a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xf4}, {.addr=0xc013, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc013, .value=0xa6, .type=IO_READ},
        {.addr=0xc014, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0105) {
    const struct CPU_State initial_cpu = {.pc=0x0687, .a=0x97, .x=0xaa, .y=0x5d, .sp=0x58, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0xed}, {.addr=0x0687, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0688, .a=0xa9, .x=0xaa, .y=0x5d, .sp=0x58, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0xed}, {.addr=0x0687, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0687, .value=0xa6, .type=IO_READ},
        {.addr=0x0688, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0106) {
    const struct CPU_State initial_cpu = {.pc=0x5042, .a=0xb4, .x=0x71, .y=0x81, .sp=0xd4, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xcd}, {.addr=0x5042, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5043, .a=0xe6, .x=0x71, .y=0x81, .sp=0xd4, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xcd}, {.addr=0x5042, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5042, .value=0xa6, .type=IO_READ},
        {.addr=0x5043, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0107) {
    const struct CPU_State initial_cpu = {.pc=0xd6f2, .a=0xea, .x=0x6c, .y=0x58, .sp=0xcf, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x8b}, {.addr=0xd6f2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd6f3, .a=0x5e, .x=0x6c, .y=0x58, .sp=0xcf, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0x8b}, {.addr=0xd6f2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd6f2, .value=0xa6, .type=IO_READ},
        {.addr=0xd6f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0108) {
    const struct CPU_State initial_cpu = {.pc=0xe080, .a=0xa2, .x=0xac, .y=0xf8, .sp=0xc5, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x53}, {.addr=0xe080, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe081, .a=0x4f, .x=0xac, .y=0xf8, .sp=0xc5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x53}, {.addr=0xe080, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe080, .value=0xa6, .type=IO_READ},
        {.addr=0xe081, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0109) {
    const struct CPU_State initial_cpu = {.pc=0x1e57, .a=0x33, .x=0xed, .y=0x0b, .sp=0x7d, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x28}, {.addr=0x1e57, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1e58, .a=0x0b, .x=0xed, .y=0x0b, .sp=0x7d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x28}, {.addr=0x1e57, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1e57, .value=0xa6, .type=IO_READ},
        {.addr=0x1e58, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_010A) {
    const struct CPU_State initial_cpu = {.pc=0xd28b, .a=0xee, .x=0xce, .y=0x86, .sp=0xb7, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x50}, {.addr=0xd28b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd28c, .a=0x9d, .x=0xce, .y=0x86, .sp=0xb7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x50}, {.addr=0xd28b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd28b, .value=0xa6, .type=IO_READ},
        {.addr=0xd28c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_010B) {
    const struct CPU_State initial_cpu = {.pc=0xbaae, .a=0x38, .x=0x2f, .y=0xaa, .sp=0x82, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x6b}, {.addr=0xbaae, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbaaf, .a=0xcc, .x=0x2f, .y=0xaa, .sp=0x82, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x6b}, {.addr=0xbaae, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbaae, .value=0xa6, .type=IO_READ},
        {.addr=0xbaaf, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_010C) {
    const struct CPU_State initial_cpu = {.pc=0xc75c, .a=0xa7, .x=0xbe, .y=0xb7, .sp=0xf2, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x8a}, {.addr=0xc75c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc75d, .a=0x1c, .x=0xbe, .y=0xb7, .sp=0xf2, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x8a}, {.addr=0xc75c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc75c, .value=0xa6, .type=IO_READ},
        {.addr=0xc75d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_010D) {
    const struct CPU_State initial_cpu = {.pc=0x98f4, .a=0x70, .x=0x4d, .y=0xae, .sp=0x6c, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x29}, {.addr=0x98f4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x98f5, .a=0x46, .x=0x4d, .y=0xae, .sp=0x6c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x29}, {.addr=0x98f4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x98f4, .value=0xa6, .type=IO_READ},
        {.addr=0x98f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_010E) {
    const struct CPU_State initial_cpu = {.pc=0xf1e7, .a=0xff, .x=0x14, .y=0x4e, .sp=0x37, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x0b}, {.addr=0xf1e7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf1e8, .a=0xf3, .x=0x14, .y=0x4e, .sp=0x37, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x0b}, {.addr=0xf1e7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf1e7, .value=0xa6, .type=IO_READ},
        {.addr=0xf1e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_010F) {
    const struct CPU_State initial_cpu = {.pc=0x9da7, .a=0x5d, .x=0x8a, .y=0x6d, .sp=0xc8, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x7d}, {.addr=0x9da7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9da8, .a=0xdf, .x=0x8a, .y=0x6d, .sp=0xc8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0x7d}, {.addr=0x9da7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9da7, .value=0xa6, .type=IO_READ},
        {.addr=0x9da8, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0110) {
    const struct CPU_State initial_cpu = {.pc=0x84bb, .a=0xb8, .x=0xbf, .y=0x10, .sp=0x3e, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xbe}, {.addr=0x84bb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x84bc, .a=0xf9, .x=0xbf, .y=0x10, .sp=0x3e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xbe}, {.addr=0x84bb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x84bb, .value=0xa6, .type=IO_READ},
        {.addr=0x84bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0111) {
    const struct CPU_State initial_cpu = {.pc=0xf90b, .a=0x2d, .x=0x8f, .y=0x79, .sp=0x57, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0xd8}, {.addr=0xf90b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf90c, .a=0x55, .x=0x8f, .y=0x79, .sp=0x57, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xd8}, {.addr=0xf90b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf90b, .value=0xa6, .type=IO_READ},
        {.addr=0xf90c, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0112) {
    const struct CPU_State initial_cpu = {.pc=0x0997, .a=0x1a, .x=0x5e, .y=0xea, .sp=0xa4, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0xee}, {.addr=0x0997, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0998, .a=0x2c, .x=0x5e, .y=0xea, .sp=0xa4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0xee}, {.addr=0x0997, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0997, .value=0xa6, .type=IO_READ},
        {.addr=0x0998, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0113) {
    const struct CPU_State initial_cpu = {.pc=0x5ef7, .a=0x91, .x=0x49, .y=0x60, .sp=0x6b, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x20}, {.addr=0x5ef7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5ef8, .a=0x70, .x=0x49, .y=0x60, .sp=0x6b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x20}, {.addr=0x5ef7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5ef7, .value=0xa6, .type=IO_READ},
        {.addr=0x5ef8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0114) {
    const struct CPU_State initial_cpu = {.pc=0xce64, .a=0x0f, .x=0xfd, .y=0xbb, .sp=0xca, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0xa0}, {.addr=0xce64, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xce65, .a=0x6e, .x=0xfd, .y=0xbb, .sp=0xca, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xa0}, {.addr=0xce64, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xce64, .value=0xa6, .type=IO_READ},
        {.addr=0xce65, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0117) {
    const struct CPU_State initial_cpu = {.pc=0x8d22, .a=0xeb, .x=0x4a, .y=0xbf, .sp=0x79, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x1a}, {.addr=0x8d22, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8d23, .a=0xd1, .x=0x4a, .y=0xbf, .sp=0x79, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x1a}, {.addr=0x8d22, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8d22, .value=0xa6, .type=IO_READ},
        {.addr=0x8d23, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0118) {
    const struct CPU_State initial_cpu = {.pc=0xce16, .a=0xe4, .x=0xba, .y=0xeb, .sp=0xa6, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x97}, {.addr=0xce16, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xce17, .a=0x4c, .x=0xba, .y=0xeb, .sp=0xa6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x97}, {.addr=0xce16, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xce16, .value=0xa6, .type=IO_READ},
        {.addr=0xce17, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0119) {
    const struct CPU_State initial_cpu = {.pc=0x73e7, .a=0x8c, .x=0x5f, .y=0x4c, .sp=0x32, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0xc0}, {.addr=0x73e7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x73e8, .a=0xcb, .x=0x5f, .y=0x4c, .sp=0x32, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0xc0}, {.addr=0x73e7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x73e7, .value=0xa6, .type=IO_READ},
        {.addr=0x73e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_011A) {
    const struct CPU_State initial_cpu = {.pc=0x5a2d, .a=0x3f, .x=0x75, .y=0x1d, .sp=0xf8, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x9f}, {.addr=0x5a2d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5a2e, .a=0xa0, .x=0x75, .y=0x1d, .sp=0xf8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x9f}, {.addr=0x5a2d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5a2d, .value=0xa6, .type=IO_READ},
        {.addr=0x5a2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_011B) {
    const struct CPU_State initial_cpu = {.pc=0xb337, .a=0x26, .x=0x66, .y=0x5d, .sp=0x1f, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x58}, {.addr=0xb337, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb338, .a=0xce, .x=0x66, .y=0x5d, .sp=0x1f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x58}, {.addr=0xb337, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb337, .value=0xa6, .type=IO_READ},
        {.addr=0xb338, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_011C) {
    const struct CPU_State initial_cpu = {.pc=0x4034, .a=0x88, .x=0x7b, .y=0x39, .sp=0x71, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xc7}, {.addr=0x4034, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4035, .a=0xc0, .x=0x7b, .y=0x39, .sp=0x71, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xc7}, {.addr=0x4034, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4034, .value=0xa6, .type=IO_READ},
        {.addr=0x4035, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_011D) {
    const struct CPU_State initial_cpu = {.pc=0xc950, .a=0xf1, .x=0x72, .y=0xbb, .sp=0x7c, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x43}, {.addr=0xc950, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc951, .a=0xad, .x=0x72, .y=0xbb, .sp=0x7c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x43}, {.addr=0xc950, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc950, .value=0xa6, .type=IO_READ},
        {.addr=0xc951, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_011E) {
    const struct CPU_State initial_cpu = {.pc=0x193d, .a=0xee, .x=0xa4, .y=0x19, .sp=0x81, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x6d}, {.addr=0x193d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x193e, .a=0x81, .x=0xa4, .y=0x19, .sp=0x81, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x6d}, {.addr=0x193d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x193d, .value=0xa6, .type=IO_READ},
        {.addr=0x193e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_011F) {
    const struct CPU_State initial_cpu = {.pc=0x7e11, .a=0x43, .x=0x34, .y=0x35, .sp=0xd8, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0x6e}, {.addr=0x7e11, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7e12, .a=0xd5, .x=0x34, .y=0x35, .sp=0xd8, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0x6e}, {.addr=0x7e11, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7e11, .value=0xa6, .type=IO_READ},
        {.addr=0x7e12, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0120) {
    const struct CPU_State initial_cpu = {.pc=0xf266, .a=0xf6, .x=0xbe, .y=0x03, .sp=0x7e, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x36}, {.addr=0xf266, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf267, .a=0xc0, .x=0xbe, .y=0x03, .sp=0x7e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x36}, {.addr=0xf266, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf266, .value=0xa6, .type=IO_READ},
        {.addr=0xf267, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0121) {
    const struct CPU_State initial_cpu = {.pc=0x580f, .a=0x10, .x=0x77, .y=0x42, .sp=0x45, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x6c}, {.addr=0x580f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5810, .a=0xa3, .x=0x77, .y=0x42, .sp=0x45, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x6c}, {.addr=0x580f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x580f, .value=0xa6, .type=IO_READ},
        {.addr=0x5810, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0122) {
    const struct CPU_State initial_cpu = {.pc=0x2bc1, .a=0x94, .x=0xbc, .y=0x22, .sp=0x5d, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x90}, {.addr=0x2bc1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2bc2, .a=0x04, .x=0xbc, .y=0x22, .sp=0x5d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x90}, {.addr=0x2bc1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2bc1, .value=0xa6, .type=IO_READ},
        {.addr=0x2bc2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0123) {
    const struct CPU_State initial_cpu = {.pc=0x293e, .a=0x21, .x=0x96, .y=0x81, .sp=0xca, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0xc0}, {.addr=0x293e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x293f, .a=0x60, .x=0x96, .y=0x81, .sp=0xca, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0xc0}, {.addr=0x293e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x293e, .value=0xa6, .type=IO_READ},
        {.addr=0x293f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0124) {
    const struct CPU_State initial_cpu = {.pc=0x747d, .a=0x91, .x=0xca, .y=0x78, .sp=0x9e, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x8a}, {.addr=0x747d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x747e, .a=0x06, .x=0xca, .y=0x78, .sp=0x9e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x8a}, {.addr=0x747d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x747d, .value=0xa6, .type=IO_READ},
        {.addr=0x747e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0125) {
    const struct CPU_State initial_cpu = {.pc=0x1a22, .a=0x1b, .x=0x66, .y=0xd7, .sp=0x01, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0xf4}, {.addr=0x1a22, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1a23, .a=0x27, .x=0x66, .y=0xd7, .sp=0x01, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0xf4}, {.addr=0x1a22, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1a22, .value=0xa6, .type=IO_READ},
        {.addr=0x1a23, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0127) {
    const struct CPU_State initial_cpu = {.pc=0x71ea, .a=0xb5, .x=0x50, .y=0x7f, .sp=0x0c, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xc0}, {.addr=0x71ea, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x71eb, .a=0xf4, .x=0x50, .y=0x7f, .sp=0x0c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xc0}, {.addr=0x71ea, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x71ea, .value=0xa6, .type=IO_READ},
        {.addr=0x71eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0128) {
    const struct CPU_State initial_cpu = {.pc=0x62a3, .a=0x3d, .x=0x4c, .y=0x21, .sp=0x32, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x48}, {.addr=0x62a3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x62a4, .a=0xf5, .x=0x4c, .y=0x21, .sp=0x32, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0x48}, {.addr=0x62a3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x62a3, .value=0xa6, .type=IO_READ},
        {.addr=0x62a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0129) {
    const struct CPU_State initial_cpu = {.pc=0x20fb, .a=0x46, .x=0xc8, .y=0x06, .sp=0x46, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0xdf}, {.addr=0x20fb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x20fc, .a=0x66, .x=0xc8, .y=0x06, .sp=0x46, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0xdf}, {.addr=0x20fb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x20fb, .value=0xa6, .type=IO_READ},
        {.addr=0x20fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_012A) {
    const struct CPU_State initial_cpu = {.pc=0xcc70, .a=0xa9, .x=0x6a, .y=0xfb, .sp=0xe3, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x66}, {.addr=0xcc70, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcc71, .a=0x42, .x=0x6a, .y=0xfb, .sp=0xe3, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x66}, {.addr=0xcc70, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcc70, .value=0xa6, .type=IO_READ},
        {.addr=0xcc71, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_012B) {
    const struct CPU_State initial_cpu = {.pc=0x67a2, .a=0xfa, .x=0xf3, .y=0xda, .sp=0x6e, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x4f}, {.addr=0x67a2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x67a3, .a=0xab, .x=0xf3, .y=0xda, .sp=0x6e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x4f}, {.addr=0x67a2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x67a2, .value=0xa6, .type=IO_READ},
        {.addr=0x67a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_012C) {
    const struct CPU_State initial_cpu = {.pc=0x9429, .a=0x62, .x=0x29, .y=0x06, .sp=0xba, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xbe}, {.addr=0x9429, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x942a, .a=0xa4, .x=0x29, .y=0x06, .sp=0xba, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xbe}, {.addr=0x9429, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9429, .value=0xa6, .type=IO_READ},
        {.addr=0x942a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_012D) {
    const struct CPU_State initial_cpu = {.pc=0xab47, .a=0x1c, .x=0x2a, .y=0x9d, .sp=0x37, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xae}, {.addr=0xab47, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xab48, .a=0x6d, .x=0x2a, .y=0x9d, .sp=0x37, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xae}, {.addr=0xab47, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xab47, .value=0xa6, .type=IO_READ},
        {.addr=0xab48, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_012E) {
    const struct CPU_State initial_cpu = {.pc=0x9920, .a=0xcc, .x=0x86, .y=0x5b, .sp=0xbf, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x7b}, {.addr=0x9920, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9921, .a=0x50, .x=0x86, .y=0x5b, .sp=0xbf, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x7b}, {.addr=0x9920, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9920, .value=0xa6, .type=IO_READ},
        {.addr=0x9921, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_012F) {
    const struct CPU_State initial_cpu = {.pc=0x7830, .a=0xc9, .x=0xe7, .y=0x3e, .sp=0x3f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xff}, {.addr=0x7830, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7831, .a=0xca, .x=0xe7, .y=0x3e, .sp=0x3f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xff}, {.addr=0x7830, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7830, .value=0xa6, .type=IO_READ},
        {.addr=0x7831, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0130) {
    const struct CPU_State initial_cpu = {.pc=0x6be1, .a=0x67, .x=0x09, .y=0x9a, .sp=0x9b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x18}, {.addr=0x6be1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6be2, .a=0x4e, .x=0x09, .y=0x9a, .sp=0x9b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x18}, {.addr=0x6be1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6be1, .value=0xa6, .type=IO_READ},
        {.addr=0x6be2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0131) {
    const struct CPU_State initial_cpu = {.pc=0x96b7, .a=0x91, .x=0x18, .y=0x7f, .sp=0xc3, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x1a}, {.addr=0x96b7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x96b8, .a=0x77, .x=0x18, .y=0x7f, .sp=0xc3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x1a}, {.addr=0x96b7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x96b7, .value=0xa6, .type=IO_READ},
        {.addr=0x96b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0132) {
    const struct CPU_State initial_cpu = {.pc=0xeff7, .a=0x8e, .x=0x89, .y=0x9c, .sp=0x85, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x57}, {.addr=0xeff7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xeff8, .a=0x36, .x=0x89, .y=0x9c, .sp=0x85, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x57}, {.addr=0xeff7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xeff7, .value=0xa6, .type=IO_READ},
        {.addr=0xeff8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0133) {
    const struct CPU_State initial_cpu = {.pc=0x8054, .a=0xca, .x=0x21, .y=0x30, .sp=0x22, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x14}, {.addr=0x8054, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8055, .a=0xb6, .x=0x21, .y=0x30, .sp=0x22, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x14}, {.addr=0x8054, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8054, .value=0xa6, .type=IO_READ},
        {.addr=0x8055, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0134) {
    const struct CPU_State initial_cpu = {.pc=0x0f05, .a=0x1c, .x=0x62, .y=0xce, .sp=0x68, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x21}, {.addr=0x0f05, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0f06, .a=0xfa, .x=0x62, .y=0xce, .sp=0x68, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x21}, {.addr=0x0f05, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0f05, .value=0xa6, .type=IO_READ},
        {.addr=0x0f06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0135) {
    const struct CPU_State initial_cpu = {.pc=0x4e27, .a=0x42, .x=0x24, .y=0x84, .sp=0x86, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0x65}, {.addr=0x4e27, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4e28, .a=0xdd, .x=0x24, .y=0x84, .sp=0x86, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0x65}, {.addr=0x4e27, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4e27, .value=0xa6, .type=IO_READ},
        {.addr=0x4e28, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0136) {
    const struct CPU_State initial_cpu = {.pc=0x471c, .a=0x14, .x=0x93, .y=0xd6, .sp=0x60, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xd1}, {.addr=0x471c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x471d, .a=0x43, .x=0x93, .y=0xd6, .sp=0x60, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xd1}, {.addr=0x471c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x471c, .value=0xa6, .type=IO_READ},
        {.addr=0x471d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0137) {
    const struct CPU_State initial_cpu = {.pc=0x3576, .a=0xc5, .x=0x3a, .y=0x3f, .sp=0x56, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0xc8}, {.addr=0x3576, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3577, .a=0xfc, .x=0x3a, .y=0x3f, .sp=0x56, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xc8}, {.addr=0x3576, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3576, .value=0xa6, .type=IO_READ},
        {.addr=0x3577, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0138) {
    const struct CPU_State initial_cpu = {.pc=0x6086, .a=0x4d, .x=0xa8, .y=0x48, .sp=0x69, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x25}, {.addr=0x6086, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6087, .a=0x27, .x=0xa8, .y=0x48, .sp=0x69, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x25}, {.addr=0x6086, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6086, .value=0xa6, .type=IO_READ},
        {.addr=0x6087, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0139) {
    const struct CPU_State initial_cpu = {.pc=0x94a4, .a=0x16, .x=0x39, .y=0x97, .sp=0xf9, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0xd6}, {.addr=0x94a4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x94a5, .a=0x3f, .x=0x39, .y=0x97, .sp=0xf9, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0xd6}, {.addr=0x94a4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x94a4, .value=0xa6, .type=IO_READ},
        {.addr=0x94a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_013A) {
    const struct CPU_State initial_cpu = {.pc=0x58f5, .a=0xd6, .x=0x81, .y=0x54, .sp=0xf5, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0xad}, {.addr=0x58f5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x58f6, .a=0x28, .x=0x81, .y=0x54, .sp=0xf5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0xad}, {.addr=0x58f5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x58f5, .value=0xa6, .type=IO_READ},
        {.addr=0x58f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_013B) {
    const struct CPU_State initial_cpu = {.pc=0x4209, .a=0x02, .x=0x84, .y=0x56, .sp=0xe6, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x88}, {.addr=0x4209, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x420a, .a=0x79, .x=0x84, .y=0x56, .sp=0xe6, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x88}, {.addr=0x4209, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4209, .value=0xa6, .type=IO_READ},
        {.addr=0x420a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_013C) {
    const struct CPU_State initial_cpu = {.pc=0xbd2d, .a=0xdb, .x=0x7a, .y=0xd6, .sp=0xdb, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x28}, {.addr=0xbd2d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbd2e, .a=0xb3, .x=0x7a, .y=0xd6, .sp=0xdb, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x28}, {.addr=0xbd2d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbd2d, .value=0xa6, .type=IO_READ},
        {.addr=0xbd2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_013D) {
    const struct CPU_State initial_cpu = {.pc=0x3aae, .a=0xeb, .x=0x7d, .y=0x5b, .sp=0xf4, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x9f}, {.addr=0x3aae, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3aaf, .a=0x4c, .x=0x7d, .y=0x5b, .sp=0xf4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x9f}, {.addr=0x3aae, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3aae, .value=0xa6, .type=IO_READ},
        {.addr=0x3aaf, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_013E) {
    const struct CPU_State initial_cpu = {.pc=0x27ec, .a=0x5a, .x=0x59, .y=0xbd, .sp=0x57, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0xb1}, {.addr=0x27ec, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x27ed, .a=0xa9, .x=0x59, .y=0xbd, .sp=0x57, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0xb1}, {.addr=0x27ec, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x27ec, .value=0xa6, .type=IO_READ},
        {.addr=0x27ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_013F) {
    const struct CPU_State initial_cpu = {.pc=0xd99a, .a=0xda, .x=0xd6, .y=0xc6, .sp=0xdd, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xf3}, {.addr=0xd99a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd99b, .a=0xe7, .x=0xd6, .y=0xc6, .sp=0xdd, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xf3}, {.addr=0xd99a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd99a, .value=0xa6, .type=IO_READ},
        {.addr=0xd99b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0140) {
    const struct CPU_State initial_cpu = {.pc=0x30b8, .a=0x92, .x=0x66, .y=0x4e, .sp=0xef, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x2c}, {.addr=0x30b8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x30b9, .a=0x65, .x=0x66, .y=0x4e, .sp=0xef, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x2c}, {.addr=0x30b8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x30b8, .value=0xa6, .type=IO_READ},
        {.addr=0x30b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0141) {
    const struct CPU_State initial_cpu = {.pc=0x48ce, .a=0x60, .x=0xcb, .y=0x44, .sp=0x6e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x7e}, {.addr=0x48ce, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x48cf, .a=0xe1, .x=0xcb, .y=0x44, .sp=0x6e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x7e}, {.addr=0x48ce, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x48ce, .value=0xa6, .type=IO_READ},
        {.addr=0x48cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0142) {
    const struct CPU_State initial_cpu = {.pc=0x1d89, .a=0x42, .x=0x78, .y=0x8a, .sp=0xc6, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x93}, {.addr=0x1d89, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1d8a, .a=0xaf, .x=0x78, .y=0x8a, .sp=0xc6, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x93}, {.addr=0x1d89, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1d89, .value=0xa6, .type=IO_READ},
        {.addr=0x1d8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0143) {
    const struct CPU_State initial_cpu = {.pc=0xd0dc, .a=0x04, .x=0x3a, .y=0x7c, .sp=0x85, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x65}, {.addr=0xd0dc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd0dd, .a=0x9f, .x=0x3a, .y=0x7c, .sp=0x85, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x65}, {.addr=0xd0dc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd0dc, .value=0xa6, .type=IO_READ},
        {.addr=0xd0dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0144) {
    const struct CPU_State initial_cpu = {.pc=0x2e76, .a=0x6d, .x=0xdb, .y=0xc8, .sp=0xc8, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0xef}, {.addr=0x2e76, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2e77, .a=0x7d, .x=0xdb, .y=0xc8, .sp=0xc8, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0xef}, {.addr=0x2e76, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2e76, .value=0xa6, .type=IO_READ},
        {.addr=0x2e77, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0145) {
    const struct CPU_State initial_cpu = {.pc=0x6713, .a=0x8a, .x=0x18, .y=0x13, .sp=0x22, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x14}, {.addr=0x6713, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6714, .a=0x75, .x=0x18, .y=0x13, .sp=0x22, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x14}, {.addr=0x6713, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6713, .value=0xa6, .type=IO_READ},
        {.addr=0x6714, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0146) {
    const struct CPU_State initial_cpu = {.pc=0x9935, .a=0x1d, .x=0xa5, .y=0xb8, .sp=0xc9, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xab}, {.addr=0x9935, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9936, .a=0x72, .x=0xa5, .y=0xb8, .sp=0xc9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xab}, {.addr=0x9935, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9935, .value=0xa6, .type=IO_READ},
        {.addr=0x9936, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0147) {
    const struct CPU_State initial_cpu = {.pc=0x2647, .a=0x7a, .x=0x6d, .y=0x06, .sp=0xff, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0xd7}, {.addr=0x2647, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2648, .a=0xa3, .x=0x6d, .y=0x06, .sp=0xff, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0xd7}, {.addr=0x2647, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2647, .value=0xa6, .type=IO_READ},
        {.addr=0x2648, .value=DUMMY, .type=IO_READ},
        {.addr=0x006d, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0148) {
    const struct CPU_State initial_cpu = {.pc=0x991c, .a=0xe0, .x=0x4e, .y=0xb1, .sp=0x37, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x44}, {.addr=0x991c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x991d, .a=0x9b, .x=0x4e, .y=0xb1, .sp=0x37, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x44}, {.addr=0x991c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x991c, .value=0xa6, .type=IO_READ},
        {.addr=0x991d, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0149) {
    const struct CPU_State initial_cpu = {.pc=0x1277, .a=0xb0, .x=0x9c, .y=0xd4, .sp=0xe4, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x7b}, {.addr=0x1277, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1278, .a=0x35, .x=0x9c, .y=0xd4, .sp=0xe4, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x7b}, {.addr=0x1277, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1277, .value=0xa6, .type=IO_READ},
        {.addr=0x1278, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_014A) {
    const struct CPU_State initial_cpu = {.pc=0xb30e, .a=0x4c, .x=0x68, .y=0x7b, .sp=0xaf, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0x27}, {.addr=0xb30e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb30f, .a=0x24, .x=0x68, .y=0x7b, .sp=0xaf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0x27}, {.addr=0xb30e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb30e, .value=0xa6, .type=IO_READ},
        {.addr=0xb30f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_014B) {
    const struct CPU_State initial_cpu = {.pc=0xb19d, .a=0xa4, .x=0x15, .y=0xe4, .sp=0xa9, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x82}, {.addr=0xb19d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb19e, .a=0x22, .x=0x15, .y=0xe4, .sp=0xa9, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x82}, {.addr=0xb19d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb19d, .value=0xa6, .type=IO_READ},
        {.addr=0xb19e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_014C) {
    const struct CPU_State initial_cpu = {.pc=0x1b32, .a=0x07, .x=0x24, .y=0x61, .sp=0x87, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0xac}, {.addr=0x1b32, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1b33, .a=0x5a, .x=0x24, .y=0x61, .sp=0x87, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0xac}, {.addr=0x1b32, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1b32, .value=0xa6, .type=IO_READ},
        {.addr=0x1b33, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_014D) {
    const struct CPU_State initial_cpu = {.pc=0x4a79, .a=0xa8, .x=0xab, .y=0xa6, .sp=0x99, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x9a}, {.addr=0x4a79, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4a7a, .a=0x0e, .x=0xab, .y=0xa6, .sp=0x99, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x9a}, {.addr=0x4a79, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4a79, .value=0xa6, .type=IO_READ},
        {.addr=0x4a7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_014E) {
    const struct CPU_State initial_cpu = {.pc=0x0aaa, .a=0xfa, .x=0x79, .y=0xa8, .sp=0xb4, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0xb4}, {.addr=0x0aaa, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0aab, .a=0x46, .x=0x79, .y=0xa8, .sp=0xb4, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0xb4}, {.addr=0x0aaa, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0aaa, .value=0xa6, .type=IO_READ},
        {.addr=0x0aab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_014F) {
    const struct CPU_State initial_cpu = {.pc=0xcfe9, .a=0x06, .x=0xf1, .y=0x63, .sp=0x26, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x94}, {.addr=0xcfe9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcfea, .a=0x72, .x=0xf1, .y=0x63, .sp=0x26, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x94}, {.addr=0xcfe9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcfe9, .value=0xa6, .type=IO_READ},
        {.addr=0xcfea, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0150) {
    const struct CPU_State initial_cpu = {.pc=0xbcd0, .a=0x78, .x=0xd1, .y=0xbb, .sp=0x94, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x59}, {.addr=0xbcd0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbcd1, .a=0x1e, .x=0xd1, .y=0xbb, .sp=0x94, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x59}, {.addr=0xbcd0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbcd0, .value=0xa6, .type=IO_READ},
        {.addr=0xbcd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0151) {
    const struct CPU_State initial_cpu = {.pc=0x36f5, .a=0xe7, .x=0xc1, .y=0xe0, .sp=0x48, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0xe7}, {.addr=0x36f5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x36f6, .a=0xff, .x=0xc1, .y=0xe0, .sp=0x48, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0xe7}, {.addr=0x36f5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x36f5, .value=0xa6, .type=IO_READ},
        {.addr=0x36f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0152) {
    const struct CPU_State initial_cpu = {.pc=0xe90d, .a=0x11, .x=0xfc, .y=0xc5, .sp=0x45, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x1a}, {.addr=0xe90d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe90e, .a=0xf6, .x=0xfc, .y=0xc5, .sp=0x45, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x1a}, {.addr=0xe90d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe90d, .value=0xa6, .type=IO_READ},
        {.addr=0xe90e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0153) {
    const struct CPU_State initial_cpu = {.pc=0x5893, .a=0x43, .x=0xca, .y=0x3f, .sp=0x13, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0xa9}, {.addr=0x5893, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5894, .a=0x99, .x=0xca, .y=0x3f, .sp=0x13, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0xa9}, {.addr=0x5893, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5893, .value=0xa6, .type=IO_READ},
        {.addr=0x5894, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0154) {
    const struct CPU_State initial_cpu = {.pc=0x0a11, .a=0x32, .x=0x10, .y=0x8d, .sp=0x3a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x50}, {.addr=0x0a11, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0a12, .a=0xe2, .x=0x10, .y=0x8d, .sp=0x3a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x50}, {.addr=0x0a11, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0a11, .value=0xa6, .type=IO_READ},
        {.addr=0x0a12, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0155) {
    const struct CPU_State initial_cpu = {.pc=0x203f, .a=0x66, .x=0x01, .y=0xa8, .sp=0x57, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0xec}, {.addr=0x203f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2040, .a=0x7a, .x=0x01, .y=0xa8, .sp=0x57, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xec}, {.addr=0x203f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x203f, .value=0xa6, .type=IO_READ},
        {.addr=0x2040, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0156) {
    const struct CPU_State initial_cpu = {.pc=0x916f, .a=0xf7, .x=0x54, .y=0x07, .sp=0x40, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x30}, {.addr=0x916f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9170, .a=0xc7, .x=0x54, .y=0x07, .sp=0x40, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x30}, {.addr=0x916f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x916f, .value=0xa6, .type=IO_READ},
        {.addr=0x9170, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0157) {
    const struct CPU_State initial_cpu = {.pc=0x88c3, .a=0x68, .x=0xa2, .y=0x6f, .sp=0x2c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xc6}, {.addr=0x88c3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x88c4, .a=0xa1, .x=0xa2, .y=0x6f, .sp=0x2c, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xc6}, {.addr=0x88c3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x88c3, .value=0xa6, .type=IO_READ},
        {.addr=0x88c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0158) {
    const struct CPU_State initial_cpu = {.pc=0x0e53, .a=0x01, .x=0x78, .y=0x23, .sp=0xd1, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x3b}, {.addr=0x0e53, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0e54, .a=0xc6, .x=0x78, .y=0x23, .sp=0xd1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x3b}, {.addr=0x0e53, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0e53, .value=0xa6, .type=IO_READ},
        {.addr=0x0e54, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0159) {
    const struct CPU_State initial_cpu = {.pc=0x2f60, .a=0x68, .x=0x1e, .y=0x1f, .sp=0x02, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0xc8}, {.addr=0x2f60, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2f61, .a=0xa0, .x=0x1e, .y=0x1f, .sp=0x02, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0xc8}, {.addr=0x2f60, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2f60, .value=0xa6, .type=IO_READ},
        {.addr=0x2f61, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_015A) {
    const struct CPU_State initial_cpu = {.pc=0xf315, .a=0xf5, .x=0xbb, .y=0xb6, .sp=0xbe, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0x07}, {.addr=0xf315, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf316, .a=0xee, .x=0xbb, .y=0xb6, .sp=0xbe, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x07}, {.addr=0xf315, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf315, .value=0xa6, .type=IO_READ},
        {.addr=0xf316, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_015C) {
    const struct CPU_State initial_cpu = {.pc=0x2d42, .a=0x1c, .x=0xb9, .y=0x53, .sp=0xe1, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0x53}, {.addr=0x2d42, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2d43, .a=0xc8, .x=0xb9, .y=0x53, .sp=0xe1, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0x53}, {.addr=0x2d42, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2d42, .value=0xa6, .type=IO_READ},
        {.addr=0x2d43, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_015D) {
    const struct CPU_State initial_cpu = {.pc=0x69d0, .a=0xd2, .x=0x09, .y=0x80, .sp=0x14, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xa5}, {.addr=0x69d0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x69d1, .a=0x2c, .x=0x09, .y=0x80, .sp=0x14, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xa5}, {.addr=0x69d0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x69d0, .value=0xa6, .type=IO_READ},
        {.addr=0x69d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_015E) {
    const struct CPU_State initial_cpu = {.pc=0x538f, .a=0x74, .x=0xc4, .y=0x24, .sp=0x29, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x30}, {.addr=0x538f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5390, .a=0x43, .x=0xc4, .y=0x24, .sp=0x29, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x30}, {.addr=0x538f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x538f, .value=0xa6, .type=IO_READ},
        {.addr=0x5390, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_015F) {
    const struct CPU_State initial_cpu = {.pc=0xcb4b, .a=0xb5, .x=0xa4, .y=0x64, .sp=0x79, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x83}, {.addr=0xcb4b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcb4c, .a=0x32, .x=0xa4, .y=0x64, .sp=0x79, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x83}, {.addr=0xcb4b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcb4b, .value=0xa6, .type=IO_READ},
        {.addr=0xcb4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0160) {
    const struct CPU_State initial_cpu = {.pc=0xd8d0, .a=0x58, .x=0xeb, .y=0x9d, .sp=0xfa, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0xeb}, {.addr=0xd8d0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd8d1, .a=0x6c, .x=0xeb, .y=0x9d, .sp=0xfa, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0xeb}, {.addr=0xd8d0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd8d0, .value=0xa6, .type=IO_READ},
        {.addr=0xd8d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0161) {
    const struct CPU_State initial_cpu = {.pc=0x48b6, .a=0x76, .x=0x5e, .y=0x9b, .sp=0xee, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0x03}, {.addr=0x48b6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x48b7, .a=0x73, .x=0x5e, .y=0x9b, .sp=0xee, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0x03}, {.addr=0x48b6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x48b6, .value=0xa6, .type=IO_READ},
        {.addr=0x48b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0162) {
    const struct CPU_State initial_cpu = {.pc=0xcdc4, .a=0x0b, .x=0x64, .y=0xce, .sp=0xb3, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0xf8}, {.addr=0xcdc4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcdc5, .a=0x12, .x=0x64, .y=0xce, .sp=0xb3, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0xf8}, {.addr=0xcdc4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcdc4, .value=0xa6, .type=IO_READ},
        {.addr=0xcdc5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0163) {
    const struct CPU_State initial_cpu = {.pc=0x5a93, .a=0x5b, .x=0x74, .y=0x69, .sp=0x3e, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x3a}, {.addr=0x5a93, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5a94, .a=0x20, .x=0x74, .y=0x69, .sp=0x3e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x3a}, {.addr=0x5a93, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5a93, .value=0xa6, .type=IO_READ},
        {.addr=0x5a94, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0164) {
    const struct CPU_State initial_cpu = {.pc=0x6867, .a=0xe6, .x=0xb7, .y=0x92, .sp=0xf5, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x7e}, {.addr=0x6867, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6868, .a=0x67, .x=0xb7, .y=0x92, .sp=0xf5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x7e}, {.addr=0x6867, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6867, .value=0xa6, .type=IO_READ},
        {.addr=0x6868, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0165) {
    const struct CPU_State initial_cpu = {.pc=0x0a25, .a=0x87, .x=0xc2, .y=0x6e, .sp=0xc6, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0x3c}, {.addr=0x0a25, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0a26, .a=0x4a, .x=0xc2, .y=0x6e, .sp=0xc6, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0x3c}, {.addr=0x0a25, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0a25, .value=0xa6, .type=IO_READ},
        {.addr=0x0a26, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0166) {
    const struct CPU_State initial_cpu = {.pc=0xd913, .a=0x7c, .x=0x23, .y=0x12, .sp=0x2f, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xf3}, {.addr=0xd913, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd914, .a=0x88, .x=0x23, .y=0x12, .sp=0x2f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xf3}, {.addr=0xd913, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd913, .value=0xa6, .type=IO_READ},
        {.addr=0xd914, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0167) {
    const struct CPU_State initial_cpu = {.pc=0xda1a, .a=0x90, .x=0x63, .y=0x15, .sp=0x29, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xdc}, {.addr=0xda1a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xda1b, .a=0xb4, .x=0x63, .y=0x15, .sp=0x29, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xdc}, {.addr=0xda1a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xda1a, .value=0xa6, .type=IO_READ},
        {.addr=0xda1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0169) {
    const struct CPU_State initial_cpu = {.pc=0x6730, .a=0xef, .x=0x89, .y=0x20, .sp=0xbb, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x5d}, {.addr=0x6730, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6731, .a=0x92, .x=0x89, .y=0x20, .sp=0xbb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x5d}, {.addr=0x6730, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6730, .value=0xa6, .type=IO_READ},
        {.addr=0x6731, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_016A) {
    const struct CPU_State initial_cpu = {.pc=0xff79, .a=0x9b, .x=0x3c, .y=0x2b, .sp=0xf9, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x57}, {.addr=0xff79, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xff7a, .a=0x43, .x=0x3c, .y=0x2b, .sp=0xf9, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x57}, {.addr=0xff79, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xff79, .value=0xa6, .type=IO_READ},
        {.addr=0xff7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_016B) {
    const struct CPU_State initial_cpu = {.pc=0x903b, .a=0xa8, .x=0x85, .y=0x8f, .sp=0x6a, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xe7}, {.addr=0x903b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x903c, .a=0xc1, .x=0x85, .y=0x8f, .sp=0x6a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xe7}, {.addr=0x903b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x903b, .value=0xa6, .type=IO_READ},
        {.addr=0x903c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_016C) {
    const struct CPU_State initial_cpu = {.pc=0xa48e, .a=0xec, .x=0x95, .y=0x67, .sp=0x58, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x0d}, {.addr=0xa48e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa48f, .a=0xde, .x=0x95, .y=0x67, .sp=0x58, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x0d}, {.addr=0xa48e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa48e, .value=0xa6, .type=IO_READ},
        {.addr=0xa48f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_016D) {
    const struct CPU_State initial_cpu = {.pc=0xe81e, .a=0x57, .x=0x18, .y=0x70, .sp=0x29, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x87}, {.addr=0xe81e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe81f, .a=0xcf, .x=0x18, .y=0x70, .sp=0x29, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x87}, {.addr=0xe81e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe81e, .value=0xa6, .type=IO_READ},
        {.addr=0xe81f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_016E) {
    const struct CPU_State initial_cpu = {.pc=0x6973, .a=0x89, .x=0x74, .y=0xec, .sp=0x20, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x8f}, {.addr=0x6973, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6974, .a=0xfa, .x=0x74, .y=0xec, .sp=0x20, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x8f}, {.addr=0x6973, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6973, .value=0xa6, .type=IO_READ},
        {.addr=0x6974, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_016F) {
    const struct CPU_State initial_cpu = {.pc=0x3f0e, .a=0xf1, .x=0xbc, .y=0x62, .sp=0x51, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x71}, {.addr=0x3f0e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3f0f, .a=0x7f, .x=0xbc, .y=0x62, .sp=0x51, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x71}, {.addr=0x3f0e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3f0e, .value=0xa6, .type=IO_READ},
        {.addr=0x3f0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0170) {
    const struct CPU_State initial_cpu = {.pc=0xed5b, .a=0xe1, .x=0x3f, .y=0x22, .sp=0x7c, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x85}, {.addr=0xed5b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xed5c, .a=0x5b, .x=0x3f, .y=0x22, .sp=0x7c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x85}, {.addr=0xed5b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xed5b, .value=0xa6, .type=IO_READ},
        {.addr=0xed5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0171) {
    const struct CPU_State initial_cpu = {.pc=0xe355, .a=0x66, .x=0xa4, .y=0x3d, .sp=0xbf, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0xd2}, {.addr=0xe355, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe356, .a=0x93, .x=0xa4, .y=0x3d, .sp=0xbf, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0xd2}, {.addr=0xe355, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe355, .value=0xa6, .type=IO_READ},
        {.addr=0xe356, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0172) {
    const struct CPU_State initial_cpu = {.pc=0x7f3c, .a=0x6b, .x=0x91, .y=0x1c, .sp=0x7b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x01}, {.addr=0x7f3c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7f3d, .a=0x69, .x=0x91, .y=0x1c, .sp=0x7b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x01}, {.addr=0x7f3c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7f3c, .value=0xa6, .type=IO_READ},
        {.addr=0x7f3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0173) {
    const struct CPU_State initial_cpu = {.pc=0xebf9, .a=0x94, .x=0x77, .y=0x68, .sp=0xd5, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0xb1}, {.addr=0xebf9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xebfa, .a=0xe2, .x=0x77, .y=0x68, .sp=0xd5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0xb1}, {.addr=0xebf9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xebf9, .value=0xa6, .type=IO_READ},
        {.addr=0xebfa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0174) {
    const struct CPU_State initial_cpu = {.pc=0xf8a5, .a=0x02, .x=0x10, .y=0xe9, .sp=0xa1, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x3f}, {.addr=0xf8a5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf8a6, .a=0xc2, .x=0x10, .y=0xe9, .sp=0xa1, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x3f}, {.addr=0xf8a5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf8a5, .value=0xa6, .type=IO_READ},
        {.addr=0xf8a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0175) {
    const struct CPU_State initial_cpu = {.pc=0x9a54, .a=0xf0, .x=0xac, .y=0xb8, .sp=0xc0, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x51}, {.addr=0x9a54, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9a55, .a=0x9e, .x=0xac, .y=0xb8, .sp=0xc0, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x51}, {.addr=0x9a54, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9a54, .value=0xa6, .type=IO_READ},
        {.addr=0x9a55, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0176) {
    const struct CPU_State initial_cpu = {.pc=0x8042, .a=0x91, .x=0x82, .y=0x81, .sp=0x5e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xf6}, {.addr=0x8042, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8043, .a=0x9a, .x=0x82, .y=0x81, .sp=0x5e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xf6}, {.addr=0x8042, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8042, .value=0xa6, .type=IO_READ},
        {.addr=0x8043, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0177) {
    const struct CPU_State initial_cpu = {.pc=0xc279, .a=0x9b, .x=0x9a, .y=0xa9, .sp=0x12, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x79}, {.addr=0xc279, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc27a, .a=0x21, .x=0x9a, .y=0xa9, .sp=0x12, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x79}, {.addr=0xc279, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc279, .value=0xa6, .type=IO_READ},
        {.addr=0xc27a, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0178) {
    const struct CPU_State initial_cpu = {.pc=0x4220, .a=0x9d, .x=0x72, .y=0xd4, .sp=0xab, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x25}, {.addr=0x4220, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4221, .a=0x77, .x=0x72, .y=0xd4, .sp=0xab, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x25}, {.addr=0x4220, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4220, .value=0xa6, .type=IO_READ},
        {.addr=0x4221, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0179) {
    const struct CPU_State initial_cpu = {.pc=0x328e, .a=0xea, .x=0x44, .y=0x10, .sp=0x2d, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x99}, {.addr=0x328e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x328f, .a=0x50, .x=0x44, .y=0x10, .sp=0x2d, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x99}, {.addr=0x328e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x328e, .value=0xa6, .type=IO_READ},
        {.addr=0x328f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_017A) {
    const struct CPU_State initial_cpu = {.pc=0x5804, .a=0x87, .x=0x2f, .y=0xbe, .sp=0xb9, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0xa2}, {.addr=0x5804, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5805, .a=0xe4, .x=0x2f, .y=0xbe, .sp=0xb9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0xa2}, {.addr=0x5804, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5804, .value=0xa6, .type=IO_READ},
        {.addr=0x5805, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_017B) {
    const struct CPU_State initial_cpu = {.pc=0x7332, .a=0xba, .x=0x7c, .y=0x19, .sp=0xb6, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x6b}, {.addr=0x7332, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7333, .a=0x4f, .x=0x7c, .y=0x19, .sp=0xb6, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x6b}, {.addr=0x7332, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7332, .value=0xa6, .type=IO_READ},
        {.addr=0x7333, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_017C) {
    const struct CPU_State initial_cpu = {.pc=0xd34a, .a=0x24, .x=0x39, .y=0x5b, .sp=0x62, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x91}, {.addr=0xd34a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd34b, .a=0x93, .x=0x39, .y=0x5b, .sp=0x62, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x91}, {.addr=0xd34a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd34a, .value=0xa6, .type=IO_READ},
        {.addr=0xd34b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_017D) {
    const struct CPU_State initial_cpu = {.pc=0x30a9, .a=0x91, .x=0xec, .y=0x92, .sp=0xed, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0xe6}, {.addr=0x30a9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x30aa, .a=0xab, .x=0xec, .y=0x92, .sp=0xed, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xe6}, {.addr=0x30a9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x30a9, .value=0xa6, .type=IO_READ},
        {.addr=0x30aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_017E) {
    const struct CPU_State initial_cpu = {.pc=0xde96, .a=0xfd, .x=0x7a, .y=0x9e, .sp=0x4c, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x57}, {.addr=0xde96, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xde97, .a=0xa5, .x=0x7a, .y=0x9e, .sp=0x4c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x57}, {.addr=0xde96, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xde96, .value=0xa6, .type=IO_READ},
        {.addr=0xde97, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_017F) {
    const struct CPU_State initial_cpu = {.pc=0x72fd, .a=0x8e, .x=0x8f, .y=0xc4, .sp=0xe0, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x64}, {.addr=0x72fd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x72fe, .a=0x2a, .x=0x8f, .y=0xc4, .sp=0xe0, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x64}, {.addr=0x72fd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x72fd, .value=0xa6, .type=IO_READ},
        {.addr=0x72fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0180) {
    const struct CPU_State initial_cpu = {.pc=0xbf54, .a=0x69, .x=0x73, .y=0x92, .sp=0x94, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x58}, {.addr=0xbf54, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbf55, .a=0x11, .x=0x73, .y=0x92, .sp=0x94, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x58}, {.addr=0xbf54, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbf54, .value=0xa6, .type=IO_READ},
        {.addr=0xbf55, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0181) {
    const struct CPU_State initial_cpu = {.pc=0xc159, .a=0x9d, .x=0x65, .y=0xd9, .sp=0x0d, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xab}, {.addr=0xc159, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc15a, .a=0xf1, .x=0x65, .y=0xd9, .sp=0x0d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xab}, {.addr=0xc159, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc159, .value=0xa6, .type=IO_READ},
        {.addr=0xc15a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0182) {
    const struct CPU_State initial_cpu = {.pc=0x83ac, .a=0x7b, .x=0x38, .y=0x1a, .sp=0x77, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0xba}, {.addr=0x83ac, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x83ad, .a=0xc1, .x=0x38, .y=0x1a, .sp=0x77, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0xba}, {.addr=0x83ac, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x83ac, .value=0xa6, .type=IO_READ},
        {.addr=0x83ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0184) {
    const struct CPU_State initial_cpu = {.pc=0xc47e, .a=0x9d, .x=0x8c, .y=0x69, .sp=0x20, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x94}, {.addr=0xc47e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc47f, .a=0x09, .x=0x8c, .y=0x69, .sp=0x20, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x94}, {.addr=0xc47e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc47e, .value=0xa6, .type=IO_READ},
        {.addr=0xc47f, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0185) {
    const struct CPU_State initial_cpu = {.pc=0xb85b, .a=0x1e, .x=0x1c, .y=0xd7, .sp=0xb5, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x17}, {.addr=0xb85b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb85c, .a=0x07, .x=0x1c, .y=0xd7, .sp=0xb5, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x17}, {.addr=0xb85b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb85b, .value=0xa6, .type=IO_READ},
        {.addr=0xb85c, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0186) {
    const struct CPU_State initial_cpu = {.pc=0x7bf2, .a=0xa1, .x=0xb1, .y=0x3b, .sp=0x06, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0xf4}, {.addr=0x7bf2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7bf3, .a=0xad, .x=0xb1, .y=0x3b, .sp=0x06, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0xf4}, {.addr=0x7bf2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7bf2, .value=0xa6, .type=IO_READ},
        {.addr=0x7bf3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0187) {
    const struct CPU_State initial_cpu = {.pc=0xeaef, .a=0x3b, .x=0x9b, .y=0xc6, .sp=0x0a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x91}, {.addr=0xeaef, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xeaf0, .a=0xaa, .x=0x9b, .y=0xc6, .sp=0x0a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x91}, {.addr=0xeaef, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xeaef, .value=0xa6, .type=IO_READ},
        {.addr=0xeaf0, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0188) {
    const struct CPU_State initial_cpu = {.pc=0x7f86, .a=0x75, .x=0x9d, .y=0x53, .sp=0xff, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x1e}, {.addr=0x7f86, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7f87, .a=0x56, .x=0x9d, .y=0x53, .sp=0xff, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x1e}, {.addr=0x7f86, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7f86, .value=0xa6, .type=IO_READ},
        {.addr=0x7f87, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0189) {
    const struct CPU_State initial_cpu = {.pc=0x53b1, .a=0xa8, .x=0x42, .y=0x64, .sp=0xa0, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x19}, {.addr=0x53b1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x53b2, .a=0x8e, .x=0x42, .y=0x64, .sp=0xa0, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x19}, {.addr=0x53b1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x53b1, .value=0xa6, .type=IO_READ},
        {.addr=0x53b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_018A) {
    const struct CPU_State initial_cpu = {.pc=0x66fc, .a=0x19, .x=0xa1, .y=0x60, .sp=0x44, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x68}, {.addr=0x66fc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x66fd, .a=0xb0, .x=0xa1, .y=0x60, .sp=0x44, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x68}, {.addr=0x66fc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x66fc, .value=0xa6, .type=IO_READ},
        {.addr=0x66fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_018B) {
    const struct CPU_State initial_cpu = {.pc=0xd4b2, .a=0x60, .x=0xca, .y=0x06, .sp=0x99, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0x78}, {.addr=0xd4b2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd4b3, .a=0xe8, .x=0xca, .y=0x06, .sp=0x99, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0x78}, {.addr=0xd4b2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd4b2, .value=0xa6, .type=IO_READ},
        {.addr=0xd4b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_018C) {
    const struct CPU_State initial_cpu = {.pc=0xea67, .a=0x9f, .x=0x12, .y=0x12, .sp=0xca, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0xac}, {.addr=0xea67, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xea68, .a=0xf2, .x=0x12, .y=0x12, .sp=0xca, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0xac}, {.addr=0xea67, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xea67, .value=0xa6, .type=IO_READ},
        {.addr=0xea68, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_018D) {
    const struct CPU_State initial_cpu = {.pc=0x41e2, .a=0x95, .x=0x01, .y=0x1f, .sp=0xdb, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x34}, {.addr=0x41e2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x41e3, .a=0x60, .x=0x01, .y=0x1f, .sp=0xdb, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x34}, {.addr=0x41e2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x41e2, .value=0xa6, .type=IO_READ},
        {.addr=0x41e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_018E) {
    const struct CPU_State initial_cpu = {.pc=0xcf34, .a=0xac, .x=0x06, .y=0xbf, .sp=0x15, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0x57}, {.addr=0xcf34, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcf35, .a=0x54, .x=0x06, .y=0xbf, .sp=0x15, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0x57}, {.addr=0xcf34, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcf34, .value=0xa6, .type=IO_READ},
        {.addr=0xcf35, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_018F) {
    const struct CPU_State initial_cpu = {.pc=0xb4b1, .a=0xb1, .x=0x13, .y=0x66, .sp=0xeb, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x49}, {.addr=0xb4b1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb4b2, .a=0x67, .x=0x13, .y=0x66, .sp=0xeb, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x49}, {.addr=0xb4b1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb4b1, .value=0xa6, .type=IO_READ},
        {.addr=0xb4b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0190) {
    const struct CPU_State initial_cpu = {.pc=0x3d3c, .a=0x41, .x=0xba, .y=0x85, .sp=0x61, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0xdc}, {.addr=0x3d3c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3d3d, .a=0x65, .x=0xba, .y=0x85, .sp=0x61, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0xdc}, {.addr=0x3d3c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3d3c, .value=0xa6, .type=IO_READ},
        {.addr=0x3d3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0191) {
    const struct CPU_State initial_cpu = {.pc=0x4e36, .a=0x99, .x=0x7d, .y=0xe4, .sp=0x48, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xe4}, {.addr=0x4e36, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4e37, .a=0xb5, .x=0x7d, .y=0xe4, .sp=0x48, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xe4}, {.addr=0x4e36, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4e36, .value=0xa6, .type=IO_READ},
        {.addr=0x4e37, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0192) {
    const struct CPU_State initial_cpu = {.pc=0x3fbf, .a=0xea, .x=0x4a, .y=0x0c, .sp=0xef, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0xb0}, {.addr=0x3fbf, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3fc0, .a=0x3a, .x=0x4a, .y=0x0c, .sp=0xef, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0xb0}, {.addr=0x3fbf, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3fbf, .value=0xa6, .type=IO_READ},
        {.addr=0x3fc0, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0193) {
    const struct CPU_State initial_cpu = {.pc=0x0dd1, .a=0x12, .x=0x11, .y=0x5b, .sp=0x6f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x59}, {.addr=0x0dd1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0dd2, .a=0xb8, .x=0x11, .y=0x5b, .sp=0x6f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x59}, {.addr=0x0dd1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0dd1, .value=0xa6, .type=IO_READ},
        {.addr=0x0dd2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0194) {
    const struct CPU_State initial_cpu = {.pc=0x8e63, .a=0xda, .x=0x55, .y=0x11, .sp=0xd9, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x19}, {.addr=0x8e63, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8e64, .a=0xc1, .x=0x55, .y=0x11, .sp=0xd9, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0x19}, {.addr=0x8e63, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8e63, .value=0xa6, .type=IO_READ},
        {.addr=0x8e64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0195) {
    const struct CPU_State initial_cpu = {.pc=0xc85e, .a=0xeb, .x=0xa8, .y=0x6d, .sp=0x49, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x86}, {.addr=0xc85e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc85f, .a=0x64, .x=0xa8, .y=0x6d, .sp=0x49, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x86}, {.addr=0xc85e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc85e, .value=0xa6, .type=IO_READ},
        {.addr=0xc85f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0196) {
    const struct CPU_State initial_cpu = {.pc=0xccbd, .a=0x92, .x=0x1e, .y=0x62, .sp=0x77, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x18}, {.addr=0xccbd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xccbe, .a=0x7a, .x=0x1e, .y=0x62, .sp=0x77, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x18}, {.addr=0xccbd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xccbd, .value=0xa6, .type=IO_READ},
        {.addr=0xccbe, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0197) {
    const struct CPU_State initial_cpu = {.pc=0xec68, .a=0xe7, .x=0x06, .y=0xa9, .sp=0x24, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x59}, {.addr=0xec68, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xec69, .a=0x8d, .x=0x06, .y=0xa9, .sp=0x24, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x59}, {.addr=0xec68, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xec68, .value=0xa6, .type=IO_READ},
        {.addr=0xec69, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0198) {
    const struct CPU_State initial_cpu = {.pc=0x4f82, .a=0x35, .x=0xd9, .y=0x39, .sp=0x02, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0xc3}, {.addr=0x4f82, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4f83, .a=0x71, .x=0xd9, .y=0x39, .sp=0x02, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0xc3}, {.addr=0x4f82, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4f82, .value=0xa6, .type=IO_READ},
        {.addr=0x4f83, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0199) {
    const struct CPU_State initial_cpu = {.pc=0x8522, .a=0xb0, .x=0xdb, .y=0x5c, .sp=0x3b, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xea}, {.addr=0x8522, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8523, .a=0xc5, .x=0xdb, .y=0x5c, .sp=0x3b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xea}, {.addr=0x8522, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8522, .value=0xa6, .type=IO_READ},
        {.addr=0x8523, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_019A) {
    const struct CPU_State initial_cpu = {.pc=0x682d, .a=0x52, .x=0x6e, .y=0x8d, .sp=0x3f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0xd8}, {.addr=0x682d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x682e, .a=0x7a, .x=0x6e, .y=0x8d, .sp=0x3f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0xd8}, {.addr=0x682d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x682d, .value=0xa6, .type=IO_READ},
        {.addr=0x682e, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_019B) {
    const struct CPU_State initial_cpu = {.pc=0x8d80, .a=0xb3, .x=0x7b, .y=0x55, .sp=0x53, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x4c}, {.addr=0x8d80, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8d81, .a=0x67, .x=0x7b, .y=0x55, .sp=0x53, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x4c}, {.addr=0x8d80, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8d80, .value=0xa6, .type=IO_READ},
        {.addr=0x8d81, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_019C) {
    const struct CPU_State initial_cpu = {.pc=0xc0f2, .a=0x9a, .x=0x8e, .y=0xb0, .sp=0xca, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x3e}, {.addr=0xc0f2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc0f3, .a=0x5c, .x=0x8e, .y=0xb0, .sp=0xca, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x3e}, {.addr=0xc0f2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc0f2, .value=0xa6, .type=IO_READ},
        {.addr=0xc0f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_019D) {
    const struct CPU_State initial_cpu = {.pc=0x5b03, .a=0xf4, .x=0xae, .y=0xba, .sp=0xfd, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x3d}, {.addr=0x5b03, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5b04, .a=0xb6, .x=0xae, .y=0xba, .sp=0xfd, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x3d}, {.addr=0x5b03, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5b03, .value=0xa6, .type=IO_READ},
        {.addr=0x5b04, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_019E) {
    const struct CPU_State initial_cpu = {.pc=0x3c8f, .a=0x70, .x=0x01, .y=0x93, .sp=0x10, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0x37}, {.addr=0x3c8f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3c90, .a=0x39, .x=0x01, .y=0x93, .sp=0x10, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0x37}, {.addr=0x3c8f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3c8f, .value=0xa6, .type=IO_READ},
        {.addr=0x3c90, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_019F) {
    const struct CPU_State initial_cpu = {.pc=0xbb31, .a=0x29, .x=0x4d, .y=0x7b, .sp=0xd5, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x76}, {.addr=0xbb31, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbb32, .a=0xb3, .x=0x4d, .y=0x7b, .sp=0xd5, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x76}, {.addr=0xbb31, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbb31, .value=0xa6, .type=IO_READ},
        {.addr=0xbb32, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x7379, .a=0x15, .x=0xe5, .y=0x49, .sp=0xac, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0xd9}, {.addr=0x7379, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x737a, .a=0x3b, .x=0xe5, .y=0x49, .sp=0xac, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0xd9}, {.addr=0x7379, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7379, .value=0xa6, .type=IO_READ},
        {.addr=0x737a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x6884, .a=0x94, .x=0xb6, .y=0x3d, .sp=0x88, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0xfe}, {.addr=0x6884, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6885, .a=0x95, .x=0xb6, .y=0x3d, .sp=0x88, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xfe}, {.addr=0x6884, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6884, .value=0xa6, .type=IO_READ},
        {.addr=0x6885, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xa2cc, .a=0xfa, .x=0xc4, .y=0x85, .sp=0x8c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x09}, {.addr=0xa2cc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa2cd, .a=0xf0, .x=0xc4, .y=0x85, .sp=0x8c, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x09}, {.addr=0xa2cc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa2cc, .value=0xa6, .type=IO_READ},
        {.addr=0xa2cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xce77, .a=0x71, .x=0x9d, .y=0x8b, .sp=0xc9, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xaa}, {.addr=0xce77, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xce78, .a=0xc7, .x=0x9d, .y=0x8b, .sp=0xc9, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xaa}, {.addr=0xce77, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xce77, .value=0xa6, .type=IO_READ},
        {.addr=0xce78, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x4f59, .a=0x09, .x=0xc6, .y=0xff, .sp=0x57, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xd5}, {.addr=0x4f59, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4f5a, .a=0x34, .x=0xc6, .y=0xff, .sp=0x57, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xd5}, {.addr=0x4f59, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4f59, .value=0xa6, .type=IO_READ},
        {.addr=0x4f5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x3949, .a=0xf0, .x=0xbf, .y=0x84, .sp=0x4b, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0xb3}, {.addr=0x3949, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x394a, .a=0x3c, .x=0xbf, .y=0x84, .sp=0x4b, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0xb3}, {.addr=0x3949, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3949, .value=0xa6, .type=IO_READ},
        {.addr=0x394a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xb22b, .a=0x95, .x=0x11, .y=0xff, .sp=0xff, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0xa4}, {.addr=0xb22b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb22c, .a=0xf0, .x=0x11, .y=0xff, .sp=0xff, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0xa4}, {.addr=0xb22b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb22b, .value=0xa6, .type=IO_READ},
        {.addr=0xb22c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x976d, .a=0xa8, .x=0x05, .y=0x34, .sp=0x4b, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x2b}, {.addr=0x976d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x976e, .a=0x7d, .x=0x05, .y=0x34, .sp=0x4b, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x2b}, {.addr=0x976d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x976d, .value=0xa6, .type=IO_READ},
        {.addr=0x976e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x191f, .a=0x01, .x=0xd0, .y=0x86, .sp=0x93, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0x32}, {.addr=0x191f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1920, .a=0xce, .x=0xd0, .y=0x86, .sp=0x93, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0x32}, {.addr=0x191f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x191f, .value=0xa6, .type=IO_READ},
        {.addr=0x1920, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xb6a8, .a=0x46, .x=0x4d, .y=0x8f, .sp=0x93, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x26}, {.addr=0xb6a8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb6a9, .a=0x20, .x=0x4d, .y=0x8f, .sp=0x93, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x26}, {.addr=0xb6a8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb6a8, .value=0xa6, .type=IO_READ},
        {.addr=0xb6a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x4e63, .a=0x27, .x=0x56, .y=0x94, .sp=0x1a, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x62}, {.addr=0x4e63, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4e64, .a=0xc5, .x=0x56, .y=0x94, .sp=0x1a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x62}, {.addr=0x4e63, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4e63, .value=0xa6, .type=IO_READ},
        {.addr=0x4e64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xe4a1, .a=0x21, .x=0xe2, .y=0xf6, .sp=0xd0, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x39}, {.addr=0xe4a1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe4a2, .a=0xe7, .x=0xe2, .y=0xf6, .sp=0xd0, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x39}, {.addr=0xe4a1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe4a1, .value=0xa6, .type=IO_READ},
        {.addr=0xe4a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xbd83, .a=0xe7, .x=0x05, .y=0x8e, .sp=0x40, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x9d}, {.addr=0xbd83, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbd84, .a=0x49, .x=0x05, .y=0x8e, .sp=0x40, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x9d}, {.addr=0xbd83, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbd83, .value=0xa6, .type=IO_READ},
        {.addr=0xbd84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x696c, .a=0x1d, .x=0x11, .y=0xc3, .sp=0xe6, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x87}, {.addr=0x696c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x696d, .a=0x95, .x=0x11, .y=0xc3, .sp=0xe6, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x87}, {.addr=0x696c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x696c, .value=0xa6, .type=IO_READ},
        {.addr=0x696d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x4da3, .a=0x8f, .x=0xad, .y=0x7f, .sp=0x36, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0xd0}, {.addr=0x4da3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4da4, .a=0xbf, .x=0xad, .y=0x7f, .sp=0x36, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xd0}, {.addr=0x4da3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4da3, .value=0xa6, .type=IO_READ},
        {.addr=0x4da4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xaae9, .a=0x7b, .x=0xcd, .y=0x52, .sp=0x96, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x94}, {.addr=0xaae9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xaaea, .a=0xe7, .x=0xcd, .y=0x52, .sp=0x96, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x94}, {.addr=0xaae9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xaae9, .value=0xa6, .type=IO_READ},
        {.addr=0xaaea, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x6991, .a=0x61, .x=0x26, .y=0xbf, .sp=0x99, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x39}, {.addr=0x6991, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6992, .a=0x28, .x=0x26, .y=0xbf, .sp=0x99, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x39}, {.addr=0x6991, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6991, .value=0xa6, .type=IO_READ},
        {.addr=0x6992, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xc595, .a=0xb1, .x=0x66, .y=0xc5, .sp=0xad, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x2b}, {.addr=0xc595, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc596, .a=0x85, .x=0x66, .y=0xc5, .sp=0xad, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x2b}, {.addr=0xc595, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc595, .value=0xa6, .type=IO_READ},
        {.addr=0xc596, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x242d, .a=0x9c, .x=0xd7, .y=0xcb, .sp=0xc7, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0xd1}, {.addr=0x242d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x242e, .a=0xcb, .x=0xd7, .y=0xcb, .sp=0xc7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0xd1}, {.addr=0x242d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x242d, .value=0xa6, .type=IO_READ},
        {.addr=0x242e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x90f1, .a=0xbd, .x=0x1e, .y=0xcd, .sp=0x62, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0x78}, {.addr=0x90f1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x90f2, .a=0x44, .x=0x1e, .y=0xcd, .sp=0x62, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0x78}, {.addr=0x90f1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x90f1, .value=0xa6, .type=IO_READ},
        {.addr=0x90f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x5cba, .a=0x83, .x=0xb7, .y=0x73, .sp=0xc8, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0xb0}, {.addr=0x5cba, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5cbb, .a=0xd2, .x=0xb7, .y=0x73, .sp=0xc8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xb0}, {.addr=0x5cba, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5cba, .value=0xa6, .type=IO_READ},
        {.addr=0x5cbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x50de, .a=0x2f, .x=0xe3, .y=0x91, .sp=0x68, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0xc2}, {.addr=0x50de, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x50df, .a=0x6d, .x=0xe3, .y=0x91, .sp=0x68, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0xc2}, {.addr=0x50de, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x50de, .value=0xa6, .type=IO_READ},
        {.addr=0x50df, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x78c1, .a=0xc5, .x=0x48, .y=0xc9, .sp=0x9c, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x71}, {.addr=0x78c1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x78c2, .a=0x53, .x=0x48, .y=0xc9, .sp=0x9c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x71}, {.addr=0x78c1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x78c1, .value=0xa6, .type=IO_READ},
        {.addr=0x78c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xccc7, .a=0xda, .x=0x2b, .y=0x7a, .sp=0x8e, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xf6}, {.addr=0xccc7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xccc8, .a=0xe4, .x=0x2b, .y=0x7a, .sp=0x8e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xf6}, {.addr=0xccc7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xccc7, .value=0xa6, .type=IO_READ},
        {.addr=0xccc8, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x5439, .a=0xf1, .x=0x77, .y=0xdb, .sp=0x61, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x23}, {.addr=0x5439, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x543a, .a=0xcd, .x=0x77, .y=0xdb, .sp=0x61, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x23}, {.addr=0x5439, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5439, .value=0xa6, .type=IO_READ},
        {.addr=0x543a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x0da2, .a=0x71, .x=0xcf, .y=0x58, .sp=0x57, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0xd9}, {.addr=0x0da2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0da3, .a=0x98, .x=0xcf, .y=0x58, .sp=0x57, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0xd9}, {.addr=0x0da2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0da2, .value=0xa6, .type=IO_READ},
        {.addr=0x0da3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x204e, .a=0xcb, .x=0xdb, .y=0xb4, .sp=0x88, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x77}, {.addr=0x204e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x204f, .a=0x54, .x=0xdb, .y=0xb4, .sp=0x88, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x77}, {.addr=0x204e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x204e, .value=0xa6, .type=IO_READ},
        {.addr=0x204f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xecc9, .a=0xfa, .x=0x9c, .y=0x90, .sp=0xee, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0xeb}, {.addr=0xecc9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xecca, .a=0x0e, .x=0x9c, .y=0x90, .sp=0xee, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0xeb}, {.addr=0xecc9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xecc9, .value=0xa6, .type=IO_READ},
        {.addr=0xecca, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x7883, .a=0x7e, .x=0xb3, .y=0x7c, .sp=0xc2, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x52}, {.addr=0x7883, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7884, .a=0x2c, .x=0xb3, .y=0x7c, .sp=0xc2, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x52}, {.addr=0x7883, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7883, .value=0xa6, .type=IO_READ},
        {.addr=0x7884, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x6d2f, .a=0xb0, .x=0x10, .y=0x92, .sp=0x9e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x8f}, {.addr=0x6d2f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6d30, .a=0x20, .x=0x10, .y=0x92, .sp=0x9e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x8f}, {.addr=0x6d2f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6d2f, .value=0xa6, .type=IO_READ},
        {.addr=0x6d30, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xd98c, .a=0x8c, .x=0xb1, .y=0xcb, .sp=0x8c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0xea}, {.addr=0xd98c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd98d, .a=0xa1, .x=0xb1, .y=0xcb, .sp=0x8c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xea}, {.addr=0xd98c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd98c, .value=0xa6, .type=IO_READ},
        {.addr=0xd98d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x63c8, .a=0x2e, .x=0x29, .y=0x7e, .sp=0x70, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x78}, {.addr=0x63c8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x63c9, .a=0xb6, .x=0x29, .y=0x7e, .sp=0x70, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x78}, {.addr=0x63c8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x63c8, .value=0xa6, .type=IO_READ},
        {.addr=0x63c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xd586, .a=0x87, .x=0x1b, .y=0x9f, .sp=0xb9, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x36}, {.addr=0xd586, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd587, .a=0x50, .x=0x1b, .y=0x9f, .sp=0xb9, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x36}, {.addr=0xd586, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd586, .value=0xa6, .type=IO_READ},
        {.addr=0xd587, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x903c, .a=0x2b, .x=0xa5, .y=0x7c, .sp=0xb4, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xeb}, {.addr=0x903c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x903d, .a=0x40, .x=0xa5, .y=0x7c, .sp=0xb4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xeb}, {.addr=0x903c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x903c, .value=0xa6, .type=IO_READ},
        {.addr=0x903d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xba4a, .a=0x48, .x=0xc0, .y=0x13, .sp=0x5b, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x93}, {.addr=0xba4a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xba4b, .a=0xb4, .x=0xc0, .y=0x13, .sp=0x5b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x93}, {.addr=0xba4a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xba4a, .value=0xa6, .type=IO_READ},
        {.addr=0xba4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xee6b, .a=0xa1, .x=0x20, .y=0xa9, .sp=0xb3, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0x40}, {.addr=0xee6b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xee6c, .a=0x61, .x=0x20, .y=0xa9, .sp=0xb3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0x40}, {.addr=0xee6b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xee6b, .value=0xa6, .type=IO_READ},
        {.addr=0xee6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xa184, .a=0xb2, .x=0x76, .y=0x9b, .sp=0x5b, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x48}, {.addr=0xa184, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa185, .a=0x6a, .x=0x76, .y=0x9b, .sp=0x5b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x48}, {.addr=0xa184, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa184, .value=0xa6, .type=IO_READ},
        {.addr=0xa185, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xf8df, .a=0x1e, .x=0x64, .y=0xa2, .sp=0x07, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x42}, {.addr=0xf8df, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf8e0, .a=0xdc, .x=0x64, .y=0xa2, .sp=0x07, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x42}, {.addr=0xf8df, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf8df, .value=0xa6, .type=IO_READ},
        {.addr=0xf8e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x7829, .a=0x1a, .x=0xb0, .y=0x18, .sp=0x2a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0xed}, {.addr=0x7829, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x782a, .a=0x2c, .x=0xb0, .y=0x18, .sp=0x2a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0xed}, {.addr=0x7829, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7829, .value=0xa6, .type=IO_READ},
        {.addr=0x782a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x9f93, .a=0x19, .x=0x7e, .y=0x9c, .sp=0x76, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0x2b}, {.addr=0x9f93, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9f94, .a=0xee, .x=0x7e, .y=0x9c, .sp=0x76, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0x2b}, {.addr=0x9f93, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9f93, .value=0xa6, .type=IO_READ},
        {.addr=0x9f94, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xbd3f, .a=0x71, .x=0xdd, .y=0x55, .sp=0x86, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x62}, {.addr=0xbd3f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbd40, .a=0x0e, .x=0xdd, .y=0x55, .sp=0x86, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x62}, {.addr=0xbd3f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbd3f, .value=0xa6, .type=IO_READ},
        {.addr=0xbd40, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xdc09, .a=0x96, .x=0x8c, .y=0x98, .sp=0x01, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xc4}, {.addr=0xdc09, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdc0a, .a=0xd2, .x=0x8c, .y=0x98, .sp=0x01, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xc4}, {.addr=0xdc09, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdc09, .value=0xa6, .type=IO_READ},
        {.addr=0xdc0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x53f5, .a=0x78, .x=0x82, .y=0x72, .sp=0xf8, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xc2}, {.addr=0x53f5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x53f6, .a=0xb6, .x=0x82, .y=0x72, .sp=0xf8, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xc2}, {.addr=0x53f5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x53f5, .value=0xa6, .type=IO_READ},
        {.addr=0x53f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x9c56, .a=0x2d, .x=0xf5, .y=0x18, .sp=0xe0, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x4b}, {.addr=0x9c56, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9c57, .a=0xe1, .x=0xf5, .y=0x18, .sp=0xe0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x4b}, {.addr=0x9c56, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9c56, .value=0xa6, .type=IO_READ},
        {.addr=0x9c57, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x44b0, .a=0x1d, .x=0xdf, .y=0x8f, .sp=0xc7, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x44}, {.addr=0x44b0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x44b1, .a=0xd9, .x=0xdf, .y=0x8f, .sp=0xc7, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x44}, {.addr=0x44b0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x44b0, .value=0xa6, .type=IO_READ},
        {.addr=0x44b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x8a4f, .a=0xbe, .x=0x11, .y=0x7d, .sp=0x1c, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x69}, {.addr=0x8a4f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8a50, .a=0x55, .x=0x11, .y=0x7d, .sp=0x1c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x69}, {.addr=0x8a4f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8a4f, .value=0xa6, .type=IO_READ},
        {.addr=0x8a50, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x76b9, .a=0x20, .x=0x23, .y=0x49, .sp=0xb1, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x6f}, {.addr=0x76b9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x76ba, .a=0xb1, .x=0x23, .y=0x49, .sp=0xb1, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x6f}, {.addr=0x76b9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x76b9, .value=0xa6, .type=IO_READ},
        {.addr=0x76ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x962c, .a=0x9e, .x=0xb5, .y=0x20, .sp=0x14, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00b5, .value=0x31}, {.addr=0x962c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x962d, .a=0x6c, .x=0xb5, .y=0x20, .sp=0x14, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00b5, .value=0x31}, {.addr=0x962c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x962c, .value=0xa6, .type=IO_READ},
        {.addr=0x962d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b5, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x9d87, .a=0x8c, .x=0x62, .y=0x20, .sp=0xb2, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xe0}, {.addr=0x9d87, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9d88, .a=0xac, .x=0x62, .y=0x20, .sp=0xb2, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xe0}, {.addr=0x9d87, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9d87, .value=0xa6, .type=IO_READ},
        {.addr=0x9d88, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x5c4a, .a=0x1c, .x=0x37, .y=0x97, .sp=0xba, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0xe7}, {.addr=0x5c4a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5c4b, .a=0x34, .x=0x37, .y=0x97, .sp=0xba, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xe7}, {.addr=0x5c4a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5c4a, .value=0xa6, .type=IO_READ},
        {.addr=0x5c4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x8006, .a=0x25, .x=0x23, .y=0x04, .sp=0x4a, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0xca}, {.addr=0x8006, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8007, .a=0x5b, .x=0x23, .y=0x04, .sp=0x4a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0xca}, {.addr=0x8006, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8006, .value=0xa6, .type=IO_READ},
        {.addr=0x8007, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x0ce9, .a=0xa8, .x=0xa3, .y=0xec, .sp=0x7b, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x17}, {.addr=0x0ce9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0cea, .a=0x90, .x=0xa3, .y=0xec, .sp=0x7b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x17}, {.addr=0x0ce9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0ce9, .value=0xa6, .type=IO_READ},
        {.addr=0x0cea, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x0490, .a=0x15, .x=0xf7, .y=0x2e, .sp=0x1a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x4e}, {.addr=0x0490, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0491, .a=0xc6, .x=0xf7, .y=0x2e, .sp=0x1a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x4e}, {.addr=0x0490, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0490, .value=0xa6, .type=IO_READ},
        {.addr=0x0491, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x67eb, .a=0xb5, .x=0x4c, .y=0x5f, .sp=0x7c, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0xdf}, {.addr=0x67eb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x67ec, .a=0xd5, .x=0x4c, .y=0x5f, .sp=0x7c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xdf}, {.addr=0x67eb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x67eb, .value=0xa6, .type=IO_READ},
        {.addr=0x67ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x5229, .a=0x85, .x=0xde, .y=0x30, .sp=0xca, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0xb5}, {.addr=0x5229, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x522a, .a=0xcf, .x=0xde, .y=0x30, .sp=0xca, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0xb5}, {.addr=0x5229, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5229, .value=0xa6, .type=IO_READ},
        {.addr=0x522a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00de, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x6fe3, .a=0x03, .x=0x4d, .y=0x8b, .sp=0xa7, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x61}, {.addr=0x6fe3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6fe4, .a=0xa1, .x=0x4d, .y=0x8b, .sp=0xa7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x61}, {.addr=0x6fe3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6fe3, .value=0xa6, .type=IO_READ},
        {.addr=0x6fe4, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x84be, .a=0x24, .x=0x9c, .y=0x30, .sp=0x3b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0xa4}, {.addr=0x84be, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x84bf, .a=0x80, .x=0x9c, .y=0x30, .sp=0x3b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0xa4}, {.addr=0x84be, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x84be, .value=0xa6, .type=IO_READ},
        {.addr=0x84bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x92e5, .a=0x4c, .x=0x59, .y=0xd0, .sp=0xba, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x2c}, {.addr=0x92e5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x92e6, .a=0x1f, .x=0x59, .y=0xd0, .sp=0xba, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x2c}, {.addr=0x92e5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x92e5, .value=0xa6, .type=IO_READ},
        {.addr=0x92e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xb1ea, .a=0xfb, .x=0x83, .y=0x16, .sp=0x91, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x79}, {.addr=0xb1ea, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb1eb, .a=0x82, .x=0x83, .y=0x16, .sp=0x91, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x79}, {.addr=0xb1ea, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb1ea, .value=0xa6, .type=IO_READ},
        {.addr=0xb1eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x7237, .a=0xc1, .x=0x62, .y=0x38, .sp=0xb1, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x63}, {.addr=0x7237, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7238, .a=0x5e, .x=0x62, .y=0x38, .sp=0xb1, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x63}, {.addr=0x7237, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7237, .value=0xa6, .type=IO_READ},
        {.addr=0x7238, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xcee4, .a=0x57, .x=0xb5, .y=0xcf, .sp=0x39, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00b5, .value=0x1c}, {.addr=0xcee4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcee5, .a=0x3a, .x=0xb5, .y=0xcf, .sp=0x39, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00b5, .value=0x1c}, {.addr=0xcee4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcee4, .value=0xa6, .type=IO_READ},
        {.addr=0xcee5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b5, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x554b, .a=0xa2, .x=0x57, .y=0x57, .sp=0xf2, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0x94}, {.addr=0x554b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x554c, .a=0x0d, .x=0x57, .y=0x57, .sp=0xf2, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0x94}, {.addr=0x554b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x554b, .value=0xa6, .type=IO_READ},
        {.addr=0x554c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xc3f3, .a=0xf5, .x=0xb1, .y=0x70, .sp=0x7b, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x52}, {.addr=0xc3f3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc3f4, .a=0xa2, .x=0xb1, .y=0x70, .sp=0x7b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x52}, {.addr=0xc3f3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc3f3, .value=0xa6, .type=IO_READ},
        {.addr=0xc3f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xf141, .a=0x20, .x=0x1e, .y=0xe3, .sp=0xcf, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0xa1}, {.addr=0xf141, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf142, .a=0x7e, .x=0x1e, .y=0xe3, .sp=0xcf, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0xa1}, {.addr=0xf141, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf141, .value=0xa6, .type=IO_READ},
        {.addr=0xf142, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x4422, .a=0x1b, .x=0x07, .y=0x8a, .sp=0x64, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x15}, {.addr=0x4422, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4423, .a=0x05, .x=0x07, .y=0x8a, .sp=0x64, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x15}, {.addr=0x4422, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4422, .value=0xa6, .type=IO_READ},
        {.addr=0x4423, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x784d, .a=0x4f, .x=0x8d, .y=0x71, .sp=0x8b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x0f}, {.addr=0x784d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x784e, .a=0x3f, .x=0x8d, .y=0x71, .sp=0x8b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x0f}, {.addr=0x784d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x784d, .value=0xa6, .type=IO_READ},
        {.addr=0x784e, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xefac, .a=0x9b, .x=0x79, .y=0xdb, .sp=0x24, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x30}, {.addr=0xefac, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xefad, .a=0x6b, .x=0x79, .y=0xdb, .sp=0x24, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x30}, {.addr=0xefac, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xefac, .value=0xa6, .type=IO_READ},
        {.addr=0xefad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xabf6, .a=0xde, .x=0xd4, .y=0xbd, .sp=0xdc, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0xd3}, {.addr=0xabf6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xabf7, .a=0x0a, .x=0xd4, .y=0xbd, .sp=0xdc, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0xd3}, {.addr=0xabf6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xabf6, .value=0xa6, .type=IO_READ},
        {.addr=0xabf7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xff42, .a=0x6a, .x=0x0f, .y=0x93, .sp=0xdd, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0x89}, {.addr=0xff42, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xff43, .a=0xe0, .x=0x0f, .y=0x93, .sp=0xdd, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x89}, {.addr=0xff42, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xff42, .value=0xa6, .type=IO_READ},
        {.addr=0xff43, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x724a, .a=0xa6, .x=0x0d, .y=0x37, .sp=0xe5, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x64}, {.addr=0x724a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x724b, .a=0x41, .x=0x0d, .y=0x37, .sp=0xe5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x64}, {.addr=0x724a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x724a, .value=0xa6, .type=IO_READ},
        {.addr=0x724b, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x6f98, .a=0x11, .x=0x13, .y=0x1b, .sp=0xea, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xc8}, {.addr=0x6f98, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6f99, .a=0x49, .x=0x13, .y=0x1b, .sp=0xea, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xc8}, {.addr=0x6f98, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6f98, .value=0xa6, .type=IO_READ},
        {.addr=0x6f99, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x1f89, .a=0x21, .x=0x64, .y=0x73, .sp=0x8b, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x9e}, {.addr=0x1f89, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1f8a, .a=0x82, .x=0x64, .y=0x73, .sp=0x8b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x9e}, {.addr=0x1f89, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1f89, .value=0xa6, .type=IO_READ},
        {.addr=0x1f8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xd19a, .a=0xcc, .x=0xd8, .y=0x50, .sp=0xad, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0xbe}, {.addr=0xd19a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd19b, .a=0x0e, .x=0xd8, .y=0x50, .sp=0xad, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0xbe}, {.addr=0xd19a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd19a, .value=0xa6, .type=IO_READ},
        {.addr=0xd19b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xe09c, .a=0x43, .x=0x89, .y=0x33, .sp=0x87, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0xce}, {.addr=0xe09c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe09d, .a=0x75, .x=0x89, .y=0x33, .sp=0x87, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0xce}, {.addr=0xe09c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe09c, .value=0xa6, .type=IO_READ},
        {.addr=0xe09d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xc435, .a=0x0f, .x=0x17, .y=0x2d, .sp=0xfd, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x1e}, {.addr=0xc435, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc436, .a=0xf1, .x=0x17, .y=0x2d, .sp=0xfd, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x1e}, {.addr=0xc435, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc435, .value=0xa6, .type=IO_READ},
        {.addr=0xc436, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xe317, .a=0xd0, .x=0x39, .y=0xa3, .sp=0xb4, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x7a}, {.addr=0xe317, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe318, .a=0x56, .x=0x39, .y=0xa3, .sp=0xb4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x7a}, {.addr=0xe317, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe317, .value=0xa6, .type=IO_READ},
        {.addr=0xe318, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x51fb, .a=0xcf, .x=0xdc, .y=0x4d, .sp=0xc7, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x83}, {.addr=0x51fb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x51fc, .a=0x4b, .x=0xdc, .y=0x4d, .sp=0xc7, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x83}, {.addr=0x51fb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x51fb, .value=0xa6, .type=IO_READ},
        {.addr=0x51fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xb62f, .a=0x3b, .x=0xdf, .y=0x5c, .sp=0x55, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xa9}, {.addr=0xb62f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb630, .a=0x91, .x=0xdf, .y=0x5c, .sp=0x55, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xa9}, {.addr=0xb62f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb62f, .value=0xa6, .type=IO_READ},
        {.addr=0xb630, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xfbd0, .a=0xdd, .x=0x5f, .y=0x2d, .sp=0x81, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x3f}, {.addr=0xfbd0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfbd1, .a=0x9d, .x=0x5f, .y=0x2d, .sp=0x81, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x3f}, {.addr=0xfbd0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfbd0, .value=0xa6, .type=IO_READ},
        {.addr=0xfbd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x2d95, .a=0x58, .x=0x72, .y=0xd4, .sp=0xf3, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x9b}, {.addr=0x2d95, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2d96, .a=0xbd, .x=0x72, .y=0xd4, .sp=0xf3, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x9b}, {.addr=0x2d95, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2d95, .value=0xa6, .type=IO_READ},
        {.addr=0x2d96, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xc81f, .a=0xe3, .x=0x10, .y=0x1c, .sp=0x98, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0xd8}, {.addr=0xc81f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc820, .a=0x0a, .x=0x10, .y=0x1c, .sp=0x98, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0xd8}, {.addr=0xc81f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc81f, .value=0xa6, .type=IO_READ},
        {.addr=0xc820, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xaeb9, .a=0x56, .x=0x47, .y=0x10, .sp=0x01, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x99}, {.addr=0xaeb9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xaeba, .a=0xbc, .x=0x47, .y=0x10, .sp=0x01, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x99}, {.addr=0xaeb9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xaeb9, .value=0xa6, .type=IO_READ},
        {.addr=0xaeba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x6090, .a=0xd8, .x=0x66, .y=0xf8, .sp=0x72, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xc8}, {.addr=0x6090, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6091, .a=0x0f, .x=0x66, .y=0xf8, .sp=0x72, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xc8}, {.addr=0x6090, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6090, .value=0xa6, .type=IO_READ},
        {.addr=0x6091, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x0a76, .a=0x83, .x=0x50, .y=0xc6, .sp=0xfc, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x71}, {.addr=0x0a76, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0a77, .a=0x12, .x=0x50, .y=0xc6, .sp=0xfc, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x71}, {.addr=0x0a76, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0a76, .value=0xa6, .type=IO_READ},
        {.addr=0x0a77, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x5d13, .a=0x24, .x=0xe0, .y=0xfe, .sp=0x04, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xb5}, {.addr=0x5d13, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5d14, .a=0x6e, .x=0xe0, .y=0xfe, .sp=0x04, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xb5}, {.addr=0x5d13, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5d13, .value=0xa6, .type=IO_READ},
        {.addr=0x5d14, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xf3f4, .a=0xc2, .x=0x52, .y=0x83, .sp=0x95, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0xf3f4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf3f5, .a=0xc1, .x=0x52, .y=0x83, .sp=0x95, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0xf3f4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf3f4, .value=0xa6, .type=IO_READ},
        {.addr=0xf3f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x4e56, .a=0x34, .x=0x41, .y=0xa3, .sp=0x0c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0xf0}, {.addr=0x4e56, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4e57, .a=0x43, .x=0x41, .y=0xa3, .sp=0x0c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0xf0}, {.addr=0x4e56, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4e56, .value=0xa6, .type=IO_READ},
        {.addr=0x4e57, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x469e, .a=0x67, .x=0x9c, .y=0x2a, .sp=0xc6, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x18}, {.addr=0x469e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x469f, .a=0x4e, .x=0x9c, .y=0x2a, .sp=0xc6, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x18}, {.addr=0x469e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x469e, .value=0xa6, .type=IO_READ},
        {.addr=0x469f, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x2905, .a=0xff, .x=0xe8, .y=0x1f, .sp=0xc8, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0xff}, {.addr=0x2905, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2906, .a=0x00, .x=0xe8, .y=0x1f, .sp=0xc8, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xff}, {.addr=0x2905, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2905, .value=0xa6, .type=IO_READ},
        {.addr=0x2906, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xf217, .a=0x5b, .x=0x16, .y=0x7d, .sp=0xe3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0x8e}, {.addr=0xf217, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf218, .a=0xcc, .x=0x16, .y=0x7d, .sp=0xe3, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0x8e}, {.addr=0xf217, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf217, .value=0xa6, .type=IO_READ},
        {.addr=0xf218, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x143d, .a=0x9c, .x=0x2a, .y=0x0a, .sp=0x40, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x48}, {.addr=0x143d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x143e, .a=0x53, .x=0x2a, .y=0x0a, .sp=0x40, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x48}, {.addr=0x143d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x143d, .value=0xa6, .type=IO_READ},
        {.addr=0x143e, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x3720, .a=0x62, .x=0xd1, .y=0x24, .sp=0x50, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x02}, {.addr=0x3720, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3721, .a=0x60, .x=0xd1, .y=0x24, .sp=0x50, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x02}, {.addr=0x3720, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3720, .value=0xa6, .type=IO_READ},
        {.addr=0x3721, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x314f, .a=0x5f, .x=0x78, .y=0x56, .sp=0x0e, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0x84}, {.addr=0x314f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3150, .a=0xda, .x=0x78, .y=0x56, .sp=0x0e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0x84}, {.addr=0x314f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x314f, .value=0xa6, .type=IO_READ},
        {.addr=0x3150, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xc94f, .a=0xb4, .x=0x1a, .y=0x5a, .sp=0xfe, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0x0d}, {.addr=0xc94f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc950, .a=0xa6, .x=0x1a, .y=0x5a, .sp=0xfe, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0x0d}, {.addr=0xc94f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc94f, .value=0xa6, .type=IO_READ},
        {.addr=0xc950, .value=DUMMY, .type=IO_READ},
        {.addr=0x001a, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0200) {
    const struct CPU_State initial_cpu = {.pc=0xb99e, .a=0xbc, .x=0xce, .y=0x5d, .sp=0x79, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xad}, {.addr=0xb99e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb99f, .a=0x0e, .x=0xce, .y=0x5d, .sp=0x79, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xad}, {.addr=0xb99e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb99e, .value=0xa6, .type=IO_READ},
        {.addr=0xb99f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0201) {
    const struct CPU_State initial_cpu = {.pc=0x122f, .a=0xdb, .x=0xbf, .y=0x53, .sp=0xf1, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x55}, {.addr=0x122f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1230, .a=0x85, .x=0xbf, .y=0x53, .sp=0xf1, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x55}, {.addr=0x122f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x122f, .value=0xa6, .type=IO_READ},
        {.addr=0x1230, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0202) {
    const struct CPU_State initial_cpu = {.pc=0x5d6e, .a=0x4f, .x=0xf7, .y=0xf1, .sp=0xff, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x61}, {.addr=0x5d6e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5d6f, .a=0xed, .x=0xf7, .y=0xf1, .sp=0xff, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x61}, {.addr=0x5d6e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5d6e, .value=0xa6, .type=IO_READ},
        {.addr=0x5d6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0203) {
    const struct CPU_State initial_cpu = {.pc=0x5f5d, .a=0x43, .x=0x91, .y=0x3e, .sp=0x67, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0xbf}, {.addr=0x5f5d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5f5e, .a=0x84, .x=0x91, .y=0x3e, .sp=0x67, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xbf}, {.addr=0x5f5d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5f5d, .value=0xa6, .type=IO_READ},
        {.addr=0x5f5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0204) {
    const struct CPU_State initial_cpu = {.pc=0x6b9b, .a=0xfd, .x=0x30, .y=0x59, .sp=0x31, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x6a}, {.addr=0x6b9b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6b9c, .a=0x93, .x=0x30, .y=0x59, .sp=0x31, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x6a}, {.addr=0x6b9b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6b9b, .value=0xa6, .type=IO_READ},
        {.addr=0x6b9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0206) {
    const struct CPU_State initial_cpu = {.pc=0x37c9, .a=0x85, .x=0xd6, .y=0xea, .sp=0x38, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x0e}, {.addr=0x37c9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x37ca, .a=0x77, .x=0xd6, .y=0xea, .sp=0x38, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x0e}, {.addr=0x37c9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x37c9, .value=0xa6, .type=IO_READ},
        {.addr=0x37ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0207) {
    const struct CPU_State initial_cpu = {.pc=0x4781, .a=0x6d, .x=0x7e, .y=0xba, .sp=0xb6, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x43}, {.addr=0x4781, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4782, .a=0x2a, .x=0x7e, .y=0xba, .sp=0xb6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x43}, {.addr=0x4781, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4781, .value=0xa6, .type=IO_READ},
        {.addr=0x4782, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0208) {
    const struct CPU_State initial_cpu = {.pc=0x0afa, .a=0x39, .x=0x62, .y=0x9f, .sp=0x49, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x02}, {.addr=0x0afa, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0afb, .a=0x36, .x=0x62, .y=0x9f, .sp=0x49, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x02}, {.addr=0x0afa, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0afa, .value=0xa6, .type=IO_READ},
        {.addr=0x0afb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0209) {
    const struct CPU_State initial_cpu = {.pc=0x5a19, .a=0x63, .x=0xf0, .y=0x8e, .sp=0x74, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xbb}, {.addr=0x5a19, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5a1a, .a=0xa7, .x=0xf0, .y=0x8e, .sp=0x74, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xbb}, {.addr=0x5a19, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5a19, .value=0xa6, .type=IO_READ},
        {.addr=0x5a1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_020A) {
    const struct CPU_State initial_cpu = {.pc=0xdb63, .a=0xd2, .x=0x6b, .y=0x9b, .sp=0x24, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x9b}, {.addr=0xdb63, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdb64, .a=0x36, .x=0x6b, .y=0x9b, .sp=0x24, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x9b}, {.addr=0xdb63, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdb63, .value=0xa6, .type=IO_READ},
        {.addr=0xdb64, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_020C) {
    const struct CPU_State initial_cpu = {.pc=0xf54a, .a=0x67, .x=0x04, .y=0x10, .sp=0x81, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0xc4}, {.addr=0xf54a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf54b, .a=0xa2, .x=0x04, .y=0x10, .sp=0x81, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0xc4}, {.addr=0xf54a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf54a, .value=0xa6, .type=IO_READ},
        {.addr=0xf54b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_020D) {
    const struct CPU_State initial_cpu = {.pc=0xff22, .a=0xcf, .x=0x7b, .y=0x5b, .sp=0x27, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0xa6}, {.addr=0xff22, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xff23, .a=0x29, .x=0x7b, .y=0x5b, .sp=0x27, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0xa6}, {.addr=0xff22, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xff22, .value=0xa6, .type=IO_READ},
        {.addr=0xff23, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_020E) {
    const struct CPU_State initial_cpu = {.pc=0x70ac, .a=0x98, .x=0x5b, .y=0x53, .sp=0xf9, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x9d}, {.addr=0x70ac, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x70ad, .a=0xfa, .x=0x5b, .y=0x53, .sp=0xf9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x9d}, {.addr=0x70ac, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x70ac, .value=0xa6, .type=IO_READ},
        {.addr=0x70ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_020F) {
    const struct CPU_State initial_cpu = {.pc=0x2ead, .a=0xd6, .x=0x8f, .y=0x1f, .sp=0x9d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0xab}, {.addr=0x2ead, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2eae, .a=0x2b, .x=0x8f, .y=0x1f, .sp=0x9d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xab}, {.addr=0x2ead, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2ead, .value=0xa6, .type=IO_READ},
        {.addr=0x2eae, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0210) {
    const struct CPU_State initial_cpu = {.pc=0xc705, .a=0xf1, .x=0x67, .y=0xa1, .sp=0xe1, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x55}, {.addr=0xc705, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc706, .a=0x9b, .x=0x67, .y=0xa1, .sp=0xe1, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0x55}, {.addr=0xc705, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc705, .value=0xa6, .type=IO_READ},
        {.addr=0xc706, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0211) {
    const struct CPU_State initial_cpu = {.pc=0x05cd, .a=0xfa, .x=0xe0, .y=0x60, .sp=0x31, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x87}, {.addr=0x05cd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x05ce, .a=0x72, .x=0xe0, .y=0x60, .sp=0x31, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x87}, {.addr=0x05cd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x05cd, .value=0xa6, .type=IO_READ},
        {.addr=0x05ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0212) {
    const struct CPU_State initial_cpu = {.pc=0x1b66, .a=0x19, .x=0x76, .y=0xed, .sp=0xc2, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0xde}, {.addr=0x1b66, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1b67, .a=0x3a, .x=0x76, .y=0xed, .sp=0xc2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xde}, {.addr=0x1b66, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1b66, .value=0xa6, .type=IO_READ},
        {.addr=0x1b67, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0213) {
    const struct CPU_State initial_cpu = {.pc=0xa283, .a=0x23, .x=0x0e, .y=0x46, .sp=0x31, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0x32}, {.addr=0xa283, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa284, .a=0xf0, .x=0x0e, .y=0x46, .sp=0x31, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0x32}, {.addr=0xa283, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa283, .value=0xa6, .type=IO_READ},
        {.addr=0xa284, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0214) {
    const struct CPU_State initial_cpu = {.pc=0xabea, .a=0x8b, .x=0xd3, .y=0x82, .sp=0x50, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x2e}, {.addr=0xabea, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xabeb, .a=0x5d, .x=0xd3, .y=0x82, .sp=0x50, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x2e}, {.addr=0xabea, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xabea, .value=0xa6, .type=IO_READ},
        {.addr=0xabeb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0215) {
    const struct CPU_State initial_cpu = {.pc=0x82fa, .a=0xc8, .x=0x86, .y=0xa8, .sp=0x9c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x4b}, {.addr=0x82fa, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x82fb, .a=0x7c, .x=0x86, .y=0xa8, .sp=0x9c, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x4b}, {.addr=0x82fa, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x82fa, .value=0xa6, .type=IO_READ},
        {.addr=0x82fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0216) {
    const struct CPU_State initial_cpu = {.pc=0x2643, .a=0xa5, .x=0xff, .y=0xcd, .sp=0xc8, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x5a}, {.addr=0x2643, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2644, .a=0x4a, .x=0xff, .y=0xcd, .sp=0xc8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x5a}, {.addr=0x2643, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2643, .value=0xa6, .type=IO_READ},
        {.addr=0x2644, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0217) {
    const struct CPU_State initial_cpu = {.pc=0x3ba7, .a=0xb6, .x=0x34, .y=0x41, .sp=0x16, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0x77}, {.addr=0x3ba7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3ba8, .a=0x3e, .x=0x34, .y=0x41, .sp=0x16, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0x77}, {.addr=0x3ba7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3ba7, .value=0xa6, .type=IO_READ},
        {.addr=0x3ba8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0218) {
    const struct CPU_State initial_cpu = {.pc=0xbdbe, .a=0x98, .x=0xa0, .y=0x22, .sp=0x83, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x69}, {.addr=0xbdbe, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbdbf, .a=0x2e, .x=0xa0, .y=0x22, .sp=0x83, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x69}, {.addr=0xbdbe, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbdbe, .value=0xa6, .type=IO_READ},
        {.addr=0xbdbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0219) {
    const struct CPU_State initial_cpu = {.pc=0x89bb, .a=0x7b, .x=0xb6, .y=0xb0, .sp=0x41, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x3c}, {.addr=0x89bb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x89bc, .a=0x3e, .x=0xb6, .y=0xb0, .sp=0x41, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x3c}, {.addr=0x89bb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x89bb, .value=0xa6, .type=IO_READ},
        {.addr=0x89bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_021B) {
    const struct CPU_State initial_cpu = {.pc=0xd843, .a=0x18, .x=0x2e, .y=0x3b, .sp=0xfa, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0x86}, {.addr=0xd843, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd844, .a=0x91, .x=0x2e, .y=0x3b, .sp=0xfa, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0x86}, {.addr=0xd843, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd843, .value=0xa6, .type=IO_READ},
        {.addr=0xd844, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_021C) {
    const struct CPU_State initial_cpu = {.pc=0x75e1, .a=0x12, .x=0x5d, .y=0xe1, .sp=0x0f, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x57}, {.addr=0x75e1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x75e2, .a=0xbb, .x=0x5d, .y=0xe1, .sp=0x0f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x57}, {.addr=0x75e1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x75e1, .value=0xa6, .type=IO_READ},
        {.addr=0x75e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_021D) {
    const struct CPU_State initial_cpu = {.pc=0xbf61, .a=0xba, .x=0xa8, .y=0x83, .sp=0xb0, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x5a}, {.addr=0xbf61, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbf62, .a=0x5f, .x=0xa8, .y=0x83, .sp=0xb0, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x5a}, {.addr=0xbf61, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbf61, .value=0xa6, .type=IO_READ},
        {.addr=0xbf62, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_021E) {
    const struct CPU_State initial_cpu = {.pc=0xe9ba, .a=0xc4, .x=0xa6, .y=0x79, .sp=0x32, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x03}, {.addr=0xe9ba, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe9bb, .a=0xc1, .x=0xa6, .y=0x79, .sp=0x32, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0x03}, {.addr=0xe9ba, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe9ba, .value=0xa6, .type=IO_READ},
        {.addr=0xe9bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_021F) {
    const struct CPU_State initial_cpu = {.pc=0xd38c, .a=0xa4, .x=0x00, .y=0xae, .sp=0xfe, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x54}, {.addr=0xd38c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd38d, .a=0x4f, .x=0x00, .y=0xae, .sp=0xfe, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x54}, {.addr=0xd38c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd38c, .value=0xa6, .type=IO_READ},
        {.addr=0xd38d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0220) {
    const struct CPU_State initial_cpu = {.pc=0x166e, .a=0x14, .x=0xb0, .y=0xd4, .sp=0xa1, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xc5}, {.addr=0x166e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x166f, .a=0x4e, .x=0xb0, .y=0xd4, .sp=0xa1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xc5}, {.addr=0x166e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x166e, .value=0xa6, .type=IO_READ},
        {.addr=0x166f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0221) {
    const struct CPU_State initial_cpu = {.pc=0xf9ee, .a=0x29, .x=0x66, .y=0x6d, .sp=0xff, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x4f}, {.addr=0xf9ee, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf9ef, .a=0xda, .x=0x66, .y=0x6d, .sp=0xff, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x4f}, {.addr=0xf9ee, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf9ee, .value=0xa6, .type=IO_READ},
        {.addr=0xf9ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0222) {
    const struct CPU_State initial_cpu = {.pc=0x3e10, .a=0xc8, .x=0x21, .y=0xee, .sp=0xa4, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0xa5}, {.addr=0x3e10, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3e11, .a=0x23, .x=0x21, .y=0xee, .sp=0xa4, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0xa5}, {.addr=0x3e10, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3e10, .value=0xa6, .type=IO_READ},
        {.addr=0x3e11, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0223) {
    const struct CPU_State initial_cpu = {.pc=0x0a07, .a=0x21, .x=0x1a, .y=0xd8, .sp=0xb6, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x80}, {.addr=0x0a07, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0a08, .a=0xa1, .x=0x1a, .y=0xd8, .sp=0xb6, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x80}, {.addr=0x0a07, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0a07, .value=0xa6, .type=IO_READ},
        {.addr=0x0a08, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0224) {
    const struct CPU_State initial_cpu = {.pc=0xaad5, .a=0x5f, .x=0x21, .y=0x67, .sp=0xbe, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x53}, {.addr=0xaad5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xaad6, .a=0x0c, .x=0x21, .y=0x67, .sp=0xbe, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x53}, {.addr=0xaad5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xaad5, .value=0xa6, .type=IO_READ},
        {.addr=0xaad6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0225) {
    const struct CPU_State initial_cpu = {.pc=0x574b, .a=0x39, .x=0xbf, .y=0x8b, .sp=0xc1, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x16}, {.addr=0x574b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x574c, .a=0x23, .x=0xbf, .y=0x8b, .sp=0xc1, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x16}, {.addr=0x574b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x574b, .value=0xa6, .type=IO_READ},
        {.addr=0x574c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0226) {
    const struct CPU_State initial_cpu = {.pc=0x6c51, .a=0x91, .x=0x02, .y=0x60, .sp=0xd8, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0xf9}, {.addr=0x6c51, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6c52, .a=0x98, .x=0x02, .y=0x60, .sp=0xd8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0xf9}, {.addr=0x6c51, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6c51, .value=0xa6, .type=IO_READ},
        {.addr=0x6c52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0227) {
    const struct CPU_State initial_cpu = {.pc=0x27de, .a=0x1c, .x=0x04, .y=0x54, .sp=0x61, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0xff}, {.addr=0x27de, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x27df, .a=0x1d, .x=0x04, .y=0x54, .sp=0x61, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xff}, {.addr=0x27de, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x27de, .value=0xa6, .type=IO_READ},
        {.addr=0x27df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0228) {
    const struct CPU_State initial_cpu = {.pc=0x3f97, .a=0x11, .x=0x51, .y=0xe5, .sp=0xe8, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xfa}, {.addr=0x3f97, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3f98, .a=0x16, .x=0x51, .y=0xe5, .sp=0xe8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xfa}, {.addr=0x3f97, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3f97, .value=0xa6, .type=IO_READ},
        {.addr=0x3f98, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0229) {
    const struct CPU_State initial_cpu = {.pc=0xeab3, .a=0xf9, .x=0x55, .y=0xd9, .sp=0x11, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x76}, {.addr=0xeab3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xeab4, .a=0x83, .x=0x55, .y=0xd9, .sp=0x11, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x76}, {.addr=0xeab3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xeab3, .value=0xa6, .type=IO_READ},
        {.addr=0xeab4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_022A) {
    const struct CPU_State initial_cpu = {.pc=0xafe6, .a=0x83, .x=0x0c, .y=0xcd, .sp=0xcb, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x9a}, {.addr=0xafe6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xafe7, .a=0xe8, .x=0x0c, .y=0xcd, .sp=0xcb, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x9a}, {.addr=0xafe6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xafe6, .value=0xa6, .type=IO_READ},
        {.addr=0xafe7, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_022B) {
    const struct CPU_State initial_cpu = {.pc=0x0f4c, .a=0x57, .x=0xf1, .y=0x1b, .sp=0x74, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0xc2}, {.addr=0x0f4c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0f4d, .a=0x95, .x=0xf1, .y=0x1b, .sp=0x74, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xc2}, {.addr=0x0f4c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0f4c, .value=0xa6, .type=IO_READ},
        {.addr=0x0f4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_022C) {
    const struct CPU_State initial_cpu = {.pc=0x5518, .a=0x1d, .x=0x7c, .y=0xb1, .sp=0x46, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xea}, {.addr=0x5518, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5519, .a=0x32, .x=0x7c, .y=0xb1, .sp=0x46, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xea}, {.addr=0x5518, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5518, .value=0xa6, .type=IO_READ},
        {.addr=0x5519, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_022D) {
    const struct CPU_State initial_cpu = {.pc=0x0129, .a=0xa7, .x=0xe2, .y=0x33, .sp=0xe5, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0xf5}, {.addr=0x0129, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x012a, .a=0xb1, .x=0xe2, .y=0x33, .sp=0xe5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0xf5}, {.addr=0x0129, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0129, .value=0xa6, .type=IO_READ},
        {.addr=0x012a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_022E) {
    const struct CPU_State initial_cpu = {.pc=0xd0ed, .a=0x6e, .x=0x54, .y=0x88, .sp=0x6e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x92}, {.addr=0xd0ed, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd0ee, .a=0xdc, .x=0x54, .y=0x88, .sp=0x6e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x92}, {.addr=0xd0ed, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd0ed, .value=0xa6, .type=IO_READ},
        {.addr=0xd0ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_022F) {
    const struct CPU_State initial_cpu = {.pc=0xf211, .a=0xad, .x=0x63, .y=0x06, .sp=0x34, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0x7a}, {.addr=0xf211, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf212, .a=0x33, .x=0x63, .y=0x06, .sp=0x34, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0x7a}, {.addr=0xf211, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf211, .value=0xa6, .type=IO_READ},
        {.addr=0xf212, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0230) {
    const struct CPU_State initial_cpu = {.pc=0x7e04, .a=0xa4, .x=0x0c, .y=0x0c, .sp=0x37, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0xe3}, {.addr=0x7e04, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7e05, .a=0xc1, .x=0x0c, .y=0x0c, .sp=0x37, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0xe3}, {.addr=0x7e04, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7e04, .value=0xa6, .type=IO_READ},
        {.addr=0x7e05, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0231) {
    const struct CPU_State initial_cpu = {.pc=0xe0a8, .a=0x43, .x=0xde, .y=0xd0, .sp=0xf9, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x3f}, {.addr=0xe0a8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe0a9, .a=0x04, .x=0xde, .y=0xd0, .sp=0xf9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x3f}, {.addr=0xe0a8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe0a8, .value=0xa6, .type=IO_READ},
        {.addr=0xe0a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0232) {
    const struct CPU_State initial_cpu = {.pc=0x6e30, .a=0x3d, .x=0x81, .y=0xdb, .sp=0x9a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0xbe}, {.addr=0x6e30, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6e31, .a=0x7e, .x=0x81, .y=0xdb, .sp=0x9a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0xbe}, {.addr=0x6e30, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6e30, .value=0xa6, .type=IO_READ},
        {.addr=0x6e31, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0233) {
    const struct CPU_State initial_cpu = {.pc=0x77bc, .a=0x7b, .x=0xaa, .y=0x13, .sp=0xa7, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0xeb}, {.addr=0x77bc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x77bd, .a=0x8f, .x=0xaa, .y=0x13, .sp=0xa7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0xeb}, {.addr=0x77bc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x77bc, .value=0xa6, .type=IO_READ},
        {.addr=0x77bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0234) {
    const struct CPU_State initial_cpu = {.pc=0x8d27, .a=0x3b, .x=0xd8, .y=0x2a, .sp=0x5e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x99}, {.addr=0x8d27, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8d28, .a=0xa2, .x=0xd8, .y=0x2a, .sp=0x5e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x99}, {.addr=0x8d27, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8d27, .value=0xa6, .type=IO_READ},
        {.addr=0x8d28, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0235) {
    const struct CPU_State initial_cpu = {.pc=0xd518, .a=0x3a, .x=0x79, .y=0x19, .sp=0x69, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x05}, {.addr=0xd518, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd519, .a=0x34, .x=0x79, .y=0x19, .sp=0x69, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x05}, {.addr=0xd518, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd518, .value=0xa6, .type=IO_READ},
        {.addr=0xd519, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0236) {
    const struct CPU_State initial_cpu = {.pc=0xe3c3, .a=0x97, .x=0xaf, .y=0x71, .sp=0xe5, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0xc5}, {.addr=0xe3c3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe3c4, .a=0xd2, .x=0xaf, .y=0x71, .sp=0xe5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0xc5}, {.addr=0xe3c3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe3c3, .value=0xa6, .type=IO_READ},
        {.addr=0xe3c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0237) {
    const struct CPU_State initial_cpu = {.pc=0xbe37, .a=0xfc, .x=0xe3, .y=0x83, .sp=0x23, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0x20}, {.addr=0xbe37, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbe38, .a=0xdc, .x=0xe3, .y=0x83, .sp=0x23, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0x20}, {.addr=0xbe37, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbe37, .value=0xa6, .type=IO_READ},
        {.addr=0xbe38, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0238) {
    const struct CPU_State initial_cpu = {.pc=0xb90b, .a=0x3f, .x=0xca, .y=0x9c, .sp=0x87, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0x9e}, {.addr=0xb90b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb90c, .a=0xa0, .x=0xca, .y=0x9c, .sp=0x87, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0x9e}, {.addr=0xb90b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb90b, .value=0xa6, .type=IO_READ},
        {.addr=0xb90c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0239) {
    const struct CPU_State initial_cpu = {.pc=0x4c2e, .a=0xc4, .x=0x81, .y=0xab, .sp=0x0b, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x2c}, {.addr=0x4c2e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4c2f, .a=0x98, .x=0x81, .y=0xab, .sp=0x0b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x2c}, {.addr=0x4c2e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4c2e, .value=0xa6, .type=IO_READ},
        {.addr=0x4c2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_023A) {
    const struct CPU_State initial_cpu = {.pc=0xb0b0, .a=0xdc, .x=0xcc, .y=0xf3, .sp=0x39, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x7d}, {.addr=0xb0b0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb0b1, .a=0x5f, .x=0xcc, .y=0xf3, .sp=0x39, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x7d}, {.addr=0xb0b0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb0b0, .value=0xa6, .type=IO_READ},
        {.addr=0xb0b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_023B) {
    const struct CPU_State initial_cpu = {.pc=0x4558, .a=0x51, .x=0x87, .y=0x08, .sp=0xd9, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x97}, {.addr=0x4558, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4559, .a=0xba, .x=0x87, .y=0x08, .sp=0xd9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x97}, {.addr=0x4558, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4558, .value=0xa6, .type=IO_READ},
        {.addr=0x4559, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_023C) {
    const struct CPU_State initial_cpu = {.pc=0x998d, .a=0x4e, .x=0x84, .y=0x79, .sp=0x37, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xd7}, {.addr=0x998d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x998e, .a=0x76, .x=0x84, .y=0x79, .sp=0x37, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xd7}, {.addr=0x998d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x998d, .value=0xa6, .type=IO_READ},
        {.addr=0x998e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_023D) {
    const struct CPU_State initial_cpu = {.pc=0xab0d, .a=0x1f, .x=0xe6, .y=0x81, .sp=0xeb, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x7e}, {.addr=0xab0d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xab0e, .a=0xa1, .x=0xe6, .y=0x81, .sp=0xeb, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x7e}, {.addr=0xab0d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xab0d, .value=0xa6, .type=IO_READ},
        {.addr=0xab0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_023E) {
    const struct CPU_State initial_cpu = {.pc=0x9282, .a=0x5f, .x=0x9b, .y=0xd1, .sp=0x87, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x89}, {.addr=0x9282, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9283, .a=0xd5, .x=0x9b, .y=0xd1, .sp=0x87, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x89}, {.addr=0x9282, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9282, .value=0xa6, .type=IO_READ},
        {.addr=0x9283, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_023F) {
    const struct CPU_State initial_cpu = {.pc=0xaf27, .a=0x94, .x=0x66, .y=0x6c, .sp=0x6d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x95}, {.addr=0xaf27, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xaf28, .a=0xff, .x=0x66, .y=0x6c, .sp=0x6d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x95}, {.addr=0xaf27, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xaf27, .value=0xa6, .type=IO_READ},
        {.addr=0xaf28, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0240) {
    const struct CPU_State initial_cpu = {.pc=0xd67a, .a=0x3d, .x=0x2c, .y=0x71, .sp=0x7d, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0xdb}, {.addr=0xd67a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd67b, .a=0x62, .x=0x2c, .y=0x71, .sp=0x7d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xdb}, {.addr=0xd67a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd67a, .value=0xa6, .type=IO_READ},
        {.addr=0xd67b, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0241) {
    const struct CPU_State initial_cpu = {.pc=0xc930, .a=0x3b, .x=0xba, .y=0x8f, .sp=0x92, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xe7}, {.addr=0xc930, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc931, .a=0x53, .x=0xba, .y=0x8f, .sp=0x92, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xe7}, {.addr=0xc930, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc930, .value=0xa6, .type=IO_READ},
        {.addr=0xc931, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0242) {
    const struct CPU_State initial_cpu = {.pc=0x3441, .a=0x0b, .x=0xfb, .y=0x4b, .sp=0x98, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x1c}, {.addr=0x3441, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3442, .a=0xef, .x=0xfb, .y=0x4b, .sp=0x98, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x1c}, {.addr=0x3441, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3441, .value=0xa6, .type=IO_READ},
        {.addr=0x3442, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0243) {
    const struct CPU_State initial_cpu = {.pc=0x77b5, .a=0x08, .x=0xdc, .y=0x06, .sp=0x8f, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x20}, {.addr=0x77b5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x77b6, .a=0xe7, .x=0xdc, .y=0x06, .sp=0x8f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x20}, {.addr=0x77b5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x77b5, .value=0xa6, .type=IO_READ},
        {.addr=0x77b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0244) {
    const struct CPU_State initial_cpu = {.pc=0xf40d, .a=0xd0, .x=0xc1, .y=0xec, .sp=0xed, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x1b}, {.addr=0xf40d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf40e, .a=0xb4, .x=0xc1, .y=0xec, .sp=0xed, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x1b}, {.addr=0xf40d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf40d, .value=0xa6, .type=IO_READ},
        {.addr=0xf40e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0245) {
    const struct CPU_State initial_cpu = {.pc=0xa6c1, .a=0x94, .x=0xc3, .y=0x2a, .sp=0x4e, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x38}, {.addr=0xa6c1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa6c2, .a=0x5c, .x=0xc3, .y=0x2a, .sp=0x4e, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x38}, {.addr=0xa6c1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa6c1, .value=0xa6, .type=IO_READ},
        {.addr=0xa6c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0246) {
    const struct CPU_State initial_cpu = {.pc=0x73c9, .a=0xd1, .x=0xaf, .y=0x0d, .sp=0x28, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0xd9}, {.addr=0x73c9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x73ca, .a=0xf8, .x=0xaf, .y=0x0d, .sp=0x28, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0xd9}, {.addr=0x73c9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x73c9, .value=0xa6, .type=IO_READ},
        {.addr=0x73ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0247) {
    const struct CPU_State initial_cpu = {.pc=0xae13, .a=0xd7, .x=0x02, .y=0xfd, .sp=0xff, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x0d}, {.addr=0xae13, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xae14, .a=0xca, .x=0x02, .y=0xfd, .sp=0xff, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x0d}, {.addr=0xae13, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xae13, .value=0xa6, .type=IO_READ},
        {.addr=0xae14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0248) {
    const struct CPU_State initial_cpu = {.pc=0x3892, .a=0x56, .x=0x6b, .y=0xc2, .sp=0x11, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0xd5}, {.addr=0x3892, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3893, .a=0x81, .x=0x6b, .y=0xc2, .sp=0x11, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xd5}, {.addr=0x3892, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3892, .value=0xa6, .type=IO_READ},
        {.addr=0x3893, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0249) {
    const struct CPU_State initial_cpu = {.pc=0xe9a1, .a=0x9d, .x=0x96, .y=0xec, .sp=0x3c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x5b}, {.addr=0xe9a1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe9a2, .a=0x41, .x=0x96, .y=0xec, .sp=0x3c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x5b}, {.addr=0xe9a1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe9a1, .value=0xa6, .type=IO_READ},
        {.addr=0xe9a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_024A) {
    const struct CPU_State initial_cpu = {.pc=0x6fcb, .a=0xb0, .x=0x2f, .y=0xe6, .sp=0xe5, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x6c}, {.addr=0x6fcb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6fcc, .a=0x44, .x=0x2f, .y=0xe6, .sp=0xe5, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x6c}, {.addr=0x6fcb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6fcb, .value=0xa6, .type=IO_READ},
        {.addr=0x6fcc, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_024B) {
    const struct CPU_State initial_cpu = {.pc=0x43b8, .a=0x5b, .x=0x1b, .y=0xab, .sp=0x96, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x3f}, {.addr=0x43b8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x43b9, .a=0x1b, .x=0x1b, .y=0xab, .sp=0x96, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x3f}, {.addr=0x43b8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x43b8, .value=0xa6, .type=IO_READ},
        {.addr=0x43b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_024C) {
    const struct CPU_State initial_cpu = {.pc=0xf0c2, .a=0x6c, .x=0x7d, .y=0xe9, .sp=0x12, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x0b}, {.addr=0xf0c2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf0c3, .a=0x60, .x=0x7d, .y=0xe9, .sp=0x12, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x0b}, {.addr=0xf0c2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf0c2, .value=0xa6, .type=IO_READ},
        {.addr=0xf0c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_024D) {
    const struct CPU_State initial_cpu = {.pc=0x5f04, .a=0xad, .x=0xcf, .y=0xd8, .sp=0x83, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x4e}, {.addr=0x5f04, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5f05, .a=0x5e, .x=0xcf, .y=0xd8, .sp=0x83, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x4e}, {.addr=0x5f04, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5f04, .value=0xa6, .type=IO_READ},
        {.addr=0x5f05, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_024E) {
    const struct CPU_State initial_cpu = {.pc=0xc541, .a=0x07, .x=0xdf, .y=0x2b, .sp=0x4f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x21}, {.addr=0xc541, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc542, .a=0xe6, .x=0xdf, .y=0x2b, .sp=0x4f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x21}, {.addr=0xc541, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc541, .value=0xa6, .type=IO_READ},
        {.addr=0xc542, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_024F) {
    const struct CPU_State initial_cpu = {.pc=0xe7dc, .a=0x7a, .x=0x81, .y=0x5c, .sp=0x96, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x4d}, {.addr=0xe7dc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe7dd, .a=0x2d, .x=0x81, .y=0x5c, .sp=0x96, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x4d}, {.addr=0xe7dc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe7dc, .value=0xa6, .type=IO_READ},
        {.addr=0xe7dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0250) {
    const struct CPU_State initial_cpu = {.pc=0x5b7d, .a=0xc1, .x=0x76, .y=0x65, .sp=0xf1, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x77}, {.addr=0x5b7d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5b7e, .a=0x49, .x=0x76, .y=0x65, .sp=0xf1, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x77}, {.addr=0x5b7d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5b7d, .value=0xa6, .type=IO_READ},
        {.addr=0x5b7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0251) {
    const struct CPU_State initial_cpu = {.pc=0xa952, .a=0x63, .x=0xfb, .y=0xbb, .sp=0x68, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xaf}, {.addr=0xa952, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa953, .a=0xb4, .x=0xfb, .y=0xbb, .sp=0x68, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xaf}, {.addr=0xa952, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa952, .value=0xa6, .type=IO_READ},
        {.addr=0xa953, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0252) {
    const struct CPU_State initial_cpu = {.pc=0xd882, .a=0xc3, .x=0x9d, .y=0x98, .sp=0xaa, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x0f}, {.addr=0xd882, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd883, .a=0xb4, .x=0x9d, .y=0x98, .sp=0xaa, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x0f}, {.addr=0xd882, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd882, .value=0xa6, .type=IO_READ},
        {.addr=0xd883, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0253) {
    const struct CPU_State initial_cpu = {.pc=0x4e4c, .a=0x2c, .x=0xb4, .y=0x06, .sp=0xdb, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0x29}, {.addr=0x4e4c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4e4d, .a=0x02, .x=0xb4, .y=0x06, .sp=0xdb, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0x29}, {.addr=0x4e4c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4e4c, .value=0xa6, .type=IO_READ},
        {.addr=0x4e4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0254) {
    const struct CPU_State initial_cpu = {.pc=0x4674, .a=0x2c, .x=0x0f, .y=0xa9, .sp=0xb5, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0x44}, {.addr=0x4674, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4675, .a=0xe7, .x=0x0f, .y=0xa9, .sp=0xb5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x44}, {.addr=0x4674, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4674, .value=0xa6, .type=IO_READ},
        {.addr=0x4675, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0255) {
    const struct CPU_State initial_cpu = {.pc=0x4d1a, .a=0x98, .x=0x64, .y=0x3f, .sp=0x54, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xe0}, {.addr=0x4d1a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4d1b, .a=0xb7, .x=0x64, .y=0x3f, .sp=0x54, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xe0}, {.addr=0x4d1a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4d1a, .value=0xa6, .type=IO_READ},
        {.addr=0x4d1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0256) {
    const struct CPU_State initial_cpu = {.pc=0x3255, .a=0xf8, .x=0xe4, .y=0x3a, .sp=0x17, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xc2}, {.addr=0x3255, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3256, .a=0x35, .x=0xe4, .y=0x3a, .sp=0x17, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xc2}, {.addr=0x3255, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3255, .value=0xa6, .type=IO_READ},
        {.addr=0x3256, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0257) {
    const struct CPU_State initial_cpu = {.pc=0x8060, .a=0x99, .x=0x95, .y=0x89, .sp=0x6a, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x54}, {.addr=0x8060, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8061, .a=0x45, .x=0x95, .y=0x89, .sp=0x6a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x54}, {.addr=0x8060, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8060, .value=0xa6, .type=IO_READ},
        {.addr=0x8061, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0258) {
    const struct CPU_State initial_cpu = {.pc=0xdf7e, .a=0xb1, .x=0xb6, .y=0x04, .sp=0x7e, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x6a}, {.addr=0xdf7e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdf7f, .a=0x47, .x=0xb6, .y=0x04, .sp=0x7e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x6a}, {.addr=0xdf7e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdf7e, .value=0xa6, .type=IO_READ},
        {.addr=0xdf7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0259) {
    const struct CPU_State initial_cpu = {.pc=0xa75b, .a=0x88, .x=0x72, .y=0xb7, .sp=0x8a, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0xef}, {.addr=0xa75b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa75c, .a=0x98, .x=0x72, .y=0xb7, .sp=0x8a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0xef}, {.addr=0xa75b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa75b, .value=0xa6, .type=IO_READ},
        {.addr=0xa75c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_025A) {
    const struct CPU_State initial_cpu = {.pc=0x950a, .a=0xb0, .x=0x3b, .y=0x14, .sp=0x01, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x8e}, {.addr=0x950a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x950b, .a=0x22, .x=0x3b, .y=0x14, .sp=0x01, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x8e}, {.addr=0x950a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x950a, .value=0xa6, .type=IO_READ},
        {.addr=0x950b, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_025B) {
    const struct CPU_State initial_cpu = {.pc=0xe585, .a=0xfa, .x=0x83, .y=0x01, .sp=0x69, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x2e}, {.addr=0xe585, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe586, .a=0xcb, .x=0x83, .y=0x01, .sp=0x69, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x2e}, {.addr=0xe585, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe585, .value=0xa6, .type=IO_READ},
        {.addr=0xe586, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_025C) {
    const struct CPU_State initial_cpu = {.pc=0x777c, .a=0x34, .x=0xd4, .y=0x96, .sp=0x3b, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x5a}, {.addr=0x777c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x777d, .a=0xd9, .x=0xd4, .y=0x96, .sp=0x3b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x5a}, {.addr=0x777c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x777c, .value=0xa6, .type=IO_READ},
        {.addr=0x777d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_025D) {
    const struct CPU_State initial_cpu = {.pc=0x9300, .a=0x55, .x=0x4a, .y=0xe6, .sp=0xcb, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x17}, {.addr=0x9300, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9301, .a=0x3d, .x=0x4a, .y=0xe6, .sp=0xcb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x17}, {.addr=0x9300, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9300, .value=0xa6, .type=IO_READ},
        {.addr=0x9301, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_025E) {
    const struct CPU_State initial_cpu = {.pc=0xcbca, .a=0x51, .x=0x87, .y=0xf8, .sp=0xf5, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xc3}, {.addr=0xcbca, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcbcb, .a=0x8d, .x=0x87, .y=0xf8, .sp=0xf5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xc3}, {.addr=0xcbca, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcbca, .value=0xa6, .type=IO_READ},
        {.addr=0xcbcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_025F) {
    const struct CPU_State initial_cpu = {.pc=0x10aa, .a=0xdc, .x=0x48, .y=0xee, .sp=0x16, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x5c}, {.addr=0x10aa, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x10ab, .a=0x80, .x=0x48, .y=0xee, .sp=0x16, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x5c}, {.addr=0x10aa, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x10aa, .value=0xa6, .type=IO_READ},
        {.addr=0x10ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0260) {
    const struct CPU_State initial_cpu = {.pc=0x55c8, .a=0x42, .x=0x68, .y=0xcd, .sp=0x33, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xc3}, {.addr=0x55c8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x55c9, .a=0x7f, .x=0x68, .y=0xcd, .sp=0x33, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xc3}, {.addr=0x55c8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x55c8, .value=0xa6, .type=IO_READ},
        {.addr=0x55c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0261) {
    const struct CPU_State initial_cpu = {.pc=0x21bd, .a=0xff, .x=0x74, .y=0xdf, .sp=0x7b, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0xaf}, {.addr=0x21bd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x21be, .a=0x50, .x=0x74, .y=0xdf, .sp=0x7b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0xaf}, {.addr=0x21bd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x21bd, .value=0xa6, .type=IO_READ},
        {.addr=0x21be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0262) {
    const struct CPU_State initial_cpu = {.pc=0xff18, .a=0x9f, .x=0x60, .y=0x3f, .sp=0x5e, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x77}, {.addr=0xff18, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xff19, .a=0x28, .x=0x60, .y=0x3f, .sp=0x5e, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x77}, {.addr=0xff18, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xff18, .value=0xa6, .type=IO_READ},
        {.addr=0xff19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0263) {
    const struct CPU_State initial_cpu = {.pc=0xa46c, .a=0x05, .x=0xec, .y=0x22, .sp=0x0b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x80}, {.addr=0xa46c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa46d, .a=0x84, .x=0xec, .y=0x22, .sp=0x0b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x80}, {.addr=0xa46c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa46c, .value=0xa6, .type=IO_READ},
        {.addr=0xa46d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0264) {
    const struct CPU_State initial_cpu = {.pc=0x146f, .a=0xcd, .x=0x31, .y=0xe6, .sp=0x24, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x62}, {.addr=0x146f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1470, .a=0x6a, .x=0x31, .y=0xe6, .sp=0x24, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x62}, {.addr=0x146f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x146f, .value=0xa6, .type=IO_READ},
        {.addr=0x1470, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0265) {
    const struct CPU_State initial_cpu = {.pc=0xcf12, .a=0xa2, .x=0x1c, .y=0x0a, .sp=0xf8, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x41}, {.addr=0xcf12, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcf13, .a=0x60, .x=0x1c, .y=0x0a, .sp=0xf8, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x41}, {.addr=0xcf12, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcf12, .value=0xa6, .type=IO_READ},
        {.addr=0xcf13, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0266) {
    const struct CPU_State initial_cpu = {.pc=0x5c7c, .a=0xcb, .x=0x83, .y=0x0c, .sp=0x31, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x76}, {.addr=0x5c7c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5c7d, .a=0x54, .x=0x83, .y=0x0c, .sp=0x31, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x76}, {.addr=0x5c7c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5c7c, .value=0xa6, .type=IO_READ},
        {.addr=0x5c7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0267) {
    const struct CPU_State initial_cpu = {.pc=0xb49c, .a=0x16, .x=0xae, .y=0x2b, .sp=0xc1, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x45}, {.addr=0xb49c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb49d, .a=0xd0, .x=0xae, .y=0x2b, .sp=0xc1, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x45}, {.addr=0xb49c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb49c, .value=0xa6, .type=IO_READ},
        {.addr=0xb49d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0268) {
    const struct CPU_State initial_cpu = {.pc=0x7bdb, .a=0xab, .x=0x6b, .y=0xa5, .sp=0xc0, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x47}, {.addr=0x7bdb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7bdc, .a=0x63, .x=0x6b, .y=0xa5, .sp=0xc0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x47}, {.addr=0x7bdb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7bdb, .value=0xa6, .type=IO_READ},
        {.addr=0x7bdc, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0269) {
    const struct CPU_State initial_cpu = {.pc=0x4b95, .a=0xc3, .x=0x3d, .y=0x40, .sp=0x2f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0xd3}, {.addr=0x4b95, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4b96, .a=0xef, .x=0x3d, .y=0x40, .sp=0x2f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0xd3}, {.addr=0x4b95, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4b95, .value=0xa6, .type=IO_READ},
        {.addr=0x4b96, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_026A) {
    const struct CPU_State initial_cpu = {.pc=0x8853, .a=0x46, .x=0x74, .y=0x0b, .sp=0xf4, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x5b}, {.addr=0x8853, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8854, .a=0xea, .x=0x74, .y=0x0b, .sp=0xf4, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x5b}, {.addr=0x8853, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8853, .value=0xa6, .type=IO_READ},
        {.addr=0x8854, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_026C) {
    const struct CPU_State initial_cpu = {.pc=0x5b6d, .a=0xc9, .x=0x29, .y=0xca, .sp=0xe3, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0xe9}, {.addr=0x5b6d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5b6e, .a=0xdf, .x=0x29, .y=0xca, .sp=0xe3, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0xe9}, {.addr=0x5b6d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5b6d, .value=0xa6, .type=IO_READ},
        {.addr=0x5b6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_026D) {
    const struct CPU_State initial_cpu = {.pc=0x3c0d, .a=0xa6, .x=0x6b, .y=0xc8, .sp=0xae, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x4e}, {.addr=0x3c0d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3c0e, .a=0x57, .x=0x6b, .y=0xc8, .sp=0xae, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x4e}, {.addr=0x3c0d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3c0d, .value=0xa6, .type=IO_READ},
        {.addr=0x3c0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_026E) {
    const struct CPU_State initial_cpu = {.pc=0xf6e6, .a=0x25, .x=0x5d, .y=0xad, .sp=0xd8, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x89}, {.addr=0xf6e6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf6e7, .a=0x9b, .x=0x5d, .y=0xad, .sp=0xd8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x89}, {.addr=0xf6e6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf6e6, .value=0xa6, .type=IO_READ},
        {.addr=0xf6e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_026F) {
    const struct CPU_State initial_cpu = {.pc=0xbc2a, .a=0xf2, .x=0x85, .y=0x4e, .sp=0x4e, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0x5c}, {.addr=0xbc2a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbc2b, .a=0x96, .x=0x85, .y=0x4e, .sp=0x4e, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0x5c}, {.addr=0xbc2a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbc2a, .value=0xa6, .type=IO_READ},
        {.addr=0xbc2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0270) {
    const struct CPU_State initial_cpu = {.pc=0xf4aa, .a=0x3c, .x=0x4a, .y=0x5a, .sp=0xf9, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x97}, {.addr=0xf4aa, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf4ab, .a=0xa4, .x=0x4a, .y=0x5a, .sp=0xf9, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x97}, {.addr=0xf4aa, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf4aa, .value=0xa6, .type=IO_READ},
        {.addr=0xf4ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0271) {
    const struct CPU_State initial_cpu = {.pc=0xee29, .a=0x3b, .x=0x9e, .y=0x0c, .sp=0x7e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xf1}, {.addr=0xee29, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xee2a, .a=0x4a, .x=0x9e, .y=0x0c, .sp=0x7e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xf1}, {.addr=0xee29, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xee29, .value=0xa6, .type=IO_READ},
        {.addr=0xee2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0272) {
    const struct CPU_State initial_cpu = {.pc=0x679e, .a=0x9e, .x=0x5b, .y=0xc0, .sp=0x61, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0xc4}, {.addr=0x679e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x679f, .a=0xda, .x=0x5b, .y=0xc0, .sp=0x61, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0xc4}, {.addr=0x679e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x679e, .value=0xa6, .type=IO_READ},
        {.addr=0x679f, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0273) {
    const struct CPU_State initial_cpu = {.pc=0x9bdf, .a=0x2e, .x=0xe1, .y=0x26, .sp=0x6f, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0xac}, {.addr=0x9bdf, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9be0, .a=0x82, .x=0xe1, .y=0x26, .sp=0x6f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xac}, {.addr=0x9bdf, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9bdf, .value=0xa6, .type=IO_READ},
        {.addr=0x9be0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0274) {
    const struct CPU_State initial_cpu = {.pc=0xa51f, .a=0xd3, .x=0x8b, .y=0xea, .sp=0x0f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0x4e}, {.addr=0xa51f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa520, .a=0x85, .x=0x8b, .y=0xea, .sp=0x0f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0x4e}, {.addr=0xa51f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa51f, .value=0xa6, .type=IO_READ},
        {.addr=0xa520, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0275) {
    const struct CPU_State initial_cpu = {.pc=0xd07f, .a=0x91, .x=0xc1, .y=0xf0, .sp=0x7a, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0x1c}, {.addr=0xd07f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd080, .a=0x75, .x=0xc1, .y=0xf0, .sp=0x7a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0x1c}, {.addr=0xd07f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd07f, .value=0xa6, .type=IO_READ},
        {.addr=0xd080, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0276) {
    const struct CPU_State initial_cpu = {.pc=0x6aa6, .a=0x71, .x=0xdf, .y=0x76, .sp=0x0b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0xd3}, {.addr=0x6aa6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6aa7, .a=0x9e, .x=0xdf, .y=0x76, .sp=0x0b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0xd3}, {.addr=0x6aa6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6aa6, .value=0xa6, .type=IO_READ},
        {.addr=0x6aa7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0277) {
    const struct CPU_State initial_cpu = {.pc=0x6925, .a=0xa5, .x=0xd3, .y=0xb2, .sp=0x69, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0xaa}, {.addr=0x6925, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6926, .a=0xfb, .x=0xd3, .y=0xb2, .sp=0x69, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xaa}, {.addr=0x6925, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6925, .value=0xa6, .type=IO_READ},
        {.addr=0x6926, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0278) {
    const struct CPU_State initial_cpu = {.pc=0xa4b5, .a=0x26, .x=0x8a, .y=0xb5, .sp=0xb5, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xdf}, {.addr=0xa4b5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa4b6, .a=0x46, .x=0x8a, .y=0xb5, .sp=0xb5, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xdf}, {.addr=0xa4b5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa4b5, .value=0xa6, .type=IO_READ},
        {.addr=0xa4b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0279) {
    const struct CPU_State initial_cpu = {.pc=0xae7b, .a=0x0d, .x=0x53, .y=0x22, .sp=0x68, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x16}, {.addr=0xae7b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xae7c, .a=0xf6, .x=0x53, .y=0x22, .sp=0x68, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x16}, {.addr=0xae7b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xae7b, .value=0xa6, .type=IO_READ},
        {.addr=0xae7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_027A) {
    const struct CPU_State initial_cpu = {.pc=0x7377, .a=0xb9, .x=0x93, .y=0xa1, .sp=0xe6, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xb3}, {.addr=0x7377, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7378, .a=0x06, .x=0x93, .y=0xa1, .sp=0xe6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xb3}, {.addr=0x7377, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7377, .value=0xa6, .type=IO_READ},
        {.addr=0x7378, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_027B) {
    const struct CPU_State initial_cpu = {.pc=0x3108, .a=0x80, .x=0x49, .y=0xf3, .sp=0x88, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x0c}, {.addr=0x3108, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3109, .a=0x74, .x=0x49, .y=0xf3, .sp=0x88, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x0c}, {.addr=0x3108, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3108, .value=0xa6, .type=IO_READ},
        {.addr=0x3109, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_027C) {
    const struct CPU_State initial_cpu = {.pc=0x0b97, .a=0xe6, .x=0xaa, .y=0x7c, .sp=0x9b, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xe5}, {.addr=0x0b97, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0b98, .a=0x01, .x=0xaa, .y=0x7c, .sp=0x9b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xe5}, {.addr=0x0b97, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0b97, .value=0xa6, .type=IO_READ},
        {.addr=0x0b98, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_027D) {
    const struct CPU_State initial_cpu = {.pc=0x90cc, .a=0xbd, .x=0xb4, .y=0x2c, .sp=0x2c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0xb4}, {.addr=0x90cc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x90cd, .a=0x08, .x=0xb4, .y=0x2c, .sp=0x2c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0xb4}, {.addr=0x90cc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x90cc, .value=0xa6, .type=IO_READ},
        {.addr=0x90cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_027E) {
    const struct CPU_State initial_cpu = {.pc=0x40b6, .a=0x16, .x=0x0f, .y=0xfe, .sp=0x17, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0xde}, {.addr=0x40b6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x40b7, .a=0x37, .x=0x0f, .y=0xfe, .sp=0x17, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0xde}, {.addr=0x40b6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x40b6, .value=0xa6, .type=IO_READ},
        {.addr=0x40b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_027F) {
    const struct CPU_State initial_cpu = {.pc=0x977e, .a=0xee, .x=0x91, .y=0x69, .sp=0x20, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x3d}, {.addr=0x977e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x977f, .a=0xb0, .x=0x91, .y=0x69, .sp=0x20, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x3d}, {.addr=0x977e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x977e, .value=0xa6, .type=IO_READ},
        {.addr=0x977f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0280) {
    const struct CPU_State initial_cpu = {.pc=0x3d0c, .a=0x50, .x=0xc8, .y=0x4a, .sp=0x98, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x54}, {.addr=0x3d0c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3d0d, .a=0xfc, .x=0xc8, .y=0x4a, .sp=0x98, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x54}, {.addr=0x3d0c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3d0c, .value=0xa6, .type=IO_READ},
        {.addr=0x3d0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0281) {
    const struct CPU_State initial_cpu = {.pc=0xf74f, .a=0x3c, .x=0x8e, .y=0xc2, .sp=0x1f, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x67}, {.addr=0xf74f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf750, .a=0xd5, .x=0x8e, .y=0xc2, .sp=0x1f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x67}, {.addr=0xf74f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf74f, .value=0xa6, .type=IO_READ},
        {.addr=0xf750, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0282) {
    const struct CPU_State initial_cpu = {.pc=0xc62e, .a=0x52, .x=0x5e, .y=0x57, .sp=0xe6, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0x46}, {.addr=0xc62e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc62f, .a=0x0c, .x=0x5e, .y=0x57, .sp=0xe6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0x46}, {.addr=0xc62e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc62e, .value=0xa6, .type=IO_READ},
        {.addr=0xc62f, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0283) {
    const struct CPU_State initial_cpu = {.pc=0x9960, .a=0x33, .x=0xa7, .y=0x53, .sp=0x0c, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x66}, {.addr=0x9960, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9961, .a=0xcc, .x=0xa7, .y=0x53, .sp=0x0c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x66}, {.addr=0x9960, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9960, .value=0xa6, .type=IO_READ},
        {.addr=0x9961, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0284) {
    const struct CPU_State initial_cpu = {.pc=0xb45d, .a=0x7f, .x=0xe9, .y=0xe5, .sp=0xd5, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x9c}, {.addr=0xb45d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb45e, .a=0xe2, .x=0xe9, .y=0xe5, .sp=0xd5, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x9c}, {.addr=0xb45d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb45d, .value=0xa6, .type=IO_READ},
        {.addr=0xb45e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0285) {
    const struct CPU_State initial_cpu = {.pc=0x6d4a, .a=0x0f, .x=0x63, .y=0x75, .sp=0xf6, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0x8f}, {.addr=0x6d4a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6d4b, .a=0x7f, .x=0x63, .y=0x75, .sp=0xf6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0x8f}, {.addr=0x6d4a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6d4a, .value=0xa6, .type=IO_READ},
        {.addr=0x6d4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0287) {
    const struct CPU_State initial_cpu = {.pc=0x202d, .a=0x16, .x=0x87, .y=0x12, .sp=0x3b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x01}, {.addr=0x202d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x202e, .a=0x15, .x=0x87, .y=0x12, .sp=0x3b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x01}, {.addr=0x202d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x202d, .value=0xa6, .type=IO_READ},
        {.addr=0x202e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0288) {
    const struct CPU_State initial_cpu = {.pc=0x7767, .a=0xff, .x=0xb4, .y=0xdd, .sp=0xa1, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0xf8}, {.addr=0x7767, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7768, .a=0x07, .x=0xb4, .y=0xdd, .sp=0xa1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0xf8}, {.addr=0x7767, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7767, .value=0xa6, .type=IO_READ},
        {.addr=0x7768, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0289) {
    const struct CPU_State initial_cpu = {.pc=0x24c9, .a=0x5e, .x=0x8b, .y=0xaa, .sp=0xac, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0xdf}, {.addr=0x24c9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x24ca, .a=0x7e, .x=0x8b, .y=0xaa, .sp=0xac, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0xdf}, {.addr=0x24c9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x24c9, .value=0xa6, .type=IO_READ},
        {.addr=0x24ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_028A) {
    const struct CPU_State initial_cpu = {.pc=0xd4d7, .a=0xa6, .x=0xc9, .y=0x5a, .sp=0x13, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x29}, {.addr=0xd4d7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd4d8, .a=0x7d, .x=0xc9, .y=0x5a, .sp=0x13, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x29}, {.addr=0xd4d7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd4d7, .value=0xa6, .type=IO_READ},
        {.addr=0xd4d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_028B) {
    const struct CPU_State initial_cpu = {.pc=0x0e68, .a=0x25, .x=0x96, .y=0x4a, .sp=0xb0, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x35}, {.addr=0x0e68, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0e69, .a=0xf0, .x=0x96, .y=0x4a, .sp=0xb0, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x35}, {.addr=0x0e68, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0e68, .value=0xa6, .type=IO_READ},
        {.addr=0x0e69, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_028C) {
    const struct CPU_State initial_cpu = {.pc=0xdc98, .a=0x18, .x=0x5e, .y=0xe1, .sp=0x62, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0xc1}, {.addr=0xdc98, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdc99, .a=0x57, .x=0x5e, .y=0xe1, .sp=0x62, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0xc1}, {.addr=0xdc98, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdc98, .value=0xa6, .type=IO_READ},
        {.addr=0xdc99, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_028D) {
    const struct CPU_State initial_cpu = {.pc=0xca53, .a=0xd7, .x=0x2f, .y=0x61, .sp=0x03, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x01}, {.addr=0xca53, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xca54, .a=0xd6, .x=0x2f, .y=0x61, .sp=0x03, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x01}, {.addr=0xca53, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xca53, .value=0xa6, .type=IO_READ},
        {.addr=0xca54, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_028F) {
    const struct CPU_State initial_cpu = {.pc=0xbc4c, .a=0x74, .x=0xf6, .y=0x9c, .sp=0x39, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x9f}, {.addr=0xbc4c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbc4d, .a=0xd4, .x=0xf6, .y=0x9c, .sp=0x39, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x9f}, {.addr=0xbc4c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbc4c, .value=0xa6, .type=IO_READ},
        {.addr=0xbc4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0290) {
    const struct CPU_State initial_cpu = {.pc=0x1f56, .a=0x2a, .x=0x17, .y=0x0a, .sp=0x3e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x85}, {.addr=0x1f56, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1f57, .a=0xa5, .x=0x17, .y=0x0a, .sp=0x3e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x85}, {.addr=0x1f56, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1f56, .value=0xa6, .type=IO_READ},
        {.addr=0x1f57, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0291) {
    const struct CPU_State initial_cpu = {.pc=0x2c7e, .a=0x5b, .x=0x6d, .y=0xd0, .sp=0x0e, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0xdc}, {.addr=0x2c7e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2c7f, .a=0x7e, .x=0x6d, .y=0xd0, .sp=0x0e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0xdc}, {.addr=0x2c7e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2c7e, .value=0xa6, .type=IO_READ},
        {.addr=0x2c7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x006d, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0293) {
    const struct CPU_State initial_cpu = {.pc=0xf7d1, .a=0xd1, .x=0x99, .y=0x21, .sp=0x17, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x8e}, {.addr=0xf7d1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf7d2, .a=0x42, .x=0x99, .y=0x21, .sp=0x17, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x8e}, {.addr=0xf7d1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf7d1, .value=0xa6, .type=IO_READ},
        {.addr=0xf7d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0294) {
    const struct CPU_State initial_cpu = {.pc=0x3a2e, .a=0xed, .x=0x24, .y=0x52, .sp=0xd6, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0x10}, {.addr=0x3a2e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3a2f, .a=0xdc, .x=0x24, .y=0x52, .sp=0xd6, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0x10}, {.addr=0x3a2e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3a2e, .value=0xa6, .type=IO_READ},
        {.addr=0x3a2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0295) {
    const struct CPU_State initial_cpu = {.pc=0xd201, .a=0x49, .x=0xd2, .y=0x47, .sp=0x17, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x0e}, {.addr=0xd201, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd202, .a=0x3a, .x=0xd2, .y=0x47, .sp=0x17, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x0e}, {.addr=0xd201, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd201, .value=0xa6, .type=IO_READ},
        {.addr=0xd202, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0296) {
    const struct CPU_State initial_cpu = {.pc=0xd888, .a=0xea, .x=0xc1, .y=0x20, .sp=0x8e, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0xfa}, {.addr=0xd888, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd889, .a=0xef, .x=0xc1, .y=0x20, .sp=0x8e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0xfa}, {.addr=0xd888, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd888, .value=0xa6, .type=IO_READ},
        {.addr=0xd889, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0297) {
    const struct CPU_State initial_cpu = {.pc=0x3df7, .a=0xc0, .x=0x45, .y=0x3f, .sp=0xcc, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xbb}, {.addr=0x3df7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3df8, .a=0x04, .x=0x45, .y=0x3f, .sp=0xcc, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xbb}, {.addr=0x3df7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3df7, .value=0xa6, .type=IO_READ},
        {.addr=0x3df8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0298) {
    const struct CPU_State initial_cpu = {.pc=0x6d48, .a=0x40, .x=0x92, .y=0xbf, .sp=0xeb, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0xc9}, {.addr=0x6d48, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6d49, .a=0x76, .x=0x92, .y=0xbf, .sp=0xeb, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xc9}, {.addr=0x6d48, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6d48, .value=0xa6, .type=IO_READ},
        {.addr=0x6d49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0299) {
    const struct CPU_State initial_cpu = {.pc=0x1f7f, .a=0x45, .x=0x98, .y=0x03, .sp=0x34, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x3c}, {.addr=0x1f7f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1f80, .a=0x09, .x=0x98, .y=0x03, .sp=0x34, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x3c}, {.addr=0x1f7f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1f7f, .value=0xa6, .type=IO_READ},
        {.addr=0x1f80, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_029A) {
    const struct CPU_State initial_cpu = {.pc=0xa3d5, .a=0xdd, .x=0xe4, .y=0x7c, .sp=0x0a, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0xbf}, {.addr=0xa3d5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa3d6, .a=0x1d, .x=0xe4, .y=0x7c, .sp=0x0a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0xbf}, {.addr=0xa3d5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa3d5, .value=0xa6, .type=IO_READ},
        {.addr=0xa3d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_029B) {
    const struct CPU_State initial_cpu = {.pc=0x9055, .a=0x28, .x=0xb8, .y=0x3f, .sp=0xf5, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0xed}, {.addr=0x9055, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9056, .a=0x3b, .x=0xb8, .y=0x3f, .sp=0xf5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xed}, {.addr=0x9055, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9055, .value=0xa6, .type=IO_READ},
        {.addr=0x9056, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_029C) {
    const struct CPU_State initial_cpu = {.pc=0x8630, .a=0x58, .x=0x5a, .y=0x36, .sp=0x56, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x03}, {.addr=0x8630, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8631, .a=0x54, .x=0x5a, .y=0x36, .sp=0x56, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x03}, {.addr=0x8630, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8630, .value=0xa6, .type=IO_READ},
        {.addr=0x8631, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_029D) {
    const struct CPU_State initial_cpu = {.pc=0xc13a, .a=0xa3, .x=0x23, .y=0x78, .sp=0x52, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xde}, {.addr=0xc13a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc13b, .a=0xc5, .x=0x23, .y=0x78, .sp=0x52, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xde}, {.addr=0xc13a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc13a, .value=0xa6, .type=IO_READ},
        {.addr=0xc13b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_029E) {
    const struct CPU_State initial_cpu = {.pc=0x2d20, .a=0xc1, .x=0xb7, .y=0x67, .sp=0xed, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x4d}, {.addr=0x2d20, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2d21, .a=0x74, .x=0xb7, .y=0x67, .sp=0xed, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x4d}, {.addr=0x2d20, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2d20, .value=0xa6, .type=IO_READ},
        {.addr=0x2d21, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_029F) {
    const struct CPU_State initial_cpu = {.pc=0x0d92, .a=0xf1, .x=0x5b, .y=0x50, .sp=0xf0, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x09}, {.addr=0x0d92, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0d93, .a=0xe8, .x=0x5b, .y=0x50, .sp=0xf0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x09}, {.addr=0x0d92, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0d92, .value=0xa6, .type=IO_READ},
        {.addr=0x0d93, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xf96d, .a=0xea, .x=0x20, .y=0xd9, .sp=0xc1, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xdf}, {.addr=0xf96d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf96e, .a=0x0a, .x=0x20, .y=0xd9, .sp=0xc1, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xdf}, {.addr=0xf96d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf96d, .value=0xa6, .type=IO_READ},
        {.addr=0xf96e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x8e97, .a=0x12, .x=0xed, .y=0x6b, .sp=0xa8, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x67}, {.addr=0x8e97, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8e98, .a=0xaa, .x=0xed, .y=0x6b, .sp=0xa8, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x67}, {.addr=0x8e97, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8e97, .value=0xa6, .type=IO_READ},
        {.addr=0x8e98, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x8c6e, .a=0x67, .x=0x3b, .y=0x37, .sp=0xc5, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x9c}, {.addr=0x8c6e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8c6f, .a=0xcb, .x=0x3b, .y=0x37, .sp=0xc5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x9c}, {.addr=0x8c6e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8c6e, .value=0xa6, .type=IO_READ},
        {.addr=0x8c6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x9224, .a=0xfe, .x=0x2e, .y=0xbf, .sp=0x9b, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x2f}, {.addr=0x9224, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9225, .a=0xce, .x=0x2e, .y=0xbf, .sp=0x9b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x2f}, {.addr=0x9224, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9224, .value=0xa6, .type=IO_READ},
        {.addr=0x9225, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x3c31, .a=0xeb, .x=0x39, .y=0x4f, .sp=0xe1, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0xe1}, {.addr=0x3c31, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3c32, .a=0x09, .x=0x39, .y=0x4f, .sp=0xe1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0xe1}, {.addr=0x3c31, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3c31, .value=0xa6, .type=IO_READ},
        {.addr=0x3c32, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x1f43, .a=0x77, .x=0xe7, .y=0x6e, .sp=0xb8, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0xf9}, {.addr=0x1f43, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1f44, .a=0x7d, .x=0xe7, .y=0x6e, .sp=0xb8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0xf9}, {.addr=0x1f43, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1f43, .value=0xa6, .type=IO_READ},
        {.addr=0x1f44, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x2e82, .a=0x10, .x=0xe9, .y=0xe0, .sp=0x17, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0xbf}, {.addr=0x2e82, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2e83, .a=0x51, .x=0xe9, .y=0xe0, .sp=0x17, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0xbf}, {.addr=0x2e82, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2e82, .value=0xa6, .type=IO_READ},
        {.addr=0x2e83, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xfcd4, .a=0xf2, .x=0x07, .y=0x60, .sp=0xc7, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x4d}, {.addr=0xfcd4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfcd5, .a=0xa5, .x=0x07, .y=0x60, .sp=0xc7, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x4d}, {.addr=0xfcd4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfcd4, .value=0xa6, .type=IO_READ},
        {.addr=0xfcd5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x092f, .a=0xe9, .x=0x8c, .y=0xa3, .sp=0xae, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xb0}, {.addr=0x092f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0930, .a=0x38, .x=0x8c, .y=0xa3, .sp=0xae, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xb0}, {.addr=0x092f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x092f, .value=0xa6, .type=IO_READ},
        {.addr=0x0930, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x92a2, .a=0x0b, .x=0x3d, .y=0xa4, .sp=0x7b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x4d}, {.addr=0x92a2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x92a3, .a=0xbe, .x=0x3d, .y=0xa4, .sp=0x7b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x4d}, {.addr=0x92a2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x92a2, .value=0xa6, .type=IO_READ},
        {.addr=0x92a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xe843, .a=0x53, .x=0x6b, .y=0xf6, .sp=0xc9, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x72}, {.addr=0xe843, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe844, .a=0xe0, .x=0x6b, .y=0xf6, .sp=0xc9, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x72}, {.addr=0xe843, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe843, .value=0xa6, .type=IO_READ},
        {.addr=0xe844, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x1fd3, .a=0x1e, .x=0x17, .y=0x6d, .sp=0x06, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x4d}, {.addr=0x1fd3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1fd4, .a=0xd1, .x=0x17, .y=0x6d, .sp=0x06, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x4d}, {.addr=0x1fd3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1fd3, .value=0xa6, .type=IO_READ},
        {.addr=0x1fd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x5ddd, .a=0xdf, .x=0x77, .y=0xaa, .sp=0xec, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x18}, {.addr=0x5ddd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5dde, .a=0xc7, .x=0x77, .y=0xaa, .sp=0xec, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x18}, {.addr=0x5ddd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5ddd, .value=0xa6, .type=IO_READ},
        {.addr=0x5dde, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x8735, .a=0x5f, .x=0xde, .y=0xbd, .sp=0x76, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xb7}, {.addr=0x8735, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8736, .a=0xa7, .x=0xde, .y=0xbd, .sp=0x76, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xb7}, {.addr=0x8735, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8735, .value=0xa6, .type=IO_READ},
        {.addr=0x8736, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x4deb, .a=0x23, .x=0xb6, .y=0x06, .sp=0xf5, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0xc5}, {.addr=0x4deb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4dec, .a=0x5d, .x=0xb6, .y=0x06, .sp=0xf5, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xc5}, {.addr=0x4deb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4deb, .value=0xa6, .type=IO_READ},
        {.addr=0x4dec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x16c5, .a=0x5e, .x=0xa2, .y=0xba, .sp=0xeb, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x6a}, {.addr=0x16c5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x16c6, .a=0xf4, .x=0xa2, .y=0xba, .sp=0xeb, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x6a}, {.addr=0x16c5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x16c5, .value=0xa6, .type=IO_READ},
        {.addr=0x16c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x1ec7, .a=0x72, .x=0x08, .y=0x8f, .sp=0x89, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x3e}, {.addr=0x1ec7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1ec8, .a=0x34, .x=0x08, .y=0x8f, .sp=0x89, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x3e}, {.addr=0x1ec7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1ec7, .value=0xa6, .type=IO_READ},
        {.addr=0x1ec8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xe8d8, .a=0xeb, .x=0xdc, .y=0x13, .sp=0x27, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x5e}, {.addr=0xe8d8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe8d9, .a=0x8c, .x=0xdc, .y=0x13, .sp=0x27, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x5e}, {.addr=0xe8d8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe8d8, .value=0xa6, .type=IO_READ},
        {.addr=0xe8d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x6892, .a=0x35, .x=0xa9, .y=0xaf, .sp=0xe1, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x19}, {.addr=0x6892, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6893, .a=0x1c, .x=0xa9, .y=0xaf, .sp=0xe1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0x19}, {.addr=0x6892, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6892, .value=0xa6, .type=IO_READ},
        {.addr=0x6893, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x9642, .a=0xe5, .x=0x0f, .y=0x22, .sp=0x6e, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0xab}, {.addr=0x9642, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9643, .a=0x39, .x=0x0f, .y=0x22, .sp=0x6e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0xab}, {.addr=0x9642, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9642, .value=0xa6, .type=IO_READ},
        {.addr=0x9643, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x3209, .a=0x11, .x=0x0c, .y=0xe8, .sp=0xb6, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0xd2}, {.addr=0x3209, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x320a, .a=0x3e, .x=0x0c, .y=0xe8, .sp=0xb6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0xd2}, {.addr=0x3209, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3209, .value=0xa6, .type=IO_READ},
        {.addr=0x320a, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x89d7, .a=0x07, .x=0x11, .y=0xf8, .sp=0x3d, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x3b}, {.addr=0x89d7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x89d8, .a=0xcb, .x=0x11, .y=0xf8, .sp=0x3d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x3b}, {.addr=0x89d7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x89d7, .value=0xa6, .type=IO_READ},
        {.addr=0x89d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x7d5d, .a=0x4b, .x=0xf4, .y=0x5e, .sp=0xf8, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xad}, {.addr=0x7d5d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7d5e, .a=0x9d, .x=0xf4, .y=0x5e, .sp=0xf8, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xad}, {.addr=0x7d5d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7d5d, .value=0xa6, .type=IO_READ},
        {.addr=0x7d5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x3cc5, .a=0xf6, .x=0x21, .y=0x3b, .sp=0xdd, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0xc9}, {.addr=0x3cc5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3cc6, .a=0x2d, .x=0x21, .y=0x3b, .sp=0xdd, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0xc9}, {.addr=0x3cc5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3cc5, .value=0xa6, .type=IO_READ},
        {.addr=0x3cc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xeb10, .a=0x74, .x=0x9f, .y=0x5b, .sp=0xe9, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x0b}, {.addr=0xeb10, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xeb11, .a=0x69, .x=0x9f, .y=0x5b, .sp=0xe9, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x0b}, {.addr=0xeb10, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xeb10, .value=0xa6, .type=IO_READ},
        {.addr=0xeb11, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x156e, .a=0xfa, .x=0x46, .y=0xb3, .sp=0x05, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x6b}, {.addr=0x156e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x156f, .a=0x8f, .x=0x46, .y=0xb3, .sp=0x05, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x6b}, {.addr=0x156e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x156e, .value=0xa6, .type=IO_READ},
        {.addr=0x156f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xdee4, .a=0x91, .x=0x4b, .y=0x95, .sp=0xba, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0xa1}, {.addr=0xdee4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdee5, .a=0xf0, .x=0x4b, .y=0x95, .sp=0xba, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0xa1}, {.addr=0xdee4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdee4, .value=0xa6, .type=IO_READ},
        {.addr=0xdee5, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x156f, .a=0xed, .x=0x25, .y=0x52, .sp=0x4d, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0xb0}, {.addr=0x156f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1570, .a=0x3d, .x=0x25, .y=0x52, .sp=0x4d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xb0}, {.addr=0x156f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x156f, .value=0xa6, .type=IO_READ},
        {.addr=0x1570, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xfb54, .a=0x5b, .x=0x53, .y=0x65, .sp=0x9c, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x81}, {.addr=0xfb54, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfb55, .a=0xd9, .x=0x53, .y=0x65, .sp=0x9c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x81}, {.addr=0xfb54, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfb54, .value=0xa6, .type=IO_READ},
        {.addr=0xfb55, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x2676, .a=0xf1, .x=0x61, .y=0x26, .sp=0x49, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x82}, {.addr=0x2676, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2677, .a=0x6e, .x=0x61, .y=0x26, .sp=0x49, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x82}, {.addr=0x2676, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2676, .value=0xa6, .type=IO_READ},
        {.addr=0x2677, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x275c, .a=0xc9, .x=0x3c, .y=0x7f, .sp=0x10, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x93}, {.addr=0x275c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x275d, .a=0x35, .x=0x3c, .y=0x7f, .sp=0x10, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x93}, {.addr=0x275c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x275c, .value=0xa6, .type=IO_READ},
        {.addr=0x275d, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x9cc5, .a=0x69, .x=0xa4, .y=0x36, .sp=0x55, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0xb6}, {.addr=0x9cc5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9cc6, .a=0xb2, .x=0xa4, .y=0x36, .sp=0x55, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0xb6}, {.addr=0x9cc5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9cc5, .value=0xa6, .type=IO_READ},
        {.addr=0x9cc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x297d, .a=0x8d, .x=0xe0, .y=0xe9, .sp=0x4a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0x30}, {.addr=0x297d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x297e, .a=0x5c, .x=0xe0, .y=0xe9, .sp=0x4a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0x30}, {.addr=0x297d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x297d, .value=0xa6, .type=IO_READ},
        {.addr=0x297e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x44e9, .a=0xab, .x=0x71, .y=0x77, .sp=0xd6, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x7d}, {.addr=0x44e9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x44ea, .a=0x2d, .x=0x71, .y=0x77, .sp=0xd6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x7d}, {.addr=0x44e9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x44e9, .value=0xa6, .type=IO_READ},
        {.addr=0x44ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x1b08, .a=0xc4, .x=0x63, .y=0x01, .sp=0xac, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0xd4}, {.addr=0x1b08, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1b09, .a=0xef, .x=0x63, .y=0x01, .sp=0xac, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0xd4}, {.addr=0x1b08, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1b08, .value=0xa6, .type=IO_READ},
        {.addr=0x1b09, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x502b, .a=0xea, .x=0x75, .y=0x12, .sp=0xa9, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xf7}, {.addr=0x502b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x502c, .a=0xf3, .x=0x75, .y=0x12, .sp=0xa9, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xf7}, {.addr=0x502b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x502b, .value=0xa6, .type=IO_READ},
        {.addr=0x502c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x9f7f, .a=0x82, .x=0x72, .y=0x13, .sp=0x7c, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x4b}, {.addr=0x9f7f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9f80, .a=0x37, .x=0x72, .y=0x13, .sp=0x7c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x4b}, {.addr=0x9f7f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9f7f, .value=0xa6, .type=IO_READ},
        {.addr=0x9f80, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x7cfc, .a=0xa3, .x=0x24, .y=0xda, .sp=0xf6, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0x52}, {.addr=0x7cfc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7cfd, .a=0x51, .x=0x24, .y=0xda, .sp=0xf6, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0x52}, {.addr=0x7cfc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7cfc, .value=0xa6, .type=IO_READ},
        {.addr=0x7cfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xa9cc, .a=0xe7, .x=0x8a, .y=0xc9, .sp=0x18, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0xa8}, {.addr=0xa9cc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa9cd, .a=0x3f, .x=0x8a, .y=0xc9, .sp=0x18, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xa8}, {.addr=0xa9cc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa9cc, .value=0xa6, .type=IO_READ},
        {.addr=0xa9cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x4684, .a=0xbe, .x=0x90, .y=0x72, .sp=0x1c, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x5b}, {.addr=0x4684, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4685, .a=0x63, .x=0x90, .y=0x72, .sp=0x1c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x5b}, {.addr=0x4684, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4684, .value=0xa6, .type=IO_READ},
        {.addr=0x4685, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xde9f, .a=0x72, .x=0xf4, .y=0x15, .sp=0x1c, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xf0}, {.addr=0xde9f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdea0, .a=0x81, .x=0xf4, .y=0x15, .sp=0x1c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xf0}, {.addr=0xde9f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xde9f, .value=0xa6, .type=IO_READ},
        {.addr=0xdea0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xf4d8, .a=0xea, .x=0x99, .y=0x63, .sp=0xd3, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x24}, {.addr=0xf4d8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf4d9, .a=0xc6, .x=0x99, .y=0x63, .sp=0xd3, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x24}, {.addr=0xf4d8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf4d8, .value=0xa6, .type=IO_READ},
        {.addr=0xf4d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xf241, .a=0x94, .x=0x6a, .y=0x1d, .sp=0xd3, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xd2}, {.addr=0xf241, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf242, .a=0xc2, .x=0x6a, .y=0x1d, .sp=0xd3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xd2}, {.addr=0xf241, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf241, .value=0xa6, .type=IO_READ},
        {.addr=0xf242, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x75b1, .a=0x80, .x=0xac, .y=0x4e, .sp=0xff, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x01}, {.addr=0x75b1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x75b2, .a=0x7f, .x=0xac, .y=0x4e, .sp=0xff, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x01}, {.addr=0x75b1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x75b1, .value=0xa6, .type=IO_READ},
        {.addr=0x75b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x4ddb, .a=0x85, .x=0x9e, .y=0x85, .sp=0xe7, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0x90}, {.addr=0x4ddb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4ddc, .a=0xf4, .x=0x9e, .y=0x85, .sp=0xe7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0x90}, {.addr=0x4ddb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4ddb, .value=0xa6, .type=IO_READ},
        {.addr=0x4ddc, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x1775, .a=0x19, .x=0xf6, .y=0x84, .sp=0x0a, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x9d}, {.addr=0x1775, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1776, .a=0x7b, .x=0xf6, .y=0x84, .sp=0x0a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x9d}, {.addr=0x1775, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1775, .value=0xa6, .type=IO_READ},
        {.addr=0x1776, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xabca, .a=0xa8, .x=0xa5, .y=0x9f, .sp=0xe0, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0xbb}, {.addr=0xabca, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xabcb, .a=0xed, .x=0xa5, .y=0x9f, .sp=0xe0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0xbb}, {.addr=0xabca, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xabca, .value=0xa6, .type=IO_READ},
        {.addr=0xabcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a5, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x9547, .a=0x6b, .x=0x5a, .y=0xc5, .sp=0x42, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x5d}, {.addr=0x9547, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9548, .a=0x0d, .x=0x5a, .y=0xc5, .sp=0x42, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x5d}, {.addr=0x9547, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9547, .value=0xa6, .type=IO_READ},
        {.addr=0x9548, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x4722, .a=0xe4, .x=0x89, .y=0x50, .sp=0x2a, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0xe8}, {.addr=0x4722, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4723, .a=0xfb, .x=0x89, .y=0x50, .sp=0x2a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0xe8}, {.addr=0x4722, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4722, .value=0xa6, .type=IO_READ},
        {.addr=0x4723, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x8623, .a=0x6f, .x=0x39, .y=0x0c, .sp=0xb7, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x88}, {.addr=0x8623, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8624, .a=0xe6, .x=0x39, .y=0x0c, .sp=0xb7, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x88}, {.addr=0x8623, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8623, .value=0xa6, .type=IO_READ},
        {.addr=0x8624, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x4702, .a=0x57, .x=0x63, .y=0x14, .sp=0x2d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x5a}, {.addr=0x4702, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4703, .a=0xfd, .x=0x63, .y=0x14, .sp=0x2d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x5a}, {.addr=0x4702, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4702, .value=0xa6, .type=IO_READ},
        {.addr=0x4703, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x83ae, .a=0xac, .x=0xec, .y=0xd8, .sp=0xe8, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x66}, {.addr=0x83ae, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x83af, .a=0x45, .x=0xec, .y=0xd8, .sp=0xe8, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x66}, {.addr=0x83ae, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x83ae, .value=0xa6, .type=IO_READ},
        {.addr=0x83af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x8773, .a=0x02, .x=0x1e, .y=0xe8, .sp=0xe7, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0x0d}, {.addr=0x8773, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8774, .a=0xf5, .x=0x1e, .y=0xe8, .sp=0xe7, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0x0d}, {.addr=0x8773, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8773, .value=0xa6, .type=IO_READ},
        {.addr=0x8774, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x42e7, .a=0x8e, .x=0xc7, .y=0xf7, .sp=0xe0, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x19}, {.addr=0x42e7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x42e8, .a=0x74, .x=0xc7, .y=0xf7, .sp=0xe0, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x19}, {.addr=0x42e7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x42e7, .value=0xa6, .type=IO_READ},
        {.addr=0x42e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x2d7a, .a=0x0b, .x=0x0c, .y=0x7e, .sp=0x65, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xab}, {.addr=0x2d7a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2d7b, .a=0x60, .x=0x0c, .y=0x7e, .sp=0x65, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xab}, {.addr=0x2d7a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2d7a, .value=0xa6, .type=IO_READ},
        {.addr=0x2d7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x71e9, .a=0xe0, .x=0xdd, .y=0x67, .sp=0x55, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0xc1}, {.addr=0x71e9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x71ea, .a=0x1f, .x=0xdd, .y=0x67, .sp=0x55, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0xc1}, {.addr=0x71e9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x71e9, .value=0xa6, .type=IO_READ},
        {.addr=0x71ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x0c54, .a=0x02, .x=0xfd, .y=0xd9, .sp=0x76, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x46}, {.addr=0x0c54, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0c55, .a=0xbb, .x=0xfd, .y=0xd9, .sp=0x76, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x46}, {.addr=0x0c54, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0c54, .value=0xa6, .type=IO_READ},
        {.addr=0x0c55, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xad6f, .a=0xfd, .x=0xba, .y=0x66, .sp=0xb4, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x18}, {.addr=0xad6f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xad70, .a=0xe4, .x=0xba, .y=0x66, .sp=0xb4, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x18}, {.addr=0xad6f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xad6f, .value=0xa6, .type=IO_READ},
        {.addr=0xad70, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x24fa, .a=0x3b, .x=0x86, .y=0xc6, .sp=0x7e, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0xb9}, {.addr=0x24fa, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x24fb, .a=0x81, .x=0x86, .y=0xc6, .sp=0x7e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xb9}, {.addr=0x24fa, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x24fa, .value=0xa6, .type=IO_READ},
        {.addr=0x24fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xa592, .a=0x9d, .x=0xaa, .y=0xcc, .sp=0xd2, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x7e}, {.addr=0xa592, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa593, .a=0x1e, .x=0xaa, .y=0xcc, .sp=0xd2, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0x7e}, {.addr=0xa592, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa592, .value=0xa6, .type=IO_READ},
        {.addr=0xa593, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x4e50, .a=0x44, .x=0x02, .y=0x5b, .sp=0x07, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0x2a}, {.addr=0x4e50, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4e51, .a=0x1a, .x=0x02, .y=0x5b, .sp=0x07, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0x2a}, {.addr=0x4e50, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4e50, .value=0xa6, .type=IO_READ},
        {.addr=0x4e51, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xc431, .a=0xa0, .x=0x9e, .y=0x4c, .sp=0x9b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xad}, {.addr=0xc431, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc432, .a=0xf3, .x=0x9e, .y=0x4c, .sp=0x9b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xad}, {.addr=0xc431, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc431, .value=0xa6, .type=IO_READ},
        {.addr=0xc432, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x404c, .a=0x61, .x=0xb3, .y=0x71, .sp=0xf7, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x15}, {.addr=0x404c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x404d, .a=0x4c, .x=0xb3, .y=0x71, .sp=0xf7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x15}, {.addr=0x404c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x404c, .value=0xa6, .type=IO_READ},
        {.addr=0x404d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x602e, .a=0xe3, .x=0xa9, .y=0x91, .sp=0x15, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0xc8}, {.addr=0x602e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x602f, .a=0x1a, .x=0xa9, .y=0x91, .sp=0x15, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0xc8}, {.addr=0x602e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x602e, .value=0xa6, .type=IO_READ},
        {.addr=0x602f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x64f9, .a=0x7f, .x=0x11, .y=0x9e, .sp=0x64, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xde}, {.addr=0x64f9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x64fa, .a=0xa0, .x=0x11, .y=0x9e, .sp=0x64, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xde}, {.addr=0x64f9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x64f9, .value=0xa6, .type=IO_READ},
        {.addr=0x64fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x968e, .a=0xc2, .x=0x7b, .y=0xd0, .sp=0x58, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x02}, {.addr=0x968e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x968f, .a=0xbf, .x=0x7b, .y=0xd0, .sp=0x58, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x02}, {.addr=0x968e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x968e, .value=0xa6, .type=IO_READ},
        {.addr=0x968f, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x0252, .a=0xab, .x=0xed, .y=0x53, .sp=0xf7, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0xe1}, {.addr=0x0252, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0253, .a=0xca, .x=0xed, .y=0x53, .sp=0xf7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0xe1}, {.addr=0x0252, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0252, .value=0xa6, .type=IO_READ},
        {.addr=0x0253, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x8aef, .a=0x61, .x=0xdc, .y=0x31, .sp=0x2c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0xc7}, {.addr=0x8aef, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8af0, .a=0x99, .x=0xdc, .y=0x31, .sp=0x2c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0xc7}, {.addr=0x8aef, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8aef, .value=0xa6, .type=IO_READ},
        {.addr=0x8af0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x023e, .a=0x79, .x=0x7f, .y=0x53, .sp=0x3f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x5e}, {.addr=0x023e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x023f, .a=0x1a, .x=0x7f, .y=0x53, .sp=0x3f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x5e}, {.addr=0x023e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x023e, .value=0xa6, .type=IO_READ},
        {.addr=0x023f, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x7da2, .a=0x7a, .x=0xd0, .y=0xa6, .sp=0xd0, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xb3}, {.addr=0x7da2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7da3, .a=0xc7, .x=0xd0, .y=0xa6, .sp=0xd0, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xb3}, {.addr=0x7da2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7da2, .value=0xa6, .type=IO_READ},
        {.addr=0x7da3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x1932, .a=0xf2, .x=0x3c, .y=0x44, .sp=0x3c, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x31}, {.addr=0x1932, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1933, .a=0xc1, .x=0x3c, .y=0x44, .sp=0x3c, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x31}, {.addr=0x1932, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1932, .value=0xa6, .type=IO_READ},
        {.addr=0x1933, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x115b, .a=0x5b, .x=0x0f, .y=0x7c, .sp=0xae, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x80}, {.addr=0x115b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x115c, .a=0xdb, .x=0x0f, .y=0x7c, .sp=0xae, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x80}, {.addr=0x115b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x115b, .value=0xa6, .type=IO_READ},
        {.addr=0x115c, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x371e, .a=0xe3, .x=0x67, .y=0xcb, .sp=0xa6, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x2e}, {.addr=0x371e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x371f, .a=0xb4, .x=0x67, .y=0xcb, .sp=0xa6, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0x2e}, {.addr=0x371e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x371e, .value=0xa6, .type=IO_READ},
        {.addr=0x371f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x64f3, .a=0x02, .x=0xca, .y=0x31, .sp=0xb7, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x41}, {.addr=0x64f3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x64f4, .a=0xc1, .x=0xca, .y=0x31, .sp=0xb7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x41}, {.addr=0x64f3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x64f3, .value=0xa6, .type=IO_READ},
        {.addr=0x64f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xfb56, .a=0xbf, .x=0xee, .y=0xe7, .sp=0x02, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x91}, {.addr=0xfb56, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfb57, .a=0x2d, .x=0xee, .y=0xe7, .sp=0x02, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x91}, {.addr=0xfb56, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfb56, .value=0xa6, .type=IO_READ},
        {.addr=0xfb57, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x2a15, .a=0xe2, .x=0x97, .y=0x01, .sp=0x1e, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0xf7}, {.addr=0x2a15, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2a16, .a=0xea, .x=0x97, .y=0x01, .sp=0x1e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0xf7}, {.addr=0x2a15, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2a15, .value=0xa6, .type=IO_READ},
        {.addr=0x2a16, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xecc5, .a=0x18, .x=0xb0, .y=0x00, .sp=0xa8, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x64}, {.addr=0xecc5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xecc6, .a=0xb3, .x=0xb0, .y=0x00, .sp=0xa8, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x64}, {.addr=0xecc5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xecc5, .value=0xa6, .type=IO_READ},
        {.addr=0xecc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x68c2, .a=0xcf, .x=0x3d, .y=0xa9, .sp=0xba, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x45}, {.addr=0x68c2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x68c3, .a=0x8a, .x=0x3d, .y=0xa9, .sp=0xba, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x45}, {.addr=0x68c2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x68c2, .value=0xa6, .type=IO_READ},
        {.addr=0x68c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xe284, .a=0xf0, .x=0xbd, .y=0xfd, .sp=0x3e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x6e}, {.addr=0xe284, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe285, .a=0x81, .x=0xbd, .y=0xfd, .sp=0x3e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x6e}, {.addr=0xe284, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe284, .value=0xa6, .type=IO_READ},
        {.addr=0xe285, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x252b, .a=0x7d, .x=0x82, .y=0x37, .sp=0x80, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xf1}, {.addr=0x252b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x252c, .a=0x8c, .x=0x82, .y=0x37, .sp=0x80, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xf1}, {.addr=0x252b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x252b, .value=0xa6, .type=IO_READ},
        {.addr=0x252c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x36bd, .a=0x69, .x=0xc1, .y=0x00, .sp=0xc1, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x36bd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x36be, .a=0x68, .x=0xc1, .y=0x00, .sp=0xc1, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x36bd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x36bd, .value=0xa6, .type=IO_READ},
        {.addr=0x36be, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x1a67, .a=0xe1, .x=0x8f, .y=0x7f, .sp=0xe4, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xa4}, {.addr=0x1a67, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1a68, .a=0x3d, .x=0x8f, .y=0x7f, .sp=0xe4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xa4}, {.addr=0x1a67, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1a67, .value=0xa6, .type=IO_READ},
        {.addr=0x1a68, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xf716, .a=0xc5, .x=0x0d, .y=0x56, .sp=0x2c, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x2c}, {.addr=0xf716, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf717, .a=0x98, .x=0x0d, .y=0x56, .sp=0x2c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x2c}, {.addr=0xf716, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf716, .value=0xa6, .type=IO_READ},
        {.addr=0xf717, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xb14d, .a=0x84, .x=0x7c, .y=0x37, .sp=0xee, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x51}, {.addr=0xb14d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb14e, .a=0x32, .x=0x7c, .y=0x37, .sp=0xee, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x51}, {.addr=0xb14d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb14d, .value=0xa6, .type=IO_READ},
        {.addr=0xb14e, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x46f9, .a=0xa1, .x=0x29, .y=0x55, .sp=0x6f, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xc8}, {.addr=0x46f9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x46fa, .a=0xd8, .x=0x29, .y=0x55, .sp=0x6f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xc8}, {.addr=0x46f9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x46f9, .value=0xa6, .type=IO_READ},
        {.addr=0x46fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x09d5, .a=0xa0, .x=0x33, .y=0xba, .sp=0x1e, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x9c}, {.addr=0x09d5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x09d6, .a=0x03, .x=0x33, .y=0xba, .sp=0x1e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x9c}, {.addr=0x09d5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x09d5, .value=0xa6, .type=IO_READ},
        {.addr=0x09d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x65c1, .a=0xa6, .x=0x11, .y=0xf5, .sp=0x50, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xb2}, {.addr=0x65c1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x65c2, .a=0xf4, .x=0x11, .y=0xf5, .sp=0x50, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xb2}, {.addr=0x65c1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x65c1, .value=0xa6, .type=IO_READ},
        {.addr=0x65c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x84d6, .a=0x9d, .x=0x56, .y=0x54, .sp=0xec, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0xdc}, {.addr=0x84d6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x84d7, .a=0xc0, .x=0x56, .y=0x54, .sp=0xec, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0xdc}, {.addr=0x84d6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x84d6, .value=0xa6, .type=IO_READ},
        {.addr=0x84d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x2e01, .a=0xd7, .x=0xcc, .y=0xe2, .sp=0x66, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0xb6}, {.addr=0x2e01, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2e02, .a=0x20, .x=0xcc, .y=0xe2, .sp=0x66, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0xb6}, {.addr=0x2e01, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2e01, .value=0xa6, .type=IO_READ},
        {.addr=0x2e02, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x7c39, .a=0x86, .x=0x2d, .y=0x00, .sp=0x45, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x63}, {.addr=0x7c39, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7c3a, .a=0x23, .x=0x2d, .y=0x00, .sp=0x45, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x63}, {.addr=0x7c39, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7c39, .value=0xa6, .type=IO_READ},
        {.addr=0x7c3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x80bf, .a=0x29, .x=0x62, .y=0x17, .sp=0xe3, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xa6}, {.addr=0x80bf, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x80c0, .a=0x83, .x=0x62, .y=0x17, .sp=0xe3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xa6}, {.addr=0x80bf, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x80bf, .value=0xa6, .type=IO_READ},
        {.addr=0x80c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x589b, .a=0xc6, .x=0x85, .y=0xc9, .sp=0x29, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xaa}, {.addr=0x589b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x589c, .a=0x1b, .x=0x85, .y=0xc9, .sp=0x29, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xaa}, {.addr=0x589b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x589b, .value=0xa6, .type=IO_READ},
        {.addr=0x589c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0300) {
    const struct CPU_State initial_cpu = {.pc=0xcef5, .a=0x19, .x=0x61, .y=0x29, .sp=0x69, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x6f}, {.addr=0xcef5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcef6, .a=0xa9, .x=0x61, .y=0x29, .sp=0x69, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x6f}, {.addr=0xcef5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcef5, .value=0xa6, .type=IO_READ},
        {.addr=0xcef6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0301) {
    const struct CPU_State initial_cpu = {.pc=0xae3a, .a=0x2c, .x=0x6f, .y=0x08, .sp=0xe5, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x1e}, {.addr=0xae3a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xae3b, .a=0x0d, .x=0x6f, .y=0x08, .sp=0xe5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x1e}, {.addr=0xae3a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xae3a, .value=0xa6, .type=IO_READ},
        {.addr=0xae3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0303) {
    const struct CPU_State initial_cpu = {.pc=0xfea2, .a=0xec, .x=0x04, .y=0xe4, .sp=0x63, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0xcb}, {.addr=0xfea2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfea3, .a=0x21, .x=0x04, .y=0xe4, .sp=0x63, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xcb}, {.addr=0xfea2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfea2, .value=0xa6, .type=IO_READ},
        {.addr=0xfea3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0304) {
    const struct CPU_State initial_cpu = {.pc=0x6728, .a=0x15, .x=0x55, .y=0x5a, .sp=0x48, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xd7}, {.addr=0x6728, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6729, .a=0x3e, .x=0x55, .y=0x5a, .sp=0x48, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xd7}, {.addr=0x6728, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6728, .value=0xa6, .type=IO_READ},
        {.addr=0x6729, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0306) {
    const struct CPU_State initial_cpu = {.pc=0x6f6a, .a=0xe8, .x=0x29, .y=0x41, .sp=0x3a, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0xa1}, {.addr=0x6f6a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6f6b, .a=0x46, .x=0x29, .y=0x41, .sp=0x3a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0xa1}, {.addr=0x6f6a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6f6a, .value=0xa6, .type=IO_READ},
        {.addr=0x6f6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0307) {
    const struct CPU_State initial_cpu = {.pc=0xbe5a, .a=0x73, .x=0x29, .y=0xc0, .sp=0xeb, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0x16}, {.addr=0xbe5a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbe5b, .a=0x5c, .x=0x29, .y=0xc0, .sp=0xeb, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0x16}, {.addr=0xbe5a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbe5a, .value=0xa6, .type=IO_READ},
        {.addr=0xbe5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0308) {
    const struct CPU_State initial_cpu = {.pc=0xf4ba, .a=0xa1, .x=0x55, .y=0xb0, .sp=0x4a, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xf1}, {.addr=0xf4ba, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf4bb, .a=0xaf, .x=0x55, .y=0xb0, .sp=0x4a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xf1}, {.addr=0xf4ba, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf4ba, .value=0xa6, .type=IO_READ},
        {.addr=0xf4bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0309) {
    const struct CPU_State initial_cpu = {.pc=0x3a4a, .a=0xca, .x=0xd2, .y=0xb9, .sp=0x32, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0xe6}, {.addr=0x3a4a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3a4b, .a=0xe4, .x=0xd2, .y=0xb9, .sp=0x32, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0xe6}, {.addr=0x3a4a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3a4a, .value=0xa6, .type=IO_READ},
        {.addr=0x3a4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_030A) {
    const struct CPU_State initial_cpu = {.pc=0xa72e, .a=0x32, .x=0x65, .y=0x07, .sp=0x7f, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0xf1}, {.addr=0xa72e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa72f, .a=0x40, .x=0x65, .y=0x07, .sp=0x7f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0xf1}, {.addr=0xa72e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa72e, .value=0xa6, .type=IO_READ},
        {.addr=0xa72f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_030B) {
    const struct CPU_State initial_cpu = {.pc=0x241d, .a=0xfe, .x=0x66, .y=0xa7, .sp=0x1e, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x77}, {.addr=0x241d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x241e, .a=0x86, .x=0x66, .y=0xa7, .sp=0x1e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x77}, {.addr=0x241d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x241d, .value=0xa6, .type=IO_READ},
        {.addr=0x241e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_030C) {
    const struct CPU_State initial_cpu = {.pc=0xb459, .a=0x25, .x=0x4d, .y=0xa9, .sp=0x2b, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x9a}, {.addr=0xb459, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb45a, .a=0x8b, .x=0x4d, .y=0xa9, .sp=0x2b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x9a}, {.addr=0xb459, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb459, .value=0xa6, .type=IO_READ},
        {.addr=0xb45a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_030D) {
    const struct CPU_State initial_cpu = {.pc=0x21ed, .a=0x37, .x=0x25, .y=0xc9, .sp=0xa8, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0xfb}, {.addr=0x21ed, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x21ee, .a=0x3b, .x=0x25, .y=0xc9, .sp=0xa8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xfb}, {.addr=0x21ed, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x21ed, .value=0xa6, .type=IO_READ},
        {.addr=0x21ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_030E) {
    const struct CPU_State initial_cpu = {.pc=0xe05c, .a=0x91, .x=0x7d, .y=0x97, .sp=0x75, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0xf8}, {.addr=0xe05c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe05d, .a=0x98, .x=0x7d, .y=0x97, .sp=0x75, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0xf8}, {.addr=0xe05c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe05c, .value=0xa6, .type=IO_READ},
        {.addr=0xe05d, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_030F) {
    const struct CPU_State initial_cpu = {.pc=0x6255, .a=0x42, .x=0xc7, .y=0x21, .sp=0x37, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0xe0}, {.addr=0x6255, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6256, .a=0x62, .x=0xc7, .y=0x21, .sp=0x37, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xe0}, {.addr=0x6255, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6255, .value=0xa6, .type=IO_READ},
        {.addr=0x6256, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0310) {
    const struct CPU_State initial_cpu = {.pc=0xfce9, .a=0xb6, .x=0x0a, .y=0x1c, .sp=0x89, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xa7}, {.addr=0xfce9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfcea, .a=0x0f, .x=0x0a, .y=0x1c, .sp=0x89, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xa7}, {.addr=0xfce9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfce9, .value=0xa6, .type=IO_READ},
        {.addr=0xfcea, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0311) {
    const struct CPU_State initial_cpu = {.pc=0xfe9d, .a=0xca, .x=0x78, .y=0x01, .sp=0x7f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0x87}, {.addr=0xfe9d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfe9e, .a=0x43, .x=0x78, .y=0x01, .sp=0x7f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0x87}, {.addr=0xfe9d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfe9d, .value=0xa6, .type=IO_READ},
        {.addr=0xfe9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0312) {
    const struct CPU_State initial_cpu = {.pc=0xe492, .a=0x73, .x=0xce, .y=0xe8, .sp=0x5e, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x1b}, {.addr=0xe492, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe493, .a=0x58, .x=0xce, .y=0xe8, .sp=0x5e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x1b}, {.addr=0xe492, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe492, .value=0xa6, .type=IO_READ},
        {.addr=0xe493, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0314) {
    const struct CPU_State initial_cpu = {.pc=0x772a, .a=0x6f, .x=0x3c, .y=0xae, .sp=0x86, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x07}, {.addr=0x772a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x772b, .a=0x68, .x=0x3c, .y=0xae, .sp=0x86, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x07}, {.addr=0x772a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x772a, .value=0xa6, .type=IO_READ},
        {.addr=0x772b, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0315) {
    const struct CPU_State initial_cpu = {.pc=0x530a, .a=0x37, .x=0xcb, .y=0x36, .sp=0x6a, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x71}, {.addr=0x530a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x530b, .a=0xc5, .x=0xcb, .y=0x36, .sp=0x6a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0x71}, {.addr=0x530a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x530a, .value=0xa6, .type=IO_READ},
        {.addr=0x530b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0316) {
    const struct CPU_State initial_cpu = {.pc=0xb00b, .a=0x38, .x=0x46, .y=0xea, .sp=0x4b, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0x10}, {.addr=0xb00b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb00c, .a=0x27, .x=0x46, .y=0xea, .sp=0x4b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0x10}, {.addr=0xb00b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb00b, .value=0xa6, .type=IO_READ},
        {.addr=0xb00c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0317) {
    const struct CPU_State initial_cpu = {.pc=0xfacb, .a=0xda, .x=0x10, .y=0xdc, .sp=0xea, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x9f}, {.addr=0xfacb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfacc, .a=0x3b, .x=0x10, .y=0xdc, .sp=0xea, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x9f}, {.addr=0xfacb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfacb, .value=0xa6, .type=IO_READ},
        {.addr=0xfacc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0318) {
    const struct CPU_State initial_cpu = {.pc=0xa8ae, .a=0xa8, .x=0xaf, .y=0xda, .sp=0x0f, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0xf9}, {.addr=0xa8ae, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa8af, .a=0xae, .x=0xaf, .y=0xda, .sp=0x0f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xf9}, {.addr=0xa8ae, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa8ae, .value=0xa6, .type=IO_READ},
        {.addr=0xa8af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0319) {
    const struct CPU_State initial_cpu = {.pc=0xbe15, .a=0x28, .x=0xef, .y=0xd0, .sp=0x9f, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x9f}, {.addr=0xbe15, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbe16, .a=0x88, .x=0xef, .y=0xd0, .sp=0x9f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x9f}, {.addr=0xbe15, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbe15, .value=0xa6, .type=IO_READ},
        {.addr=0xbe16, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_031A) {
    const struct CPU_State initial_cpu = {.pc=0x0c17, .a=0x14, .x=0x01, .y=0x3c, .sp=0xfb, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0xc9}, {.addr=0x0c17, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0c18, .a=0x4b, .x=0x01, .y=0x3c, .sp=0xfb, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0xc9}, {.addr=0x0c17, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0c17, .value=0xa6, .type=IO_READ},
        {.addr=0x0c18, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_031B) {
    const struct CPU_State initial_cpu = {.pc=0x3882, .a=0x6c, .x=0x85, .y=0xc2, .sp=0x4e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x41}, {.addr=0x3882, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3883, .a=0x2b, .x=0x85, .y=0xc2, .sp=0x4e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x41}, {.addr=0x3882, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3882, .value=0xa6, .type=IO_READ},
        {.addr=0x3883, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_031C) {
    const struct CPU_State initial_cpu = {.pc=0xbaf5, .a=0x4d, .x=0xd3, .y=0x97, .sp=0x47, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0xd3}, {.addr=0xbaf5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbaf6, .a=0x7a, .x=0xd3, .y=0x97, .sp=0x47, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xd3}, {.addr=0xbaf5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbaf5, .value=0xa6, .type=IO_READ},
        {.addr=0xbaf6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_031D) {
    const struct CPU_State initial_cpu = {.pc=0xee5a, .a=0x90, .x=0x79, .y=0x1c, .sp=0x00, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0xe2}, {.addr=0xee5a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xee5b, .a=0xad, .x=0x79, .y=0x1c, .sp=0x00, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0xe2}, {.addr=0xee5a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xee5a, .value=0xa6, .type=IO_READ},
        {.addr=0xee5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_031E) {
    const struct CPU_State initial_cpu = {.pc=0x98fc, .a=0x75, .x=0x9d, .y=0xf6, .sp=0x7b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x0f}, {.addr=0x98fc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x98fd, .a=0x66, .x=0x9d, .y=0xf6, .sp=0x7b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x0f}, {.addr=0x98fc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x98fc, .value=0xa6, .type=IO_READ},
        {.addr=0x98fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_031F) {
    const struct CPU_State initial_cpu = {.pc=0xe6a3, .a=0x38, .x=0x66, .y=0x29, .sp=0xe1, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x02}, {.addr=0xe6a3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe6a4, .a=0x35, .x=0x66, .y=0x29, .sp=0xe1, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x02}, {.addr=0xe6a3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe6a3, .value=0xa6, .type=IO_READ},
        {.addr=0xe6a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0320) {
    const struct CPU_State initial_cpu = {.pc=0x6ade, .a=0x42, .x=0x2c, .y=0xe4, .sp=0x7a, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x5c}, {.addr=0x6ade, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6adf, .a=0xe5, .x=0x2c, .y=0xe4, .sp=0x7a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x5c}, {.addr=0x6ade, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6ade, .value=0xa6, .type=IO_READ},
        {.addr=0x6adf, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0321) {
    const struct CPU_State initial_cpu = {.pc=0x0918, .a=0xc2, .x=0x5b, .y=0xa5, .sp=0x36, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x80}, {.addr=0x0918, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0919, .a=0x42, .x=0x5b, .y=0xa5, .sp=0x36, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x80}, {.addr=0x0918, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0918, .value=0xa6, .type=IO_READ},
        {.addr=0x0919, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0322) {
    const struct CPU_State initial_cpu = {.pc=0x4dfc, .a=0xe6, .x=0x31, .y=0x87, .sp=0x39, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x53}, {.addr=0x4dfc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4dfd, .a=0x92, .x=0x31, .y=0x87, .sp=0x39, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x53}, {.addr=0x4dfc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4dfc, .value=0xa6, .type=IO_READ},
        {.addr=0x4dfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0323) {
    const struct CPU_State initial_cpu = {.pc=0x08d3, .a=0xed, .x=0xf3, .y=0x92, .sp=0x95, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x3b}, {.addr=0x08d3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x08d4, .a=0xb2, .x=0xf3, .y=0x92, .sp=0x95, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x3b}, {.addr=0x08d3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x08d3, .value=0xa6, .type=IO_READ},
        {.addr=0x08d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0324) {
    const struct CPU_State initial_cpu = {.pc=0x0b81, .a=0x89, .x=0x3a, .y=0xc6, .sp=0x94, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x04}, {.addr=0x0b81, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0b82, .a=0x84, .x=0x3a, .y=0xc6, .sp=0x94, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x04}, {.addr=0x0b81, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0b81, .value=0xa6, .type=IO_READ},
        {.addr=0x0b82, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0325) {
    const struct CPU_State initial_cpu = {.pc=0x0fd0, .a=0x89, .x=0xe8, .y=0x56, .sp=0x00, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x8a}, {.addr=0x0fd0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0fd1, .a=0xfe, .x=0xe8, .y=0x56, .sp=0x00, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x8a}, {.addr=0x0fd0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0fd0, .value=0xa6, .type=IO_READ},
        {.addr=0x0fd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0326) {
    const struct CPU_State initial_cpu = {.pc=0x9183, .a=0x4c, .x=0x3e, .y=0xa2, .sp=0x88, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0xd1}, {.addr=0x9183, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9184, .a=0x7b, .x=0x3e, .y=0xa2, .sp=0x88, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xd1}, {.addr=0x9183, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9183, .value=0xa6, .type=IO_READ},
        {.addr=0x9184, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0327) {
    const struct CPU_State initial_cpu = {.pc=0xb135, .a=0xb8, .x=0xae, .y=0xb5, .sp=0x97, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0xf0}, {.addr=0xb135, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb136, .a=0xc8, .x=0xae, .y=0xb5, .sp=0x97, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0xf0}, {.addr=0xb135, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb135, .value=0xa6, .type=IO_READ},
        {.addr=0xb136, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0328) {
    const struct CPU_State initial_cpu = {.pc=0x3c43, .a=0x8e, .x=0x6d, .y=0x3f, .sp=0x1d, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x22}, {.addr=0x3c43, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3c44, .a=0x6c, .x=0x6d, .y=0x3f, .sp=0x1d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x22}, {.addr=0x3c43, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3c43, .value=0xa6, .type=IO_READ},
        {.addr=0x3c44, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0329) {
    const struct CPU_State initial_cpu = {.pc=0x4611, .a=0x8a, .x=0x31, .y=0x3f, .sp=0x6a, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x30}, {.addr=0x4611, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4612, .a=0x5a, .x=0x31, .y=0x3f, .sp=0x6a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x30}, {.addr=0x4611, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4611, .value=0xa6, .type=IO_READ},
        {.addr=0x4612, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_032A) {
    const struct CPU_State initial_cpu = {.pc=0x5b83, .a=0x33, .x=0xa1, .y=0x21, .sp=0x24, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x31}, {.addr=0x5b83, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5b84, .a=0x01, .x=0xa1, .y=0x21, .sp=0x24, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x31}, {.addr=0x5b83, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5b83, .value=0xa6, .type=IO_READ},
        {.addr=0x5b84, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_032B) {
    const struct CPU_State initial_cpu = {.pc=0x5547, .a=0xf0, .x=0x77, .y=0x2b, .sp=0xc4, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x77}, {.addr=0x5547, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5548, .a=0x78, .x=0x77, .y=0x2b, .sp=0xc4, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x77}, {.addr=0x5547, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5547, .value=0xa6, .type=IO_READ},
        {.addr=0x5548, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_032C) {
    const struct CPU_State initial_cpu = {.pc=0x91e6, .a=0xe8, .x=0x86, .y=0x1d, .sp=0x6a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x45}, {.addr=0x91e6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x91e7, .a=0xa3, .x=0x86, .y=0x1d, .sp=0x6a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x45}, {.addr=0x91e6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x91e6, .value=0xa6, .type=IO_READ},
        {.addr=0x91e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_032D) {
    const struct CPU_State initial_cpu = {.pc=0xec7d, .a=0xbb, .x=0x70, .y=0xb3, .sp=0xb9, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x2d}, {.addr=0xec7d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xec7e, .a=0x8e, .x=0x70, .y=0xb3, .sp=0xb9, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x2d}, {.addr=0xec7d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xec7d, .value=0xa6, .type=IO_READ},
        {.addr=0xec7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_032F) {
    const struct CPU_State initial_cpu = {.pc=0x0baa, .a=0x92, .x=0x31, .y=0x60, .sp=0xb5, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0xfd}, {.addr=0x0baa, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0bab, .a=0x95, .x=0x31, .y=0x60, .sp=0xb5, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xfd}, {.addr=0x0baa, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0baa, .value=0xa6, .type=IO_READ},
        {.addr=0x0bab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0330) {
    const struct CPU_State initial_cpu = {.pc=0x6c4f, .a=0x91, .x=0xa5, .y=0x0c, .sp=0x8d, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x08}, {.addr=0x6c4f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6c50, .a=0x88, .x=0xa5, .y=0x0c, .sp=0x8d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x08}, {.addr=0x6c4f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6c4f, .value=0xa6, .type=IO_READ},
        {.addr=0x6c50, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0331) {
    const struct CPU_State initial_cpu = {.pc=0xd580, .a=0xcc, .x=0x0b, .y=0xf8, .sp=0x08, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x96}, {.addr=0xd580, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd581, .a=0x35, .x=0x0b, .y=0xf8, .sp=0x08, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x96}, {.addr=0xd580, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd580, .value=0xa6, .type=IO_READ},
        {.addr=0xd581, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0332) {
    const struct CPU_State initial_cpu = {.pc=0x7f5d, .a=0x8d, .x=0x3b, .y=0xbf, .sp=0x63, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x7d}, {.addr=0x7f5d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7f5e, .a=0x0f, .x=0x3b, .y=0xbf, .sp=0x63, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x7d}, {.addr=0x7f5d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7f5d, .value=0xa6, .type=IO_READ},
        {.addr=0x7f5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0333) {
    const struct CPU_State initial_cpu = {.pc=0x074a, .a=0x14, .x=0x6a, .y=0x6c, .sp=0xda, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x7f}, {.addr=0x074a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x074b, .a=0x95, .x=0x6a, .y=0x6c, .sp=0xda, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x7f}, {.addr=0x074a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x074a, .value=0xa6, .type=IO_READ},
        {.addr=0x074b, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0334) {
    const struct CPU_State initial_cpu = {.pc=0xbd90, .a=0x95, .x=0xc7, .y=0xfc, .sp=0x83, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0xb9}, {.addr=0xbd90, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbd91, .a=0xdb, .x=0xc7, .y=0xfc, .sp=0x83, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0xb9}, {.addr=0xbd90, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbd90, .value=0xa6, .type=IO_READ},
        {.addr=0xbd91, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0335) {
    const struct CPU_State initial_cpu = {.pc=0xa4c2, .a=0x21, .x=0xfa, .y=0xbe, .sp=0xa8, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xb7}, {.addr=0xa4c2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa4c3, .a=0x69, .x=0xfa, .y=0xbe, .sp=0xa8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xb7}, {.addr=0xa4c2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa4c2, .value=0xa6, .type=IO_READ},
        {.addr=0xa4c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0336) {
    const struct CPU_State initial_cpu = {.pc=0x088e, .a=0x53, .x=0xc4, .y=0x87, .sp=0xb9, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x37}, {.addr=0x088e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x088f, .a=0x1b, .x=0xc4, .y=0x87, .sp=0xb9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x37}, {.addr=0x088e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x088e, .value=0xa6, .type=IO_READ},
        {.addr=0x088f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0337) {
    const struct CPU_State initial_cpu = {.pc=0x2ba0, .a=0xb5, .x=0x26, .y=0x73, .sp=0x06, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x52}, {.addr=0x2ba0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2ba1, .a=0x63, .x=0x26, .y=0x73, .sp=0x06, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x52}, {.addr=0x2ba0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2ba0, .value=0xa6, .type=IO_READ},
        {.addr=0x2ba1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0338) {
    const struct CPU_State initial_cpu = {.pc=0x81a3, .a=0x49, .x=0xce, .y=0x90, .sp=0xff, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x71}, {.addr=0x81a3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x81a4, .a=0xd7, .x=0xce, .y=0x90, .sp=0xff, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x71}, {.addr=0x81a3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x81a3, .value=0xa6, .type=IO_READ},
        {.addr=0x81a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0339) {
    const struct CPU_State initial_cpu = {.pc=0xd2f7, .a=0xb6, .x=0x97, .y=0xe4, .sp=0xc0, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xdc}, {.addr=0xd2f7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd2f8, .a=0xda, .x=0x97, .y=0xe4, .sp=0xc0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xdc}, {.addr=0xd2f7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd2f7, .value=0xa6, .type=IO_READ},
        {.addr=0xd2f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_033A) {
    const struct CPU_State initial_cpu = {.pc=0x9608, .a=0x7e, .x=0xab, .y=0x5b, .sp=0x48, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x39}, {.addr=0x9608, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9609, .a=0x44, .x=0xab, .y=0x5b, .sp=0x48, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x39}, {.addr=0x9608, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9608, .value=0xa6, .type=IO_READ},
        {.addr=0x9609, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_033B) {
    const struct CPU_State initial_cpu = {.pc=0xc11d, .a=0x50, .x=0x49, .y=0x38, .sp=0x4e, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x06}, {.addr=0xc11d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc11e, .a=0x4a, .x=0x49, .y=0x38, .sp=0x4e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x06}, {.addr=0xc11d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc11d, .value=0xa6, .type=IO_READ},
        {.addr=0xc11e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_033C) {
    const struct CPU_State initial_cpu = {.pc=0x59a2, .a=0x08, .x=0x4e, .y=0x38, .sp=0xf3, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xa6}, {.addr=0x59a2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x59a3, .a=0x62, .x=0x4e, .y=0x38, .sp=0xf3, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xa6}, {.addr=0x59a2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x59a2, .value=0xa6, .type=IO_READ},
        {.addr=0x59a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_033E) {
    const struct CPU_State initial_cpu = {.pc=0x9a8f, .a=0xd9, .x=0xd4, .y=0x66, .sp=0x91, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xc4}, {.addr=0x9a8f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9a90, .a=0x15, .x=0xd4, .y=0x66, .sp=0x91, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xc4}, {.addr=0x9a8f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9a8f, .value=0xa6, .type=IO_READ},
        {.addr=0x9a90, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_033F) {
    const struct CPU_State initial_cpu = {.pc=0x90dd, .a=0x47, .x=0x96, .y=0xbc, .sp=0x0b, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x79}, {.addr=0x90dd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x90de, .a=0xcd, .x=0x96, .y=0xbc, .sp=0x0b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x79}, {.addr=0x90dd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x90dd, .value=0xa6, .type=IO_READ},
        {.addr=0x90de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0340) {
    const struct CPU_State initial_cpu = {.pc=0xea6c, .a=0x9e, .x=0x2a, .y=0xc1, .sp=0x81, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x11}, {.addr=0xea6c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xea6d, .a=0x8c, .x=0x2a, .y=0xc1, .sp=0x81, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x11}, {.addr=0xea6c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xea6c, .value=0xa6, .type=IO_READ},
        {.addr=0xea6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0341) {
    const struct CPU_State initial_cpu = {.pc=0x69e3, .a=0xad, .x=0x1b, .y=0x15, .sp=0x1b, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xd3}, {.addr=0x69e3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x69e4, .a=0xd9, .x=0x1b, .y=0x15, .sp=0x1b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xd3}, {.addr=0x69e3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x69e3, .value=0xa6, .type=IO_READ},
        {.addr=0x69e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0342) {
    const struct CPU_State initial_cpu = {.pc=0x8e1a, .a=0xe1, .x=0x3c, .y=0xee, .sp=0x39, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0xf3}, {.addr=0x8e1a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8e1b, .a=0xed, .x=0x3c, .y=0xee, .sp=0x39, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0xf3}, {.addr=0x8e1a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8e1a, .value=0xa6, .type=IO_READ},
        {.addr=0x8e1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0343) {
    const struct CPU_State initial_cpu = {.pc=0xc740, .a=0xb0, .x=0xe9, .y=0x8b, .sp=0xcf, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x39}, {.addr=0xc740, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc741, .a=0x77, .x=0xe9, .y=0x8b, .sp=0xcf, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x39}, {.addr=0xc740, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc740, .value=0xa6, .type=IO_READ},
        {.addr=0xc741, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0344) {
    const struct CPU_State initial_cpu = {.pc=0x9205, .a=0x48, .x=0x85, .y=0xdf, .sp=0x59, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0x2a}, {.addr=0x9205, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9206, .a=0x1e, .x=0x85, .y=0xdf, .sp=0x59, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0x2a}, {.addr=0x9205, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9205, .value=0xa6, .type=IO_READ},
        {.addr=0x9206, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0345) {
    const struct CPU_State initial_cpu = {.pc=0x0f5d, .a=0xf1, .x=0xd4, .y=0xac, .sp=0x67, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xfa}, {.addr=0x0f5d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0f5e, .a=0xf7, .x=0xd4, .y=0xac, .sp=0x67, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xfa}, {.addr=0x0f5d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0f5d, .value=0xa6, .type=IO_READ},
        {.addr=0x0f5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0346) {
    const struct CPU_State initial_cpu = {.pc=0x0d2c, .a=0xe5, .x=0xfe, .y=0xb5, .sp=0x3f, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x09}, {.addr=0x0d2c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0d2d, .a=0xdb, .x=0xfe, .y=0xb5, .sp=0x3f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x09}, {.addr=0x0d2c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0d2c, .value=0xa6, .type=IO_READ},
        {.addr=0x0d2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0347) {
    const struct CPU_State initial_cpu = {.pc=0xb625, .a=0x90, .x=0x3a, .y=0xf5, .sp=0xaa, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x10}, {.addr=0xb625, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb626, .a=0x7f, .x=0x3a, .y=0xf5, .sp=0xaa, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x10}, {.addr=0xb625, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb625, .value=0xa6, .type=IO_READ},
        {.addr=0xb626, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0348) {
    const struct CPU_State initial_cpu = {.pc=0x7414, .a=0x13, .x=0x14, .y=0xd9, .sp=0xe7, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x8c}, {.addr=0x7414, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7415, .a=0x87, .x=0x14, .y=0xd9, .sp=0xe7, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x8c}, {.addr=0x7414, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7414, .value=0xa6, .type=IO_READ},
        {.addr=0x7415, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0349) {
    const struct CPU_State initial_cpu = {.pc=0xc7c5, .a=0x85, .x=0xc4, .y=0x27, .sp=0xc6, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0xe6}, {.addr=0xc7c5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc7c6, .a=0x9e, .x=0xc4, .y=0x27, .sp=0xc6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xe6}, {.addr=0xc7c5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc7c5, .value=0xa6, .type=IO_READ},
        {.addr=0xc7c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_034A) {
    const struct CPU_State initial_cpu = {.pc=0xcdb6, .a=0x23, .x=0x4e, .y=0xcb, .sp=0xc0, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x96}, {.addr=0xcdb6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcdb7, .a=0x8c, .x=0x4e, .y=0xcb, .sp=0xc0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x96}, {.addr=0xcdb6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcdb6, .value=0xa6, .type=IO_READ},
        {.addr=0xcdb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_034B) {
    const struct CPU_State initial_cpu = {.pc=0xaac9, .a=0x90, .x=0x39, .y=0x27, .sp=0xe0, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xd8}, {.addr=0xaac9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xaaca, .a=0xb7, .x=0x39, .y=0x27, .sp=0xe0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xd8}, {.addr=0xaac9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xaac9, .value=0xa6, .type=IO_READ},
        {.addr=0xaaca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_034C) {
    const struct CPU_State initial_cpu = {.pc=0xe840, .a=0x4b, .x=0x13, .y=0xa4, .sp=0x0f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0x3f}, {.addr=0xe840, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe841, .a=0x0b, .x=0x13, .y=0xa4, .sp=0x0f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0x3f}, {.addr=0xe840, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe840, .value=0xa6, .type=IO_READ},
        {.addr=0xe841, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_034D) {
    const struct CPU_State initial_cpu = {.pc=0x008f, .a=0x09, .x=0xd6, .y=0x50, .sp=0xfa, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0xa6}, {.addr=0x01d6, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x0090, .a=0x0a, .x=0xd6, .y=0x50, .sp=0xfa, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xa6}, {.addr=0x01d6, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x008f, .value=0xa6, .type=IO_READ},
        {.addr=0x0090, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_034E) {
    const struct CPU_State initial_cpu = {.pc=0x6995, .a=0xdd, .x=0xe6, .y=0x8b, .sp=0x0a, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0xa5}, {.addr=0x6995, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6996, .a=0x37, .x=0xe6, .y=0x8b, .sp=0x0a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0xa5}, {.addr=0x6995, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6995, .value=0xa6, .type=IO_READ},
        {.addr=0x6996, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_034F) {
    const struct CPU_State initial_cpu = {.pc=0xead6, .a=0x05, .x=0xb9, .y=0x2c, .sp=0xe6, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0xf4}, {.addr=0xead6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xead7, .a=0x11, .x=0xb9, .y=0x2c, .sp=0xe6, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0xf4}, {.addr=0xead6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xead6, .value=0xa6, .type=IO_READ},
        {.addr=0xead7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0350) {
    const struct CPU_State initial_cpu = {.pc=0xc817, .a=0x59, .x=0xef, .y=0xd7, .sp=0x51, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xa4}, {.addr=0xc817, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc818, .a=0xb4, .x=0xef, .y=0xd7, .sp=0x51, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xa4}, {.addr=0xc817, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc817, .value=0xa6, .type=IO_READ},
        {.addr=0xc818, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0351) {
    const struct CPU_State initial_cpu = {.pc=0x5ee7, .a=0x1f, .x=0xcb, .y=0x5c, .sp=0xd9, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0xb0}, {.addr=0x5ee7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5ee8, .a=0x6e, .x=0xcb, .y=0x5c, .sp=0xd9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0xb0}, {.addr=0x5ee7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5ee7, .value=0xa6, .type=IO_READ},
        {.addr=0x5ee8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0352) {
    const struct CPU_State initial_cpu = {.pc=0x49eb, .a=0xd0, .x=0x51, .y=0x62, .sp=0x53, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x8b}, {.addr=0x49eb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x49ec, .a=0x44, .x=0x51, .y=0x62, .sp=0x53, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x8b}, {.addr=0x49eb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x49eb, .value=0xa6, .type=IO_READ},
        {.addr=0x49ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0353) {
    const struct CPU_State initial_cpu = {.pc=0xa609, .a=0x7e, .x=0xd0, .y=0x25, .sp=0xc4, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xc6}, {.addr=0xa609, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa60a, .a=0xb7, .x=0xd0, .y=0x25, .sp=0xc4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xc6}, {.addr=0xa609, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa609, .value=0xa6, .type=IO_READ},
        {.addr=0xa60a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0354) {
    const struct CPU_State initial_cpu = {.pc=0xf2a6, .a=0x0e, .x=0x92, .y=0xfb, .sp=0x61, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x04}, {.addr=0xf2a6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf2a7, .a=0x0a, .x=0x92, .y=0xfb, .sp=0x61, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0x04}, {.addr=0xf2a6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf2a6, .value=0xa6, .type=IO_READ},
        {.addr=0xf2a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0355) {
    const struct CPU_State initial_cpu = {.pc=0x37b9, .a=0x04, .x=0xbe, .y=0xf3, .sp=0x4b, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0xfa}, {.addr=0x37b9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x37ba, .a=0x09, .x=0xbe, .y=0xf3, .sp=0x4b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0xfa}, {.addr=0x37b9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x37b9, .value=0xa6, .type=IO_READ},
        {.addr=0x37ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x00be, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0356) {
    const struct CPU_State initial_cpu = {.pc=0xc44a, .a=0x86, .x=0xcd, .y=0x1d, .sp=0x3c, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x0c}, {.addr=0xc44a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc44b, .a=0x7a, .x=0xcd, .y=0x1d, .sp=0x3c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x0c}, {.addr=0xc44a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc44a, .value=0xa6, .type=IO_READ},
        {.addr=0xc44b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0357) {
    const struct CPU_State initial_cpu = {.pc=0x437c, .a=0xad, .x=0x95, .y=0x03, .sp=0x7d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x50}, {.addr=0x437c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x437d, .a=0x5d, .x=0x95, .y=0x03, .sp=0x7d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x50}, {.addr=0x437c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x437c, .value=0xa6, .type=IO_READ},
        {.addr=0x437d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0358) {
    const struct CPU_State initial_cpu = {.pc=0x9f26, .a=0x2e, .x=0xcb, .y=0x41, .sp=0x37, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x69}, {.addr=0x9f26, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9f27, .a=0xc4, .x=0xcb, .y=0x41, .sp=0x37, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0x69}, {.addr=0x9f26, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9f26, .value=0xa6, .type=IO_READ},
        {.addr=0x9f27, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0359) {
    const struct CPU_State initial_cpu = {.pc=0xf7c5, .a=0x41, .x=0x63, .y=0x44, .sp=0xfa, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x29}, {.addr=0xf7c5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf7c6, .a=0x18, .x=0x63, .y=0x44, .sp=0xfa, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x29}, {.addr=0xf7c5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf7c5, .value=0xa6, .type=IO_READ},
        {.addr=0xf7c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_035A) {
    const struct CPU_State initial_cpu = {.pc=0xc0e9, .a=0x50, .x=0x58, .y=0xf3, .sp=0xe3, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x15}, {.addr=0xc0e9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc0ea, .a=0x3a, .x=0x58, .y=0xf3, .sp=0xe3, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x15}, {.addr=0xc0e9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc0e9, .value=0xa6, .type=IO_READ},
        {.addr=0xc0ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_035B) {
    const struct CPU_State initial_cpu = {.pc=0x5d30, .a=0x12, .x=0x77, .y=0x00, .sp=0xef, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x1e}, {.addr=0x5d30, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5d31, .a=0xf4, .x=0x77, .y=0x00, .sp=0xef, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x1e}, {.addr=0x5d30, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5d30, .value=0xa6, .type=IO_READ},
        {.addr=0x5d31, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_035C) {
    const struct CPU_State initial_cpu = {.pc=0x12fc, .a=0xf5, .x=0x9a, .y=0x53, .sp=0xcd, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x95}, {.addr=0x12fc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x12fd, .a=0x60, .x=0x9a, .y=0x53, .sp=0xcd, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x95}, {.addr=0x12fc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x12fc, .value=0xa6, .type=IO_READ},
        {.addr=0x12fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_035D) {
    const struct CPU_State initial_cpu = {.pc=0xb4e7, .a=0xd4, .x=0xc7, .y=0x77, .sp=0xd5, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x5a}, {.addr=0xb4e7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb4e8, .a=0x79, .x=0xc7, .y=0x77, .sp=0xd5, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x5a}, {.addr=0xb4e7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb4e7, .value=0xa6, .type=IO_READ},
        {.addr=0xb4e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_035E) {
    const struct CPU_State initial_cpu = {.pc=0x121a, .a=0x98, .x=0x59, .y=0x58, .sp=0xab, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xed}, {.addr=0x121a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x121b, .a=0xab, .x=0x59, .y=0x58, .sp=0xab, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xed}, {.addr=0x121a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x121a, .value=0xa6, .type=IO_READ},
        {.addr=0x121b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_035F) {
    const struct CPU_State initial_cpu = {.pc=0x3dc7, .a=0x7c, .x=0x39, .y=0x29, .sp=0x40, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0xfc}, {.addr=0x3dc7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3dc8, .a=0x80, .x=0x39, .y=0x29, .sp=0x40, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0xfc}, {.addr=0x3dc7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3dc7, .value=0xa6, .type=IO_READ},
        {.addr=0x3dc8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0360) {
    const struct CPU_State initial_cpu = {.pc=0x96ba, .a=0x62, .x=0x40, .y=0x58, .sp=0x0f, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x92}, {.addr=0x96ba, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x96bb, .a=0xd0, .x=0x40, .y=0x58, .sp=0x0f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x92}, {.addr=0x96ba, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x96ba, .value=0xa6, .type=IO_READ},
        {.addr=0x96bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0361) {
    const struct CPU_State initial_cpu = {.pc=0x15f1, .a=0x59, .x=0x80, .y=0x5e, .sp=0x8e, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0x62}, {.addr=0x15f1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x15f2, .a=0xf6, .x=0x80, .y=0x5e, .sp=0x8e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0x62}, {.addr=0x15f1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x15f1, .value=0xa6, .type=IO_READ},
        {.addr=0x15f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0362) {
    const struct CPU_State initial_cpu = {.pc=0x1b9a, .a=0xfc, .x=0xc5, .y=0x1e, .sp=0x58, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xcf}, {.addr=0x1b9a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1b9b, .a=0x2d, .x=0xc5, .y=0x1e, .sp=0x58, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xcf}, {.addr=0x1b9a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1b9a, .value=0xa6, .type=IO_READ},
        {.addr=0x1b9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0363) {
    const struct CPU_State initial_cpu = {.pc=0x63cc, .a=0xa8, .x=0xc3, .y=0xa3, .sp=0xcf, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xcc}, {.addr=0x63cc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x63cd, .a=0xdc, .x=0xc3, .y=0xa3, .sp=0xcf, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xcc}, {.addr=0x63cc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x63cc, .value=0xa6, .type=IO_READ},
        {.addr=0x63cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0364) {
    const struct CPU_State initial_cpu = {.pc=0xc411, .a=0x18, .x=0x30, .y=0x47, .sp=0x79, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x26}, {.addr=0xc411, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc412, .a=0xf1, .x=0x30, .y=0x47, .sp=0x79, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x26}, {.addr=0xc411, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc411, .value=0xa6, .type=IO_READ},
        {.addr=0xc412, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0365) {
    const struct CPU_State initial_cpu = {.pc=0xd8fd, .a=0xc5, .x=0x14, .y=0xa3, .sp=0x3d, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x99}, {.addr=0xd8fd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd8fe, .a=0x2c, .x=0x14, .y=0xa3, .sp=0x3d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x99}, {.addr=0xd8fd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd8fd, .value=0xa6, .type=IO_READ},
        {.addr=0xd8fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0366) {
    const struct CPU_State initial_cpu = {.pc=0xfd80, .a=0x8f, .x=0x74, .y=0x87, .sp=0xa1, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x38}, {.addr=0xfd80, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfd81, .a=0x57, .x=0x74, .y=0x87, .sp=0xa1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x38}, {.addr=0xfd80, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfd80, .value=0xa6, .type=IO_READ},
        {.addr=0xfd81, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0367) {
    const struct CPU_State initial_cpu = {.pc=0x070c, .a=0xcb, .x=0x3f, .y=0xf6, .sp=0xaa, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x3f}, {.addr=0x070c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x070d, .a=0x8b, .x=0x3f, .y=0xf6, .sp=0xaa, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x3f}, {.addr=0x070c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x070c, .value=0xa6, .type=IO_READ},
        {.addr=0x070d, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0368) {
    const struct CPU_State initial_cpu = {.pc=0xe5de, .a=0x4c, .x=0x63, .y=0x29, .sp=0x7a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x5d}, {.addr=0xe5de, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe5df, .a=0xee, .x=0x63, .y=0x29, .sp=0x7a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x5d}, {.addr=0xe5de, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe5de, .value=0xa6, .type=IO_READ},
        {.addr=0xe5df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0369) {
    const struct CPU_State initial_cpu = {.pc=0x3213, .a=0x0c, .x=0xeb, .y=0x35, .sp=0x2c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x09}, {.addr=0x3213, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3214, .a=0x02, .x=0xeb, .y=0x35, .sp=0x2c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x09}, {.addr=0x3213, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3213, .value=0xa6, .type=IO_READ},
        {.addr=0x3214, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_036A) {
    const struct CPU_State initial_cpu = {.pc=0x1d5b, .a=0xb5, .x=0x90, .y=0x30, .sp=0x5e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0xea}, {.addr=0x1d5b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1d5c, .a=0xca, .x=0x90, .y=0x30, .sp=0x5e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0xea}, {.addr=0x1d5b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1d5b, .value=0xa6, .type=IO_READ},
        {.addr=0x1d5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_036B) {
    const struct CPU_State initial_cpu = {.pc=0xb70b, .a=0x74, .x=0x79, .y=0xea, .sp=0xd3, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x39}, {.addr=0xb70b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb70c, .a=0x3b, .x=0x79, .y=0xea, .sp=0xd3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x39}, {.addr=0xb70b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb70b, .value=0xa6, .type=IO_READ},
        {.addr=0xb70c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_036C) {
    const struct CPU_State initial_cpu = {.pc=0xcc8e, .a=0xe0, .x=0x8c, .y=0x0a, .sp=0xb6, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x60}, {.addr=0xcc8e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcc8f, .a=0x80, .x=0x8c, .y=0x0a, .sp=0xb6, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x60}, {.addr=0xcc8e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcc8e, .value=0xa6, .type=IO_READ},
        {.addr=0xcc8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_036D) {
    const struct CPU_State initial_cpu = {.pc=0xc2d5, .a=0xdc, .x=0x56, .y=0x08, .sp=0x05, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xfd}, {.addr=0xc2d5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc2d6, .a=0xdf, .x=0x56, .y=0x08, .sp=0x05, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xfd}, {.addr=0xc2d5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc2d5, .value=0xa6, .type=IO_READ},
        {.addr=0xc2d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_036E) {
    const struct CPU_State initial_cpu = {.pc=0x0ec1, .a=0xf2, .x=0xa7, .y=0x0b, .sp=0xc8, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x52}, {.addr=0x0ec1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0ec2, .a=0x9f, .x=0xa7, .y=0x0b, .sp=0xc8, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x52}, {.addr=0x0ec1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0ec1, .value=0xa6, .type=IO_READ},
        {.addr=0x0ec2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_036F) {
    const struct CPU_State initial_cpu = {.pc=0xc217, .a=0xb3, .x=0x60, .y=0x93, .sp=0x54, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0xa3}, {.addr=0xc217, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc218, .a=0x0f, .x=0x60, .y=0x93, .sp=0x54, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xa3}, {.addr=0xc217, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc217, .value=0xa6, .type=IO_READ},
        {.addr=0xc218, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0370) {
    const struct CPU_State initial_cpu = {.pc=0x4cce, .a=0x76, .x=0xae, .y=0xde, .sp=0x99, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0xbc}, {.addr=0x4cce, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4ccf, .a=0xb9, .x=0xae, .y=0xde, .sp=0x99, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0xbc}, {.addr=0x4cce, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4cce, .value=0xa6, .type=IO_READ},
        {.addr=0x4ccf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0371) {
    const struct CPU_State initial_cpu = {.pc=0xe3f8, .a=0x99, .x=0xe5, .y=0x01, .sp=0x9f, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x42}, {.addr=0xe3f8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe3f9, .a=0x56, .x=0xe5, .y=0x01, .sp=0x9f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x42}, {.addr=0xe3f8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe3f8, .value=0xa6, .type=IO_READ},
        {.addr=0xe3f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0372) {
    const struct CPU_State initial_cpu = {.pc=0x4e77, .a=0x90, .x=0x79, .y=0x8d, .sp=0x3a, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x2f}, {.addr=0x4e77, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4e78, .a=0x61, .x=0x79, .y=0x8d, .sp=0x3a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x2f}, {.addr=0x4e77, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4e77, .value=0xa6, .type=IO_READ},
        {.addr=0x4e78, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0373) {
    const struct CPU_State initial_cpu = {.pc=0xd845, .a=0x6f, .x=0xa3, .y=0x76, .sp=0x25, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x07}, {.addr=0xd845, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd846, .a=0x68, .x=0xa3, .y=0x76, .sp=0x25, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x07}, {.addr=0xd845, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd845, .value=0xa6, .type=IO_READ},
        {.addr=0xd846, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0374) {
    const struct CPU_State initial_cpu = {.pc=0x6d6b, .a=0x26, .x=0xb5, .y=0x71, .sp=0xd7, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0xe5}, {.addr=0x6d6b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6d6c, .a=0x41, .x=0xb5, .y=0x71, .sp=0xd7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xe5}, {.addr=0x6d6b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6d6b, .value=0xa6, .type=IO_READ},
        {.addr=0x6d6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0375) {
    const struct CPU_State initial_cpu = {.pc=0x0070, .a=0x84, .x=0x08, .y=0xd4, .sp=0xa7, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0xef}, {.addr=0x0070, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0071, .a=0x95, .x=0x08, .y=0xd4, .sp=0xa7, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0xef}, {.addr=0x0070, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0070, .value=0xa6, .type=IO_READ},
        {.addr=0x0071, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0376) {
    const struct CPU_State initial_cpu = {.pc=0x6dc3, .a=0x7b, .x=0x96, .y=0x70, .sp=0xfd, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0xea}, {.addr=0x6dc3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6dc4, .a=0x91, .x=0x96, .y=0x70, .sp=0xfd, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0xea}, {.addr=0x6dc3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6dc3, .value=0xa6, .type=IO_READ},
        {.addr=0x6dc4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0378) {
    const struct CPU_State initial_cpu = {.pc=0x0ed8, .a=0xfa, .x=0xe1, .y=0x95, .sp=0xd2, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0xaa}, {.addr=0x0ed8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0ed9, .a=0x50, .x=0xe1, .y=0x95, .sp=0xd2, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0xaa}, {.addr=0x0ed8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0ed8, .value=0xa6, .type=IO_READ},
        {.addr=0x0ed9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0379) {
    const struct CPU_State initial_cpu = {.pc=0x5975, .a=0xd8, .x=0x20, .y=0x05, .sp=0xc2, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0x74}, {.addr=0x5975, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5976, .a=0x64, .x=0x20, .y=0x05, .sp=0xc2, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0x74}, {.addr=0x5975, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5975, .value=0xa6, .type=IO_READ},
        {.addr=0x5976, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_037A) {
    const struct CPU_State initial_cpu = {.pc=0xabb2, .a=0xcd, .x=0x8b, .y=0x6c, .sp=0x7f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0xe4}, {.addr=0xabb2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xabb3, .a=0xe8, .x=0x8b, .y=0x6c, .sp=0x7f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xe4}, {.addr=0xabb2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xabb2, .value=0xa6, .type=IO_READ},
        {.addr=0xabb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_037B) {
    const struct CPU_State initial_cpu = {.pc=0x3ec0, .a=0x30, .x=0xfc, .y=0xa2, .sp=0xab, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x1a}, {.addr=0x3ec0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3ec1, .a=0x16, .x=0xfc, .y=0xa2, .sp=0xab, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x1a}, {.addr=0x3ec0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3ec0, .value=0xa6, .type=IO_READ},
        {.addr=0x3ec1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_037C) {
    const struct CPU_State initial_cpu = {.pc=0x8d4a, .a=0xce, .x=0x82, .y=0xbf, .sp=0xec, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x40}, {.addr=0x8d4a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8d4b, .a=0x8d, .x=0x82, .y=0xbf, .sp=0xec, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x40}, {.addr=0x8d4a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8d4a, .value=0xa6, .type=IO_READ},
        {.addr=0x8d4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_037D) {
    const struct CPU_State initial_cpu = {.pc=0xbcd6, .a=0x05, .x=0x14, .y=0xaa, .sp=0x21, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x24}, {.addr=0xbcd6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbcd7, .a=0xe1, .x=0x14, .y=0xaa, .sp=0x21, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x24}, {.addr=0xbcd6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbcd6, .value=0xa6, .type=IO_READ},
        {.addr=0xbcd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_037E) {
    const struct CPU_State initial_cpu = {.pc=0x6fa0, .a=0x02, .x=0xef, .y=0xbb, .sp=0xae, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0xd5}, {.addr=0x6fa0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6fa1, .a=0x2d, .x=0xef, .y=0xbb, .sp=0xae, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0xd5}, {.addr=0x6fa0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6fa0, .value=0xa6, .type=IO_READ},
        {.addr=0x6fa1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_037F) {
    const struct CPU_State initial_cpu = {.pc=0xe8bf, .a=0xed, .x=0xd8, .y=0xa9, .sp=0x57, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x22}, {.addr=0xe8bf, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe8c0, .a=0xcb, .x=0xd8, .y=0xa9, .sp=0x57, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x22}, {.addr=0xe8bf, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe8bf, .value=0xa6, .type=IO_READ},
        {.addr=0xe8c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0380) {
    const struct CPU_State initial_cpu = {.pc=0xe718, .a=0x9f, .x=0x22, .y=0xc0, .sp=0x05, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0x35}, {.addr=0xe718, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe719, .a=0x69, .x=0x22, .y=0xc0, .sp=0x05, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0x35}, {.addr=0xe718, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe718, .value=0xa6, .type=IO_READ},
        {.addr=0xe719, .value=DUMMY, .type=IO_READ},
        {.addr=0x0022, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0381) {
    const struct CPU_State initial_cpu = {.pc=0xb075, .a=0x15, .x=0x66, .y=0x18, .sp=0x4c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x4c}, {.addr=0xb075, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb076, .a=0xc8, .x=0x66, .y=0x18, .sp=0x4c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x4c}, {.addr=0xb075, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb075, .value=0xa6, .type=IO_READ},
        {.addr=0xb076, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0382) {
    const struct CPU_State initial_cpu = {.pc=0x52f6, .a=0x20, .x=0xe8, .y=0x87, .sp=0x98, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xe9}, {.addr=0x52f6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x52f7, .a=0x37, .x=0xe8, .y=0x87, .sp=0x98, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xe9}, {.addr=0x52f6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x52f6, .value=0xa6, .type=IO_READ},
        {.addr=0x52f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0383) {
    const struct CPU_State initial_cpu = {.pc=0x73d1, .a=0xc1, .x=0x34, .y=0x53, .sp=0xd9, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x25}, {.addr=0x73d1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x73d2, .a=0x9b, .x=0x34, .y=0x53, .sp=0xd9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x25}, {.addr=0x73d1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x73d1, .value=0xa6, .type=IO_READ},
        {.addr=0x73d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0384) {
    const struct CPU_State initial_cpu = {.pc=0x94c4, .a=0xe8, .x=0x97, .y=0x78, .sp=0xdb, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x4e}, {.addr=0x94c4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x94c5, .a=0x99, .x=0x97, .y=0x78, .sp=0xdb, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x4e}, {.addr=0x94c4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x94c4, .value=0xa6, .type=IO_READ},
        {.addr=0x94c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0385) {
    const struct CPU_State initial_cpu = {.pc=0x6cac, .a=0x1c, .x=0x58, .y=0xf2, .sp=0x3b, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0xc5}, {.addr=0x6cac, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6cad, .a=0x57, .x=0x58, .y=0xf2, .sp=0x3b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0xc5}, {.addr=0x6cac, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6cac, .value=0xa6, .type=IO_READ},
        {.addr=0x6cad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0058, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0386) {
    const struct CPU_State initial_cpu = {.pc=0x804c, .a=0xc3, .x=0x57, .y=0x05, .sp=0xe9, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0xbe}, {.addr=0x804c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x804d, .a=0x05, .x=0x57, .y=0x05, .sp=0xe9, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0xbe}, {.addr=0x804c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x804c, .value=0xa6, .type=IO_READ},
        {.addr=0x804d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0387) {
    const struct CPU_State initial_cpu = {.pc=0x3ef1, .a=0xd4, .x=0xc7, .y=0x8e, .sp=0x2b, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0xda}, {.addr=0x3ef1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3ef2, .a=0xfa, .x=0xc7, .y=0x8e, .sp=0x2b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xda}, {.addr=0x3ef1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3ef1, .value=0xa6, .type=IO_READ},
        {.addr=0x3ef2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0388) {
    const struct CPU_State initial_cpu = {.pc=0x9da0, .a=0x53, .x=0xe6, .y=0x23, .sp=0x53, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xbb}, {.addr=0x9da0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9da1, .a=0x97, .x=0xe6, .y=0x23, .sp=0x53, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xbb}, {.addr=0x9da0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9da0, .value=0xa6, .type=IO_READ},
        {.addr=0x9da1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0389) {
    const struct CPU_State initial_cpu = {.pc=0x9d2f, .a=0xeb, .x=0x51, .y=0x4f, .sp=0xd0, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0xaf}, {.addr=0x9d2f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9d30, .a=0x3c, .x=0x51, .y=0x4f, .sp=0xd0, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0xaf}, {.addr=0x9d2f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9d2f, .value=0xa6, .type=IO_READ},
        {.addr=0x9d30, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_038A) {
    const struct CPU_State initial_cpu = {.pc=0xb41a, .a=0x71, .x=0x2b, .y=0x08, .sp=0x97, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x2a}, {.addr=0xb41a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb41b, .a=0x46, .x=0x2b, .y=0x08, .sp=0x97, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x2a}, {.addr=0xb41a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb41a, .value=0xa6, .type=IO_READ},
        {.addr=0xb41b, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_038B) {
    const struct CPU_State initial_cpu = {.pc=0x5945, .a=0x78, .x=0xc0, .y=0x11, .sp=0xcd, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x48}, {.addr=0x5945, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5946, .a=0x30, .x=0xc0, .y=0x11, .sp=0xcd, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x48}, {.addr=0x5945, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5945, .value=0xa6, .type=IO_READ},
        {.addr=0x5946, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_038C) {
    const struct CPU_State initial_cpu = {.pc=0x262a, .a=0x76, .x=0x4e, .y=0x1a, .sp=0x7b, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x04}, {.addr=0x262a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x262b, .a=0x72, .x=0x4e, .y=0x1a, .sp=0x7b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x04}, {.addr=0x262a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x262a, .value=0xa6, .type=IO_READ},
        {.addr=0x262b, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_038D) {
    const struct CPU_State initial_cpu = {.pc=0x2e98, .a=0x37, .x=0x95, .y=0x7d, .sp=0x01, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x1f}, {.addr=0x2e98, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2e99, .a=0x17, .x=0x95, .y=0x7d, .sp=0x01, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x1f}, {.addr=0x2e98, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2e98, .value=0xa6, .type=IO_READ},
        {.addr=0x2e99, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_038E) {
    const struct CPU_State initial_cpu = {.pc=0x2d95, .a=0xa8, .x=0x67, .y=0xd0, .sp=0xbf, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xe1}, {.addr=0x2d95, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2d96, .a=0xc7, .x=0x67, .y=0xd0, .sp=0xbf, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xe1}, {.addr=0x2d95, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2d95, .value=0xa6, .type=IO_READ},
        {.addr=0x2d96, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_038F) {
    const struct CPU_State initial_cpu = {.pc=0xd253, .a=0xd8, .x=0x77, .y=0x53, .sp=0x4b, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0xb6}, {.addr=0xd253, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd254, .a=0x22, .x=0x77, .y=0x53, .sp=0x4b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0xb6}, {.addr=0xd253, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd253, .value=0xa6, .type=IO_READ},
        {.addr=0xd254, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0390) {
    const struct CPU_State initial_cpu = {.pc=0xdfe8, .a=0x48, .x=0x94, .y=0x24, .sp=0x0f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x82}, {.addr=0xdfe8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdfe9, .a=0xc5, .x=0x94, .y=0x24, .sp=0x0f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x82}, {.addr=0xdfe8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdfe8, .value=0xa6, .type=IO_READ},
        {.addr=0xdfe9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0391) {
    const struct CPU_State initial_cpu = {.pc=0x3ef1, .a=0x0f, .x=0xd0, .y=0x77, .sp=0x17, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xa0}, {.addr=0x3ef1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3ef2, .a=0x6e, .x=0xd0, .y=0x77, .sp=0x17, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xa0}, {.addr=0x3ef1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3ef1, .value=0xa6, .type=IO_READ},
        {.addr=0x3ef2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0392) {
    const struct CPU_State initial_cpu = {.pc=0x26b3, .a=0xc3, .x=0x91, .y=0x7b, .sp=0x13, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x83}, {.addr=0x26b3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x26b4, .a=0x3f, .x=0x91, .y=0x7b, .sp=0x13, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x83}, {.addr=0x26b3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x26b3, .value=0xa6, .type=IO_READ},
        {.addr=0x26b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0393) {
    const struct CPU_State initial_cpu = {.pc=0xafdd, .a=0xfa, .x=0x56, .y=0xee, .sp=0x49, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0xd6}, {.addr=0xafdd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xafde, .a=0x24, .x=0x56, .y=0xee, .sp=0x49, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0xd6}, {.addr=0xafdd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xafdd, .value=0xa6, .type=IO_READ},
        {.addr=0xafde, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0394) {
    const struct CPU_State initial_cpu = {.pc=0x3914, .a=0x88, .x=0xb7, .y=0xca, .sp=0xac, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x5f}, {.addr=0x3914, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3915, .a=0x28, .x=0xb7, .y=0xca, .sp=0xac, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x5f}, {.addr=0x3914, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3914, .value=0xa6, .type=IO_READ},
        {.addr=0x3915, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0395) {
    const struct CPU_State initial_cpu = {.pc=0xa2dc, .a=0xff, .x=0x0e, .y=0x4b, .sp=0x80, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0x70}, {.addr=0xa2dc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa2dd, .a=0x8e, .x=0x0e, .y=0x4b, .sp=0x80, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0x70}, {.addr=0xa2dc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa2dc, .value=0xa6, .type=IO_READ},
        {.addr=0xa2dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0396) {
    const struct CPU_State initial_cpu = {.pc=0x7cb2, .a=0x05, .x=0xb5, .y=0x79, .sp=0x97, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x44}, {.addr=0x7cb2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7cb3, .a=0xc1, .x=0xb5, .y=0x79, .sp=0x97, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x44}, {.addr=0x7cb2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7cb2, .value=0xa6, .type=IO_READ},
        {.addr=0x7cb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0397) {
    const struct CPU_State initial_cpu = {.pc=0x2321, .a=0x4c, .x=0xca, .y=0x13, .sp=0xa9, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x20}, {.addr=0x2321, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2322, .a=0x2b, .x=0xca, .y=0x13, .sp=0xa9, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x20}, {.addr=0x2321, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2321, .value=0xa6, .type=IO_READ},
        {.addr=0x2322, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0398) {
    const struct CPU_State initial_cpu = {.pc=0x61c4, .a=0xcd, .x=0x97, .y=0x05, .sp=0x91, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x3f}, {.addr=0x61c4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x61c5, .a=0x8d, .x=0x97, .y=0x05, .sp=0x91, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x3f}, {.addr=0x61c4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x61c4, .value=0xa6, .type=IO_READ},
        {.addr=0x61c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_0399) {
    const struct CPU_State initial_cpu = {.pc=0x4e22, .a=0x68, .x=0xda, .y=0x0c, .sp=0x8a, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0x5e}, {.addr=0x4e22, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4e23, .a=0x0a, .x=0xda, .y=0x0c, .sp=0x8a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0x5e}, {.addr=0x4e22, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4e22, .value=0xa6, .type=IO_READ},
        {.addr=0x4e23, .value=DUMMY, .type=IO_READ},
        {.addr=0x00da, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_039A) {
    const struct CPU_State initial_cpu = {.pc=0xdab6, .a=0x52, .x=0x9d, .y=0x3e, .sp=0x28, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x76}, {.addr=0xdab6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdab7, .a=0xdc, .x=0x9d, .y=0x3e, .sp=0x28, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x76}, {.addr=0xdab6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdab6, .value=0xa6, .type=IO_READ},
        {.addr=0xdab7, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_039B) {
    const struct CPU_State initial_cpu = {.pc=0x7a2d, .a=0xcc, .x=0x95, .y=0xdb, .sp=0x6b, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xba}, {.addr=0x7a2d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7a2e, .a=0x12, .x=0x95, .y=0xdb, .sp=0x6b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xba}, {.addr=0x7a2d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7a2d, .value=0xa6, .type=IO_READ},
        {.addr=0x7a2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_039C) {
    const struct CPU_State initial_cpu = {.pc=0x314a, .a=0x57, .x=0xbd, .y=0x5c, .sp=0x67, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x68}, {.addr=0x314a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x314b, .a=0xee, .x=0xbd, .y=0x5c, .sp=0x67, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x68}, {.addr=0x314a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x314a, .value=0xa6, .type=IO_READ},
        {.addr=0x314b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_039D) {
    const struct CPU_State initial_cpu = {.pc=0x37eb, .a=0x8b, .x=0x43, .y=0x26, .sp=0x38, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x31}, {.addr=0x37eb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x37ec, .a=0x59, .x=0x43, .y=0x26, .sp=0x38, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x31}, {.addr=0x37eb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x37eb, .value=0xa6, .type=IO_READ},
        {.addr=0x37ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_039E) {
    const struct CPU_State initial_cpu = {.pc=0xacac, .a=0xe4, .x=0x06, .y=0xa2, .sp=0xa8, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x22}, {.addr=0xacac, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xacad, .a=0xc2, .x=0x06, .y=0xa2, .sp=0xa8, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x22}, {.addr=0xacac, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xacac, .value=0xa6, .type=IO_READ},
        {.addr=0xacad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_039F) {
    const struct CPU_State initial_cpu = {.pc=0xabce, .a=0x38, .x=0xe9, .y=0x30, .sp=0x4e, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x9e}, {.addr=0xabce, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xabcf, .a=0x99, .x=0xe9, .y=0x30, .sp=0x4e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x9e}, {.addr=0xabce, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xabce, .value=0xa6, .type=IO_READ},
        {.addr=0xabcf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xcdf1, .a=0xe4, .x=0x7d, .y=0xde, .sp=0xca, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x6c}, {.addr=0xcdf1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcdf2, .a=0x78, .x=0x7d, .y=0xde, .sp=0xca, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x6c}, {.addr=0xcdf1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcdf1, .value=0xa6, .type=IO_READ},
        {.addr=0xcdf2, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xe0d9, .a=0x2d, .x=0x55, .y=0xa7, .sp=0xf2, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x4a}, {.addr=0xe0d9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe0da, .a=0xe2, .x=0x55, .y=0xa7, .sp=0xf2, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x4a}, {.addr=0xe0d9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe0d9, .value=0xa6, .type=IO_READ},
        {.addr=0xe0da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x467e, .a=0x5d, .x=0x10, .y=0xaa, .sp=0xbc, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x98}, {.addr=0x467e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x467f, .a=0xc4, .x=0x10, .y=0xaa, .sp=0xbc, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x98}, {.addr=0x467e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x467e, .value=0xa6, .type=IO_READ},
        {.addr=0x467f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x597d, .a=0xd6, .x=0x65, .y=0xf3, .sp=0x76, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xd9}, {.addr=0x597d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x597e, .a=0xfd, .x=0x65, .y=0xf3, .sp=0x76, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xd9}, {.addr=0x597d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x597d, .value=0xa6, .type=IO_READ},
        {.addr=0x597e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x5895, .a=0x6e, .x=0x54, .y=0x86, .sp=0x47, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x2a}, {.addr=0x5895, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5896, .a=0x44, .x=0x54, .y=0x86, .sp=0x47, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x2a}, {.addr=0x5895, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5895, .value=0xa6, .type=IO_READ},
        {.addr=0x5896, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xcc79, .a=0x4e, .x=0x9e, .y=0x4f, .sp=0x8c, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0x23}, {.addr=0xcc79, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcc7a, .a=0x2b, .x=0x9e, .y=0x4f, .sp=0x8c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0x23}, {.addr=0xcc79, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcc79, .value=0xa6, .type=IO_READ},
        {.addr=0xcc7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x0950, .a=0x2c, .x=0xa0, .y=0x86, .sp=0xfa, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xa7}, {.addr=0x0950, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0951, .a=0x84, .x=0xa0, .y=0x86, .sp=0xfa, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xa7}, {.addr=0x0950, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0950, .value=0xa6, .type=IO_READ},
        {.addr=0x0951, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x2bdd, .a=0xe1, .x=0x3c, .y=0xe5, .sp=0x3a, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xc7}, {.addr=0x2bdd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2bde, .a=0x19, .x=0x3c, .y=0xe5, .sp=0x3a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xc7}, {.addr=0x2bdd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2bdd, .value=0xa6, .type=IO_READ},
        {.addr=0x2bde, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x885f, .a=0x79, .x=0xc2, .y=0xe4, .sp=0xe1, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0xdf}, {.addr=0x885f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8860, .a=0x9a, .x=0xc2, .y=0xe4, .sp=0xe1, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0xdf}, {.addr=0x885f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x885f, .value=0xa6, .type=IO_READ},
        {.addr=0x8860, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xcee3, .a=0xb6, .x=0x68, .y=0xea, .sp=0x64, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0xbd}, {.addr=0xcee3, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcee4, .a=0xf8, .x=0x68, .y=0xea, .sp=0x64, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0xbd}, {.addr=0xcee3, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcee3, .value=0xa6, .type=IO_READ},
        {.addr=0xcee4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xa499, .a=0x4c, .x=0x54, .y=0x0e, .sp=0xe6, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x2d}, {.addr=0xa499, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa49a, .a=0x1f, .x=0x54, .y=0x0e, .sp=0xe6, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x2d}, {.addr=0xa499, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa499, .value=0xa6, .type=IO_READ},
        {.addr=0xa49a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xcc90, .a=0x49, .x=0x9e, .y=0x22, .sp=0xe2, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x67}, {.addr=0xcc90, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcc91, .a=0xe2, .x=0x9e, .y=0x22, .sp=0xe2, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x67}, {.addr=0xcc90, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcc90, .value=0xa6, .type=IO_READ},
        {.addr=0xcc91, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xcdcd, .a=0x87, .x=0x8e, .y=0xdd, .sp=0x3f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0xed}, {.addr=0xcdcd, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcdce, .a=0x9a, .x=0x8e, .y=0xdd, .sp=0x3f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0xed}, {.addr=0xcdcd, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcdcd, .value=0xa6, .type=IO_READ},
        {.addr=0xcdce, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xbf1e, .a=0x87, .x=0x25, .y=0xcf, .sp=0x2e, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x92}, {.addr=0xbf1e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbf1f, .a=0xf5, .x=0x25, .y=0xcf, .sp=0x2e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x92}, {.addr=0xbf1e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbf1e, .value=0xa6, .type=IO_READ},
        {.addr=0xbf1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xde34, .a=0x2e, .x=0xd4, .y=0xe6, .sp=0xfb, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0xc7}, {.addr=0xde34, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xde35, .a=0x67, .x=0xd4, .y=0xe6, .sp=0xfb, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0xc7}, {.addr=0xde34, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xde34, .value=0xa6, .type=IO_READ},
        {.addr=0xde35, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x2a8b, .a=0xc1, .x=0xe2, .y=0xbb, .sp=0x1c, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x91}, {.addr=0x2a8b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2a8c, .a=0x2f, .x=0xe2, .y=0xbb, .sp=0x1c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x91}, {.addr=0x2a8b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2a8b, .value=0xa6, .type=IO_READ},
        {.addr=0x2a8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x0819, .a=0xbb, .x=0x3d, .y=0xc4, .sp=0xcc, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x45}, {.addr=0x0819, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x081a, .a=0x75, .x=0x3d, .y=0xc4, .sp=0xcc, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x45}, {.addr=0x0819, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0819, .value=0xa6, .type=IO_READ},
        {.addr=0x081a, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xe66b, .a=0x33, .x=0x58, .y=0x07, .sp=0x53, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xda}, {.addr=0xe66b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe66c, .a=0x59, .x=0x58, .y=0x07, .sp=0x53, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xda}, {.addr=0xe66b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe66b, .value=0xa6, .type=IO_READ},
        {.addr=0xe66c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x626f, .a=0xa0, .x=0x6f, .y=0xae, .sp=0xab, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xea}, {.addr=0x626f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6270, .a=0xb6, .x=0x6f, .y=0xae, .sp=0xab, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xea}, {.addr=0x626f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x626f, .value=0xa6, .type=IO_READ},
        {.addr=0x6270, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x1542, .a=0x4d, .x=0x74, .y=0x96, .sp=0x32, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x8c}, {.addr=0x1542, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1543, .a=0xc0, .x=0x74, .y=0x96, .sp=0x32, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x8c}, {.addr=0x1542, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1542, .value=0xa6, .type=IO_READ},
        {.addr=0x1543, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x28ed, .a=0xa2, .x=0x7c, .y=0x29, .sp=0x4a, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x56}, {.addr=0x28ed, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x28ee, .a=0x4b, .x=0x7c, .y=0x29, .sp=0x4a, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x56}, {.addr=0x28ed, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x28ed, .value=0xa6, .type=IO_READ},
        {.addr=0x28ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xf205, .a=0x12, .x=0x86, .y=0xf7, .sp=0x7d, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0xc5}, {.addr=0xf205, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf206, .a=0x4c, .x=0x86, .y=0xf7, .sp=0x7d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xc5}, {.addr=0xf205, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf205, .value=0xa6, .type=IO_READ},
        {.addr=0xf206, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xe02b, .a=0x29, .x=0xea, .y=0x86, .sp=0x0a, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x87}, {.addr=0xe02b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe02c, .a=0xa2, .x=0xea, .y=0x86, .sp=0x0a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x87}, {.addr=0xe02b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe02b, .value=0xa6, .type=IO_READ},
        {.addr=0xe02c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x425d, .a=0xaa, .x=0xf5, .y=0x49, .sp=0x77, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x35}, {.addr=0x425d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x425e, .a=0x75, .x=0xf5, .y=0x49, .sp=0x77, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x35}, {.addr=0x425d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x425d, .value=0xa6, .type=IO_READ},
        {.addr=0x425e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x0c07, .a=0x87, .x=0x5a, .y=0x61, .sp=0x32, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x50}, {.addr=0x0c07, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x0c08, .a=0x36, .x=0x5a, .y=0x61, .sp=0x32, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x50}, {.addr=0x0c07, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0c07, .value=0xa6, .type=IO_READ},
        {.addr=0x0c08, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x9645, .a=0x95, .x=0x66, .y=0x3f, .sp=0xdd, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x83}, {.addr=0x9645, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9646, .a=0x12, .x=0x66, .y=0x3f, .sp=0xdd, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x83}, {.addr=0x9645, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9645, .value=0xa6, .type=IO_READ},
        {.addr=0x9646, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xb56c, .a=0x5d, .x=0xa9, .y=0xf9, .sp=0x96, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x10}, {.addr=0xb56c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb56d, .a=0x4d, .x=0xa9, .y=0xf9, .sp=0x96, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x10}, {.addr=0xb56c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb56c, .value=0xa6, .type=IO_READ},
        {.addr=0xb56d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x8a69, .a=0x0a, .x=0x0d, .y=0xab, .sp=0x51, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x66}, {.addr=0x8a69, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8a6a, .a=0xa4, .x=0x0d, .y=0xab, .sp=0x51, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x66}, {.addr=0x8a69, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8a69, .value=0xa6, .type=IO_READ},
        {.addr=0x8a6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x1f3a, .a=0x53, .x=0x81, .y=0x0b, .sp=0xa8, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0xdf}, {.addr=0x1f3a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1f3b, .a=0x73, .x=0x81, .y=0x0b, .sp=0xa8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0xdf}, {.addr=0x1f3a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1f3a, .value=0xa6, .type=IO_READ},
        {.addr=0x1f3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x73ba, .a=0x46, .x=0x5c, .y=0x31, .sp=0xa7, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x92}, {.addr=0x73ba, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x73bb, .a=0xb4, .x=0x5c, .y=0x31, .sp=0xa7, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x92}, {.addr=0x73ba, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x73ba, .value=0xa6, .type=IO_READ},
        {.addr=0x73bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x0094, .a=0x31, .x=0xe7, .y=0xb3, .sp=0x79, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0xa6}, {.addr=0x00e7, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x0095, .a=0x89, .x=0xe7, .y=0xb3, .sp=0x79, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0xa6}, {.addr=0x00e7, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x0094, .value=0xa6, .type=IO_READ},
        {.addr=0x0095, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xcd60, .a=0xbf, .x=0xa0, .y=0x31, .sp=0x0c, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x93}, {.addr=0xcd60, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcd61, .a=0x2b, .x=0xa0, .y=0x31, .sp=0x0c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x93}, {.addr=0xcd60, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcd60, .value=0xa6, .type=IO_READ},
        {.addr=0xcd61, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x5213, .a=0x80, .x=0x49, .y=0xfe, .sp=0x4a, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x89}, {.addr=0x5213, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5214, .a=0xf7, .x=0x49, .y=0xfe, .sp=0x4a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x89}, {.addr=0x5213, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5213, .value=0xa6, .type=IO_READ},
        {.addr=0x5214, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xf3ca, .a=0x3a, .x=0xa5, .y=0x96, .sp=0x08, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0xd9}, {.addr=0xf3ca, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf3cb, .a=0x61, .x=0xa5, .y=0x96, .sp=0x08, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0xd9}, {.addr=0xf3ca, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf3ca, .value=0xa6, .type=IO_READ},
        {.addr=0xf3cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a5, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xa69a, .a=0xa3, .x=0x96, .y=0x41, .sp=0xb6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0xe8}, {.addr=0xa69a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa69b, .a=0xbb, .x=0x96, .y=0x41, .sp=0xb6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0xe8}, {.addr=0xa69a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa69a, .value=0xa6, .type=IO_READ},
        {.addr=0xa69b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x4946, .a=0xa6, .x=0xfa, .y=0x5e, .sp=0x41, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x5b}, {.addr=0x4946, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4947, .a=0x4b, .x=0xfa, .y=0x5e, .sp=0x41, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x5b}, {.addr=0x4946, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4946, .value=0xa6, .type=IO_READ},
        {.addr=0x4947, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x1959, .a=0x5c, .x=0x2a, .y=0xcf, .sp=0x78, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xd3}, {.addr=0x1959, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x195a, .a=0x89, .x=0x2a, .y=0xcf, .sp=0x78, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xd3}, {.addr=0x1959, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1959, .value=0xa6, .type=IO_READ},
        {.addr=0x195a, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x3e22, .a=0x0f, .x=0xef, .y=0x47, .sp=0xc5, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x70}, {.addr=0x3e22, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3e23, .a=0x9f, .x=0xef, .y=0x47, .sp=0xc5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x70}, {.addr=0x3e22, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3e22, .value=0xa6, .type=IO_READ},
        {.addr=0x3e23, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x53ea, .a=0x56, .x=0xa5, .y=0x79, .sp=0x16, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x28}, {.addr=0x53ea, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x53eb, .a=0x2e, .x=0xa5, .y=0x79, .sp=0x16, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x28}, {.addr=0x53ea, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x53ea, .value=0xa6, .type=IO_READ},
        {.addr=0x53eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x46b2, .a=0xd9, .x=0xa9, .y=0x5f, .sp=0x5d, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x65}, {.addr=0x46b2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x46b3, .a=0x74, .x=0xa9, .y=0x5f, .sp=0x5d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0x65}, {.addr=0x46b2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x46b2, .value=0xa6, .type=IO_READ},
        {.addr=0x46b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x1d06, .a=0xf4, .x=0x6c, .y=0x05, .sp=0x63, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x20}, {.addr=0x1d06, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1d07, .a=0xd3, .x=0x6c, .y=0x05, .sp=0x63, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x20}, {.addr=0x1d06, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1d06, .value=0xa6, .type=IO_READ},
        {.addr=0x1d07, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xdfeb, .a=0xea, .x=0x06, .y=0x1f, .sp=0x72, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x24}, {.addr=0xdfeb, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdfec, .a=0xc5, .x=0x06, .y=0x1f, .sp=0x72, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x24}, {.addr=0xdfeb, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdfeb, .value=0xa6, .type=IO_READ},
        {.addr=0xdfec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xc4a7, .a=0xaf, .x=0x81, .y=0x8f, .sp=0x2d, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x9b}, {.addr=0xc4a7, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc4a8, .a=0x13, .x=0x81, .y=0x8f, .sp=0x2d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x9b}, {.addr=0xc4a7, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc4a7, .value=0xa6, .type=IO_READ},
        {.addr=0xc4a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x8d57, .a=0xa8, .x=0xa5, .y=0x39, .sp=0x76, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xca}, {.addr=0x8d57, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8d58, .a=0xdd, .x=0xa5, .y=0x39, .sp=0x76, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xca}, {.addr=0x8d57, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8d57, .value=0xa6, .type=IO_READ},
        {.addr=0x8d58, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xd231, .a=0xba, .x=0x60, .y=0xee, .sp=0xe6, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0xb2}, {.addr=0xd231, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd232, .a=0x07, .x=0x60, .y=0xee, .sp=0xe6, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xb2}, {.addr=0xd231, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd231, .value=0xa6, .type=IO_READ},
        {.addr=0xd232, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x1436, .a=0xee, .x=0x86, .y=0xaf, .sp=0xb4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x40}, {.addr=0x1436, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1437, .a=0xad, .x=0x86, .y=0xaf, .sp=0xb4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x40}, {.addr=0x1436, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1436, .value=0xa6, .type=IO_READ},
        {.addr=0x1437, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x33d4, .a=0x46, .x=0x1c, .y=0x36, .sp=0x4f, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x72}, {.addr=0x33d4, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x33d5, .a=0xd4, .x=0x1c, .y=0x36, .sp=0x4f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x72}, {.addr=0x33d4, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x33d4, .value=0xa6, .type=IO_READ},
        {.addr=0x33d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x4929, .a=0x5e, .x=0x48, .y=0x10, .sp=0x98, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0xc8}, {.addr=0x4929, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x492a, .a=0x95, .x=0x48, .y=0x10, .sp=0x98, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0xc8}, {.addr=0x4929, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4929, .value=0xa6, .type=IO_READ},
        {.addr=0x492a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xb74d, .a=0xde, .x=0x38, .y=0x35, .sp=0x50, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0xdc}, {.addr=0xb74d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb74e, .a=0x01, .x=0x38, .y=0x35, .sp=0x50, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0xdc}, {.addr=0xb74d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb74d, .value=0xa6, .type=IO_READ},
        {.addr=0xb74e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xb459, .a=0x3e, .x=0x83, .y=0xae, .sp=0xfd, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x8a}, {.addr=0xb459, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb45a, .a=0xb3, .x=0x83, .y=0xae, .sp=0xfd, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x8a}, {.addr=0xb459, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb459, .value=0xa6, .type=IO_READ},
        {.addr=0xb45a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x95e8, .a=0x3e, .x=0x41, .y=0x8a, .sp=0xa9, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0x56}, {.addr=0x95e8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x95e9, .a=0xe7, .x=0x41, .y=0x8a, .sp=0xa9, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0x56}, {.addr=0x95e8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x95e8, .value=0xa6, .type=IO_READ},
        {.addr=0x95e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x8222, .a=0xdd, .x=0x35, .y=0x12, .sp=0xb4, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x47}, {.addr=0x8222, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8223, .a=0x96, .x=0x35, .y=0x12, .sp=0xb4, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x47}, {.addr=0x8222, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x8222, .value=0xa6, .type=IO_READ},
        {.addr=0x8223, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x1d06, .a=0xa3, .x=0x39, .y=0xbe, .sp=0xcb, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x66}, {.addr=0x1d06, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1d07, .a=0x3c, .x=0x39, .y=0xbe, .sp=0xcb, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x66}, {.addr=0x1d06, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1d06, .value=0xa6, .type=IO_READ},
        {.addr=0x1d07, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xb146, .a=0x46, .x=0x09, .y=0x61, .sp=0x2f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x07}, {.addr=0xb146, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb147, .a=0x3f, .x=0x09, .y=0x61, .sp=0x2f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x07}, {.addr=0xb146, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb146, .value=0xa6, .type=IO_READ},
        {.addr=0xb147, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x4232, .a=0xf2, .x=0x6e, .y=0x1f, .sp=0x10, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0xfb}, {.addr=0x4232, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4233, .a=0xf7, .x=0x6e, .y=0x1f, .sp=0x10, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0xfb}, {.addr=0x4232, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4232, .value=0xa6, .type=IO_READ},
        {.addr=0x4233, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xa043, .a=0x75, .x=0x0a, .y=0x1b, .sp=0x35, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x71}, {.addr=0xa043, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa044, .a=0x03, .x=0x0a, .y=0x1b, .sp=0x35, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x71}, {.addr=0xa043, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa043, .value=0xa6, .type=IO_READ},
        {.addr=0xa044, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x069e, .a=0x27, .x=0x80, .y=0x60, .sp=0xe3, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x83}, {.addr=0x069e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x069f, .a=0xa3, .x=0x80, .y=0x60, .sp=0xe3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x83}, {.addr=0x069e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x069e, .value=0xa6, .type=IO_READ},
        {.addr=0x069f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xdf12, .a=0xe2, .x=0x09, .y=0x8a, .sp=0x59, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x92}, {.addr=0xdf12, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdf13, .a=0x4f, .x=0x09, .y=0x8a, .sp=0x59, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x92}, {.addr=0xdf12, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdf12, .value=0xa6, .type=IO_READ},
        {.addr=0xdf13, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xbcfc, .a=0xf6, .x=0x82, .y=0x39, .sp=0xa2, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x41}, {.addr=0xbcfc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbcfd, .a=0xb5, .x=0x82, .y=0x39, .sp=0xa2, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0x41}, {.addr=0xbcfc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbcfc, .value=0xa6, .type=IO_READ},
        {.addr=0xbcfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x186c, .a=0x0f, .x=0xac, .y=0xce, .sp=0x2c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x00}, {.addr=0x186c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x186d, .a=0x0f, .x=0xac, .y=0xce, .sp=0x2c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x00}, {.addr=0x186c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x186c, .value=0xa6, .type=IO_READ},
        {.addr=0x186d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xcf9d, .a=0xc6, .x=0x49, .y=0x81, .sp=0x99, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x6c}, {.addr=0xcf9d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xcf9e, .a=0x5a, .x=0x49, .y=0x81, .sp=0x99, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x6c}, {.addr=0xcf9d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xcf9d, .value=0xa6, .type=IO_READ},
        {.addr=0xcf9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x39d1, .a=0x46, .x=0x9a, .y=0xf9, .sp=0x35, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0xf2}, {.addr=0x39d1, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x39d2, .a=0x54, .x=0x9a, .y=0xf9, .sp=0x35, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xf2}, {.addr=0x39d1, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x39d1, .value=0xa6, .type=IO_READ},
        {.addr=0x39d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x6e70, .a=0x04, .x=0x9b, .y=0x02, .sp=0x7a, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x29}, {.addr=0x6e70, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6e71, .a=0xda, .x=0x9b, .y=0x02, .sp=0x7a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0x29}, {.addr=0x6e70, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6e70, .value=0xa6, .type=IO_READ},
        {.addr=0x6e71, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xd34c, .a=0xc1, .x=0x15, .y=0x07, .sp=0x1a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x41}, {.addr=0xd34c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd34d, .a=0x80, .x=0x15, .y=0x07, .sp=0x1a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x41}, {.addr=0xd34c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd34c, .value=0xa6, .type=IO_READ},
        {.addr=0xd34d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x14d5, .a=0x5c, .x=0x49, .y=0x48, .sp=0x7a, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xbb}, {.addr=0x14d5, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x14d6, .a=0xa0, .x=0x49, .y=0x48, .sp=0x7a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xbb}, {.addr=0x14d5, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x14d5, .value=0xa6, .type=IO_READ},
        {.addr=0x14d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xc5e6, .a=0xd2, .x=0xa3, .y=0xc4, .sp=0x1a, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x20}, {.addr=0xc5e6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc5e7, .a=0xb2, .x=0xa3, .y=0xc4, .sp=0x1a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x20}, {.addr=0xc5e6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc5e6, .value=0xa6, .type=IO_READ},
        {.addr=0xc5e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x821f, .a=0x1c, .x=0xc1, .y=0x53, .sp=0x3f, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0xbd}, {.addr=0x821f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x8220, .a=0x5f, .x=0xc1, .y=0x53, .sp=0x3f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0xbd}, {.addr=0x821f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x821f, .value=0xa6, .type=IO_READ},
        {.addr=0x8220, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xf2f0, .a=0x58, .x=0xad, .y=0xd6, .sp=0xa8, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x37}, {.addr=0xf2f0, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf2f1, .a=0x20, .x=0xad, .y=0xd6, .sp=0xa8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x37}, {.addr=0xf2f0, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf2f0, .value=0xa6, .type=IO_READ},
        {.addr=0xf2f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xd39d, .a=0x20, .x=0xa1, .y=0x8d, .sp=0xd0, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x7e}, {.addr=0xd39d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xd39e, .a=0xa1, .x=0xa1, .y=0x8d, .sp=0xd0, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x7e}, {.addr=0xd39d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xd39d, .value=0xa6, .type=IO_READ},
        {.addr=0xd39e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A6, _A6_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xeccf, .a=0xf2, .x=0x78, .y=0xdf, .sp=0x27, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0xa3}, {.addr=0xeccf, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xecd0, .a=0x4f, .x=0x78, .y=0xdf, .sp=0x27, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xa3}, {.addr=0xeccf, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xeccf, .value=0xa6, .type=IO_READ},
        {.addr=0xecd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A6 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
