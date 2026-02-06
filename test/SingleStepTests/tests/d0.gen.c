#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_D0, _D0_0000) {
    const struct CPU_State initial_cpu = {.pc=0x44aa, .a=0x70, .x=0x39, .y=0x41, .sp=0x6d, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x44aa, .value=0xd0}, {.addr=0x44ab, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x4497, .a=0x70, .x=0x39, .y=0x41, .sp=0x6d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x44aa, .value=0xd0}, {.addr=0x44ab, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x44aa, .value=0xd0, .type=IO_READ},
        {.addr=0x44ab, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0001) {
    const struct CPU_State initial_cpu = {.pc=0xe023, .a=0xde, .x=0xe4, .y=0x62, .sp=0xd3, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xe023, .value=0xd0}, {.addr=0xe024, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xe09b, .a=0xde, .x=0xe4, .y=0x62, .sp=0xd3, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xe023, .value=0xd0}, {.addr=0xe024, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xe023, .value=0xd0, .type=IO_READ},
        {.addr=0xe024, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0002) {
    const struct CPU_State initial_cpu = {.pc=0x0f77, .a=0x75, .x=0xa8, .y=0xfc, .sp=0x36, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0f77, .value=0xd0}, {.addr=0x0f78, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0f55, .a=0x75, .x=0xa8, .y=0xfc, .sp=0x36, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0f77, .value=0xd0}, {.addr=0x0f78, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0f77, .value=0xd0, .type=IO_READ},
        {.addr=0x0f78, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0003) {
    const struct CPU_State initial_cpu = {.pc=0x1ae6, .a=0xf6, .x=0x7b, .y=0xd0, .sp=0xe9, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1ae6, .value=0xd0}, {.addr=0x1ae7, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x1ae8, .a=0xf6, .x=0x7b, .y=0xd0, .sp=0xe9, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x1ae6, .value=0xd0}, {.addr=0x1ae7, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x1ae6, .value=0xd0, .type=IO_READ},
        {.addr=0x1ae7, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0004) {
    const struct CPU_State initial_cpu = {.pc=0x495b, .a=0x0f, .x=0x73, .y=0x71, .sp=0xc7, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x495b, .value=0xd0}, {.addr=0x495c, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x495d, .a=0x0f, .x=0x73, .y=0x71, .sp=0xc7, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x495b, .value=0xd0}, {.addr=0x495c, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x495b, .value=0xd0, .type=IO_READ},
        {.addr=0x495c, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0005) {
    const struct CPU_State initial_cpu = {.pc=0xce61, .a=0x04, .x=0x99, .y=0x11, .sp=0xbf, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xce61, .value=0xd0}, {.addr=0xce62, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xce63, .a=0x04, .x=0x99, .y=0x11, .sp=0xbf, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xce61, .value=0xd0}, {.addr=0xce62, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xce61, .value=0xd0, .type=IO_READ},
        {.addr=0xce62, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0006) {
    const struct CPU_State initial_cpu = {.pc=0x03d3, .a=0x3a, .x=0x5a, .y=0x48, .sp=0x72, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x03d3, .value=0xd0}, {.addr=0x03d4, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x03d5, .a=0x3a, .x=0x5a, .y=0x48, .sp=0x72, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x03d3, .value=0xd0}, {.addr=0x03d4, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x03d3, .value=0xd0, .type=IO_READ},
        {.addr=0x03d4, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0007) {
    const struct CPU_State initial_cpu = {.pc=0x7c28, .a=0x84, .x=0x07, .y=0xa6, .sp=0xe9, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x7c28, .value=0xd0}, {.addr=0x7c29, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x7c2a, .a=0x84, .x=0x07, .y=0xa6, .sp=0xe9, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x7c28, .value=0xd0}, {.addr=0x7c29, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x7c28, .value=0xd0, .type=IO_READ},
        {.addr=0x7c29, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0008) {
    const struct CPU_State initial_cpu = {.pc=0xff94, .a=0x32, .x=0x73, .y=0xaa, .sp=0x15, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xff94, .value=0xd0}, {.addr=0xff95, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xff96, .a=0x32, .x=0x73, .y=0xaa, .sp=0x15, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xff94, .value=0xd0}, {.addr=0xff95, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xff94, .value=0xd0, .type=IO_READ},
        {.addr=0xff95, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0009) {
    const struct CPU_State initial_cpu = {.pc=0x542b, .a=0xa9, .x=0x3e, .y=0x44, .sp=0xff, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x542b, .value=0xd0}, {.addr=0x542c, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x5488, .a=0xa9, .x=0x3e, .y=0x44, .sp=0xff, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x542b, .value=0xd0}, {.addr=0x542c, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x542b, .value=0xd0, .type=IO_READ},
        {.addr=0x542c, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_000A) {
    const struct CPU_State initial_cpu = {.pc=0x1de2, .a=0xb3, .x=0xbe, .y=0x98, .sp=0xad, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x1de2, .value=0xd0}, {.addr=0x1de3, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x1de4, .a=0xb3, .x=0xbe, .y=0x98, .sp=0xad, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x1de2, .value=0xd0}, {.addr=0x1de3, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x1de2, .value=0xd0, .type=IO_READ},
        {.addr=0x1de3, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_000B) {
    const struct CPU_State initial_cpu = {.pc=0x6b7c, .a=0x6a, .x=0x28, .y=0xcc, .sp=0xe6, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6b7c, .value=0xd0}, {.addr=0x6b7d, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x6b7e, .a=0x6a, .x=0x28, .y=0xcc, .sp=0xe6, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x6b7c, .value=0xd0}, {.addr=0x6b7d, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x6b7c, .value=0xd0, .type=IO_READ},
        {.addr=0x6b7d, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_000C) {
    const struct CPU_State initial_cpu = {.pc=0x3c7f, .a=0xee, .x=0x3d, .y=0xfd, .sp=0x8d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x3c7f, .value=0xd0}, {.addr=0x3c80, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x3cc6, .a=0xee, .x=0x3d, .y=0xfd, .sp=0x8d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3c7f, .value=0xd0}, {.addr=0x3c80, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x3c7f, .value=0xd0, .type=IO_READ},
        {.addr=0x3c80, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_000D) {
    const struct CPU_State initial_cpu = {.pc=0x82d1, .a=0x55, .x=0xc0, .y=0xf3, .sp=0x63, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x82d1, .value=0xd0}, {.addr=0x82d2, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x831e, .a=0x55, .x=0xc0, .y=0xf3, .sp=0x63, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x82d1, .value=0xd0}, {.addr=0x82d2, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x82d1, .value=0xd0, .type=IO_READ},
        {.addr=0x82d2, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_000E) {
    const struct CPU_State initial_cpu = {.pc=0x843c, .a=0x85, .x=0x38, .y=0xec, .sp=0xaa, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x843c, .value=0xd0}, {.addr=0x843d, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x843e, .a=0x85, .x=0x38, .y=0xec, .sp=0xaa, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x843c, .value=0xd0}, {.addr=0x843d, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x843c, .value=0xd0, .type=IO_READ},
        {.addr=0x843d, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_000F) {
    const struct CPU_State initial_cpu = {.pc=0x1eeb, .a=0x96, .x=0x36, .y=0x16, .sp=0xd0, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x1eeb, .value=0xd0}, {.addr=0x1eec, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x1e7f, .a=0x96, .x=0x36, .y=0x16, .sp=0xd0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x1eeb, .value=0xd0}, {.addr=0x1eec, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x1eeb, .value=0xd0, .type=IO_READ},
        {.addr=0x1eec, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0010) {
    const struct CPU_State initial_cpu = {.pc=0x335b, .a=0x75, .x=0x99, .y=0x7c, .sp=0xb4, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x335b, .value=0xd0}, {.addr=0x335c, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x33cf, .a=0x75, .x=0x99, .y=0x7c, .sp=0xb4, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x335b, .value=0xd0}, {.addr=0x335c, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x335b, .value=0xd0, .type=IO_READ},
        {.addr=0x335c, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0011) {
    const struct CPU_State initial_cpu = {.pc=0x8831, .a=0x03, .x=0x60, .y=0x1f, .sp=0x40, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8831, .value=0xd0}, {.addr=0x8832, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8833, .a=0x03, .x=0x60, .y=0x1f, .sp=0x40, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x8831, .value=0xd0}, {.addr=0x8832, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8831, .value=0xd0, .type=IO_READ},
        {.addr=0x8832, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0012) {
    const struct CPU_State initial_cpu = {.pc=0x9d39, .a=0x83, .x=0x01, .y=0x7b, .sp=0x43, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x9d39, .value=0xd0}, {.addr=0x9d3a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9d3b, .a=0x83, .x=0x01, .y=0x7b, .sp=0x43, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x9d39, .value=0xd0}, {.addr=0x9d3a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9d39, .value=0xd0, .type=IO_READ},
        {.addr=0x9d3a, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0013) {
    const struct CPU_State initial_cpu = {.pc=0x6f94, .a=0x79, .x=0x94, .y=0x0a, .sp=0x1e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x6f94, .value=0xd0}, {.addr=0x6f95, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x6f86, .a=0x79, .x=0x94, .y=0x0a, .sp=0x1e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x6f94, .value=0xd0}, {.addr=0x6f95, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x6f94, .value=0xd0, .type=IO_READ},
        {.addr=0x6f95, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0014) {
    const struct CPU_State initial_cpu = {.pc=0xc9fe, .a=0x23, .x=0xa8, .y=0xb9, .sp=0x5e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xc9fe, .value=0xd0}, {.addr=0xc9ff, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xca00, .a=0x23, .x=0xa8, .y=0xb9, .sp=0x5e, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xc9fe, .value=0xd0}, {.addr=0xc9ff, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xc9fe, .value=0xd0, .type=IO_READ},
        {.addr=0xc9ff, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0015) {
    const struct CPU_State initial_cpu = {.pc=0xc95f, .a=0x36, .x=0x8c, .y=0xf9, .sp=0x57, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xc95f, .value=0xd0}, {.addr=0xc960, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xc976, .a=0x36, .x=0x8c, .y=0xf9, .sp=0x57, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xc95f, .value=0xd0}, {.addr=0xc960, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xc95f, .value=0xd0, .type=IO_READ},
        {.addr=0xc960, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0016) {
    const struct CPU_State initial_cpu = {.pc=0x5e50, .a=0xa8, .x=0x30, .y=0x95, .sp=0x9f, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x5e50, .value=0xd0}, {.addr=0x5e51, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x5e52, .a=0xa8, .x=0x30, .y=0x95, .sp=0x9f, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x5e50, .value=0xd0}, {.addr=0x5e51, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x5e50, .value=0xd0, .type=IO_READ},
        {.addr=0x5e51, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0017) {
    const struct CPU_State initial_cpu = {.pc=0x4478, .a=0x66, .x=0x38, .y=0x70, .sp=0x43, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x4478, .value=0xd0}, {.addr=0x4479, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x446b, .a=0x66, .x=0x38, .y=0x70, .sp=0x43, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x4478, .value=0xd0}, {.addr=0x4479, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x4478, .value=0xd0, .type=IO_READ},
        {.addr=0x4479, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0018) {
    const struct CPU_State initial_cpu = {.pc=0x53c5, .a=0x3d, .x=0x92, .y=0xe6, .sp=0xeb, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x53c5, .value=0xd0}, {.addr=0x53c6, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x539a, .a=0x3d, .x=0x92, .y=0xe6, .sp=0xeb, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x53c5, .value=0xd0}, {.addr=0x53c6, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x53c5, .value=0xd0, .type=IO_READ},
        {.addr=0x53c6, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0019) {
    const struct CPU_State initial_cpu = {.pc=0xd010, .a=0x3b, .x=0x09, .y=0xb7, .sp=0xa6, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xd010, .value=0xd0}, {.addr=0xd011, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xcfe5, .a=0x3b, .x=0x09, .y=0xb7, .sp=0xa6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd010, .value=0xd0}, {.addr=0xd011, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xd010, .value=0xd0, .type=IO_READ},
        {.addr=0xd011, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_001A) {
    const struct CPU_State initial_cpu = {.pc=0x4c75, .a=0xb3, .x=0x32, .y=0xda, .sp=0x5a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x4c75, .value=0xd0}, {.addr=0x4c76, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4ce4, .a=0xb3, .x=0x32, .y=0xda, .sp=0x5a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4c75, .value=0xd0}, {.addr=0x4c76, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4c75, .value=0xd0, .type=IO_READ},
        {.addr=0x4c76, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_001B) {
    const struct CPU_State initial_cpu = {.pc=0xe1b7, .a=0x58, .x=0xda, .y=0xee, .sp=0x1d, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xe1b7, .value=0xd0}, {.addr=0xe1b8, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xe19b, .a=0x58, .x=0xda, .y=0xee, .sp=0x1d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xe1b7, .value=0xd0}, {.addr=0xe1b8, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xe1b7, .value=0xd0, .type=IO_READ},
        {.addr=0xe1b8, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_001C) {
    const struct CPU_State initial_cpu = {.pc=0x51dd, .a=0x64, .x=0xd2, .y=0x6d, .sp=0x6d, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x51dd, .value=0xd0}, {.addr=0x51de, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x51df, .a=0x64, .x=0xd2, .y=0x6d, .sp=0x6d, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x51dd, .value=0xd0}, {.addr=0x51de, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x51dd, .value=0xd0, .type=IO_READ},
        {.addr=0x51de, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_001D) {
    const struct CPU_State initial_cpu = {.pc=0x1f11, .a=0x55, .x=0x44, .y=0xf4, .sp=0x68, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x1f11, .value=0xd0}, {.addr=0x1f12, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1ed3, .a=0x55, .x=0x44, .y=0xf4, .sp=0x68, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1f11, .value=0xd0}, {.addr=0x1f12, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1f11, .value=0xd0, .type=IO_READ},
        {.addr=0x1f12, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_001E) {
    const struct CPU_State initial_cpu = {.pc=0x107a, .a=0xb8, .x=0x41, .y=0xf7, .sp=0xd7, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x107a, .value=0xd0}, {.addr=0x107b, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x107c, .a=0xb8, .x=0x41, .y=0xf7, .sp=0xd7, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x107a, .value=0xd0}, {.addr=0x107b, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x107a, .value=0xd0, .type=IO_READ},
        {.addr=0x107b, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_001F) {
    const struct CPU_State initial_cpu = {.pc=0x30ad, .a=0xed, .x=0x65, .y=0x2b, .sp=0x75, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x30ad, .value=0xd0}, {.addr=0x30ae, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3075, .a=0xed, .x=0x65, .y=0x2b, .sp=0x75, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x30ad, .value=0xd0}, {.addr=0x30ae, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x30ad, .value=0xd0, .type=IO_READ},
        {.addr=0x30ae, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0020) {
    const struct CPU_State initial_cpu = {.pc=0xecdd, .a=0x0d, .x=0xb9, .y=0x51, .sp=0x37, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xecdd, .value=0xd0}, {.addr=0xecde, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xecdf, .a=0x0d, .x=0xb9, .y=0x51, .sp=0x37, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xecdd, .value=0xd0}, {.addr=0xecde, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xecdd, .value=0xd0, .type=IO_READ},
        {.addr=0xecde, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0021) {
    const struct CPU_State initial_cpu = {.pc=0x2a64, .a=0x56, .x=0xd3, .y=0x12, .sp=0x27, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x2a64, .value=0xd0}, {.addr=0x2a65, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x2a66, .a=0x56, .x=0xd3, .y=0x12, .sp=0x27, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x2a64, .value=0xd0}, {.addr=0x2a65, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x2a64, .value=0xd0, .type=IO_READ},
        {.addr=0x2a65, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0022) {
    const struct CPU_State initial_cpu = {.pc=0x21b3, .a=0xc2, .x=0xee, .y=0xc8, .sp=0x59, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x21b3, .value=0xd0}, {.addr=0x21b4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x221b, .a=0xc2, .x=0xee, .y=0xc8, .sp=0x59, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x21b3, .value=0xd0}, {.addr=0x21b4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x21b3, .value=0xd0, .type=IO_READ},
        {.addr=0x21b4, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0023) {
    const struct CPU_State initial_cpu = {.pc=0x73a5, .a=0x81, .x=0x73, .y=0x7b, .sp=0x27, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x73a5, .value=0xd0}, {.addr=0x73a6, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x7397, .a=0x81, .x=0x73, .y=0x7b, .sp=0x27, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x73a5, .value=0xd0}, {.addr=0x73a6, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x73a5, .value=0xd0, .type=IO_READ},
        {.addr=0x73a6, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0024) {
    const struct CPU_State initial_cpu = {.pc=0xa9d0, .a=0xa5, .x=0x20, .y=0x7d, .sp=0xc8, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xa9d0, .value=0xd0}, {.addr=0xa9d1, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xaa27, .a=0xa5, .x=0x20, .y=0x7d, .sp=0xc8, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xa9d0, .value=0xd0}, {.addr=0xa9d1, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xa9d0, .value=0xd0, .type=IO_READ},
        {.addr=0xa9d1, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0025) {
    const struct CPU_State initial_cpu = {.pc=0x8283, .a=0xee, .x=0xec, .y=0x20, .sp=0xd9, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x8283, .value=0xd0}, {.addr=0x8284, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x8288, .a=0xee, .x=0xec, .y=0x20, .sp=0xd9, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x8283, .value=0xd0}, {.addr=0x8284, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x8283, .value=0xd0, .type=IO_READ},
        {.addr=0x8284, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0026) {
    const struct CPU_State initial_cpu = {.pc=0xd9f0, .a=0x48, .x=0x6d, .y=0xcc, .sp=0x94, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f0, .value=0xd0}, {.addr=0xd9f1, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xd9bd, .a=0x48, .x=0x6d, .y=0xcc, .sp=0x94, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd9f0, .value=0xd0}, {.addr=0xd9f1, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xd9f0, .value=0xd0, .type=IO_READ},
        {.addr=0xd9f1, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0027) {
    const struct CPU_State initial_cpu = {.pc=0xf50f, .a=0x84, .x=0x37, .y=0x40, .sp=0xc6, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xf50f, .value=0xd0}, {.addr=0xf510, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xf565, .a=0x84, .x=0x37, .y=0x40, .sp=0xc6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf50f, .value=0xd0}, {.addr=0xf510, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xf50f, .value=0xd0, .type=IO_READ},
        {.addr=0xf510, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0028) {
    const struct CPU_State initial_cpu = {.pc=0x0caa, .a=0xf3, .x=0xd3, .y=0x6f, .sp=0x78, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0caa, .value=0xd0}, {.addr=0x0cab, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x0d01, .a=0xf3, .x=0xd3, .y=0x6f, .sp=0x78, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0caa, .value=0xd0}, {.addr=0x0cab, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x0caa, .value=0xd0, .type=IO_READ},
        {.addr=0x0cab, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0029) {
    const struct CPU_State initial_cpu = {.pc=0x6bd3, .a=0xa3, .x=0x69, .y=0x04, .sp=0xa4, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x6bd3, .value=0xd0}, {.addr=0x6bd4, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x6c20, .a=0xa3, .x=0x69, .y=0x04, .sp=0xa4, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6bd3, .value=0xd0}, {.addr=0x6bd4, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x6bd3, .value=0xd0, .type=IO_READ},
        {.addr=0x6bd4, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_002A) {
    const struct CPU_State initial_cpu = {.pc=0x0518, .a=0xa2, .x=0x37, .y=0x50, .sp=0x0a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0518, .value=0xd0}, {.addr=0x0519, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x051a, .a=0xa2, .x=0x37, .y=0x50, .sp=0x0a, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0518, .value=0xd0}, {.addr=0x0519, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x0518, .value=0xd0, .type=IO_READ},
        {.addr=0x0519, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_002B) {
    const struct CPU_State initial_cpu = {.pc=0x6559, .a=0x4c, .x=0xa2, .y=0xd2, .sp=0x82, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x6559, .value=0xd0}, {.addr=0x655a, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x6556, .a=0x4c, .x=0xa2, .y=0xd2, .sp=0x82, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x6559, .value=0xd0}, {.addr=0x655a, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x6559, .value=0xd0, .type=IO_READ},
        {.addr=0x655a, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_002C) {
    const struct CPU_State initial_cpu = {.pc=0x4a7a, .a=0xd3, .x=0xaf, .y=0x88, .sp=0x78, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x4a7a, .value=0xd0}, {.addr=0x4a7b, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x4ae0, .a=0xd3, .x=0xaf, .y=0x88, .sp=0x78, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4a7a, .value=0xd0}, {.addr=0x4a7b, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x4a7a, .value=0xd0, .type=IO_READ},
        {.addr=0x4a7b, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_002D) {
    const struct CPU_State initial_cpu = {.pc=0x2179, .a=0x0a, .x=0x13, .y=0x4d, .sp=0xe6, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x2179, .value=0xd0}, {.addr=0x217a, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x217b, .a=0x0a, .x=0x13, .y=0x4d, .sp=0xe6, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x2179, .value=0xd0}, {.addr=0x217a, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x2179, .value=0xd0, .type=IO_READ},
        {.addr=0x217a, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_002E) {
    const struct CPU_State initial_cpu = {.pc=0x7463, .a=0xb4, .x=0x8b, .y=0x28, .sp=0x0d, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x7463, .value=0xd0}, {.addr=0x7464, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x7465, .a=0xb4, .x=0x8b, .y=0x28, .sp=0x0d, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x7463, .value=0xd0}, {.addr=0x7464, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x7463, .value=0xd0, .type=IO_READ},
        {.addr=0x7464, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_002F) {
    const struct CPU_State initial_cpu = {.pc=0xdbd1, .a=0xad, .x=0x54, .y=0xb6, .sp=0x65, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xdbd1, .value=0xd0}, {.addr=0xdbd2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdbd3, .a=0xad, .x=0x54, .y=0xb6, .sp=0x65, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xdbd1, .value=0xd0}, {.addr=0xdbd2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdbd1, .value=0xd0, .type=IO_READ},
        {.addr=0xdbd2, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0030) {
    const struct CPU_State initial_cpu = {.pc=0xa894, .a=0x47, .x=0xeb, .y=0x9a, .sp=0xba, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xa894, .value=0xd0}, {.addr=0xa895, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xa828, .a=0x47, .x=0xeb, .y=0x9a, .sp=0xba, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xa894, .value=0xd0}, {.addr=0xa895, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xa894, .value=0xd0, .type=IO_READ},
        {.addr=0xa895, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0031) {
    const struct CPU_State initial_cpu = {.pc=0x42c4, .a=0x5f, .x=0x4f, .y=0x14, .sp=0x07, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x42c4, .value=0xd0}, {.addr=0x42c5, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x429f, .a=0x5f, .x=0x4f, .y=0x14, .sp=0x07, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x42c4, .value=0xd0}, {.addr=0x42c5, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x42c4, .value=0xd0, .type=IO_READ},
        {.addr=0x42c5, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0032) {
    const struct CPU_State initial_cpu = {.pc=0xab3e, .a=0xd7, .x=0xc9, .y=0xcf, .sp=0xd4, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xab3e, .value=0xd0}, {.addr=0xab3f, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xab2a, .a=0xd7, .x=0xc9, .y=0xcf, .sp=0xd4, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xab3e, .value=0xd0}, {.addr=0xab3f, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xab3e, .value=0xd0, .type=IO_READ},
        {.addr=0xab3f, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0033) {
    const struct CPU_State initial_cpu = {.pc=0xc343, .a=0x80, .x=0x2b, .y=0xfc, .sp=0xbb, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc343, .value=0xd0}, {.addr=0xc344, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xc345, .a=0x80, .x=0x2b, .y=0xfc, .sp=0xbb, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xc343, .value=0xd0}, {.addr=0xc344, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xc343, .value=0xd0, .type=IO_READ},
        {.addr=0xc344, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0034) {
    const struct CPU_State initial_cpu = {.pc=0xc4d4, .a=0x02, .x=0x71, .y=0x9d, .sp=0xa4, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xc4d4, .value=0xd0}, {.addr=0xc4d5, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xc4c5, .a=0x02, .x=0x71, .y=0x9d, .sp=0xa4, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc4d4, .value=0xd0}, {.addr=0xc4d5, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xc4d4, .value=0xd0, .type=IO_READ},
        {.addr=0xc4d5, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0035) {
    const struct CPU_State initial_cpu = {.pc=0x65ee, .a=0x8b, .x=0x69, .y=0x13, .sp=0xb3, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x65ee, .value=0xd0}, {.addr=0x65ef, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x65f0, .a=0x8b, .x=0x69, .y=0x13, .sp=0xb3, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x65ee, .value=0xd0}, {.addr=0x65ef, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x65ee, .value=0xd0, .type=IO_READ},
        {.addr=0x65ef, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0036) {
    const struct CPU_State initial_cpu = {.pc=0x4a7a, .a=0x23, .x=0xcd, .y=0xed, .sp=0xa4, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x4a7a, .value=0xd0}, {.addr=0x4a7b, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x4a7c, .a=0x23, .x=0xcd, .y=0xed, .sp=0xa4, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x4a7a, .value=0xd0}, {.addr=0x4a7b, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x4a7a, .value=0xd0, .type=IO_READ},
        {.addr=0x4a7b, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0037) {
    const struct CPU_State initial_cpu = {.pc=0xa460, .a=0xf9, .x=0x1d, .y=0x6b, .sp=0x6e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xa460, .value=0xd0}, {.addr=0xa461, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xa42f, .a=0xf9, .x=0x1d, .y=0x6b, .sp=0x6e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa460, .value=0xd0}, {.addr=0xa461, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xa460, .value=0xd0, .type=IO_READ},
        {.addr=0xa461, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0038) {
    const struct CPU_State initial_cpu = {.pc=0x36d5, .a=0x2b, .x=0xae, .y=0x86, .sp=0x3f, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x36d5, .value=0xd0}, {.addr=0x36d6, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x3701, .a=0x2b, .x=0xae, .y=0x86, .sp=0x3f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x36d5, .value=0xd0}, {.addr=0x36d6, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x36d5, .value=0xd0, .type=IO_READ},
        {.addr=0x36d6, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0039) {
    const struct CPU_State initial_cpu = {.pc=0x421a, .a=0xb8, .x=0xea, .y=0x23, .sp=0xa2, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x421a, .value=0xd0}, {.addr=0x421b, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x421c, .a=0xb8, .x=0xea, .y=0x23, .sp=0xa2, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x421a, .value=0xd0}, {.addr=0x421b, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x421a, .value=0xd0, .type=IO_READ},
        {.addr=0x421b, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_003A) {
    const struct CPU_State initial_cpu = {.pc=0x4ed7, .a=0x5e, .x=0x17, .y=0xf5, .sp=0x63, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x4ed7, .value=0xd0}, {.addr=0x4ed8, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x4ecd, .a=0x5e, .x=0x17, .y=0xf5, .sp=0x63, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x4ed7, .value=0xd0}, {.addr=0x4ed8, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x4ed7, .value=0xd0, .type=IO_READ},
        {.addr=0x4ed8, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_003B) {
    const struct CPU_State initial_cpu = {.pc=0x3460, .a=0xfe, .x=0x66, .y=0xb9, .sp=0xdb, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3460, .value=0xd0}, {.addr=0x3461, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x3462, .a=0xfe, .x=0x66, .y=0xb9, .sp=0xdb, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x3460, .value=0xd0}, {.addr=0x3461, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x3460, .value=0xd0, .type=IO_READ},
        {.addr=0x3461, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_003C) {
    const struct CPU_State initial_cpu = {.pc=0x3eb3, .a=0xb8, .x=0xe6, .y=0x94, .sp=0x3e, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb3, .value=0xd0}, {.addr=0x3eb4, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x3ec7, .a=0xb8, .x=0xe6, .y=0x94, .sp=0x3e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x3eb3, .value=0xd0}, {.addr=0x3eb4, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x3eb3, .value=0xd0, .type=IO_READ},
        {.addr=0x3eb4, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_003D) {
    const struct CPU_State initial_cpu = {.pc=0xd1a8, .a=0x0a, .x=0xcb, .y=0x68, .sp=0x6d, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xd1a8, .value=0xd0}, {.addr=0xd1a9, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xd18e, .a=0x0a, .x=0xcb, .y=0x68, .sp=0x6d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xd1a8, .value=0xd0}, {.addr=0xd1a9, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xd1a8, .value=0xd0, .type=IO_READ},
        {.addr=0xd1a9, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_003E) {
    const struct CPU_State initial_cpu = {.pc=0xc95c, .a=0x27, .x=0xce, .y=0x35, .sp=0x9b, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xc95c, .value=0xd0}, {.addr=0xc95d, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xc95e, .a=0x27, .x=0xce, .y=0x35, .sp=0x9b, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xc95c, .value=0xd0}, {.addr=0xc95d, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xc95c, .value=0xd0, .type=IO_READ},
        {.addr=0xc95d, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_003F) {
    const struct CPU_State initial_cpu = {.pc=0xb994, .a=0x9e, .x=0x39, .y=0x0a, .sp=0x62, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb994, .value=0xd0}, {.addr=0xb995, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xb989, .a=0x9e, .x=0x39, .y=0x0a, .sp=0x62, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb994, .value=0xd0}, {.addr=0xb995, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xb994, .value=0xd0, .type=IO_READ},
        {.addr=0xb995, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0040) {
    const struct CPU_State initial_cpu = {.pc=0x8704, .a=0xb1, .x=0x39, .y=0x14, .sp=0x68, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x8704, .value=0xd0}, {.addr=0x8705, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x8706, .a=0xb1, .x=0x39, .y=0x14, .sp=0x68, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x8704, .value=0xd0}, {.addr=0x8705, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x8704, .value=0xd0, .type=IO_READ},
        {.addr=0x8705, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0041) {
    const struct CPU_State initial_cpu = {.pc=0xdaab, .a=0x94, .x=0x9a, .y=0x77, .sp=0xf8, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xdaab, .value=0xd0}, {.addr=0xdaac, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xdaad, .a=0x94, .x=0x9a, .y=0x77, .sp=0xf8, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xdaab, .value=0xd0}, {.addr=0xdaac, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xdaab, .value=0xd0, .type=IO_READ},
        {.addr=0xdaac, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0042) {
    const struct CPU_State initial_cpu = {.pc=0x089f, .a=0xfb, .x=0x88, .y=0xd0, .sp=0xd1, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x089f, .value=0xd0}, {.addr=0x08a0, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x08a1, .a=0xfb, .x=0x88, .y=0xd0, .sp=0xd1, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x089f, .value=0xd0}, {.addr=0x08a0, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x089f, .value=0xd0, .type=IO_READ},
        {.addr=0x08a0, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0043) {
    const struct CPU_State initial_cpu = {.pc=0xa4da, .a=0x1b, .x=0x76, .y=0xd3, .sp=0x54, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa4da, .value=0xd0}, {.addr=0xa4db, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xa4dc, .a=0x1b, .x=0x76, .y=0xd3, .sp=0x54, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xa4da, .value=0xd0}, {.addr=0xa4db, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xa4da, .value=0xd0, .type=IO_READ},
        {.addr=0xa4db, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0044) {
    const struct CPU_State initial_cpu = {.pc=0x3796, .a=0xae, .x=0xbd, .y=0xc3, .sp=0x3f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x3796, .value=0xd0}, {.addr=0x3797, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x37f5, .a=0xae, .x=0xbd, .y=0xc3, .sp=0x3f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x3796, .value=0xd0}, {.addr=0x3797, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3796, .value=0xd0, .type=IO_READ},
        {.addr=0x3797, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0045) {
    const struct CPU_State initial_cpu = {.pc=0x4707, .a=0x5e, .x=0x8d, .y=0xf1, .sp=0xa5, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4707, .value=0xd0}, {.addr=0x4708, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x4709, .a=0x5e, .x=0x8d, .y=0xf1, .sp=0xa5, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x4707, .value=0xd0}, {.addr=0x4708, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x4707, .value=0xd0, .type=IO_READ},
        {.addr=0x4708, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0046) {
    const struct CPU_State initial_cpu = {.pc=0x1e7b, .a=0xa7, .x=0xe6, .y=0xc5, .sp=0x87, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1e7b, .value=0xd0}, {.addr=0x1e7c, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x1e7d, .a=0xa7, .x=0xe6, .y=0xc5, .sp=0x87, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x1e7b, .value=0xd0}, {.addr=0x1e7c, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x1e7b, .value=0xd0, .type=IO_READ},
        {.addr=0x1e7c, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0047) {
    const struct CPU_State initial_cpu = {.pc=0x2ed4, .a=0x03, .x=0xe2, .y=0x71, .sp=0x3e, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x2ed4, .value=0xd0}, {.addr=0x2ed5, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x2f09, .a=0x03, .x=0xe2, .y=0x71, .sp=0x3e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2ed4, .value=0xd0}, {.addr=0x2ed5, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x2ed4, .value=0xd0, .type=IO_READ},
        {.addr=0x2ed5, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0048) {
    const struct CPU_State initial_cpu = {.pc=0x2ff2, .a=0xbe, .x=0xc8, .y=0x2d, .sp=0xd9, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x2ff2, .value=0xd0}, {.addr=0x2ff3, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x2fa1, .a=0xbe, .x=0xc8, .y=0x2d, .sp=0xd9, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2ff2, .value=0xd0}, {.addr=0x2ff3, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x2ff2, .value=0xd0, .type=IO_READ},
        {.addr=0x2ff3, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0049) {
    const struct CPU_State initial_cpu = {.pc=0x22c4, .a=0x30, .x=0x17, .y=0x62, .sp=0xea, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x22c4, .value=0xd0}, {.addr=0x22c5, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x22c6, .a=0x30, .x=0x17, .y=0x62, .sp=0xea, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x22c4, .value=0xd0}, {.addr=0x22c5, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x22c4, .value=0xd0, .type=IO_READ},
        {.addr=0x22c5, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_004A) {
    const struct CPU_State initial_cpu = {.pc=0xab1a, .a=0xf6, .x=0xdb, .y=0xe7, .sp=0x4c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xab1a, .value=0xd0}, {.addr=0xab1b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xab1c, .a=0xf6, .x=0xdb, .y=0xe7, .sp=0x4c, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xab1a, .value=0xd0}, {.addr=0xab1b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xab1a, .value=0xd0, .type=IO_READ},
        {.addr=0xab1b, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_004B) {
    const struct CPU_State initial_cpu = {.pc=0x6843, .a=0xc6, .x=0x21, .y=0x26, .sp=0x11, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x6843, .value=0xd0}, {.addr=0x6844, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x67e0, .a=0xc6, .x=0x21, .y=0x26, .sp=0x11, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6843, .value=0xd0}, {.addr=0x6844, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x6843, .value=0xd0, .type=IO_READ},
        {.addr=0x6844, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_004C) {
    const struct CPU_State initial_cpu = {.pc=0xa1e3, .a=0x36, .x=0x61, .y=0xfe, .sp=0x9c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xa1e3, .value=0xd0}, {.addr=0xa1e4, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xa1e5, .a=0x36, .x=0x61, .y=0xfe, .sp=0x9c, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xa1e3, .value=0xd0}, {.addr=0xa1e4, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xa1e3, .value=0xd0, .type=IO_READ},
        {.addr=0xa1e4, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_004D) {
    const struct CPU_State initial_cpu = {.pc=0x8d2e, .a=0xcc, .x=0xd5, .y=0x52, .sp=0xfa, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x8d2e, .value=0xd0}, {.addr=0x8d2f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8d30, .a=0xcc, .x=0xd5, .y=0x52, .sp=0xfa, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x8d2e, .value=0xd0}, {.addr=0x8d2f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8d2e, .value=0xd0, .type=IO_READ},
        {.addr=0x8d2f, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_004E) {
    const struct CPU_State initial_cpu = {.pc=0x5ccc, .a=0xd0, .x=0x53, .y=0x3f, .sp=0x35, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5ccc, .value=0xd0}, {.addr=0x5ccd, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x5cce, .a=0xd0, .x=0x53, .y=0x3f, .sp=0x35, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x5ccc, .value=0xd0}, {.addr=0x5ccd, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x5ccc, .value=0xd0, .type=IO_READ},
        {.addr=0x5ccd, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_004F) {
    const struct CPU_State initial_cpu = {.pc=0x736c, .a=0xc9, .x=0x07, .y=0xa7, .sp=0xeb, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x736c, .value=0xd0}, {.addr=0x736d, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x736e, .a=0xc9, .x=0x07, .y=0xa7, .sp=0xeb, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x736c, .value=0xd0}, {.addr=0x736d, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x736c, .value=0xd0, .type=IO_READ},
        {.addr=0x736d, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0050) {
    const struct CPU_State initial_cpu = {.pc=0xbfb2, .a=0x71, .x=0xbf, .y=0x90, .sp=0xee, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xbfb2, .value=0xd0}, {.addr=0xbfb3, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xbfa9, .a=0x71, .x=0xbf, .y=0x90, .sp=0xee, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xbfb2, .value=0xd0}, {.addr=0xbfb3, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xbfb2, .value=0xd0, .type=IO_READ},
        {.addr=0xbfb3, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0051) {
    const struct CPU_State initial_cpu = {.pc=0xe599, .a=0x24, .x=0x85, .y=0xa8, .sp=0x3f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xe599, .value=0xd0}, {.addr=0xe59a, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xe59b, .a=0x24, .x=0x85, .y=0xa8, .sp=0x3f, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xe599, .value=0xd0}, {.addr=0xe59a, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xe599, .value=0xd0, .type=IO_READ},
        {.addr=0xe59a, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0052) {
    const struct CPU_State initial_cpu = {.pc=0xb971, .a=0x23, .x=0xa4, .y=0x08, .sp=0x6e, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xb971, .value=0xd0}, {.addr=0xb972, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xb9de, .a=0x23, .x=0xa4, .y=0x08, .sp=0x6e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb971, .value=0xd0}, {.addr=0xb972, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xb971, .value=0xd0, .type=IO_READ},
        {.addr=0xb972, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0053) {
    const struct CPU_State initial_cpu = {.pc=0xf40d, .a=0xa1, .x=0xa2, .y=0x54, .sp=0x84, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xf40d, .value=0xd0}, {.addr=0xf40e, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xf3e2, .a=0xa1, .x=0xa2, .y=0x54, .sp=0x84, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf40d, .value=0xd0}, {.addr=0xf40e, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xf40d, .value=0xd0, .type=IO_READ},
        {.addr=0xf40e, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0054) {
    const struct CPU_State initial_cpu = {.pc=0x5bdb, .a=0x97, .x=0x5a, .y=0x81, .sp=0xcd, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x5bdb, .value=0xd0}, {.addr=0x5bdc, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x5c3e, .a=0x97, .x=0x5a, .y=0x81, .sp=0xcd, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x5bdb, .value=0xd0}, {.addr=0x5bdc, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x5bdb, .value=0xd0, .type=IO_READ},
        {.addr=0x5bdc, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0055) {
    const struct CPU_State initial_cpu = {.pc=0x611e, .a=0xdc, .x=0x8f, .y=0xae, .sp=0xb6, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x611e, .value=0xd0}, {.addr=0x611f, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x6120, .a=0xdc, .x=0x8f, .y=0xae, .sp=0xb6, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x611e, .value=0xd0}, {.addr=0x611f, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x611e, .value=0xd0, .type=IO_READ},
        {.addr=0x611f, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0056) {
    const struct CPU_State initial_cpu = {.pc=0x45ba, .a=0xd0, .x=0x66, .y=0x2e, .sp=0xc7, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x45ba, .value=0xd0}, {.addr=0x45bb, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x4588, .a=0xd0, .x=0x66, .y=0x2e, .sp=0xc7, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x45ba, .value=0xd0}, {.addr=0x45bb, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x45ba, .value=0xd0, .type=IO_READ},
        {.addr=0x45bb, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0057) {
    const struct CPU_State initial_cpu = {.pc=0x693c, .a=0x2c, .x=0xb4, .y=0xc8, .sp=0x20, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x693c, .value=0xd0}, {.addr=0x693d, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x693e, .a=0x2c, .x=0xb4, .y=0xc8, .sp=0x20, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x693c, .value=0xd0}, {.addr=0x693d, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x693c, .value=0xd0, .type=IO_READ},
        {.addr=0x693d, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0058) {
    const struct CPU_State initial_cpu = {.pc=0x747d, .a=0x3b, .x=0xe4, .y=0x04, .sp=0x2c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x747d, .value=0xd0}, {.addr=0x747e, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x747f, .a=0x3b, .x=0xe4, .y=0x04, .sp=0x2c, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x747d, .value=0xd0}, {.addr=0x747e, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x747d, .value=0xd0, .type=IO_READ},
        {.addr=0x747e, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0059) {
    const struct CPU_State initial_cpu = {.pc=0x835c, .a=0xe8, .x=0xa7, .y=0x98, .sp=0x11, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x835c, .value=0xd0}, {.addr=0x835d, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x830b, .a=0xe8, .x=0xa7, .y=0x98, .sp=0x11, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x835c, .value=0xd0}, {.addr=0x835d, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x835c, .value=0xd0, .type=IO_READ},
        {.addr=0x835d, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_005A) {
    const struct CPU_State initial_cpu = {.pc=0x6f02, .a=0x0f, .x=0x05, .y=0x71, .sp=0xcf, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x6f02, .value=0xd0}, {.addr=0x6f03, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6ec3, .a=0x0f, .x=0x05, .y=0x71, .sp=0xcf, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x6f02, .value=0xd0}, {.addr=0x6f03, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6f02, .value=0xd0, .type=IO_READ},
        {.addr=0x6f03, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_005B) {
    const struct CPU_State initial_cpu = {.pc=0x5f2c, .a=0xf4, .x=0x48, .y=0x14, .sp=0x0a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x5f2c, .value=0xd0}, {.addr=0x5f2d, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x5f7a, .a=0xf4, .x=0x48, .y=0x14, .sp=0x0a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5f2c, .value=0xd0}, {.addr=0x5f2d, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x5f2c, .value=0xd0, .type=IO_READ},
        {.addr=0x5f2d, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_005C) {
    const struct CPU_State initial_cpu = {.pc=0x2ef2, .a=0x93, .x=0xe5, .y=0x65, .sp=0x11, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2ef2, .value=0xd0}, {.addr=0x2ef3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2ef4, .a=0x93, .x=0xe5, .y=0x65, .sp=0x11, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x2ef2, .value=0xd0}, {.addr=0x2ef3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2ef2, .value=0xd0, .type=IO_READ},
        {.addr=0x2ef3, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_005D) {
    const struct CPU_State initial_cpu = {.pc=0xb04a, .a=0x37, .x=0x90, .y=0x52, .sp=0x91, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xb04a, .value=0xd0}, {.addr=0xb04b, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xb04c, .a=0x37, .x=0x90, .y=0x52, .sp=0x91, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xb04a, .value=0xd0}, {.addr=0xb04b, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xb04a, .value=0xd0, .type=IO_READ},
        {.addr=0xb04b, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_005E) {
    const struct CPU_State initial_cpu = {.pc=0xf16c, .a=0x69, .x=0xf7, .y=0x16, .sp=0x6c, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xf16c, .value=0xd0}, {.addr=0xf16d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf16e, .a=0x69, .x=0xf7, .y=0x16, .sp=0x6c, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xf16c, .value=0xd0}, {.addr=0xf16d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf16c, .value=0xd0, .type=IO_READ},
        {.addr=0xf16d, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_005F) {
    const struct CPU_State initial_cpu = {.pc=0x0bab, .a=0x9d, .x=0x17, .y=0xd1, .sp=0xaf, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0bab, .value=0xd0}, {.addr=0x0bac, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x0bad, .a=0x9d, .x=0x17, .y=0xd1, .sp=0xaf, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0bab, .value=0xd0}, {.addr=0x0bac, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x0bab, .value=0xd0, .type=IO_READ},
        {.addr=0x0bac, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0060) {
    const struct CPU_State initial_cpu = {.pc=0x4281, .a=0xa1, .x=0x94, .y=0x73, .sp=0x89, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x4281, .value=0xd0}, {.addr=0x4282, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4283, .a=0xa1, .x=0x94, .y=0x73, .sp=0x89, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x4281, .value=0xd0}, {.addr=0x4282, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4281, .value=0xd0, .type=IO_READ},
        {.addr=0x4282, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0061) {
    const struct CPU_State initial_cpu = {.pc=0x08a5, .a=0x6e, .x=0xfd, .y=0xa6, .sp=0xb3, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x08a5, .value=0xd0}, {.addr=0x08a6, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x0881, .a=0x6e, .x=0xfd, .y=0xa6, .sp=0xb3, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x08a5, .value=0xd0}, {.addr=0x08a6, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x08a5, .value=0xd0, .type=IO_READ},
        {.addr=0x08a6, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0062) {
    const struct CPU_State initial_cpu = {.pc=0xa2fa, .a=0x64, .x=0x9f, .y=0x62, .sp=0xb4, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xa2fa, .value=0xd0}, {.addr=0xa2fb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa309, .a=0x64, .x=0x9f, .y=0x62, .sp=0xb4, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xa2fa, .value=0xd0}, {.addr=0xa2fb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa2fa, .value=0xd0, .type=IO_READ},
        {.addr=0xa2fb, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0063) {
    const struct CPU_State initial_cpu = {.pc=0x3a7a, .a=0x4e, .x=0x17, .y=0xc2, .sp=0xbe, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x3a7a, .value=0xd0}, {.addr=0x3a7b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3a4a, .a=0x4e, .x=0x17, .y=0xc2, .sp=0xbe, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x3a7a, .value=0xd0}, {.addr=0x3a7b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3a7a, .value=0xd0, .type=IO_READ},
        {.addr=0x3a7b, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0064) {
    const struct CPU_State initial_cpu = {.pc=0xc7d1, .a=0x07, .x=0x60, .y=0x02, .sp=0xe4, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d1, .value=0xd0}, {.addr=0xc7d2, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xc7d3, .a=0x07, .x=0x60, .y=0x02, .sp=0xe4, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xc7d1, .value=0xd0}, {.addr=0xc7d2, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xc7d1, .value=0xd0, .type=IO_READ},
        {.addr=0xc7d2, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0065) {
    const struct CPU_State initial_cpu = {.pc=0x7f31, .a=0xa2, .x=0xb1, .y=0x4b, .sp=0x69, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7f31, .value=0xd0}, {.addr=0x7f32, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x7eb7, .a=0xa2, .x=0xb1, .y=0x4b, .sp=0x69, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7f31, .value=0xd0}, {.addr=0x7f32, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x7f31, .value=0xd0, .type=IO_READ},
        {.addr=0x7f32, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0066) {
    const struct CPU_State initial_cpu = {.pc=0x7644, .a=0x69, .x=0x9b, .y=0x76, .sp=0xeb, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x7644, .value=0xd0}, {.addr=0x7645, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x7646, .a=0x69, .x=0x9b, .y=0x76, .sp=0xeb, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x7644, .value=0xd0}, {.addr=0x7645, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x7644, .value=0xd0, .type=IO_READ},
        {.addr=0x7645, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0067) {
    const struct CPU_State initial_cpu = {.pc=0x423a, .a=0x79, .x=0xbf, .y=0xf7, .sp=0x88, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x423a, .value=0xd0}, {.addr=0x423b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x423c, .a=0x79, .x=0xbf, .y=0xf7, .sp=0x88, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x423a, .value=0xd0}, {.addr=0x423b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x423a, .value=0xd0, .type=IO_READ},
        {.addr=0x423b, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0068) {
    const struct CPU_State initial_cpu = {.pc=0x0346, .a=0xfc, .x=0x7f, .y=0x69, .sp=0x48, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0346, .value=0xd0}, {.addr=0x0347, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x0372, .a=0xfc, .x=0x7f, .y=0x69, .sp=0x48, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0346, .value=0xd0}, {.addr=0x0347, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x0346, .value=0xd0, .type=IO_READ},
        {.addr=0x0347, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0069) {
    const struct CPU_State initial_cpu = {.pc=0x31ca, .a=0x05, .x=0x01, .y=0x35, .sp=0x49, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x31ca, .value=0xd0}, {.addr=0x31cb, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x31cc, .a=0x05, .x=0x01, .y=0x35, .sp=0x49, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x31ca, .value=0xd0}, {.addr=0x31cb, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x31ca, .value=0xd0, .type=IO_READ},
        {.addr=0x31cb, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_006A) {
    const struct CPU_State initial_cpu = {.pc=0xe405, .a=0x64, .x=0x75, .y=0x5f, .sp=0x34, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe405, .value=0xd0}, {.addr=0xe406, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe407, .a=0x64, .x=0x75, .y=0x5f, .sp=0x34, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xe405, .value=0xd0}, {.addr=0xe406, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe405, .value=0xd0, .type=IO_READ},
        {.addr=0xe406, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_006B) {
    const struct CPU_State initial_cpu = {.pc=0xfeda, .a=0x5b, .x=0xbb, .y=0x3d, .sp=0x04, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xfeda, .value=0xd0}, {.addr=0xfedb, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xfedc, .a=0x5b, .x=0xbb, .y=0x3d, .sp=0x04, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xfeda, .value=0xd0}, {.addr=0xfedb, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xfeda, .value=0xd0, .type=IO_READ},
        {.addr=0xfedb, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_006C) {
    const struct CPU_State initial_cpu = {.pc=0xed72, .a=0xd4, .x=0x1f, .y=0x81, .sp=0xe3, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xed72, .value=0xd0}, {.addr=0xed73, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xed74, .a=0xd4, .x=0x1f, .y=0x81, .sp=0xe3, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xed72, .value=0xd0}, {.addr=0xed73, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xed72, .value=0xd0, .type=IO_READ},
        {.addr=0xed73, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_006D) {
    const struct CPU_State initial_cpu = {.pc=0x75ec, .a=0xb0, .x=0x54, .y=0x55, .sp=0x74, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x75ec, .value=0xd0}, {.addr=0x75ed, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x75ee, .a=0xb0, .x=0x54, .y=0x55, .sp=0x74, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x75ec, .value=0xd0}, {.addr=0x75ed, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x75ec, .value=0xd0, .type=IO_READ},
        {.addr=0x75ed, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_006E) {
    const struct CPU_State initial_cpu = {.pc=0xc676, .a=0x74, .x=0xa2, .y=0x69, .sp=0xd2, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xc676, .value=0xd0}, {.addr=0xc677, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc63e, .a=0x74, .x=0xa2, .y=0x69, .sp=0xd2, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xc676, .value=0xd0}, {.addr=0xc677, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc676, .value=0xd0, .type=IO_READ},
        {.addr=0xc677, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_006F) {
    const struct CPU_State initial_cpu = {.pc=0x1295, .a=0x3a, .x=0x30, .y=0x97, .sp=0xa0, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x1295, .value=0xd0}, {.addr=0x1296, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x1297, .a=0x3a, .x=0x30, .y=0x97, .sp=0xa0, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x1295, .value=0xd0}, {.addr=0x1296, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x1295, .value=0xd0, .type=IO_READ},
        {.addr=0x1296, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0070) {
    const struct CPU_State initial_cpu = {.pc=0xd579, .a=0x5f, .x=0xcf, .y=0x35, .sp=0xa3, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xd579, .value=0xd0}, {.addr=0xd57a, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xd5de, .a=0x5f, .x=0xcf, .y=0x35, .sp=0xa3, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xd579, .value=0xd0}, {.addr=0xd57a, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xd579, .value=0xd0, .type=IO_READ},
        {.addr=0xd57a, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0071) {
    const struct CPU_State initial_cpu = {.pc=0x6c5d, .a=0x87, .x=0x40, .y=0xaa, .sp=0xc1, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x6c5d, .value=0xd0}, {.addr=0x6c5e, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x6cd1, .a=0x87, .x=0x40, .y=0xaa, .sp=0xc1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x6c5d, .value=0xd0}, {.addr=0x6c5e, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x6c5d, .value=0xd0, .type=IO_READ},
        {.addr=0x6c5e, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0072) {
    const struct CPU_State initial_cpu = {.pc=0xcd28, .a=0x5a, .x=0x7f, .y=0xf4, .sp=0xb5, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xcd28, .value=0xd0}, {.addr=0xcd29, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xcd3f, .a=0x5a, .x=0x7f, .y=0xf4, .sp=0xb5, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xcd28, .value=0xd0}, {.addr=0xcd29, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xcd28, .value=0xd0, .type=IO_READ},
        {.addr=0xcd29, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0073) {
    const struct CPU_State initial_cpu = {.pc=0x1c2e, .a=0x4d, .x=0x63, .y=0x60, .sp=0x82, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x1c2e, .value=0xd0}, {.addr=0x1c2f, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x1c46, .a=0x4d, .x=0x63, .y=0x60, .sp=0x82, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x1c2e, .value=0xd0}, {.addr=0x1c2f, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x1c2e, .value=0xd0, .type=IO_READ},
        {.addr=0x1c2f, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0074) {
    const struct CPU_State initial_cpu = {.pc=0x8399, .a=0x7b, .x=0x84, .y=0x4b, .sp=0x77, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x8399, .value=0xd0}, {.addr=0x839a, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x839b, .a=0x7b, .x=0x84, .y=0x4b, .sp=0x77, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x8399, .value=0xd0}, {.addr=0x839a, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x8399, .value=0xd0, .type=IO_READ},
        {.addr=0x839a, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0075) {
    const struct CPU_State initial_cpu = {.pc=0xd394, .a=0x82, .x=0x03, .y=0xcf, .sp=0x75, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xd394, .value=0xd0}, {.addr=0xd395, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd3d2, .a=0x82, .x=0x03, .y=0xcf, .sp=0x75, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd394, .value=0xd0}, {.addr=0xd395, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd394, .value=0xd0, .type=IO_READ},
        {.addr=0xd395, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0076) {
    const struct CPU_State initial_cpu = {.pc=0xa892, .a=0x6a, .x=0xca, .y=0xdc, .sp=0xf2, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa892, .value=0xd0}, {.addr=0xa893, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xa894, .a=0x6a, .x=0xca, .y=0xdc, .sp=0xf2, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xa892, .value=0xd0}, {.addr=0xa893, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xa892, .value=0xd0, .type=IO_READ},
        {.addr=0xa893, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0077) {
    const struct CPU_State initial_cpu = {.pc=0xd8bc, .a=0x26, .x=0x44, .y=0xab, .sp=0xb2, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xd8bc, .value=0xd0}, {.addr=0xd8bd, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xd8be, .a=0x26, .x=0x44, .y=0xab, .sp=0xb2, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xd8bc, .value=0xd0}, {.addr=0xd8bd, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xd8bc, .value=0xd0, .type=IO_READ},
        {.addr=0xd8bd, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0078) {
    const struct CPU_State initial_cpu = {.pc=0x0ef7, .a=0x1b, .x=0x70, .y=0x39, .sp=0xa2, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0ef7, .value=0xd0}, {.addr=0x0ef8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0ef9, .a=0x1b, .x=0x70, .y=0x39, .sp=0xa2, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0ef7, .value=0xd0}, {.addr=0x0ef8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0ef7, .value=0xd0, .type=IO_READ},
        {.addr=0x0ef8, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0079) {
    const struct CPU_State initial_cpu = {.pc=0x2946, .a=0x4f, .x=0x30, .y=0x84, .sp=0xe4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x2946, .value=0xd0}, {.addr=0x2947, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x2948, .a=0x4f, .x=0x30, .y=0x84, .sp=0xe4, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x2946, .value=0xd0}, {.addr=0x2947, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x2946, .value=0xd0, .type=IO_READ},
        {.addr=0x2947, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_007A) {
    const struct CPU_State initial_cpu = {.pc=0x445d, .a=0xd4, .x=0xba, .y=0xb1, .sp=0xee, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x445d, .value=0xd0}, {.addr=0x445e, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x445f, .a=0xd4, .x=0xba, .y=0xb1, .sp=0xee, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x445d, .value=0xd0}, {.addr=0x445e, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x445d, .value=0xd0, .type=IO_READ},
        {.addr=0x445e, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_007B) {
    const struct CPU_State initial_cpu = {.pc=0xc0dc, .a=0x98, .x=0x21, .y=0x38, .sp=0x8e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xc0dc, .value=0xd0}, {.addr=0xc0dd, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xc0de, .a=0x98, .x=0x21, .y=0x38, .sp=0x8e, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xc0dc, .value=0xd0}, {.addr=0xc0dd, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xc0dc, .value=0xd0, .type=IO_READ},
        {.addr=0xc0dd, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_007C) {
    const struct CPU_State initial_cpu = {.pc=0x341e, .a=0x28, .x=0xcd, .y=0x62, .sp=0xa9, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x341e, .value=0xd0}, {.addr=0x341f, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x33e1, .a=0x28, .x=0xcd, .y=0x62, .sp=0xa9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x341e, .value=0xd0}, {.addr=0x341f, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x341e, .value=0xd0, .type=IO_READ},
        {.addr=0x341f, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_007D) {
    const struct CPU_State initial_cpu = {.pc=0x1b57, .a=0x50, .x=0xed, .y=0xf7, .sp=0xb7, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x1b57, .value=0xd0}, {.addr=0x1b58, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x1b59, .a=0x50, .x=0xed, .y=0xf7, .sp=0xb7, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x1b57, .value=0xd0}, {.addr=0x1b58, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x1b57, .value=0xd0, .type=IO_READ},
        {.addr=0x1b58, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_007E) {
    const struct CPU_State initial_cpu = {.pc=0x6946, .a=0xd4, .x=0x2e, .y=0x99, .sp=0x9b, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x6946, .value=0xd0}, {.addr=0x6947, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x692f, .a=0xd4, .x=0x2e, .y=0x99, .sp=0x9b, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x6946, .value=0xd0}, {.addr=0x6947, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x6946, .value=0xd0, .type=IO_READ},
        {.addr=0x6947, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_007F) {
    const struct CPU_State initial_cpu = {.pc=0x2889, .a=0x46, .x=0xe4, .y=0x1a, .sp=0x99, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x2889, .value=0xd0}, {.addr=0x288a, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x288b, .a=0x46, .x=0xe4, .y=0x1a, .sp=0x99, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x2889, .value=0xd0}, {.addr=0x288a, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x2889, .value=0xd0, .type=IO_READ},
        {.addr=0x288a, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0080) {
    const struct CPU_State initial_cpu = {.pc=0x944e, .a=0x27, .x=0x08, .y=0x4f, .sp=0x0c, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x944e, .value=0xd0}, {.addr=0x944f, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x93f5, .a=0x27, .x=0x08, .y=0x4f, .sp=0x0c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x944e, .value=0xd0}, {.addr=0x944f, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x944e, .value=0xd0, .type=IO_READ},
        {.addr=0x944f, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0081) {
    const struct CPU_State initial_cpu = {.pc=0x18f2, .a=0xd8, .x=0x6d, .y=0xcf, .sp=0x09, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x18f2, .value=0xd0}, {.addr=0x18f3, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x18f4, .a=0xd8, .x=0x6d, .y=0xcf, .sp=0x09, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x18f2, .value=0xd0}, {.addr=0x18f3, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x18f2, .value=0xd0, .type=IO_READ},
        {.addr=0x18f3, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0082) {
    const struct CPU_State initial_cpu = {.pc=0x6e75, .a=0x4d, .x=0x12, .y=0x10, .sp=0xac, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x6e75, .value=0xd0}, {.addr=0x6e76, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x6eda, .a=0x4d, .x=0x12, .y=0x10, .sp=0xac, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x6e75, .value=0xd0}, {.addr=0x6e76, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x6e75, .value=0xd0, .type=IO_READ},
        {.addr=0x6e76, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0083) {
    const struct CPU_State initial_cpu = {.pc=0x96dc, .a=0xb8, .x=0xe1, .y=0x54, .sp=0xe6, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x96dc, .value=0xd0}, {.addr=0x96dd, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x96de, .a=0xb8, .x=0xe1, .y=0x54, .sp=0xe6, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x96dc, .value=0xd0}, {.addr=0x96dd, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x96dc, .value=0xd0, .type=IO_READ},
        {.addr=0x96dd, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0084) {
    const struct CPU_State initial_cpu = {.pc=0x43fb, .a=0x5b, .x=0x71, .y=0x6a, .sp=0x8e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x43fb, .value=0xd0}, {.addr=0x43fc, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x4468, .a=0x5b, .x=0x71, .y=0x6a, .sp=0x8e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x43fb, .value=0xd0}, {.addr=0x43fc, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x43fb, .value=0xd0, .type=IO_READ},
        {.addr=0x43fc, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0085) {
    const struct CPU_State initial_cpu = {.pc=0x5cf4, .a=0x2d, .x=0x29, .y=0x1a, .sp=0x1f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x5cf4, .value=0xd0}, {.addr=0x5cf5, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x5cf6, .a=0x2d, .x=0x29, .y=0x1a, .sp=0x1f, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x5cf4, .value=0xd0}, {.addr=0x5cf5, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x5cf4, .value=0xd0, .type=IO_READ},
        {.addr=0x5cf5, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0086) {
    const struct CPU_State initial_cpu = {.pc=0xdec9, .a=0x11, .x=0x2e, .y=0x4f, .sp=0x38, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xdec9, .value=0xd0}, {.addr=0xdeca, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xdecb, .a=0x11, .x=0x2e, .y=0x4f, .sp=0x38, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xdec9, .value=0xd0}, {.addr=0xdeca, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xdec9, .value=0xd0, .type=IO_READ},
        {.addr=0xdeca, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0087) {
    const struct CPU_State initial_cpu = {.pc=0x8fe7, .a=0xcc, .x=0xa7, .y=0xa9, .sp=0xda, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8fe7, .value=0xd0}, {.addr=0x8fe8, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x8fe9, .a=0xcc, .x=0xa7, .y=0xa9, .sp=0xda, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x8fe7, .value=0xd0}, {.addr=0x8fe8, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x8fe7, .value=0xd0, .type=IO_READ},
        {.addr=0x8fe8, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0088) {
    const struct CPU_State initial_cpu = {.pc=0x6281, .a=0x81, .x=0x51, .y=0xd3, .sp=0x3d, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x6281, .value=0xd0}, {.addr=0x6282, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x621b, .a=0x81, .x=0x51, .y=0xd3, .sp=0x3d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6281, .value=0xd0}, {.addr=0x6282, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x6281, .value=0xd0, .type=IO_READ},
        {.addr=0x6282, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0089) {
    const struct CPU_State initial_cpu = {.pc=0x9df4, .a=0x75, .x=0x9c, .y=0x84, .sp=0x31, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x9df4, .value=0xd0}, {.addr=0x9df5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9df3, .a=0x75, .x=0x9c, .y=0x84, .sp=0x31, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x9df4, .value=0xd0}, {.addr=0x9df5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9df4, .value=0xd0, .type=IO_READ},
        {.addr=0x9df5, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_008A) {
    const struct CPU_State initial_cpu = {.pc=0xf74f, .a=0x87, .x=0xa0, .y=0x93, .sp=0x72, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xf74f, .value=0xd0}, {.addr=0xf750, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xf751, .a=0x87, .x=0xa0, .y=0x93, .sp=0x72, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xf74f, .value=0xd0}, {.addr=0xf750, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xf74f, .value=0xd0, .type=IO_READ},
        {.addr=0xf750, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_008B) {
    const struct CPU_State initial_cpu = {.pc=0x06bd, .a=0x93, .x=0x8e, .y=0x00, .sp=0xae, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x06bd, .value=0xd0}, {.addr=0x06be, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x06bf, .a=0x93, .x=0x8e, .y=0x00, .sp=0xae, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x06bd, .value=0xd0}, {.addr=0x06be, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x06bd, .value=0xd0, .type=IO_READ},
        {.addr=0x06be, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_008C) {
    const struct CPU_State initial_cpu = {.pc=0x80ac, .a=0x0e, .x=0x78, .y=0xe7, .sp=0xd1, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x80ac, .value=0xd0}, {.addr=0x80ad, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x812d, .a=0x0e, .x=0x78, .y=0xe7, .sp=0xd1, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x80ac, .value=0xd0}, {.addr=0x80ad, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x80ac, .value=0xd0, .type=IO_READ},
        {.addr=0x80ad, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_008D) {
    const struct CPU_State initial_cpu = {.pc=0x6320, .a=0xa7, .x=0x6b, .y=0x25, .sp=0x0e, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x6320, .value=0xd0}, {.addr=0x6321, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x638f, .a=0xa7, .x=0x6b, .y=0x25, .sp=0x0e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6320, .value=0xd0}, {.addr=0x6321, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6320, .value=0xd0, .type=IO_READ},
        {.addr=0x6321, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_008E) {
    const struct CPU_State initial_cpu = {.pc=0x8598, .a=0x58, .x=0xb5, .y=0xa8, .sp=0x1f, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x8598, .value=0xd0}, {.addr=0x8599, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x85ac, .a=0x58, .x=0xb5, .y=0xa8, .sp=0x1f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8598, .value=0xd0}, {.addr=0x8599, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x8598, .value=0xd0, .type=IO_READ},
        {.addr=0x8599, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_008F) {
    const struct CPU_State initial_cpu = {.pc=0x8d5f, .a=0xea, .x=0xd4, .y=0x60, .sp=0xf0, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x8d5f, .value=0xd0}, {.addr=0x8d60, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x8ce9, .a=0xea, .x=0xd4, .y=0x60, .sp=0xf0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x8d5f, .value=0xd0}, {.addr=0x8d60, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x8d5f, .value=0xd0, .type=IO_READ},
        {.addr=0x8d60, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0090) {
    const struct CPU_State initial_cpu = {.pc=0xf4a3, .a=0xb4, .x=0x56, .y=0x94, .sp=0x09, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xf4a3, .value=0xd0}, {.addr=0xf4a4, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xf4a5, .a=0xb4, .x=0x56, .y=0x94, .sp=0x09, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xf4a3, .value=0xd0}, {.addr=0xf4a4, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xf4a3, .value=0xd0, .type=IO_READ},
        {.addr=0xf4a4, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0091) {
    const struct CPU_State initial_cpu = {.pc=0x0bc3, .a=0x21, .x=0x6c, .y=0xcf, .sp=0x3a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0bc3, .value=0xd0}, {.addr=0x0bc4, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x0c09, .a=0x21, .x=0x6c, .y=0xcf, .sp=0x3a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0bc3, .value=0xd0}, {.addr=0x0bc4, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x0bc3, .value=0xd0, .type=IO_READ},
        {.addr=0x0bc4, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0092) {
    const struct CPU_State initial_cpu = {.pc=0xf7a6, .a=0xe4, .x=0xdf, .y=0xd3, .sp=0x09, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xf7a6, .value=0xd0}, {.addr=0xf7a7, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xf738, .a=0xe4, .x=0xdf, .y=0xd3, .sp=0x09, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xf7a6, .value=0xd0}, {.addr=0xf7a7, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xf7a6, .value=0xd0, .type=IO_READ},
        {.addr=0xf7a7, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0093) {
    const struct CPU_State initial_cpu = {.pc=0x1d8d, .a=0x78, .x=0xdf, .y=0xcd, .sp=0x89, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x1d8d, .value=0xd0}, {.addr=0x1d8e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1d8f, .a=0x78, .x=0xdf, .y=0xcd, .sp=0x89, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x1d8d, .value=0xd0}, {.addr=0x1d8e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1d8d, .value=0xd0, .type=IO_READ},
        {.addr=0x1d8e, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0094) {
    const struct CPU_State initial_cpu = {.pc=0xbdf7, .a=0x46, .x=0x61, .y=0x85, .sp=0xb8, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xbdf7, .value=0xd0}, {.addr=0xbdf8, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xbdf9, .a=0x46, .x=0x61, .y=0x85, .sp=0xb8, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xbdf7, .value=0xd0}, {.addr=0xbdf8, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xbdf7, .value=0xd0, .type=IO_READ},
        {.addr=0xbdf8, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0095) {
    const struct CPU_State initial_cpu = {.pc=0x5118, .a=0xca, .x=0x2e, .y=0x63, .sp=0xdb, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x5118, .value=0xd0}, {.addr=0x5119, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x5166, .a=0xca, .x=0x2e, .y=0x63, .sp=0xdb, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5118, .value=0xd0}, {.addr=0x5119, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x5118, .value=0xd0, .type=IO_READ},
        {.addr=0x5119, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0096) {
    const struct CPU_State initial_cpu = {.pc=0x3bcb, .a=0xe7, .x=0xc2, .y=0x87, .sp=0x13, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x3bcb, .value=0xd0}, {.addr=0x3bcc, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x3b74, .a=0xe7, .x=0xc2, .y=0x87, .sp=0x13, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3bcb, .value=0xd0}, {.addr=0x3bcc, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x3bcb, .value=0xd0, .type=IO_READ},
        {.addr=0x3bcc, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0097) {
    const struct CPU_State initial_cpu = {.pc=0xc444, .a=0x0b, .x=0x61, .y=0xcf, .sp=0xac, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xc444, .value=0xd0}, {.addr=0xc445, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xc3ee, .a=0x0b, .x=0x61, .y=0xcf, .sp=0xac, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc444, .value=0xd0}, {.addr=0xc445, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xc444, .value=0xd0, .type=IO_READ},
        {.addr=0xc445, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0098) {
    const struct CPU_State initial_cpu = {.pc=0xa961, .a=0xf6, .x=0x29, .y=0xd2, .sp=0x73, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xa961, .value=0xd0}, {.addr=0xa962, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa9e0, .a=0xf6, .x=0x29, .y=0xd2, .sp=0x73, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa961, .value=0xd0}, {.addr=0xa962, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa961, .value=0xd0, .type=IO_READ},
        {.addr=0xa962, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0099) {
    const struct CPU_State initial_cpu = {.pc=0x488a, .a=0x42, .x=0x4c, .y=0xc4, .sp=0x9d, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x488a, .value=0xd0}, {.addr=0x488b, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x4814, .a=0x42, .x=0x4c, .y=0xc4, .sp=0x9d, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x488a, .value=0xd0}, {.addr=0x488b, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x488a, .value=0xd0, .type=IO_READ},
        {.addr=0x488b, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_009A) {
    const struct CPU_State initial_cpu = {.pc=0x483d, .a=0x4e, .x=0x37, .y=0x6d, .sp=0x5a, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x483d, .value=0xd0}, {.addr=0x483e, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x483f, .a=0x4e, .x=0x37, .y=0x6d, .sp=0x5a, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x483d, .value=0xd0}, {.addr=0x483e, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x483d, .value=0xd0, .type=IO_READ},
        {.addr=0x483e, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_009B) {
    const struct CPU_State initial_cpu = {.pc=0xf9c6, .a=0xc6, .x=0x7c, .y=0xef, .sp=0x8b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xf9c6, .value=0xd0}, {.addr=0xf9c7, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xf97e, .a=0xc6, .x=0x7c, .y=0xef, .sp=0x8b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf9c6, .value=0xd0}, {.addr=0xf9c7, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xf9c6, .value=0xd0, .type=IO_READ},
        {.addr=0xf9c7, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_009C) {
    const struct CPU_State initial_cpu = {.pc=0x1bc5, .a=0x78, .x=0x73, .y=0xee, .sp=0xf3, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x1bc5, .value=0xd0}, {.addr=0x1bc6, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x1bc7, .a=0x78, .x=0x73, .y=0xee, .sp=0xf3, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x1bc5, .value=0xd0}, {.addr=0x1bc6, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x1bc5, .value=0xd0, .type=IO_READ},
        {.addr=0x1bc6, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_009D) {
    const struct CPU_State initial_cpu = {.pc=0x83b0, .a=0xa6, .x=0xbe, .y=0xf2, .sp=0xc0, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x83b0, .value=0xd0}, {.addr=0x83b1, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x83b2, .a=0xa6, .x=0xbe, .y=0xf2, .sp=0xc0, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x83b0, .value=0xd0}, {.addr=0x83b1, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x83b0, .value=0xd0, .type=IO_READ},
        {.addr=0x83b1, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_009E) {
    const struct CPU_State initial_cpu = {.pc=0x5519, .a=0xdf, .x=0xc6, .y=0xb7, .sp=0xd4, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x5519, .value=0xd0}, {.addr=0x551a, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x551b, .a=0xdf, .x=0xc6, .y=0xb7, .sp=0xd4, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x5519, .value=0xd0}, {.addr=0x551a, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x5519, .value=0xd0, .type=IO_READ},
        {.addr=0x551a, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_009F) {
    const struct CPU_State initial_cpu = {.pc=0x49db, .a=0xb1, .x=0x89, .y=0x84, .sp=0x8a, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x49db, .value=0xd0}, {.addr=0x49dc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4a0a, .a=0xb1, .x=0x89, .y=0x84, .sp=0x8a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x49db, .value=0xd0}, {.addr=0x49dc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x49db, .value=0xd0, .type=IO_READ},
        {.addr=0x49dc, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x895d, .a=0x16, .x=0x16, .y=0x91, .sp=0x05, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x895d, .value=0xd0}, {.addr=0x895e, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x89a7, .a=0x16, .x=0x16, .y=0x91, .sp=0x05, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x895d, .value=0xd0}, {.addr=0x895e, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x895d, .value=0xd0, .type=IO_READ},
        {.addr=0x895e, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x7420, .a=0x76, .x=0x45, .y=0xb1, .sp=0xd1, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x7420, .value=0xd0}, {.addr=0x7421, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x7422, .a=0x76, .x=0x45, .y=0xb1, .sp=0xd1, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x7420, .value=0xd0}, {.addr=0x7421, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x7420, .value=0xd0, .type=IO_READ},
        {.addr=0x7421, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x03f6, .a=0xcf, .x=0xe2, .y=0x3d, .sp=0xbe, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x03f6, .value=0xd0}, {.addr=0x03f7, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x03f8, .a=0xcf, .x=0xe2, .y=0x3d, .sp=0xbe, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x03f6, .value=0xd0}, {.addr=0x03f7, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x03f6, .value=0xd0, .type=IO_READ},
        {.addr=0x03f7, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x21d9, .a=0x88, .x=0x09, .y=0x8b, .sp=0xb4, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x21d9, .value=0xd0}, {.addr=0x21da, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x21db, .a=0x88, .x=0x09, .y=0x8b, .sp=0xb4, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x21d9, .value=0xd0}, {.addr=0x21da, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x21d9, .value=0xd0, .type=IO_READ},
        {.addr=0x21da, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xc313, .a=0x8d, .x=0x40, .y=0x91, .sp=0x9b, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xc313, .value=0xd0}, {.addr=0xc314, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc315, .a=0x8d, .x=0x40, .y=0x91, .sp=0x9b, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xc313, .value=0xd0}, {.addr=0xc314, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc313, .value=0xd0, .type=IO_READ},
        {.addr=0xc314, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xf20a, .a=0xe6, .x=0x95, .y=0xbf, .sp=0x07, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xf20a, .value=0xd0}, {.addr=0xf20b, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xf20f, .a=0xe6, .x=0x95, .y=0xbf, .sp=0x07, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xf20a, .value=0xd0}, {.addr=0xf20b, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xf20a, .value=0xd0, .type=IO_READ},
        {.addr=0xf20b, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xf29e, .a=0x34, .x=0xed, .y=0x2f, .sp=0xf0, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xf29e, .value=0xd0}, {.addr=0xf29f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf2a0, .a=0x34, .x=0xed, .y=0x2f, .sp=0xf0, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xf29e, .value=0xd0}, {.addr=0xf29f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf29e, .value=0xd0, .type=IO_READ},
        {.addr=0xf29f, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x98d8, .a=0xf3, .x=0xd9, .y=0xa5, .sp=0xc2, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x98d8, .value=0xd0}, {.addr=0x98d9, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x98da, .a=0xf3, .x=0xd9, .y=0xa5, .sp=0xc2, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x98d8, .value=0xd0}, {.addr=0x98d9, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x98d8, .value=0xd0, .type=IO_READ},
        {.addr=0x98d9, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xb711, .a=0xab, .x=0x59, .y=0x11, .sp=0xa4, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xb711, .value=0xd0}, {.addr=0xb712, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xb70d, .a=0xab, .x=0x59, .y=0x11, .sp=0xa4, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb711, .value=0xd0}, {.addr=0xb712, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xb711, .value=0xd0, .type=IO_READ},
        {.addr=0xb712, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xd2ba, .a=0x3b, .x=0xd9, .y=0xf2, .sp=0xd7, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd2ba, .value=0xd0}, {.addr=0xd2bb, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xd2df, .a=0x3b, .x=0xd9, .y=0xf2, .sp=0xd7, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd2ba, .value=0xd0}, {.addr=0xd2bb, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xd2ba, .value=0xd0, .type=IO_READ},
        {.addr=0xd2bb, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x97ad, .a=0x44, .x=0xcb, .y=0x0f, .sp=0x38, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x97ad, .value=0xd0}, {.addr=0x97ae, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x97af, .a=0x44, .x=0xcb, .y=0x0f, .sp=0x38, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x97ad, .value=0xd0}, {.addr=0x97ae, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x97ad, .value=0xd0, .type=IO_READ},
        {.addr=0x97ae, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x71fa, .a=0x71, .x=0xba, .y=0x07, .sp=0x3f, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x71fa, .value=0xd0}, {.addr=0x71fb, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x71fc, .a=0x71, .x=0xba, .y=0x07, .sp=0x3f, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x71fa, .value=0xd0}, {.addr=0x71fb, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x71fa, .value=0xd0, .type=IO_READ},
        {.addr=0x71fb, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x5ec1, .a=0x64, .x=0xe7, .y=0xdb, .sp=0xb3, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec1, .value=0xd0}, {.addr=0x5ec2, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x5ec3, .a=0x64, .x=0xe7, .y=0xdb, .sp=0xb3, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x5ec1, .value=0xd0}, {.addr=0x5ec2, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x5ec1, .value=0xd0, .type=IO_READ},
        {.addr=0x5ec2, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x01b0, .a=0xb0, .x=0x6b, .y=0x1e, .sp=0x75, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xd0}, {.addr=0x01b1, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x01a2, .a=0xb0, .x=0x6b, .y=0x1e, .sp=0x75, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xd0}, {.addr=0x01b1, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x01b0, .value=0xd0, .type=IO_READ},
        {.addr=0x01b1, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xdd0c, .a=0x0c, .x=0x29, .y=0x81, .sp=0xdb, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xdd0c, .value=0xd0}, {.addr=0xdd0d, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xdd0e, .a=0x0c, .x=0x29, .y=0x81, .sp=0xdb, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xdd0c, .value=0xd0}, {.addr=0xdd0d, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xdd0c, .value=0xd0, .type=IO_READ},
        {.addr=0xdd0d, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xbfae, .a=0xc8, .x=0x68, .y=0xc3, .sp=0xf0, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xbfae, .value=0xd0}, {.addr=0xbfaf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xbfb0, .a=0xc8, .x=0x68, .y=0xc3, .sp=0xf0, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xbfae, .value=0xd0}, {.addr=0xbfaf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xbfae, .value=0xd0, .type=IO_READ},
        {.addr=0xbfaf, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x10fc, .a=0xad, .x=0x99, .y=0x88, .sp=0x43, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x10fc, .value=0xd0}, {.addr=0x10fd, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x10ec, .a=0xad, .x=0x99, .y=0x88, .sp=0x43, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x10fc, .value=0xd0}, {.addr=0x10fd, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x10fc, .value=0xd0, .type=IO_READ},
        {.addr=0x10fd, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x5a29, .a=0x67, .x=0x1b, .y=0xbc, .sp=0x48, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x5a29, .value=0xd0}, {.addr=0x5a2a, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x59d5, .a=0x67, .x=0x1b, .y=0xbc, .sp=0x48, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5a29, .value=0xd0}, {.addr=0x5a2a, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x5a29, .value=0xd0, .type=IO_READ},
        {.addr=0x5a2a, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x04a0, .a=0xba, .x=0x11, .y=0x4a, .sp=0xa4, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x04a0, .value=0xd0}, {.addr=0x04a1, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x04a2, .a=0xba, .x=0x11, .y=0x4a, .sp=0xa4, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x04a0, .value=0xd0}, {.addr=0x04a1, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x04a0, .value=0xd0, .type=IO_READ},
        {.addr=0x04a1, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x3cc9, .a=0x41, .x=0x52, .y=0x89, .sp=0xd2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x3cc9, .value=0xd0}, {.addr=0x3cca, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x3cd3, .a=0x41, .x=0x52, .y=0x89, .sp=0xd2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3cc9, .value=0xd0}, {.addr=0x3cca, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x3cc9, .value=0xd0, .type=IO_READ},
        {.addr=0x3cca, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xf7fe, .a=0x18, .x=0x11, .y=0x1e, .sp=0x89, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xf7fe, .value=0xd0}, {.addr=0xf7ff, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xf7f5, .a=0x18, .x=0x11, .y=0x1e, .sp=0x89, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xf7fe, .value=0xd0}, {.addr=0xf7ff, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xf7fe, .value=0xd0, .type=IO_READ},
        {.addr=0xf7ff, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x677a, .a=0xc8, .x=0x9b, .y=0x18, .sp=0x5f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x677a, .value=0xd0}, {.addr=0x677b, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x677c, .a=0xc8, .x=0x9b, .y=0x18, .sp=0x5f, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x677a, .value=0xd0}, {.addr=0x677b, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x677a, .value=0xd0, .type=IO_READ},
        {.addr=0x677b, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xfaa6, .a=0xbc, .x=0x91, .y=0x70, .sp=0x69, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xfaa6, .value=0xd0}, {.addr=0xfaa7, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xfa38, .a=0xbc, .x=0x91, .y=0x70, .sp=0x69, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xfaa6, .value=0xd0}, {.addr=0xfaa7, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xfaa6, .value=0xd0, .type=IO_READ},
        {.addr=0xfaa7, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xa342, .a=0x8c, .x=0x0f, .y=0xe3, .sp=0xd0, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xa342, .value=0xd0}, {.addr=0xa343, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xa344, .a=0x8c, .x=0x0f, .y=0xe3, .sp=0xd0, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xa342, .value=0xd0}, {.addr=0xa343, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xa342, .value=0xd0, .type=IO_READ},
        {.addr=0xa343, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x508e, .a=0xa4, .x=0x08, .y=0x78, .sp=0xa3, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x508e, .value=0xd0}, {.addr=0x508f, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x5090, .a=0xa4, .x=0x08, .y=0x78, .sp=0xa3, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x508e, .value=0xd0}, {.addr=0x508f, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x508e, .value=0xd0, .type=IO_READ},
        {.addr=0x508f, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x4a29, .a=0x96, .x=0x32, .y=0x9d, .sp=0x8f, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x4a29, .value=0xd0}, {.addr=0x4a2a, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x4a2b, .a=0x96, .x=0x32, .y=0x9d, .sp=0x8f, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x4a29, .value=0xd0}, {.addr=0x4a2a, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x4a29, .value=0xd0, .type=IO_READ},
        {.addr=0x4a2a, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x84e7, .a=0x49, .x=0x9c, .y=0x0b, .sp=0xd3, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x84e7, .value=0xd0}, {.addr=0x84e8, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x84e9, .a=0x49, .x=0x9c, .y=0x0b, .sp=0xd3, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x84e7, .value=0xd0}, {.addr=0x84e8, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x84e7, .value=0xd0, .type=IO_READ},
        {.addr=0x84e8, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x019e, .a=0xde, .x=0x26, .y=0x76, .sp=0x46, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xd0}, {.addr=0x019f, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x021f, .a=0xde, .x=0x26, .y=0x76, .sp=0x46, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xd0}, {.addr=0x019f, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x019e, .value=0xd0, .type=IO_READ},
        {.addr=0x019f, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xb27d, .a=0x8e, .x=0x10, .y=0xc9, .sp=0x2b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xb27d, .value=0xd0}, {.addr=0xb27e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb225, .a=0x8e, .x=0x10, .y=0xc9, .sp=0x2b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb27d, .value=0xd0}, {.addr=0xb27e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb27d, .value=0xd0, .type=IO_READ},
        {.addr=0xb27e, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xb80a, .a=0xdb, .x=0x9d, .y=0x19, .sp=0x00, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xb80a, .value=0xd0}, {.addr=0xb80b, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xb7fb, .a=0xdb, .x=0x9d, .y=0x19, .sp=0x00, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb80a, .value=0xd0}, {.addr=0xb80b, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xb80a, .value=0xd0, .type=IO_READ},
        {.addr=0xb80b, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x1a38, .a=0x57, .x=0xb8, .y=0x6f, .sp=0x6c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x1a38, .value=0xd0}, {.addr=0x1a39, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x1a04, .a=0x57, .x=0xb8, .y=0x6f, .sp=0x6c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1a38, .value=0xd0}, {.addr=0x1a39, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x1a38, .value=0xd0, .type=IO_READ},
        {.addr=0x1a39, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x2ff3, .a=0x5d, .x=0x32, .y=0xe5, .sp=0x9d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x2ff3, .value=0xd0}, {.addr=0x2ff4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2ff5, .a=0x5d, .x=0x32, .y=0xe5, .sp=0x9d, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x2ff3, .value=0xd0}, {.addr=0x2ff4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2ff3, .value=0xd0, .type=IO_READ},
        {.addr=0x2ff4, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x89bf, .a=0x28, .x=0x02, .y=0x75, .sp=0x64, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x89bf, .value=0xd0}, {.addr=0x89c0, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x89c1, .a=0x28, .x=0x02, .y=0x75, .sp=0x64, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x89bf, .value=0xd0}, {.addr=0x89c0, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x89bf, .value=0xd0, .type=IO_READ},
        {.addr=0x89c0, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x7f03, .a=0x19, .x=0xf5, .y=0xd7, .sp=0xe9, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x7f03, .value=0xd0}, {.addr=0x7f04, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7f05, .a=0x19, .x=0xf5, .y=0xd7, .sp=0xe9, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x7f03, .value=0xd0}, {.addr=0x7f04, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7f03, .value=0xd0, .type=IO_READ},
        {.addr=0x7f04, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x101a, .a=0x1a, .x=0x5c, .y=0x3d, .sp=0x9e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x101a, .value=0xd0}, {.addr=0x101b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x101c, .a=0x1a, .x=0x5c, .y=0x3d, .sp=0x9e, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x101a, .value=0xd0}, {.addr=0x101b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x101a, .value=0xd0, .type=IO_READ},
        {.addr=0x101b, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xd9e6, .a=0xae, .x=0x20, .y=0x25, .sp=0x05, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xd9e6, .value=0xd0}, {.addr=0xd9e7, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xda4c, .a=0xae, .x=0x20, .y=0x25, .sp=0x05, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd9e6, .value=0xd0}, {.addr=0xd9e7, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xd9e6, .value=0xd0, .type=IO_READ},
        {.addr=0xd9e7, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xd533, .a=0xd8, .x=0x5d, .y=0x5b, .sp=0x84, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd533, .value=0xd0}, {.addr=0xd534, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xd535, .a=0xd8, .x=0x5d, .y=0x5b, .sp=0x84, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xd533, .value=0xd0}, {.addr=0xd534, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xd533, .value=0xd0, .type=IO_READ},
        {.addr=0xd534, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x35e5, .a=0x82, .x=0xe3, .y=0xd1, .sp=0x4c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x35e5, .value=0xd0}, {.addr=0x35e6, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x35e7, .a=0x82, .x=0xe3, .y=0xd1, .sp=0x4c, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x35e5, .value=0xd0}, {.addr=0x35e6, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x35e5, .value=0xd0, .type=IO_READ},
        {.addr=0x35e6, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x870c, .a=0x67, .x=0xb0, .y=0x88, .sp=0x87, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x870c, .value=0xd0}, {.addr=0x870d, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x8713, .a=0x67, .x=0xb0, .y=0x88, .sp=0x87, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x870c, .value=0xd0}, {.addr=0x870d, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x870c, .value=0xd0, .type=IO_READ},
        {.addr=0x870d, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xe9b6, .a=0xba, .x=0xd3, .y=0x14, .sp=0x18, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xe9b6, .value=0xd0}, {.addr=0xe9b7, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xe9b3, .a=0xba, .x=0xd3, .y=0x14, .sp=0x18, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe9b6, .value=0xd0}, {.addr=0xe9b7, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xe9b6, .value=0xd0, .type=IO_READ},
        {.addr=0xe9b7, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x81e8, .a=0xbd, .x=0x3d, .y=0x83, .sp=0xbe, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x81e8, .value=0xd0}, {.addr=0x81e9, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x81fd, .a=0xbd, .x=0x3d, .y=0x83, .sp=0xbe, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x81e8, .value=0xd0}, {.addr=0x81e9, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x81e8, .value=0xd0, .type=IO_READ},
        {.addr=0x81e9, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xe1e8, .a=0x26, .x=0x81, .y=0x15, .sp=0x3e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe1e8, .value=0xd0}, {.addr=0xe1e9, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xe1ea, .a=0x26, .x=0x81, .y=0x15, .sp=0x3e, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xe1e8, .value=0xd0}, {.addr=0xe1e9, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xe1e8, .value=0xd0, .type=IO_READ},
        {.addr=0xe1e9, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x7e59, .a=0x9b, .x=0xaa, .y=0xe1, .sp=0xcc, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x7e59, .value=0xd0}, {.addr=0x7e5a, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x7ea6, .a=0x9b, .x=0xaa, .y=0xe1, .sp=0xcc, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x7e59, .value=0xd0}, {.addr=0x7e5a, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x7e59, .value=0xd0, .type=IO_READ},
        {.addr=0x7e5a, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x2c12, .a=0x9f, .x=0x0e, .y=0x60, .sp=0x5a, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x2c12, .value=0xd0}, {.addr=0x2c13, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x2c21, .a=0x9f, .x=0x0e, .y=0x60, .sp=0x5a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2c12, .value=0xd0}, {.addr=0x2c13, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x2c12, .value=0xd0, .type=IO_READ},
        {.addr=0x2c13, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xf355, .a=0xf1, .x=0xa4, .y=0x15, .sp=0x26, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xf355, .value=0xd0}, {.addr=0xf356, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xf2f9, .a=0xf1, .x=0xa4, .y=0x15, .sp=0x26, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xf355, .value=0xd0}, {.addr=0xf356, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xf355, .value=0xd0, .type=IO_READ},
        {.addr=0xf356, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xa0fa, .a=0xd1, .x=0x1c, .y=0xd7, .sp=0xf6, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xa0fa, .value=0xd0}, {.addr=0xa0fb, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xa10e, .a=0xd1, .x=0x1c, .y=0xd7, .sp=0xf6, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa0fa, .value=0xd0}, {.addr=0xa0fb, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xa0fa, .value=0xd0, .type=IO_READ},
        {.addr=0xa0fb, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x0d0a, .a=0x73, .x=0xc7, .y=0xe8, .sp=0x85, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0d0a, .value=0xd0}, {.addr=0x0d0b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0d88, .a=0x73, .x=0xc7, .y=0xe8, .sp=0x85, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0d0a, .value=0xd0}, {.addr=0x0d0b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0d0a, .value=0xd0, .type=IO_READ},
        {.addr=0x0d0b, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x7969, .a=0x93, .x=0x13, .y=0xc6, .sp=0x9c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7969, .value=0xd0}, {.addr=0x796a, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x796b, .a=0x93, .x=0x13, .y=0xc6, .sp=0x9c, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x7969, .value=0xd0}, {.addr=0x796a, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x7969, .value=0xd0, .type=IO_READ},
        {.addr=0x796a, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xb0a5, .a=0x55, .x=0xec, .y=0xa4, .sp=0x21, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xb0a5, .value=0xd0}, {.addr=0xb0a6, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xb067, .a=0x55, .x=0xec, .y=0xa4, .sp=0x21, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb0a5, .value=0xd0}, {.addr=0xb0a6, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xb0a5, .value=0xd0, .type=IO_READ},
        {.addr=0xb0a6, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x76b0, .a=0xcb, .x=0xb3, .y=0xa3, .sp=0x23, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x76b0, .value=0xd0}, {.addr=0x76b1, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x76b2, .a=0xcb, .x=0xb3, .y=0xa3, .sp=0x23, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x76b0, .value=0xd0}, {.addr=0x76b1, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x76b0, .value=0xd0, .type=IO_READ},
        {.addr=0x76b1, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x063b, .a=0x4a, .x=0xda, .y=0x42, .sp=0x20, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x063b, .value=0xd0}, {.addr=0x063c, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x063d, .a=0x4a, .x=0xda, .y=0x42, .sp=0x20, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x063b, .value=0xd0}, {.addr=0x063c, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x063b, .value=0xd0, .type=IO_READ},
        {.addr=0x063c, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x8036, .a=0xef, .x=0xb1, .y=0x15, .sp=0x4c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x8036, .value=0xd0}, {.addr=0x8037, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8038, .a=0xef, .x=0xb1, .y=0x15, .sp=0x4c, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x8036, .value=0xd0}, {.addr=0x8037, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8036, .value=0xd0, .type=IO_READ},
        {.addr=0x8037, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xd17e, .a=0xc8, .x=0x7f, .y=0x70, .sp=0x7f, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xd17e, .value=0xd0}, {.addr=0xd17f, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xd18e, .a=0xc8, .x=0x7f, .y=0x70, .sp=0x7f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd17e, .value=0xd0}, {.addr=0xd17f, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xd17e, .value=0xd0, .type=IO_READ},
        {.addr=0xd17f, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x552b, .a=0xdb, .x=0x7c, .y=0x6a, .sp=0x8a, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x552b, .value=0xd0}, {.addr=0x552c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x552d, .a=0xdb, .x=0x7c, .y=0x6a, .sp=0x8a, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x552b, .value=0xd0}, {.addr=0x552c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x552b, .value=0xd0, .type=IO_READ},
        {.addr=0x552c, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x94ec, .a=0x3e, .x=0x34, .y=0x61, .sp=0x90, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x94ec, .value=0xd0}, {.addr=0x94ed, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x94eb, .a=0x3e, .x=0x34, .y=0x61, .sp=0x90, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x94ec, .value=0xd0}, {.addr=0x94ed, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x94ec, .value=0xd0, .type=IO_READ},
        {.addr=0x94ed, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x5908, .a=0x42, .x=0x0d, .y=0x5c, .sp=0xbc, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x5908, .value=0xd0}, {.addr=0x5909, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x590a, .a=0x42, .x=0x0d, .y=0x5c, .sp=0xbc, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x5908, .value=0xd0}, {.addr=0x5909, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x5908, .value=0xd0, .type=IO_READ},
        {.addr=0x5909, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xef32, .a=0x2f, .x=0xdc, .y=0xa6, .sp=0x20, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xef32, .value=0xd0}, {.addr=0xef33, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xef6c, .a=0x2f, .x=0xdc, .y=0xa6, .sp=0x20, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xef32, .value=0xd0}, {.addr=0xef33, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xef32, .value=0xd0, .type=IO_READ},
        {.addr=0xef33, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x886b, .a=0xe5, .x=0xd2, .y=0xdc, .sp=0x4a, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x886b, .value=0xd0}, {.addr=0x886c, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x886d, .a=0xe5, .x=0xd2, .y=0xdc, .sp=0x4a, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x886b, .value=0xd0}, {.addr=0x886c, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x886b, .value=0xd0, .type=IO_READ},
        {.addr=0x886c, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x7b6b, .a=0x97, .x=0x7e, .y=0x21, .sp=0xe9, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x7b6b, .value=0xd0}, {.addr=0x7b6c, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x7ba6, .a=0x97, .x=0x7e, .y=0x21, .sp=0xe9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x7b6b, .value=0xd0}, {.addr=0x7b6c, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x7b6b, .value=0xd0, .type=IO_READ},
        {.addr=0x7b6c, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x1cc4, .a=0x4a, .x=0x92, .y=0x60, .sp=0xa2, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x1cc4, .value=0xd0}, {.addr=0x1cc5, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x1cc6, .a=0x4a, .x=0x92, .y=0x60, .sp=0xa2, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x1cc4, .value=0xd0}, {.addr=0x1cc5, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x1cc4, .value=0xd0, .type=IO_READ},
        {.addr=0x1cc5, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x365e, .a=0xa5, .x=0xa5, .y=0x9e, .sp=0xc9, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x365e, .value=0xd0}, {.addr=0x365f, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x35f9, .a=0xa5, .x=0xa5, .y=0x9e, .sp=0xc9, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x365e, .value=0xd0}, {.addr=0x365f, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x365e, .value=0xd0, .type=IO_READ},
        {.addr=0x365f, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xb57a, .a=0x4e, .x=0x62, .y=0x55, .sp=0xac, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xb57a, .value=0xd0}, {.addr=0xb57b, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xb57c, .a=0x4e, .x=0x62, .y=0x55, .sp=0xac, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xb57a, .value=0xd0}, {.addr=0xb57b, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xb57a, .value=0xd0, .type=IO_READ},
        {.addr=0xb57b, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x8b6c, .a=0xd3, .x=0xd0, .y=0x1b, .sp=0x4d, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8b6c, .value=0xd0}, {.addr=0x8b6d, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x8b86, .a=0xd3, .x=0xd0, .y=0x1b, .sp=0x4d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8b6c, .value=0xd0}, {.addr=0x8b6d, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x8b6c, .value=0xd0, .type=IO_READ},
        {.addr=0x8b6d, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x38d5, .a=0x16, .x=0xa3, .y=0x33, .sp=0x6a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x38d5, .value=0xd0}, {.addr=0x38d6, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x385c, .a=0x16, .x=0xa3, .y=0x33, .sp=0x6a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x38d5, .value=0xd0}, {.addr=0x38d6, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x38d5, .value=0xd0, .type=IO_READ},
        {.addr=0x38d6, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xfae6, .a=0x0e, .x=0xfa, .y=0x0a, .sp=0x5c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xfae6, .value=0xd0}, {.addr=0xfae7, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xfae8, .a=0x0e, .x=0xfa, .y=0x0a, .sp=0x5c, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xfae6, .value=0xd0}, {.addr=0xfae7, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xfae6, .value=0xd0, .type=IO_READ},
        {.addr=0xfae7, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x9d5e, .a=0x3f, .x=0xa0, .y=0xd1, .sp=0xc4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x9d5e, .value=0xd0}, {.addr=0x9d5f, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x9da1, .a=0x3f, .x=0xa0, .y=0xd1, .sp=0xc4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x9d5e, .value=0xd0}, {.addr=0x9d5f, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x9d5e, .value=0xd0, .type=IO_READ},
        {.addr=0x9d5f, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xff1a, .a=0x39, .x=0x98, .y=0x09, .sp=0xeb, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xff1a, .value=0xd0}, {.addr=0xff1b, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xff1c, .a=0x39, .x=0x98, .y=0x09, .sp=0xeb, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xff1a, .value=0xd0}, {.addr=0xff1b, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xff1a, .value=0xd0, .type=IO_READ},
        {.addr=0xff1b, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x005f, .a=0xec, .x=0xdf, .y=0xec, .sp=0x06, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0xd0}, {.addr=0x0060, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x0006, .a=0xec, .x=0xdf, .y=0xec, .sp=0x06, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0xd0}, {.addr=0x0060, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x005f, .value=0xd0, .type=IO_READ},
        {.addr=0x0060, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xac44, .a=0x01, .x=0xe8, .y=0x62, .sp=0x6f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xac44, .value=0xd0}, {.addr=0xac45, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xac46, .a=0x01, .x=0xe8, .y=0x62, .sp=0x6f, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xac44, .value=0xd0}, {.addr=0xac45, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xac44, .value=0xd0, .type=IO_READ},
        {.addr=0xac45, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x6e24, .a=0xd2, .x=0x5d, .y=0x3e, .sp=0x00, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x6e24, .value=0xd0}, {.addr=0x6e25, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x6e26, .a=0xd2, .x=0x5d, .y=0x3e, .sp=0x00, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x6e24, .value=0xd0}, {.addr=0x6e25, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x6e24, .value=0xd0, .type=IO_READ},
        {.addr=0x6e25, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x095f, .a=0xe0, .x=0x4f, .y=0xd4, .sp=0x57, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x095f, .value=0xd0}, {.addr=0x0960, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x08fb, .a=0xe0, .x=0x4f, .y=0xd4, .sp=0x57, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x095f, .value=0xd0}, {.addr=0x0960, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x095f, .value=0xd0, .type=IO_READ},
        {.addr=0x0960, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x7057, .a=0x9b, .x=0xde, .y=0x7e, .sp=0xd0, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x7057, .value=0xd0}, {.addr=0x7058, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x7059, .a=0x9b, .x=0xde, .y=0x7e, .sp=0xd0, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x7057, .value=0xd0}, {.addr=0x7058, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x7057, .value=0xd0, .type=IO_READ},
        {.addr=0x7058, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x99be, .a=0xf8, .x=0x03, .y=0xdf, .sp=0xa9, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x99be, .value=0xd0}, {.addr=0x99bf, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x99c0, .a=0xf8, .x=0x03, .y=0xdf, .sp=0xa9, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x99be, .value=0xd0}, {.addr=0x99bf, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x99be, .value=0xd0, .type=IO_READ},
        {.addr=0x99bf, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xf82e, .a=0xaf, .x=0x86, .y=0x56, .sp=0x90, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xf82e, .value=0xd0}, {.addr=0xf82f, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xf830, .a=0xaf, .x=0x86, .y=0x56, .sp=0x90, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xf82e, .value=0xd0}, {.addr=0xf82f, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xf82e, .value=0xd0, .type=IO_READ},
        {.addr=0xf82f, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xa021, .a=0x36, .x=0xf2, .y=0xf2, .sp=0x69, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa021, .value=0xd0}, {.addr=0xa022, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xa023, .a=0x36, .x=0xf2, .y=0xf2, .sp=0x69, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xa021, .value=0xd0}, {.addr=0xa022, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xa021, .value=0xd0, .type=IO_READ},
        {.addr=0xa022, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xdc3b, .a=0x08, .x=0x6f, .y=0x1e, .sp=0x02, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xdc3b, .value=0xd0}, {.addr=0xdc3c, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xdc3d, .a=0x08, .x=0x6f, .y=0x1e, .sp=0x02, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xdc3b, .value=0xd0}, {.addr=0xdc3c, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xdc3b, .value=0xd0, .type=IO_READ},
        {.addr=0xdc3c, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xb60a, .a=0x6a, .x=0xe3, .y=0x51, .sp=0x17, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb60a, .value=0xd0}, {.addr=0xb60b, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xb685, .a=0x6a, .x=0xe3, .y=0x51, .sp=0x17, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb60a, .value=0xd0}, {.addr=0xb60b, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xb60a, .value=0xd0, .type=IO_READ},
        {.addr=0xb60b, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xef84, .a=0xa2, .x=0xb8, .y=0xfa, .sp=0xa4, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xef84, .value=0xd0}, {.addr=0xef85, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xef86, .a=0xa2, .x=0xb8, .y=0xfa, .sp=0xa4, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xef84, .value=0xd0}, {.addr=0xef85, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xef84, .value=0xd0, .type=IO_READ},
        {.addr=0xef85, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xc969, .a=0x3d, .x=0xa1, .y=0x0e, .sp=0x3d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xc969, .value=0xd0}, {.addr=0xc96a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc9a7, .a=0x3d, .x=0xa1, .y=0x0e, .sp=0x3d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc969, .value=0xd0}, {.addr=0xc96a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc969, .value=0xd0, .type=IO_READ},
        {.addr=0xc96a, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xc873, .a=0x54, .x=0xd7, .y=0x83, .sp=0x19, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xc873, .value=0xd0}, {.addr=0xc874, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xc813, .a=0x54, .x=0xd7, .y=0x83, .sp=0x19, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xc873, .value=0xd0}, {.addr=0xc874, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xc873, .value=0xd0, .type=IO_READ},
        {.addr=0xc874, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x07a4, .a=0x79, .x=0xd9, .y=0x03, .sp=0xc2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x07a4, .value=0xd0}, {.addr=0x07a5, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x0737, .a=0x79, .x=0xd9, .y=0x03, .sp=0xc2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x07a4, .value=0xd0}, {.addr=0x07a5, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x07a4, .value=0xd0, .type=IO_READ},
        {.addr=0x07a5, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xfd1c, .a=0x49, .x=0x9f, .y=0x34, .sp=0x7e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1c, .value=0xd0}, {.addr=0xfd1d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfd1e, .a=0x49, .x=0x9f, .y=0x34, .sp=0x7e, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xfd1c, .value=0xd0}, {.addr=0xfd1d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfd1c, .value=0xd0, .type=IO_READ},
        {.addr=0xfd1d, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xd987, .a=0x44, .x=0x40, .y=0x86, .sp=0x60, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xd987, .value=0xd0}, {.addr=0xd988, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xd9a4, .a=0x44, .x=0x40, .y=0x86, .sp=0x60, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd987, .value=0xd0}, {.addr=0xd988, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xd987, .value=0xd0, .type=IO_READ},
        {.addr=0xd988, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x5163, .a=0x93, .x=0x4f, .y=0xf7, .sp=0x25, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x5163, .value=0xd0}, {.addr=0x5164, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5165, .a=0x93, .x=0x4f, .y=0xf7, .sp=0x25, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x5163, .value=0xd0}, {.addr=0x5164, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5163, .value=0xd0, .type=IO_READ},
        {.addr=0x5164, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x3cf4, .a=0x87, .x=0x49, .y=0xd1, .sp=0x80, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x3cf4, .value=0xd0}, {.addr=0x3cf5, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x3cca, .a=0x87, .x=0x49, .y=0xd1, .sp=0x80, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x3cf4, .value=0xd0}, {.addr=0x3cf5, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x3cf4, .value=0xd0, .type=IO_READ},
        {.addr=0x3cf5, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x5976, .a=0xbe, .x=0xca, .y=0xb8, .sp=0x0a, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x5976, .value=0xd0}, {.addr=0x5977, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x5978, .a=0xbe, .x=0xca, .y=0xb8, .sp=0x0a, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x5976, .value=0xd0}, {.addr=0x5977, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x5976, .value=0xd0, .type=IO_READ},
        {.addr=0x5977, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x0371, .a=0x15, .x=0xc2, .y=0x2f, .sp=0x14, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0371, .value=0xd0}, {.addr=0x0372, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x03cb, .a=0x15, .x=0xc2, .y=0x2f, .sp=0x14, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0371, .value=0xd0}, {.addr=0x0372, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x0371, .value=0xd0, .type=IO_READ},
        {.addr=0x0372, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xafbf, .a=0x7d, .x=0xef, .y=0x19, .sp=0xaa, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xafbf, .value=0xd0}, {.addr=0xafc0, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xafc1, .a=0x7d, .x=0xef, .y=0x19, .sp=0xaa, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xafbf, .value=0xd0}, {.addr=0xafc0, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xafbf, .value=0xd0, .type=IO_READ},
        {.addr=0xafc0, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xa37a, .a=0xe3, .x=0x12, .y=0x1c, .sp=0x35, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xa37a, .value=0xd0}, {.addr=0xa37b, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xa36c, .a=0xe3, .x=0x12, .y=0x1c, .sp=0x35, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa37a, .value=0xd0}, {.addr=0xa37b, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xa37a, .value=0xd0, .type=IO_READ},
        {.addr=0xa37b, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x5a9b, .a=0x34, .x=0x69, .y=0xc0, .sp=0xd9, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x5a9b, .value=0xd0}, {.addr=0x5a9c, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x5b17, .a=0x34, .x=0x69, .y=0xc0, .sp=0xd9, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x5a9b, .value=0xd0}, {.addr=0x5a9c, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x5a9b, .value=0xd0, .type=IO_READ},
        {.addr=0x5a9c, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x9e5d, .a=0xc5, .x=0x7f, .y=0xe1, .sp=0xab, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x9e5d, .value=0xd0}, {.addr=0x9e5e, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x9e5f, .a=0xc5, .x=0x7f, .y=0xe1, .sp=0xab, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x9e5d, .value=0xd0}, {.addr=0x9e5e, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x9e5d, .value=0xd0, .type=IO_READ},
        {.addr=0x9e5e, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x8885, .a=0x59, .x=0x9a, .y=0x90, .sp=0xe2, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x8885, .value=0xd0}, {.addr=0x8886, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x884c, .a=0x59, .x=0x9a, .y=0x90, .sp=0xe2, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x8885, .value=0xd0}, {.addr=0x8886, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x8885, .value=0xd0, .type=IO_READ},
        {.addr=0x8886, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x9680, .a=0xf0, .x=0xc6, .y=0x6d, .sp=0xc6, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x9680, .value=0xd0}, {.addr=0x9681, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x96c5, .a=0xf0, .x=0xc6, .y=0x6d, .sp=0xc6, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9680, .value=0xd0}, {.addr=0x9681, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x9680, .value=0xd0, .type=IO_READ},
        {.addr=0x9681, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x6b71, .a=0xe0, .x=0xc0, .y=0x0c, .sp=0xb1, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x6b71, .value=0xd0}, {.addr=0x6b72, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x6b73, .a=0xe0, .x=0xc0, .y=0x0c, .sp=0xb1, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x6b71, .value=0xd0}, {.addr=0x6b72, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x6b71, .value=0xd0, .type=IO_READ},
        {.addr=0x6b72, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xd402, .a=0x32, .x=0x3d, .y=0xfe, .sp=0x76, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xd402, .value=0xd0}, {.addr=0xd403, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xd434, .a=0x32, .x=0x3d, .y=0xfe, .sp=0x76, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd402, .value=0xd0}, {.addr=0xd403, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xd402, .value=0xd0, .type=IO_READ},
        {.addr=0xd403, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x3522, .a=0x41, .x=0xc4, .y=0x11, .sp=0xd6, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x3522, .value=0xd0}, {.addr=0x3523, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x3554, .a=0x41, .x=0xc4, .y=0x11, .sp=0xd6, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3522, .value=0xd0}, {.addr=0x3523, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x3522, .value=0xd0, .type=IO_READ},
        {.addr=0x3523, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0100) {
    const struct CPU_State initial_cpu = {.pc=0x4764, .a=0x9c, .x=0x19, .y=0x62, .sp=0xaa, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x4764, .value=0xd0}, {.addr=0x4765, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x46eb, .a=0x9c, .x=0x19, .y=0x62, .sp=0xaa, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4764, .value=0xd0}, {.addr=0x4765, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x4764, .value=0xd0, .type=IO_READ},
        {.addr=0x4765, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0101) {
    const struct CPU_State initial_cpu = {.pc=0xdd77, .a=0x69, .x=0xc7, .y=0xdc, .sp=0x52, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xdd77, .value=0xd0}, {.addr=0xdd78, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xdd79, .a=0x69, .x=0xc7, .y=0xdc, .sp=0x52, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xdd77, .value=0xd0}, {.addr=0xdd78, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xdd77, .value=0xd0, .type=IO_READ},
        {.addr=0xdd78, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0102) {
    const struct CPU_State initial_cpu = {.pc=0x7291, .a=0xae, .x=0x12, .y=0x8e, .sp=0x45, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x7291, .value=0xd0}, {.addr=0x7292, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x7293, .a=0xae, .x=0x12, .y=0x8e, .sp=0x45, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x7291, .value=0xd0}, {.addr=0x7292, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x7291, .value=0xd0, .type=IO_READ},
        {.addr=0x7292, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0103) {
    const struct CPU_State initial_cpu = {.pc=0x98f3, .a=0x96, .x=0x51, .y=0xa0, .sp=0x31, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x98f3, .value=0xd0}, {.addr=0x98f4, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x9889, .a=0x96, .x=0x51, .y=0xa0, .sp=0x31, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x98f3, .value=0xd0}, {.addr=0x98f4, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x98f3, .value=0xd0, .type=IO_READ},
        {.addr=0x98f4, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0104) {
    const struct CPU_State initial_cpu = {.pc=0xbce8, .a=0x8f, .x=0x7f, .y=0x20, .sp=0xa9, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xbce8, .value=0xd0}, {.addr=0xbce9, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xbcea, .a=0x8f, .x=0x7f, .y=0x20, .sp=0xa9, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xbce8, .value=0xd0}, {.addr=0xbce9, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xbce8, .value=0xd0, .type=IO_READ},
        {.addr=0xbce9, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0105) {
    const struct CPU_State initial_cpu = {.pc=0x0322, .a=0xdd, .x=0x54, .y=0xa3, .sp=0x98, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0322, .value=0xd0}, {.addr=0x0323, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x02c7, .a=0xdd, .x=0x54, .y=0xa3, .sp=0x98, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0322, .value=0xd0}, {.addr=0x0323, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x0322, .value=0xd0, .type=IO_READ},
        {.addr=0x0323, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0106) {
    const struct CPU_State initial_cpu = {.pc=0xcd75, .a=0xee, .x=0x17, .y=0xf7, .sp=0xc7, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xcd75, .value=0xd0}, {.addr=0xcd76, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xcd8c, .a=0xee, .x=0x17, .y=0xf7, .sp=0xc7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xcd75, .value=0xd0}, {.addr=0xcd76, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xcd75, .value=0xd0, .type=IO_READ},
        {.addr=0xcd76, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0107) {
    const struct CPU_State initial_cpu = {.pc=0xbb2c, .a=0xc7, .x=0xa4, .y=0x76, .sp=0x15, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xbb2c, .value=0xd0}, {.addr=0xbb2d, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xbb2c, .a=0xc7, .x=0xa4, .y=0x76, .sp=0x15, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xbb2c, .value=0xd0}, {.addr=0xbb2d, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xbb2c, .value=0xd0, .type=IO_READ},
        {.addr=0xbb2d, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0108) {
    const struct CPU_State initial_cpu = {.pc=0x2e3c, .a=0x08, .x=0x34, .y=0x85, .sp=0xab, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x2e3c, .value=0xd0}, {.addr=0x2e3d, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x2e3e, .a=0x08, .x=0x34, .y=0x85, .sp=0xab, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x2e3c, .value=0xd0}, {.addr=0x2e3d, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x2e3c, .value=0xd0, .type=IO_READ},
        {.addr=0x2e3d, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0109) {
    const struct CPU_State initial_cpu = {.pc=0xb573, .a=0x29, .x=0x93, .y=0x82, .sp=0x21, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xb573, .value=0xd0}, {.addr=0xb574, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xb575, .a=0x29, .x=0x93, .y=0x82, .sp=0x21, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xb573, .value=0xd0}, {.addr=0xb574, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xb573, .value=0xd0, .type=IO_READ},
        {.addr=0xb574, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_010A) {
    const struct CPU_State initial_cpu = {.pc=0xa03d, .a=0x58, .x=0x54, .y=0x8d, .sp=0x76, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xa03d, .value=0xd0}, {.addr=0xa03e, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x9fec, .a=0x58, .x=0x54, .y=0x8d, .sp=0x76, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa03d, .value=0xd0}, {.addr=0xa03e, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xa03d, .value=0xd0, .type=IO_READ},
        {.addr=0xa03e, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_010B) {
    const struct CPU_State initial_cpu = {.pc=0xa63f, .a=0xda, .x=0xfa, .y=0x0c, .sp=0x0a, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xa63f, .value=0xd0}, {.addr=0xa640, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xa674, .a=0xda, .x=0xfa, .y=0x0c, .sp=0x0a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa63f, .value=0xd0}, {.addr=0xa640, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xa63f, .value=0xd0, .type=IO_READ},
        {.addr=0xa640, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_010C) {
    const struct CPU_State initial_cpu = {.pc=0x8976, .a=0xe3, .x=0x17, .y=0x00, .sp=0x2d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x8976, .value=0xd0}, {.addr=0x8977, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8965, .a=0xe3, .x=0x17, .y=0x00, .sp=0x2d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x8976, .value=0xd0}, {.addr=0x8977, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8976, .value=0xd0, .type=IO_READ},
        {.addr=0x8977, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_010D) {
    const struct CPU_State initial_cpu = {.pc=0xba00, .a=0x0e, .x=0xfb, .y=0x32, .sp=0xa0, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xba00, .value=0xd0}, {.addr=0xba01, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xb9f3, .a=0x0e, .x=0xfb, .y=0x32, .sp=0xa0, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xba00, .value=0xd0}, {.addr=0xba01, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xba00, .value=0xd0, .type=IO_READ},
        {.addr=0xba01, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_010E) {
    const struct CPU_State initial_cpu = {.pc=0x8b1b, .a=0x57, .x=0xe2, .y=0x02, .sp=0xef, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x8b1b, .value=0xd0}, {.addr=0x8b1c, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x8b78, .a=0x57, .x=0xe2, .y=0x02, .sp=0xef, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x8b1b, .value=0xd0}, {.addr=0x8b1c, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x8b1b, .value=0xd0, .type=IO_READ},
        {.addr=0x8b1c, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_010F) {
    const struct CPU_State initial_cpu = {.pc=0x01df, .a=0xac, .x=0x3f, .y=0x6f, .sp=0xeb, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xd0}, {.addr=0x01e0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x021d, .a=0xac, .x=0x3f, .y=0x6f, .sp=0xeb, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xd0}, {.addr=0x01e0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x01df, .value=0xd0, .type=IO_READ},
        {.addr=0x01e0, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0110) {
    const struct CPU_State initial_cpu = {.pc=0x77a6, .a=0xbe, .x=0x8e, .y=0x7d, .sp=0x85, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x77a6, .value=0xd0}, {.addr=0x77a7, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x77a8, .a=0xbe, .x=0x8e, .y=0x7d, .sp=0x85, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x77a6, .value=0xd0}, {.addr=0x77a7, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x77a6, .value=0xd0, .type=IO_READ},
        {.addr=0x77a7, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0111) {
    const struct CPU_State initial_cpu = {.pc=0x119f, .a=0x92, .x=0x05, .y=0xf5, .sp=0x6f, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x119f, .value=0xd0}, {.addr=0x11a0, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x11a1, .a=0x92, .x=0x05, .y=0xf5, .sp=0x6f, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x119f, .value=0xd0}, {.addr=0x11a0, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x119f, .value=0xd0, .type=IO_READ},
        {.addr=0x11a0, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0112) {
    const struct CPU_State initial_cpu = {.pc=0x4b37, .a=0x45, .x=0xf2, .y=0x50, .sp=0xb9, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x4b37, .value=0xd0}, {.addr=0x4b38, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x4b39, .a=0x45, .x=0xf2, .y=0x50, .sp=0xb9, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x4b37, .value=0xd0}, {.addr=0x4b38, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x4b37, .value=0xd0, .type=IO_READ},
        {.addr=0x4b38, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0113) {
    const struct CPU_State initial_cpu = {.pc=0x8e2b, .a=0xd3, .x=0x1e, .y=0x0d, .sp=0x8f, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x8e2b, .value=0xd0}, {.addr=0x8e2c, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x8e2d, .a=0xd3, .x=0x1e, .y=0x0d, .sp=0x8f, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x8e2b, .value=0xd0}, {.addr=0x8e2c, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x8e2b, .value=0xd0, .type=IO_READ},
        {.addr=0x8e2c, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0114) {
    const struct CPU_State initial_cpu = {.pc=0x9dd9, .a=0xae, .x=0x4b, .y=0xc6, .sp=0xb4, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd9, .value=0xd0}, {.addr=0x9dda, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x9ddb, .a=0xae, .x=0x4b, .y=0xc6, .sp=0xb4, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x9dd9, .value=0xd0}, {.addr=0x9dda, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x9dd9, .value=0xd0, .type=IO_READ},
        {.addr=0x9dda, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0115) {
    const struct CPU_State initial_cpu = {.pc=0xb950, .a=0x5b, .x=0xa7, .y=0x87, .sp=0x73, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xb950, .value=0xd0}, {.addr=0xb951, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xb925, .a=0x5b, .x=0xa7, .y=0x87, .sp=0x73, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb950, .value=0xd0}, {.addr=0xb951, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xb950, .value=0xd0, .type=IO_READ},
        {.addr=0xb951, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0116) {
    const struct CPU_State initial_cpu = {.pc=0x46a8, .a=0xb4, .x=0x44, .y=0xbe, .sp=0x0b, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x46a8, .value=0xd0}, {.addr=0x46a9, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x46aa, .a=0xb4, .x=0x44, .y=0xbe, .sp=0x0b, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x46a8, .value=0xd0}, {.addr=0x46a9, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x46a8, .value=0xd0, .type=IO_READ},
        {.addr=0x46a9, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0117) {
    const struct CPU_State initial_cpu = {.pc=0xc8cd, .a=0x78, .x=0xef, .y=0x3b, .sp=0x81, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xc8cd, .value=0xd0}, {.addr=0xc8ce, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xc8f1, .a=0x78, .x=0xef, .y=0x3b, .sp=0x81, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xc8cd, .value=0xd0}, {.addr=0xc8ce, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xc8cd, .value=0xd0, .type=IO_READ},
        {.addr=0xc8ce, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0118) {
    const struct CPU_State initial_cpu = {.pc=0xecc0, .a=0x4b, .x=0x6a, .y=0xbb, .sp=0xdf, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xecc0, .value=0xd0}, {.addr=0xecc1, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xecc2, .a=0x4b, .x=0x6a, .y=0xbb, .sp=0xdf, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xecc0, .value=0xd0}, {.addr=0xecc1, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xecc0, .value=0xd0, .type=IO_READ},
        {.addr=0xecc1, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0119) {
    const struct CPU_State initial_cpu = {.pc=0xb8ea, .a=0x1c, .x=0x91, .y=0x05, .sp=0x06, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xb8ea, .value=0xd0}, {.addr=0xb8eb, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xb8ec, .a=0x1c, .x=0x91, .y=0x05, .sp=0x06, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xb8ea, .value=0xd0}, {.addr=0xb8eb, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xb8ea, .value=0xd0, .type=IO_READ},
        {.addr=0xb8eb, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_011A) {
    const struct CPU_State initial_cpu = {.pc=0xf05b, .a=0xba, .x=0x91, .y=0x63, .sp=0xb4, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xf05b, .value=0xd0}, {.addr=0xf05c, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xf05d, .a=0xba, .x=0x91, .y=0x63, .sp=0xb4, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xf05b, .value=0xd0}, {.addr=0xf05c, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xf05b, .value=0xd0, .type=IO_READ},
        {.addr=0xf05c, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_011B) {
    const struct CPU_State initial_cpu = {.pc=0xd155, .a=0xc8, .x=0xd2, .y=0x7a, .sp=0x81, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xd155, .value=0xd0}, {.addr=0xd156, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xd157, .a=0xc8, .x=0xd2, .y=0x7a, .sp=0x81, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xd155, .value=0xd0}, {.addr=0xd156, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xd155, .value=0xd0, .type=IO_READ},
        {.addr=0xd156, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_011C) {
    const struct CPU_State initial_cpu = {.pc=0xec55, .a=0xa4, .x=0x6a, .y=0x15, .sp=0x73, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xec55, .value=0xd0}, {.addr=0xec56, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xec4d, .a=0xa4, .x=0x6a, .y=0x15, .sp=0x73, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xec55, .value=0xd0}, {.addr=0xec56, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xec55, .value=0xd0, .type=IO_READ},
        {.addr=0xec56, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_011D) {
    const struct CPU_State initial_cpu = {.pc=0xe8a8, .a=0x50, .x=0x6f, .y=0x96, .sp=0xac, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xe8a8, .value=0xd0}, {.addr=0xe8a9, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xe89d, .a=0x50, .x=0x6f, .y=0x96, .sp=0xac, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe8a8, .value=0xd0}, {.addr=0xe8a9, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xe8a8, .value=0xd0, .type=IO_READ},
        {.addr=0xe8a9, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_011E) {
    const struct CPU_State initial_cpu = {.pc=0x515c, .a=0xe0, .x=0xdb, .y=0xdb, .sp=0x2d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x515c, .value=0xd0}, {.addr=0x515d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x515e, .a=0xe0, .x=0xdb, .y=0xdb, .sp=0x2d, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x515c, .value=0xd0}, {.addr=0x515d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x515c, .value=0xd0, .type=IO_READ},
        {.addr=0x515d, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_011F) {
    const struct CPU_State initial_cpu = {.pc=0xc411, .a=0xc9, .x=0x42, .y=0xa3, .sp=0xdf, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xc411, .value=0xd0}, {.addr=0xc412, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xc462, .a=0xc9, .x=0x42, .y=0xa3, .sp=0xdf, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc411, .value=0xd0}, {.addr=0xc412, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xc411, .value=0xd0, .type=IO_READ},
        {.addr=0xc412, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0120) {
    const struct CPU_State initial_cpu = {.pc=0xdd73, .a=0x91, .x=0x76, .y=0x7a, .sp=0xab, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xdd73, .value=0xd0}, {.addr=0xdd74, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdd75, .a=0x91, .x=0x76, .y=0x7a, .sp=0xab, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xdd73, .value=0xd0}, {.addr=0xdd74, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdd73, .value=0xd0, .type=IO_READ},
        {.addr=0xdd74, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0121) {
    const struct CPU_State initial_cpu = {.pc=0xdae3, .a=0xf6, .x=0x54, .y=0x1d, .sp=0x86, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xdae3, .value=0xd0}, {.addr=0xdae4, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xda7d, .a=0xf6, .x=0x54, .y=0x1d, .sp=0x86, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xdae3, .value=0xd0}, {.addr=0xdae4, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xdae3, .value=0xd0, .type=IO_READ},
        {.addr=0xdae4, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0122) {
    const struct CPU_State initial_cpu = {.pc=0xe73c, .a=0xf1, .x=0x70, .y=0x71, .sp=0x48, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xe73c, .value=0xd0}, {.addr=0xe73d, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xe6cd, .a=0xf1, .x=0x70, .y=0x71, .sp=0x48, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xe73c, .value=0xd0}, {.addr=0xe73d, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xe73c, .value=0xd0, .type=IO_READ},
        {.addr=0xe73d, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0123) {
    const struct CPU_State initial_cpu = {.pc=0xe9e9, .a=0x11, .x=0x17, .y=0x31, .sp=0x7c, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xe9e9, .value=0xd0}, {.addr=0xe9ea, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xea49, .a=0x11, .x=0x17, .y=0x31, .sp=0x7c, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xe9e9, .value=0xd0}, {.addr=0xe9ea, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xe9e9, .value=0xd0, .type=IO_READ},
        {.addr=0xe9ea, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0124) {
    const struct CPU_State initial_cpu = {.pc=0x2573, .a=0x54, .x=0xc3, .y=0x7a, .sp=0xb7, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x2573, .value=0xd0}, {.addr=0x2574, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x24fd, .a=0x54, .x=0xc3, .y=0x7a, .sp=0xb7, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2573, .value=0xd0}, {.addr=0x2574, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x2573, .value=0xd0, .type=IO_READ},
        {.addr=0x2574, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0125) {
    const struct CPU_State initial_cpu = {.pc=0x7fa6, .a=0x80, .x=0xf4, .y=0x14, .sp=0x24, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x7fa6, .value=0xd0}, {.addr=0x7fa7, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x800a, .a=0x80, .x=0xf4, .y=0x14, .sp=0x24, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7fa6, .value=0xd0}, {.addr=0x7fa7, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x7fa6, .value=0xd0, .type=IO_READ},
        {.addr=0x7fa7, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0126) {
    const struct CPU_State initial_cpu = {.pc=0xb687, .a=0xd9, .x=0xff, .y=0x8d, .sp=0xaa, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xb687, .value=0xd0}, {.addr=0xb688, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xb6ad, .a=0xd9, .x=0xff, .y=0x8d, .sp=0xaa, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb687, .value=0xd0}, {.addr=0xb688, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xb687, .value=0xd0, .type=IO_READ},
        {.addr=0xb688, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0127) {
    const struct CPU_State initial_cpu = {.pc=0xd959, .a=0x94, .x=0x5e, .y=0x97, .sp=0x36, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xd959, .value=0xd0}, {.addr=0xd95a, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xd95b, .a=0x94, .x=0x5e, .y=0x97, .sp=0x36, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xd959, .value=0xd0}, {.addr=0xd95a, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xd959, .value=0xd0, .type=IO_READ},
        {.addr=0xd95a, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0128) {
    const struct CPU_State initial_cpu = {.pc=0x8b22, .a=0x83, .x=0x72, .y=0x13, .sp=0x3e, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x8b22, .value=0xd0}, {.addr=0x8b23, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x8aeb, .a=0x83, .x=0x72, .y=0x13, .sp=0x3e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8b22, .value=0xd0}, {.addr=0x8b23, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x8b22, .value=0xd0, .type=IO_READ},
        {.addr=0x8b23, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0129) {
    const struct CPU_State initial_cpu = {.pc=0x50bd, .a=0x95, .x=0xdd, .y=0xdb, .sp=0xe6, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x50bd, .value=0xd0}, {.addr=0x50be, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x50bf, .a=0x95, .x=0xdd, .y=0xdb, .sp=0xe6, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x50bd, .value=0xd0}, {.addr=0x50be, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x50bd, .value=0xd0, .type=IO_READ},
        {.addr=0x50be, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_012A) {
    const struct CPU_State initial_cpu = {.pc=0x8ca3, .a=0x53, .x=0xc5, .y=0xcc, .sp=0x11, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x8ca3, .value=0xd0}, {.addr=0x8ca4, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x8cfe, .a=0x53, .x=0xc5, .y=0xcc, .sp=0x11, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x8ca3, .value=0xd0}, {.addr=0x8ca4, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x8ca3, .value=0xd0, .type=IO_READ},
        {.addr=0x8ca4, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_012B) {
    const struct CPU_State initial_cpu = {.pc=0x6b69, .a=0x25, .x=0x49, .y=0xc8, .sp=0xde, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x6b69, .value=0xd0}, {.addr=0x6b6a, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x6b6b, .a=0x25, .x=0x49, .y=0xc8, .sp=0xde, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x6b69, .value=0xd0}, {.addr=0x6b6a, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x6b69, .value=0xd0, .type=IO_READ},
        {.addr=0x6b6a, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_012C) {
    const struct CPU_State initial_cpu = {.pc=0x7adf, .a=0x59, .x=0xa5, .y=0xdb, .sp=0x35, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x7adf, .value=0xd0}, {.addr=0x7ae0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7ace, .a=0x59, .x=0xa5, .y=0xdb, .sp=0x35, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7adf, .value=0xd0}, {.addr=0x7ae0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7adf, .value=0xd0, .type=IO_READ},
        {.addr=0x7ae0, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_012D) {
    const struct CPU_State initial_cpu = {.pc=0x973f, .a=0xd6, .x=0xc1, .y=0xf7, .sp=0xc5, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x973f, .value=0xd0}, {.addr=0x9740, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x97ba, .a=0xd6, .x=0xc1, .y=0xf7, .sp=0xc5, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x973f, .value=0xd0}, {.addr=0x9740, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x973f, .value=0xd0, .type=IO_READ},
        {.addr=0x9740, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_012E) {
    const struct CPU_State initial_cpu = {.pc=0x5e03, .a=0xf6, .x=0x78, .y=0xa2, .sp=0x24, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x5e03, .value=0xd0}, {.addr=0x5e04, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x5e05, .a=0xf6, .x=0x78, .y=0xa2, .sp=0x24, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x5e03, .value=0xd0}, {.addr=0x5e04, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x5e03, .value=0xd0, .type=IO_READ},
        {.addr=0x5e04, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_012F) {
    const struct CPU_State initial_cpu = {.pc=0xcc34, .a=0x8c, .x=0xb2, .y=0x92, .sp=0xe1, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xcc34, .value=0xd0}, {.addr=0xcc35, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcc36, .a=0x8c, .x=0xb2, .y=0x92, .sp=0xe1, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xcc34, .value=0xd0}, {.addr=0xcc35, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcc34, .value=0xd0, .type=IO_READ},
        {.addr=0xcc35, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0130) {
    const struct CPU_State initial_cpu = {.pc=0xb958, .a=0x1b, .x=0x84, .y=0x20, .sp=0x73, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xb958, .value=0xd0}, {.addr=0xb959, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xb8ee, .a=0x1b, .x=0x84, .y=0x20, .sp=0x73, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xb958, .value=0xd0}, {.addr=0xb959, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xb958, .value=0xd0, .type=IO_READ},
        {.addr=0xb959, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0131) {
    const struct CPU_State initial_cpu = {.pc=0x8e76, .a=0x4c, .x=0x47, .y=0x3d, .sp=0xd2, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x8e76, .value=0xd0}, {.addr=0x8e77, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x8e78, .a=0x4c, .x=0x47, .y=0x3d, .sp=0xd2, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x8e76, .value=0xd0}, {.addr=0x8e77, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x8e76, .value=0xd0, .type=IO_READ},
        {.addr=0x8e77, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0132) {
    const struct CPU_State initial_cpu = {.pc=0xc085, .a=0x6d, .x=0xdc, .y=0xee, .sp=0x7b, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xc085, .value=0xd0}, {.addr=0xc086, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xc096, .a=0x6d, .x=0xdc, .y=0xee, .sp=0x7b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc085, .value=0xd0}, {.addr=0xc086, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xc085, .value=0xd0, .type=IO_READ},
        {.addr=0xc086, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0133) {
    const struct CPU_State initial_cpu = {.pc=0x0199, .a=0xa7, .x=0xcb, .y=0x59, .sp=0x41, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xd0}, {.addr=0x019a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x019b, .a=0xa7, .x=0xcb, .y=0x59, .sp=0x41, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xd0}, {.addr=0x019a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0199, .value=0xd0, .type=IO_READ},
        {.addr=0x019a, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0134) {
    const struct CPU_State initial_cpu = {.pc=0x3f06, .a=0x3f, .x=0x41, .y=0x99, .sp=0x15, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x3f06, .value=0xd0}, {.addr=0x3f07, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x3eeb, .a=0x3f, .x=0x41, .y=0x99, .sp=0x15, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x3f06, .value=0xd0}, {.addr=0x3f07, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x3f06, .value=0xd0, .type=IO_READ},
        {.addr=0x3f07, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0135) {
    const struct CPU_State initial_cpu = {.pc=0x6c18, .a=0xd9, .x=0x90, .y=0x79, .sp=0x26, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x6c18, .value=0xd0}, {.addr=0x6c19, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x6c1a, .a=0xd9, .x=0x90, .y=0x79, .sp=0x26, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x6c18, .value=0xd0}, {.addr=0x6c19, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x6c18, .value=0xd0, .type=IO_READ},
        {.addr=0x6c19, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0136) {
    const struct CPU_State initial_cpu = {.pc=0xbe20, .a=0x30, .x=0x1a, .y=0xeb, .sp=0xb7, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xbe20, .value=0xd0}, {.addr=0xbe21, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xbe22, .a=0x30, .x=0x1a, .y=0xeb, .sp=0xb7, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xbe20, .value=0xd0}, {.addr=0xbe21, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xbe20, .value=0xd0, .type=IO_READ},
        {.addr=0xbe21, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0137) {
    const struct CPU_State initial_cpu = {.pc=0xdf96, .a=0x6c, .x=0x47, .y=0x7c, .sp=0xd5, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xdf96, .value=0xd0}, {.addr=0xdf97, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xdfaa, .a=0x6c, .x=0x47, .y=0x7c, .sp=0xd5, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xdf96, .value=0xd0}, {.addr=0xdf97, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xdf96, .value=0xd0, .type=IO_READ},
        {.addr=0xdf97, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0138) {
    const struct CPU_State initial_cpu = {.pc=0xa233, .a=0x28, .x=0x39, .y=0x52, .sp=0x2c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xa233, .value=0xd0}, {.addr=0xa234, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa25b, .a=0x28, .x=0x39, .y=0x52, .sp=0x2c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa233, .value=0xd0}, {.addr=0xa234, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa233, .value=0xd0, .type=IO_READ},
        {.addr=0xa234, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0139) {
    const struct CPU_State initial_cpu = {.pc=0x63e4, .a=0x1d, .x=0x3d, .y=0x31, .sp=0x0d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x63e4, .value=0xd0}, {.addr=0x63e5, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x6396, .a=0x1d, .x=0x3d, .y=0x31, .sp=0x0d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x63e4, .value=0xd0}, {.addr=0x63e5, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x63e4, .value=0xd0, .type=IO_READ},
        {.addr=0x63e5, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_013A) {
    const struct CPU_State initial_cpu = {.pc=0x17fb, .a=0x65, .x=0xb1, .y=0x48, .sp=0x92, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x17fb, .value=0xd0}, {.addr=0x17fc, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x17fd, .a=0x65, .x=0xb1, .y=0x48, .sp=0x92, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x17fb, .value=0xd0}, {.addr=0x17fc, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x17fb, .value=0xd0, .type=IO_READ},
        {.addr=0x17fc, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_013B) {
    const struct CPU_State initial_cpu = {.pc=0x399f, .a=0x23, .x=0x21, .y=0xf5, .sp=0x26, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x399f, .value=0xd0}, {.addr=0x39a0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x394f, .a=0x23, .x=0x21, .y=0xf5, .sp=0x26, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x399f, .value=0xd0}, {.addr=0x39a0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x399f, .value=0xd0, .type=IO_READ},
        {.addr=0x39a0, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_013C) {
    const struct CPU_State initial_cpu = {.pc=0x1627, .a=0xec, .x=0xde, .y=0xdc, .sp=0x8f, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x1627, .value=0xd0}, {.addr=0x1628, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x1630, .a=0xec, .x=0xde, .y=0xdc, .sp=0x8f, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x1627, .value=0xd0}, {.addr=0x1628, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x1627, .value=0xd0, .type=IO_READ},
        {.addr=0x1628, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_013D) {
    const struct CPU_State initial_cpu = {.pc=0xf5f9, .a=0xef, .x=0x1e, .y=0x0e, .sp=0x03, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xf5f9, .value=0xd0}, {.addr=0xf5fa, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xf5fb, .a=0xef, .x=0x1e, .y=0x0e, .sp=0x03, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xf5f9, .value=0xd0}, {.addr=0xf5fa, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xf5f9, .value=0xd0, .type=IO_READ},
        {.addr=0xf5fa, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_013E) {
    const struct CPU_State initial_cpu = {.pc=0xda0d, .a=0x98, .x=0x7d, .y=0x0c, .sp=0xbe, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xda0d, .value=0xd0}, {.addr=0xda0e, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xda0f, .a=0x98, .x=0x7d, .y=0x0c, .sp=0xbe, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xda0d, .value=0xd0}, {.addr=0xda0e, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xda0d, .value=0xd0, .type=IO_READ},
        {.addr=0xda0e, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_013F) {
    const struct CPU_State initial_cpu = {.pc=0x1ed3, .a=0x4f, .x=0x25, .y=0x0d, .sp=0xb7, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x1ed3, .value=0xd0}, {.addr=0x1ed4, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x1f0d, .a=0x4f, .x=0x25, .y=0x0d, .sp=0xb7, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1ed3, .value=0xd0}, {.addr=0x1ed4, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x1ed3, .value=0xd0, .type=IO_READ},
        {.addr=0x1ed4, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0140) {
    const struct CPU_State initial_cpu = {.pc=0x1b9f, .a=0xc4, .x=0xed, .y=0xf4, .sp=0xdd, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x1b9f, .value=0xd0}, {.addr=0x1ba0, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x1ba1, .a=0xc4, .x=0xed, .y=0xf4, .sp=0xdd, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x1b9f, .value=0xd0}, {.addr=0x1ba0, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x1b9f, .value=0xd0, .type=IO_READ},
        {.addr=0x1ba0, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0141) {
    const struct CPU_State initial_cpu = {.pc=0xd198, .a=0x2c, .x=0xb1, .y=0xcb, .sp=0x78, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xd198, .value=0xd0}, {.addr=0xd199, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xd19a, .a=0x2c, .x=0xb1, .y=0xcb, .sp=0x78, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xd198, .value=0xd0}, {.addr=0xd199, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xd198, .value=0xd0, .type=IO_READ},
        {.addr=0xd199, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0142) {
    const struct CPU_State initial_cpu = {.pc=0x6b88, .a=0x14, .x=0x61, .y=0xd4, .sp=0x20, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x6b88, .value=0xd0}, {.addr=0x6b89, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x6bb3, .a=0x14, .x=0x61, .y=0xd4, .sp=0x20, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6b88, .value=0xd0}, {.addr=0x6b89, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x6b88, .value=0xd0, .type=IO_READ},
        {.addr=0x6b89, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0143) {
    const struct CPU_State initial_cpu = {.pc=0x86e4, .a=0x7a, .x=0x9f, .y=0x9e, .sp=0x57, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x86e4, .value=0xd0}, {.addr=0x86e5, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x86e6, .a=0x7a, .x=0x9f, .y=0x9e, .sp=0x57, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x86e4, .value=0xd0}, {.addr=0x86e5, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x86e4, .value=0xd0, .type=IO_READ},
        {.addr=0x86e5, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0144) {
    const struct CPU_State initial_cpu = {.pc=0xa8d5, .a=0x5f, .x=0x1a, .y=0xa3, .sp=0xed, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xa8d5, .value=0xd0}, {.addr=0xa8d6, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xa8d7, .a=0x5f, .x=0x1a, .y=0xa3, .sp=0xed, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xa8d5, .value=0xd0}, {.addr=0xa8d6, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xa8d5, .value=0xd0, .type=IO_READ},
        {.addr=0xa8d6, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0145) {
    const struct CPU_State initial_cpu = {.pc=0x7cc5, .a=0xbc, .x=0x04, .y=0xba, .sp=0x9d, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x7cc5, .value=0xd0}, {.addr=0x7cc6, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x7cc7, .a=0xbc, .x=0x04, .y=0xba, .sp=0x9d, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x7cc5, .value=0xd0}, {.addr=0x7cc6, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x7cc5, .value=0xd0, .type=IO_READ},
        {.addr=0x7cc6, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0146) {
    const struct CPU_State initial_cpu = {.pc=0x31f3, .a=0x02, .x=0x5a, .y=0xfc, .sp=0xcf, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x31f3, .value=0xd0}, {.addr=0x31f4, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x325e, .a=0x02, .x=0x5a, .y=0xfc, .sp=0xcf, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x31f3, .value=0xd0}, {.addr=0x31f4, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x31f3, .value=0xd0, .type=IO_READ},
        {.addr=0x31f4, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0147) {
    const struct CPU_State initial_cpu = {.pc=0xe4f1, .a=0x67, .x=0x01, .y=0x98, .sp=0x25, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xe4f1, .value=0xd0}, {.addr=0xe4f2, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xe4f3, .a=0x67, .x=0x01, .y=0x98, .sp=0x25, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xe4f1, .value=0xd0}, {.addr=0xe4f2, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xe4f1, .value=0xd0, .type=IO_READ},
        {.addr=0xe4f2, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0148) {
    const struct CPU_State initial_cpu = {.pc=0xd108, .a=0x58, .x=0x5d, .y=0x7a, .sp=0x64, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xd108, .value=0xd0}, {.addr=0xd109, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd10a, .a=0x58, .x=0x5d, .y=0x7a, .sp=0x64, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xd108, .value=0xd0}, {.addr=0xd109, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd108, .value=0xd0, .type=IO_READ},
        {.addr=0xd109, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0149) {
    const struct CPU_State initial_cpu = {.pc=0x430c, .a=0x60, .x=0x44, .y=0xbf, .sp=0xa8, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x430c, .value=0xd0}, {.addr=0x430d, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x4304, .a=0x60, .x=0x44, .y=0xbf, .sp=0xa8, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x430c, .value=0xd0}, {.addr=0x430d, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x430c, .value=0xd0, .type=IO_READ},
        {.addr=0x430d, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_014A) {
    const struct CPU_State initial_cpu = {.pc=0x6166, .a=0x75, .x=0x2b, .y=0x18, .sp=0x99, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x6166, .value=0xd0}, {.addr=0x6167, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x6168, .a=0x75, .x=0x2b, .y=0x18, .sp=0x99, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x6166, .value=0xd0}, {.addr=0x6167, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x6166, .value=0xd0, .type=IO_READ},
        {.addr=0x6167, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_014B) {
    const struct CPU_State initial_cpu = {.pc=0xc54f, .a=0x44, .x=0xfb, .y=0xee, .sp=0x80, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xc54f, .value=0xd0}, {.addr=0xc550, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xc551, .a=0x44, .x=0xfb, .y=0xee, .sp=0x80, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xc54f, .value=0xd0}, {.addr=0xc550, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xc54f, .value=0xd0, .type=IO_READ},
        {.addr=0xc550, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_014C) {
    const struct CPU_State initial_cpu = {.pc=0x960e, .a=0x19, .x=0x2c, .y=0x97, .sp=0x01, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x960e, .value=0xd0}, {.addr=0x960f, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x9610, .a=0x19, .x=0x2c, .y=0x97, .sp=0x01, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x960e, .value=0xd0}, {.addr=0x960f, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x960e, .value=0xd0, .type=IO_READ},
        {.addr=0x960f, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_014D) {
    const struct CPU_State initial_cpu = {.pc=0x64dd, .a=0x7f, .x=0xc8, .y=0x72, .sp=0x8c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x64dd, .value=0xd0}, {.addr=0x64de, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x64a7, .a=0x7f, .x=0xc8, .y=0x72, .sp=0x8c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x64dd, .value=0xd0}, {.addr=0x64de, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x64dd, .value=0xd0, .type=IO_READ},
        {.addr=0x64de, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_014E) {
    const struct CPU_State initial_cpu = {.pc=0xf566, .a=0x26, .x=0x58, .y=0x0b, .sp=0xbe, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xf566, .value=0xd0}, {.addr=0xf567, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xf521, .a=0x26, .x=0x58, .y=0x0b, .sp=0xbe, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xf566, .value=0xd0}, {.addr=0xf567, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xf566, .value=0xd0, .type=IO_READ},
        {.addr=0xf567, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_014F) {
    const struct CPU_State initial_cpu = {.pc=0xf35d, .a=0x69, .x=0xfb, .y=0xe4, .sp=0x88, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xf35d, .value=0xd0}, {.addr=0xf35e, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xf35f, .a=0x69, .x=0xfb, .y=0xe4, .sp=0x88, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xf35d, .value=0xd0}, {.addr=0xf35e, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xf35d, .value=0xd0, .type=IO_READ},
        {.addr=0xf35e, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0150) {
    const struct CPU_State initial_cpu = {.pc=0x8b8a, .a=0x96, .x=0x07, .y=0x35, .sp=0x01, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x8b8a, .value=0xd0}, {.addr=0x8b8b, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x8b8c, .a=0x96, .x=0x07, .y=0x35, .sp=0x01, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x8b8a, .value=0xd0}, {.addr=0x8b8b, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x8b8a, .value=0xd0, .type=IO_READ},
        {.addr=0x8b8b, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0151) {
    const struct CPU_State initial_cpu = {.pc=0x8002, .a=0xe0, .x=0xa3, .y=0x36, .sp=0x15, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x8002, .value=0xd0}, {.addr=0x8003, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x8004, .a=0xe0, .x=0xa3, .y=0x36, .sp=0x15, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x8002, .value=0xd0}, {.addr=0x8003, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x8002, .value=0xd0, .type=IO_READ},
        {.addr=0x8003, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0152) {
    const struct CPU_State initial_cpu = {.pc=0x3329, .a=0xd6, .x=0x0a, .y=0xba, .sp=0x1f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x3329, .value=0xd0}, {.addr=0x332a, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x332b, .a=0xd6, .x=0x0a, .y=0xba, .sp=0x1f, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x3329, .value=0xd0}, {.addr=0x332a, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x3329, .value=0xd0, .type=IO_READ},
        {.addr=0x332a, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0153) {
    const struct CPU_State initial_cpu = {.pc=0xcf2c, .a=0xf8, .x=0x26, .y=0x4d, .sp=0xed, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xcf2c, .value=0xd0}, {.addr=0xcf2d, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xcf2e, .a=0xf8, .x=0x26, .y=0x4d, .sp=0xed, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xcf2c, .value=0xd0}, {.addr=0xcf2d, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xcf2c, .value=0xd0, .type=IO_READ},
        {.addr=0xcf2d, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0154) {
    const struct CPU_State initial_cpu = {.pc=0x9459, .a=0x2d, .x=0x0d, .y=0x9c, .sp=0xea, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x9459, .value=0xd0}, {.addr=0x945a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x94b7, .a=0x2d, .x=0x0d, .y=0x9c, .sp=0xea, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x9459, .value=0xd0}, {.addr=0x945a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9459, .value=0xd0, .type=IO_READ},
        {.addr=0x945a, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0155) {
    const struct CPU_State initial_cpu = {.pc=0xd2b2, .a=0xb1, .x=0x01, .y=0x34, .sp=0xb8, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xd2b2, .value=0xd0}, {.addr=0xd2b3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd2b4, .a=0xb1, .x=0x01, .y=0x34, .sp=0xb8, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xd2b2, .value=0xd0}, {.addr=0xd2b3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd2b2, .value=0xd0, .type=IO_READ},
        {.addr=0xd2b3, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0156) {
    const struct CPU_State initial_cpu = {.pc=0x87ab, .a=0x09, .x=0xf7, .y=0xe2, .sp=0xa4, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x87ab, .value=0xd0}, {.addr=0x87ac, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x87dc, .a=0x09, .x=0xf7, .y=0xe2, .sp=0xa4, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x87ab, .value=0xd0}, {.addr=0x87ac, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x87ab, .value=0xd0, .type=IO_READ},
        {.addr=0x87ac, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0157) {
    const struct CPU_State initial_cpu = {.pc=0xdc3b, .a=0xdf, .x=0x67, .y=0xd5, .sp=0x9d, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xdc3b, .value=0xd0}, {.addr=0xdc3c, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xdc3d, .a=0xdf, .x=0x67, .y=0xd5, .sp=0x9d, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xdc3b, .value=0xd0}, {.addr=0xdc3c, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xdc3b, .value=0xd0, .type=IO_READ},
        {.addr=0xdc3c, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0158) {
    const struct CPU_State initial_cpu = {.pc=0x6e33, .a=0x78, .x=0xd8, .y=0x83, .sp=0xc8, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x6e33, .value=0xd0}, {.addr=0x6e34, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x6e35, .a=0x78, .x=0xd8, .y=0x83, .sp=0xc8, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x6e33, .value=0xd0}, {.addr=0x6e34, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x6e33, .value=0xd0, .type=IO_READ},
        {.addr=0x6e34, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0159) {
    const struct CPU_State initial_cpu = {.pc=0x9e6b, .a=0x22, .x=0x92, .y=0xe7, .sp=0x18, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x9e6b, .value=0xd0}, {.addr=0x9e6c, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x9df4, .a=0x22, .x=0x92, .y=0xe7, .sp=0x18, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9e6b, .value=0xd0}, {.addr=0x9e6c, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x9e6b, .value=0xd0, .type=IO_READ},
        {.addr=0x9e6c, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_015A) {
    const struct CPU_State initial_cpu = {.pc=0xff1a, .a=0x01, .x=0x19, .y=0x20, .sp=0x7c, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xff1a, .value=0xd0}, {.addr=0xff1b, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xff1c, .a=0x01, .x=0x19, .y=0x20, .sp=0x7c, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xff1a, .value=0xd0}, {.addr=0xff1b, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xff1a, .value=0xd0, .type=IO_READ},
        {.addr=0xff1b, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_015B) {
    const struct CPU_State initial_cpu = {.pc=0x43c4, .a=0x07, .x=0x5c, .y=0xb5, .sp=0xcc, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x43c4, .value=0xd0}, {.addr=0x43c5, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x43c6, .a=0x07, .x=0x5c, .y=0xb5, .sp=0xcc, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x43c4, .value=0xd0}, {.addr=0x43c5, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x43c4, .value=0xd0, .type=IO_READ},
        {.addr=0x43c5, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_015C) {
    const struct CPU_State initial_cpu = {.pc=0x8480, .a=0xdc, .x=0xba, .y=0x20, .sp=0xc2, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x8480, .value=0xd0}, {.addr=0x8481, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x84b5, .a=0xdc, .x=0xba, .y=0x20, .sp=0xc2, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8480, .value=0xd0}, {.addr=0x8481, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x8480, .value=0xd0, .type=IO_READ},
        {.addr=0x8481, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_015D) {
    const struct CPU_State initial_cpu = {.pc=0x23b9, .a=0xf3, .x=0xf1, .y=0x8a, .sp=0xe1, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x23b9, .value=0xd0}, {.addr=0x23ba, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x23ab, .a=0xf3, .x=0xf1, .y=0x8a, .sp=0xe1, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x23b9, .value=0xd0}, {.addr=0x23ba, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x23b9, .value=0xd0, .type=IO_READ},
        {.addr=0x23ba, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_015E) {
    const struct CPU_State initial_cpu = {.pc=0x1570, .a=0x83, .x=0x6f, .y=0x5d, .sp=0x63, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x1570, .value=0xd0}, {.addr=0x1571, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x15ec, .a=0x83, .x=0x6f, .y=0x5d, .sp=0x63, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1570, .value=0xd0}, {.addr=0x1571, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x1570, .value=0xd0, .type=IO_READ},
        {.addr=0x1571, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_015F) {
    const struct CPU_State initial_cpu = {.pc=0x26de, .a=0x71, .x=0x72, .y=0x98, .sp=0x75, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x26de, .value=0xd0}, {.addr=0x26df, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x26e0, .a=0x71, .x=0x72, .y=0x98, .sp=0x75, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x26de, .value=0xd0}, {.addr=0x26df, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x26de, .value=0xd0, .type=IO_READ},
        {.addr=0x26df, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0160) {
    const struct CPU_State initial_cpu = {.pc=0xb09e, .a=0x65, .x=0xc0, .y=0x4c, .sp=0x60, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xb09e, .value=0xd0}, {.addr=0xb09f, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xb0f0, .a=0x65, .x=0xc0, .y=0x4c, .sp=0x60, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xb09e, .value=0xd0}, {.addr=0xb09f, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xb09e, .value=0xd0, .type=IO_READ},
        {.addr=0xb09f, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0161) {
    const struct CPU_State initial_cpu = {.pc=0x2cb2, .a=0xd0, .x=0x37, .y=0x6c, .sp=0xac, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x2cb2, .value=0xd0}, {.addr=0x2cb3, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x2cb4, .a=0xd0, .x=0x37, .y=0x6c, .sp=0xac, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x2cb2, .value=0xd0}, {.addr=0x2cb3, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x2cb2, .value=0xd0, .type=IO_READ},
        {.addr=0x2cb3, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0162) {
    const struct CPU_State initial_cpu = {.pc=0x956e, .a=0xf0, .x=0x6d, .y=0x27, .sp=0xe4, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x956e, .value=0xd0}, {.addr=0x956f, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x9570, .a=0xf0, .x=0x6d, .y=0x27, .sp=0xe4, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x956e, .value=0xd0}, {.addr=0x956f, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x956e, .value=0xd0, .type=IO_READ},
        {.addr=0x956f, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0163) {
    const struct CPU_State initial_cpu = {.pc=0xeaf5, .a=0x24, .x=0x24, .y=0xff, .sp=0xff, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xeaf5, .value=0xd0}, {.addr=0xeaf6, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xea9b, .a=0x24, .x=0x24, .y=0xff, .sp=0xff, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xeaf5, .value=0xd0}, {.addr=0xeaf6, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xeaf5, .value=0xd0, .type=IO_READ},
        {.addr=0xeaf6, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0164) {
    const struct CPU_State initial_cpu = {.pc=0x069b, .a=0x5e, .x=0xec, .y=0xd7, .sp=0x5f, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x069b, .value=0xd0}, {.addr=0x069c, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x069d, .a=0x5e, .x=0xec, .y=0xd7, .sp=0x5f, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x069b, .value=0xd0}, {.addr=0x069c, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x069b, .value=0xd0, .type=IO_READ},
        {.addr=0x069c, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0165) {
    const struct CPU_State initial_cpu = {.pc=0xaf13, .a=0x57, .x=0x7b, .y=0x0e, .sp=0xa3, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xaf13, .value=0xd0}, {.addr=0xaf14, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xaf15, .a=0x57, .x=0x7b, .y=0x0e, .sp=0xa3, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xaf13, .value=0xd0}, {.addr=0xaf14, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xaf13, .value=0xd0, .type=IO_READ},
        {.addr=0xaf14, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0166) {
    const struct CPU_State initial_cpu = {.pc=0xa388, .a=0xfc, .x=0xef, .y=0x78, .sp=0x1c, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xa388, .value=0xd0}, {.addr=0xa389, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa38a, .a=0xfc, .x=0xef, .y=0x78, .sp=0x1c, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xa388, .value=0xd0}, {.addr=0xa389, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa388, .value=0xd0, .type=IO_READ},
        {.addr=0xa389, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0167) {
    const struct CPU_State initial_cpu = {.pc=0x5189, .a=0xec, .x=0x9e, .y=0x51, .sp=0x3f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x5189, .value=0xd0}, {.addr=0x518a, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x518b, .a=0xec, .x=0x9e, .y=0x51, .sp=0x3f, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x5189, .value=0xd0}, {.addr=0x518a, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x5189, .value=0xd0, .type=IO_READ},
        {.addr=0x518a, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0168) {
    const struct CPU_State initial_cpu = {.pc=0x4a2a, .a=0xbf, .x=0x1c, .y=0x21, .sp=0xeb, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x4a2a, .value=0xd0}, {.addr=0x4a2b, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x4a6f, .a=0xbf, .x=0x1c, .y=0x21, .sp=0xeb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4a2a, .value=0xd0}, {.addr=0x4a2b, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x4a2a, .value=0xd0, .type=IO_READ},
        {.addr=0x4a2b, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0169) {
    const struct CPU_State initial_cpu = {.pc=0xab48, .a=0xa9, .x=0x1e, .y=0x57, .sp=0x5d, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xab48, .value=0xd0}, {.addr=0xab49, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xab4a, .a=0xa9, .x=0x1e, .y=0x57, .sp=0x5d, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xab48, .value=0xd0}, {.addr=0xab49, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xab48, .value=0xd0, .type=IO_READ},
        {.addr=0xab49, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_016A) {
    const struct CPU_State initial_cpu = {.pc=0xd240, .a=0x1f, .x=0x6d, .y=0x4d, .sp=0x76, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd240, .value=0xd0}, {.addr=0xd241, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd242, .a=0x1f, .x=0x6d, .y=0x4d, .sp=0x76, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xd240, .value=0xd0}, {.addr=0xd241, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd240, .value=0xd0, .type=IO_READ},
        {.addr=0xd241, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_016B) {
    const struct CPU_State initial_cpu = {.pc=0x4001, .a=0x8e, .x=0x05, .y=0x4c, .sp=0x52, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x4001, .value=0xd0}, {.addr=0x4002, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4069, .a=0x8e, .x=0x05, .y=0x4c, .sp=0x52, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x4001, .value=0xd0}, {.addr=0x4002, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4001, .value=0xd0, .type=IO_READ},
        {.addr=0x4002, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_016C) {
    const struct CPU_State initial_cpu = {.pc=0x0412, .a=0x5b, .x=0x05, .y=0x91, .sp=0x04, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0412, .value=0xd0}, {.addr=0x0413, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0414, .a=0x5b, .x=0x05, .y=0x91, .sp=0x04, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0412, .value=0xd0}, {.addr=0x0413, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0412, .value=0xd0, .type=IO_READ},
        {.addr=0x0413, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_016D) {
    const struct CPU_State initial_cpu = {.pc=0x092d, .a=0xcf, .x=0x5c, .y=0xab, .sp=0x1e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x092d, .value=0xd0}, {.addr=0x092e, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x092f, .a=0xcf, .x=0x5c, .y=0xab, .sp=0x1e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x092d, .value=0xd0}, {.addr=0x092e, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x092d, .value=0xd0, .type=IO_READ},
        {.addr=0x092e, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_016E) {
    const struct CPU_State initial_cpu = {.pc=0x48cd, .a=0x71, .x=0x26, .y=0x4d, .sp=0x05, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x48cd, .value=0xd0}, {.addr=0x48ce, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x48e9, .a=0x71, .x=0x26, .y=0x4d, .sp=0x05, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x48cd, .value=0xd0}, {.addr=0x48ce, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x48cd, .value=0xd0, .type=IO_READ},
        {.addr=0x48ce, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_016F) {
    const struct CPU_State initial_cpu = {.pc=0xdf59, .a=0x7f, .x=0x36, .y=0xb6, .sp=0xe8, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xdf59, .value=0xd0}, {.addr=0xdf5a, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xdf94, .a=0x7f, .x=0x36, .y=0xb6, .sp=0xe8, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xdf59, .value=0xd0}, {.addr=0xdf5a, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xdf59, .value=0xd0, .type=IO_READ},
        {.addr=0xdf5a, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0170) {
    const struct CPU_State initial_cpu = {.pc=0x4e79, .a=0xc0, .x=0xef, .y=0x1d, .sp=0xec, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x4e79, .value=0xd0}, {.addr=0x4e7a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4e7b, .a=0xc0, .x=0xef, .y=0x1d, .sp=0xec, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x4e79, .value=0xd0}, {.addr=0x4e7a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4e79, .value=0xd0, .type=IO_READ},
        {.addr=0x4e7a, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0171) {
    const struct CPU_State initial_cpu = {.pc=0x2af9, .a=0x70, .x=0x87, .y=0xdb, .sp=0x6b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x2af9, .value=0xd0}, {.addr=0x2afa, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2afb, .a=0x70, .x=0x87, .y=0xdb, .sp=0x6b, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x2af9, .value=0xd0}, {.addr=0x2afa, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2af9, .value=0xd0, .type=IO_READ},
        {.addr=0x2afa, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0172) {
    const struct CPU_State initial_cpu = {.pc=0x6587, .a=0x8a, .x=0xd5, .y=0x87, .sp=0xe4, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x6587, .value=0xd0}, {.addr=0x6588, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6589, .a=0x8a, .x=0xd5, .y=0x87, .sp=0xe4, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x6587, .value=0xd0}, {.addr=0x6588, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6587, .value=0xd0, .type=IO_READ},
        {.addr=0x6588, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0173) {
    const struct CPU_State initial_cpu = {.pc=0x6453, .a=0xd6, .x=0x2f, .y=0xe0, .sp=0x04, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x6453, .value=0xd0}, {.addr=0x6454, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x6455, .a=0xd6, .x=0x2f, .y=0xe0, .sp=0x04, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x6453, .value=0xd0}, {.addr=0x6454, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x6453, .value=0xd0, .type=IO_READ},
        {.addr=0x6454, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0174) {
    const struct CPU_State initial_cpu = {.pc=0x7a58, .a=0x26, .x=0x75, .y=0x4d, .sp=0x64, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x7a58, .value=0xd0}, {.addr=0x7a59, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x7a5a, .a=0x26, .x=0x75, .y=0x4d, .sp=0x64, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x7a58, .value=0xd0}, {.addr=0x7a59, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x7a58, .value=0xd0, .type=IO_READ},
        {.addr=0x7a59, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0175) {
    const struct CPU_State initial_cpu = {.pc=0x13ef, .a=0x98, .x=0xd2, .y=0x41, .sp=0x05, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x13ef, .value=0xd0}, {.addr=0x13f0, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x13f1, .a=0x98, .x=0xd2, .y=0x41, .sp=0x05, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x13ef, .value=0xd0}, {.addr=0x13f0, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x13ef, .value=0xd0, .type=IO_READ},
        {.addr=0x13f0, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0176) {
    const struct CPU_State initial_cpu = {.pc=0x8a21, .a=0x3c, .x=0x91, .y=0x6f, .sp=0xae, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x8a21, .value=0xd0}, {.addr=0x8a22, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x8a5b, .a=0x3c, .x=0x91, .y=0x6f, .sp=0xae, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x8a21, .value=0xd0}, {.addr=0x8a22, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x8a21, .value=0xd0, .type=IO_READ},
        {.addr=0x8a22, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0177) {
    const struct CPU_State initial_cpu = {.pc=0x20ee, .a=0x8e, .x=0x16, .y=0x13, .sp=0xcc, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x20ee, .value=0xd0}, {.addr=0x20ef, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x2129, .a=0x8e, .x=0x16, .y=0x13, .sp=0xcc, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x20ee, .value=0xd0}, {.addr=0x20ef, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x20ee, .value=0xd0, .type=IO_READ},
        {.addr=0x20ef, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0178) {
    const struct CPU_State initial_cpu = {.pc=0x868a, .a=0x21, .x=0x16, .y=0x37, .sp=0x05, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x868a, .value=0xd0}, {.addr=0x868b, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x868c, .a=0x21, .x=0x16, .y=0x37, .sp=0x05, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x868a, .value=0xd0}, {.addr=0x868b, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x868a, .value=0xd0, .type=IO_READ},
        {.addr=0x868b, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0179) {
    const struct CPU_State initial_cpu = {.pc=0x0af0, .a=0x40, .x=0xdb, .y=0x5e, .sp=0x83, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0af0, .value=0xd0}, {.addr=0x0af1, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x0a93, .a=0x40, .x=0xdb, .y=0x5e, .sp=0x83, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0af0, .value=0xd0}, {.addr=0x0af1, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x0af0, .value=0xd0, .type=IO_READ},
        {.addr=0x0af1, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_017A) {
    const struct CPU_State initial_cpu = {.pc=0xdcaf, .a=0xa9, .x=0x0c, .y=0x3a, .sp=0xf6, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xdcaf, .value=0xd0}, {.addr=0xdcb0, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xdc7e, .a=0xa9, .x=0x0c, .y=0x3a, .sp=0xf6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xdcaf, .value=0xd0}, {.addr=0xdcb0, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xdcaf, .value=0xd0, .type=IO_READ},
        {.addr=0xdcb0, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_017B) {
    const struct CPU_State initial_cpu = {.pc=0x8b06, .a=0x06, .x=0x0e, .y=0x7f, .sp=0x87, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x8b06, .value=0xd0}, {.addr=0x8b07, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x8b68, .a=0x06, .x=0x0e, .y=0x7f, .sp=0x87, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x8b06, .value=0xd0}, {.addr=0x8b07, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x8b06, .value=0xd0, .type=IO_READ},
        {.addr=0x8b07, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_017C) {
    const struct CPU_State initial_cpu = {.pc=0xf001, .a=0x84, .x=0x5c, .y=0x70, .sp=0x3b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xf001, .value=0xd0}, {.addr=0xf002, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xefbc, .a=0x84, .x=0x5c, .y=0x70, .sp=0x3b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xf001, .value=0xd0}, {.addr=0xf002, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xf001, .value=0xd0, .type=IO_READ},
        {.addr=0xf002, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_017D) {
    const struct CPU_State initial_cpu = {.pc=0x7647, .a=0x9b, .x=0x66, .y=0xeb, .sp=0x71, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x7647, .value=0xd0}, {.addr=0x7648, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x763d, .a=0x9b, .x=0x66, .y=0xeb, .sp=0x71, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x7647, .value=0xd0}, {.addr=0x7648, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x7647, .value=0xd0, .type=IO_READ},
        {.addr=0x7648, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_017E) {
    const struct CPU_State initial_cpu = {.pc=0xf2c5, .a=0x0d, .x=0x3b, .y=0xcd, .sp=0x93, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xf2c5, .value=0xd0}, {.addr=0xf2c6, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xf2c7, .a=0x0d, .x=0x3b, .y=0xcd, .sp=0x93, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xf2c5, .value=0xd0}, {.addr=0xf2c6, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xf2c5, .value=0xd0, .type=IO_READ},
        {.addr=0xf2c6, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_017F) {
    const struct CPU_State initial_cpu = {.pc=0x22d1, .a=0xbc, .x=0x42, .y=0x15, .sp=0x5d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x22d1, .value=0xd0}, {.addr=0x22d2, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x2302, .a=0xbc, .x=0x42, .y=0x15, .sp=0x5d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x22d1, .value=0xd0}, {.addr=0x22d2, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x22d1, .value=0xd0, .type=IO_READ},
        {.addr=0x22d2, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0180) {
    const struct CPU_State initial_cpu = {.pc=0x930f, .a=0xba, .x=0x7f, .y=0x9a, .sp=0xca, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x930f, .value=0xd0}, {.addr=0x9310, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9291, .a=0xba, .x=0x7f, .y=0x9a, .sp=0xca, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x930f, .value=0xd0}, {.addr=0x9310, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x930f, .value=0xd0, .type=IO_READ},
        {.addr=0x9310, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0181) {
    const struct CPU_State initial_cpu = {.pc=0x46a1, .a=0x07, .x=0x7a, .y=0x8e, .sp=0x33, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x46a1, .value=0xd0}, {.addr=0x46a2, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x4713, .a=0x07, .x=0x7a, .y=0x8e, .sp=0x33, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x46a1, .value=0xd0}, {.addr=0x46a2, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x46a1, .value=0xd0, .type=IO_READ},
        {.addr=0x46a2, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0182) {
    const struct CPU_State initial_cpu = {.pc=0xe511, .a=0x4e, .x=0x14, .y=0x75, .sp=0xa1, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xe511, .value=0xd0}, {.addr=0xe512, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xe513, .a=0x4e, .x=0x14, .y=0x75, .sp=0xa1, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xe511, .value=0xd0}, {.addr=0xe512, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xe511, .value=0xd0, .type=IO_READ},
        {.addr=0xe512, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0183) {
    const struct CPU_State initial_cpu = {.pc=0x5fe3, .a=0x40, .x=0x62, .y=0x70, .sp=0x67, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe3, .value=0xd0}, {.addr=0x5fe4, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x5fe5, .a=0x40, .x=0x62, .y=0x70, .sp=0x67, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x5fe3, .value=0xd0}, {.addr=0x5fe4, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x5fe3, .value=0xd0, .type=IO_READ},
        {.addr=0x5fe4, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0184) {
    const struct CPU_State initial_cpu = {.pc=0x178c, .a=0x62, .x=0xf3, .y=0x3f, .sp=0xf8, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x178c, .value=0xd0}, {.addr=0x178d, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x1773, .a=0x62, .x=0xf3, .y=0x3f, .sp=0xf8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x178c, .value=0xd0}, {.addr=0x178d, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x178c, .value=0xd0, .type=IO_READ},
        {.addr=0x178d, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0185) {
    const struct CPU_State initial_cpu = {.pc=0xa3d2, .a=0x62, .x=0x0d, .y=0x38, .sp=0x9f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xa3d2, .value=0xd0}, {.addr=0xa3d3, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xa3d4, .a=0x62, .x=0x0d, .y=0x38, .sp=0x9f, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xa3d2, .value=0xd0}, {.addr=0xa3d3, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xa3d2, .value=0xd0, .type=IO_READ},
        {.addr=0xa3d3, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0186) {
    const struct CPU_State initial_cpu = {.pc=0x75e2, .a=0xf7, .x=0x6b, .y=0x5f, .sp=0xa2, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x75e2, .value=0xd0}, {.addr=0x75e3, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x7614, .a=0xf7, .x=0x6b, .y=0x5f, .sp=0xa2, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x75e2, .value=0xd0}, {.addr=0x75e3, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x75e2, .value=0xd0, .type=IO_READ},
        {.addr=0x75e3, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0187) {
    const struct CPU_State initial_cpu = {.pc=0x6f8f, .a=0x17, .x=0x8f, .y=0x27, .sp=0xba, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x6f8f, .value=0xd0}, {.addr=0x6f90, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x6f91, .a=0x17, .x=0x8f, .y=0x27, .sp=0xba, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x6f8f, .value=0xd0}, {.addr=0x6f90, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x6f8f, .value=0xd0, .type=IO_READ},
        {.addr=0x6f90, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0188) {
    const struct CPU_State initial_cpu = {.pc=0x504b, .a=0x00, .x=0xcb, .y=0x78, .sp=0x5b, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x504b, .value=0xd0}, {.addr=0x504c, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x504d, .a=0x00, .x=0xcb, .y=0x78, .sp=0x5b, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x504b, .value=0xd0}, {.addr=0x504c, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x504b, .value=0xd0, .type=IO_READ},
        {.addr=0x504c, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0189) {
    const struct CPU_State initial_cpu = {.pc=0x600b, .a=0xb0, .x=0x2e, .y=0x3c, .sp=0xe1, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x600b, .value=0xd0}, {.addr=0x600c, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x600d, .a=0xb0, .x=0x2e, .y=0x3c, .sp=0xe1, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x600b, .value=0xd0}, {.addr=0x600c, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x600b, .value=0xd0, .type=IO_READ},
        {.addr=0x600c, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_018A) {
    const struct CPU_State initial_cpu = {.pc=0x73d5, .a=0xab, .x=0x8c, .y=0x8d, .sp=0xbe, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x73d5, .value=0xd0}, {.addr=0x73d6, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x735b, .a=0xab, .x=0x8c, .y=0x8d, .sp=0xbe, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x73d5, .value=0xd0}, {.addr=0x73d6, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x73d5, .value=0xd0, .type=IO_READ},
        {.addr=0x73d6, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_018B) {
    const struct CPU_State initial_cpu = {.pc=0x0e94, .a=0x32, .x=0xf1, .y=0x03, .sp=0x9f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0e94, .value=0xd0}, {.addr=0x0e95, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x0e96, .a=0x32, .x=0xf1, .y=0x03, .sp=0x9f, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0e94, .value=0xd0}, {.addr=0x0e95, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x0e94, .value=0xd0, .type=IO_READ},
        {.addr=0x0e95, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_018C) {
    const struct CPU_State initial_cpu = {.pc=0xa592, .a=0x15, .x=0xf2, .y=0x9d, .sp=0x5a, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xa592, .value=0xd0}, {.addr=0xa593, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xa540, .a=0x15, .x=0xf2, .y=0x9d, .sp=0x5a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa592, .value=0xd0}, {.addr=0xa593, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xa592, .value=0xd0, .type=IO_READ},
        {.addr=0xa593, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_018D) {
    const struct CPU_State initial_cpu = {.pc=0xb310, .a=0xef, .x=0x9a, .y=0xeb, .sp=0xe6, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb310, .value=0xd0}, {.addr=0xb311, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xb354, .a=0xef, .x=0x9a, .y=0xeb, .sp=0xe6, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb310, .value=0xd0}, {.addr=0xb311, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xb310, .value=0xd0, .type=IO_READ},
        {.addr=0xb311, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_018E) {
    const struct CPU_State initial_cpu = {.pc=0x4708, .a=0xce, .x=0xfe, .y=0x22, .sp=0x23, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x4708, .value=0xd0}, {.addr=0x4709, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x470a, .a=0xce, .x=0xfe, .y=0x22, .sp=0x23, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x4708, .value=0xd0}, {.addr=0x4709, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x4708, .value=0xd0, .type=IO_READ},
        {.addr=0x4709, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_018F) {
    const struct CPU_State initial_cpu = {.pc=0x4f40, .a=0xd3, .x=0xa2, .y=0x30, .sp=0x8d, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4f40, .value=0xd0}, {.addr=0x4f41, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x4f42, .a=0xd3, .x=0xa2, .y=0x30, .sp=0x8d, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x4f40, .value=0xd0}, {.addr=0x4f41, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x4f40, .value=0xd0, .type=IO_READ},
        {.addr=0x4f41, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0190) {
    const struct CPU_State initial_cpu = {.pc=0xd57c, .a=0x11, .x=0x51, .y=0x8d, .sp=0x98, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xd57c, .value=0xd0}, {.addr=0xd57d, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xd57e, .a=0x11, .x=0x51, .y=0x8d, .sp=0x98, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xd57c, .value=0xd0}, {.addr=0xd57d, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xd57c, .value=0xd0, .type=IO_READ},
        {.addr=0xd57d, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0191) {
    const struct CPU_State initial_cpu = {.pc=0x850b, .a=0x2c, .x=0xaa, .y=0xe2, .sp=0x2f, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x850b, .value=0xd0}, {.addr=0x850c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x854d, .a=0x2c, .x=0xaa, .y=0xe2, .sp=0x2f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x850b, .value=0xd0}, {.addr=0x850c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x850b, .value=0xd0, .type=IO_READ},
        {.addr=0x850c, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0192) {
    const struct CPU_State initial_cpu = {.pc=0x068e, .a=0x75, .x=0x14, .y=0x0c, .sp=0x0d, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x068e, .value=0xd0}, {.addr=0x068f, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x0690, .a=0x75, .x=0x14, .y=0x0c, .sp=0x0d, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x068e, .value=0xd0}, {.addr=0x068f, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x068e, .value=0xd0, .type=IO_READ},
        {.addr=0x068f, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0193) {
    const struct CPU_State initial_cpu = {.pc=0xe955, .a=0x84, .x=0xdf, .y=0x51, .sp=0xaf, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xe955, .value=0xd0}, {.addr=0xe956, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xe957, .a=0x84, .x=0xdf, .y=0x51, .sp=0xaf, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xe955, .value=0xd0}, {.addr=0xe956, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xe955, .value=0xd0, .type=IO_READ},
        {.addr=0xe956, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0194) {
    const struct CPU_State initial_cpu = {.pc=0xf6d6, .a=0x46, .x=0xc0, .y=0x35, .sp=0xf5, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xf6d6, .value=0xd0}, {.addr=0xf6d7, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xf743, .a=0x46, .x=0xc0, .y=0x35, .sp=0xf5, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf6d6, .value=0xd0}, {.addr=0xf6d7, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xf6d6, .value=0xd0, .type=IO_READ},
        {.addr=0xf6d7, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0195) {
    const struct CPU_State initial_cpu = {.pc=0x3d76, .a=0x0a, .x=0xd4, .y=0xc4, .sp=0xab, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x3d76, .value=0xd0}, {.addr=0x3d77, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x3d04, .a=0x0a, .x=0xd4, .y=0xc4, .sp=0xab, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x3d76, .value=0xd0}, {.addr=0x3d77, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x3d76, .value=0xd0, .type=IO_READ},
        {.addr=0x3d77, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0196) {
    const struct CPU_State initial_cpu = {.pc=0x47e4, .a=0x0a, .x=0x58, .y=0x46, .sp=0xe2, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x47e4, .value=0xd0}, {.addr=0x47e5, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x47e6, .a=0x0a, .x=0x58, .y=0x46, .sp=0xe2, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x47e4, .value=0xd0}, {.addr=0x47e5, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x47e4, .value=0xd0, .type=IO_READ},
        {.addr=0x47e5, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0197) {
    const struct CPU_State initial_cpu = {.pc=0xee94, .a=0x8a, .x=0xfd, .y=0x40, .sp=0xbd, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xee94, .value=0xd0}, {.addr=0xee95, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xeef6, .a=0x8a, .x=0xfd, .y=0x40, .sp=0xbd, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xee94, .value=0xd0}, {.addr=0xee95, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xee94, .value=0xd0, .type=IO_READ},
        {.addr=0xee95, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0198) {
    const struct CPU_State initial_cpu = {.pc=0xa85f, .a=0x9e, .x=0xac, .y=0xcd, .sp=0xfb, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xa85f, .value=0xd0}, {.addr=0xa860, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xa861, .a=0x9e, .x=0xac, .y=0xcd, .sp=0xfb, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xa85f, .value=0xd0}, {.addr=0xa860, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xa85f, .value=0xd0, .type=IO_READ},
        {.addr=0xa860, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0199) {
    const struct CPU_State initial_cpu = {.pc=0x1fc5, .a=0x48, .x=0x9f, .y=0x4e, .sp=0x6b, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x1fc5, .value=0xd0}, {.addr=0x1fc6, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x1fc7, .a=0x48, .x=0x9f, .y=0x4e, .sp=0x6b, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x1fc5, .value=0xd0}, {.addr=0x1fc6, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x1fc5, .value=0xd0, .type=IO_READ},
        {.addr=0x1fc6, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_019A) {
    const struct CPU_State initial_cpu = {.pc=0x44a5, .a=0x2f, .x=0x7d, .y=0xf3, .sp=0x51, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x44a5, .value=0xd0}, {.addr=0x44a6, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x44a7, .a=0x2f, .x=0x7d, .y=0xf3, .sp=0x51, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x44a5, .value=0xd0}, {.addr=0x44a6, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x44a5, .value=0xd0, .type=IO_READ},
        {.addr=0x44a6, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_019B) {
    const struct CPU_State initial_cpu = {.pc=0x2266, .a=0x37, .x=0x99, .y=0x4e, .sp=0xfd, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x2266, .value=0xd0}, {.addr=0x2267, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x22d8, .a=0x37, .x=0x99, .y=0x4e, .sp=0xfd, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x2266, .value=0xd0}, {.addr=0x2267, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x2266, .value=0xd0, .type=IO_READ},
        {.addr=0x2267, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_019C) {
    const struct CPU_State initial_cpu = {.pc=0x03ae, .a=0x5c, .x=0x52, .y=0xbc, .sp=0x72, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x03ae, .value=0xd0}, {.addr=0x03af, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x03b0, .a=0x5c, .x=0x52, .y=0xbc, .sp=0x72, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x03ae, .value=0xd0}, {.addr=0x03af, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x03ae, .value=0xd0, .type=IO_READ},
        {.addr=0x03af, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_019D) {
    const struct CPU_State initial_cpu = {.pc=0x5021, .a=0x56, .x=0xb7, .y=0x38, .sp=0xe8, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x5021, .value=0xd0}, {.addr=0x5022, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x4fa7, .a=0x56, .x=0xb7, .y=0x38, .sp=0xe8, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5021, .value=0xd0}, {.addr=0x5022, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x5021, .value=0xd0, .type=IO_READ},
        {.addr=0x5022, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_019E) {
    const struct CPU_State initial_cpu = {.pc=0x824e, .a=0x38, .x=0x31, .y=0x20, .sp=0x45, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x824e, .value=0xd0}, {.addr=0x824f, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x81d5, .a=0x38, .x=0x31, .y=0x20, .sp=0x45, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x824e, .value=0xd0}, {.addr=0x824f, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x824e, .value=0xd0, .type=IO_READ},
        {.addr=0x824f, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_019F) {
    const struct CPU_State initial_cpu = {.pc=0x8b4c, .a=0x85, .x=0x9a, .y=0x3b, .sp=0xbd, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8b4c, .value=0xd0}, {.addr=0x8b4d, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x8b4e, .a=0x85, .x=0x9a, .y=0x3b, .sp=0xbd, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x8b4c, .value=0xd0}, {.addr=0x8b4d, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x8b4c, .value=0xd0, .type=IO_READ},
        {.addr=0x8b4d, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x8d37, .a=0x36, .x=0x25, .y=0x00, .sp=0x9a, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x8d37, .value=0xd0}, {.addr=0x8d38, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x8d39, .a=0x36, .x=0x25, .y=0x00, .sp=0x9a, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x8d37, .value=0xd0}, {.addr=0x8d38, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x8d37, .value=0xd0, .type=IO_READ},
        {.addr=0x8d38, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x9cc4, .a=0x9f, .x=0x8a, .y=0x25, .sp=0x81, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x9cc4, .value=0xd0}, {.addr=0x9cc5, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x9cc6, .a=0x9f, .x=0x8a, .y=0x25, .sp=0x81, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x9cc4, .value=0xd0}, {.addr=0x9cc5, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x9cc4, .value=0xd0, .type=IO_READ},
        {.addr=0x9cc5, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xd36a, .a=0x04, .x=0xa6, .y=0x87, .sp=0x6a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xd36a, .value=0xd0}, {.addr=0xd36b, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xd35c, .a=0x04, .x=0xa6, .y=0x87, .sp=0x6a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xd36a, .value=0xd0}, {.addr=0xd36b, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xd36a, .value=0xd0, .type=IO_READ},
        {.addr=0xd36b, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x89dd, .a=0xde, .x=0xca, .y=0xc0, .sp=0x17, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x89dd, .value=0xd0}, {.addr=0x89de, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x897c, .a=0xde, .x=0xca, .y=0xc0, .sp=0x17, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x89dd, .value=0xd0}, {.addr=0x89de, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x89dd, .value=0xd0, .type=IO_READ},
        {.addr=0x89de, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x1f9c, .a=0x76, .x=0x06, .y=0xef, .sp=0xb4, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x1f9c, .value=0xd0}, {.addr=0x1f9d, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x1fb1, .a=0x76, .x=0x06, .y=0xef, .sp=0xb4, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1f9c, .value=0xd0}, {.addr=0x1f9d, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x1f9c, .value=0xd0, .type=IO_READ},
        {.addr=0x1f9d, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xcc27, .a=0x93, .x=0x0b, .y=0x4f, .sp=0xd8, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xcc27, .value=0xd0}, {.addr=0xcc28, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcc29, .a=0x93, .x=0x0b, .y=0x4f, .sp=0xd8, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xcc27, .value=0xd0}, {.addr=0xcc28, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcc27, .value=0xd0, .type=IO_READ},
        {.addr=0xcc28, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x22c7, .a=0x48, .x=0x9f, .y=0xb2, .sp=0x05, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x22c7, .value=0xd0}, {.addr=0x22c8, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x22c9, .a=0x48, .x=0x9f, .y=0xb2, .sp=0x05, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x22c7, .value=0xd0}, {.addr=0x22c8, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x22c7, .value=0xd0, .type=IO_READ},
        {.addr=0x22c8, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xecd5, .a=0xe5, .x=0x49, .y=0x5c, .sp=0xdc, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xecd5, .value=0xd0}, {.addr=0xecd6, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xed1f, .a=0xe5, .x=0x49, .y=0x5c, .sp=0xdc, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xecd5, .value=0xd0}, {.addr=0xecd6, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xecd5, .value=0xd0, .type=IO_READ},
        {.addr=0xecd6, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x0071, .a=0xac, .x=0x5e, .y=0x54, .sp=0x89, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0xd0}, {.addr=0x0072, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x0073, .a=0xac, .x=0x5e, .y=0x54, .sp=0x89, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0xd0}, {.addr=0x0072, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x0071, .value=0xd0, .type=IO_READ},
        {.addr=0x0072, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x0b35, .a=0x1a, .x=0xd4, .y=0x99, .sp=0x0e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0b35, .value=0xd0}, {.addr=0x0b36, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0b25, .a=0x1a, .x=0xd4, .y=0x99, .sp=0x0e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0b35, .value=0xd0}, {.addr=0x0b36, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0b35, .value=0xd0, .type=IO_READ},
        {.addr=0x0b36, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x39de, .a=0x97, .x=0xd0, .y=0x5f, .sp=0x59, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x39de, .value=0xd0}, {.addr=0x39df, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x39eb, .a=0x97, .x=0xd0, .y=0x5f, .sp=0x59, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x39de, .value=0xd0}, {.addr=0x39df, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x39de, .value=0xd0, .type=IO_READ},
        {.addr=0x39df, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x44a0, .a=0x0f, .x=0xa4, .y=0xcd, .sp=0x10, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x44a0, .value=0xd0}, {.addr=0x44a1, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x4436, .a=0x0f, .x=0xa4, .y=0xcd, .sp=0x10, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x44a0, .value=0xd0}, {.addr=0x44a1, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x44a0, .value=0xd0, .type=IO_READ},
        {.addr=0x44a1, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xa5f3, .a=0x40, .x=0xf5, .y=0x0d, .sp=0x74, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xa5f3, .value=0xd0}, {.addr=0xa5f4, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xa5f5, .a=0x40, .x=0xf5, .y=0x0d, .sp=0x74, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xa5f3, .value=0xd0}, {.addr=0xa5f4, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xa5f3, .value=0xd0, .type=IO_READ},
        {.addr=0xa5f4, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xc400, .a=0x2f, .x=0x8f, .y=0x1c, .sp=0xf4, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xc400, .value=0xd0}, {.addr=0xc401, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xc42d, .a=0x2f, .x=0x8f, .y=0x1c, .sp=0xf4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc400, .value=0xd0}, {.addr=0xc401, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xc400, .value=0xd0, .type=IO_READ},
        {.addr=0xc401, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x0c65, .a=0x59, .x=0xff, .y=0x18, .sp=0x06, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0c65, .value=0xd0}, {.addr=0x0c66, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x0bf7, .a=0x59, .x=0xff, .y=0x18, .sp=0x06, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0c65, .value=0xd0}, {.addr=0x0c66, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x0c65, .value=0xd0, .type=IO_READ},
        {.addr=0x0c66, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xbdc8, .a=0x77, .x=0x1f, .y=0xae, .sp=0x4f, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xbdc8, .value=0xd0}, {.addr=0xbdc9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbdca, .a=0x77, .x=0x1f, .y=0xae, .sp=0x4f, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xbdc8, .value=0xd0}, {.addr=0xbdc9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbdc8, .value=0xd0, .type=IO_READ},
        {.addr=0xbdc9, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x6d36, .a=0x42, .x=0x1d, .y=0x94, .sp=0x1d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x6d36, .value=0xd0}, {.addr=0x6d37, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x6cf2, .a=0x42, .x=0x1d, .y=0x94, .sp=0x1d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6d36, .value=0xd0}, {.addr=0x6d37, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x6d36, .value=0xd0, .type=IO_READ},
        {.addr=0x6d37, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x657f, .a=0xc5, .x=0xdb, .y=0x44, .sp=0x34, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x657f, .value=0xd0}, {.addr=0x6580, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x6581, .a=0xc5, .x=0xdb, .y=0x44, .sp=0x34, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x657f, .value=0xd0}, {.addr=0x6580, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x657f, .value=0xd0, .type=IO_READ},
        {.addr=0x6580, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xf5ea, .a=0xa9, .x=0x8d, .y=0x1a, .sp=0xca, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xf5ea, .value=0xd0}, {.addr=0xf5eb, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xf5c3, .a=0xa9, .x=0x8d, .y=0x1a, .sp=0xca, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf5ea, .value=0xd0}, {.addr=0xf5eb, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xf5ea, .value=0xd0, .type=IO_READ},
        {.addr=0xf5eb, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x6e0b, .a=0xc5, .x=0x6d, .y=0xc2, .sp=0x23, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x6e0b, .value=0xd0}, {.addr=0x6e0c, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x6e0d, .a=0xc5, .x=0x6d, .y=0xc2, .sp=0x23, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x6e0b, .value=0xd0}, {.addr=0x6e0c, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x6e0b, .value=0xd0, .type=IO_READ},
        {.addr=0x6e0c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x2b38, .a=0x86, .x=0xe7, .y=0xec, .sp=0x53, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x2b38, .value=0xd0}, {.addr=0x2b39, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x2b3a, .a=0x86, .x=0xe7, .y=0xec, .sp=0x53, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x2b38, .value=0xd0}, {.addr=0x2b39, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x2b38, .value=0xd0, .type=IO_READ},
        {.addr=0x2b39, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x3f33, .a=0x08, .x=0x77, .y=0x6e, .sp=0x11, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3f33, .value=0xd0}, {.addr=0x3f34, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x3f35, .a=0x08, .x=0x77, .y=0x6e, .sp=0x11, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x3f33, .value=0xd0}, {.addr=0x3f34, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x3f33, .value=0xd0, .type=IO_READ},
        {.addr=0x3f34, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xcd1a, .a=0x51, .x=0xeb, .y=0xce, .sp=0x8a, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xcd1a, .value=0xd0}, {.addr=0xcd1b, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xcca4, .a=0x51, .x=0xeb, .y=0xce, .sp=0x8a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xcd1a, .value=0xd0}, {.addr=0xcd1b, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xcd1a, .value=0xd0, .type=IO_READ},
        {.addr=0xcd1b, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x8507, .a=0x9f, .x=0x2c, .y=0xff, .sp=0x5b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x8507, .value=0xd0}, {.addr=0x8508, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x8512, .a=0x9f, .x=0x2c, .y=0xff, .sp=0x5b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8507, .value=0xd0}, {.addr=0x8508, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x8507, .value=0xd0, .type=IO_READ},
        {.addr=0x8508, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x85a1, .a=0x62, .x=0x8d, .y=0xe6, .sp=0x60, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x85a1, .value=0xd0}, {.addr=0x85a2, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x85a3, .a=0x62, .x=0x8d, .y=0xe6, .sp=0x60, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x85a1, .value=0xd0}, {.addr=0x85a2, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x85a1, .value=0xd0, .type=IO_READ},
        {.addr=0x85a2, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x0a3d, .a=0x45, .x=0xd9, .y=0xe3, .sp=0xc6, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0a3d, .value=0xd0}, {.addr=0x0a3e, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x0a3d, .a=0x45, .x=0xd9, .y=0xe3, .sp=0xc6, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0a3d, .value=0xd0}, {.addr=0x0a3e, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x0a3d, .value=0xd0, .type=IO_READ},
        {.addr=0x0a3e, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xb0f0, .a=0x01, .x=0x5b, .y=0x7f, .sp=0xcf, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xb0f0, .value=0xd0}, {.addr=0xb0f1, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xb0f2, .a=0x01, .x=0x5b, .y=0x7f, .sp=0xcf, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xb0f0, .value=0xd0}, {.addr=0xb0f1, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xb0f0, .value=0xd0, .type=IO_READ},
        {.addr=0xb0f1, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xda84, .a=0xbd, .x=0xfa, .y=0x3f, .sp=0x5f, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xda84, .value=0xd0}, {.addr=0xda85, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xda86, .a=0xbd, .x=0xfa, .y=0x3f, .sp=0x5f, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xda84, .value=0xd0}, {.addr=0xda85, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xda84, .value=0xd0, .type=IO_READ},
        {.addr=0xda85, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x0b00, .a=0xd0, .x=0x20, .y=0x42, .sp=0x28, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0b00, .value=0xd0}, {.addr=0x0b01, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x0b02, .a=0xd0, .x=0x20, .y=0x42, .sp=0x28, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0b00, .value=0xd0}, {.addr=0x0b01, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x0b00, .value=0xd0, .type=IO_READ},
        {.addr=0x0b01, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xf7cd, .a=0xaa, .x=0xed, .y=0x71, .sp=0xd6, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xf7cd, .value=0xd0}, {.addr=0xf7ce, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xf7cf, .a=0xaa, .x=0xed, .y=0x71, .sp=0xd6, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xf7cd, .value=0xd0}, {.addr=0xf7ce, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xf7cd, .value=0xd0, .type=IO_READ},
        {.addr=0xf7ce, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xdf1b, .a=0x87, .x=0x7c, .y=0x5e, .sp=0x1d, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1b, .value=0xd0}, {.addr=0xdf1c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xdf59, .a=0x87, .x=0x7c, .y=0x5e, .sp=0x1d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xdf1b, .value=0xd0}, {.addr=0xdf1c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xdf1b, .value=0xd0, .type=IO_READ},
        {.addr=0xdf1c, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x4f70, .a=0xc2, .x=0x6d, .y=0x31, .sp=0x2b, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x4f70, .value=0xd0}, {.addr=0x4f71, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x4f72, .a=0xc2, .x=0x6d, .y=0x31, .sp=0x2b, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x4f70, .value=0xd0}, {.addr=0x4f71, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x4f70, .value=0xd0, .type=IO_READ},
        {.addr=0x4f71, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x4f8a, .a=0x39, .x=0x01, .y=0x93, .sp=0x07, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x4f8a, .value=0xd0}, {.addr=0x4f8b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4f32, .a=0x39, .x=0x01, .y=0x93, .sp=0x07, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4f8a, .value=0xd0}, {.addr=0x4f8b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4f8a, .value=0xd0, .type=IO_READ},
        {.addr=0x4f8b, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xd4cc, .a=0xca, .x=0xac, .y=0xc1, .sp=0xe1, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xd4cc, .value=0xd0}, {.addr=0xd4cd, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xd4ce, .a=0xca, .x=0xac, .y=0xc1, .sp=0xe1, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xd4cc, .value=0xd0}, {.addr=0xd4cd, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xd4cc, .value=0xd0, .type=IO_READ},
        {.addr=0xd4cd, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x4f4f, .a=0x7f, .x=0x24, .y=0xef, .sp=0x7f, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x4f4f, .value=0xd0}, {.addr=0x4f50, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x4f51, .a=0x7f, .x=0x24, .y=0xef, .sp=0x7f, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x4f4f, .value=0xd0}, {.addr=0x4f50, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x4f4f, .value=0xd0, .type=IO_READ},
        {.addr=0x4f50, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x42ae, .a=0x45, .x=0x90, .y=0x0d, .sp=0x87, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x42ae, .value=0xd0}, {.addr=0x42af, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x42b0, .a=0x45, .x=0x90, .y=0x0d, .sp=0x87, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x42ae, .value=0xd0}, {.addr=0x42af, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x42ae, .value=0xd0, .type=IO_READ},
        {.addr=0x42af, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xf3d1, .a=0xa3, .x=0x6a, .y=0xba, .sp=0x48, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xf3d1, .value=0xd0}, {.addr=0xf3d2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf44f, .a=0xa3, .x=0x6a, .y=0xba, .sp=0x48, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xf3d1, .value=0xd0}, {.addr=0xf3d2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf3d1, .value=0xd0, .type=IO_READ},
        {.addr=0xf3d2, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x145b, .a=0x9b, .x=0xe9, .y=0x25, .sp=0x3e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x145b, .value=0xd0}, {.addr=0x145c, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x145d, .a=0x9b, .x=0xe9, .y=0x25, .sp=0x3e, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x145b, .value=0xd0}, {.addr=0x145c, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x145b, .value=0xd0, .type=IO_READ},
        {.addr=0x145c, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xc064, .a=0xdd, .x=0xbd, .y=0x0a, .sp=0x75, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xc064, .value=0xd0}, {.addr=0xc065, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbff4, .a=0xdd, .x=0xbd, .y=0x0a, .sp=0x75, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc064, .value=0xd0}, {.addr=0xc065, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc064, .value=0xd0, .type=IO_READ},
        {.addr=0xc065, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x9582, .a=0xed, .x=0x14, .y=0x3f, .sp=0x7c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x9582, .value=0xd0}, {.addr=0x9583, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x9584, .a=0xed, .x=0x14, .y=0x3f, .sp=0x7c, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x9582, .value=0xd0}, {.addr=0x9583, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x9582, .value=0xd0, .type=IO_READ},
        {.addr=0x9583, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x6866, .a=0xad, .x=0x91, .y=0x00, .sp=0xdf, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6866, .value=0xd0}, {.addr=0x6867, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x68db, .a=0xad, .x=0x91, .y=0x00, .sp=0xdf, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6866, .value=0xd0}, {.addr=0x6867, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x6866, .value=0xd0, .type=IO_READ},
        {.addr=0x6867, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x1b75, .a=0x52, .x=0xb8, .y=0x40, .sp=0x19, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x1b75, .value=0xd0}, {.addr=0x1b76, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1b73, .a=0x52, .x=0xb8, .y=0x40, .sp=0x19, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x1b75, .value=0xd0}, {.addr=0x1b76, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1b75, .value=0xd0, .type=IO_READ},
        {.addr=0x1b76, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x5b6a, .a=0x60, .x=0xc6, .y=0xa5, .sp=0x2e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x5b6a, .value=0xd0}, {.addr=0x5b6b, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x5b6c, .a=0x60, .x=0xc6, .y=0xa5, .sp=0x2e, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x5b6a, .value=0xd0}, {.addr=0x5b6b, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x5b6a, .value=0xd0, .type=IO_READ},
        {.addr=0x5b6b, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xe191, .a=0x6d, .x=0x2c, .y=0x20, .sp=0x82, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe191, .value=0xd0}, {.addr=0xe192, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe181, .a=0x6d, .x=0x2c, .y=0x20, .sp=0x82, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe191, .value=0xd0}, {.addr=0xe192, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe191, .value=0xd0, .type=IO_READ},
        {.addr=0xe192, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xbb68, .a=0x2f, .x=0x59, .y=0x8e, .sp=0x0f, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xbb68, .value=0xd0}, {.addr=0xbb69, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xbb1f, .a=0x2f, .x=0x59, .y=0x8e, .sp=0x0f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xbb68, .value=0xd0}, {.addr=0xbb69, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xbb68, .value=0xd0, .type=IO_READ},
        {.addr=0xbb69, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x7323, .a=0x51, .x=0x9f, .y=0x96, .sp=0x74, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x7323, .value=0xd0}, {.addr=0x7324, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x72fe, .a=0x51, .x=0x9f, .y=0x96, .sp=0x74, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x7323, .value=0xd0}, {.addr=0x7324, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x7323, .value=0xd0, .type=IO_READ},
        {.addr=0x7324, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xf66b, .a=0xdb, .x=0x79, .y=0x76, .sp=0x88, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xf66b, .value=0xd0}, {.addr=0xf66c, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xf69b, .a=0xdb, .x=0x79, .y=0x76, .sp=0x88, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf66b, .value=0xd0}, {.addr=0xf66c, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xf66b, .value=0xd0, .type=IO_READ},
        {.addr=0xf66c, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x0e7b, .a=0xd3, .x=0x06, .y=0x48, .sp=0x3a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0e7b, .value=0xd0}, {.addr=0x0e7c, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x0e27, .a=0xd3, .x=0x06, .y=0x48, .sp=0x3a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0e7b, .value=0xd0}, {.addr=0x0e7c, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x0e7b, .value=0xd0, .type=IO_READ},
        {.addr=0x0e7c, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xc706, .a=0xe8, .x=0xa1, .y=0x46, .sp=0x17, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc706, .value=0xd0}, {.addr=0xc707, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xc736, .a=0xe8, .x=0xa1, .y=0x46, .sp=0x17, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xc706, .value=0xd0}, {.addr=0xc707, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xc706, .value=0xd0, .type=IO_READ},
        {.addr=0xc707, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x212b, .a=0x43, .x=0x21, .y=0x29, .sp=0x82, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x212b, .value=0xd0}, {.addr=0x212c, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x212d, .a=0x43, .x=0x21, .y=0x29, .sp=0x82, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x212b, .value=0xd0}, {.addr=0x212c, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x212b, .value=0xd0, .type=IO_READ},
        {.addr=0x212c, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x486b, .a=0x8b, .x=0xf9, .y=0x2d, .sp=0xc1, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x486b, .value=0xd0}, {.addr=0x486c, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x486d, .a=0x8b, .x=0xf9, .y=0x2d, .sp=0xc1, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x486b, .value=0xd0}, {.addr=0x486c, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x486b, .value=0xd0, .type=IO_READ},
        {.addr=0x486c, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xb7a9, .a=0x0d, .x=0xee, .y=0x3b, .sp=0xdf, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xb7a9, .value=0xd0}, {.addr=0xb7aa, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xb77e, .a=0x0d, .x=0xee, .y=0x3b, .sp=0xdf, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xb7a9, .value=0xd0}, {.addr=0xb7aa, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xb7a9, .value=0xd0, .type=IO_READ},
        {.addr=0xb7aa, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x512d, .a=0xc2, .x=0xb8, .y=0xe7, .sp=0xcd, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x512d, .value=0xd0}, {.addr=0x512e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x512f, .a=0xc2, .x=0xb8, .y=0xe7, .sp=0xcd, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x512d, .value=0xd0}, {.addr=0x512e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x512d, .value=0xd0, .type=IO_READ},
        {.addr=0x512e, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xf5cf, .a=0x13, .x=0xa2, .y=0xd1, .sp=0xb6, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xf5cf, .value=0xd0}, {.addr=0xf5d0, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xf5a0, .a=0x13, .x=0xa2, .y=0xd1, .sp=0xb6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf5cf, .value=0xd0}, {.addr=0xf5d0, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xf5cf, .value=0xd0, .type=IO_READ},
        {.addr=0xf5d0, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x2b94, .a=0x9d, .x=0x1f, .y=0x4f, .sp=0x60, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x2b94, .value=0xd0}, {.addr=0x2b95, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x2b96, .a=0x9d, .x=0x1f, .y=0x4f, .sp=0x60, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x2b94, .value=0xd0}, {.addr=0x2b95, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x2b94, .value=0xd0, .type=IO_READ},
        {.addr=0x2b95, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xb951, .a=0xeb, .x=0x81, .y=0xe1, .sp=0xb7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xb951, .value=0xd0}, {.addr=0xb952, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xb953, .a=0xeb, .x=0x81, .y=0xe1, .sp=0xb7, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xb951, .value=0xd0}, {.addr=0xb952, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xb951, .value=0xd0, .type=IO_READ},
        {.addr=0xb952, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xe73e, .a=0x4b, .x=0xa5, .y=0xf2, .sp=0xb6, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xe73e, .value=0xd0}, {.addr=0xe73f, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xe740, .a=0x4b, .x=0xa5, .y=0xf2, .sp=0xb6, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xe73e, .value=0xd0}, {.addr=0xe73f, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xe73e, .value=0xd0, .type=IO_READ},
        {.addr=0xe73f, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x7f6b, .a=0xab, .x=0xa0, .y=0x54, .sp=0x60, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x7f6b, .value=0xd0}, {.addr=0x7f6c, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x7f6d, .a=0xab, .x=0xa0, .y=0x54, .sp=0x60, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x7f6b, .value=0xd0}, {.addr=0x7f6c, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x7f6b, .value=0xd0, .type=IO_READ},
        {.addr=0x7f6c, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xf2df, .a=0x55, .x=0x19, .y=0x70, .sp=0xbc, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xf2df, .value=0xd0}, {.addr=0xf2e0, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xf2db, .a=0x55, .x=0x19, .y=0x70, .sp=0xbc, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xf2df, .value=0xd0}, {.addr=0xf2e0, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xf2df, .value=0xd0, .type=IO_READ},
        {.addr=0xf2e0, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x603b, .a=0x0d, .x=0x7e, .y=0x6a, .sp=0x1e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x603b, .value=0xd0}, {.addr=0x603c, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x603d, .a=0x0d, .x=0x7e, .y=0x6a, .sp=0x1e, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x603b, .value=0xd0}, {.addr=0x603c, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x603b, .value=0xd0, .type=IO_READ},
        {.addr=0x603c, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xbe85, .a=0x79, .x=0xa6, .y=0x6b, .sp=0x54, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xbe85, .value=0xd0}, {.addr=0xbe86, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xbe87, .a=0x79, .x=0xa6, .y=0x6b, .sp=0x54, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xbe85, .value=0xd0}, {.addr=0xbe86, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xbe85, .value=0xd0, .type=IO_READ},
        {.addr=0xbe86, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x299f, .a=0x14, .x=0x98, .y=0x10, .sp=0xdd, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x299f, .value=0xd0}, {.addr=0x29a0, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x29a1, .a=0x14, .x=0x98, .y=0x10, .sp=0xdd, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x299f, .value=0xd0}, {.addr=0x29a0, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x299f, .value=0xd0, .type=IO_READ},
        {.addr=0x29a0, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xceb9, .a=0xf1, .x=0x90, .y=0x36, .sp=0x6d, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xceb9, .value=0xd0}, {.addr=0xceba, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xceec, .a=0xf1, .x=0x90, .y=0x36, .sp=0x6d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xceb9, .value=0xd0}, {.addr=0xceba, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xceb9, .value=0xd0, .type=IO_READ},
        {.addr=0xceba, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xfa3c, .a=0x48, .x=0xa5, .y=0xe7, .sp=0xaa, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xfa3c, .value=0xd0}, {.addr=0xfa3d, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xfa3e, .a=0x48, .x=0xa5, .y=0xe7, .sp=0xaa, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xfa3c, .value=0xd0}, {.addr=0xfa3d, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xfa3c, .value=0xd0, .type=IO_READ},
        {.addr=0xfa3d, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x519f, .a=0x10, .x=0xfd, .y=0x3a, .sp=0x4a, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x519f, .value=0xd0}, {.addr=0x51a0, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x51e5, .a=0x10, .x=0xfd, .y=0x3a, .sp=0x4a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x519f, .value=0xd0}, {.addr=0x51a0, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x519f, .value=0xd0, .type=IO_READ},
        {.addr=0x51a0, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xc689, .a=0xc7, .x=0xfb, .y=0xbf, .sp=0x7a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xc689, .value=0xd0}, {.addr=0xc68a, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xc69c, .a=0xc7, .x=0xfb, .y=0xbf, .sp=0x7a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc689, .value=0xd0}, {.addr=0xc68a, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xc689, .value=0xd0, .type=IO_READ},
        {.addr=0xc68a, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x98ca, .a=0xc6, .x=0xb0, .y=0x3e, .sp=0x63, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x98ca, .value=0xd0}, {.addr=0x98cb, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x98cc, .a=0xc6, .x=0xb0, .y=0x3e, .sp=0x63, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x98ca, .value=0xd0}, {.addr=0x98cb, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x98ca, .value=0xd0, .type=IO_READ},
        {.addr=0x98cb, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x55a7, .a=0xa3, .x=0x26, .y=0x57, .sp=0x31, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x55a7, .value=0xd0}, {.addr=0x55a8, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x554a, .a=0xa3, .x=0x26, .y=0x57, .sp=0x31, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x55a7, .value=0xd0}, {.addr=0x55a8, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x55a7, .value=0xd0, .type=IO_READ},
        {.addr=0x55a8, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x9e09, .a=0x28, .x=0xb6, .y=0x87, .sp=0xf8, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x9e09, .value=0xd0}, {.addr=0x9e0a, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x9e0b, .a=0x28, .x=0xb6, .y=0x87, .sp=0xf8, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x9e09, .value=0xd0}, {.addr=0x9e0a, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x9e09, .value=0xd0, .type=IO_READ},
        {.addr=0x9e0a, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x0655, .a=0x40, .x=0x33, .y=0xb5, .sp=0x8d, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0655, .value=0xd0}, {.addr=0x0656, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x0657, .a=0x40, .x=0x33, .y=0xb5, .sp=0x8d, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0655, .value=0xd0}, {.addr=0x0656, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x0655, .value=0xd0, .type=IO_READ},
        {.addr=0x0656, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x3ebb, .a=0xba, .x=0x71, .y=0x39, .sp=0xa4, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x3ebb, .value=0xd0}, {.addr=0x3ebc, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x3f35, .a=0xba, .x=0x71, .y=0x39, .sp=0xa4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x3ebb, .value=0xd0}, {.addr=0x3ebc, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x3ebb, .value=0xd0, .type=IO_READ},
        {.addr=0x3ebc, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x8af3, .a=0x54, .x=0x18, .y=0x46, .sp=0x95, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x8af3, .value=0xd0}, {.addr=0x8af4, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x8acd, .a=0x54, .x=0x18, .y=0x46, .sp=0x95, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x8af3, .value=0xd0}, {.addr=0x8af4, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x8af3, .value=0xd0, .type=IO_READ},
        {.addr=0x8af4, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xda26, .a=0x60, .x=0xf0, .y=0xc8, .sp=0x9a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xda26, .value=0xd0}, {.addr=0xda27, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xda28, .a=0x60, .x=0xf0, .y=0xc8, .sp=0x9a, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xda26, .value=0xd0}, {.addr=0xda27, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xda26, .value=0xd0, .type=IO_READ},
        {.addr=0xda27, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x1b56, .a=0x2e, .x=0x23, .y=0x8c, .sp=0x0a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x1b56, .value=0xd0}, {.addr=0x1b57, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1b58, .a=0x2e, .x=0x23, .y=0x8c, .sp=0x0a, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x1b56, .value=0xd0}, {.addr=0x1b57, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1b56, .value=0xd0, .type=IO_READ},
        {.addr=0x1b57, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x0e92, .a=0x1b, .x=0x9a, .y=0x7e, .sp=0x4f, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0e92, .value=0xd0}, {.addr=0x0e93, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x0e94, .a=0x1b, .x=0x9a, .y=0x7e, .sp=0x4f, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0e92, .value=0xd0}, {.addr=0x0e93, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x0e92, .value=0xd0, .type=IO_READ},
        {.addr=0x0e93, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xdc40, .a=0x35, .x=0xa4, .y=0xcd, .sp=0x29, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xdc40, .value=0xd0}, {.addr=0xdc41, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdc42, .a=0x35, .x=0xa4, .y=0xcd, .sp=0x29, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xdc40, .value=0xd0}, {.addr=0xdc41, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdc40, .value=0xd0, .type=IO_READ},
        {.addr=0xdc41, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x78c0, .a=0x79, .x=0x91, .y=0x8c, .sp=0xe8, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x78c0, .value=0xd0}, {.addr=0x78c1, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x78c2, .a=0x79, .x=0x91, .y=0x8c, .sp=0xe8, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x78c0, .value=0xd0}, {.addr=0x78c1, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x78c0, .value=0xd0, .type=IO_READ},
        {.addr=0x78c1, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xc956, .a=0x4d, .x=0x92, .y=0xad, .sp=0x25, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xc956, .value=0xd0}, {.addr=0xc957, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xc8d9, .a=0x4d, .x=0x92, .y=0xad, .sp=0x25, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc956, .value=0xd0}, {.addr=0xc957, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xc956, .value=0xd0, .type=IO_READ},
        {.addr=0xc957, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x9a04, .a=0xeb, .x=0x32, .y=0xa0, .sp=0x7d, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x9a04, .value=0xd0}, {.addr=0x9a05, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x9a1f, .a=0xeb, .x=0x32, .y=0xa0, .sp=0x7d, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9a04, .value=0xd0}, {.addr=0x9a05, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x9a04, .value=0xd0, .type=IO_READ},
        {.addr=0x9a05, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x7531, .a=0x4f, .x=0x88, .y=0x3a, .sp=0x84, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x7531, .value=0xd0}, {.addr=0x7532, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x74db, .a=0x4f, .x=0x88, .y=0x3a, .sp=0x84, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x7531, .value=0xd0}, {.addr=0x7532, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x7531, .value=0xd0, .type=IO_READ},
        {.addr=0x7532, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x122d, .a=0xe8, .x=0x10, .y=0x1b, .sp=0xc7, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x122d, .value=0xd0}, {.addr=0x122e, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x1241, .a=0xe8, .x=0x10, .y=0x1b, .sp=0xc7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x122d, .value=0xd0}, {.addr=0x122e, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x122d, .value=0xd0, .type=IO_READ},
        {.addr=0x122e, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x8c46, .a=0x1d, .x=0xc2, .y=0xd7, .sp=0x2a, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x8c46, .value=0xd0}, {.addr=0x8c47, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x8c48, .a=0x1d, .x=0xc2, .y=0xd7, .sp=0x2a, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x8c46, .value=0xd0}, {.addr=0x8c47, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x8c46, .value=0xd0, .type=IO_READ},
        {.addr=0x8c47, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x536b, .a=0x28, .x=0xc7, .y=0x7e, .sp=0x2a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x536b, .value=0xd0}, {.addr=0x536c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x53c9, .a=0x28, .x=0xc7, .y=0x7e, .sp=0x2a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x536b, .value=0xd0}, {.addr=0x536c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x536b, .value=0xd0, .type=IO_READ},
        {.addr=0x536c, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xb1f5, .a=0xb3, .x=0x5f, .y=0x7d, .sp=0x65, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xb1f5, .value=0xd0}, {.addr=0xb1f6, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xb23a, .a=0xb3, .x=0x5f, .y=0x7d, .sp=0x65, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xb1f5, .value=0xd0}, {.addr=0xb1f6, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xb1f5, .value=0xd0, .type=IO_READ},
        {.addr=0xb1f6, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x5e08, .a=0xf6, .x=0x61, .y=0x92, .sp=0xb7, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x5e08, .value=0xd0}, {.addr=0x5e09, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x5e0a, .a=0xf6, .x=0x61, .y=0x92, .sp=0xb7, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x5e08, .value=0xd0}, {.addr=0x5e09, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x5e08, .value=0xd0, .type=IO_READ},
        {.addr=0x5e09, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xc943, .a=0xea, .x=0xa6, .y=0x6b, .sp=0xfb, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xc943, .value=0xd0}, {.addr=0xc944, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xc978, .a=0xea, .x=0xa6, .y=0x6b, .sp=0xfb, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc943, .value=0xd0}, {.addr=0xc944, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xc943, .value=0xd0, .type=IO_READ},
        {.addr=0xc944, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xffac, .a=0xf6, .x=0x21, .y=0xb9, .sp=0x49, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xffac, .value=0xd0}, {.addr=0xffad, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x0023, .a=0xf6, .x=0x21, .y=0xb9, .sp=0x49, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xffac, .value=0xd0}, {.addr=0xffad, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xffac, .value=0xd0, .type=IO_READ},
        {.addr=0xffad, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x3c23, .a=0x3b, .x=0x58, .y=0xa1, .sp=0xb6, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x3c23, .value=0xd0}, {.addr=0x3c24, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3c25, .a=0x3b, .x=0x58, .y=0xa1, .sp=0xb6, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x3c23, .value=0xd0}, {.addr=0x3c24, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3c23, .value=0xd0, .type=IO_READ},
        {.addr=0x3c24, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x52df, .a=0x77, .x=0x79, .y=0xec, .sp=0x23, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x52df, .value=0xd0}, {.addr=0x52e0, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x531a, .a=0x77, .x=0x79, .y=0xec, .sp=0x23, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x52df, .value=0xd0}, {.addr=0x52e0, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x52df, .value=0xd0, .type=IO_READ},
        {.addr=0x52e0, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x46c3, .a=0x7b, .x=0x49, .y=0xc4, .sp=0xef, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x46c3, .value=0xd0}, {.addr=0x46c4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x46a4, .a=0x7b, .x=0x49, .y=0xc4, .sp=0xef, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x46c3, .value=0xd0}, {.addr=0x46c4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x46c3, .value=0xd0, .type=IO_READ},
        {.addr=0x46c4, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x0d5d, .a=0x43, .x=0x95, .y=0x3e, .sp=0x36, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0d5d, .value=0xd0}, {.addr=0x0d5e, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x0dca, .a=0x43, .x=0x95, .y=0x3e, .sp=0x36, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0d5d, .value=0xd0}, {.addr=0x0d5e, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x0d5d, .value=0xd0, .type=IO_READ},
        {.addr=0x0d5e, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x4bf7, .a=0xe0, .x=0xba, .y=0xd4, .sp=0x14, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x4bf7, .value=0xd0}, {.addr=0x4bf8, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x4bf9, .a=0xe0, .x=0xba, .y=0xd4, .sp=0x14, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x4bf7, .value=0xd0}, {.addr=0x4bf8, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x4bf7, .value=0xd0, .type=IO_READ},
        {.addr=0x4bf8, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x675a, .a=0xbc, .x=0x1b, .y=0xc6, .sp=0xd2, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x675a, .value=0xd0}, {.addr=0x675b, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x675c, .a=0xbc, .x=0x1b, .y=0xc6, .sp=0xd2, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x675a, .value=0xd0}, {.addr=0x675b, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x675a, .value=0xd0, .type=IO_READ},
        {.addr=0x675b, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xd206, .a=0xbf, .x=0x68, .y=0xd6, .sp=0x2f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xd206, .value=0xd0}, {.addr=0xd207, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xd213, .a=0xbf, .x=0x68, .y=0xd6, .sp=0x2f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xd206, .value=0xd0}, {.addr=0xd207, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xd206, .value=0xd0, .type=IO_READ},
        {.addr=0xd207, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x33bb, .a=0x8a, .x=0xac, .y=0x43, .sp=0xbd, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x33bb, .value=0xd0}, {.addr=0x33bc, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x33bd, .a=0x8a, .x=0xac, .y=0x43, .sp=0xbd, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x33bb, .value=0xd0}, {.addr=0x33bc, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x33bb, .value=0xd0, .type=IO_READ},
        {.addr=0x33bc, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x0f17, .a=0xe9, .x=0x78, .y=0x95, .sp=0xc0, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0f17, .value=0xd0}, {.addr=0x0f18, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x0f42, .a=0xe9, .x=0x78, .y=0x95, .sp=0xc0, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0f17, .value=0xd0}, {.addr=0x0f18, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x0f17, .value=0xd0, .type=IO_READ},
        {.addr=0x0f18, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0200) {
    const struct CPU_State initial_cpu = {.pc=0x0dfb, .a=0x65, .x=0xc1, .y=0xf4, .sp=0x67, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0dfb, .value=0xd0}, {.addr=0x0dfc, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x0e42, .a=0x65, .x=0xc1, .y=0xf4, .sp=0x67, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0dfb, .value=0xd0}, {.addr=0x0dfc, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x0dfb, .value=0xd0, .type=IO_READ},
        {.addr=0x0dfc, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0201) {
    const struct CPU_State initial_cpu = {.pc=0x1c06, .a=0x5d, .x=0x8e, .y=0xd5, .sp=0xbf, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x1c06, .value=0xd0}, {.addr=0x1c07, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1bb7, .a=0x5d, .x=0x8e, .y=0xd5, .sp=0xbf, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1c06, .value=0xd0}, {.addr=0x1c07, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1c06, .value=0xd0, .type=IO_READ},
        {.addr=0x1c07, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0202) {
    const struct CPU_State initial_cpu = {.pc=0x405f, .a=0xd7, .x=0x55, .y=0x3e, .sp=0x27, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x405f, .value=0xd0}, {.addr=0x4060, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x4061, .a=0xd7, .x=0x55, .y=0x3e, .sp=0x27, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x405f, .value=0xd0}, {.addr=0x4060, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x405f, .value=0xd0, .type=IO_READ},
        {.addr=0x4060, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0203) {
    const struct CPU_State initial_cpu = {.pc=0xfa2a, .a=0xd5, .x=0xc3, .y=0xb8, .sp=0x28, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xfa2a, .value=0xd0}, {.addr=0xfa2b, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xfa2c, .a=0xd5, .x=0xc3, .y=0xb8, .sp=0x28, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xfa2a, .value=0xd0}, {.addr=0xfa2b, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xfa2a, .value=0xd0, .type=IO_READ},
        {.addr=0xfa2b, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0204) {
    const struct CPU_State initial_cpu = {.pc=0x8c7d, .a=0x4a, .x=0xb6, .y=0x33, .sp=0x8d, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x8c7d, .value=0xd0}, {.addr=0x8c7e, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x8c7f, .a=0x4a, .x=0xb6, .y=0x33, .sp=0x8d, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x8c7d, .value=0xd0}, {.addr=0x8c7e, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x8c7d, .value=0xd0, .type=IO_READ},
        {.addr=0x8c7e, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0205) {
    const struct CPU_State initial_cpu = {.pc=0xc7d8, .a=0x74, .x=0xb4, .y=0x93, .sp=0xd5, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d8, .value=0xd0}, {.addr=0xc7d9, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xc7e5, .a=0x74, .x=0xb4, .y=0x93, .sp=0xd5, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc7d8, .value=0xd0}, {.addr=0xc7d9, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xc7d8, .value=0xd0, .type=IO_READ},
        {.addr=0xc7d9, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0206) {
    const struct CPU_State initial_cpu = {.pc=0x734a, .a=0xdf, .x=0x6a, .y=0xa0, .sp=0xc0, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x734a, .value=0xd0}, {.addr=0x734b, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x734c, .a=0xdf, .x=0x6a, .y=0xa0, .sp=0xc0, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x734a, .value=0xd0}, {.addr=0x734b, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x734a, .value=0xd0, .type=IO_READ},
        {.addr=0x734b, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0207) {
    const struct CPU_State initial_cpu = {.pc=0x9400, .a=0x41, .x=0xef, .y=0x7a, .sp=0x8a, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x9400, .value=0xd0}, {.addr=0x9401, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x9402, .a=0x41, .x=0xef, .y=0x7a, .sp=0x8a, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x9400, .value=0xd0}, {.addr=0x9401, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x9400, .value=0xd0, .type=IO_READ},
        {.addr=0x9401, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0208) {
    const struct CPU_State initial_cpu = {.pc=0xf23a, .a=0xfa, .x=0xd1, .y=0x36, .sp=0x8d, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xf23a, .value=0xd0}, {.addr=0xf23b, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xf23c, .a=0xfa, .x=0xd1, .y=0x36, .sp=0x8d, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xf23a, .value=0xd0}, {.addr=0xf23b, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xf23a, .value=0xd0, .type=IO_READ},
        {.addr=0xf23b, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0209) {
    const struct CPU_State initial_cpu = {.pc=0x860b, .a=0x1c, .x=0x3d, .y=0x65, .sp=0x8a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x860b, .value=0xd0}, {.addr=0x860c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x860d, .a=0x1c, .x=0x3d, .y=0x65, .sp=0x8a, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x860b, .value=0xd0}, {.addr=0x860c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x860b, .value=0xd0, .type=IO_READ},
        {.addr=0x860c, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_020A) {
    const struct CPU_State initial_cpu = {.pc=0xe624, .a=0xad, .x=0xae, .y=0x6e, .sp=0xfb, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xe624, .value=0xd0}, {.addr=0xe625, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xe628, .a=0xad, .x=0xae, .y=0x6e, .sp=0xfb, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe624, .value=0xd0}, {.addr=0xe625, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xe624, .value=0xd0, .type=IO_READ},
        {.addr=0xe625, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_020B) {
    const struct CPU_State initial_cpu = {.pc=0x933c, .a=0xaa, .x=0xee, .y=0x11, .sp=0x98, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x933c, .value=0xd0}, {.addr=0x933d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x934b, .a=0xaa, .x=0xee, .y=0x11, .sp=0x98, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x933c, .value=0xd0}, {.addr=0x933d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x933c, .value=0xd0, .type=IO_READ},
        {.addr=0x933d, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_020C) {
    const struct CPU_State initial_cpu = {.pc=0xa9e1, .a=0xd7, .x=0x36, .y=0x89, .sp=0x7b, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa9e1, .value=0xd0}, {.addr=0xa9e2, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xa9e3, .a=0xd7, .x=0x36, .y=0x89, .sp=0x7b, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xa9e1, .value=0xd0}, {.addr=0xa9e2, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xa9e1, .value=0xd0, .type=IO_READ},
        {.addr=0xa9e2, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_020D) {
    const struct CPU_State initial_cpu = {.pc=0x1ab8, .a=0xca, .x=0xc5, .y=0x6b, .sp=0x05, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab8, .value=0xd0}, {.addr=0x1ab9, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x1b2e, .a=0xca, .x=0xc5, .y=0x6b, .sp=0x05, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1ab8, .value=0xd0}, {.addr=0x1ab9, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x1ab8, .value=0xd0, .type=IO_READ},
        {.addr=0x1ab9, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_020E) {
    const struct CPU_State initial_cpu = {.pc=0xe1c6, .a=0xc9, .x=0xfd, .y=0x02, .sp=0x33, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xe1c6, .value=0xd0}, {.addr=0xe1c7, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xe17c, .a=0xc9, .x=0xfd, .y=0x02, .sp=0x33, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xe1c6, .value=0xd0}, {.addr=0xe1c7, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xe1c6, .value=0xd0, .type=IO_READ},
        {.addr=0xe1c7, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_020F) {
    const struct CPU_State initial_cpu = {.pc=0x04ef, .a=0x68, .x=0x54, .y=0x93, .sp=0xed, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x04ef, .value=0xd0}, {.addr=0x04f0, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x0515, .a=0x68, .x=0x54, .y=0x93, .sp=0xed, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x04ef, .value=0xd0}, {.addr=0x04f0, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x04ef, .value=0xd0, .type=IO_READ},
        {.addr=0x04f0, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0210) {
    const struct CPU_State initial_cpu = {.pc=0x4bad, .a=0xcb, .x=0xe6, .y=0x7f, .sp=0x27, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x4bad, .value=0xd0}, {.addr=0x4bae, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x4c22, .a=0xcb, .x=0xe6, .y=0x7f, .sp=0x27, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4bad, .value=0xd0}, {.addr=0x4bae, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x4bad, .value=0xd0, .type=IO_READ},
        {.addr=0x4bae, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0211) {
    const struct CPU_State initial_cpu = {.pc=0x80a6, .a=0xe9, .x=0xe2, .y=0x61, .sp=0x75, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x80a6, .value=0xd0}, {.addr=0x80a7, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x804a, .a=0xe9, .x=0xe2, .y=0x61, .sp=0x75, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x80a6, .value=0xd0}, {.addr=0x80a7, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x80a6, .value=0xd0, .type=IO_READ},
        {.addr=0x80a7, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0212) {
    const struct CPU_State initial_cpu = {.pc=0x2f91, .a=0x24, .x=0x21, .y=0xaa, .sp=0x8f, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2f91, .value=0xd0}, {.addr=0x2f92, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x2fbe, .a=0x24, .x=0x21, .y=0xaa, .sp=0x8f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2f91, .value=0xd0}, {.addr=0x2f92, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x2f91, .value=0xd0, .type=IO_READ},
        {.addr=0x2f92, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0213) {
    const struct CPU_State initial_cpu = {.pc=0x304c, .a=0x6f, .x=0xf5, .y=0x12, .sp=0xc7, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x304c, .value=0xd0}, {.addr=0x304d, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x30b0, .a=0x6f, .x=0xf5, .y=0x12, .sp=0xc7, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x304c, .value=0xd0}, {.addr=0x304d, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x304c, .value=0xd0, .type=IO_READ},
        {.addr=0x304d, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0214) {
    const struct CPU_State initial_cpu = {.pc=0xe93c, .a=0x8a, .x=0x40, .y=0x60, .sp=0xca, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xe93c, .value=0xd0}, {.addr=0xe93d, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xe93e, .a=0x8a, .x=0x40, .y=0x60, .sp=0xca, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xe93c, .value=0xd0}, {.addr=0xe93d, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xe93c, .value=0xd0, .type=IO_READ},
        {.addr=0xe93d, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0215) {
    const struct CPU_State initial_cpu = {.pc=0x35f6, .a=0x59, .x=0x35, .y=0xb1, .sp=0xe5, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x35f6, .value=0xd0}, {.addr=0x35f7, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x35f8, .a=0x59, .x=0x35, .y=0xb1, .sp=0xe5, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x35f6, .value=0xd0}, {.addr=0x35f7, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x35f6, .value=0xd0, .type=IO_READ},
        {.addr=0x35f7, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0216) {
    const struct CPU_State initial_cpu = {.pc=0x3149, .a=0xab, .x=0x2f, .y=0xb3, .sp=0xc4, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3149, .value=0xd0}, {.addr=0x314a, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x314b, .a=0xab, .x=0x2f, .y=0xb3, .sp=0xc4, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x3149, .value=0xd0}, {.addr=0x314a, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x3149, .value=0xd0, .type=IO_READ},
        {.addr=0x314a, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0217) {
    const struct CPU_State initial_cpu = {.pc=0x38ff, .a=0xb9, .x=0xf6, .y=0x3c, .sp=0xf4, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x38ff, .value=0xd0}, {.addr=0x3900, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x3894, .a=0xb9, .x=0xf6, .y=0x3c, .sp=0xf4, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x38ff, .value=0xd0}, {.addr=0x3900, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x38ff, .value=0xd0, .type=IO_READ},
        {.addr=0x3900, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0218) {
    const struct CPU_State initial_cpu = {.pc=0xc610, .a=0x11, .x=0xf3, .y=0xae, .sp=0x6f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xc610, .value=0xd0}, {.addr=0xc611, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xc612, .a=0x11, .x=0xf3, .y=0xae, .sp=0x6f, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xc610, .value=0xd0}, {.addr=0xc611, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xc610, .value=0xd0, .type=IO_READ},
        {.addr=0xc611, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0219) {
    const struct CPU_State initial_cpu = {.pc=0x980b, .a=0x1f, .x=0x8d, .y=0x10, .sp=0xd6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x980b, .value=0xd0}, {.addr=0x980c, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x980d, .a=0x1f, .x=0x8d, .y=0x10, .sp=0xd6, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x980b, .value=0xd0}, {.addr=0x980c, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x980b, .value=0xd0, .type=IO_READ},
        {.addr=0x980c, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_021A) {
    const struct CPU_State initial_cpu = {.pc=0x6488, .a=0x50, .x=0xad, .y=0xfa, .sp=0x2c, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x6488, .value=0xd0}, {.addr=0x6489, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x648a, .a=0x50, .x=0xad, .y=0xfa, .sp=0x2c, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x6488, .value=0xd0}, {.addr=0x6489, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6488, .value=0xd0, .type=IO_READ},
        {.addr=0x6489, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_021B) {
    const struct CPU_State initial_cpu = {.pc=0xbecf, .a=0x6f, .x=0x06, .y=0xeb, .sp=0x41, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xbecf, .value=0xd0}, {.addr=0xbed0, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xbed1, .a=0x6f, .x=0x06, .y=0xeb, .sp=0x41, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xbecf, .value=0xd0}, {.addr=0xbed0, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xbecf, .value=0xd0, .type=IO_READ},
        {.addr=0xbed0, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_021C) {
    const struct CPU_State initial_cpu = {.pc=0xdfa9, .a=0x2f, .x=0x35, .y=0x2c, .sp=0xfb, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xdfa9, .value=0xd0}, {.addr=0xdfaa, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xdf7c, .a=0x2f, .x=0x35, .y=0x2c, .sp=0xfb, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xdfa9, .value=0xd0}, {.addr=0xdfaa, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xdfa9, .value=0xd0, .type=IO_READ},
        {.addr=0xdfaa, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_021D) {
    const struct CPU_State initial_cpu = {.pc=0x8d5d, .a=0xeb, .x=0xc7, .y=0x6c, .sp=0xe3, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x8d5d, .value=0xd0}, {.addr=0x8d5e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8d5f, .a=0xeb, .x=0xc7, .y=0x6c, .sp=0xe3, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x8d5d, .value=0xd0}, {.addr=0x8d5e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8d5d, .value=0xd0, .type=IO_READ},
        {.addr=0x8d5e, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_021E) {
    const struct CPU_State initial_cpu = {.pc=0xd7a6, .a=0xd7, .x=0x33, .y=0xa2, .sp=0xc2, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xd7a6, .value=0xd0}, {.addr=0xd7a7, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd7a8, .a=0xd7, .x=0x33, .y=0xa2, .sp=0xc2, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xd7a6, .value=0xd0}, {.addr=0xd7a7, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd7a6, .value=0xd0, .type=IO_READ},
        {.addr=0xd7a7, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_021F) {
    const struct CPU_State initial_cpu = {.pc=0xac6c, .a=0xe6, .x=0x43, .y=0xaf, .sp=0x2a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xac6c, .value=0xd0}, {.addr=0xac6d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xacd4, .a=0xe6, .x=0x43, .y=0xaf, .sp=0x2a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xac6c, .value=0xd0}, {.addr=0xac6d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xac6c, .value=0xd0, .type=IO_READ},
        {.addr=0xac6d, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0220) {
    const struct CPU_State initial_cpu = {.pc=0x436d, .a=0x36, .x=0x6e, .y=0x4d, .sp=0x54, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x436d, .value=0xd0}, {.addr=0x436e, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x436f, .a=0x36, .x=0x6e, .y=0x4d, .sp=0x54, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x436d, .value=0xd0}, {.addr=0x436e, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x436d, .value=0xd0, .type=IO_READ},
        {.addr=0x436e, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0221) {
    const struct CPU_State initial_cpu = {.pc=0x5c3d, .a=0xf5, .x=0xc8, .y=0xb0, .sp=0x71, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x5c3d, .value=0xd0}, {.addr=0x5c3e, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x5c3f, .a=0xf5, .x=0xc8, .y=0xb0, .sp=0x71, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x5c3d, .value=0xd0}, {.addr=0x5c3e, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x5c3d, .value=0xd0, .type=IO_READ},
        {.addr=0x5c3e, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0222) {
    const struct CPU_State initial_cpu = {.pc=0x01aa, .a=0x4d, .x=0x18, .y=0x7f, .sp=0x28, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xd0}, {.addr=0x01ab, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x012c, .a=0x4d, .x=0x18, .y=0x7f, .sp=0x28, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xd0}, {.addr=0x01ab, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x01aa, .value=0xd0, .type=IO_READ},
        {.addr=0x01ab, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0223) {
    const struct CPU_State initial_cpu = {.pc=0xdfa7, .a=0xd7, .x=0x68, .y=0xae, .sp=0xa4, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xdfa7, .value=0xd0}, {.addr=0xdfa8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdfa9, .a=0xd7, .x=0x68, .y=0xae, .sp=0xa4, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xdfa7, .value=0xd0}, {.addr=0xdfa8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdfa7, .value=0xd0, .type=IO_READ},
        {.addr=0xdfa8, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0224) {
    const struct CPU_State initial_cpu = {.pc=0x3322, .a=0x23, .x=0x35, .y=0x88, .sp=0x6e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x3322, .value=0xd0}, {.addr=0x3323, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x3324, .a=0x23, .x=0x35, .y=0x88, .sp=0x6e, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x3322, .value=0xd0}, {.addr=0x3323, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x3322, .value=0xd0, .type=IO_READ},
        {.addr=0x3323, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0225) {
    const struct CPU_State initial_cpu = {.pc=0x3e45, .a=0x4c, .x=0x61, .y=0x50, .sp=0xe5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x3e45, .value=0xd0}, {.addr=0x3e46, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x3e0c, .a=0x4c, .x=0x61, .y=0x50, .sp=0xe5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x3e45, .value=0xd0}, {.addr=0x3e46, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x3e45, .value=0xd0, .type=IO_READ},
        {.addr=0x3e46, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0226) {
    const struct CPU_State initial_cpu = {.pc=0xfc45, .a=0xd3, .x=0xf1, .y=0xbe, .sp=0xce, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xfc45, .value=0xd0}, {.addr=0xfc46, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xfc47, .a=0xd3, .x=0xf1, .y=0xbe, .sp=0xce, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xfc45, .value=0xd0}, {.addr=0xfc46, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xfc45, .value=0xd0, .type=IO_READ},
        {.addr=0xfc46, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0227) {
    const struct CPU_State initial_cpu = {.pc=0x9a70, .a=0xc1, .x=0x55, .y=0x12, .sp=0xa4, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x9a70, .value=0xd0}, {.addr=0x9a71, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x9a72, .a=0xc1, .x=0x55, .y=0x12, .sp=0xa4, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x9a70, .value=0xd0}, {.addr=0x9a71, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x9a70, .value=0xd0, .type=IO_READ},
        {.addr=0x9a71, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0228) {
    const struct CPU_State initial_cpu = {.pc=0xcbc7, .a=0x23, .x=0x38, .y=0x0f, .sp=0x7a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xcbc7, .value=0xd0}, {.addr=0xcbc8, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xcbc9, .a=0x23, .x=0x38, .y=0x0f, .sp=0x7a, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xcbc7, .value=0xd0}, {.addr=0xcbc8, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xcbc7, .value=0xd0, .type=IO_READ},
        {.addr=0xcbc8, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0229) {
    const struct CPU_State initial_cpu = {.pc=0x1071, .a=0x13, .x=0x14, .y=0x61, .sp=0x00, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x1071, .value=0xd0}, {.addr=0x1072, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1073, .a=0x13, .x=0x14, .y=0x61, .sp=0x00, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x1071, .value=0xd0}, {.addr=0x1072, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1071, .value=0xd0, .type=IO_READ},
        {.addr=0x1072, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_022A) {
    const struct CPU_State initial_cpu = {.pc=0x6fdb, .a=0xe2, .x=0x82, .y=0x09, .sp=0xd8, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6fdb, .value=0xd0}, {.addr=0x6fdc, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x6fdd, .a=0xe2, .x=0x82, .y=0x09, .sp=0xd8, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x6fdb, .value=0xd0}, {.addr=0x6fdc, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x6fdb, .value=0xd0, .type=IO_READ},
        {.addr=0x6fdc, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_022B) {
    const struct CPU_State initial_cpu = {.pc=0xda65, .a=0xd2, .x=0x99, .y=0xce, .sp=0x51, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xda65, .value=0xd0}, {.addr=0xda66, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xda95, .a=0xd2, .x=0x99, .y=0xce, .sp=0x51, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xda65, .value=0xd0}, {.addr=0xda66, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xda65, .value=0xd0, .type=IO_READ},
        {.addr=0xda66, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_022C) {
    const struct CPU_State initial_cpu = {.pc=0x667c, .a=0x3d, .x=0x0b, .y=0x1e, .sp=0xd0, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x667c, .value=0xd0}, {.addr=0x667d, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x6609, .a=0x3d, .x=0x0b, .y=0x1e, .sp=0xd0, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x667c, .value=0xd0}, {.addr=0x667d, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x667c, .value=0xd0, .type=IO_READ},
        {.addr=0x667d, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_022D) {
    const struct CPU_State initial_cpu = {.pc=0xc32c, .a=0xc8, .x=0xa9, .y=0x0d, .sp=0x80, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc32c, .value=0xd0}, {.addr=0xc32d, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xc32e, .a=0xc8, .x=0xa9, .y=0x0d, .sp=0x80, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xc32c, .value=0xd0}, {.addr=0xc32d, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xc32c, .value=0xd0, .type=IO_READ},
        {.addr=0xc32d, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_022E) {
    const struct CPU_State initial_cpu = {.pc=0x8d3d, .a=0x1b, .x=0x86, .y=0xc0, .sp=0x9f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x8d3d, .value=0xd0}, {.addr=0x8d3e, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x8d3f, .a=0x1b, .x=0x86, .y=0xc0, .sp=0x9f, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x8d3d, .value=0xd0}, {.addr=0x8d3e, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x8d3d, .value=0xd0, .type=IO_READ},
        {.addr=0x8d3e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_022F) {
    const struct CPU_State initial_cpu = {.pc=0x81d2, .a=0x62, .x=0x39, .y=0x41, .sp=0x71, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x81d2, .value=0xd0}, {.addr=0x81d3, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x81d4, .a=0x62, .x=0x39, .y=0x41, .sp=0x71, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x81d2, .value=0xd0}, {.addr=0x81d3, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x81d2, .value=0xd0, .type=IO_READ},
        {.addr=0x81d3, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0230) {
    const struct CPU_State initial_cpu = {.pc=0x4726, .a=0x06, .x=0xe4, .y=0xc5, .sp=0xd9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x4726, .value=0xd0}, {.addr=0x4727, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x4728, .a=0x06, .x=0xe4, .y=0xc5, .sp=0xd9, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x4726, .value=0xd0}, {.addr=0x4727, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x4726, .value=0xd0, .type=IO_READ},
        {.addr=0x4727, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0231) {
    const struct CPU_State initial_cpu = {.pc=0xef19, .a=0x53, .x=0x1d, .y=0xd6, .sp=0xa0, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xef19, .value=0xd0}, {.addr=0xef1a, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xef7c, .a=0x53, .x=0x1d, .y=0xd6, .sp=0xa0, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xef19, .value=0xd0}, {.addr=0xef1a, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xef19, .value=0xd0, .type=IO_READ},
        {.addr=0xef1a, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0232) {
    const struct CPU_State initial_cpu = {.pc=0x6def, .a=0xbf, .x=0x7a, .y=0x5e, .sp=0xa4, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6def, .value=0xd0}, {.addr=0x6df0, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x6df1, .a=0xbf, .x=0x7a, .y=0x5e, .sp=0xa4, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x6def, .value=0xd0}, {.addr=0x6df0, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x6def, .value=0xd0, .type=IO_READ},
        {.addr=0x6df0, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0233) {
    const struct CPU_State initial_cpu = {.pc=0x046c, .a=0x8c, .x=0x67, .y=0xa5, .sp=0x9c, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x046c, .value=0xd0}, {.addr=0x046d, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x04cc, .a=0x8c, .x=0x67, .y=0xa5, .sp=0x9c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x046c, .value=0xd0}, {.addr=0x046d, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x046c, .value=0xd0, .type=IO_READ},
        {.addr=0x046d, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0234) {
    const struct CPU_State initial_cpu = {.pc=0x91dc, .a=0x2b, .x=0xbd, .y=0xb4, .sp=0xcc, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x91dc, .value=0xd0}, {.addr=0x91dd, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x91de, .a=0x2b, .x=0xbd, .y=0xb4, .sp=0xcc, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x91dc, .value=0xd0}, {.addr=0x91dd, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x91dc, .value=0xd0, .type=IO_READ},
        {.addr=0x91dd, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0235) {
    const struct CPU_State initial_cpu = {.pc=0x1127, .a=0x63, .x=0x06, .y=0x48, .sp=0x6d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x1127, .value=0xd0}, {.addr=0x1128, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x116b, .a=0x63, .x=0x06, .y=0x48, .sp=0x6d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x1127, .value=0xd0}, {.addr=0x1128, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x1127, .value=0xd0, .type=IO_READ},
        {.addr=0x1128, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0236) {
    const struct CPU_State initial_cpu = {.pc=0x65de, .a=0xb5, .x=0xab, .y=0xa9, .sp=0x4f, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x65de, .value=0xd0}, {.addr=0x65df, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x65e0, .a=0xb5, .x=0xab, .y=0xa9, .sp=0x4f, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x65de, .value=0xd0}, {.addr=0x65df, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x65de, .value=0xd0, .type=IO_READ},
        {.addr=0x65df, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0237) {
    const struct CPU_State initial_cpu = {.pc=0x8dd1, .a=0xce, .x=0x0b, .y=0x68, .sp=0xfc, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd1, .value=0xd0}, {.addr=0x8dd2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8dd3, .a=0xce, .x=0x0b, .y=0x68, .sp=0xfc, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x8dd1, .value=0xd0}, {.addr=0x8dd2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8dd1, .value=0xd0, .type=IO_READ},
        {.addr=0x8dd2, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0238) {
    const struct CPU_State initial_cpu = {.pc=0xb9a4, .a=0x8f, .x=0xa3, .y=0xf9, .sp=0x6f, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xb9a4, .value=0xd0}, {.addr=0xb9a5, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xb94a, .a=0x8f, .x=0xa3, .y=0xf9, .sp=0x6f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb9a4, .value=0xd0}, {.addr=0xb9a5, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xb9a4, .value=0xd0, .type=IO_READ},
        {.addr=0xb9a5, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0239) {
    const struct CPU_State initial_cpu = {.pc=0x0469, .a=0x3c, .x=0x25, .y=0x75, .sp=0x5f, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0469, .value=0xd0}, {.addr=0x046a, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x04db, .a=0x3c, .x=0x25, .y=0x75, .sp=0x5f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0469, .value=0xd0}, {.addr=0x046a, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x0469, .value=0xd0, .type=IO_READ},
        {.addr=0x046a, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_023A) {
    const struct CPU_State initial_cpu = {.pc=0x471f, .a=0x5b, .x=0xef, .y=0x33, .sp=0x5c, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x471f, .value=0xd0}, {.addr=0x4720, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x4721, .a=0x5b, .x=0xef, .y=0x33, .sp=0x5c, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x471f, .value=0xd0}, {.addr=0x4720, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x471f, .value=0xd0, .type=IO_READ},
        {.addr=0x4720, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_023B) {
    const struct CPU_State initial_cpu = {.pc=0x4889, .a=0x44, .x=0x6c, .y=0x26, .sp=0xca, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x4889, .value=0xd0}, {.addr=0x488a, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x4860, .a=0x44, .x=0x6c, .y=0x26, .sp=0xca, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4889, .value=0xd0}, {.addr=0x488a, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x4889, .value=0xd0, .type=IO_READ},
        {.addr=0x488a, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_023C) {
    const struct CPU_State initial_cpu = {.pc=0x3647, .a=0xb6, .x=0xef, .y=0x01, .sp=0xcf, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3647, .value=0xd0}, {.addr=0x3648, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x35e7, .a=0xb6, .x=0xef, .y=0x01, .sp=0xcf, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3647, .value=0xd0}, {.addr=0x3648, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x3647, .value=0xd0, .type=IO_READ},
        {.addr=0x3648, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_023D) {
    const struct CPU_State initial_cpu = {.pc=0x87fa, .a=0xef, .x=0x53, .y=0x75, .sp=0xdd, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x87fa, .value=0xd0}, {.addr=0x87fb, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x87fc, .a=0xef, .x=0x53, .y=0x75, .sp=0xdd, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x87fa, .value=0xd0}, {.addr=0x87fb, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x87fa, .value=0xd0, .type=IO_READ},
        {.addr=0x87fb, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_023E) {
    const struct CPU_State initial_cpu = {.pc=0x5e76, .a=0x16, .x=0xd7, .y=0x9f, .sp=0x0a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x5e76, .value=0xd0}, {.addr=0x5e77, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x5e78, .a=0x16, .x=0xd7, .y=0x9f, .sp=0x0a, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x5e76, .value=0xd0}, {.addr=0x5e77, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x5e76, .value=0xd0, .type=IO_READ},
        {.addr=0x5e77, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_023F) {
    const struct CPU_State initial_cpu = {.pc=0x3f41, .a=0xd5, .x=0x54, .y=0x0c, .sp=0xd2, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3f41, .value=0xd0}, {.addr=0x3f42, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x3ef3, .a=0xd5, .x=0x54, .y=0x0c, .sp=0xd2, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3f41, .value=0xd0}, {.addr=0x3f42, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x3f41, .value=0xd0, .type=IO_READ},
        {.addr=0x3f42, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0240) {
    const struct CPU_State initial_cpu = {.pc=0x0e93, .a=0x9f, .x=0x03, .y=0x60, .sp=0x81, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0e93, .value=0xd0}, {.addr=0x0e94, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x0eca, .a=0x9f, .x=0x03, .y=0x60, .sp=0x81, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0e93, .value=0xd0}, {.addr=0x0e94, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x0e93, .value=0xd0, .type=IO_READ},
        {.addr=0x0e94, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0241) {
    const struct CPU_State initial_cpu = {.pc=0x59cf, .a=0xe6, .x=0x09, .y=0xdd, .sp=0xc4, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x59cf, .value=0xd0}, {.addr=0x59d0, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x5981, .a=0xe6, .x=0x09, .y=0xdd, .sp=0xc4, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x59cf, .value=0xd0}, {.addr=0x59d0, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x59cf, .value=0xd0, .type=IO_READ},
        {.addr=0x59d0, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0242) {
    const struct CPU_State initial_cpu = {.pc=0x59fe, .a=0xcb, .x=0x20, .y=0xa8, .sp=0x77, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x59fe, .value=0xd0}, {.addr=0x59ff, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x5989, .a=0xcb, .x=0x20, .y=0xa8, .sp=0x77, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x59fe, .value=0xd0}, {.addr=0x59ff, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x59fe, .value=0xd0, .type=IO_READ},
        {.addr=0x59ff, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0243) {
    const struct CPU_State initial_cpu = {.pc=0xecc0, .a=0xdc, .x=0x30, .y=0x2e, .sp=0x58, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xecc0, .value=0xd0}, {.addr=0xecc1, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xecc2, .a=0xdc, .x=0x30, .y=0x2e, .sp=0x58, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xecc0, .value=0xd0}, {.addr=0xecc1, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xecc0, .value=0xd0, .type=IO_READ},
        {.addr=0xecc1, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0244) {
    const struct CPU_State initial_cpu = {.pc=0xe031, .a=0x7d, .x=0x7b, .y=0xdc, .sp=0xf9, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xe031, .value=0xd0}, {.addr=0xe032, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xe01c, .a=0x7d, .x=0x7b, .y=0xdc, .sp=0xf9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xe031, .value=0xd0}, {.addr=0xe032, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xe031, .value=0xd0, .type=IO_READ},
        {.addr=0xe032, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0245) {
    const struct CPU_State initial_cpu = {.pc=0xf60b, .a=0xfe, .x=0x8b, .y=0xc4, .sp=0x26, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf60b, .value=0xd0}, {.addr=0xf60c, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xf60d, .a=0xfe, .x=0x8b, .y=0xc4, .sp=0x26, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xf60b, .value=0xd0}, {.addr=0xf60c, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xf60b, .value=0xd0, .type=IO_READ},
        {.addr=0xf60c, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0246) {
    const struct CPU_State initial_cpu = {.pc=0xe80f, .a=0x09, .x=0x75, .y=0xb7, .sp=0xbd, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xe80f, .value=0xd0}, {.addr=0xe810, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xe811, .a=0x09, .x=0x75, .y=0xb7, .sp=0xbd, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xe80f, .value=0xd0}, {.addr=0xe810, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xe80f, .value=0xd0, .type=IO_READ},
        {.addr=0xe810, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0247) {
    const struct CPU_State initial_cpu = {.pc=0x8aad, .a=0x8e, .x=0xc9, .y=0x95, .sp=0x6a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x8aad, .value=0xd0}, {.addr=0x8aae, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8a35, .a=0x8e, .x=0xc9, .y=0x95, .sp=0x6a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x8aad, .value=0xd0}, {.addr=0x8aae, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8aad, .value=0xd0, .type=IO_READ},
        {.addr=0x8aae, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0248) {
    const struct CPU_State initial_cpu = {.pc=0x0dcd, .a=0x8b, .x=0xac, .y=0xf1, .sp=0x45, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0dcd, .value=0xd0}, {.addr=0x0dce, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x0dcf, .a=0x8b, .x=0xac, .y=0xf1, .sp=0x45, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0dcd, .value=0xd0}, {.addr=0x0dce, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x0dcd, .value=0xd0, .type=IO_READ},
        {.addr=0x0dce, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0249) {
    const struct CPU_State initial_cpu = {.pc=0xff93, .a=0x97, .x=0x39, .y=0xee, .sp=0x8b, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xff93, .value=0xd0}, {.addr=0xff94, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xff2d, .a=0x97, .x=0x39, .y=0xee, .sp=0x8b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xff93, .value=0xd0}, {.addr=0xff94, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xff93, .value=0xd0, .type=IO_READ},
        {.addr=0xff94, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_024A) {
    const struct CPU_State initial_cpu = {.pc=0x0191, .a=0xac, .x=0xda, .y=0x83, .sp=0xca, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0xd0}, {.addr=0x0192, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x0193, .a=0xac, .x=0xda, .y=0x83, .sp=0xca, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xd0}, {.addr=0x0192, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x0191, .value=0xd0, .type=IO_READ},
        {.addr=0x0192, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_024B) {
    const struct CPU_State initial_cpu = {.pc=0x298b, .a=0x61, .x=0x97, .y=0x58, .sp=0x4c, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x298b, .value=0xd0}, {.addr=0x298c, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x29c2, .a=0x61, .x=0x97, .y=0x58, .sp=0x4c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x298b, .value=0xd0}, {.addr=0x298c, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x298b, .value=0xd0, .type=IO_READ},
        {.addr=0x298c, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_024C) {
    const struct CPU_State initial_cpu = {.pc=0x74c3, .a=0x17, .x=0xd1, .y=0xee, .sp=0xd3, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x74c3, .value=0xd0}, {.addr=0x74c4, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x74c5, .a=0x17, .x=0xd1, .y=0xee, .sp=0xd3, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x74c3, .value=0xd0}, {.addr=0x74c4, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x74c3, .value=0xd0, .type=IO_READ},
        {.addr=0x74c4, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_024D) {
    const struct CPU_State initial_cpu = {.pc=0xee64, .a=0x6f, .x=0xa1, .y=0x6a, .sp=0x16, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xee64, .value=0xd0}, {.addr=0xee65, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xedee, .a=0x6f, .x=0xa1, .y=0x6a, .sp=0x16, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xee64, .value=0xd0}, {.addr=0xee65, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xee64, .value=0xd0, .type=IO_READ},
        {.addr=0xee65, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_024E) {
    const struct CPU_State initial_cpu = {.pc=0x3063, .a=0xdf, .x=0xa0, .y=0x10, .sp=0x4e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x3063, .value=0xd0}, {.addr=0x3064, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x3065, .a=0xdf, .x=0xa0, .y=0x10, .sp=0x4e, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x3063, .value=0xd0}, {.addr=0x3064, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x3063, .value=0xd0, .type=IO_READ},
        {.addr=0x3064, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_024F) {
    const struct CPU_State initial_cpu = {.pc=0xfd5c, .a=0x5b, .x=0x52, .y=0xee, .sp=0x34, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xfd5c, .value=0xd0}, {.addr=0xfd5d, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xfce6, .a=0x5b, .x=0x52, .y=0xee, .sp=0x34, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xfd5c, .value=0xd0}, {.addr=0xfd5d, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xfd5c, .value=0xd0, .type=IO_READ},
        {.addr=0xfd5d, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0250) {
    const struct CPU_State initial_cpu = {.pc=0xa44a, .a=0x51, .x=0x73, .y=0x97, .sp=0x4a, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xa44a, .value=0xd0}, {.addr=0xa44b, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xa44c, .a=0x51, .x=0x73, .y=0x97, .sp=0x4a, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xa44a, .value=0xd0}, {.addr=0xa44b, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xa44a, .value=0xd0, .type=IO_READ},
        {.addr=0xa44b, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0251) {
    const struct CPU_State initial_cpu = {.pc=0xe0eb, .a=0xc6, .x=0x17, .y=0x0f, .sp=0x05, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xe0eb, .value=0xd0}, {.addr=0xe0ec, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe0ed, .a=0xc6, .x=0x17, .y=0x0f, .sp=0x05, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xe0eb, .value=0xd0}, {.addr=0xe0ec, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe0eb, .value=0xd0, .type=IO_READ},
        {.addr=0xe0ec, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0252) {
    const struct CPU_State initial_cpu = {.pc=0x9fe9, .a=0xa7, .x=0x75, .y=0xbd, .sp=0x93, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe9, .value=0xd0}, {.addr=0x9fea, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xa054, .a=0xa7, .x=0x75, .y=0xbd, .sp=0x93, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9fe9, .value=0xd0}, {.addr=0x9fea, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x9fe9, .value=0xd0, .type=IO_READ},
        {.addr=0x9fea, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0253) {
    const struct CPU_State initial_cpu = {.pc=0x8030, .a=0x53, .x=0x6c, .y=0xdf, .sp=0x61, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x8030, .value=0xd0}, {.addr=0x8031, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8032, .a=0x53, .x=0x6c, .y=0xdf, .sp=0x61, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x8030, .value=0xd0}, {.addr=0x8031, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8030, .value=0xd0, .type=IO_READ},
        {.addr=0x8031, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0254) {
    const struct CPU_State initial_cpu = {.pc=0xa0f4, .a=0x46, .x=0x06, .y=0xe2, .sp=0x40, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xa0f4, .value=0xd0}, {.addr=0xa0f5, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xa16f, .a=0x46, .x=0x06, .y=0xe2, .sp=0x40, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa0f4, .value=0xd0}, {.addr=0xa0f5, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xa0f4, .value=0xd0, .type=IO_READ},
        {.addr=0xa0f5, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0255) {
    const struct CPU_State initial_cpu = {.pc=0x43f7, .a=0xe4, .x=0x7c, .y=0x30, .sp=0xc7, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x43f7, .value=0xd0}, {.addr=0x43f8, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x43f9, .a=0xe4, .x=0x7c, .y=0x30, .sp=0xc7, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x43f7, .value=0xd0}, {.addr=0x43f8, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x43f7, .value=0xd0, .type=IO_READ},
        {.addr=0x43f8, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0256) {
    const struct CPU_State initial_cpu = {.pc=0x35bb, .a=0xa2, .x=0xc2, .y=0xc5, .sp=0x1b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x35bb, .value=0xd0}, {.addr=0x35bc, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x3568, .a=0xa2, .x=0xc2, .y=0xc5, .sp=0x1b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x35bb, .value=0xd0}, {.addr=0x35bc, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x35bb, .value=0xd0, .type=IO_READ},
        {.addr=0x35bc, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0257) {
    const struct CPU_State initial_cpu = {.pc=0x3f96, .a=0x5f, .x=0xa1, .y=0x08, .sp=0xc3, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x3f96, .value=0xd0}, {.addr=0x3f97, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x3f2f, .a=0x5f, .x=0xa1, .y=0x08, .sp=0xc3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3f96, .value=0xd0}, {.addr=0x3f97, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x3f96, .value=0xd0, .type=IO_READ},
        {.addr=0x3f97, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0258) {
    const struct CPU_State initial_cpu = {.pc=0x4aad, .a=0x88, .x=0x17, .y=0xa1, .sp=0xc2, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4aad, .value=0xd0}, {.addr=0x4aae, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x4aaf, .a=0x88, .x=0x17, .y=0xa1, .sp=0xc2, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x4aad, .value=0xd0}, {.addr=0x4aae, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x4aad, .value=0xd0, .type=IO_READ},
        {.addr=0x4aae, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0259) {
    const struct CPU_State initial_cpu = {.pc=0xb0bd, .a=0x3d, .x=0x42, .y=0x15, .sp=0x5d, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xb0bd, .value=0xd0}, {.addr=0xb0be, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xb0b6, .a=0x3d, .x=0x42, .y=0x15, .sp=0x5d, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb0bd, .value=0xd0}, {.addr=0xb0be, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xb0bd, .value=0xd0, .type=IO_READ},
        {.addr=0xb0be, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_025A) {
    const struct CPU_State initial_cpu = {.pc=0x3a0f, .a=0xc5, .x=0x04, .y=0x56, .sp=0xe4, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0f, .value=0xd0}, {.addr=0x3a10, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x3a11, .a=0xc5, .x=0x04, .y=0x56, .sp=0xe4, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x3a0f, .value=0xd0}, {.addr=0x3a10, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x3a0f, .value=0xd0, .type=IO_READ},
        {.addr=0x3a10, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_025B) {
    const struct CPU_State initial_cpu = {.pc=0x3479, .a=0x22, .x=0x86, .y=0x76, .sp=0xa3, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x3479, .value=0xd0}, {.addr=0x347a, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x347b, .a=0x22, .x=0x86, .y=0x76, .sp=0xa3, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x3479, .value=0xd0}, {.addr=0x347a, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x3479, .value=0xd0, .type=IO_READ},
        {.addr=0x347a, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_025C) {
    const struct CPU_State initial_cpu = {.pc=0x7fae, .a=0xe9, .x=0x11, .y=0xe1, .sp=0xad, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x7fae, .value=0xd0}, {.addr=0x7faf, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x7fb0, .a=0xe9, .x=0x11, .y=0xe1, .sp=0xad, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x7fae, .value=0xd0}, {.addr=0x7faf, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x7fae, .value=0xd0, .type=IO_READ},
        {.addr=0x7faf, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_025D) {
    const struct CPU_State initial_cpu = {.pc=0xaaca, .a=0x01, .x=0x24, .y=0xa1, .sp=0xe4, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xaaca, .value=0xd0}, {.addr=0xaacb, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xaa5e, .a=0x01, .x=0x24, .y=0xa1, .sp=0xe4, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xaaca, .value=0xd0}, {.addr=0xaacb, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xaaca, .value=0xd0, .type=IO_READ},
        {.addr=0xaacb, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_025E) {
    const struct CPU_State initial_cpu = {.pc=0x23d6, .a=0x71, .x=0xf6, .y=0x10, .sp=0x86, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x23d6, .value=0xd0}, {.addr=0x23d7, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x23d8, .a=0x71, .x=0xf6, .y=0x10, .sp=0x86, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x23d6, .value=0xd0}, {.addr=0x23d7, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x23d6, .value=0xd0, .type=IO_READ},
        {.addr=0x23d7, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_025F) {
    const struct CPU_State initial_cpu = {.pc=0xb9c5, .a=0x38, .x=0x57, .y=0x49, .sp=0x3c, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xb9c5, .value=0xd0}, {.addr=0xb9c6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb9c7, .a=0x38, .x=0x57, .y=0x49, .sp=0x3c, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xb9c5, .value=0xd0}, {.addr=0xb9c6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb9c5, .value=0xd0, .type=IO_READ},
        {.addr=0xb9c6, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0260) {
    const struct CPU_State initial_cpu = {.pc=0xb934, .a=0x8e, .x=0xf9, .y=0x35, .sp=0x25, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xb934, .value=0xd0}, {.addr=0xb935, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xb8cd, .a=0x8e, .x=0xf9, .y=0x35, .sp=0x25, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb934, .value=0xd0}, {.addr=0xb935, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xb934, .value=0xd0, .type=IO_READ},
        {.addr=0xb935, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0261) {
    const struct CPU_State initial_cpu = {.pc=0x3b7e, .a=0xca, .x=0x72, .y=0x17, .sp=0xdf, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x3b7e, .value=0xd0}, {.addr=0x3b7f, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x3b98, .a=0xca, .x=0x72, .y=0x17, .sp=0xdf, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3b7e, .value=0xd0}, {.addr=0x3b7f, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x3b7e, .value=0xd0, .type=IO_READ},
        {.addr=0x3b7f, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0262) {
    const struct CPU_State initial_cpu = {.pc=0x1fdb, .a=0xff, .x=0x61, .y=0x90, .sp=0xe3, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x1fdb, .value=0xd0}, {.addr=0x1fdc, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x1fdd, .a=0xff, .x=0x61, .y=0x90, .sp=0xe3, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x1fdb, .value=0xd0}, {.addr=0x1fdc, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x1fdb, .value=0xd0, .type=IO_READ},
        {.addr=0x1fdc, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0263) {
    const struct CPU_State initial_cpu = {.pc=0xa411, .a=0x4a, .x=0xb8, .y=0x4c, .sp=0x24, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xa411, .value=0xd0}, {.addr=0xa412, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xa39d, .a=0x4a, .x=0xb8, .y=0x4c, .sp=0x24, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa411, .value=0xd0}, {.addr=0xa412, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xa411, .value=0xd0, .type=IO_READ},
        {.addr=0xa412, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0264) {
    const struct CPU_State initial_cpu = {.pc=0xd027, .a=0x47, .x=0xde, .y=0xad, .sp=0x7b, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xd027, .value=0xd0}, {.addr=0xd028, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xd029, .a=0x47, .x=0xde, .y=0xad, .sp=0x7b, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xd027, .value=0xd0}, {.addr=0xd028, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xd027, .value=0xd0, .type=IO_READ},
        {.addr=0xd028, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0265) {
    const struct CPU_State initial_cpu = {.pc=0x6b4a, .a=0x14, .x=0x21, .y=0x42, .sp=0xc1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x6b4a, .value=0xd0}, {.addr=0x6b4b, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x6b4c, .a=0x14, .x=0x21, .y=0x42, .sp=0xc1, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x6b4a, .value=0xd0}, {.addr=0x6b4b, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x6b4a, .value=0xd0, .type=IO_READ},
        {.addr=0x6b4b, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0266) {
    const struct CPU_State initial_cpu = {.pc=0xe982, .a=0xcc, .x=0xeb, .y=0xc1, .sp=0xf1, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xe982, .value=0xd0}, {.addr=0xe983, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xe984, .a=0xcc, .x=0xeb, .y=0xc1, .sp=0xf1, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xe982, .value=0xd0}, {.addr=0xe983, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xe982, .value=0xd0, .type=IO_READ},
        {.addr=0xe983, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0267) {
    const struct CPU_State initial_cpu = {.pc=0xa154, .a=0x6c, .x=0x00, .y=0x5a, .sp=0x07, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xa154, .value=0xd0}, {.addr=0xa155, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xa156, .a=0x6c, .x=0x00, .y=0x5a, .sp=0x07, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xa154, .value=0xd0}, {.addr=0xa155, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xa154, .value=0xd0, .type=IO_READ},
        {.addr=0xa155, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0268) {
    const struct CPU_State initial_cpu = {.pc=0x2102, .a=0x1f, .x=0x4d, .y=0x90, .sp=0x7a, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x2102, .value=0xd0}, {.addr=0x2103, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x2104, .a=0x1f, .x=0x4d, .y=0x90, .sp=0x7a, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x2102, .value=0xd0}, {.addr=0x2103, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x2102, .value=0xd0, .type=IO_READ},
        {.addr=0x2103, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0269) {
    const struct CPU_State initial_cpu = {.pc=0xe553, .a=0x84, .x=0x59, .y=0xd3, .sp=0x13, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xe553, .value=0xd0}, {.addr=0xe554, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xe4ff, .a=0x84, .x=0x59, .y=0xd3, .sp=0x13, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xe553, .value=0xd0}, {.addr=0xe554, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xe553, .value=0xd0, .type=IO_READ},
        {.addr=0xe554, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_026A) {
    const struct CPU_State initial_cpu = {.pc=0xa8a3, .a=0x99, .x=0x4c, .y=0x1b, .sp=0x55, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xa8a3, .value=0xd0}, {.addr=0xa8a4, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xa866, .a=0x99, .x=0x4c, .y=0x1b, .sp=0x55, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xa8a3, .value=0xd0}, {.addr=0xa8a4, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xa8a3, .value=0xd0, .type=IO_READ},
        {.addr=0xa8a4, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_026B) {
    const struct CPU_State initial_cpu = {.pc=0xa0e9, .a=0xb0, .x=0x8d, .y=0x7c, .sp=0xa3, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xa0e9, .value=0xd0}, {.addr=0xa0ea, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa10b, .a=0xb0, .x=0x8d, .y=0x7c, .sp=0xa3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xa0e9, .value=0xd0}, {.addr=0xa0ea, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa0e9, .value=0xd0, .type=IO_READ},
        {.addr=0xa0ea, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_026C) {
    const struct CPU_State initial_cpu = {.pc=0x37fb, .a=0xc1, .x=0xb2, .y=0x1b, .sp=0xa5, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x37fb, .value=0xd0}, {.addr=0x37fc, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x37fd, .a=0xc1, .x=0xb2, .y=0x1b, .sp=0xa5, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x37fb, .value=0xd0}, {.addr=0x37fc, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x37fb, .value=0xd0, .type=IO_READ},
        {.addr=0x37fc, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_026D) {
    const struct CPU_State initial_cpu = {.pc=0xa0bf, .a=0x57, .x=0x77, .y=0xb5, .sp=0x73, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xa0bf, .value=0xd0}, {.addr=0xa0c0, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xa0c1, .a=0x57, .x=0x77, .y=0xb5, .sp=0x73, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xa0bf, .value=0xd0}, {.addr=0xa0c0, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xa0bf, .value=0xd0, .type=IO_READ},
        {.addr=0xa0c0, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_026E) {
    const struct CPU_State initial_cpu = {.pc=0x6aa8, .a=0x81, .x=0x86, .y=0xa4, .sp=0x65, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x6aa8, .value=0xd0}, {.addr=0x6aa9, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x6af9, .a=0x81, .x=0x86, .y=0xa4, .sp=0x65, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6aa8, .value=0xd0}, {.addr=0x6aa9, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x6aa8, .value=0xd0, .type=IO_READ},
        {.addr=0x6aa9, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_026F) {
    const struct CPU_State initial_cpu = {.pc=0x2388, .a=0x00, .x=0x37, .y=0x41, .sp=0xed, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x2388, .value=0xd0}, {.addr=0x2389, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x2353, .a=0x00, .x=0x37, .y=0x41, .sp=0xed, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2388, .value=0xd0}, {.addr=0x2389, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x2388, .value=0xd0, .type=IO_READ},
        {.addr=0x2389, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0270) {
    const struct CPU_State initial_cpu = {.pc=0x3c3f, .a=0x60, .x=0x12, .y=0x6d, .sp=0x85, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x3c3f, .value=0xd0}, {.addr=0x3c40, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x3c41, .a=0x60, .x=0x12, .y=0x6d, .sp=0x85, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x3c3f, .value=0xd0}, {.addr=0x3c40, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x3c3f, .value=0xd0, .type=IO_READ},
        {.addr=0x3c40, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0271) {
    const struct CPU_State initial_cpu = {.pc=0xf239, .a=0x58, .x=0x6d, .y=0x03, .sp=0xb2, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xf239, .value=0xd0}, {.addr=0xf23a, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xf25c, .a=0x58, .x=0x6d, .y=0x03, .sp=0xb2, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xf239, .value=0xd0}, {.addr=0xf23a, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xf239, .value=0xd0, .type=IO_READ},
        {.addr=0xf23a, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0272) {
    const struct CPU_State initial_cpu = {.pc=0x8fda, .a=0x84, .x=0x7c, .y=0x8b, .sp=0xc9, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x8fda, .value=0xd0}, {.addr=0x8fdb, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x8fe9, .a=0x84, .x=0x7c, .y=0x8b, .sp=0xc9, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8fda, .value=0xd0}, {.addr=0x8fdb, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x8fda, .value=0xd0, .type=IO_READ},
        {.addr=0x8fdb, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0273) {
    const struct CPU_State initial_cpu = {.pc=0xd865, .a=0x75, .x=0xb6, .y=0xa0, .sp=0x72, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xd865, .value=0xd0}, {.addr=0xd866, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xd848, .a=0x75, .x=0xb6, .y=0xa0, .sp=0x72, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xd865, .value=0xd0}, {.addr=0xd866, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xd865, .value=0xd0, .type=IO_READ},
        {.addr=0xd866, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0274) {
    const struct CPU_State initial_cpu = {.pc=0x48a7, .a=0x8d, .x=0x3b, .y=0x43, .sp=0x59, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x48a7, .value=0xd0}, {.addr=0x48a8, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x48ed, .a=0x8d, .x=0x3b, .y=0x43, .sp=0x59, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x48a7, .value=0xd0}, {.addr=0x48a8, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x48a7, .value=0xd0, .type=IO_READ},
        {.addr=0x48a8, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0275) {
    const struct CPU_State initial_cpu = {.pc=0xe12c, .a=0xe1, .x=0x81, .y=0xa1, .sp=0xd3, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xe12c, .value=0xd0}, {.addr=0xe12d, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xe0b7, .a=0xe1, .x=0x81, .y=0xa1, .sp=0xd3, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe12c, .value=0xd0}, {.addr=0xe12d, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xe12c, .value=0xd0, .type=IO_READ},
        {.addr=0xe12d, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0276) {
    const struct CPU_State initial_cpu = {.pc=0x3be2, .a=0x0d, .x=0x0b, .y=0x39, .sp=0xbb, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x3be2, .value=0xd0}, {.addr=0x3be3, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x3bba, .a=0x0d, .x=0x0b, .y=0x39, .sp=0xbb, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x3be2, .value=0xd0}, {.addr=0x3be3, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x3be2, .value=0xd0, .type=IO_READ},
        {.addr=0x3be3, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0277) {
    const struct CPU_State initial_cpu = {.pc=0x7cad, .a=0xa8, .x=0x44, .y=0xa0, .sp=0xeb, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x7cad, .value=0xd0}, {.addr=0x7cae, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x7d01, .a=0xa8, .x=0x44, .y=0xa0, .sp=0xeb, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x7cad, .value=0xd0}, {.addr=0x7cae, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x7cad, .value=0xd0, .type=IO_READ},
        {.addr=0x7cae, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0278) {
    const struct CPU_State initial_cpu = {.pc=0x4925, .a=0x64, .x=0xd6, .y=0xac, .sp=0xe5, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x4925, .value=0xd0}, {.addr=0x4926, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x4927, .a=0x64, .x=0xd6, .y=0xac, .sp=0xe5, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x4925, .value=0xd0}, {.addr=0x4926, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x4925, .value=0xd0, .type=IO_READ},
        {.addr=0x4926, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0279) {
    const struct CPU_State initial_cpu = {.pc=0x449f, .a=0xe6, .x=0x42, .y=0x45, .sp=0x1c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x449f, .value=0xd0}, {.addr=0x44a0, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x44a1, .a=0xe6, .x=0x42, .y=0x45, .sp=0x1c, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x449f, .value=0xd0}, {.addr=0x44a0, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x449f, .value=0xd0, .type=IO_READ},
        {.addr=0x44a0, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_027A) {
    const struct CPU_State initial_cpu = {.pc=0xe738, .a=0x7f, .x=0xcb, .y=0x66, .sp=0x1d, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xe738, .value=0xd0}, {.addr=0xe739, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xe73a, .a=0x7f, .x=0xcb, .y=0x66, .sp=0x1d, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xe738, .value=0xd0}, {.addr=0xe739, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xe738, .value=0xd0, .type=IO_READ},
        {.addr=0xe739, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_027B) {
    const struct CPU_State initial_cpu = {.pc=0xdb20, .a=0xa0, .x=0x15, .y=0x42, .sp=0x2d, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xdb20, .value=0xd0}, {.addr=0xdb21, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xdb87, .a=0xa0, .x=0x15, .y=0x42, .sp=0x2d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xdb20, .value=0xd0}, {.addr=0xdb21, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xdb20, .value=0xd0, .type=IO_READ},
        {.addr=0xdb21, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_027C) {
    const struct CPU_State initial_cpu = {.pc=0xe205, .a=0xcd, .x=0x9b, .y=0xce, .sp=0x4c, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xe205, .value=0xd0}, {.addr=0xe206, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xe207, .a=0xcd, .x=0x9b, .y=0xce, .sp=0x4c, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xe205, .value=0xd0}, {.addr=0xe206, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xe205, .value=0xd0, .type=IO_READ},
        {.addr=0xe206, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_027D) {
    const struct CPU_State initial_cpu = {.pc=0xe706, .a=0x5c, .x=0xb1, .y=0xb1, .sp=0xf0, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xe706, .value=0xd0}, {.addr=0xe707, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xe773, .a=0x5c, .x=0xb1, .y=0xb1, .sp=0xf0, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xe706, .value=0xd0}, {.addr=0xe707, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xe706, .value=0xd0, .type=IO_READ},
        {.addr=0xe707, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_027E) {
    const struct CPU_State initial_cpu = {.pc=0x5ff3, .a=0x2c, .x=0xab, .y=0x5c, .sp=0xf6, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x5ff3, .value=0xd0}, {.addr=0x5ff4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5ff5, .a=0x2c, .x=0xab, .y=0x5c, .sp=0xf6, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x5ff3, .value=0xd0}, {.addr=0x5ff4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5ff3, .value=0xd0, .type=IO_READ},
        {.addr=0x5ff4, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_027F) {
    const struct CPU_State initial_cpu = {.pc=0xbdc7, .a=0x50, .x=0x0a, .y=0x8b, .sp=0xe9, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xbdc7, .value=0xd0}, {.addr=0xbdc8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbdef, .a=0x50, .x=0x0a, .y=0x8b, .sp=0xe9, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xbdc7, .value=0xd0}, {.addr=0xbdc8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbdc7, .value=0xd0, .type=IO_READ},
        {.addr=0xbdc8, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0280) {
    const struct CPU_State initial_cpu = {.pc=0x86ed, .a=0x02, .x=0xa2, .y=0xae, .sp=0x02, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x86ed, .value=0xd0}, {.addr=0x86ee, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x86e6, .a=0x02, .x=0xa2, .y=0xae, .sp=0x02, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x86ed, .value=0xd0}, {.addr=0x86ee, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x86ed, .value=0xd0, .type=IO_READ},
        {.addr=0x86ee, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0281) {
    const struct CPU_State initial_cpu = {.pc=0x0d0b, .a=0x8a, .x=0x46, .y=0x3c, .sp=0x9f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0d0b, .value=0xd0}, {.addr=0x0d0c, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x0d0d, .a=0x8a, .x=0x46, .y=0x3c, .sp=0x9f, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0d0b, .value=0xd0}, {.addr=0x0d0c, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x0d0b, .value=0xd0, .type=IO_READ},
        {.addr=0x0d0c, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0282) {
    const struct CPU_State initial_cpu = {.pc=0x60b9, .a=0x7e, .x=0xa3, .y=0xde, .sp=0xba, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x60b9, .value=0xd0}, {.addr=0x60ba, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x60d5, .a=0x7e, .x=0xa3, .y=0xde, .sp=0xba, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x60b9, .value=0xd0}, {.addr=0x60ba, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x60b9, .value=0xd0, .type=IO_READ},
        {.addr=0x60ba, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0283) {
    const struct CPU_State initial_cpu = {.pc=0x782e, .a=0xed, .x=0xdc, .y=0x2f, .sp=0x18, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x782e, .value=0xd0}, {.addr=0x782f, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x7830, .a=0xed, .x=0xdc, .y=0x2f, .sp=0x18, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x782e, .value=0xd0}, {.addr=0x782f, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x782e, .value=0xd0, .type=IO_READ},
        {.addr=0x782f, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0284) {
    const struct CPU_State initial_cpu = {.pc=0x2fee, .a=0x88, .x=0x90, .y=0x66, .sp=0x8e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x2fee, .value=0xd0}, {.addr=0x2fef, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x2fc7, .a=0x88, .x=0x90, .y=0x66, .sp=0x8e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2fee, .value=0xd0}, {.addr=0x2fef, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x2fee, .value=0xd0, .type=IO_READ},
        {.addr=0x2fef, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0285) {
    const struct CPU_State initial_cpu = {.pc=0xb240, .a=0x25, .x=0xec, .y=0x3d, .sp=0x20, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xb240, .value=0xd0}, {.addr=0xb241, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xb242, .a=0x25, .x=0xec, .y=0x3d, .sp=0x20, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xb240, .value=0xd0}, {.addr=0xb241, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xb240, .value=0xd0, .type=IO_READ},
        {.addr=0xb241, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0286) {
    const struct CPU_State initial_cpu = {.pc=0x26fa, .a=0xe6, .x=0x6e, .y=0x00, .sp=0x4c, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x26fa, .value=0xd0}, {.addr=0x26fb, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x26fc, .a=0xe6, .x=0x6e, .y=0x00, .sp=0x4c, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x26fa, .value=0xd0}, {.addr=0x26fb, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x26fa, .value=0xd0, .type=IO_READ},
        {.addr=0x26fb, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0287) {
    const struct CPU_State initial_cpu = {.pc=0x2b25, .a=0x46, .x=0xf7, .y=0xcb, .sp=0x67, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2b25, .value=0xd0}, {.addr=0x2b26, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x2b9c, .a=0x46, .x=0xf7, .y=0xcb, .sp=0x67, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2b25, .value=0xd0}, {.addr=0x2b26, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x2b25, .value=0xd0, .type=IO_READ},
        {.addr=0x2b26, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0288) {
    const struct CPU_State initial_cpu = {.pc=0x4b08, .a=0x6b, .x=0x83, .y=0x18, .sp=0x36, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4b08, .value=0xd0}, {.addr=0x4b09, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4b87, .a=0x6b, .x=0x83, .y=0x18, .sp=0x36, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x4b08, .value=0xd0}, {.addr=0x4b09, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4b08, .value=0xd0, .type=IO_READ},
        {.addr=0x4b09, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0289) {
    const struct CPU_State initial_cpu = {.pc=0xd623, .a=0x0f, .x=0x39, .y=0xe8, .sp=0xd3, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xd623, .value=0xd0}, {.addr=0xd624, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xd5d0, .a=0x0f, .x=0x39, .y=0xe8, .sp=0xd3, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd623, .value=0xd0}, {.addr=0xd624, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xd623, .value=0xd0, .type=IO_READ},
        {.addr=0xd624, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_028A) {
    const struct CPU_State initial_cpu = {.pc=0x322d, .a=0xb9, .x=0xe8, .y=0x70, .sp=0xd1, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x322d, .value=0xd0}, {.addr=0x322e, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x32a2, .a=0xb9, .x=0xe8, .y=0x70, .sp=0xd1, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x322d, .value=0xd0}, {.addr=0x322e, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x322d, .value=0xd0, .type=IO_READ},
        {.addr=0x322e, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_028B) {
    const struct CPU_State initial_cpu = {.pc=0xb27a, .a=0x8e, .x=0x6b, .y=0xd5, .sp=0xcb, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xb27a, .value=0xd0}, {.addr=0xb27b, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xb27c, .a=0x8e, .x=0x6b, .y=0xd5, .sp=0xcb, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xb27a, .value=0xd0}, {.addr=0xb27b, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xb27a, .value=0xd0, .type=IO_READ},
        {.addr=0xb27b, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_028C) {
    const struct CPU_State initial_cpu = {.pc=0xc45b, .a=0xf7, .x=0x42, .y=0xd1, .sp=0x0e, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc45b, .value=0xd0}, {.addr=0xc45c, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xc45d, .a=0xf7, .x=0x42, .y=0xd1, .sp=0x0e, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xc45b, .value=0xd0}, {.addr=0xc45c, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xc45b, .value=0xd0, .type=IO_READ},
        {.addr=0xc45c, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_028D) {
    const struct CPU_State initial_cpu = {.pc=0xe03d, .a=0x9a, .x=0xeb, .y=0x0b, .sp=0x05, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xe03d, .value=0xd0}, {.addr=0xe03e, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xe078, .a=0x9a, .x=0xeb, .y=0x0b, .sp=0x05, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xe03d, .value=0xd0}, {.addr=0xe03e, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xe03d, .value=0xd0, .type=IO_READ},
        {.addr=0xe03e, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_028E) {
    const struct CPU_State initial_cpu = {.pc=0xe74b, .a=0xaa, .x=0x33, .y=0x10, .sp=0x16, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xe74b, .value=0xd0}, {.addr=0xe74c, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xe731, .a=0xaa, .x=0x33, .y=0x10, .sp=0x16, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe74b, .value=0xd0}, {.addr=0xe74c, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xe74b, .value=0xd0, .type=IO_READ},
        {.addr=0xe74c, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_028F) {
    const struct CPU_State initial_cpu = {.pc=0xe8ae, .a=0xf3, .x=0xdf, .y=0x8a, .sp=0xac, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe8ae, .value=0xd0}, {.addr=0xe8af, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xe8b0, .a=0xf3, .x=0xdf, .y=0x8a, .sp=0xac, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xe8ae, .value=0xd0}, {.addr=0xe8af, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xe8ae, .value=0xd0, .type=IO_READ},
        {.addr=0xe8af, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0290) {
    const struct CPU_State initial_cpu = {.pc=0xa2c2, .a=0x7b, .x=0xff, .y=0x53, .sp=0x7b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xa2c2, .value=0xd0}, {.addr=0xa2c3, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xa2c4, .a=0x7b, .x=0xff, .y=0x53, .sp=0x7b, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xa2c2, .value=0xd0}, {.addr=0xa2c3, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xa2c2, .value=0xd0, .type=IO_READ},
        {.addr=0xa2c3, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0291) {
    const struct CPU_State initial_cpu = {.pc=0xea5e, .a=0x68, .x=0xc2, .y=0x87, .sp=0x72, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xea5e, .value=0xd0}, {.addr=0xea5f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xeaad, .a=0x68, .x=0xc2, .y=0x87, .sp=0x72, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xea5e, .value=0xd0}, {.addr=0xea5f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xea5e, .value=0xd0, .type=IO_READ},
        {.addr=0xea5f, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0292) {
    const struct CPU_State initial_cpu = {.pc=0xdb85, .a=0xf6, .x=0x97, .y=0xdf, .sp=0x3f, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xdb85, .value=0xd0}, {.addr=0xdb86, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdb26, .a=0xf6, .x=0x97, .y=0xdf, .sp=0x3f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xdb85, .value=0xd0}, {.addr=0xdb86, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdb85, .value=0xd0, .type=IO_READ},
        {.addr=0xdb86, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0293) {
    const struct CPU_State initial_cpu = {.pc=0x0884, .a=0xe2, .x=0x60, .y=0x20, .sp=0x0e, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0884, .value=0xd0}, {.addr=0x0885, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x0886, .a=0xe2, .x=0x60, .y=0x20, .sp=0x0e, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0884, .value=0xd0}, {.addr=0x0885, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x0884, .value=0xd0, .type=IO_READ},
        {.addr=0x0885, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0294) {
    const struct CPU_State initial_cpu = {.pc=0x336b, .a=0x5f, .x=0x4f, .y=0xd0, .sp=0x17, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x336b, .value=0xd0}, {.addr=0x336c, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x3350, .a=0x5f, .x=0x4f, .y=0xd0, .sp=0x17, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x336b, .value=0xd0}, {.addr=0x336c, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x336b, .value=0xd0, .type=IO_READ},
        {.addr=0x336c, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0295) {
    const struct CPU_State initial_cpu = {.pc=0xf924, .a=0x30, .x=0x3c, .y=0x78, .sp=0x58, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xf924, .value=0xd0}, {.addr=0xf925, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xf926, .a=0x30, .x=0x3c, .y=0x78, .sp=0x58, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xf924, .value=0xd0}, {.addr=0xf925, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xf924, .value=0xd0, .type=IO_READ},
        {.addr=0xf925, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0296) {
    const struct CPU_State initial_cpu = {.pc=0xf4b9, .a=0x64, .x=0xbf, .y=0x49, .sp=0x50, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xf4b9, .value=0xd0}, {.addr=0xf4ba, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xf46b, .a=0x64, .x=0xbf, .y=0x49, .sp=0x50, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf4b9, .value=0xd0}, {.addr=0xf4ba, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xf4b9, .value=0xd0, .type=IO_READ},
        {.addr=0xf4ba, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0297) {
    const struct CPU_State initial_cpu = {.pc=0xb683, .a=0x26, .x=0xd9, .y=0x55, .sp=0x32, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xb683, .value=0xd0}, {.addr=0xb684, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xb685, .a=0x26, .x=0xd9, .y=0x55, .sp=0x32, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xb683, .value=0xd0}, {.addr=0xb684, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xb683, .value=0xd0, .type=IO_READ},
        {.addr=0xb684, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0298) {
    const struct CPU_State initial_cpu = {.pc=0x47b7, .a=0xcb, .x=0xb4, .y=0x76, .sp=0xae, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x47b7, .value=0xd0}, {.addr=0x47b8, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x47b9, .a=0xcb, .x=0xb4, .y=0x76, .sp=0xae, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x47b7, .value=0xd0}, {.addr=0x47b8, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x47b7, .value=0xd0, .type=IO_READ},
        {.addr=0x47b8, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0299) {
    const struct CPU_State initial_cpu = {.pc=0x9e31, .a=0x84, .x=0x3e, .y=0xa1, .sp=0x7d, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x9e31, .value=0xd0}, {.addr=0x9e32, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x9e33, .a=0x84, .x=0x3e, .y=0xa1, .sp=0x7d, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x9e31, .value=0xd0}, {.addr=0x9e32, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x9e31, .value=0xd0, .type=IO_READ},
        {.addr=0x9e32, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_029A) {
    const struct CPU_State initial_cpu = {.pc=0x7b28, .a=0x44, .x=0x64, .y=0xf7, .sp=0x01, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x7b28, .value=0xd0}, {.addr=0x7b29, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x7b39, .a=0x44, .x=0x64, .y=0xf7, .sp=0x01, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x7b28, .value=0xd0}, {.addr=0x7b29, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x7b28, .value=0xd0, .type=IO_READ},
        {.addr=0x7b29, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_029B) {
    const struct CPU_State initial_cpu = {.pc=0x2785, .a=0xb3, .x=0x4b, .y=0x3d, .sp=0xe7, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2785, .value=0xd0}, {.addr=0x2786, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x2787, .a=0xb3, .x=0x4b, .y=0x3d, .sp=0xe7, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x2785, .value=0xd0}, {.addr=0x2786, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x2785, .value=0xd0, .type=IO_READ},
        {.addr=0x2786, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_029C) {
    const struct CPU_State initial_cpu = {.pc=0xc0cb, .a=0x20, .x=0x3a, .y=0xfd, .sp=0xeb, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xc0cb, .value=0xd0}, {.addr=0xc0cc, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xc0cd, .a=0x20, .x=0x3a, .y=0xfd, .sp=0xeb, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xc0cb, .value=0xd0}, {.addr=0xc0cc, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xc0cb, .value=0xd0, .type=IO_READ},
        {.addr=0xc0cc, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_029D) {
    const struct CPU_State initial_cpu = {.pc=0x98c9, .a=0xf5, .x=0x9f, .y=0x6d, .sp=0xad, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x98c9, .value=0xd0}, {.addr=0x98ca, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x98cb, .a=0xf5, .x=0x9f, .y=0x6d, .sp=0xad, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x98c9, .value=0xd0}, {.addr=0x98ca, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x98c9, .value=0xd0, .type=IO_READ},
        {.addr=0x98ca, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_029E) {
    const struct CPU_State initial_cpu = {.pc=0x7f5f, .a=0xa7, .x=0x61, .y=0xc2, .sp=0xe0, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x7f5f, .value=0xd0}, {.addr=0x7f60, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x7f61, .a=0xa7, .x=0x61, .y=0xc2, .sp=0xe0, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x7f5f, .value=0xd0}, {.addr=0x7f60, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x7f5f, .value=0xd0, .type=IO_READ},
        {.addr=0x7f60, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_029F) {
    const struct CPU_State initial_cpu = {.pc=0xfe10, .a=0x51, .x=0x10, .y=0x89, .sp=0xe4, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xfe10, .value=0xd0}, {.addr=0xfe11, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xfe47, .a=0x51, .x=0x10, .y=0x89, .sp=0xe4, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xfe10, .value=0xd0}, {.addr=0xfe11, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xfe10, .value=0xd0, .type=IO_READ},
        {.addr=0xfe11, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xda37, .a=0xb8, .x=0xb4, .y=0x54, .sp=0xea, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xda37, .value=0xd0}, {.addr=0xda38, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xda39, .a=0xb8, .x=0xb4, .y=0x54, .sp=0xea, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xda37, .value=0xd0}, {.addr=0xda38, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xda37, .value=0xd0, .type=IO_READ},
        {.addr=0xda38, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x17b0, .a=0x4e, .x=0x01, .y=0xed, .sp=0xbf, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x17b0, .value=0xd0}, {.addr=0x17b1, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x17b2, .a=0x4e, .x=0x01, .y=0xed, .sp=0xbf, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x17b0, .value=0xd0}, {.addr=0x17b1, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x17b0, .value=0xd0, .type=IO_READ},
        {.addr=0x17b1, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xc80f, .a=0x95, .x=0xa9, .y=0xc2, .sp=0x8d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xc80f, .value=0xd0}, {.addr=0xc810, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xc7cb, .a=0x95, .x=0xa9, .y=0xc2, .sp=0x8d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc80f, .value=0xd0}, {.addr=0xc810, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xc80f, .value=0xd0, .type=IO_READ},
        {.addr=0xc810, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x6d91, .a=0x50, .x=0x7f, .y=0xec, .sp=0x1b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x6d91, .value=0xd0}, {.addr=0x6d92, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x6d93, .a=0x50, .x=0x7f, .y=0xec, .sp=0x1b, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x6d91, .value=0xd0}, {.addr=0x6d92, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x6d91, .value=0xd0, .type=IO_READ},
        {.addr=0x6d92, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x90af, .a=0x85, .x=0x8f, .y=0x45, .sp=0x2c, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x90af, .value=0xd0}, {.addr=0x90b0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x904e, .a=0x85, .x=0x8f, .y=0x45, .sp=0x2c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x90af, .value=0xd0}, {.addr=0x90b0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x90af, .value=0xd0, .type=IO_READ},
        {.addr=0x90b0, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x664b, .a=0xac, .x=0xfa, .y=0x0a, .sp=0x23, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x664b, .value=0xd0}, {.addr=0x664c, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x664d, .a=0xac, .x=0xfa, .y=0x0a, .sp=0x23, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x664b, .value=0xd0}, {.addr=0x664c, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x664b, .value=0xd0, .type=IO_READ},
        {.addr=0x664c, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xd638, .a=0x31, .x=0x8b, .y=0xc9, .sp=0x9c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xd638, .value=0xd0}, {.addr=0xd639, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xd5f2, .a=0x31, .x=0x8b, .y=0xc9, .sp=0x9c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd638, .value=0xd0}, {.addr=0xd639, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xd638, .value=0xd0, .type=IO_READ},
        {.addr=0xd639, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x4913, .a=0xe3, .x=0xd7, .y=0xff, .sp=0xd8, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x4913, .value=0xd0}, {.addr=0x4914, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x4905, .a=0xe3, .x=0xd7, .y=0xff, .sp=0xd8, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x4913, .value=0xd0}, {.addr=0x4914, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x4913, .value=0xd0, .type=IO_READ},
        {.addr=0x4914, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xc11d, .a=0x28, .x=0x8d, .y=0xcc, .sp=0x8b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xc11d, .value=0xd0}, {.addr=0xc11e, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xc15d, .a=0x28, .x=0x8d, .y=0xcc, .sp=0x8b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xc11d, .value=0xd0}, {.addr=0xc11e, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xc11d, .value=0xd0, .type=IO_READ},
        {.addr=0xc11e, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xfae5, .a=0x88, .x=0x05, .y=0x86, .sp=0xc2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xfae5, .value=0xd0}, {.addr=0xfae6, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xfae7, .a=0x88, .x=0x05, .y=0x86, .sp=0xc2, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xfae5, .value=0xd0}, {.addr=0xfae6, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xfae5, .value=0xd0, .type=IO_READ},
        {.addr=0xfae6, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xb167, .a=0xa7, .x=0x2e, .y=0x24, .sp=0x6e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb167, .value=0xd0}, {.addr=0xb168, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xb172, .a=0xa7, .x=0x2e, .y=0x24, .sp=0x6e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb167, .value=0xd0}, {.addr=0xb168, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xb167, .value=0xd0, .type=IO_READ},
        {.addr=0xb168, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x6015, .a=0x1e, .x=0x1e, .y=0x49, .sp=0x50, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x6015, .value=0xd0}, {.addr=0x6016, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x6042, .a=0x1e, .x=0x1e, .y=0x49, .sp=0x50, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x6015, .value=0xd0}, {.addr=0x6016, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x6015, .value=0xd0, .type=IO_READ},
        {.addr=0x6016, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x338b, .a=0x9d, .x=0x0e, .y=0x32, .sp=0x6c, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x338b, .value=0xd0}, {.addr=0x338c, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x33eb, .a=0x9d, .x=0x0e, .y=0x32, .sp=0x6c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x338b, .value=0xd0}, {.addr=0x338c, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x338b, .value=0xd0, .type=IO_READ},
        {.addr=0x338c, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x5e5e, .a=0x41, .x=0x36, .y=0x9d, .sp=0x3b, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x5e5e, .value=0xd0}, {.addr=0x5e5f, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x5df1, .a=0x41, .x=0x36, .y=0x9d, .sp=0x3b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5e5e, .value=0xd0}, {.addr=0x5e5f, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x5e5e, .value=0xd0, .type=IO_READ},
        {.addr=0x5e5f, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x1679, .a=0x08, .x=0x6e, .y=0x5f, .sp=0xe4, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x1679, .value=0xd0}, {.addr=0x167a, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x167b, .a=0x08, .x=0x6e, .y=0x5f, .sp=0xe4, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x1679, .value=0xd0}, {.addr=0x167a, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x1679, .value=0xd0, .type=IO_READ},
        {.addr=0x167a, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x17a8, .a=0x7a, .x=0x92, .y=0x77, .sp=0x4e, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x17a8, .value=0xd0}, {.addr=0x17a9, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1738, .a=0x7a, .x=0x92, .y=0x77, .sp=0x4e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x17a8, .value=0xd0}, {.addr=0x17a9, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x17a8, .value=0xd0, .type=IO_READ},
        {.addr=0x17a9, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x1459, .a=0x94, .x=0xd4, .y=0xd8, .sp=0x99, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x1459, .value=0xd0}, {.addr=0x145a, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x1492, .a=0x94, .x=0xd4, .y=0xd8, .sp=0x99, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x1459, .value=0xd0}, {.addr=0x145a, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x1459, .value=0xd0, .type=IO_READ},
        {.addr=0x145a, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x1e06, .a=0x11, .x=0x9c, .y=0xe3, .sp=0xa2, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x1e06, .value=0xd0}, {.addr=0x1e07, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x1e08, .a=0x11, .x=0x9c, .y=0xe3, .sp=0xa2, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x1e06, .value=0xd0}, {.addr=0x1e07, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x1e06, .value=0xd0, .type=IO_READ},
        {.addr=0x1e07, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xbb88, .a=0xf4, .x=0x4b, .y=0x24, .sp=0x30, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xbb88, .value=0xd0}, {.addr=0xbb89, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xbb8a, .a=0xf4, .x=0x4b, .y=0x24, .sp=0x30, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xbb88, .value=0xd0}, {.addr=0xbb89, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xbb88, .value=0xd0, .type=IO_READ},
        {.addr=0xbb89, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x7408, .a=0xf3, .x=0x4d, .y=0x26, .sp=0xae, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7408, .value=0xd0}, {.addr=0x7409, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x7465, .a=0xf3, .x=0x4d, .y=0x26, .sp=0xae, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7408, .value=0xd0}, {.addr=0x7409, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x7408, .value=0xd0, .type=IO_READ},
        {.addr=0x7409, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xcd68, .a=0xfd, .x=0xe4, .y=0x37, .sp=0x0e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xcd68, .value=0xd0}, {.addr=0xcd69, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xcd6a, .a=0xfd, .x=0xe4, .y=0x37, .sp=0x0e, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xcd68, .value=0xd0}, {.addr=0xcd69, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xcd68, .value=0xd0, .type=IO_READ},
        {.addr=0xcd69, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xf0e8, .a=0x1d, .x=0x6c, .y=0xe6, .sp=0x90, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xf0e8, .value=0xd0}, {.addr=0xf0e9, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xf0ea, .a=0x1d, .x=0x6c, .y=0xe6, .sp=0x90, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xf0e8, .value=0xd0}, {.addr=0xf0e9, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xf0e8, .value=0xd0, .type=IO_READ},
        {.addr=0xf0e9, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x1451, .a=0x1f, .x=0xab, .y=0x8d, .sp=0x8e, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x1451, .value=0xd0}, {.addr=0x1452, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x1438, .a=0x1f, .x=0xab, .y=0x8d, .sp=0x8e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x1451, .value=0xd0}, {.addr=0x1452, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x1451, .value=0xd0, .type=IO_READ},
        {.addr=0x1452, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x97f7, .a=0xb5, .x=0x6e, .y=0xbd, .sp=0x0b, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x97f7, .value=0xd0}, {.addr=0x97f8, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x97f9, .a=0xb5, .x=0x6e, .y=0xbd, .sp=0x0b, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x97f7, .value=0xd0}, {.addr=0x97f8, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x97f7, .value=0xd0, .type=IO_READ},
        {.addr=0x97f8, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x210b, .a=0xb3, .x=0xc2, .y=0x26, .sp=0x6f, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x210b, .value=0xd0}, {.addr=0x210c, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x214c, .a=0xb3, .x=0xc2, .y=0x26, .sp=0x6f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x210b, .value=0xd0}, {.addr=0x210c, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x210b, .value=0xd0, .type=IO_READ},
        {.addr=0x210c, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x2063, .a=0xbb, .x=0x5c, .y=0x7b, .sp=0xa7, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x2063, .value=0xd0}, {.addr=0x2064, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x1fed, .a=0xbb, .x=0x5c, .y=0x7b, .sp=0xa7, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2063, .value=0xd0}, {.addr=0x2064, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x2063, .value=0xd0, .type=IO_READ},
        {.addr=0x2064, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x2314, .a=0x5e, .x=0x6f, .y=0xbd, .sp=0x4d, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x2314, .value=0xd0}, {.addr=0x2315, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x22ca, .a=0x5e, .x=0x6f, .y=0xbd, .sp=0x4d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2314, .value=0xd0}, {.addr=0x2315, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x2314, .value=0xd0, .type=IO_READ},
        {.addr=0x2315, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x2f4d, .a=0x4c, .x=0xef, .y=0x37, .sp=0x36, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2f4d, .value=0xd0}, {.addr=0x2f4e, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x2eff, .a=0x4c, .x=0xef, .y=0x37, .sp=0x36, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2f4d, .value=0xd0}, {.addr=0x2f4e, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x2f4d, .value=0xd0, .type=IO_READ},
        {.addr=0x2f4e, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x34a6, .a=0x1b, .x=0x46, .y=0xbe, .sp=0x49, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x34a6, .value=0xd0}, {.addr=0x34a7, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x34a8, .a=0x1b, .x=0x46, .y=0xbe, .sp=0x49, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x34a6, .value=0xd0}, {.addr=0x34a7, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x34a6, .value=0xd0, .type=IO_READ},
        {.addr=0x34a7, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xc878, .a=0x84, .x=0x47, .y=0xa1, .sp=0x90, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xc878, .value=0xd0}, {.addr=0xc879, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xc8e6, .a=0x84, .x=0x47, .y=0xa1, .sp=0x90, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xc878, .value=0xd0}, {.addr=0xc879, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xc878, .value=0xd0, .type=IO_READ},
        {.addr=0xc879, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x7f9c, .a=0x5a, .x=0x18, .y=0x95, .sp=0x89, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x7f9c, .value=0xd0}, {.addr=0x7f9d, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x7f9e, .a=0x5a, .x=0x18, .y=0x95, .sp=0x89, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x7f9c, .value=0xd0}, {.addr=0x7f9d, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x7f9c, .value=0xd0, .type=IO_READ},
        {.addr=0x7f9d, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x6c20, .a=0x43, .x=0x4f, .y=0xda, .sp=0x2d, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x6c20, .value=0xd0}, {.addr=0x6c21, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x6c22, .a=0x43, .x=0x4f, .y=0xda, .sp=0x2d, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x6c20, .value=0xd0}, {.addr=0x6c21, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x6c20, .value=0xd0, .type=IO_READ},
        {.addr=0x6c21, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x3cb3, .a=0x36, .x=0xc6, .y=0xc3, .sp=0xcd, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x3cb3, .value=0xd0}, {.addr=0x3cb4, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x3c77, .a=0x36, .x=0xc6, .y=0xc3, .sp=0xcd, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3cb3, .value=0xd0}, {.addr=0x3cb4, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x3cb3, .value=0xd0, .type=IO_READ},
        {.addr=0x3cb4, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x85d8, .a=0x8c, .x=0xb6, .y=0xdb, .sp=0xb6, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x85d8, .value=0xd0}, {.addr=0x85d9, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x85f5, .a=0x8c, .x=0xb6, .y=0xdb, .sp=0xb6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x85d8, .value=0xd0}, {.addr=0x85d9, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x85d8, .value=0xd0, .type=IO_READ},
        {.addr=0x85d9, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x2aed, .a=0xec, .x=0x28, .y=0xb0, .sp=0x80, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x2aed, .value=0xd0}, {.addr=0x2aee, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2b4f, .a=0xec, .x=0x28, .y=0xb0, .sp=0x80, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2aed, .value=0xd0}, {.addr=0x2aee, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2aed, .value=0xd0, .type=IO_READ},
        {.addr=0x2aee, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x471e, .a=0x23, .x=0xc7, .y=0x99, .sp=0x9d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x471e, .value=0xd0}, {.addr=0x471f, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x46c9, .a=0x23, .x=0xc7, .y=0x99, .sp=0x9d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x471e, .value=0xd0}, {.addr=0x471f, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x471e, .value=0xd0, .type=IO_READ},
        {.addr=0x471f, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x4637, .a=0x3d, .x=0xf6, .y=0x8b, .sp=0xe0, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x4637, .value=0xd0}, {.addr=0x4638, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4639, .a=0x3d, .x=0xf6, .y=0x8b, .sp=0xe0, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x4637, .value=0xd0}, {.addr=0x4638, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4637, .value=0xd0, .type=IO_READ},
        {.addr=0x4638, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xdd0b, .a=0x20, .x=0x07, .y=0x37, .sp=0xdb, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xdd0b, .value=0xd0}, {.addr=0xdd0c, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xdd23, .a=0x20, .x=0x07, .y=0x37, .sp=0xdb, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdd0b, .value=0xd0}, {.addr=0xdd0c, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xdd0b, .value=0xd0, .type=IO_READ},
        {.addr=0xdd0c, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x3a4a, .a=0xd5, .x=0xb6, .y=0x8e, .sp=0xd6, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x3a4a, .value=0xd0}, {.addr=0x3a4b, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x3a46, .a=0xd5, .x=0xb6, .y=0x8e, .sp=0xd6, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3a4a, .value=0xd0}, {.addr=0x3a4b, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x3a4a, .value=0xd0, .type=IO_READ},
        {.addr=0x3a4b, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x78a5, .a=0xd3, .x=0x8f, .y=0x48, .sp=0x32, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x78a5, .value=0xd0}, {.addr=0x78a6, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x78a7, .a=0xd3, .x=0x8f, .y=0x48, .sp=0x32, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x78a5, .value=0xd0}, {.addr=0x78a6, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x78a5, .value=0xd0, .type=IO_READ},
        {.addr=0x78a6, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x7be2, .a=0xe0, .x=0x99, .y=0xf9, .sp=0xad, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x7be2, .value=0xd0}, {.addr=0x7be3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7be4, .a=0xe0, .x=0x99, .y=0xf9, .sp=0xad, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x7be2, .value=0xd0}, {.addr=0x7be3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7be2, .value=0xd0, .type=IO_READ},
        {.addr=0x7be3, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x904b, .a=0x3d, .x=0x05, .y=0xff, .sp=0x76, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x904b, .value=0xd0}, {.addr=0x904c, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x904c, .a=0x3d, .x=0x05, .y=0xff, .sp=0x76, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x904b, .value=0xd0}, {.addr=0x904c, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x904b, .value=0xd0, .type=IO_READ},
        {.addr=0x904c, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xba25, .a=0xb1, .x=0x7a, .y=0xed, .sp=0x49, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xba25, .value=0xd0}, {.addr=0xba26, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xba6b, .a=0xb1, .x=0x7a, .y=0xed, .sp=0x49, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xba25, .value=0xd0}, {.addr=0xba26, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xba25, .value=0xd0, .type=IO_READ},
        {.addr=0xba26, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xf587, .a=0x60, .x=0x46, .y=0xd0, .sp=0x0e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xf587, .value=0xd0}, {.addr=0xf588, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xf589, .a=0x60, .x=0x46, .y=0xd0, .sp=0x0e, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xf587, .value=0xd0}, {.addr=0xf588, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xf587, .value=0xd0, .type=IO_READ},
        {.addr=0xf588, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x8c61, .a=0x64, .x=0x5c, .y=0x32, .sp=0xcf, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x8c61, .value=0xd0}, {.addr=0x8c62, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x8be5, .a=0x64, .x=0x5c, .y=0x32, .sp=0xcf, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8c61, .value=0xd0}, {.addr=0x8c62, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x8c61, .value=0xd0, .type=IO_READ},
        {.addr=0x8c62, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xeb8c, .a=0xde, .x=0x30, .y=0x78, .sp=0x8a, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xeb8c, .value=0xd0}, {.addr=0xeb8d, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xeb8e, .a=0xde, .x=0x30, .y=0x78, .sp=0x8a, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xeb8c, .value=0xd0}, {.addr=0xeb8d, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xeb8c, .value=0xd0, .type=IO_READ},
        {.addr=0xeb8d, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x1339, .a=0x38, .x=0xb9, .y=0x18, .sp=0x35, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x1339, .value=0xd0}, {.addr=0x133a, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x133f, .a=0x38, .x=0xb9, .y=0x18, .sp=0x35, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1339, .value=0xd0}, {.addr=0x133a, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x1339, .value=0xd0, .type=IO_READ},
        {.addr=0x133a, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x9b36, .a=0x7f, .x=0x2c, .y=0xef, .sp=0xdc, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x9b36, .value=0xd0}, {.addr=0x9b37, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x9abf, .a=0x7f, .x=0x2c, .y=0xef, .sp=0xdc, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9b36, .value=0xd0}, {.addr=0x9b37, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x9b36, .value=0xd0, .type=IO_READ},
        {.addr=0x9b37, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xe7b5, .a=0xd8, .x=0x70, .y=0x76, .sp=0x0d, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xe7b5, .value=0xd0}, {.addr=0xe7b6, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xe7b7, .a=0xd8, .x=0x70, .y=0x76, .sp=0x0d, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xe7b5, .value=0xd0}, {.addr=0xe7b6, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xe7b5, .value=0xd0, .type=IO_READ},
        {.addr=0xe7b6, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x5712, .a=0xb4, .x=0x5d, .y=0xc7, .sp=0x82, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x5712, .value=0xd0}, {.addr=0x5713, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x5718, .a=0xb4, .x=0x5d, .y=0xc7, .sp=0x82, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x5712, .value=0xd0}, {.addr=0x5713, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x5712, .value=0xd0, .type=IO_READ},
        {.addr=0x5713, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x789b, .a=0xc8, .x=0x68, .y=0x09, .sp=0xa1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x789b, .value=0xd0}, {.addr=0x789c, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x7845, .a=0xc8, .x=0x68, .y=0x09, .sp=0xa1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x789b, .value=0xd0}, {.addr=0x789c, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x789b, .value=0xd0, .type=IO_READ},
        {.addr=0x789c, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x4ef1, .a=0xbd, .x=0x6f, .y=0x88, .sp=0xf2, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x4ef1, .value=0xd0}, {.addr=0x4ef2, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x4edd, .a=0xbd, .x=0x6f, .y=0x88, .sp=0xf2, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x4ef1, .value=0xd0}, {.addr=0x4ef2, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x4ef1, .value=0xd0, .type=IO_READ},
        {.addr=0x4ef2, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xab14, .a=0x83, .x=0xd2, .y=0x15, .sp=0x25, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xab14, .value=0xd0}, {.addr=0xab15, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xaae5, .a=0x83, .x=0xd2, .y=0x15, .sp=0x25, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xab14, .value=0xd0}, {.addr=0xab15, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xab14, .value=0xd0, .type=IO_READ},
        {.addr=0xab15, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x33c4, .a=0xa3, .x=0xd9, .y=0xfb, .sp=0x97, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x33c4, .value=0xd0}, {.addr=0x33c5, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x3354, .a=0xa3, .x=0xd9, .y=0xfb, .sp=0x97, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x33c4, .value=0xd0}, {.addr=0x33c5, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x33c4, .value=0xd0, .type=IO_READ},
        {.addr=0x33c5, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x8fc9, .a=0x41, .x=0xc7, .y=0x36, .sp=0xff, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x8fc9, .value=0xd0}, {.addr=0x8fca, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x8fcb, .a=0x41, .x=0xc7, .y=0x36, .sp=0xff, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x8fc9, .value=0xd0}, {.addr=0x8fca, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x8fc9, .value=0xd0, .type=IO_READ},
        {.addr=0x8fca, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x6e3d, .a=0xdf, .x=0x33, .y=0x36, .sp=0x24, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x6e3d, .value=0xd0}, {.addr=0x6e3e, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x6e94, .a=0xdf, .x=0x33, .y=0x36, .sp=0x24, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x6e3d, .value=0xd0}, {.addr=0x6e3e, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x6e3d, .value=0xd0, .type=IO_READ},
        {.addr=0x6e3e, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x159d, .a=0x88, .x=0x90, .y=0x8a, .sp=0xaf, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x159d, .value=0xd0}, {.addr=0x159e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x15ec, .a=0x88, .x=0x90, .y=0x8a, .sp=0xaf, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x159d, .value=0xd0}, {.addr=0x159e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x159d, .value=0xd0, .type=IO_READ},
        {.addr=0x159e, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x85c9, .a=0xf7, .x=0xf0, .y=0x46, .sp=0x2f, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x85c9, .value=0xd0}, {.addr=0x85ca, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x85cb, .a=0xf7, .x=0xf0, .y=0x46, .sp=0x2f, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x85c9, .value=0xd0}, {.addr=0x85ca, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x85c9, .value=0xd0, .type=IO_READ},
        {.addr=0x85ca, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xee0b, .a=0xa7, .x=0xc9, .y=0x56, .sp=0xb6, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xee0b, .value=0xd0}, {.addr=0xee0c, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xee7b, .a=0xa7, .x=0xc9, .y=0x56, .sp=0xb6, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xee0b, .value=0xd0}, {.addr=0xee0c, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xee0b, .value=0xd0, .type=IO_READ},
        {.addr=0xee0c, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x41ae, .a=0xcc, .x=0xdf, .y=0x44, .sp=0xef, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x41ae, .value=0xd0}, {.addr=0x41af, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x4213, .a=0xcc, .x=0xdf, .y=0x44, .sp=0xef, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x41ae, .value=0xd0}, {.addr=0x41af, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x41ae, .value=0xd0, .type=IO_READ},
        {.addr=0x41af, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x0eda, .a=0x23, .x=0x4a, .y=0x17, .sp=0x49, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0eda, .value=0xd0}, {.addr=0x0edb, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x0ea9, .a=0x23, .x=0x4a, .y=0x17, .sp=0x49, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0eda, .value=0xd0}, {.addr=0x0edb, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x0eda, .value=0xd0, .type=IO_READ},
        {.addr=0x0edb, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xdc14, .a=0x8c, .x=0x52, .y=0x31, .sp=0x6c, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xdc14, .value=0xd0}, {.addr=0xdc15, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xdc6e, .a=0x8c, .x=0x52, .y=0x31, .sp=0x6c, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xdc14, .value=0xd0}, {.addr=0xdc15, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xdc14, .value=0xd0, .type=IO_READ},
        {.addr=0xdc15, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x9dcf, .a=0x41, .x=0x6a, .y=0x82, .sp=0x37, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x9dcf, .value=0xd0}, {.addr=0x9dd0, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x9d54, .a=0x41, .x=0x6a, .y=0x82, .sp=0x37, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9dcf, .value=0xd0}, {.addr=0x9dd0, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x9dcf, .value=0xd0, .type=IO_READ},
        {.addr=0x9dd0, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xe9d3, .a=0xed, .x=0x62, .y=0x3f, .sp=0xbe, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xe9d3, .value=0xd0}, {.addr=0xe9d4, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xea39, .a=0xed, .x=0x62, .y=0x3f, .sp=0xbe, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe9d3, .value=0xd0}, {.addr=0xe9d4, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xe9d3, .value=0xd0, .type=IO_READ},
        {.addr=0xe9d4, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x1131, .a=0x41, .x=0x1f, .y=0xaf, .sp=0x71, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x1131, .value=0xd0}, {.addr=0x1132, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x1133, .a=0x41, .x=0x1f, .y=0xaf, .sp=0x71, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x1131, .value=0xd0}, {.addr=0x1132, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x1131, .value=0xd0, .type=IO_READ},
        {.addr=0x1132, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xb4c3, .a=0x23, .x=0x22, .y=0x40, .sp=0x27, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xb4c3, .value=0xd0}, {.addr=0xb4c4, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xb4b5, .a=0x23, .x=0x22, .y=0x40, .sp=0x27, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xb4c3, .value=0xd0}, {.addr=0xb4c4, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xb4c3, .value=0xd0, .type=IO_READ},
        {.addr=0xb4c4, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x041b, .a=0x9a, .x=0xa0, .y=0x44, .sp=0x3a, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x041b, .value=0xd0}, {.addr=0x041c, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x0493, .a=0x9a, .x=0xa0, .y=0x44, .sp=0x3a, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x041b, .value=0xd0}, {.addr=0x041c, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x041b, .value=0xd0, .type=IO_READ},
        {.addr=0x041c, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x5844, .a=0xc8, .x=0x7c, .y=0xa6, .sp=0x96, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x5844, .value=0xd0}, {.addr=0x5845, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x57df, .a=0xc8, .x=0x7c, .y=0xa6, .sp=0x96, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5844, .value=0xd0}, {.addr=0x5845, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x5844, .value=0xd0, .type=IO_READ},
        {.addr=0x5845, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xb71b, .a=0x85, .x=0xb0, .y=0x65, .sp=0x77, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb71b, .value=0xd0}, {.addr=0xb71c, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xb71d, .a=0x85, .x=0xb0, .y=0x65, .sp=0x77, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xb71b, .value=0xd0}, {.addr=0xb71c, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xb71b, .value=0xd0, .type=IO_READ},
        {.addr=0xb71c, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x67cd, .a=0x70, .x=0x79, .y=0x24, .sp=0x73, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x67cd, .value=0xd0}, {.addr=0x67ce, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6815, .a=0x70, .x=0x79, .y=0x24, .sp=0x73, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x67cd, .value=0xd0}, {.addr=0x67ce, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x67cd, .value=0xd0, .type=IO_READ},
        {.addr=0x67ce, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x4851, .a=0x0a, .x=0xbd, .y=0xef, .sp=0xcd, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x4851, .value=0xd0}, {.addr=0x4852, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x48c3, .a=0x0a, .x=0xbd, .y=0xef, .sp=0xcd, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x4851, .value=0xd0}, {.addr=0x4852, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x4851, .value=0xd0, .type=IO_READ},
        {.addr=0x4852, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xaa26, .a=0xc1, .x=0x14, .y=0x12, .sp=0x4d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xaa26, .value=0xd0}, {.addr=0xaa27, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xaa28, .a=0xc1, .x=0x14, .y=0x12, .sp=0x4d, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xaa26, .value=0xd0}, {.addr=0xaa27, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xaa26, .value=0xd0, .type=IO_READ},
        {.addr=0xaa27, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x5963, .a=0x4b, .x=0x13, .y=0x68, .sp=0x62, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x5963, .value=0xd0}, {.addr=0x5964, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x5965, .a=0x4b, .x=0x13, .y=0x68, .sp=0x62, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x5963, .value=0xd0}, {.addr=0x5964, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x5963, .value=0xd0, .type=IO_READ},
        {.addr=0x5964, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x24fa, .a=0x36, .x=0x5f, .y=0xca, .sp=0x68, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x24fa, .value=0xd0}, {.addr=0x24fb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x255c, .a=0x36, .x=0x5f, .y=0xca, .sp=0x68, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x24fa, .value=0xd0}, {.addr=0x24fb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x24fa, .value=0xd0, .type=IO_READ},
        {.addr=0x24fb, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x0d91, .a=0x63, .x=0xcc, .y=0x8e, .sp=0xe0, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0d91, .value=0xd0}, {.addr=0x0d92, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x0d93, .a=0x63, .x=0xcc, .y=0x8e, .sp=0xe0, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0d91, .value=0xd0}, {.addr=0x0d92, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x0d91, .value=0xd0, .type=IO_READ},
        {.addr=0x0d92, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x3bd6, .a=0x8b, .x=0x8c, .y=0x74, .sp=0x8f, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x3bd6, .value=0xd0}, {.addr=0x3bd7, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x3bd8, .a=0x8b, .x=0x8c, .y=0x74, .sp=0x8f, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x3bd6, .value=0xd0}, {.addr=0x3bd7, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x3bd6, .value=0xd0, .type=IO_READ},
        {.addr=0x3bd7, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x4923, .a=0xfc, .x=0x32, .y=0x5f, .sp=0x35, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x4923, .value=0xd0}, {.addr=0x4924, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x4925, .a=0xfc, .x=0x32, .y=0x5f, .sp=0x35, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x4923, .value=0xd0}, {.addr=0x4924, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x4923, .value=0xd0, .type=IO_READ},
        {.addr=0x4924, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x3dd9, .a=0xe7, .x=0x29, .y=0x65, .sp=0x72, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x3dd9, .value=0xd0}, {.addr=0x3dda, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x3e0a, .a=0xe7, .x=0x29, .y=0x65, .sp=0x72, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x3dd9, .value=0xd0}, {.addr=0x3dda, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x3dd9, .value=0xd0, .type=IO_READ},
        {.addr=0x3dda, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x8ae5, .a=0xac, .x=0x4b, .y=0x4b, .sp=0xdd, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x8ae5, .value=0xd0}, {.addr=0x8ae6, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x8ae7, .a=0xac, .x=0x4b, .y=0x4b, .sp=0xdd, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x8ae5, .value=0xd0}, {.addr=0x8ae6, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x8ae5, .value=0xd0, .type=IO_READ},
        {.addr=0x8ae6, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x27fa, .a=0xc8, .x=0xf4, .y=0x1c, .sp=0x34, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x27fa, .value=0xd0}, {.addr=0x27fb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x27fc, .a=0xc8, .x=0xf4, .y=0x1c, .sp=0x34, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x27fa, .value=0xd0}, {.addr=0x27fb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x27fa, .value=0xd0, .type=IO_READ},
        {.addr=0x27fb, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x5368, .a=0x5b, .x=0xe6, .y=0x3a, .sp=0x1a, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x5368, .value=0xd0}, {.addr=0x5369, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x536a, .a=0x5b, .x=0xe6, .y=0x3a, .sp=0x1a, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x5368, .value=0xd0}, {.addr=0x5369, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5368, .value=0xd0, .type=IO_READ},
        {.addr=0x5369, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x603c, .a=0x58, .x=0xe2, .y=0x4a, .sp=0x26, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x603c, .value=0xd0}, {.addr=0x603d, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x6099, .a=0x58, .x=0xe2, .y=0x4a, .sp=0x26, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x603c, .value=0xd0}, {.addr=0x603d, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x603c, .value=0xd0, .type=IO_READ},
        {.addr=0x603d, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x3e1e, .a=0x0f, .x=0x1a, .y=0x0a, .sp=0x0b, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x3e1e, .value=0xd0}, {.addr=0x3e1f, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x3e20, .a=0x0f, .x=0x1a, .y=0x0a, .sp=0x0b, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x3e1e, .value=0xd0}, {.addr=0x3e1f, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x3e1e, .value=0xd0, .type=IO_READ},
        {.addr=0x3e1f, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x4d19, .a=0xdb, .x=0x72, .y=0xd3, .sp=0xfd, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x4d19, .value=0xd0}, {.addr=0x4d1a, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x4d1b, .a=0xdb, .x=0x72, .y=0xd3, .sp=0xfd, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x4d19, .value=0xd0}, {.addr=0x4d1a, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x4d19, .value=0xd0, .type=IO_READ},
        {.addr=0x4d1a, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x4786, .a=0x96, .x=0x02, .y=0x28, .sp=0x0e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x4786, .value=0xd0}, {.addr=0x4787, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x4790, .a=0x96, .x=0x02, .y=0x28, .sp=0x0e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4786, .value=0xd0}, {.addr=0x4787, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x4786, .value=0xd0, .type=IO_READ},
        {.addr=0x4787, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x5dd6, .a=0x0a, .x=0xc1, .y=0x8c, .sp=0x46, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x5dd6, .value=0xd0}, {.addr=0x5dd7, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x5dd8, .a=0x0a, .x=0xc1, .y=0x8c, .sp=0x46, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x5dd6, .value=0xd0}, {.addr=0x5dd7, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x5dd6, .value=0xd0, .type=IO_READ},
        {.addr=0x5dd7, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xbd24, .a=0xe1, .x=0x2c, .y=0x27, .sp=0x1e, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xbd24, .value=0xd0}, {.addr=0xbd25, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xbd26, .a=0xe1, .x=0x2c, .y=0x27, .sp=0x1e, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xbd24, .value=0xd0}, {.addr=0xbd25, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xbd24, .value=0xd0, .type=IO_READ},
        {.addr=0xbd25, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x94bc, .a=0x04, .x=0xaf, .y=0x19, .sp=0xf2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x94bc, .value=0xd0}, {.addr=0x94bd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x94be, .a=0x04, .x=0xaf, .y=0x19, .sp=0xf2, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x94bc, .value=0xd0}, {.addr=0x94bd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x94bc, .value=0xd0, .type=IO_READ},
        {.addr=0x94bd, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x7c23, .a=0x3f, .x=0x1c, .y=0xbc, .sp=0xcb, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x7c23, .value=0xd0}, {.addr=0x7c24, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x7c25, .a=0x3f, .x=0x1c, .y=0xbc, .sp=0xcb, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x7c23, .value=0xd0}, {.addr=0x7c24, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x7c23, .value=0xd0, .type=IO_READ},
        {.addr=0x7c24, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x67b5, .a=0x24, .x=0x9e, .y=0x54, .sp=0xdf, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x67b5, .value=0xd0}, {.addr=0x67b6, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x67b7, .a=0x24, .x=0x9e, .y=0x54, .sp=0xdf, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x67b5, .value=0xd0}, {.addr=0x67b6, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x67b5, .value=0xd0, .type=IO_READ},
        {.addr=0x67b6, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xc653, .a=0x93, .x=0x28, .y=0xd2, .sp=0x42, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xc653, .value=0xd0}, {.addr=0xc654, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xc655, .a=0x93, .x=0x28, .y=0xd2, .sp=0x42, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xc653, .value=0xd0}, {.addr=0xc654, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xc653, .value=0xd0, .type=IO_READ},
        {.addr=0xc654, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x1a34, .a=0x41, .x=0x3e, .y=0xbb, .sp=0x5f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x1a34, .value=0xd0}, {.addr=0x1a35, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x1a95, .a=0x41, .x=0x3e, .y=0xbb, .sp=0x5f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x1a34, .value=0xd0}, {.addr=0x1a35, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x1a34, .value=0xd0, .type=IO_READ},
        {.addr=0x1a35, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x141c, .a=0x94, .x=0x6e, .y=0xda, .sp=0x1d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x141c, .value=0xd0}, {.addr=0x141d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x140b, .a=0x94, .x=0x6e, .y=0xda, .sp=0x1d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x141c, .value=0xd0}, {.addr=0x141d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x141c, .value=0xd0, .type=IO_READ},
        {.addr=0x141d, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xdc64, .a=0x18, .x=0x00, .y=0xfe, .sp=0xfd, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xdc64, .value=0xd0}, {.addr=0xdc65, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xdc66, .a=0x18, .x=0x00, .y=0xfe, .sp=0xfd, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xdc64, .value=0xd0}, {.addr=0xdc65, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xdc64, .value=0xd0, .type=IO_READ},
        {.addr=0xdc65, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x61c7, .a=0xd7, .x=0x36, .y=0xe8, .sp=0x88, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x61c7, .value=0xd0}, {.addr=0x61c8, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x6164, .a=0xd7, .x=0x36, .y=0xe8, .sp=0x88, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x61c7, .value=0xd0}, {.addr=0x61c8, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x61c7, .value=0xd0, .type=IO_READ},
        {.addr=0x61c8, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x8ba0, .a=0x79, .x=0xfb, .y=0xa4, .sp=0x4a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x8ba0, .value=0xd0}, {.addr=0x8ba1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x8b5e, .a=0x79, .x=0xfb, .y=0xa4, .sp=0x4a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x8ba0, .value=0xd0}, {.addr=0x8ba1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x8ba0, .value=0xd0, .type=IO_READ},
        {.addr=0x8ba1, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0300) {
    const struct CPU_State initial_cpu = {.pc=0x8fed, .a=0x7d, .x=0x60, .y=0x14, .sp=0xe2, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x8fed, .value=0xd0}, {.addr=0x8fee, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x8f90, .a=0x7d, .x=0x60, .y=0x14, .sp=0xe2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8fed, .value=0xd0}, {.addr=0x8fee, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x8fed, .value=0xd0, .type=IO_READ},
        {.addr=0x8fee, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0301) {
    const struct CPU_State initial_cpu = {.pc=0x9b4b, .a=0xd3, .x=0xaf, .y=0xd0, .sp=0xa2, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x9b4b, .value=0xd0}, {.addr=0x9b4c, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x9b31, .a=0xd3, .x=0xaf, .y=0xd0, .sp=0xa2, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x9b4b, .value=0xd0}, {.addr=0x9b4c, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x9b4b, .value=0xd0, .type=IO_READ},
        {.addr=0x9b4c, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0302) {
    const struct CPU_State initial_cpu = {.pc=0xa981, .a=0x29, .x=0x6e, .y=0xe1, .sp=0x8c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xa981, .value=0xd0}, {.addr=0xa982, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xa983, .a=0x29, .x=0x6e, .y=0xe1, .sp=0x8c, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xa981, .value=0xd0}, {.addr=0xa982, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xa981, .value=0xd0, .type=IO_READ},
        {.addr=0xa982, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0303) {
    const struct CPU_State initial_cpu = {.pc=0xad70, .a=0x81, .x=0xf2, .y=0xea, .sp=0xda, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xad70, .value=0xd0}, {.addr=0xad71, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xad72, .a=0x81, .x=0xf2, .y=0xea, .sp=0xda, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xad70, .value=0xd0}, {.addr=0xad71, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xad70, .value=0xd0, .type=IO_READ},
        {.addr=0xad71, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0304) {
    const struct CPU_State initial_cpu = {.pc=0xae79, .a=0xc2, .x=0x5c, .y=0xb6, .sp=0x48, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xae79, .value=0xd0}, {.addr=0xae7a, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xae16, .a=0xc2, .x=0x5c, .y=0xb6, .sp=0x48, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xae79, .value=0xd0}, {.addr=0xae7a, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xae79, .value=0xd0, .type=IO_READ},
        {.addr=0xae7a, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0305) {
    const struct CPU_State initial_cpu = {.pc=0x9ba7, .a=0x05, .x=0xf5, .y=0xd5, .sp=0x69, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9ba7, .value=0xd0}, {.addr=0x9ba8, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x9b34, .a=0x05, .x=0xf5, .y=0xd5, .sp=0x69, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9ba7, .value=0xd0}, {.addr=0x9ba8, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x9ba7, .value=0xd0, .type=IO_READ},
        {.addr=0x9ba8, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0306) {
    const struct CPU_State initial_cpu = {.pc=0xe435, .a=0x10, .x=0x3c, .y=0x07, .sp=0xbe, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xe435, .value=0xd0}, {.addr=0xe436, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xe488, .a=0x10, .x=0x3c, .y=0x07, .sp=0xbe, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xe435, .value=0xd0}, {.addr=0xe436, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xe435, .value=0xd0, .type=IO_READ},
        {.addr=0xe436, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0307) {
    const struct CPU_State initial_cpu = {.pc=0x4440, .a=0x13, .x=0x0f, .y=0x3e, .sp=0xf8, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x4440, .value=0xd0}, {.addr=0x4441, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x4442, .a=0x13, .x=0x0f, .y=0x3e, .sp=0xf8, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x4440, .value=0xd0}, {.addr=0x4441, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x4440, .value=0xd0, .type=IO_READ},
        {.addr=0x4441, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0308) {
    const struct CPU_State initial_cpu = {.pc=0x37d8, .a=0xa9, .x=0xd5, .y=0xed, .sp=0x0b, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x37d8, .value=0xd0}, {.addr=0x37d9, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x37da, .a=0xa9, .x=0xd5, .y=0xed, .sp=0x0b, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x37d8, .value=0xd0}, {.addr=0x37d9, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x37d8, .value=0xd0, .type=IO_READ},
        {.addr=0x37d9, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0309) {
    const struct CPU_State initial_cpu = {.pc=0xd357, .a=0x92, .x=0x9a, .y=0x49, .sp=0x7f, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd357, .value=0xd0}, {.addr=0xd358, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xd359, .a=0x92, .x=0x9a, .y=0x49, .sp=0x7f, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xd357, .value=0xd0}, {.addr=0xd358, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xd357, .value=0xd0, .type=IO_READ},
        {.addr=0xd358, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_030A) {
    const struct CPU_State initial_cpu = {.pc=0x882c, .a=0xee, .x=0x00, .y=0x50, .sp=0xad, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x882c, .value=0xd0}, {.addr=0x882d, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x882e, .a=0xee, .x=0x00, .y=0x50, .sp=0xad, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x882c, .value=0xd0}, {.addr=0x882d, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x882c, .value=0xd0, .type=IO_READ},
        {.addr=0x882d, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_030B) {
    const struct CPU_State initial_cpu = {.pc=0xa4c5, .a=0xe9, .x=0xa9, .y=0xe1, .sp=0x40, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xa4c5, .value=0xd0}, {.addr=0xa4c6, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xa4c7, .a=0xe9, .x=0xa9, .y=0xe1, .sp=0x40, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xa4c5, .value=0xd0}, {.addr=0xa4c6, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xa4c5, .value=0xd0, .type=IO_READ},
        {.addr=0xa4c6, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_030C) {
    const struct CPU_State initial_cpu = {.pc=0xe1a9, .a=0x60, .x=0xc7, .y=0xca, .sp=0xe3, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xe1a9, .value=0xd0}, {.addr=0xe1aa, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xe1ab, .a=0x60, .x=0xc7, .y=0xca, .sp=0xe3, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xe1a9, .value=0xd0}, {.addr=0xe1aa, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xe1a9, .value=0xd0, .type=IO_READ},
        {.addr=0xe1aa, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_030D) {
    const struct CPU_State initial_cpu = {.pc=0x367b, .a=0x11, .x=0x00, .y=0xf6, .sp=0x06, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x367b, .value=0xd0}, {.addr=0x367c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3623, .a=0x11, .x=0x00, .y=0xf6, .sp=0x06, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x367b, .value=0xd0}, {.addr=0x367c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x367b, .value=0xd0, .type=IO_READ},
        {.addr=0x367c, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_030E) {
    const struct CPU_State initial_cpu = {.pc=0xbcd7, .a=0x0d, .x=0x44, .y=0x49, .sp=0x5d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xbcd7, .value=0xd0}, {.addr=0xbcd8, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xbcd9, .a=0x0d, .x=0x44, .y=0x49, .sp=0x5d, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xbcd7, .value=0xd0}, {.addr=0xbcd8, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xbcd7, .value=0xd0, .type=IO_READ},
        {.addr=0xbcd8, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_030F) {
    const struct CPU_State initial_cpu = {.pc=0xcd77, .a=0xf7, .x=0x85, .y=0x1c, .sp=0xd6, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xcd77, .value=0xd0}, {.addr=0xcd78, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xcd79, .a=0xf7, .x=0x85, .y=0x1c, .sp=0xd6, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xcd77, .value=0xd0}, {.addr=0xcd78, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xcd77, .value=0xd0, .type=IO_READ},
        {.addr=0xcd78, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0310) {
    const struct CPU_State initial_cpu = {.pc=0x2c05, .a=0xe6, .x=0xac, .y=0x38, .sp=0x0d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x2c05, .value=0xd0}, {.addr=0x2c06, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x2ba5, .a=0xe6, .x=0xac, .y=0x38, .sp=0x0d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2c05, .value=0xd0}, {.addr=0x2c06, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x2c05, .value=0xd0, .type=IO_READ},
        {.addr=0x2c06, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0311) {
    const struct CPU_State initial_cpu = {.pc=0x515e, .a=0x6a, .x=0xb1, .y=0xd8, .sp=0x0a, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x515e, .value=0xd0}, {.addr=0x515f, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x5160, .a=0x6a, .x=0xb1, .y=0xd8, .sp=0x0a, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x515e, .value=0xd0}, {.addr=0x515f, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x515e, .value=0xd0, .type=IO_READ},
        {.addr=0x515f, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0312) {
    const struct CPU_State initial_cpu = {.pc=0x35ad, .a=0xe2, .x=0xc3, .y=0xf9, .sp=0xcc, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x35ad, .value=0xd0}, {.addr=0x35ae, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x35d9, .a=0xe2, .x=0xc3, .y=0xf9, .sp=0xcc, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x35ad, .value=0xd0}, {.addr=0x35ae, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x35ad, .value=0xd0, .type=IO_READ},
        {.addr=0x35ae, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0313) {
    const struct CPU_State initial_cpu = {.pc=0xa650, .a=0x44, .x=0x54, .y=0xa4, .sp=0x70, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xa650, .value=0xd0}, {.addr=0xa651, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xa652, .a=0x44, .x=0x54, .y=0xa4, .sp=0x70, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xa650, .value=0xd0}, {.addr=0xa651, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xa650, .value=0xd0, .type=IO_READ},
        {.addr=0xa651, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0314) {
    const struct CPU_State initial_cpu = {.pc=0x727b, .a=0xbe, .x=0x67, .y=0x82, .sp=0x48, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x727b, .value=0xd0}, {.addr=0x727c, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x7288, .a=0xbe, .x=0x67, .y=0x82, .sp=0x48, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x727b, .value=0xd0}, {.addr=0x727c, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x727b, .value=0xd0, .type=IO_READ},
        {.addr=0x727c, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0315) {
    const struct CPU_State initial_cpu = {.pc=0xcaa5, .a=0xeb, .x=0x12, .y=0x5a, .sp=0x7f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa5, .value=0xd0}, {.addr=0xcaa6, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xcaa7, .a=0xeb, .x=0x12, .y=0x5a, .sp=0x7f, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xcaa5, .value=0xd0}, {.addr=0xcaa6, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xcaa5, .value=0xd0, .type=IO_READ},
        {.addr=0xcaa6, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0316) {
    const struct CPU_State initial_cpu = {.pc=0xa390, .a=0x38, .x=0x34, .y=0xd3, .sp=0x6f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xa390, .value=0xd0}, {.addr=0xa391, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa3f2, .a=0x38, .x=0x34, .y=0xd3, .sp=0x6f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xa390, .value=0xd0}, {.addr=0xa391, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa390, .value=0xd0, .type=IO_READ},
        {.addr=0xa391, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0317) {
    const struct CPU_State initial_cpu = {.pc=0x6980, .a=0xbb, .x=0x8e, .y=0xdb, .sp=0xd3, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x6980, .value=0xd0}, {.addr=0x6981, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x696a, .a=0xbb, .x=0x8e, .y=0xdb, .sp=0xd3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x6980, .value=0xd0}, {.addr=0x6981, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x6980, .value=0xd0, .type=IO_READ},
        {.addr=0x6981, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0318) {
    const struct CPU_State initial_cpu = {.pc=0xaa8b, .a=0xeb, .x=0xb5, .y=0x0b, .sp=0x23, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xaa8b, .value=0xd0}, {.addr=0xaa8c, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xaa8d, .a=0xeb, .x=0xb5, .y=0x0b, .sp=0x23, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xaa8b, .value=0xd0}, {.addr=0xaa8c, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xaa8b, .value=0xd0, .type=IO_READ},
        {.addr=0xaa8c, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0319) {
    const struct CPU_State initial_cpu = {.pc=0x5951, .a=0xa0, .x=0xf4, .y=0x8d, .sp=0x37, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x5951, .value=0xd0}, {.addr=0x5952, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5953, .a=0xa0, .x=0xf4, .y=0x8d, .sp=0x37, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x5951, .value=0xd0}, {.addr=0x5952, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5951, .value=0xd0, .type=IO_READ},
        {.addr=0x5952, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_031A) {
    const struct CPU_State initial_cpu = {.pc=0x8be8, .a=0x8f, .x=0x3b, .y=0x34, .sp=0x8f, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x8be8, .value=0xd0}, {.addr=0x8be9, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x8c2f, .a=0x8f, .x=0x3b, .y=0x34, .sp=0x8f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8be8, .value=0xd0}, {.addr=0x8be9, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x8be8, .value=0xd0, .type=IO_READ},
        {.addr=0x8be9, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_031B) {
    const struct CPU_State initial_cpu = {.pc=0xcdc1, .a=0x66, .x=0x8c, .y=0xf6, .sp=0xd0, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xcdc1, .value=0xd0}, {.addr=0xcdc2, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xcdc6, .a=0x66, .x=0x8c, .y=0xf6, .sp=0xd0, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xcdc1, .value=0xd0}, {.addr=0xcdc2, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xcdc1, .value=0xd0, .type=IO_READ},
        {.addr=0xcdc2, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_031C) {
    const struct CPU_State initial_cpu = {.pc=0xcc92, .a=0xf2, .x=0x52, .y=0xfb, .sp=0x50, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xcc92, .value=0xd0}, {.addr=0xcc93, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcd01, .a=0xf2, .x=0x52, .y=0xfb, .sp=0x50, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xcc92, .value=0xd0}, {.addr=0xcc93, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcc92, .value=0xd0, .type=IO_READ},
        {.addr=0xcc93, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_031D) {
    const struct CPU_State initial_cpu = {.pc=0x14b5, .a=0xc5, .x=0x39, .y=0x37, .sp=0x12, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x14b5, .value=0xd0}, {.addr=0x14b6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x14b7, .a=0xc5, .x=0x39, .y=0x37, .sp=0x12, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x14b5, .value=0xd0}, {.addr=0x14b6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x14b5, .value=0xd0, .type=IO_READ},
        {.addr=0x14b6, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_031E) {
    const struct CPU_State initial_cpu = {.pc=0x7fac, .a=0xd9, .x=0xad, .y=0x38, .sp=0x90, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x7fac, .value=0xd0}, {.addr=0x7fad, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x7f48, .a=0xd9, .x=0xad, .y=0x38, .sp=0x90, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7fac, .value=0xd0}, {.addr=0x7fad, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x7fac, .value=0xd0, .type=IO_READ},
        {.addr=0x7fad, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_031F) {
    const struct CPU_State initial_cpu = {.pc=0x67bd, .a=0x1e, .x=0x9c, .y=0xcd, .sp=0xe3, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x67bd, .value=0xd0}, {.addr=0x67be, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x67d0, .a=0x1e, .x=0x9c, .y=0xcd, .sp=0xe3, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x67bd, .value=0xd0}, {.addr=0x67be, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x67bd, .value=0xd0, .type=IO_READ},
        {.addr=0x67be, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0320) {
    const struct CPU_State initial_cpu = {.pc=0x107a, .a=0xc8, .x=0x56, .y=0x9a, .sp=0xe9, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x107a, .value=0xd0}, {.addr=0x107b, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x10d5, .a=0xc8, .x=0x56, .y=0x9a, .sp=0xe9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x107a, .value=0xd0}, {.addr=0x107b, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x107a, .value=0xd0, .type=IO_READ},
        {.addr=0x107b, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0321) {
    const struct CPU_State initial_cpu = {.pc=0x553f, .a=0x40, .x=0x98, .y=0x5c, .sp=0x4b, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x553f, .value=0xd0}, {.addr=0x5540, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x5541, .a=0x40, .x=0x98, .y=0x5c, .sp=0x4b, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x553f, .value=0xd0}, {.addr=0x5540, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x553f, .value=0xd0, .type=IO_READ},
        {.addr=0x5540, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0322) {
    const struct CPU_State initial_cpu = {.pc=0xc96b, .a=0x9f, .x=0xfc, .y=0x3c, .sp=0xbb, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xc96b, .value=0xd0}, {.addr=0xc96c, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xc96d, .a=0x9f, .x=0xfc, .y=0x3c, .sp=0xbb, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xc96b, .value=0xd0}, {.addr=0xc96c, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xc96b, .value=0xd0, .type=IO_READ},
        {.addr=0xc96c, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0323) {
    const struct CPU_State initial_cpu = {.pc=0xc87e, .a=0x72, .x=0xa1, .y=0x37, .sp=0x7f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc87e, .value=0xd0}, {.addr=0xc87f, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xc8b4, .a=0x72, .x=0xa1, .y=0x37, .sp=0x7f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc87e, .value=0xd0}, {.addr=0xc87f, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xc87e, .value=0xd0, .type=IO_READ},
        {.addr=0xc87f, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0324) {
    const struct CPU_State initial_cpu = {.pc=0x590a, .a=0xe0, .x=0xda, .y=0xe0, .sp=0xef, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x590a, .value=0xd0}, {.addr=0x590b, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x5891, .a=0xe0, .x=0xda, .y=0xe0, .sp=0xef, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x590a, .value=0xd0}, {.addr=0x590b, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x590a, .value=0xd0, .type=IO_READ},
        {.addr=0x590b, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0325) {
    const struct CPU_State initial_cpu = {.pc=0xb098, .a=0x6a, .x=0x71, .y=0x07, .sp=0xff, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb098, .value=0xd0}, {.addr=0xb099, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xb09a, .a=0x6a, .x=0x71, .y=0x07, .sp=0xff, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xb098, .value=0xd0}, {.addr=0xb099, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xb098, .value=0xd0, .type=IO_READ},
        {.addr=0xb099, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0326) {
    const struct CPU_State initial_cpu = {.pc=0x3b64, .a=0x2c, .x=0x42, .y=0xec, .sp=0x83, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x3b64, .value=0xd0}, {.addr=0x3b65, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x3bcd, .a=0x2c, .x=0x42, .y=0xec, .sp=0x83, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x3b64, .value=0xd0}, {.addr=0x3b65, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x3b64, .value=0xd0, .type=IO_READ},
        {.addr=0x3b65, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0327) {
    const struct CPU_State initial_cpu = {.pc=0xd86f, .a=0x98, .x=0x1b, .y=0xb1, .sp=0x3f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xd86f, .value=0xd0}, {.addr=0xd870, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xd87d, .a=0x98, .x=0x1b, .y=0xb1, .sp=0x3f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd86f, .value=0xd0}, {.addr=0xd870, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xd86f, .value=0xd0, .type=IO_READ},
        {.addr=0xd870, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0328) {
    const struct CPU_State initial_cpu = {.pc=0x62a0, .a=0x96, .x=0x41, .y=0xf6, .sp=0xb9, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x62a0, .value=0xd0}, {.addr=0x62a1, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x62a2, .a=0x96, .x=0x41, .y=0xf6, .sp=0xb9, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x62a0, .value=0xd0}, {.addr=0x62a1, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x62a0, .value=0xd0, .type=IO_READ},
        {.addr=0x62a1, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0329) {
    const struct CPU_State initial_cpu = {.pc=0xf992, .a=0x25, .x=0x1b, .y=0xda, .sp=0x2d, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xf992, .value=0xd0}, {.addr=0xf993, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xf9a2, .a=0x25, .x=0x1b, .y=0xda, .sp=0x2d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf992, .value=0xd0}, {.addr=0xf993, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xf992, .value=0xd0, .type=IO_READ},
        {.addr=0xf993, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_032A) {
    const struct CPU_State initial_cpu = {.pc=0x0c47, .a=0xa3, .x=0x86, .y=0x21, .sp=0x2e, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0c47, .value=0xd0}, {.addr=0x0c48, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x0bdc, .a=0xa3, .x=0x86, .y=0x21, .sp=0x2e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0c47, .value=0xd0}, {.addr=0x0c48, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x0c47, .value=0xd0, .type=IO_READ},
        {.addr=0x0c48, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_032B) {
    const struct CPU_State initial_cpu = {.pc=0xd01e, .a=0xa9, .x=0x6c, .y=0x8c, .sp=0x06, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xd01e, .value=0xd0}, {.addr=0xd01f, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xcff3, .a=0xa9, .x=0x6c, .y=0x8c, .sp=0x06, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xd01e, .value=0xd0}, {.addr=0xd01f, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xd01e, .value=0xd0, .type=IO_READ},
        {.addr=0xd01f, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_032C) {
    const struct CPU_State initial_cpu = {.pc=0x55b5, .a=0xf1, .x=0x2b, .y=0xaa, .sp=0x52, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x55b5, .value=0xd0}, {.addr=0x55b6, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x55b7, .a=0xf1, .x=0x2b, .y=0xaa, .sp=0x52, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x55b5, .value=0xd0}, {.addr=0x55b6, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x55b5, .value=0xd0, .type=IO_READ},
        {.addr=0x55b6, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_032D) {
    const struct CPU_State initial_cpu = {.pc=0x6a9e, .a=0x27, .x=0x5b, .y=0x45, .sp=0xa6, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x6a9e, .value=0xd0}, {.addr=0x6a9f, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x6aa0, .a=0x27, .x=0x5b, .y=0x45, .sp=0xa6, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x6a9e, .value=0xd0}, {.addr=0x6a9f, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x6a9e, .value=0xd0, .type=IO_READ},
        {.addr=0x6a9f, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_032E) {
    const struct CPU_State initial_cpu = {.pc=0x9b0b, .a=0x28, .x=0x11, .y=0x7f, .sp=0x92, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x9b0b, .value=0xd0}, {.addr=0x9b0c, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x9b0d, .a=0x28, .x=0x11, .y=0x7f, .sp=0x92, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x9b0b, .value=0xd0}, {.addr=0x9b0c, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x9b0b, .value=0xd0, .type=IO_READ},
        {.addr=0x9b0c, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_032F) {
    const struct CPU_State initial_cpu = {.pc=0xd35e, .a=0xf7, .x=0x07, .y=0x80, .sp=0x51, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd35e, .value=0xd0}, {.addr=0xd35f, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xd360, .a=0xf7, .x=0x07, .y=0x80, .sp=0x51, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xd35e, .value=0xd0}, {.addr=0xd35f, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xd35e, .value=0xd0, .type=IO_READ},
        {.addr=0xd35f, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0330) {
    const struct CPU_State initial_cpu = {.pc=0x3b6f, .a=0x26, .x=0x8d, .y=0x4a, .sp=0xad, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x3b6f, .value=0xd0}, {.addr=0x3b70, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x3b71, .a=0x26, .x=0x8d, .y=0x4a, .sp=0xad, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x3b6f, .value=0xd0}, {.addr=0x3b70, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x3b6f, .value=0xd0, .type=IO_READ},
        {.addr=0x3b70, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0331) {
    const struct CPU_State initial_cpu = {.pc=0x8a4e, .a=0xa2, .x=0x00, .y=0x88, .sp=0x93, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x8a4e, .value=0xd0}, {.addr=0x8a4f, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8a10, .a=0xa2, .x=0x00, .y=0x88, .sp=0x93, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8a4e, .value=0xd0}, {.addr=0x8a4f, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8a4e, .value=0xd0, .type=IO_READ},
        {.addr=0x8a4f, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0332) {
    const struct CPU_State initial_cpu = {.pc=0x6c89, .a=0x8a, .x=0xfa, .y=0x18, .sp=0x3b, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6c89, .value=0xd0}, {.addr=0x6c8a, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x6cc0, .a=0x8a, .x=0xfa, .y=0x18, .sp=0x3b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6c89, .value=0xd0}, {.addr=0x6c8a, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x6c89, .value=0xd0, .type=IO_READ},
        {.addr=0x6c8a, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0333) {
    const struct CPU_State initial_cpu = {.pc=0xa8fa, .a=0x28, .x=0xd4, .y=0xad, .sp=0x53, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xa8fa, .value=0xd0}, {.addr=0xa8fb, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xa8fc, .a=0x28, .x=0xd4, .y=0xad, .sp=0x53, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xa8fa, .value=0xd0}, {.addr=0xa8fb, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xa8fa, .value=0xd0, .type=IO_READ},
        {.addr=0xa8fb, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0334) {
    const struct CPU_State initial_cpu = {.pc=0x67ec, .a=0x10, .x=0x6c, .y=0x42, .sp=0x30, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x67ec, .value=0xd0}, {.addr=0x67ed, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x6823, .a=0x10, .x=0x6c, .y=0x42, .sp=0x30, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x67ec, .value=0xd0}, {.addr=0x67ed, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x67ec, .value=0xd0, .type=IO_READ},
        {.addr=0x67ed, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0335) {
    const struct CPU_State initial_cpu = {.pc=0x6499, .a=0x8f, .x=0xa0, .y=0x09, .sp=0x20, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x6499, .value=0xd0}, {.addr=0x649a, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x648c, .a=0x8f, .x=0xa0, .y=0x09, .sp=0x20, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x6499, .value=0xd0}, {.addr=0x649a, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x6499, .value=0xd0, .type=IO_READ},
        {.addr=0x649a, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0336) {
    const struct CPU_State initial_cpu = {.pc=0x9bb2, .a=0xd4, .x=0x35, .y=0x1d, .sp=0x68, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x9bb2, .value=0xd0}, {.addr=0x9bb3, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x9b83, .a=0xd4, .x=0x35, .y=0x1d, .sp=0x68, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x9bb2, .value=0xd0}, {.addr=0x9bb3, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x9bb2, .value=0xd0, .type=IO_READ},
        {.addr=0x9bb3, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0337) {
    const struct CPU_State initial_cpu = {.pc=0x1ccd, .a=0x88, .x=0x45, .y=0x21, .sp=0x60, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x1ccd, .value=0xd0}, {.addr=0x1cce, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1cab, .a=0x88, .x=0x45, .y=0x21, .sp=0x60, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1ccd, .value=0xd0}, {.addr=0x1cce, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1ccd, .value=0xd0, .type=IO_READ},
        {.addr=0x1cce, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0338) {
    const struct CPU_State initial_cpu = {.pc=0x9914, .a=0x4a, .x=0x70, .y=0x77, .sp=0x27, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x9914, .value=0xd0}, {.addr=0x9915, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x9945, .a=0x4a, .x=0x70, .y=0x77, .sp=0x27, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x9914, .value=0xd0}, {.addr=0x9915, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x9914, .value=0xd0, .type=IO_READ},
        {.addr=0x9915, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0339) {
    const struct CPU_State initial_cpu = {.pc=0x85ee, .a=0xcb, .x=0x25, .y=0x11, .sp=0x02, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x85ee, .value=0xd0}, {.addr=0x85ef, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x858c, .a=0xcb, .x=0x25, .y=0x11, .sp=0x02, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x85ee, .value=0xd0}, {.addr=0x85ef, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x85ee, .value=0xd0, .type=IO_READ},
        {.addr=0x85ef, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_033A) {
    const struct CPU_State initial_cpu = {.pc=0xae3e, .a=0x19, .x=0x07, .y=0x33, .sp=0xe8, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xae3e, .value=0xd0}, {.addr=0xae3f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xae46, .a=0x19, .x=0x07, .y=0x33, .sp=0xe8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xae3e, .value=0xd0}, {.addr=0xae3f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xae3e, .value=0xd0, .type=IO_READ},
        {.addr=0xae3f, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_033B) {
    const struct CPU_State initial_cpu = {.pc=0x6572, .a=0xe0, .x=0x4e, .y=0xde, .sp=0xe7, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x6572, .value=0xd0}, {.addr=0x6573, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x6574, .a=0xe0, .x=0x4e, .y=0xde, .sp=0xe7, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x6572, .value=0xd0}, {.addr=0x6573, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x6572, .value=0xd0, .type=IO_READ},
        {.addr=0x6573, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_033C) {
    const struct CPU_State initial_cpu = {.pc=0x629e, .a=0x8d, .x=0x36, .y=0x9f, .sp=0xab, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x629e, .value=0xd0}, {.addr=0x629f, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x62a0, .a=0x8d, .x=0x36, .y=0x9f, .sp=0xab, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x629e, .value=0xd0}, {.addr=0x629f, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x629e, .value=0xd0, .type=IO_READ},
        {.addr=0x629f, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_033D) {
    const struct CPU_State initial_cpu = {.pc=0xeea5, .a=0x51, .x=0xe5, .y=0xb3, .sp=0xed, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xeea5, .value=0xd0}, {.addr=0xeea6, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xee40, .a=0x51, .x=0xe5, .y=0xb3, .sp=0xed, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xeea5, .value=0xd0}, {.addr=0xeea6, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xeea5, .value=0xd0, .type=IO_READ},
        {.addr=0xeea6, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_033E) {
    const struct CPU_State initial_cpu = {.pc=0xca06, .a=0x37, .x=0x55, .y=0xf1, .sp=0xba, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xca06, .value=0xd0}, {.addr=0xca07, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xca08, .a=0x37, .x=0x55, .y=0xf1, .sp=0xba, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xca06, .value=0xd0}, {.addr=0xca07, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xca06, .value=0xd0, .type=IO_READ},
        {.addr=0xca07, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_033F) {
    const struct CPU_State initial_cpu = {.pc=0xed47, .a=0x49, .x=0x26, .y=0x97, .sp=0x2b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xed47, .value=0xd0}, {.addr=0xed48, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xecd4, .a=0x49, .x=0x26, .y=0x97, .sp=0x2b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xed47, .value=0xd0}, {.addr=0xed48, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xed47, .value=0xd0, .type=IO_READ},
        {.addr=0xed48, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0340) {
    const struct CPU_State initial_cpu = {.pc=0xdfc3, .a=0x1d, .x=0xce, .y=0xb7, .sp=0x8a, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xdfc3, .value=0xd0}, {.addr=0xdfc4, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xdfc5, .a=0x1d, .x=0xce, .y=0xb7, .sp=0x8a, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xdfc3, .value=0xd0}, {.addr=0xdfc4, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xdfc3, .value=0xd0, .type=IO_READ},
        {.addr=0xdfc4, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0341) {
    const struct CPU_State initial_cpu = {.pc=0x1897, .a=0xdd, .x=0x58, .y=0x55, .sp=0x5d, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x1897, .value=0xd0}, {.addr=0x1898, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x1899, .a=0xdd, .x=0x58, .y=0x55, .sp=0x5d, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x1897, .value=0xd0}, {.addr=0x1898, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x1897, .value=0xd0, .type=IO_READ},
        {.addr=0x1898, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0342) {
    const struct CPU_State initial_cpu = {.pc=0x05d7, .a=0x24, .x=0xd7, .y=0x36, .sp=0x9d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x05d7, .value=0xd0}, {.addr=0x05d8, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x05d9, .a=0x24, .x=0xd7, .y=0x36, .sp=0x9d, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x05d7, .value=0xd0}, {.addr=0x05d8, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x05d7, .value=0xd0, .type=IO_READ},
        {.addr=0x05d8, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0343) {
    const struct CPU_State initial_cpu = {.pc=0xa30c, .a=0x0b, .x=0xd4, .y=0xb8, .sp=0xce, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xa30c, .value=0xd0}, {.addr=0xa30d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa30e, .a=0x0b, .x=0xd4, .y=0xb8, .sp=0xce, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xa30c, .value=0xd0}, {.addr=0xa30d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa30c, .value=0xd0, .type=IO_READ},
        {.addr=0xa30d, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0344) {
    const struct CPU_State initial_cpu = {.pc=0x2b0a, .a=0x92, .x=0xcd, .y=0xe9, .sp=0xdc, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x2b0a, .value=0xd0}, {.addr=0x2b0b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2aba, .a=0x92, .x=0xcd, .y=0xe9, .sp=0xdc, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x2b0a, .value=0xd0}, {.addr=0x2b0b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2b0a, .value=0xd0, .type=IO_READ},
        {.addr=0x2b0b, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0345) {
    const struct CPU_State initial_cpu = {.pc=0x3e8f, .a=0x19, .x=0x7d, .y=0xd9, .sp=0x55, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x3e8f, .value=0xd0}, {.addr=0x3e90, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x3e91, .a=0x19, .x=0x7d, .y=0xd9, .sp=0x55, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x3e8f, .value=0xd0}, {.addr=0x3e90, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x3e8f, .value=0xd0, .type=IO_READ},
        {.addr=0x3e90, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0346) {
    const struct CPU_State initial_cpu = {.pc=0x9c0c, .a=0x7f, .x=0x5c, .y=0x52, .sp=0x5e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x9c0c, .value=0xd0}, {.addr=0x9c0d, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x9c0e, .a=0x7f, .x=0x5c, .y=0x52, .sp=0x5e, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x9c0c, .value=0xd0}, {.addr=0x9c0d, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x9c0c, .value=0xd0, .type=IO_READ},
        {.addr=0x9c0d, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0347) {
    const struct CPU_State initial_cpu = {.pc=0xac09, .a=0xc6, .x=0xb9, .y=0xca, .sp=0xc6, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xac09, .value=0xd0}, {.addr=0xac0a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xac87, .a=0xc6, .x=0xb9, .y=0xca, .sp=0xc6, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xac09, .value=0xd0}, {.addr=0xac0a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xac09, .value=0xd0, .type=IO_READ},
        {.addr=0xac0a, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0348) {
    const struct CPU_State initial_cpu = {.pc=0x03bd, .a=0xdb, .x=0xe2, .y=0xbb, .sp=0x77, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x03bd, .value=0xd0}, {.addr=0x03be, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x043d, .a=0xdb, .x=0xe2, .y=0xbb, .sp=0x77, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x03bd, .value=0xd0}, {.addr=0x03be, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x03bd, .value=0xd0, .type=IO_READ},
        {.addr=0x03be, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0349) {
    const struct CPU_State initial_cpu = {.pc=0xae20, .a=0x3b, .x=0x4a, .y=0x80, .sp=0xc6, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xae20, .value=0xd0}, {.addr=0xae21, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xae22, .a=0x3b, .x=0x4a, .y=0x80, .sp=0xc6, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xae20, .value=0xd0}, {.addr=0xae21, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xae20, .value=0xd0, .type=IO_READ},
        {.addr=0xae21, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_034A) {
    const struct CPU_State initial_cpu = {.pc=0x02f9, .a=0x64, .x=0x95, .y=0x88, .sp=0x0e, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x02f9, .value=0xd0}, {.addr=0x02fa, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x030e, .a=0x64, .x=0x95, .y=0x88, .sp=0x0e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x02f9, .value=0xd0}, {.addr=0x02fa, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x02f9, .value=0xd0, .type=IO_READ},
        {.addr=0x02fa, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_034B) {
    const struct CPU_State initial_cpu = {.pc=0xa4dc, .a=0xb2, .x=0x90, .y=0x98, .sp=0x0f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xa4dc, .value=0xd0}, {.addr=0xa4dd, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xa4de, .a=0xb2, .x=0x90, .y=0x98, .sp=0x0f, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xa4dc, .value=0xd0}, {.addr=0xa4dd, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xa4dc, .value=0xd0, .type=IO_READ},
        {.addr=0xa4dd, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_034C) {
    const struct CPU_State initial_cpu = {.pc=0x277e, .a=0x7e, .x=0x00, .y=0xf0, .sp=0x9b, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x277e, .value=0xd0}, {.addr=0x277f, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x2780, .a=0x7e, .x=0x00, .y=0xf0, .sp=0x9b, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x277e, .value=0xd0}, {.addr=0x277f, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x277e, .value=0xd0, .type=IO_READ},
        {.addr=0x277f, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_034D) {
    const struct CPU_State initial_cpu = {.pc=0x8b76, .a=0xd7, .x=0x97, .y=0xe0, .sp=0x64, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x8b76, .value=0xd0}, {.addr=0x8b77, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x8b09, .a=0xd7, .x=0x97, .y=0xe0, .sp=0x64, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8b76, .value=0xd0}, {.addr=0x8b77, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x8b76, .value=0xd0, .type=IO_READ},
        {.addr=0x8b77, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_034E) {
    const struct CPU_State initial_cpu = {.pc=0x23b3, .a=0x14, .x=0x5b, .y=0x10, .sp=0xd3, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x23b3, .value=0xd0}, {.addr=0x23b4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x23b5, .a=0x14, .x=0x5b, .y=0x10, .sp=0xd3, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x23b3, .value=0xd0}, {.addr=0x23b4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x23b3, .value=0xd0, .type=IO_READ},
        {.addr=0x23b4, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_034F) {
    const struct CPU_State initial_cpu = {.pc=0xfd39, .a=0x7f, .x=0x8a, .y=0x25, .sp=0x0d, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xfd39, .value=0xd0}, {.addr=0xfd3a, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xfd55, .a=0x7f, .x=0x8a, .y=0x25, .sp=0x0d, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xfd39, .value=0xd0}, {.addr=0xfd3a, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xfd39, .value=0xd0, .type=IO_READ},
        {.addr=0xfd3a, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0350) {
    const struct CPU_State initial_cpu = {.pc=0xa064, .a=0xff, .x=0x7c, .y=0x81, .sp=0x56, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xa064, .value=0xd0}, {.addr=0xa065, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xa066, .a=0xff, .x=0x7c, .y=0x81, .sp=0x56, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xa064, .value=0xd0}, {.addr=0xa065, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xa064, .value=0xd0, .type=IO_READ},
        {.addr=0xa065, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0351) {
    const struct CPU_State initial_cpu = {.pc=0x724f, .a=0xf3, .x=0xa0, .y=0x24, .sp=0xc8, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x724f, .value=0xd0}, {.addr=0x7250, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x72ae, .a=0xf3, .x=0xa0, .y=0x24, .sp=0xc8, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x724f, .value=0xd0}, {.addr=0x7250, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x724f, .value=0xd0, .type=IO_READ},
        {.addr=0x7250, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0352) {
    const struct CPU_State initial_cpu = {.pc=0xb19e, .a=0x5a, .x=0x3c, .y=0x52, .sp=0xed, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xb19e, .value=0xd0}, {.addr=0xb19f, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xb214, .a=0x5a, .x=0x3c, .y=0x52, .sp=0xed, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xb19e, .value=0xd0}, {.addr=0xb19f, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xb19e, .value=0xd0, .type=IO_READ},
        {.addr=0xb19f, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0353) {
    const struct CPU_State initial_cpu = {.pc=0x9ea6, .a=0xb6, .x=0x8d, .y=0x8f, .sp=0x25, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x9ea6, .value=0xd0}, {.addr=0x9ea7, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x9efb, .a=0xb6, .x=0x8d, .y=0x8f, .sp=0x25, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9ea6, .value=0xd0}, {.addr=0x9ea7, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x9ea6, .value=0xd0, .type=IO_READ},
        {.addr=0x9ea7, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0354) {
    const struct CPU_State initial_cpu = {.pc=0x4ef7, .a=0xda, .x=0xa0, .y=0x35, .sp=0x4f, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x4ef7, .value=0xd0}, {.addr=0x4ef8, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x4e9f, .a=0xda, .x=0xa0, .y=0x35, .sp=0x4f, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x4ef7, .value=0xd0}, {.addr=0x4ef8, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x4ef7, .value=0xd0, .type=IO_READ},
        {.addr=0x4ef8, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0355) {
    const struct CPU_State initial_cpu = {.pc=0x7be3, .a=0x6e, .x=0x64, .y=0x9d, .sp=0xb5, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x7be3, .value=0xd0}, {.addr=0x7be4, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x7bf3, .a=0x6e, .x=0x64, .y=0x9d, .sp=0xb5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7be3, .value=0xd0}, {.addr=0x7be4, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x7be3, .value=0xd0, .type=IO_READ},
        {.addr=0x7be4, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0356) {
    const struct CPU_State initial_cpu = {.pc=0xf3cd, .a=0xca, .x=0xea, .y=0x17, .sp=0xf5, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xf3cd, .value=0xd0}, {.addr=0xf3ce, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xf3cf, .a=0xca, .x=0xea, .y=0x17, .sp=0xf5, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xf3cd, .value=0xd0}, {.addr=0xf3ce, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xf3cd, .value=0xd0, .type=IO_READ},
        {.addr=0xf3ce, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0357) {
    const struct CPU_State initial_cpu = {.pc=0x13e5, .a=0xa3, .x=0x40, .y=0x04, .sp=0xb1, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x13e5, .value=0xd0}, {.addr=0x13e6, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x13fd, .a=0xa3, .x=0x40, .y=0x04, .sp=0xb1, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x13e5, .value=0xd0}, {.addr=0x13e6, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x13e5, .value=0xd0, .type=IO_READ},
        {.addr=0x13e6, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0358) {
    const struct CPU_State initial_cpu = {.pc=0xf29c, .a=0x1e, .x=0xac, .y=0xf3, .sp=0x66, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xf29c, .value=0xd0}, {.addr=0xf29d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf29e, .a=0x1e, .x=0xac, .y=0xf3, .sp=0x66, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xf29c, .value=0xd0}, {.addr=0xf29d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf29c, .value=0xd0, .type=IO_READ},
        {.addr=0xf29d, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0359) {
    const struct CPU_State initial_cpu = {.pc=0xca15, .a=0x0e, .x=0x33, .y=0x27, .sp=0xa5, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xca15, .value=0xd0}, {.addr=0xca16, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xca22, .a=0x0e, .x=0x33, .y=0x27, .sp=0xa5, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xca15, .value=0xd0}, {.addr=0xca16, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xca15, .value=0xd0, .type=IO_READ},
        {.addr=0xca16, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_035A) {
    const struct CPU_State initial_cpu = {.pc=0xcb03, .a=0x37, .x=0xf6, .y=0xaa, .sp=0x97, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xcb03, .value=0xd0}, {.addr=0xcb04, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xcb05, .a=0x37, .x=0xf6, .y=0xaa, .sp=0x97, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xcb03, .value=0xd0}, {.addr=0xcb04, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xcb03, .value=0xd0, .type=IO_READ},
        {.addr=0xcb04, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_035B) {
    const struct CPU_State initial_cpu = {.pc=0x7a6b, .a=0xdb, .x=0x6d, .y=0x34, .sp=0xae, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x7a6b, .value=0xd0}, {.addr=0x7a6c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7a1c, .a=0xdb, .x=0x6d, .y=0x34, .sp=0xae, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7a6b, .value=0xd0}, {.addr=0x7a6c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7a6b, .value=0xd0, .type=IO_READ},
        {.addr=0x7a6c, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_035C) {
    const struct CPU_State initial_cpu = {.pc=0xb794, .a=0x61, .x=0xe0, .y=0xf1, .sp=0x68, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xb794, .value=0xd0}, {.addr=0xb795, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xb7d4, .a=0x61, .x=0xe0, .y=0xf1, .sp=0x68, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xb794, .value=0xd0}, {.addr=0xb795, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xb794, .value=0xd0, .type=IO_READ},
        {.addr=0xb795, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_035D) {
    const struct CPU_State initial_cpu = {.pc=0x26fb, .a=0xcd, .x=0xdb, .y=0x90, .sp=0x38, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x26fb, .value=0xd0}, {.addr=0x26fc, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x26fd, .a=0xcd, .x=0xdb, .y=0x90, .sp=0x38, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x26fb, .value=0xd0}, {.addr=0x26fc, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x26fb, .value=0xd0, .type=IO_READ},
        {.addr=0x26fc, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_035E) {
    const struct CPU_State initial_cpu = {.pc=0x2796, .a=0x8d, .x=0x30, .y=0xe1, .sp=0x68, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x2796, .value=0xd0}, {.addr=0x2797, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x2798, .a=0x8d, .x=0x30, .y=0xe1, .sp=0x68, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x2796, .value=0xd0}, {.addr=0x2797, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x2796, .value=0xd0, .type=IO_READ},
        {.addr=0x2797, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_035F) {
    const struct CPU_State initial_cpu = {.pc=0xa4a1, .a=0xf7, .x=0x1d, .y=0x18, .sp=0x7a, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xa4a1, .value=0xd0}, {.addr=0xa4a2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa4a3, .a=0xf7, .x=0x1d, .y=0x18, .sp=0x7a, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xa4a1, .value=0xd0}, {.addr=0xa4a2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa4a1, .value=0xd0, .type=IO_READ},
        {.addr=0xa4a2, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0360) {
    const struct CPU_State initial_cpu = {.pc=0x0b5d, .a=0x71, .x=0x83, .y=0x62, .sp=0x9e, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0b5d, .value=0xd0}, {.addr=0x0b5e, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x0ae6, .a=0x71, .x=0x83, .y=0x62, .sp=0x9e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0b5d, .value=0xd0}, {.addr=0x0b5e, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x0b5d, .value=0xd0, .type=IO_READ},
        {.addr=0x0b5e, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0361) {
    const struct CPU_State initial_cpu = {.pc=0x4f1a, .a=0x07, .x=0xbe, .y=0x44, .sp=0x1a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x4f1a, .value=0xd0}, {.addr=0x4f1b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4f49, .a=0x07, .x=0xbe, .y=0x44, .sp=0x1a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x4f1a, .value=0xd0}, {.addr=0x4f1b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4f1a, .value=0xd0, .type=IO_READ},
        {.addr=0x4f1b, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0362) {
    const struct CPU_State initial_cpu = {.pc=0x5119, .a=0x3d, .x=0xe3, .y=0xd8, .sp=0x64, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5119, .value=0xd0}, {.addr=0x511a, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x50f6, .a=0x3d, .x=0xe3, .y=0xd8, .sp=0x64, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5119, .value=0xd0}, {.addr=0x511a, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x5119, .value=0xd0, .type=IO_READ},
        {.addr=0x511a, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0363) {
    const struct CPU_State initial_cpu = {.pc=0x0166, .a=0x0c, .x=0x6a, .y=0xd5, .sp=0xa6, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xd0}, {.addr=0x0167, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x0174, .a=0x0c, .x=0x6a, .y=0xd5, .sp=0xa6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xd0}, {.addr=0x0167, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x0166, .value=0xd0, .type=IO_READ},
        {.addr=0x0167, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0364) {
    const struct CPU_State initial_cpu = {.pc=0xa805, .a=0x35, .x=0xd8, .y=0x27, .sp=0x38, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xa805, .value=0xd0}, {.addr=0xa806, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xa807, .a=0x35, .x=0xd8, .y=0x27, .sp=0x38, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xa805, .value=0xd0}, {.addr=0xa806, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xa805, .value=0xd0, .type=IO_READ},
        {.addr=0xa806, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0365) {
    const struct CPU_State initial_cpu = {.pc=0x3663, .a=0x9b, .x=0x6e, .y=0xa3, .sp=0x8c, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x3663, .value=0xd0}, {.addr=0x3664, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3605, .a=0x9b, .x=0x6e, .y=0xa3, .sp=0x8c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3663, .value=0xd0}, {.addr=0x3664, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3663, .value=0xd0, .type=IO_READ},
        {.addr=0x3664, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0366) {
    const struct CPU_State initial_cpu = {.pc=0xb70e, .a=0x39, .x=0x18, .y=0x30, .sp=0x45, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xb70e, .value=0xd0}, {.addr=0xb70f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb710, .a=0x39, .x=0x18, .y=0x30, .sp=0x45, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xb70e, .value=0xd0}, {.addr=0xb70f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb70e, .value=0xd0, .type=IO_READ},
        {.addr=0xb70f, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0367) {
    const struct CPU_State initial_cpu = {.pc=0x1ae1, .a=0xff, .x=0x73, .y=0x54, .sp=0xf9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x1ae1, .value=0xd0}, {.addr=0x1ae2, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x1a78, .a=0xff, .x=0x73, .y=0x54, .sp=0xf9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x1ae1, .value=0xd0}, {.addr=0x1ae2, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x1ae1, .value=0xd0, .type=IO_READ},
        {.addr=0x1ae2, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0368) {
    const struct CPU_State initial_cpu = {.pc=0x25f4, .a=0xdc, .x=0xb8, .y=0x3b, .sp=0xb7, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x25f4, .value=0xd0}, {.addr=0x25f5, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x25f6, .a=0xdc, .x=0xb8, .y=0x3b, .sp=0xb7, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x25f4, .value=0xd0}, {.addr=0x25f5, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x25f4, .value=0xd0, .type=IO_READ},
        {.addr=0x25f5, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0369) {
    const struct CPU_State initial_cpu = {.pc=0xcee2, .a=0xf9, .x=0x01, .y=0xab, .sp=0x14, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xcee2, .value=0xd0}, {.addr=0xcee3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcee4, .a=0xf9, .x=0x01, .y=0xab, .sp=0x14, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xcee2, .value=0xd0}, {.addr=0xcee3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcee2, .value=0xd0, .type=IO_READ},
        {.addr=0xcee3, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_036A) {
    const struct CPU_State initial_cpu = {.pc=0x218e, .a=0xd0, .x=0x35, .y=0xc9, .sp=0xff, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x218e, .value=0xd0}, {.addr=0x218f, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x21f2, .a=0xd0, .x=0x35, .y=0xc9, .sp=0xff, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x218e, .value=0xd0}, {.addr=0x218f, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x218e, .value=0xd0, .type=IO_READ},
        {.addr=0x218f, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_036B) {
    const struct CPU_State initial_cpu = {.pc=0x1e05, .a=0xac, .x=0x02, .y=0x33, .sp=0x84, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x1e05, .value=0xd0}, {.addr=0x1e06, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x1e07, .a=0xac, .x=0x02, .y=0x33, .sp=0x84, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x1e05, .value=0xd0}, {.addr=0x1e06, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x1e05, .value=0xd0, .type=IO_READ},
        {.addr=0x1e06, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_036C) {
    const struct CPU_State initial_cpu = {.pc=0x5acc, .a=0x8b, .x=0x21, .y=0x69, .sp=0x0b, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x5acc, .value=0xd0}, {.addr=0x5acd, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x5ace, .a=0x8b, .x=0x21, .y=0x69, .sp=0x0b, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x5acc, .value=0xd0}, {.addr=0x5acd, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x5acc, .value=0xd0, .type=IO_READ},
        {.addr=0x5acd, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_036D) {
    const struct CPU_State initial_cpu = {.pc=0xacf8, .a=0x28, .x=0xfe, .y=0x45, .sp=0x8d, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xacf8, .value=0xd0}, {.addr=0xacf9, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xacfa, .a=0x28, .x=0xfe, .y=0x45, .sp=0x8d, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xacf8, .value=0xd0}, {.addr=0xacf9, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xacf8, .value=0xd0, .type=IO_READ},
        {.addr=0xacf9, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_036E) {
    const struct CPU_State initial_cpu = {.pc=0xcb8e, .a=0x99, .x=0x0d, .y=0x65, .sp=0xdf, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xcb8e, .value=0xd0}, {.addr=0xcb8f, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xcb90, .a=0x99, .x=0x0d, .y=0x65, .sp=0xdf, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xcb8e, .value=0xd0}, {.addr=0xcb8f, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xcb8e, .value=0xd0, .type=IO_READ},
        {.addr=0xcb8f, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_036F) {
    const struct CPU_State initial_cpu = {.pc=0x5bde, .a=0x57, .x=0xfa, .y=0xf1, .sp=0x09, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x5bde, .value=0xd0}, {.addr=0x5bdf, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x5bf9, .a=0x57, .x=0xfa, .y=0xf1, .sp=0x09, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5bde, .value=0xd0}, {.addr=0x5bdf, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x5bde, .value=0xd0, .type=IO_READ},
        {.addr=0x5bdf, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0370) {
    const struct CPU_State initial_cpu = {.pc=0xedcc, .a=0xd0, .x=0xcf, .y=0x66, .sp=0xc3, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xedcc, .value=0xd0}, {.addr=0xedcd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xedb4, .a=0xd0, .x=0xcf, .y=0x66, .sp=0xc3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xedcc, .value=0xd0}, {.addr=0xedcd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xedcc, .value=0xd0, .type=IO_READ},
        {.addr=0xedcd, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0371) {
    const struct CPU_State initial_cpu = {.pc=0x6627, .a=0xa1, .x=0xd0, .y=0x26, .sp=0x22, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x6627, .value=0xd0}, {.addr=0x6628, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x6629, .a=0xa1, .x=0xd0, .y=0x26, .sp=0x22, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x6627, .value=0xd0}, {.addr=0x6628, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x6627, .value=0xd0, .type=IO_READ},
        {.addr=0x6628, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0372) {
    const struct CPU_State initial_cpu = {.pc=0x810f, .a=0x1a, .x=0x5e, .y=0xc9, .sp=0xd3, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x810f, .value=0xd0}, {.addr=0x8110, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x8111, .a=0x1a, .x=0x5e, .y=0xc9, .sp=0xd3, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x810f, .value=0xd0}, {.addr=0x8110, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x810f, .value=0xd0, .type=IO_READ},
        {.addr=0x8110, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0373) {
    const struct CPU_State initial_cpu = {.pc=0x4b86, .a=0x2d, .x=0x90, .y=0xc6, .sp=0xf0, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x4b86, .value=0xd0}, {.addr=0x4b87, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x4b55, .a=0x2d, .x=0x90, .y=0xc6, .sp=0xf0, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x4b86, .value=0xd0}, {.addr=0x4b87, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x4b86, .value=0xd0, .type=IO_READ},
        {.addr=0x4b87, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0374) {
    const struct CPU_State initial_cpu = {.pc=0x3119, .a=0x52, .x=0xdc, .y=0x46, .sp=0xe1, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x3119, .value=0xd0}, {.addr=0x311a, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x311b, .a=0x52, .x=0xdc, .y=0x46, .sp=0xe1, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x3119, .value=0xd0}, {.addr=0x311a, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x3119, .value=0xd0, .type=IO_READ},
        {.addr=0x311a, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0375) {
    const struct CPU_State initial_cpu = {.pc=0x3694, .a=0x24, .x=0xb6, .y=0x38, .sp=0x86, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x3694, .value=0xd0}, {.addr=0x3695, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x3696, .a=0x24, .x=0xb6, .y=0x38, .sp=0x86, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x3694, .value=0xd0}, {.addr=0x3695, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x3694, .value=0xd0, .type=IO_READ},
        {.addr=0x3695, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0376) {
    const struct CPU_State initial_cpu = {.pc=0x71af, .a=0xe0, .x=0x33, .y=0x55, .sp=0x89, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x71af, .value=0xd0}, {.addr=0x71b0, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x7155, .a=0xe0, .x=0x33, .y=0x55, .sp=0x89, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x71af, .value=0xd0}, {.addr=0x71b0, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x71af, .value=0xd0, .type=IO_READ},
        {.addr=0x71b0, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0377) {
    const struct CPU_State initial_cpu = {.pc=0x99fc, .a=0xdb, .x=0xe6, .y=0xf0, .sp=0x06, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x99fc, .value=0xd0}, {.addr=0x99fd, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x99fe, .a=0xdb, .x=0xe6, .y=0xf0, .sp=0x06, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x99fc, .value=0xd0}, {.addr=0x99fd, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x99fc, .value=0xd0, .type=IO_READ},
        {.addr=0x99fd, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0378) {
    const struct CPU_State initial_cpu = {.pc=0x9592, .a=0x47, .x=0x49, .y=0x3f, .sp=0x24, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x9592, .value=0xd0}, {.addr=0x9593, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x9594, .a=0x47, .x=0x49, .y=0x3f, .sp=0x24, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x9592, .value=0xd0}, {.addr=0x9593, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x9592, .value=0xd0, .type=IO_READ},
        {.addr=0x9593, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0379) {
    const struct CPU_State initial_cpu = {.pc=0x3539, .a=0xea, .x=0xac, .y=0x9b, .sp=0xfb, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x3539, .value=0xd0}, {.addr=0x353a, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x353b, .a=0xea, .x=0xac, .y=0x9b, .sp=0xfb, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x3539, .value=0xd0}, {.addr=0x353a, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x3539, .value=0xd0, .type=IO_READ},
        {.addr=0x353a, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_037A) {
    const struct CPU_State initial_cpu = {.pc=0xeb2c, .a=0xf8, .x=0x6e, .y=0x0b, .sp=0x93, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xeb2c, .value=0xd0}, {.addr=0xeb2d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xeb2e, .a=0xf8, .x=0x6e, .y=0x0b, .sp=0x93, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xeb2c, .value=0xd0}, {.addr=0xeb2d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xeb2c, .value=0xd0, .type=IO_READ},
        {.addr=0xeb2d, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_037B) {
    const struct CPU_State initial_cpu = {.pc=0xd13f, .a=0x55, .x=0xd9, .y=0xb0, .sp=0xa8, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xd13f, .value=0xd0}, {.addr=0xd140, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xd141, .a=0x55, .x=0xd9, .y=0xb0, .sp=0xa8, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xd13f, .value=0xd0}, {.addr=0xd140, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xd13f, .value=0xd0, .type=IO_READ},
        {.addr=0xd140, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_037C) {
    const struct CPU_State initial_cpu = {.pc=0xa36b, .a=0x39, .x=0x82, .y=0xce, .sp=0x15, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xa36b, .value=0xd0}, {.addr=0xa36c, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xa36d, .a=0x39, .x=0x82, .y=0xce, .sp=0x15, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xa36b, .value=0xd0}, {.addr=0xa36c, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xa36b, .value=0xd0, .type=IO_READ},
        {.addr=0xa36c, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_037D) {
    const struct CPU_State initial_cpu = {.pc=0xbb1c, .a=0x7f, .x=0x03, .y=0x26, .sp=0xb1, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xbb1c, .value=0xd0}, {.addr=0xbb1d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbb84, .a=0x7f, .x=0x03, .y=0x26, .sp=0xb1, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xbb1c, .value=0xd0}, {.addr=0xbb1d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbb1c, .value=0xd0, .type=IO_READ},
        {.addr=0xbb1d, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_037E) {
    const struct CPU_State initial_cpu = {.pc=0x93aa, .a=0x46, .x=0xeb, .y=0x1d, .sp=0x9e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x93aa, .value=0xd0}, {.addr=0x93ab, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x93ac, .a=0x46, .x=0xeb, .y=0x1d, .sp=0x9e, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x93aa, .value=0xd0}, {.addr=0x93ab, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x93aa, .value=0xd0, .type=IO_READ},
        {.addr=0x93ab, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_037F) {
    const struct CPU_State initial_cpu = {.pc=0x0142, .a=0x79, .x=0x81, .y=0x33, .sp=0xc9, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xd0}, {.addr=0x0143, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x01ad, .a=0x79, .x=0x81, .y=0x33, .sp=0xc9, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xd0}, {.addr=0x0143, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x0142, .value=0xd0, .type=IO_READ},
        {.addr=0x0143, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0380) {
    const struct CPU_State initial_cpu = {.pc=0xab79, .a=0xc7, .x=0xd3, .y=0xb2, .sp=0x99, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xab79, .value=0xd0}, {.addr=0xab7a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xab7b, .a=0xc7, .x=0xd3, .y=0xb2, .sp=0x99, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xab79, .value=0xd0}, {.addr=0xab7a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xab79, .value=0xd0, .type=IO_READ},
        {.addr=0xab7a, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0381) {
    const struct CPU_State initial_cpu = {.pc=0x2279, .a=0xbc, .x=0x53, .y=0xaf, .sp=0x0e, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x2279, .value=0xd0}, {.addr=0x227a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x227b, .a=0xbc, .x=0x53, .y=0xaf, .sp=0x0e, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x2279, .value=0xd0}, {.addr=0x227a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2279, .value=0xd0, .type=IO_READ},
        {.addr=0x227a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0382) {
    const struct CPU_State initial_cpu = {.pc=0xb38b, .a=0x38, .x=0xb7, .y=0x49, .sp=0x9d, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xb38b, .value=0xd0}, {.addr=0xb38c, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xb364, .a=0x38, .x=0xb7, .y=0x49, .sp=0x9d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb38b, .value=0xd0}, {.addr=0xb38c, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xb38b, .value=0xd0, .type=IO_READ},
        {.addr=0xb38c, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0383) {
    const struct CPU_State initial_cpu = {.pc=0xbc05, .a=0xb1, .x=0xfc, .y=0x2e, .sp=0xf9, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xbc05, .value=0xd0}, {.addr=0xbc06, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xbc07, .a=0xb1, .x=0xfc, .y=0x2e, .sp=0xf9, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xbc05, .value=0xd0}, {.addr=0xbc06, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xbc05, .value=0xd0, .type=IO_READ},
        {.addr=0xbc06, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0384) {
    const struct CPU_State initial_cpu = {.pc=0x0af8, .a=0x38, .x=0xf5, .y=0x4a, .sp=0x53, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0af8, .value=0xd0}, {.addr=0x0af9, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x0afa, .a=0x38, .x=0xf5, .y=0x4a, .sp=0x53, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0af8, .value=0xd0}, {.addr=0x0af9, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x0af8, .value=0xd0, .type=IO_READ},
        {.addr=0x0af9, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0385) {
    const struct CPU_State initial_cpu = {.pc=0x3fae, .a=0xbd, .x=0xca, .y=0x74, .sp=0x1d, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x3fae, .value=0xd0}, {.addr=0x3faf, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x3f93, .a=0xbd, .x=0xca, .y=0x74, .sp=0x1d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3fae, .value=0xd0}, {.addr=0x3faf, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x3fae, .value=0xd0, .type=IO_READ},
        {.addr=0x3faf, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0386) {
    const struct CPU_State initial_cpu = {.pc=0x7dbd, .a=0xf6, .x=0x2a, .y=0x16, .sp=0x68, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x7dbd, .value=0xd0}, {.addr=0x7dbe, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x7dc3, .a=0xf6, .x=0x2a, .y=0x16, .sp=0x68, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7dbd, .value=0xd0}, {.addr=0x7dbe, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x7dbd, .value=0xd0, .type=IO_READ},
        {.addr=0x7dbe, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0387) {
    const struct CPU_State initial_cpu = {.pc=0xb69b, .a=0xc5, .x=0x09, .y=0xff, .sp=0xe7, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xb69b, .value=0xd0}, {.addr=0xb69c, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xb69d, .a=0xc5, .x=0x09, .y=0xff, .sp=0xe7, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xb69b, .value=0xd0}, {.addr=0xb69c, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xb69b, .value=0xd0, .type=IO_READ},
        {.addr=0xb69c, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0388) {
    const struct CPU_State initial_cpu = {.pc=0xacbe, .a=0x5c, .x=0xf4, .y=0x5b, .sp=0x15, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xacbe, .value=0xd0}, {.addr=0xacbf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xaccd, .a=0x5c, .x=0xf4, .y=0x5b, .sp=0x15, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xacbe, .value=0xd0}, {.addr=0xacbf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xacbe, .value=0xd0, .type=IO_READ},
        {.addr=0xacbf, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0389) {
    const struct CPU_State initial_cpu = {.pc=0x30ca, .a=0x38, .x=0x21, .y=0x3e, .sp=0xf9, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x30ca, .value=0xd0}, {.addr=0x30cb, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x30cc, .a=0x38, .x=0x21, .y=0x3e, .sp=0xf9, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x30ca, .value=0xd0}, {.addr=0x30cb, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x30ca, .value=0xd0, .type=IO_READ},
        {.addr=0x30cb, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_038A) {
    const struct CPU_State initial_cpu = {.pc=0x2cbb, .a=0x67, .x=0x66, .y=0xb6, .sp=0x4a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x2cbb, .value=0xd0}, {.addr=0x2cbc, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x2cbd, .a=0x67, .x=0x66, .y=0xb6, .sp=0x4a, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x2cbb, .value=0xd0}, {.addr=0x2cbc, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x2cbb, .value=0xd0, .type=IO_READ},
        {.addr=0x2cbc, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_038B) {
    const struct CPU_State initial_cpu = {.pc=0x379c, .a=0xab, .x=0x04, .y=0x54, .sp=0x80, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x379c, .value=0xd0}, {.addr=0x379d, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x379e, .a=0xab, .x=0x04, .y=0x54, .sp=0x80, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x379c, .value=0xd0}, {.addr=0x379d, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x379c, .value=0xd0, .type=IO_READ},
        {.addr=0x379d, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_038C) {
    const struct CPU_State initial_cpu = {.pc=0xc37a, .a=0xcf, .x=0xe1, .y=0x71, .sp=0x9d, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xc37a, .value=0xd0}, {.addr=0xc37b, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xc37c, .a=0xcf, .x=0xe1, .y=0x71, .sp=0x9d, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xc37a, .value=0xd0}, {.addr=0xc37b, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xc37a, .value=0xd0, .type=IO_READ},
        {.addr=0xc37b, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_038D) {
    const struct CPU_State initial_cpu = {.pc=0x522e, .a=0xcf, .x=0x40, .y=0x8e, .sp=0x54, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x522e, .value=0xd0}, {.addr=0x522f, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x5263, .a=0xcf, .x=0x40, .y=0x8e, .sp=0x54, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x522e, .value=0xd0}, {.addr=0x522f, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x522e, .value=0xd0, .type=IO_READ},
        {.addr=0x522f, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_038E) {
    const struct CPU_State initial_cpu = {.pc=0x5960, .a=0x0e, .x=0x5a, .y=0x8d, .sp=0x2f, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x5960, .value=0xd0}, {.addr=0x5961, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x59ba, .a=0x0e, .x=0x5a, .y=0x8d, .sp=0x2f, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x5960, .value=0xd0}, {.addr=0x5961, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x5960, .value=0xd0, .type=IO_READ},
        {.addr=0x5961, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_038F) {
    const struct CPU_State initial_cpu = {.pc=0x93e1, .a=0xa4, .x=0xc7, .y=0x93, .sp=0x4a, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x93e1, .value=0xd0}, {.addr=0x93e2, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x93e3, .a=0xa4, .x=0xc7, .y=0x93, .sp=0x4a, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x93e1, .value=0xd0}, {.addr=0x93e2, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x93e1, .value=0xd0, .type=IO_READ},
        {.addr=0x93e2, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0390) {
    const struct CPU_State initial_cpu = {.pc=0xb681, .a=0x6d, .x=0xda, .y=0x97, .sp=0xe2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xb681, .value=0xd0}, {.addr=0xb682, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xb6a7, .a=0x6d, .x=0xda, .y=0x97, .sp=0xe2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xb681, .value=0xd0}, {.addr=0xb682, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xb681, .value=0xd0, .type=IO_READ},
        {.addr=0xb682, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0391) {
    const struct CPU_State initial_cpu = {.pc=0x292c, .a=0x45, .x=0x44, .y=0x0f, .sp=0xc2, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x292c, .value=0xd0}, {.addr=0x292d, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x2990, .a=0x45, .x=0x44, .y=0x0f, .sp=0xc2, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x292c, .value=0xd0}, {.addr=0x292d, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x292c, .value=0xd0, .type=IO_READ},
        {.addr=0x292d, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0392) {
    const struct CPU_State initial_cpu = {.pc=0x6d57, .a=0x81, .x=0x3c, .y=0x78, .sp=0x35, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x6d57, .value=0xd0}, {.addr=0x6d58, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x6d59, .a=0x81, .x=0x3c, .y=0x78, .sp=0x35, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x6d57, .value=0xd0}, {.addr=0x6d58, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x6d57, .value=0xd0, .type=IO_READ},
        {.addr=0x6d58, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0393) {
    const struct CPU_State initial_cpu = {.pc=0x2659, .a=0xac, .x=0x49, .y=0x74, .sp=0x5b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x2659, .value=0xd0}, {.addr=0x265a, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x265b, .a=0xac, .x=0x49, .y=0x74, .sp=0x5b, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x2659, .value=0xd0}, {.addr=0x265a, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x2659, .value=0xd0, .type=IO_READ},
        {.addr=0x265a, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0394) {
    const struct CPU_State initial_cpu = {.pc=0xc355, .a=0x44, .x=0x54, .y=0x4b, .sp=0x79, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xc355, .value=0xd0}, {.addr=0xc356, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xc357, .a=0x44, .x=0x54, .y=0x4b, .sp=0x79, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xc355, .value=0xd0}, {.addr=0xc356, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xc355, .value=0xd0, .type=IO_READ},
        {.addr=0xc356, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0395) {
    const struct CPU_State initial_cpu = {.pc=0x8c18, .a=0x16, .x=0x8b, .y=0x79, .sp=0xf2, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x8c18, .value=0xd0}, {.addr=0x8c19, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x8c1a, .a=0x16, .x=0x8b, .y=0x79, .sp=0xf2, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x8c18, .value=0xd0}, {.addr=0x8c19, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x8c18, .value=0xd0, .type=IO_READ},
        {.addr=0x8c19, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0396) {
    const struct CPU_State initial_cpu = {.pc=0xff8e, .a=0x20, .x=0xa9, .y=0x6f, .sp=0x41, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xff8e, .value=0xd0}, {.addr=0xff8f, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xff90, .a=0x20, .x=0xa9, .y=0x6f, .sp=0x41, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xff8e, .value=0xd0}, {.addr=0xff8f, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xff8e, .value=0xd0, .type=IO_READ},
        {.addr=0xff8f, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0397) {
    const struct CPU_State initial_cpu = {.pc=0x6c73, .a=0xe3, .x=0x1d, .y=0x8e, .sp=0x49, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x6c73, .value=0xd0}, {.addr=0x6c74, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6c75, .a=0xe3, .x=0x1d, .y=0x8e, .sp=0x49, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x6c73, .value=0xd0}, {.addr=0x6c74, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6c73, .value=0xd0, .type=IO_READ},
        {.addr=0x6c74, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0398) {
    const struct CPU_State initial_cpu = {.pc=0x01f7, .a=0xcf, .x=0xbf, .y=0xa5, .sp=0xaf, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xd0}, {.addr=0x01f8, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x01f9, .a=0xcf, .x=0xbf, .y=0xa5, .sp=0xaf, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xd0}, {.addr=0x01f8, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x01f7, .value=0xd0, .type=IO_READ},
        {.addr=0x01f8, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_0399) {
    const struct CPU_State initial_cpu = {.pc=0xc7d4, .a=0x06, .x=0x63, .y=0xa3, .sp=0x80, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d4, .value=0xd0}, {.addr=0xc7d5, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xc790, .a=0x06, .x=0x63, .y=0xa3, .sp=0x80, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc7d4, .value=0xd0}, {.addr=0xc7d5, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xc7d4, .value=0xd0, .type=IO_READ},
        {.addr=0xc7d5, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_039A) {
    const struct CPU_State initial_cpu = {.pc=0xd0f4, .a=0x81, .x=0xb7, .y=0xd5, .sp=0x89, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xd0f4, .value=0xd0}, {.addr=0xd0f5, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xd0f6, .a=0x81, .x=0xb7, .y=0xd5, .sp=0x89, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xd0f4, .value=0xd0}, {.addr=0xd0f5, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xd0f4, .value=0xd0, .type=IO_READ},
        {.addr=0xd0f5, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_039B) {
    const struct CPU_State initial_cpu = {.pc=0x483c, .a=0x6b, .x=0x26, .y=0x8f, .sp=0x12, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x483c, .value=0xd0}, {.addr=0x483d, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x483e, .a=0x6b, .x=0x26, .y=0x8f, .sp=0x12, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x483c, .value=0xd0}, {.addr=0x483d, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x483c, .value=0xd0, .type=IO_READ},
        {.addr=0x483d, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_039C) {
    const struct CPU_State initial_cpu = {.pc=0xc64e, .a=0x4f, .x=0x4f, .y=0x5d, .sp=0x65, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xc64e, .value=0xd0}, {.addr=0xc64f, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xc653, .a=0x4f, .x=0x4f, .y=0x5d, .sp=0x65, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xc64e, .value=0xd0}, {.addr=0xc64f, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xc64e, .value=0xd0, .type=IO_READ},
        {.addr=0xc64f, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_039D) {
    const struct CPU_State initial_cpu = {.pc=0xa8ce, .a=0xa4, .x=0xed, .y=0x9f, .sp=0x1b, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xa8ce, .value=0xd0}, {.addr=0xa8cf, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xa8d0, .a=0xa4, .x=0xed, .y=0x9f, .sp=0x1b, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xa8ce, .value=0xd0}, {.addr=0xa8cf, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xa8ce, .value=0xd0, .type=IO_READ},
        {.addr=0xa8cf, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_039E) {
    const struct CPU_State initial_cpu = {.pc=0x21b1, .a=0xa9, .x=0x5c, .y=0x7f, .sp=0xaa, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x21b1, .value=0xd0}, {.addr=0x21b2, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x2217, .a=0xa9, .x=0x5c, .y=0x7f, .sp=0xaa, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x21b1, .value=0xd0}, {.addr=0x21b2, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x21b1, .value=0xd0, .type=IO_READ},
        {.addr=0x21b2, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_039F) {
    const struct CPU_State initial_cpu = {.pc=0xada4, .a=0x36, .x=0x5c, .y=0x9c, .sp=0x36, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xada4, .value=0xd0}, {.addr=0xada5, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xadde, .a=0x36, .x=0x5c, .y=0x9c, .sp=0x36, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xada4, .value=0xd0}, {.addr=0xada5, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xada4, .value=0xd0, .type=IO_READ},
        {.addr=0xada5, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x81b5, .a=0x65, .x=0x03, .y=0x73, .sp=0xb3, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x81b5, .value=0xd0}, {.addr=0x81b6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8145, .a=0x65, .x=0x03, .y=0x73, .sp=0xb3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x81b5, .value=0xd0}, {.addr=0x81b6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x81b5, .value=0xd0, .type=IO_READ},
        {.addr=0x81b6, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x0bf5, .a=0x7f, .x=0xcd, .y=0x5c, .sp=0xb7, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0bf5, .value=0xd0}, {.addr=0x0bf6, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x0b88, .a=0x7f, .x=0xcd, .y=0x5c, .sp=0xb7, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0bf5, .value=0xd0}, {.addr=0x0bf6, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x0bf5, .value=0xd0, .type=IO_READ},
        {.addr=0x0bf6, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xbe18, .a=0xd7, .x=0xc7, .y=0x55, .sp=0x1c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xbe18, .value=0xd0}, {.addr=0xbe19, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xbe1a, .a=0xd7, .x=0xc7, .y=0x55, .sp=0x1c, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xbe18, .value=0xd0}, {.addr=0xbe19, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xbe18, .value=0xd0, .type=IO_READ},
        {.addr=0xbe19, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x2bd1, .a=0x71, .x=0x2f, .y=0x98, .sp=0x7a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x2bd1, .value=0xd0}, {.addr=0x2bd2, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x2bf5, .a=0x71, .x=0x2f, .y=0x98, .sp=0x7a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x2bd1, .value=0xd0}, {.addr=0x2bd2, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x2bd1, .value=0xd0, .type=IO_READ},
        {.addr=0x2bd2, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x6029, .a=0x26, .x=0x34, .y=0x9c, .sp=0x4e, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x6029, .value=0xd0}, {.addr=0x602a, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x5fad, .a=0x26, .x=0x34, .y=0x9c, .sp=0x4e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6029, .value=0xd0}, {.addr=0x602a, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x6029, .value=0xd0, .type=IO_READ},
        {.addr=0x602a, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x3b63, .a=0x87, .x=0x25, .y=0x46, .sp=0x62, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x3b63, .value=0xd0}, {.addr=0x3b64, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3b45, .a=0x87, .x=0x25, .y=0x46, .sp=0x62, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3b63, .value=0xd0}, {.addr=0x3b64, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3b63, .value=0xd0, .type=IO_READ},
        {.addr=0x3b64, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x2bb2, .a=0x95, .x=0x31, .y=0xdc, .sp=0xc1, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x2bb2, .value=0xd0}, {.addr=0x2bb3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2bb4, .a=0x95, .x=0x31, .y=0xdc, .sp=0xc1, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x2bb2, .value=0xd0}, {.addr=0x2bb3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2bb2, .value=0xd0, .type=IO_READ},
        {.addr=0x2bb3, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x2884, .a=0x5e, .x=0xe4, .y=0x4a, .sp=0x17, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x2884, .value=0xd0}, {.addr=0x2885, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2886, .a=0x5e, .x=0xe4, .y=0x4a, .sp=0x17, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x2884, .value=0xd0}, {.addr=0x2885, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2884, .value=0xd0, .type=IO_READ},
        {.addr=0x2885, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x0432, .a=0x74, .x=0x02, .y=0x80, .sp=0xf3, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0432, .value=0xd0}, {.addr=0x0433, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x0434, .a=0x74, .x=0x02, .y=0x80, .sp=0xf3, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0432, .value=0xd0}, {.addr=0x0433, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x0432, .value=0xd0, .type=IO_READ},
        {.addr=0x0433, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x3f20, .a=0x4a, .x=0x71, .y=0x18, .sp=0x19, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x3f20, .value=0xd0}, {.addr=0x3f21, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x3f22, .a=0x4a, .x=0x71, .y=0x18, .sp=0x19, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x3f20, .value=0xd0}, {.addr=0x3f21, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x3f20, .value=0xd0, .type=IO_READ},
        {.addr=0x3f21, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x7a37, .a=0xde, .x=0x0f, .y=0xcb, .sp=0x91, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x7a37, .value=0xd0}, {.addr=0x7a38, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x7a39, .a=0xde, .x=0x0f, .y=0xcb, .sp=0x91, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x7a37, .value=0xd0}, {.addr=0x7a38, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x7a37, .value=0xd0, .type=IO_READ},
        {.addr=0x7a38, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x659a, .a=0x8f, .x=0xe4, .y=0x40, .sp=0xa8, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x659a, .value=0xd0}, {.addr=0x659b, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x659c, .a=0x8f, .x=0xe4, .y=0x40, .sp=0xa8, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x659a, .value=0xd0}, {.addr=0x659b, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x659a, .value=0xd0, .type=IO_READ},
        {.addr=0x659b, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x4a28, .a=0xdf, .x=0x79, .y=0xad, .sp=0xda, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4a28, .value=0xd0}, {.addr=0x4a29, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x49e8, .a=0xdf, .x=0x79, .y=0xad, .sp=0xda, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4a28, .value=0xd0}, {.addr=0x4a29, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4a28, .value=0xd0, .type=IO_READ},
        {.addr=0x4a29, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x6ff4, .a=0xeb, .x=0x27, .y=0x1b, .sp=0xc1, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x6ff4, .value=0xd0}, {.addr=0x6ff5, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x701d, .a=0xeb, .x=0x27, .y=0x1b, .sp=0xc1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6ff4, .value=0xd0}, {.addr=0x6ff5, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x6ff4, .value=0xd0, .type=IO_READ},
        {.addr=0x6ff5, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x4d67, .a=0xcd, .x=0xce, .y=0x6c, .sp=0x84, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x4d67, .value=0xd0}, {.addr=0x4d68, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x4d69, .a=0xcd, .x=0xce, .y=0x6c, .sp=0x84, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x4d67, .value=0xd0}, {.addr=0x4d68, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x4d67, .value=0xd0, .type=IO_READ},
        {.addr=0x4d68, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x78a8, .a=0x5e, .x=0xfd, .y=0x3a, .sp=0x5f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x78a8, .value=0xd0}, {.addr=0x78a9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7898, .a=0x5e, .x=0xfd, .y=0x3a, .sp=0x5f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x78a8, .value=0xd0}, {.addr=0x78a9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x78a8, .value=0xd0, .type=IO_READ},
        {.addr=0x78a9, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x417c, .a=0xd7, .x=0xba, .y=0x83, .sp=0x04, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x417c, .value=0xd0}, {.addr=0x417d, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x417e, .a=0xd7, .x=0xba, .y=0x83, .sp=0x04, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x417c, .value=0xd0}, {.addr=0x417d, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x417c, .value=0xd0, .type=IO_READ},
        {.addr=0x417d, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x8f53, .a=0x0e, .x=0x58, .y=0x76, .sp=0x38, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x8f53, .value=0xd0}, {.addr=0x8f54, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x8f55, .a=0x0e, .x=0x58, .y=0x76, .sp=0x38, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x8f53, .value=0xd0}, {.addr=0x8f54, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x8f53, .value=0xd0, .type=IO_READ},
        {.addr=0x8f54, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xdd4b, .a=0x5f, .x=0x9f, .y=0x93, .sp=0x34, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xdd4b, .value=0xd0}, {.addr=0xdd4c, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xdd4d, .a=0x5f, .x=0x9f, .y=0x93, .sp=0x34, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xdd4b, .value=0xd0}, {.addr=0xdd4c, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xdd4b, .value=0xd0, .type=IO_READ},
        {.addr=0xdd4c, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xc85a, .a=0x2a, .x=0x5c, .y=0x54, .sp=0x58, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xc85a, .value=0xd0}, {.addr=0xc85b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc8b8, .a=0x2a, .x=0x5c, .y=0x54, .sp=0x58, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc85a, .value=0xd0}, {.addr=0xc85b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc85a, .value=0xd0, .type=IO_READ},
        {.addr=0xc85b, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x6e04, .a=0x14, .x=0xc9, .y=0xf5, .sp=0xe2, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6e04, .value=0xd0}, {.addr=0x6e05, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x6e06, .a=0x14, .x=0xc9, .y=0xf5, .sp=0xe2, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x6e04, .value=0xd0}, {.addr=0x6e05, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x6e04, .value=0xd0, .type=IO_READ},
        {.addr=0x6e05, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x21da, .a=0x62, .x=0xfe, .y=0x4a, .sp=0x81, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x21da, .value=0xd0}, {.addr=0x21db, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x217d, .a=0x62, .x=0xfe, .y=0x4a, .sp=0x81, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x21da, .value=0xd0}, {.addr=0x21db, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x21da, .value=0xd0, .type=IO_READ},
        {.addr=0x21db, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x7db2, .a=0x60, .x=0xed, .y=0x0a, .sp=0x78, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7db2, .value=0xd0}, {.addr=0x7db3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7d53, .a=0x60, .x=0xed, .y=0x0a, .sp=0x78, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7db2, .value=0xd0}, {.addr=0x7db3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7db2, .value=0xd0, .type=IO_READ},
        {.addr=0x7db3, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x8272, .a=0xa7, .x=0x51, .y=0x1d, .sp=0x4a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x8272, .value=0xd0}, {.addr=0x8273, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x8274, .a=0xa7, .x=0x51, .y=0x1d, .sp=0x4a, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x8272, .value=0xd0}, {.addr=0x8273, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x8272, .value=0xd0, .type=IO_READ},
        {.addr=0x8273, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xd83d, .a=0xdf, .x=0xb9, .y=0xce, .sp=0xe6, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xd83d, .value=0xd0}, {.addr=0xd83e, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xd83f, .a=0xdf, .x=0xb9, .y=0xce, .sp=0xe6, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xd83d, .value=0xd0}, {.addr=0xd83e, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xd83d, .value=0xd0, .type=IO_READ},
        {.addr=0xd83e, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xa919, .a=0x5f, .x=0xa0, .y=0xb1, .sp=0x4e, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xa919, .value=0xd0}, {.addr=0xa91a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa8fa, .a=0x5f, .x=0xa0, .y=0xb1, .sp=0x4e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa919, .value=0xd0}, {.addr=0xa91a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa919, .value=0xd0, .type=IO_READ},
        {.addr=0xa91a, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xa685, .a=0x61, .x=0xbb, .y=0x87, .sp=0x0a, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xa685, .value=0xd0}, {.addr=0xa686, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa687, .a=0x61, .x=0xbb, .y=0x87, .sp=0x0a, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xa685, .value=0xd0}, {.addr=0xa686, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa685, .value=0xd0, .type=IO_READ},
        {.addr=0xa686, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x9347, .a=0x88, .x=0x2b, .y=0x04, .sp=0x88, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9347, .value=0xd0}, {.addr=0x9348, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9349, .a=0x88, .x=0x2b, .y=0x04, .sp=0x88, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x9347, .value=0xd0}, {.addr=0x9348, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9347, .value=0xd0, .type=IO_READ},
        {.addr=0x9348, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x6cec, .a=0x0f, .x=0x23, .y=0x0b, .sp=0x66, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x6cec, .value=0xd0}, {.addr=0x6ced, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x6cee, .a=0x0f, .x=0x23, .y=0x0b, .sp=0x66, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x6cec, .value=0xd0}, {.addr=0x6ced, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x6cec, .value=0xd0, .type=IO_READ},
        {.addr=0x6ced, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x9ed9, .a=0x83, .x=0x53, .y=0x4b, .sp=0xfd, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x9ed9, .value=0xd0}, {.addr=0x9eda, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9e61, .a=0x83, .x=0x53, .y=0x4b, .sp=0xfd, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9ed9, .value=0xd0}, {.addr=0x9eda, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9ed9, .value=0xd0, .type=IO_READ},
        {.addr=0x9eda, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x41bb, .a=0xe1, .x=0x73, .y=0xb5, .sp=0x2b, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x41bb, .value=0xd0}, {.addr=0x41bc, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x41bd, .a=0xe1, .x=0x73, .y=0xb5, .sp=0x2b, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x41bb, .value=0xd0}, {.addr=0x41bc, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x41bb, .value=0xd0, .type=IO_READ},
        {.addr=0x41bc, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x55c3, .a=0x24, .x=0x8f, .y=0xa6, .sp=0x04, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x55c3, .value=0xd0}, {.addr=0x55c4, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x55c5, .a=0x24, .x=0x8f, .y=0xa6, .sp=0x04, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x55c3, .value=0xd0}, {.addr=0x55c4, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x55c3, .value=0xd0, .type=IO_READ},
        {.addr=0x55c4, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x8357, .a=0xf3, .x=0x00, .y=0x55, .sp=0x42, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x8357, .value=0xd0}, {.addr=0x8358, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8359, .a=0xf3, .x=0x00, .y=0x55, .sp=0x42, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x8357, .value=0xd0}, {.addr=0x8358, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8357, .value=0xd0, .type=IO_READ},
        {.addr=0x8358, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xe977, .a=0xee, .x=0xf9, .y=0x25, .sp=0xb3, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xe977, .value=0xd0}, {.addr=0xe978, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xe979, .a=0xee, .x=0xf9, .y=0x25, .sp=0xb3, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xe977, .value=0xd0}, {.addr=0xe978, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xe977, .value=0xd0, .type=IO_READ},
        {.addr=0xe978, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xf3ab, .a=0xae, .x=0x71, .y=0x07, .sp=0xa0, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xf3ab, .value=0xd0}, {.addr=0xf3ac, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xf3b0, .a=0xae, .x=0x71, .y=0x07, .sp=0xa0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xf3ab, .value=0xd0}, {.addr=0xf3ac, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xf3ab, .value=0xd0, .type=IO_READ},
        {.addr=0xf3ac, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xe73e, .a=0x29, .x=0x35, .y=0x4d, .sp=0xcc, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xe73e, .value=0xd0}, {.addr=0xe73f, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xe6e5, .a=0x29, .x=0x35, .y=0x4d, .sp=0xcc, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe73e, .value=0xd0}, {.addr=0xe73f, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xe73e, .value=0xd0, .type=IO_READ},
        {.addr=0xe73f, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x3491, .a=0x58, .x=0x3f, .y=0xc5, .sp=0xd5, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x3491, .value=0xd0}, {.addr=0x3492, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x3493, .a=0x58, .x=0x3f, .y=0xc5, .sp=0xd5, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x3491, .value=0xd0}, {.addr=0x3492, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x3491, .value=0xd0, .type=IO_READ},
        {.addr=0x3492, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x4859, .a=0xc9, .x=0x10, .y=0x2f, .sp=0xf1, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4859, .value=0xd0}, {.addr=0x485a, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x485b, .a=0xc9, .x=0x10, .y=0x2f, .sp=0xf1, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x4859, .value=0xd0}, {.addr=0x485a, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x4859, .value=0xd0, .type=IO_READ},
        {.addr=0x485a, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xf0a4, .a=0x6a, .x=0x55, .y=0x9a, .sp=0xb8, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xf0a4, .value=0xd0}, {.addr=0xf0a5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf085, .a=0x6a, .x=0x55, .y=0x9a, .sp=0xb8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xf0a4, .value=0xd0}, {.addr=0xf0a5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf0a4, .value=0xd0, .type=IO_READ},
        {.addr=0xf0a5, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x402c, .a=0x01, .x=0x2d, .y=0x97, .sp=0x59, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x402c, .value=0xd0}, {.addr=0x402d, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x3fb2, .a=0x01, .x=0x2d, .y=0x97, .sp=0x59, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x402c, .value=0xd0}, {.addr=0x402d, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x402c, .value=0xd0, .type=IO_READ},
        {.addr=0x402d, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xf3e3, .a=0x25, .x=0xf3, .y=0xcb, .sp=0x4b, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xf3e3, .value=0xd0}, {.addr=0xf3e4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf384, .a=0x25, .x=0xf3, .y=0xcb, .sp=0x4b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf3e3, .value=0xd0}, {.addr=0xf3e4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf3e3, .value=0xd0, .type=IO_READ},
        {.addr=0xf3e4, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xfb97, .a=0xb8, .x=0x83, .y=0x13, .sp=0x68, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xfb97, .value=0xd0}, {.addr=0xfb98, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xfb99, .a=0xb8, .x=0x83, .y=0x13, .sp=0x68, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xfb97, .value=0xd0}, {.addr=0xfb98, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xfb97, .value=0xd0, .type=IO_READ},
        {.addr=0xfb98, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x9554, .a=0xcf, .x=0x21, .y=0xc1, .sp=0xda, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x9554, .value=0xd0}, {.addr=0x9555, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x94e6, .a=0xcf, .x=0x21, .y=0xc1, .sp=0xda, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9554, .value=0xd0}, {.addr=0x9555, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x9554, .value=0xd0, .type=IO_READ},
        {.addr=0x9555, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x4159, .a=0xb5, .x=0xd8, .y=0xdc, .sp=0x22, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x4159, .value=0xd0}, {.addr=0x415a, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x41a4, .a=0xb5, .x=0xd8, .y=0xdc, .sp=0x22, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4159, .value=0xd0}, {.addr=0x415a, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x4159, .value=0xd0, .type=IO_READ},
        {.addr=0x415a, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xe545, .a=0x4e, .x=0xad, .y=0x72, .sp=0x34, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xe545, .value=0xd0}, {.addr=0xe546, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xe5ac, .a=0x4e, .x=0xad, .y=0x72, .sp=0x34, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe545, .value=0xd0}, {.addr=0xe546, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xe545, .value=0xd0, .type=IO_READ},
        {.addr=0xe546, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x2c40, .a=0x03, .x=0x13, .y=0xd4, .sp=0xe2, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x2c40, .value=0xd0}, {.addr=0x2c41, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x2c46, .a=0x03, .x=0x13, .y=0xd4, .sp=0xe2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2c40, .value=0xd0}, {.addr=0x2c41, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x2c40, .value=0xd0, .type=IO_READ},
        {.addr=0x2c41, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x34a8, .a=0x89, .x=0xcb, .y=0x0c, .sp=0x4e, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x34a8, .value=0xd0}, {.addr=0x34a9, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x34aa, .a=0x89, .x=0xcb, .y=0x0c, .sp=0x4e, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x34a8, .value=0xd0}, {.addr=0x34a9, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x34a8, .value=0xd0, .type=IO_READ},
        {.addr=0x34a9, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x0a30, .a=0xdc, .x=0x81, .y=0x27, .sp=0xe5, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0a30, .value=0xd0}, {.addr=0x0a31, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0a32, .a=0xdc, .x=0x81, .y=0x27, .sp=0xe5, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0a30, .value=0xd0}, {.addr=0x0a31, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0a30, .value=0xd0, .type=IO_READ},
        {.addr=0x0a31, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x622d, .a=0xb8, .x=0x50, .y=0x57, .sp=0xfd, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x622d, .value=0xd0}, {.addr=0x622e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x622f, .a=0xb8, .x=0x50, .y=0x57, .sp=0xfd, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x622d, .value=0xd0}, {.addr=0x622e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x622d, .value=0xd0, .type=IO_READ},
        {.addr=0x622e, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xc74c, .a=0x11, .x=0xae, .y=0x32, .sp=0x32, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc74c, .value=0xd0}, {.addr=0xc74d, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xc775, .a=0x11, .x=0xae, .y=0x32, .sp=0x32, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc74c, .value=0xd0}, {.addr=0xc74d, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xc74c, .value=0xd0, .type=IO_READ},
        {.addr=0xc74d, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x82d5, .a=0xb5, .x=0xfb, .y=0xaa, .sp=0xeb, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x82d5, .value=0xd0}, {.addr=0x82d6, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x82f0, .a=0xb5, .x=0xfb, .y=0xaa, .sp=0xeb, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x82d5, .value=0xd0}, {.addr=0x82d6, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x82d5, .value=0xd0, .type=IO_READ},
        {.addr=0x82d6, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x833e, .a=0x2b, .x=0x0d, .y=0xc7, .sp=0x80, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x833e, .value=0xd0}, {.addr=0x833f, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x8340, .a=0x2b, .x=0x0d, .y=0xc7, .sp=0x80, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x833e, .value=0xd0}, {.addr=0x833f, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x833e, .value=0xd0, .type=IO_READ},
        {.addr=0x833f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xdaa5, .a=0x11, .x=0x03, .y=0xba, .sp=0x71, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa5, .value=0xd0}, {.addr=0xdaa6, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xda2a, .a=0x11, .x=0x03, .y=0xba, .sp=0x71, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xdaa5, .value=0xd0}, {.addr=0xdaa6, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xdaa5, .value=0xd0, .type=IO_READ},
        {.addr=0xdaa6, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xc589, .a=0x79, .x=0xe3, .y=0xe2, .sp=0x1d, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xc589, .value=0xd0}, {.addr=0xc58a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc58b, .a=0x79, .x=0xe3, .y=0xe2, .sp=0x1d, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xc589, .value=0xd0}, {.addr=0xc58a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc589, .value=0xd0, .type=IO_READ},
        {.addr=0xc58a, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x084e, .a=0xe9, .x=0x77, .y=0x6c, .sp=0xfe, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x084e, .value=0xd0}, {.addr=0x084f, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x0850, .a=0xe9, .x=0x77, .y=0x6c, .sp=0xfe, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x084e, .value=0xd0}, {.addr=0x084f, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x084e, .value=0xd0, .type=IO_READ},
        {.addr=0x084f, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x9808, .a=0xc6, .x=0x84, .y=0x4b, .sp=0x2d, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x9808, .value=0xd0}, {.addr=0x9809, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x980a, .a=0xc6, .x=0x84, .y=0x4b, .sp=0x2d, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x9808, .value=0xd0}, {.addr=0x9809, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x9808, .value=0xd0, .type=IO_READ},
        {.addr=0x9809, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xa572, .a=0x35, .x=0x30, .y=0x26, .sp=0x8d, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xa572, .value=0xd0}, {.addr=0xa573, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xa574, .a=0x35, .x=0x30, .y=0x26, .sp=0x8d, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xa572, .value=0xd0}, {.addr=0xa573, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xa572, .value=0xd0, .type=IO_READ},
        {.addr=0xa573, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xef47, .a=0x40, .x=0x88, .y=0x5b, .sp=0xd1, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xef47, .value=0xd0}, {.addr=0xef48, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xeeeb, .a=0x40, .x=0x88, .y=0x5b, .sp=0xd1, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xef47, .value=0xd0}, {.addr=0xef48, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xef47, .value=0xd0, .type=IO_READ},
        {.addr=0xef48, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xd0bf, .a=0x4d, .x=0xe1, .y=0x9b, .sp=0x3f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xd0bf, .value=0xd0}, {.addr=0xd0c0, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xd08d, .a=0x4d, .x=0xe1, .y=0x9b, .sp=0x3f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd0bf, .value=0xd0}, {.addr=0xd0c0, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xd0bf, .value=0xd0, .type=IO_READ},
        {.addr=0xd0c0, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x8dd9, .a=0x03, .x=0xe2, .y=0x9f, .sp=0xe8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd9, .value=0xd0}, {.addr=0x8dda, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x8ddb, .a=0x03, .x=0xe2, .y=0x9f, .sp=0xe8, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x8dd9, .value=0xd0}, {.addr=0x8dda, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x8dd9, .value=0xd0, .type=IO_READ},
        {.addr=0x8dda, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x132f, .a=0xe8, .x=0x0c, .y=0x4e, .sp=0xae, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x132f, .value=0xd0}, {.addr=0x1330, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x13a7, .a=0xe8, .x=0x0c, .y=0x4e, .sp=0xae, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x132f, .value=0xd0}, {.addr=0x1330, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x132f, .value=0xd0, .type=IO_READ},
        {.addr=0x1330, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xf8cb, .a=0x3e, .x=0x81, .y=0x9d, .sp=0xf0, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xf8cb, .value=0xd0}, {.addr=0xf8cc, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xf8cd, .a=0x3e, .x=0x81, .y=0x9d, .sp=0xf0, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xf8cb, .value=0xd0}, {.addr=0xf8cc, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xf8cb, .value=0xd0, .type=IO_READ},
        {.addr=0xf8cc, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x0dbc, .a=0x27, .x=0x60, .y=0x89, .sp=0x12, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0dbc, .value=0xd0}, {.addr=0x0dbd, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x0e0d, .a=0x27, .x=0x60, .y=0x89, .sp=0x12, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0dbc, .value=0xd0}, {.addr=0x0dbd, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x0dbc, .value=0xd0, .type=IO_READ},
        {.addr=0x0dbd, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x7841, .a=0x84, .x=0x8b, .y=0x87, .sp=0x54, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x7841, .value=0xd0}, {.addr=0x7842, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x77d6, .a=0x84, .x=0x8b, .y=0x87, .sp=0x54, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x7841, .value=0xd0}, {.addr=0x7842, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x7841, .value=0xd0, .type=IO_READ},
        {.addr=0x7842, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x0424, .a=0x6d, .x=0xd5, .y=0x76, .sp=0xa5, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0424, .value=0xd0}, {.addr=0x0425, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x042c, .a=0x6d, .x=0xd5, .y=0x76, .sp=0xa5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0424, .value=0xd0}, {.addr=0x0425, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0424, .value=0xd0, .type=IO_READ},
        {.addr=0x0425, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xef82, .a=0x46, .x=0x5a, .y=0x18, .sp=0xd4, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xef82, .value=0xd0}, {.addr=0xef83, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xef49, .a=0x46, .x=0x5a, .y=0x18, .sp=0xd4, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xef82, .value=0xd0}, {.addr=0xef83, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xef82, .value=0xd0, .type=IO_READ},
        {.addr=0xef83, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x8500, .a=0x73, .x=0xf8, .y=0xcd, .sp=0x80, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x8500, .value=0xd0}, {.addr=0x8501, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x8502, .a=0x73, .x=0xf8, .y=0xcd, .sp=0x80, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x8500, .value=0xd0}, {.addr=0x8501, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x8500, .value=0xd0, .type=IO_READ},
        {.addr=0x8501, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xb218, .a=0x14, .x=0x75, .y=0xb7, .sp=0xff, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xb218, .value=0xd0}, {.addr=0xb219, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xb21a, .a=0x14, .x=0x75, .y=0xb7, .sp=0xff, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xb218, .value=0xd0}, {.addr=0xb219, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xb218, .value=0xd0, .type=IO_READ},
        {.addr=0xb219, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x794b, .a=0x09, .x=0xd7, .y=0x38, .sp=0x26, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x794b, .value=0xd0}, {.addr=0x794c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x794d, .a=0x09, .x=0xd7, .y=0x38, .sp=0x26, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x794b, .value=0xd0}, {.addr=0x794c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x794b, .value=0xd0, .type=IO_READ},
        {.addr=0x794c, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xf28f, .a=0x5c, .x=0x1b, .y=0xd2, .sp=0x5d, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xf28f, .value=0xd0}, {.addr=0xf290, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xf291, .a=0x5c, .x=0x1b, .y=0xd2, .sp=0x5d, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xf28f, .value=0xd0}, {.addr=0xf290, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xf28f, .value=0xd0, .type=IO_READ},
        {.addr=0xf290, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x1c59, .a=0x49, .x=0xea, .y=0x01, .sp=0x74, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x1c59, .value=0xd0}, {.addr=0x1c5a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1c5b, .a=0x49, .x=0xea, .y=0x01, .sp=0x74, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x1c59, .value=0xd0}, {.addr=0x1c5a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1c59, .value=0xd0, .type=IO_READ},
        {.addr=0x1c5a, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_D0, _D0_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x343f, .a=0xe0, .x=0x0c, .y=0x3f, .sp=0x9a, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x343f, .value=0xd0}, {.addr=0x3440, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3441, .a=0xe0, .x=0x0c, .y=0x3f, .sp=0x9a, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x343f, .value=0xd0}, {.addr=0x3440, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x343f, .value=0xd0, .type=IO_READ},
        {.addr=0x3440, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("D0 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
