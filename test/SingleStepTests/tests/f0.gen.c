#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_F0, _F0_0000) {
    const struct CPU_State initial_cpu = {.pc=0x317e, .a=0x6d, .x=0x99, .y=0x7e, .sp=0x69, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x317e, .value=0xf0}, {.addr=0x317f, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x31fb, .a=0x6d, .x=0x99, .y=0x7e, .sp=0x69, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x317e, .value=0xf0}, {.addr=0x317f, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x317e, .value=0xf0, .type=IO_READ},
        {.addr=0x317f, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0001) {
    const struct CPU_State initial_cpu = {.pc=0x6dfb, .a=0x68, .x=0x1b, .y=0x67, .sp=0x48, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x6dfb, .value=0xf0}, {.addr=0x6dfc, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x6dfd, .a=0x68, .x=0x1b, .y=0x67, .sp=0x48, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x6dfb, .value=0xf0}, {.addr=0x6dfc, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x6dfb, .value=0xf0, .type=IO_READ},
        {.addr=0x6dfc, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0002) {
    const struct CPU_State initial_cpu = {.pc=0x393b, .a=0xe8, .x=0xbe, .y=0xec, .sp=0xb7, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x393b, .value=0xf0}, {.addr=0x393c, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x393d, .a=0xe8, .x=0xbe, .y=0xec, .sp=0xb7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x393b, .value=0xf0}, {.addr=0x393c, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x393b, .value=0xf0, .type=IO_READ},
        {.addr=0x393c, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0003) {
    const struct CPU_State initial_cpu = {.pc=0xf09e, .a=0x36, .x=0x57, .y=0xf1, .sp=0x5f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xf09e, .value=0xf0}, {.addr=0xf09f, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xf031, .a=0x36, .x=0x57, .y=0xf1, .sp=0x5f, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xf09e, .value=0xf0}, {.addr=0xf09f, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xf09e, .value=0xf0, .type=IO_READ},
        {.addr=0xf09f, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0004) {
    const struct CPU_State initial_cpu = {.pc=0xff2f, .a=0xaf, .x=0x6f, .y=0x0f, .sp=0xaa, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xff2f, .value=0xf0}, {.addr=0xff30, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xfed9, .a=0xaf, .x=0x6f, .y=0x0f, .sp=0xaa, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xff2f, .value=0xf0}, {.addr=0xff30, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xff2f, .value=0xf0, .type=IO_READ},
        {.addr=0xff30, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0005) {
    const struct CPU_State initial_cpu = {.pc=0xe4f2, .a=0xeb, .x=0x36, .y=0xb9, .sp=0x94, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xe4f2, .value=0xf0}, {.addr=0xe4f3, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xe476, .a=0xeb, .x=0x36, .y=0xb9, .sp=0x94, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xe4f2, .value=0xf0}, {.addr=0xe4f3, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xe4f2, .value=0xf0, .type=IO_READ},
        {.addr=0xe4f3, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0006) {
    const struct CPU_State initial_cpu = {.pc=0x0c31, .a=0xbe, .x=0xf3, .y=0xc7, .sp=0x91, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0c31, .value=0xf0}, {.addr=0x0c32, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x0c33, .a=0xbe, .x=0xf3, .y=0xc7, .sp=0x91, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0c31, .value=0xf0}, {.addr=0x0c32, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x0c31, .value=0xf0, .type=IO_READ},
        {.addr=0x0c32, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0007) {
    const struct CPU_State initial_cpu = {.pc=0x7761, .a=0xda, .x=0xba, .y=0x8a, .sp=0x30, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x7761, .value=0xf0}, {.addr=0x7762, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x77ca, .a=0xda, .x=0xba, .y=0x8a, .sp=0x30, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x7761, .value=0xf0}, {.addr=0x7762, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x7761, .value=0xf0, .type=IO_READ},
        {.addr=0x7762, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0008) {
    const struct CPU_State initial_cpu = {.pc=0xe922, .a=0xa5, .x=0xc4, .y=0xd7, .sp=0x4d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xe922, .value=0xf0}, {.addr=0xe923, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe8d2, .a=0xa5, .x=0xc4, .y=0xd7, .sp=0x4d, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xe922, .value=0xf0}, {.addr=0xe923, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe922, .value=0xf0, .type=IO_READ},
        {.addr=0xe923, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0009) {
    const struct CPU_State initial_cpu = {.pc=0x0701, .a=0x5b, .x=0x9a, .y=0xac, .sp=0x9d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0701, .value=0xf0}, {.addr=0x0702, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x0764, .a=0x5b, .x=0x9a, .y=0xac, .sp=0x9d, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x0701, .value=0xf0}, {.addr=0x0702, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x0701, .value=0xf0, .type=IO_READ},
        {.addr=0x0702, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_000A) {
    const struct CPU_State initial_cpu = {.pc=0x6b3c, .a=0xcc, .x=0xec, .y=0xc5, .sp=0xd0, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x6b3c, .value=0xf0}, {.addr=0x6b3d, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x6b3e, .a=0xcc, .x=0xec, .y=0xc5, .sp=0xd0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x6b3c, .value=0xf0}, {.addr=0x6b3d, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x6b3c, .value=0xf0, .type=IO_READ},
        {.addr=0x6b3d, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_000B) {
    const struct CPU_State initial_cpu = {.pc=0x4862, .a=0x46, .x=0xca, .y=0x13, .sp=0x14, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x4862, .value=0xf0}, {.addr=0x4863, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x4805, .a=0x46, .x=0xca, .y=0x13, .sp=0x14, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x4862, .value=0xf0}, {.addr=0x4863, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x4862, .value=0xf0, .type=IO_READ},
        {.addr=0x4863, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_000C) {
    const struct CPU_State initial_cpu = {.pc=0xef3d, .a=0x00, .x=0x71, .y=0xcb, .sp=0x0d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xef3d, .value=0xf0}, {.addr=0xef3e, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xef3f, .a=0x00, .x=0x71, .y=0xcb, .sp=0x0d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xef3d, .value=0xf0}, {.addr=0xef3e, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xef3d, .value=0xf0, .type=IO_READ},
        {.addr=0xef3e, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_000D) {
    const struct CPU_State initial_cpu = {.pc=0xd18e, .a=0x86, .x=0x70, .y=0x74, .sp=0x7f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xd18e, .value=0xf0}, {.addr=0xd18f, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xd190, .a=0x86, .x=0x70, .y=0x74, .sp=0x7f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xd18e, .value=0xf0}, {.addr=0xd18f, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xd18e, .value=0xf0, .type=IO_READ},
        {.addr=0xd18f, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_000E) {
    const struct CPU_State initial_cpu = {.pc=0x54da, .a=0x90, .x=0x78, .y=0x08, .sp=0xfd, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x54da, .value=0xf0}, {.addr=0x54db, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x54dc, .a=0x90, .x=0x78, .y=0x08, .sp=0xfd, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x54da, .value=0xf0}, {.addr=0x54db, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x54da, .value=0xf0, .type=IO_READ},
        {.addr=0x54db, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_000F) {
    const struct CPU_State initial_cpu = {.pc=0xea50, .a=0x39, .x=0x75, .y=0x5f, .sp=0x05, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xea50, .value=0xf0}, {.addr=0xea51, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xeacf, .a=0x39, .x=0x75, .y=0x5f, .sp=0x05, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xea50, .value=0xf0}, {.addr=0xea51, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xea50, .value=0xf0, .type=IO_READ},
        {.addr=0xea51, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0010) {
    const struct CPU_State initial_cpu = {.pc=0x746d, .a=0xf1, .x=0xbc, .y=0xd0, .sp=0xcb, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x746d, .value=0xf0}, {.addr=0x746e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x746f, .a=0xf1, .x=0xbc, .y=0xd0, .sp=0xcb, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x746d, .value=0xf0}, {.addr=0x746e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x746d, .value=0xf0, .type=IO_READ},
        {.addr=0x746e, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0011) {
    const struct CPU_State initial_cpu = {.pc=0x92bf, .a=0x6f, .x=0x56, .y=0x46, .sp=0x8a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x92bf, .value=0xf0}, {.addr=0x92c0, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x9274, .a=0x6f, .x=0x56, .y=0x46, .sp=0x8a, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x92bf, .value=0xf0}, {.addr=0x92c0, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x92bf, .value=0xf0, .type=IO_READ},
        {.addr=0x92c0, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0012) {
    const struct CPU_State initial_cpu = {.pc=0xfbb0, .a=0x23, .x=0x64, .y=0xcf, .sp=0xfc, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xfbb0, .value=0xf0}, {.addr=0xfbb1, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xfbb2, .a=0x23, .x=0x64, .y=0xcf, .sp=0xfc, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xfbb0, .value=0xf0}, {.addr=0xfbb1, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xfbb0, .value=0xf0, .type=IO_READ},
        {.addr=0xfbb1, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0013) {
    const struct CPU_State initial_cpu = {.pc=0x8ae1, .a=0xb9, .x=0xcd, .y=0x07, .sp=0xc3, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x8ae1, .value=0xf0}, {.addr=0x8ae2, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8ae3, .a=0xb9, .x=0xcd, .y=0x07, .sp=0xc3, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x8ae1, .value=0xf0}, {.addr=0x8ae2, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8ae1, .value=0xf0, .type=IO_READ},
        {.addr=0x8ae2, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0014) {
    const struct CPU_State initial_cpu = {.pc=0x80a0, .a=0xa9, .x=0x88, .y=0x7d, .sp=0x00, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x80a0, .value=0xf0}, {.addr=0x80a1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x80a2, .a=0xa9, .x=0x88, .y=0x7d, .sp=0x00, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x80a0, .value=0xf0}, {.addr=0x80a1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x80a0, .value=0xf0, .type=IO_READ},
        {.addr=0x80a1, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0015) {
    const struct CPU_State initial_cpu = {.pc=0x764f, .a=0x56, .x=0xee, .y=0x1f, .sp=0xad, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x764f, .value=0xf0}, {.addr=0x7650, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x7651, .a=0x56, .x=0xee, .y=0x1f, .sp=0xad, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x764f, .value=0xf0}, {.addr=0x7650, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x764f, .value=0xf0, .type=IO_READ},
        {.addr=0x7650, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0016) {
    const struct CPU_State initial_cpu = {.pc=0xbcd6, .a=0xe1, .x=0x02, .y=0xd9, .sp=0x0d, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xbcd6, .value=0xf0}, {.addr=0xbcd7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbcd8, .a=0xe1, .x=0x02, .y=0xd9, .sp=0x0d, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xbcd6, .value=0xf0}, {.addr=0xbcd7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbcd6, .value=0xf0, .type=IO_READ},
        {.addr=0xbcd7, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0017) {
    const struct CPU_State initial_cpu = {.pc=0x790b, .a=0xb8, .x=0x60, .y=0xdd, .sp=0x99, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x790b, .value=0xf0}, {.addr=0x790c, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x78dd, .a=0xb8, .x=0x60, .y=0xdd, .sp=0x99, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x790b, .value=0xf0}, {.addr=0x790c, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x790b, .value=0xf0, .type=IO_READ},
        {.addr=0x790c, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0018) {
    const struct CPU_State initial_cpu = {.pc=0xe324, .a=0xcc, .x=0x37, .y=0x2b, .sp=0x00, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xe324, .value=0xf0}, {.addr=0xe325, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xe326, .a=0xcc, .x=0x37, .y=0x2b, .sp=0x00, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xe324, .value=0xf0}, {.addr=0xe325, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xe324, .value=0xf0, .type=IO_READ},
        {.addr=0xe325, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0019) {
    const struct CPU_State initial_cpu = {.pc=0x4d13, .a=0xef, .x=0x1d, .y=0xb9, .sp=0x02, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x4d13, .value=0xf0}, {.addr=0x4d14, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x4d7e, .a=0xef, .x=0x1d, .y=0xb9, .sp=0x02, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x4d13, .value=0xf0}, {.addr=0x4d14, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x4d13, .value=0xf0, .type=IO_READ},
        {.addr=0x4d14, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_001A) {
    const struct CPU_State initial_cpu = {.pc=0x5dac, .a=0x74, .x=0xf4, .y=0x7c, .sp=0x2c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x5dac, .value=0xf0}, {.addr=0x5dad, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x5df6, .a=0x74, .x=0xf4, .y=0x7c, .sp=0x2c, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x5dac, .value=0xf0}, {.addr=0x5dad, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x5dac, .value=0xf0, .type=IO_READ},
        {.addr=0x5dad, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_001B) {
    const struct CPU_State initial_cpu = {.pc=0xe890, .a=0x13, .x=0x34, .y=0x5e, .sp=0x07, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xe890, .value=0xf0}, {.addr=0xe891, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xe8c0, .a=0x13, .x=0x34, .y=0x5e, .sp=0x07, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xe890, .value=0xf0}, {.addr=0xe891, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xe890, .value=0xf0, .type=IO_READ},
        {.addr=0xe891, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_001C) {
    const struct CPU_State initial_cpu = {.pc=0x77fc, .a=0xf7, .x=0x4e, .y=0x67, .sp=0x7a, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x77fc, .value=0xf0}, {.addr=0x77fd, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x77fe, .a=0xf7, .x=0x4e, .y=0x67, .sp=0x7a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x77fc, .value=0xf0}, {.addr=0x77fd, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x77fc, .value=0xf0, .type=IO_READ},
        {.addr=0x77fd, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_001D) {
    const struct CPU_State initial_cpu = {.pc=0xa61d, .a=0x74, .x=0x15, .y=0xf8, .sp=0xa8, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xa61d, .value=0xf0}, {.addr=0xa61e, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xa61f, .a=0x74, .x=0x15, .y=0xf8, .sp=0xa8, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xa61d, .value=0xf0}, {.addr=0xa61e, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xa61d, .value=0xf0, .type=IO_READ},
        {.addr=0xa61e, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_001E) {
    const struct CPU_State initial_cpu = {.pc=0x238c, .a=0xf6, .x=0xdf, .y=0xa6, .sp=0xf5, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x238c, .value=0xf0}, {.addr=0x238d, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x2323, .a=0xf6, .x=0xdf, .y=0xa6, .sp=0xf5, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x238c, .value=0xf0}, {.addr=0x238d, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x238c, .value=0xf0, .type=IO_READ},
        {.addr=0x238d, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_001F) {
    const struct CPU_State initial_cpu = {.pc=0xbff4, .a=0x86, .x=0x91, .y=0xb5, .sp=0x88, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xbff4, .value=0xf0}, {.addr=0xbff5, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xc034, .a=0x86, .x=0x91, .y=0xb5, .sp=0x88, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xbff4, .value=0xf0}, {.addr=0xbff5, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xbff4, .value=0xf0, .type=IO_READ},
        {.addr=0xbff5, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0020) {
    const struct CPU_State initial_cpu = {.pc=0x34ca, .a=0x01, .x=0x86, .y=0x16, .sp=0x3a, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x34ca, .value=0xf0}, {.addr=0x34cb, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x34cc, .a=0x01, .x=0x86, .y=0x16, .sp=0x3a, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x34ca, .value=0xf0}, {.addr=0x34cb, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x34ca, .value=0xf0, .type=IO_READ},
        {.addr=0x34cb, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0021) {
    const struct CPU_State initial_cpu = {.pc=0x5ed1, .a=0x10, .x=0xc9, .y=0xf2, .sp=0x08, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5ed1, .value=0xf0}, {.addr=0x5ed2, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x5ed3, .a=0x10, .x=0xc9, .y=0xf2, .sp=0x08, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5ed1, .value=0xf0}, {.addr=0x5ed2, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x5ed1, .value=0xf0, .type=IO_READ},
        {.addr=0x5ed2, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0022) {
    const struct CPU_State initial_cpu = {.pc=0x2d8d, .a=0x0f, .x=0x47, .y=0x27, .sp=0x09, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2d8d, .value=0xf0}, {.addr=0x2d8e, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x2d8f, .a=0x0f, .x=0x47, .y=0x27, .sp=0x09, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2d8d, .value=0xf0}, {.addr=0x2d8e, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x2d8d, .value=0xf0, .type=IO_READ},
        {.addr=0x2d8e, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0023) {
    const struct CPU_State initial_cpu = {.pc=0x564d, .a=0xd3, .x=0xdf, .y=0x4f, .sp=0x09, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x564d, .value=0xf0}, {.addr=0x564e, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x55e7, .a=0xd3, .x=0xdf, .y=0x4f, .sp=0x09, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x564d, .value=0xf0}, {.addr=0x564e, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x564d, .value=0xf0, .type=IO_READ},
        {.addr=0x564e, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0024) {
    const struct CPU_State initial_cpu = {.pc=0x017e, .a=0xd1, .x=0x02, .y=0xc4, .sp=0x63, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0xf0}, {.addr=0x017f, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x0180, .a=0xd1, .x=0x02, .y=0xc4, .sp=0x63, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0xf0}, {.addr=0x017f, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x017e, .value=0xf0, .type=IO_READ},
        {.addr=0x017f, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0025) {
    const struct CPU_State initial_cpu = {.pc=0xf085, .a=0xce, .x=0x41, .y=0x6c, .sp=0xdf, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xf085, .value=0xf0}, {.addr=0xf086, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xf087, .a=0xce, .x=0x41, .y=0x6c, .sp=0xdf, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf085, .value=0xf0}, {.addr=0xf086, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xf085, .value=0xf0, .type=IO_READ},
        {.addr=0xf086, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0026) {
    const struct CPU_State initial_cpu = {.pc=0x5487, .a=0x61, .x=0xd5, .y=0x07, .sp=0x8e, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x5487, .value=0xf0}, {.addr=0x5488, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x5489, .a=0x61, .x=0xd5, .y=0x07, .sp=0x8e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5487, .value=0xf0}, {.addr=0x5488, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x5487, .value=0xf0, .type=IO_READ},
        {.addr=0x5488, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0027) {
    const struct CPU_State initial_cpu = {.pc=0x230c, .a=0x60, .x=0xff, .y=0x4e, .sp=0x97, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x230c, .value=0xf0}, {.addr=0x230d, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x230e, .a=0x60, .x=0xff, .y=0x4e, .sp=0x97, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x230c, .value=0xf0}, {.addr=0x230d, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x230c, .value=0xf0, .type=IO_READ},
        {.addr=0x230d, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0028) {
    const struct CPU_State initial_cpu = {.pc=0xbb02, .a=0xd3, .x=0x14, .y=0x79, .sp=0x74, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xbb02, .value=0xf0}, {.addr=0xbb03, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xbb04, .a=0xd3, .x=0x14, .y=0x79, .sp=0x74, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbb02, .value=0xf0}, {.addr=0xbb03, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xbb02, .value=0xf0, .type=IO_READ},
        {.addr=0xbb03, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0029) {
    const struct CPU_State initial_cpu = {.pc=0xbda2, .a=0x17, .x=0x8d, .y=0xe3, .sp=0xac, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xbda2, .value=0xf0}, {.addr=0xbda3, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xbda4, .a=0x17, .x=0x8d, .y=0xe3, .sp=0xac, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xbda2, .value=0xf0}, {.addr=0xbda3, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xbda2, .value=0xf0, .type=IO_READ},
        {.addr=0xbda3, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_002A) {
    const struct CPU_State initial_cpu = {.pc=0xf9f9, .a=0xcf, .x=0x05, .y=0x64, .sp=0x68, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xf9f9, .value=0xf0}, {.addr=0xf9fa, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xf9fb, .a=0xcf, .x=0x05, .y=0x64, .sp=0x68, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xf9f9, .value=0xf0}, {.addr=0xf9fa, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xf9f9, .value=0xf0, .type=IO_READ},
        {.addr=0xf9fa, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_002B) {
    const struct CPU_State initial_cpu = {.pc=0xe159, .a=0xc1, .x=0x9f, .y=0xd3, .sp=0x5e, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe159, .value=0xf0}, {.addr=0xe15a, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe1bb, .a=0xc1, .x=0x9f, .y=0xd3, .sp=0x5e, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xe159, .value=0xf0}, {.addr=0xe15a, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe159, .value=0xf0, .type=IO_READ},
        {.addr=0xe15a, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_002C) {
    const struct CPU_State initial_cpu = {.pc=0x724c, .a=0x7d, .x=0xe8, .y=0x0b, .sp=0x03, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x724c, .value=0xf0}, {.addr=0x724d, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x7258, .a=0x7d, .x=0xe8, .y=0x0b, .sp=0x03, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x724c, .value=0xf0}, {.addr=0x724d, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x724c, .value=0xf0, .type=IO_READ},
        {.addr=0x724d, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_002D) {
    const struct CPU_State initial_cpu = {.pc=0xa60b, .a=0x6f, .x=0xb2, .y=0x0b, .sp=0x4d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xa60b, .value=0xf0}, {.addr=0xa60c, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xa642, .a=0x6f, .x=0xb2, .y=0x0b, .sp=0x4d, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xa60b, .value=0xf0}, {.addr=0xa60c, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xa60b, .value=0xf0, .type=IO_READ},
        {.addr=0xa60c, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_002E) {
    const struct CPU_State initial_cpu = {.pc=0x9e1f, .a=0x10, .x=0xbb, .y=0x51, .sp=0xb6, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x9e1f, .value=0xf0}, {.addr=0x9e20, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x9e25, .a=0x10, .x=0xbb, .y=0x51, .sp=0xb6, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x9e1f, .value=0xf0}, {.addr=0x9e20, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x9e1f, .value=0xf0, .type=IO_READ},
        {.addr=0x9e20, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_002F) {
    const struct CPU_State initial_cpu = {.pc=0x227c, .a=0xa8, .x=0x99, .y=0x61, .sp=0xf2, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x227c, .value=0xf0}, {.addr=0x227d, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x227e, .a=0xa8, .x=0x99, .y=0x61, .sp=0xf2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x227c, .value=0xf0}, {.addr=0x227d, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x227c, .value=0xf0, .type=IO_READ},
        {.addr=0x227d, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0030) {
    const struct CPU_State initial_cpu = {.pc=0x6490, .a=0xd5, .x=0xb8, .y=0x69, .sp=0x4b, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x6490, .value=0xf0}, {.addr=0x6491, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x6492, .a=0xd5, .x=0xb8, .y=0x69, .sp=0x4b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6490, .value=0xf0}, {.addr=0x6491, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x6490, .value=0xf0, .type=IO_READ},
        {.addr=0x6491, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0031) {
    const struct CPU_State initial_cpu = {.pc=0x69ce, .a=0x0a, .x=0x79, .y=0x0e, .sp=0x99, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x69ce, .value=0xf0}, {.addr=0x69cf, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x6962, .a=0x0a, .x=0x79, .y=0x0e, .sp=0x99, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x69ce, .value=0xf0}, {.addr=0x69cf, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x69ce, .value=0xf0, .type=IO_READ},
        {.addr=0x69cf, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0032) {
    const struct CPU_State initial_cpu = {.pc=0x1fa3, .a=0xef, .x=0x73, .y=0xfa, .sp=0x14, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x1fa3, .value=0xf0}, {.addr=0x1fa4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x1fa1, .a=0xef, .x=0x73, .y=0xfa, .sp=0x14, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x1fa3, .value=0xf0}, {.addr=0x1fa4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x1fa3, .value=0xf0, .type=IO_READ},
        {.addr=0x1fa4, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0033) {
    const struct CPU_State initial_cpu = {.pc=0xedbf, .a=0xec, .x=0x32, .y=0x45, .sp=0x43, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xedbf, .value=0xf0}, {.addr=0xedc0, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xedc1, .a=0xec, .x=0x32, .y=0x45, .sp=0x43, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xedbf, .value=0xf0}, {.addr=0xedc0, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xedbf, .value=0xf0, .type=IO_READ},
        {.addr=0xedc0, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0034) {
    const struct CPU_State initial_cpu = {.pc=0xf786, .a=0xd4, .x=0x8a, .y=0x3d, .sp=0x10, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xf786, .value=0xf0}, {.addr=0xf787, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xf71e, .a=0xd4, .x=0x8a, .y=0x3d, .sp=0x10, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xf786, .value=0xf0}, {.addr=0xf787, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xf786, .value=0xf0, .type=IO_READ},
        {.addr=0xf787, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0035) {
    const struct CPU_State initial_cpu = {.pc=0x527d, .a=0x81, .x=0x85, .y=0xd2, .sp=0xb6, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x527d, .value=0xf0}, {.addr=0x527e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5225, .a=0x81, .x=0x85, .y=0xd2, .sp=0xb6, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x527d, .value=0xf0}, {.addr=0x527e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x527d, .value=0xf0, .type=IO_READ},
        {.addr=0x527e, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0036) {
    const struct CPU_State initial_cpu = {.pc=0x1f51, .a=0x76, .x=0x8b, .y=0x09, .sp=0x11, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x1f51, .value=0xf0}, {.addr=0x1f52, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1ef2, .a=0x76, .x=0x8b, .y=0x09, .sp=0x11, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x1f51, .value=0xf0}, {.addr=0x1f52, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1f51, .value=0xf0, .type=IO_READ},
        {.addr=0x1f52, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0037) {
    const struct CPU_State initial_cpu = {.pc=0x5e69, .a=0xa8, .x=0xb7, .y=0x3c, .sp=0x9d, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x5e69, .value=0xf0}, {.addr=0x5e6a, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x5e6b, .a=0xa8, .x=0xb7, .y=0x3c, .sp=0x9d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5e69, .value=0xf0}, {.addr=0x5e6a, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x5e69, .value=0xf0, .type=IO_READ},
        {.addr=0x5e6a, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0038) {
    const struct CPU_State initial_cpu = {.pc=0x6b1e, .a=0xb5, .x=0xd5, .y=0x62, .sp=0x9c, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x6b1e, .value=0xf0}, {.addr=0x6b1f, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x6b20, .a=0xb5, .x=0xd5, .y=0x62, .sp=0x9c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x6b1e, .value=0xf0}, {.addr=0x6b1f, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x6b1e, .value=0xf0, .type=IO_READ},
        {.addr=0x6b1f, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0039) {
    const struct CPU_State initial_cpu = {.pc=0x8755, .a=0x6a, .x=0xf4, .y=0x3c, .sp=0x40, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x8755, .value=0xf0}, {.addr=0x8756, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x8757, .a=0x6a, .x=0xf4, .y=0x3c, .sp=0x40, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x8755, .value=0xf0}, {.addr=0x8756, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x8755, .value=0xf0, .type=IO_READ},
        {.addr=0x8756, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_003A) {
    const struct CPU_State initial_cpu = {.pc=0xfa6d, .a=0x7c, .x=0xd1, .y=0x26, .sp=0x8f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xfa6d, .value=0xf0}, {.addr=0xfa6e, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xfa6f, .a=0x7c, .x=0xd1, .y=0x26, .sp=0x8f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xfa6d, .value=0xf0}, {.addr=0xfa6e, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xfa6d, .value=0xf0, .type=IO_READ},
        {.addr=0xfa6e, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_003B) {
    const struct CPU_State initial_cpu = {.pc=0x8c06, .a=0xa7, .x=0xb5, .y=0x05, .sp=0xa7, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x8c06, .value=0xf0}, {.addr=0x8c07, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x8bb1, .a=0xa7, .x=0xb5, .y=0x05, .sp=0xa7, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x8c06, .value=0xf0}, {.addr=0x8c07, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x8c06, .value=0xf0, .type=IO_READ},
        {.addr=0x8c07, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_003C) {
    const struct CPU_State initial_cpu = {.pc=0x88f1, .a=0x66, .x=0xae, .y=0xd4, .sp=0x94, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x88f1, .value=0xf0}, {.addr=0x88f2, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x889a, .a=0x66, .x=0xae, .y=0xd4, .sp=0x94, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x88f1, .value=0xf0}, {.addr=0x88f2, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x88f1, .value=0xf0, .type=IO_READ},
        {.addr=0x88f2, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_003D) {
    const struct CPU_State initial_cpu = {.pc=0xb364, .a=0xb7, .x=0xb4, .y=0xc9, .sp=0xf4, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb364, .value=0xf0}, {.addr=0xb365, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xb307, .a=0xb7, .x=0xb4, .y=0xc9, .sp=0xf4, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xb364, .value=0xf0}, {.addr=0xb365, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xb364, .value=0xf0, .type=IO_READ},
        {.addr=0xb365, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_003E) {
    const struct CPU_State initial_cpu = {.pc=0xa7e6, .a=0x08, .x=0xe5, .y=0x4b, .sp=0xc1, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xa7e6, .value=0xf0}, {.addr=0xa7e7, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xa813, .a=0x08, .x=0xe5, .y=0x4b, .sp=0xc1, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xa7e6, .value=0xf0}, {.addr=0xa7e7, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xa7e6, .value=0xf0, .type=IO_READ},
        {.addr=0xa7e7, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_003F) {
    const struct CPU_State initial_cpu = {.pc=0x718c, .a=0xf0, .x=0xe7, .y=0x39, .sp=0xed, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x718c, .value=0xf0}, {.addr=0x718d, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x717e, .a=0xf0, .x=0xe7, .y=0x39, .sp=0xed, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x718c, .value=0xf0}, {.addr=0x718d, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x718c, .value=0xf0, .type=IO_READ},
        {.addr=0x718d, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0040) {
    const struct CPU_State initial_cpu = {.pc=0xd6cf, .a=0xa4, .x=0xaa, .y=0x2f, .sp=0x7a, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xd6cf, .value=0xf0}, {.addr=0xd6d0, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xd6d1, .a=0xa4, .x=0xaa, .y=0x2f, .sp=0x7a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd6cf, .value=0xf0}, {.addr=0xd6d0, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xd6cf, .value=0xf0, .type=IO_READ},
        {.addr=0xd6d0, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0041) {
    const struct CPU_State initial_cpu = {.pc=0xbfa6, .a=0x79, .x=0x61, .y=0xfb, .sp=0xac, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xbfa6, .value=0xf0}, {.addr=0xbfa7, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xbfa8, .a=0x79, .x=0x61, .y=0xfb, .sp=0xac, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xbfa6, .value=0xf0}, {.addr=0xbfa7, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xbfa6, .value=0xf0, .type=IO_READ},
        {.addr=0xbfa7, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0042) {
    const struct CPU_State initial_cpu = {.pc=0x9149, .a=0x18, .x=0x46, .y=0x7f, .sp=0x7d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x9149, .value=0xf0}, {.addr=0x914a, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x914b, .a=0x18, .x=0x46, .y=0x7f, .sp=0x7d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x9149, .value=0xf0}, {.addr=0x914a, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x9149, .value=0xf0, .type=IO_READ},
        {.addr=0x914a, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0043) {
    const struct CPU_State initial_cpu = {.pc=0x45b9, .a=0x3c, .x=0x3a, .y=0x40, .sp=0x5f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x45b9, .value=0xf0}, {.addr=0x45ba, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x45ee, .a=0x3c, .x=0x3a, .y=0x40, .sp=0x5f, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x45b9, .value=0xf0}, {.addr=0x45ba, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x45b9, .value=0xf0, .type=IO_READ},
        {.addr=0x45ba, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0044) {
    const struct CPU_State initial_cpu = {.pc=0x571b, .a=0x84, .x=0xbd, .y=0xbe, .sp=0x17, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x571b, .value=0xf0}, {.addr=0x571c, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x5730, .a=0x84, .x=0xbd, .y=0xbe, .sp=0x17, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x571b, .value=0xf0}, {.addr=0x571c, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x571b, .value=0xf0, .type=IO_READ},
        {.addr=0x571c, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0045) {
    const struct CPU_State initial_cpu = {.pc=0x131d, .a=0x08, .x=0x46, .y=0x11, .sp=0xb0, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x131d, .value=0xf0}, {.addr=0x131e, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x1369, .a=0x08, .x=0x46, .y=0x11, .sp=0xb0, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x131d, .value=0xf0}, {.addr=0x131e, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x131d, .value=0xf0, .type=IO_READ},
        {.addr=0x131e, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0046) {
    const struct CPU_State initial_cpu = {.pc=0x38e5, .a=0xd9, .x=0x84, .y=0x75, .sp=0xda, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x38e5, .value=0xf0}, {.addr=0x38e6, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x390e, .a=0xd9, .x=0x84, .y=0x75, .sp=0xda, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x38e5, .value=0xf0}, {.addr=0x38e6, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x38e5, .value=0xf0, .type=IO_READ},
        {.addr=0x38e6, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0047) {
    const struct CPU_State initial_cpu = {.pc=0x3d65, .a=0x06, .x=0xdc, .y=0xdd, .sp=0x34, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x3d65, .value=0xf0}, {.addr=0x3d66, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x3d21, .a=0x06, .x=0xdc, .y=0xdd, .sp=0x34, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x3d65, .value=0xf0}, {.addr=0x3d66, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x3d65, .value=0xf0, .type=IO_READ},
        {.addr=0x3d66, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0048) {
    const struct CPU_State initial_cpu = {.pc=0x44f3, .a=0x47, .x=0x5d, .y=0x94, .sp=0x3d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x44f3, .value=0xf0}, {.addr=0x44f4, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x44f5, .a=0x47, .x=0x5d, .y=0x94, .sp=0x3d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x44f3, .value=0xf0}, {.addr=0x44f4, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x44f3, .value=0xf0, .type=IO_READ},
        {.addr=0x44f4, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0049) {
    const struct CPU_State initial_cpu = {.pc=0x2eba, .a=0x43, .x=0x0e, .y=0x3a, .sp=0x1e, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x2eba, .value=0xf0}, {.addr=0x2ebb, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x2ebc, .a=0x43, .x=0x0e, .y=0x3a, .sp=0x1e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2eba, .value=0xf0}, {.addr=0x2ebb, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x2eba, .value=0xf0, .type=IO_READ},
        {.addr=0x2ebb, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_004A) {
    const struct CPU_State initial_cpu = {.pc=0xa2ec, .a=0x59, .x=0xf2, .y=0x81, .sp=0x8d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa2ec, .value=0xf0}, {.addr=0xa2ed, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xa331, .a=0x59, .x=0xf2, .y=0x81, .sp=0x8d, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xa2ec, .value=0xf0}, {.addr=0xa2ed, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xa2ec, .value=0xf0, .type=IO_READ},
        {.addr=0xa2ed, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_004B) {
    const struct CPU_State initial_cpu = {.pc=0xeaac, .a=0xb7, .x=0x3a, .y=0x84, .sp=0xdd, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xeaac, .value=0xf0}, {.addr=0xeaad, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xea5f, .a=0xb7, .x=0x3a, .y=0x84, .sp=0xdd, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xeaac, .value=0xf0}, {.addr=0xeaad, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xeaac, .value=0xf0, .type=IO_READ},
        {.addr=0xeaad, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_004C) {
    const struct CPU_State initial_cpu = {.pc=0x994f, .a=0x1f, .x=0x36, .y=0x00, .sp=0xca, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x994f, .value=0xf0}, {.addr=0x9950, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x98dc, .a=0x1f, .x=0x36, .y=0x00, .sp=0xca, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x994f, .value=0xf0}, {.addr=0x9950, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x994f, .value=0xf0, .type=IO_READ},
        {.addr=0x9950, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_004D) {
    const struct CPU_State initial_cpu = {.pc=0x6d60, .a=0xf3, .x=0x02, .y=0x98, .sp=0xa9, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x6d60, .value=0xf0}, {.addr=0x6d61, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x6d2e, .a=0xf3, .x=0x02, .y=0x98, .sp=0xa9, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x6d60, .value=0xf0}, {.addr=0x6d61, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x6d60, .value=0xf0, .type=IO_READ},
        {.addr=0x6d61, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_004E) {
    const struct CPU_State initial_cpu = {.pc=0xc03d, .a=0xb3, .x=0x89, .y=0x6a, .sp=0xbe, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xc03d, .value=0xf0}, {.addr=0xc03e, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xc03a, .a=0xb3, .x=0x89, .y=0x6a, .sp=0xbe, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xc03d, .value=0xf0}, {.addr=0xc03e, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xc03d, .value=0xf0, .type=IO_READ},
        {.addr=0xc03e, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_004F) {
    const struct CPU_State initial_cpu = {.pc=0x83a1, .a=0x97, .x=0xd7, .y=0x26, .sp=0xce, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x83a1, .value=0xf0}, {.addr=0x83a2, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x832c, .a=0x97, .x=0xd7, .y=0x26, .sp=0xce, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x83a1, .value=0xf0}, {.addr=0x83a2, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x83a1, .value=0xf0, .type=IO_READ},
        {.addr=0x83a2, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0050) {
    const struct CPU_State initial_cpu = {.pc=0x284a, .a=0xf3, .x=0x8f, .y=0x5b, .sp=0xa0, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x284a, .value=0xf0}, {.addr=0x284b, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x283d, .a=0xf3, .x=0x8f, .y=0x5b, .sp=0xa0, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x284a, .value=0xf0}, {.addr=0x284b, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x284a, .value=0xf0, .type=IO_READ},
        {.addr=0x284b, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0051) {
    const struct CPU_State initial_cpu = {.pc=0xa3fa, .a=0x0c, .x=0xaf, .y=0x2e, .sp=0xb7, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xa3fa, .value=0xf0}, {.addr=0xa3fb, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xa3fc, .a=0x0c, .x=0xaf, .y=0x2e, .sp=0xb7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa3fa, .value=0xf0}, {.addr=0xa3fb, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xa3fa, .value=0xf0, .type=IO_READ},
        {.addr=0xa3fb, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0052) {
    const struct CPU_State initial_cpu = {.pc=0x868f, .a=0xa2, .x=0x70, .y=0x4e, .sp=0x37, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x868f, .value=0xf0}, {.addr=0x8690, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x8691, .a=0xa2, .x=0x70, .y=0x4e, .sp=0x37, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x868f, .value=0xf0}, {.addr=0x8690, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x868f, .value=0xf0, .type=IO_READ},
        {.addr=0x8690, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0053) {
    const struct CPU_State initial_cpu = {.pc=0x14ad, .a=0xf3, .x=0x12, .y=0xcc, .sp=0xda, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x14ad, .value=0xf0}, {.addr=0x14ae, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x151b, .a=0xf3, .x=0x12, .y=0xcc, .sp=0xda, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x14ad, .value=0xf0}, {.addr=0x14ae, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x14ad, .value=0xf0, .type=IO_READ},
        {.addr=0x14ae, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0054) {
    const struct CPU_State initial_cpu = {.pc=0x5e51, .a=0x43, .x=0x2b, .y=0xf5, .sp=0xbb, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x5e51, .value=0xf0}, {.addr=0x5e52, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x5e53, .a=0x43, .x=0x2b, .y=0xf5, .sp=0xbb, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5e51, .value=0xf0}, {.addr=0x5e52, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x5e51, .value=0xf0, .type=IO_READ},
        {.addr=0x5e52, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0055) {
    const struct CPU_State initial_cpu = {.pc=0x3108, .a=0x15, .x=0xcc, .y=0xfa, .sp=0x1e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x3108, .value=0xf0}, {.addr=0x3109, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x3132, .a=0x15, .x=0xcc, .y=0xfa, .sp=0x1e, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x3108, .value=0xf0}, {.addr=0x3109, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x3108, .value=0xf0, .type=IO_READ},
        {.addr=0x3109, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0056) {
    const struct CPU_State initial_cpu = {.pc=0x48fc, .a=0xe0, .x=0x01, .y=0x1b, .sp=0x4b, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x48fc, .value=0xf0}, {.addr=0x48fd, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x48ed, .a=0xe0, .x=0x01, .y=0x1b, .sp=0x4b, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x48fc, .value=0xf0}, {.addr=0x48fd, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x48fc, .value=0xf0, .type=IO_READ},
        {.addr=0x48fd, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0057) {
    const struct CPU_State initial_cpu = {.pc=0x5694, .a=0xf7, .x=0x0e, .y=0x2e, .sp=0xb7, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x5694, .value=0xf0}, {.addr=0x5695, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x5696, .a=0xf7, .x=0x0e, .y=0x2e, .sp=0xb7, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5694, .value=0xf0}, {.addr=0x5695, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x5694, .value=0xf0, .type=IO_READ},
        {.addr=0x5695, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0058) {
    const struct CPU_State initial_cpu = {.pc=0x5fe5, .a=0x38, .x=0xe5, .y=0x0d, .sp=0x48, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe5, .value=0xf0}, {.addr=0x5fe6, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x5f94, .a=0x38, .x=0xe5, .y=0x0d, .sp=0x48, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x5fe5, .value=0xf0}, {.addr=0x5fe6, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x5fe5, .value=0xf0, .type=IO_READ},
        {.addr=0x5fe6, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0059) {
    const struct CPU_State initial_cpu = {.pc=0xcfd6, .a=0xfa, .x=0x77, .y=0xbd, .sp=0x6e, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xcfd6, .value=0xf0}, {.addr=0xcfd7, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xd02f, .a=0xfa, .x=0x77, .y=0xbd, .sp=0x6e, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xcfd6, .value=0xf0}, {.addr=0xcfd7, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xcfd6, .value=0xf0, .type=IO_READ},
        {.addr=0xcfd7, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_005A) {
    const struct CPU_State initial_cpu = {.pc=0xcdf0, .a=0x53, .x=0xd0, .y=0xc9, .sp=0x94, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xcdf0, .value=0xf0}, {.addr=0xcdf1, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xcdf2, .a=0x53, .x=0xd0, .y=0xc9, .sp=0x94, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xcdf0, .value=0xf0}, {.addr=0xcdf1, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xcdf0, .value=0xf0, .type=IO_READ},
        {.addr=0xcdf1, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_005B) {
    const struct CPU_State initial_cpu = {.pc=0xc4eb, .a=0xab, .x=0x5f, .y=0xd6, .sp=0x04, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xc4eb, .value=0xf0}, {.addr=0xc4ec, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xc4ed, .a=0xab, .x=0x5f, .y=0xd6, .sp=0x04, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc4eb, .value=0xf0}, {.addr=0xc4ec, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xc4eb, .value=0xf0, .type=IO_READ},
        {.addr=0xc4ec, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_005C) {
    const struct CPU_State initial_cpu = {.pc=0xceae, .a=0x2f, .x=0xdb, .y=0xfc, .sp=0x17, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xceae, .value=0xf0}, {.addr=0xceaf, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xcf2a, .a=0x2f, .x=0xdb, .y=0xfc, .sp=0x17, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xceae, .value=0xf0}, {.addr=0xceaf, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xceae, .value=0xf0, .type=IO_READ},
        {.addr=0xceaf, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_005D) {
    const struct CPU_State initial_cpu = {.pc=0x251d, .a=0xe2, .x=0x4b, .y=0xa7, .sp=0xe8, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x251d, .value=0xf0}, {.addr=0x251e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x251f, .a=0xe2, .x=0x4b, .y=0xa7, .sp=0xe8, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x251d, .value=0xf0}, {.addr=0x251e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x251d, .value=0xf0, .type=IO_READ},
        {.addr=0x251e, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_005E) {
    const struct CPU_State initial_cpu = {.pc=0xc83a, .a=0xba, .x=0xa3, .y=0xbe, .sp=0x19, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xc83a, .value=0xf0}, {.addr=0xc83b, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xc83c, .a=0xba, .x=0xa3, .y=0xbe, .sp=0x19, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc83a, .value=0xf0}, {.addr=0xc83b, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xc83a, .value=0xf0, .type=IO_READ},
        {.addr=0xc83b, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_005F) {
    const struct CPU_State initial_cpu = {.pc=0x871f, .a=0xa1, .x=0x87, .y=0x79, .sp=0x6d, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x871f, .value=0xf0}, {.addr=0x8720, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x8721, .a=0xa1, .x=0x87, .y=0x79, .sp=0x6d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x871f, .value=0xf0}, {.addr=0x8720, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x871f, .value=0xf0, .type=IO_READ},
        {.addr=0x8720, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0060) {
    const struct CPU_State initial_cpu = {.pc=0x5a2d, .a=0x3d, .x=0x0b, .y=0xfb, .sp=0x63, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x5a2d, .value=0xf0}, {.addr=0x5a2e, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x59ed, .a=0x3d, .x=0x0b, .y=0xfb, .sp=0x63, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x5a2d, .value=0xf0}, {.addr=0x5a2e, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5a2d, .value=0xf0, .type=IO_READ},
        {.addr=0x5a2e, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0061) {
    const struct CPU_State initial_cpu = {.pc=0x2c4c, .a=0xd5, .x=0xdd, .y=0x72, .sp=0x5b, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x2c4c, .value=0xf0}, {.addr=0x2c4d, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x2c6c, .a=0xd5, .x=0xdd, .y=0x72, .sp=0x5b, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x2c4c, .value=0xf0}, {.addr=0x2c4d, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x2c4c, .value=0xf0, .type=IO_READ},
        {.addr=0x2c4d, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0062) {
    const struct CPU_State initial_cpu = {.pc=0xf3d8, .a=0xc3, .x=0x61, .y=0xbd, .sp=0xb5, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xf3d8, .value=0xf0}, {.addr=0xf3d9, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xf3da, .a=0xc3, .x=0x61, .y=0xbd, .sp=0xb5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xf3d8, .value=0xf0}, {.addr=0xf3d9, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xf3d8, .value=0xf0, .type=IO_READ},
        {.addr=0xf3d9, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0063) {
    const struct CPU_State initial_cpu = {.pc=0x5964, .a=0xf4, .x=0x91, .y=0xce, .sp=0x71, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x5964, .value=0xf0}, {.addr=0x5965, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x5932, .a=0xf4, .x=0x91, .y=0xce, .sp=0x71, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x5964, .value=0xf0}, {.addr=0x5965, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x5964, .value=0xf0, .type=IO_READ},
        {.addr=0x5965, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0064) {
    const struct CPU_State initial_cpu = {.pc=0x5367, .a=0x52, .x=0xcd, .y=0x48, .sp=0xb1, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5367, .value=0xf0}, {.addr=0x5368, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x5369, .a=0x52, .x=0xcd, .y=0x48, .sp=0xb1, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5367, .value=0xf0}, {.addr=0x5368, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x5367, .value=0xf0, .type=IO_READ},
        {.addr=0x5368, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0065) {
    const struct CPU_State initial_cpu = {.pc=0x0ea4, .a=0x75, .x=0xce, .y=0xd6, .sp=0x58, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0ea4, .value=0xf0}, {.addr=0x0ea5, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x0e5c, .a=0x75, .x=0xce, .y=0xd6, .sp=0x58, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0ea4, .value=0xf0}, {.addr=0x0ea5, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x0ea4, .value=0xf0, .type=IO_READ},
        {.addr=0x0ea5, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0066) {
    const struct CPU_State initial_cpu = {.pc=0xcba6, .a=0xb0, .x=0xd0, .y=0x53, .sp=0x72, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xcba6, .value=0xf0}, {.addr=0xcba7, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xcba8, .a=0xb0, .x=0xd0, .y=0x53, .sp=0x72, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xcba6, .value=0xf0}, {.addr=0xcba7, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xcba6, .value=0xf0, .type=IO_READ},
        {.addr=0xcba7, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0067) {
    const struct CPU_State initial_cpu = {.pc=0xfd13, .a=0x94, .x=0x8e, .y=0xf2, .sp=0xd9, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xfd13, .value=0xf0}, {.addr=0xfd14, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xfd80, .a=0x94, .x=0x8e, .y=0xf2, .sp=0xd9, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xfd13, .value=0xf0}, {.addr=0xfd14, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xfd13, .value=0xf0, .type=IO_READ},
        {.addr=0xfd14, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0068) {
    const struct CPU_State initial_cpu = {.pc=0x4db0, .a=0x3d, .x=0xce, .y=0x4f, .sp=0x61, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x4db0, .value=0xf0}, {.addr=0x4db1, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x4db2, .a=0x3d, .x=0xce, .y=0x4f, .sp=0x61, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x4db0, .value=0xf0}, {.addr=0x4db1, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x4db0, .value=0xf0, .type=IO_READ},
        {.addr=0x4db1, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0069) {
    const struct CPU_State initial_cpu = {.pc=0x1da4, .a=0xbb, .x=0x05, .y=0xc2, .sp=0xda, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x1da4, .value=0xf0}, {.addr=0x1da5, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x1d52, .a=0xbb, .x=0x05, .y=0xc2, .sp=0xda, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x1da4, .value=0xf0}, {.addr=0x1da5, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x1da4, .value=0xf0, .type=IO_READ},
        {.addr=0x1da5, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_006A) {
    const struct CPU_State initial_cpu = {.pc=0x1910, .a=0xbf, .x=0xec, .y=0xe3, .sp=0xb6, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x1910, .value=0xf0}, {.addr=0x1911, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x18fd, .a=0xbf, .x=0xec, .y=0xe3, .sp=0xb6, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x1910, .value=0xf0}, {.addr=0x1911, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x1910, .value=0xf0, .type=IO_READ},
        {.addr=0x1911, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_006B) {
    const struct CPU_State initial_cpu = {.pc=0x6d54, .a=0xa1, .x=0xfd, .y=0xf6, .sp=0x16, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x6d54, .value=0xf0}, {.addr=0x6d55, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x6d4d, .a=0xa1, .x=0xfd, .y=0xf6, .sp=0x16, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x6d54, .value=0xf0}, {.addr=0x6d55, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x6d54, .value=0xf0, .type=IO_READ},
        {.addr=0x6d55, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_006C) {
    const struct CPU_State initial_cpu = {.pc=0xb48f, .a=0x6c, .x=0x50, .y=0x96, .sp=0x02, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xb48f, .value=0xf0}, {.addr=0xb490, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xb491, .a=0x6c, .x=0x50, .y=0x96, .sp=0x02, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb48f, .value=0xf0}, {.addr=0xb490, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xb48f, .value=0xf0, .type=IO_READ},
        {.addr=0xb490, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_006D) {
    const struct CPU_State initial_cpu = {.pc=0x0c4d, .a=0xd1, .x=0x8c, .y=0x86, .sp=0x9b, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0c4d, .value=0xf0}, {.addr=0x0c4e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0c4f, .a=0xd1, .x=0x8c, .y=0x86, .sp=0x9b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0c4d, .value=0xf0}, {.addr=0x0c4e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0c4d, .value=0xf0, .type=IO_READ},
        {.addr=0x0c4e, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_006E) {
    const struct CPU_State initial_cpu = {.pc=0x3088, .a=0xdc, .x=0xe1, .y=0xad, .sp=0x3d, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x3088, .value=0xf0}, {.addr=0x3089, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x3068, .a=0xdc, .x=0xe1, .y=0xad, .sp=0x3d, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x3088, .value=0xf0}, {.addr=0x3089, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x3088, .value=0xf0, .type=IO_READ},
        {.addr=0x3089, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_006F) {
    const struct CPU_State initial_cpu = {.pc=0x7689, .a=0xde, .x=0x78, .y=0x76, .sp=0x25, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x7689, .value=0xf0}, {.addr=0x768a, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x76bc, .a=0xde, .x=0x78, .y=0x76, .sp=0x25, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x7689, .value=0xf0}, {.addr=0x768a, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x7689, .value=0xf0, .type=IO_READ},
        {.addr=0x768a, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0070) {
    const struct CPU_State initial_cpu = {.pc=0xbd61, .a=0x5c, .x=0x31, .y=0x57, .sp=0x93, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xbd61, .value=0xf0}, {.addr=0xbd62, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xbd63, .a=0x5c, .x=0x31, .y=0x57, .sp=0x93, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbd61, .value=0xf0}, {.addr=0xbd62, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xbd61, .value=0xf0, .type=IO_READ},
        {.addr=0xbd62, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0071) {
    const struct CPU_State initial_cpu = {.pc=0x19a7, .a=0xa0, .x=0x95, .y=0x79, .sp=0x0f, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x19a7, .value=0xf0}, {.addr=0x19a8, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x19a9, .a=0xa0, .x=0x95, .y=0x79, .sp=0x0f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x19a7, .value=0xf0}, {.addr=0x19a8, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x19a7, .value=0xf0, .type=IO_READ},
        {.addr=0x19a8, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0072) {
    const struct CPU_State initial_cpu = {.pc=0x6465, .a=0x87, .x=0x12, .y=0xa3, .sp=0xba, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6465, .value=0xf0}, {.addr=0x6466, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x6467, .a=0x87, .x=0x12, .y=0xa3, .sp=0xba, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6465, .value=0xf0}, {.addr=0x6466, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x6465, .value=0xf0, .type=IO_READ},
        {.addr=0x6466, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0073) {
    const struct CPU_State initial_cpu = {.pc=0x5b15, .a=0x4e, .x=0x55, .y=0x0c, .sp=0xdd, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5b15, .value=0xf0}, {.addr=0x5b16, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x5b75, .a=0x4e, .x=0x55, .y=0x0c, .sp=0xdd, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x5b15, .value=0xf0}, {.addr=0x5b16, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x5b15, .value=0xf0, .type=IO_READ},
        {.addr=0x5b16, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0074) {
    const struct CPU_State initial_cpu = {.pc=0xe9be, .a=0xb1, .x=0x42, .y=0xb0, .sp=0x03, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe9be, .value=0xf0}, {.addr=0xe9bf, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xe98f, .a=0xb1, .x=0x42, .y=0xb0, .sp=0x03, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xe9be, .value=0xf0}, {.addr=0xe9bf, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xe9be, .value=0xf0, .type=IO_READ},
        {.addr=0xe9bf, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0075) {
    const struct CPU_State initial_cpu = {.pc=0x0123, .a=0xbb, .x=0xb0, .y=0xa7, .sp=0x1a, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xf0}, {.addr=0x0124, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x00a9, .a=0xbb, .x=0xb0, .y=0xa7, .sp=0x1a, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xf0}, {.addr=0x0124, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x0123, .value=0xf0, .type=IO_READ},
        {.addr=0x0124, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0076) {
    const struct CPU_State initial_cpu = {.pc=0x1302, .a=0x13, .x=0x33, .y=0x21, .sp=0x29, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x1302, .value=0xf0}, {.addr=0x1303, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x12df, .a=0x13, .x=0x33, .y=0x21, .sp=0x29, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x1302, .value=0xf0}, {.addr=0x1303, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x1302, .value=0xf0, .type=IO_READ},
        {.addr=0x1303, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0077) {
    const struct CPU_State initial_cpu = {.pc=0xd535, .a=0x0e, .x=0x84, .y=0x4a, .sp=0x96, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xd535, .value=0xf0}, {.addr=0xd536, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xd548, .a=0x0e, .x=0x84, .y=0x4a, .sp=0x96, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xd535, .value=0xf0}, {.addr=0xd536, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xd535, .value=0xf0, .type=IO_READ},
        {.addr=0xd536, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0078) {
    const struct CPU_State initial_cpu = {.pc=0xfdf5, .a=0xa3, .x=0x88, .y=0x8b, .sp=0x08, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xfdf5, .value=0xf0}, {.addr=0xfdf6, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xfdf7, .a=0xa3, .x=0x88, .y=0x8b, .sp=0x08, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xfdf5, .value=0xf0}, {.addr=0xfdf6, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xfdf5, .value=0xf0, .type=IO_READ},
        {.addr=0xfdf6, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0079) {
    const struct CPU_State initial_cpu = {.pc=0xd101, .a=0x7d, .x=0x8e, .y=0xcd, .sp=0xff, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xd101, .value=0xf0}, {.addr=0xd102, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd109, .a=0x7d, .x=0x8e, .y=0xcd, .sp=0xff, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xd101, .value=0xf0}, {.addr=0xd102, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd101, .value=0xf0, .type=IO_READ},
        {.addr=0xd102, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_007A) {
    const struct CPU_State initial_cpu = {.pc=0xfb97, .a=0xf0, .x=0x78, .y=0xd1, .sp=0xe5, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xfb97, .value=0xf0}, {.addr=0xfb98, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xfbd4, .a=0xf0, .x=0x78, .y=0xd1, .sp=0xe5, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xfb97, .value=0xf0}, {.addr=0xfb98, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xfb97, .value=0xf0, .type=IO_READ},
        {.addr=0xfb98, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_007B) {
    const struct CPU_State initial_cpu = {.pc=0xb7a4, .a=0xe2, .x=0x3f, .y=0x5d, .sp=0x9b, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xb7a4, .value=0xf0}, {.addr=0xb7a5, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xb7a6, .a=0xe2, .x=0x3f, .y=0x5d, .sp=0x9b, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xb7a4, .value=0xf0}, {.addr=0xb7a5, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xb7a4, .value=0xf0, .type=IO_READ},
        {.addr=0xb7a5, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_007C) {
    const struct CPU_State initial_cpu = {.pc=0xca04, .a=0xe2, .x=0x21, .y=0x41, .sp=0x23, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xca04, .value=0xf0}, {.addr=0xca05, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xc98f, .a=0xe2, .x=0x21, .y=0x41, .sp=0x23, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xca04, .value=0xf0}, {.addr=0xca05, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xca04, .value=0xf0, .type=IO_READ},
        {.addr=0xca05, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_007D) {
    const struct CPU_State initial_cpu = {.pc=0x9bfe, .a=0xbd, .x=0x11, .y=0x87, .sp=0xe2, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x9bfe, .value=0xf0}, {.addr=0x9bff, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x9c00, .a=0xbd, .x=0x11, .y=0x87, .sp=0xe2, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9bfe, .value=0xf0}, {.addr=0x9bff, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x9bfe, .value=0xf0, .type=IO_READ},
        {.addr=0x9bff, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_007E) {
    const struct CPU_State initial_cpu = {.pc=0x6bca, .a=0x31, .x=0xcf, .y=0x26, .sp=0x60, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x6bca, .value=0xf0}, {.addr=0x6bcb, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x6b4e, .a=0x31, .x=0xcf, .y=0x26, .sp=0x60, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x6bca, .value=0xf0}, {.addr=0x6bcb, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x6bca, .value=0xf0, .type=IO_READ},
        {.addr=0x6bcb, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_007F) {
    const struct CPU_State initial_cpu = {.pc=0x2221, .a=0x02, .x=0x3a, .y=0x5e, .sp=0x72, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x2221, .value=0xf0}, {.addr=0x2222, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x229d, .a=0x02, .x=0x3a, .y=0x5e, .sp=0x72, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x2221, .value=0xf0}, {.addr=0x2222, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x2221, .value=0xf0, .type=IO_READ},
        {.addr=0x2222, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0080) {
    const struct CPU_State initial_cpu = {.pc=0xfa1e, .a=0x39, .x=0xa2, .y=0xfe, .sp=0x0f, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xfa1e, .value=0xf0}, {.addr=0xfa1f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfa86, .a=0x39, .x=0xa2, .y=0xfe, .sp=0x0f, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xfa1e, .value=0xf0}, {.addr=0xfa1f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfa1e, .value=0xf0, .type=IO_READ},
        {.addr=0xfa1f, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0081) {
    const struct CPU_State initial_cpu = {.pc=0x8ecc, .a=0xe4, .x=0x17, .y=0x1d, .sp=0x64, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x8ecc, .value=0xf0}, {.addr=0x8ecd, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x8ebf, .a=0xe4, .x=0x17, .y=0x1d, .sp=0x64, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x8ecc, .value=0xf0}, {.addr=0x8ecd, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x8ecc, .value=0xf0, .type=IO_READ},
        {.addr=0x8ecd, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0082) {
    const struct CPU_State initial_cpu = {.pc=0x38be, .a=0x5d, .x=0x15, .y=0xa5, .sp=0xff, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x38be, .value=0xf0}, {.addr=0x38bf, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x38c0, .a=0x5d, .x=0x15, .y=0xa5, .sp=0xff, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x38be, .value=0xf0}, {.addr=0x38bf, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x38be, .value=0xf0, .type=IO_READ},
        {.addr=0x38bf, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0083) {
    const struct CPU_State initial_cpu = {.pc=0xfe0f, .a=0x5e, .x=0xfc, .y=0x62, .sp=0x3a, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xfe0f, .value=0xf0}, {.addr=0xfe10, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xfdb9, .a=0x5e, .x=0xfc, .y=0x62, .sp=0x3a, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xfe0f, .value=0xf0}, {.addr=0xfe10, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xfe0f, .value=0xf0, .type=IO_READ},
        {.addr=0xfe10, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0084) {
    const struct CPU_State initial_cpu = {.pc=0x1a10, .a=0x27, .x=0x79, .y=0x80, .sp=0x95, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x1a10, .value=0xf0}, {.addr=0x1a11, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x19a1, .a=0x27, .x=0x79, .y=0x80, .sp=0x95, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x1a10, .value=0xf0}, {.addr=0x1a11, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x1a10, .value=0xf0, .type=IO_READ},
        {.addr=0x1a11, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0085) {
    const struct CPU_State initial_cpu = {.pc=0xdb52, .a=0xa4, .x=0x49, .y=0x77, .sp=0x6d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xdb52, .value=0xf0}, {.addr=0xdb53, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdb54, .a=0xa4, .x=0x49, .y=0x77, .sp=0x6d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xdb52, .value=0xf0}, {.addr=0xdb53, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdb52, .value=0xf0, .type=IO_READ},
        {.addr=0xdb53, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0086) {
    const struct CPU_State initial_cpu = {.pc=0xaaf1, .a=0xe0, .x=0x3b, .y=0x70, .sp=0xfe, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xaaf1, .value=0xf0}, {.addr=0xaaf2, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xab24, .a=0xe0, .x=0x3b, .y=0x70, .sp=0xfe, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xaaf1, .value=0xf0}, {.addr=0xaaf2, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xaaf1, .value=0xf0, .type=IO_READ},
        {.addr=0xaaf2, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0087) {
    const struct CPU_State initial_cpu = {.pc=0x0c63, .a=0x2c, .x=0x0c, .y=0xe7, .sp=0xad, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0c63, .value=0xf0}, {.addr=0x0c64, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x0bfc, .a=0x2c, .x=0x0c, .y=0xe7, .sp=0xad, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0c63, .value=0xf0}, {.addr=0x0c64, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x0c63, .value=0xf0, .type=IO_READ},
        {.addr=0x0c64, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0088) {
    const struct CPU_State initial_cpu = {.pc=0x1d1e, .a=0x7b, .x=0xa9, .y=0xa6, .sp=0xa6, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x1d1e, .value=0xf0}, {.addr=0x1d1f, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x1d71, .a=0x7b, .x=0xa9, .y=0xa6, .sp=0xa6, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x1d1e, .value=0xf0}, {.addr=0x1d1f, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x1d1e, .value=0xf0, .type=IO_READ},
        {.addr=0x1d1f, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0089) {
    const struct CPU_State initial_cpu = {.pc=0x9bc6, .a=0xe6, .x=0x5b, .y=0xb3, .sp=0x2a, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x9bc6, .value=0xf0}, {.addr=0x9bc7, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x9bc8, .a=0xe6, .x=0x5b, .y=0xb3, .sp=0x2a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x9bc6, .value=0xf0}, {.addr=0x9bc7, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x9bc6, .value=0xf0, .type=IO_READ},
        {.addr=0x9bc7, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_008A) {
    const struct CPU_State initial_cpu = {.pc=0xb2db, .a=0xba, .x=0xab, .y=0x5a, .sp=0x56, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xb2db, .value=0xf0}, {.addr=0xb2dc, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xb2dd, .a=0xba, .x=0xab, .y=0x5a, .sp=0x56, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb2db, .value=0xf0}, {.addr=0xb2dc, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xb2db, .value=0xf0, .type=IO_READ},
        {.addr=0xb2dc, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_008B) {
    const struct CPU_State initial_cpu = {.pc=0x2081, .a=0x09, .x=0x0b, .y=0x26, .sp=0x62, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x2081, .value=0xf0}, {.addr=0x2082, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x2083, .a=0x09, .x=0x0b, .y=0x26, .sp=0x62, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2081, .value=0xf0}, {.addr=0x2082, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x2081, .value=0xf0, .type=IO_READ},
        {.addr=0x2082, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_008C) {
    const struct CPU_State initial_cpu = {.pc=0x1045, .a=0xa4, .x=0xb1, .y=0x93, .sp=0x8c, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x1045, .value=0xf0}, {.addr=0x1046, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x1086, .a=0xa4, .x=0xb1, .y=0x93, .sp=0x8c, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x1045, .value=0xf0}, {.addr=0x1046, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x1045, .value=0xf0, .type=IO_READ},
        {.addr=0x1046, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_008D) {
    const struct CPU_State initial_cpu = {.pc=0x1af7, .a=0x9a, .x=0x56, .y=0x41, .sp=0x15, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x1af7, .value=0xf0}, {.addr=0x1af8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1af6, .a=0x9a, .x=0x56, .y=0x41, .sp=0x15, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x1af7, .value=0xf0}, {.addr=0x1af8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1af7, .value=0xf0, .type=IO_READ},
        {.addr=0x1af8, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_008E) {
    const struct CPU_State initial_cpu = {.pc=0x0943, .a=0x30, .x=0x7e, .y=0x45, .sp=0xb5, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0943, .value=0xf0}, {.addr=0x0944, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x09a6, .a=0x30, .x=0x7e, .y=0x45, .sp=0xb5, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0943, .value=0xf0}, {.addr=0x0944, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x0943, .value=0xf0, .type=IO_READ},
        {.addr=0x0944, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_008F) {
    const struct CPU_State initial_cpu = {.pc=0xacd0, .a=0x61, .x=0x60, .y=0x7f, .sp=0xbc, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xacd0, .value=0xf0}, {.addr=0xacd1, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xad13, .a=0x61, .x=0x60, .y=0x7f, .sp=0xbc, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xacd0, .value=0xf0}, {.addr=0xacd1, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xacd0, .value=0xf0, .type=IO_READ},
        {.addr=0xacd1, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0090) {
    const struct CPU_State initial_cpu = {.pc=0x84c3, .a=0xcd, .x=0x1e, .y=0xe4, .sp=0x33, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x84c3, .value=0xf0}, {.addr=0x84c4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x84c5, .a=0xcd, .x=0x1e, .y=0xe4, .sp=0x33, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x84c3, .value=0xf0}, {.addr=0x84c4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x84c3, .value=0xf0, .type=IO_READ},
        {.addr=0x84c4, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0091) {
    const struct CPU_State initial_cpu = {.pc=0x930b, .a=0xa7, .x=0xcd, .y=0x33, .sp=0xa2, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x930b, .value=0xf0}, {.addr=0x930c, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x9363, .a=0xa7, .x=0xcd, .y=0x33, .sp=0xa2, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x930b, .value=0xf0}, {.addr=0x930c, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x930b, .value=0xf0, .type=IO_READ},
        {.addr=0x930c, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0092) {
    const struct CPU_State initial_cpu = {.pc=0xa607, .a=0x73, .x=0x22, .y=0x15, .sp=0x0a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xa607, .value=0xf0}, {.addr=0xa608, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xa62e, .a=0x73, .x=0x22, .y=0x15, .sp=0x0a, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xa607, .value=0xf0}, {.addr=0xa608, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xa607, .value=0xf0, .type=IO_READ},
        {.addr=0xa608, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0093) {
    const struct CPU_State initial_cpu = {.pc=0x0930, .a=0x53, .x=0xc4, .y=0xc2, .sp=0x51, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0930, .value=0xf0}, {.addr=0x0931, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x0932, .a=0x53, .x=0xc4, .y=0xc2, .sp=0x51, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0930, .value=0xf0}, {.addr=0x0931, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x0930, .value=0xf0, .type=IO_READ},
        {.addr=0x0931, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0094) {
    const struct CPU_State initial_cpu = {.pc=0xa815, .a=0xf0, .x=0x5e, .y=0x21, .sp=0xa1, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xa815, .value=0xf0}, {.addr=0xa816, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xa88b, .a=0xf0, .x=0x5e, .y=0x21, .sp=0xa1, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xa815, .value=0xf0}, {.addr=0xa816, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xa815, .value=0xf0, .type=IO_READ},
        {.addr=0xa816, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0095) {
    const struct CPU_State initial_cpu = {.pc=0xcbd2, .a=0x51, .x=0x90, .y=0x71, .sp=0xc8, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xcbd2, .value=0xf0}, {.addr=0xcbd3, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xcbe2, .a=0x51, .x=0x90, .y=0x71, .sp=0xc8, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xcbd2, .value=0xf0}, {.addr=0xcbd3, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xcbd2, .value=0xf0, .type=IO_READ},
        {.addr=0xcbd3, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0096) {
    const struct CPU_State initial_cpu = {.pc=0xd29f, .a=0x0a, .x=0x2a, .y=0xf5, .sp=0xfc, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xd29f, .value=0xf0}, {.addr=0xd2a0, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xd2a1, .a=0x0a, .x=0x2a, .y=0xf5, .sp=0xfc, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd29f, .value=0xf0}, {.addr=0xd2a0, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xd29f, .value=0xf0, .type=IO_READ},
        {.addr=0xd2a0, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0097) {
    const struct CPU_State initial_cpu = {.pc=0xea41, .a=0x84, .x=0x8a, .y=0x81, .sp=0x5e, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xea41, .value=0xf0}, {.addr=0xea42, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xea54, .a=0x84, .x=0x8a, .y=0x81, .sp=0x5e, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xea41, .value=0xf0}, {.addr=0xea42, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xea41, .value=0xf0, .type=IO_READ},
        {.addr=0xea42, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0098) {
    const struct CPU_State initial_cpu = {.pc=0x04a7, .a=0x65, .x=0x17, .y=0x12, .sp=0x09, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x04a7, .value=0xf0}, {.addr=0x04a8, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x04a9, .a=0x65, .x=0x17, .y=0x12, .sp=0x09, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x04a7, .value=0xf0}, {.addr=0x04a8, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x04a7, .value=0xf0, .type=IO_READ},
        {.addr=0x04a8, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0099) {
    const struct CPU_State initial_cpu = {.pc=0xc94d, .a=0x33, .x=0x49, .y=0x20, .sp=0x11, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xc94d, .value=0xf0}, {.addr=0xc94e, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xc920, .a=0x33, .x=0x49, .y=0x20, .sp=0x11, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xc94d, .value=0xf0}, {.addr=0xc94e, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xc94d, .value=0xf0, .type=IO_READ},
        {.addr=0xc94e, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_009A) {
    const struct CPU_State initial_cpu = {.pc=0x181c, .a=0x59, .x=0xa8, .y=0xf2, .sp=0x50, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x181c, .value=0xf0}, {.addr=0x181d, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x17f6, .a=0x59, .x=0xa8, .y=0xf2, .sp=0x50, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x181c, .value=0xf0}, {.addr=0x181d, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x181c, .value=0xf0, .type=IO_READ},
        {.addr=0x181d, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_009B) {
    const struct CPU_State initial_cpu = {.pc=0xe8b0, .a=0x85, .x=0xe3, .y=0xe8, .sp=0xda, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xe8b0, .value=0xf0}, {.addr=0xe8b1, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xe8a3, .a=0x85, .x=0xe3, .y=0xe8, .sp=0xda, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xe8b0, .value=0xf0}, {.addr=0xe8b1, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xe8b0, .value=0xf0, .type=IO_READ},
        {.addr=0xe8b1, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_009C) {
    const struct CPU_State initial_cpu = {.pc=0x0bf8, .a=0x43, .x=0x4f, .y=0x11, .sp=0x03, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0bf8, .value=0xf0}, {.addr=0x0bf9, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x0bfa, .a=0x43, .x=0x4f, .y=0x11, .sp=0x03, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0bf8, .value=0xf0}, {.addr=0x0bf9, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x0bf8, .value=0xf0, .type=IO_READ},
        {.addr=0x0bf9, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_009D) {
    const struct CPU_State initial_cpu = {.pc=0x2669, .a=0x51, .x=0x5b, .y=0x4e, .sp=0x07, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x2669, .value=0xf0}, {.addr=0x266a, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x26bd, .a=0x51, .x=0x5b, .y=0x4e, .sp=0x07, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x2669, .value=0xf0}, {.addr=0x266a, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x2669, .value=0xf0, .type=IO_READ},
        {.addr=0x266a, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_009E) {
    const struct CPU_State initial_cpu = {.pc=0x3e8c, .a=0x04, .x=0x27, .y=0x0f, .sp=0x51, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x3e8c, .value=0xf0}, {.addr=0x3e8d, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x3e8e, .a=0x04, .x=0x27, .y=0x0f, .sp=0x51, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x3e8c, .value=0xf0}, {.addr=0x3e8d, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x3e8c, .value=0xf0, .type=IO_READ},
        {.addr=0x3e8d, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_009F) {
    const struct CPU_State initial_cpu = {.pc=0x899c, .a=0x03, .x=0x02, .y=0xe3, .sp=0x52, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x899c, .value=0xf0}, {.addr=0x899d, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x899e, .a=0x03, .x=0x02, .y=0xe3, .sp=0x52, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x899c, .value=0xf0}, {.addr=0x899d, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x899c, .value=0xf0, .type=IO_READ},
        {.addr=0x899d, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xa06e, .a=0x6d, .x=0x54, .y=0x50, .sp=0x47, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xa06e, .value=0xf0}, {.addr=0xa06f, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xa070, .a=0x6d, .x=0x54, .y=0x50, .sp=0x47, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xa06e, .value=0xf0}, {.addr=0xa06f, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xa06e, .value=0xf0, .type=IO_READ},
        {.addr=0xa06f, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x33b8, .a=0x75, .x=0x38, .y=0xfa, .sp=0xd1, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x33b8, .value=0xf0}, {.addr=0x33b9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3377, .a=0x75, .x=0x38, .y=0xfa, .sp=0xd1, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x33b8, .value=0xf0}, {.addr=0x33b9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x33b8, .value=0xf0, .type=IO_READ},
        {.addr=0x33b9, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xd76f, .a=0x32, .x=0x16, .y=0x3b, .sp=0xf2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xd76f, .value=0xf0}, {.addr=0xd770, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd7de, .a=0x32, .x=0x16, .y=0x3b, .sp=0xf2, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xd76f, .value=0xf0}, {.addr=0xd770, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd76f, .value=0xf0, .type=IO_READ},
        {.addr=0xd770, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x74b6, .a=0x0c, .x=0x0d, .y=0x9c, .sp=0xe0, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x74b6, .value=0xf0}, {.addr=0x74b7, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x7444, .a=0x0c, .x=0x0d, .y=0x9c, .sp=0xe0, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x74b6, .value=0xf0}, {.addr=0x74b7, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x74b6, .value=0xf0, .type=IO_READ},
        {.addr=0x74b7, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x4fd7, .a=0x5a, .x=0xce, .y=0xdc, .sp=0x35, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x4fd7, .value=0xf0}, {.addr=0x4fd8, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4f97, .a=0x5a, .x=0xce, .y=0xdc, .sp=0x35, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x4fd7, .value=0xf0}, {.addr=0x4fd8, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x4fd7, .value=0xf0, .type=IO_READ},
        {.addr=0x4fd8, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x6ad8, .a=0x1b, .x=0xfa, .y=0x34, .sp=0xe5, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x6ad8, .value=0xf0}, {.addr=0x6ad9, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x6ada, .a=0x1b, .x=0xfa, .y=0x34, .sp=0xe5, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x6ad8, .value=0xf0}, {.addr=0x6ad9, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x6ad8, .value=0xf0, .type=IO_READ},
        {.addr=0x6ad9, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x1165, .a=0x8c, .x=0x99, .y=0x6b, .sp=0x90, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x1165, .value=0xf0}, {.addr=0x1166, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x11be, .a=0x8c, .x=0x99, .y=0x6b, .sp=0x90, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x1165, .value=0xf0}, {.addr=0x1166, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x1165, .value=0xf0, .type=IO_READ},
        {.addr=0x1166, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x01bd, .a=0x67, .x=0x08, .y=0x3e, .sp=0x16, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xf0}, {.addr=0x01be, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x01bf, .a=0x67, .x=0x08, .y=0x3e, .sp=0x16, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xf0}, {.addr=0x01be, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x01bd, .value=0xf0, .type=IO_READ},
        {.addr=0x01be, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xfabb, .a=0xda, .x=0x76, .y=0x30, .sp=0xe6, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xfabb, .value=0xf0}, {.addr=0xfabc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfa9c, .a=0xda, .x=0x76, .y=0x30, .sp=0xe6, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xfabb, .value=0xf0}, {.addr=0xfabc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfabb, .value=0xf0, .type=IO_READ},
        {.addr=0xfabc, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xfff8, .a=0xc9, .x=0xb1, .y=0x1f, .sp=0x47, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xfff8, .value=0xf0}, {.addr=0xfff9, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xfffa, .a=0xc9, .x=0xb1, .y=0x1f, .sp=0x47, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xfff8, .value=0xf0}, {.addr=0xfff9, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xfff8, .value=0xf0, .type=IO_READ},
        {.addr=0xfff9, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xde25, .a=0x4d, .x=0x98, .y=0xa5, .sp=0x1c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xde25, .value=0xf0}, {.addr=0xde26, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xde27, .a=0x4d, .x=0x98, .y=0xa5, .sp=0x1c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xde25, .value=0xf0}, {.addr=0xde26, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xde25, .value=0xf0, .type=IO_READ},
        {.addr=0xde26, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xf070, .a=0x80, .x=0x10, .y=0x24, .sp=0xbd, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xf070, .value=0xf0}, {.addr=0xf071, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xf072, .a=0x80, .x=0x10, .y=0x24, .sp=0xbd, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xf070, .value=0xf0}, {.addr=0xf071, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xf070, .value=0xf0, .type=IO_READ},
        {.addr=0xf071, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x9747, .a=0x8d, .x=0x05, .y=0xc3, .sp=0x38, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x9747, .value=0xf0}, {.addr=0x9748, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x9712, .a=0x8d, .x=0x05, .y=0xc3, .sp=0x38, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x9747, .value=0xf0}, {.addr=0x9748, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x9747, .value=0xf0, .type=IO_READ},
        {.addr=0x9748, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x886c, .a=0x90, .x=0xa7, .y=0xea, .sp=0x96, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x886c, .value=0xf0}, {.addr=0x886d, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x88d6, .a=0x90, .x=0xa7, .y=0xea, .sp=0x96, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x886c, .value=0xf0}, {.addr=0x886d, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x886c, .value=0xf0, .type=IO_READ},
        {.addr=0x886d, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xdcc3, .a=0xe1, .x=0x72, .y=0x0a, .sp=0x8a, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc3, .value=0xf0}, {.addr=0xdcc4, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xdcc5, .a=0xe1, .x=0x72, .y=0x0a, .sp=0x8a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xdcc3, .value=0xf0}, {.addr=0xdcc4, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xdcc3, .value=0xf0, .type=IO_READ},
        {.addr=0xdcc4, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x8b84, .a=0x98, .x=0x9c, .y=0xf7, .sp=0x8d, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x8b84, .value=0xf0}, {.addr=0x8b85, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x8b1b, .a=0x98, .x=0x9c, .y=0xf7, .sp=0x8d, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x8b84, .value=0xf0}, {.addr=0x8b85, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x8b84, .value=0xf0, .type=IO_READ},
        {.addr=0x8b85, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x64c1, .a=0xac, .x=0xcb, .y=0xe8, .sp=0x52, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x64c1, .value=0xf0}, {.addr=0x64c2, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x64bd, .a=0xac, .x=0xcb, .y=0xe8, .sp=0x52, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x64c1, .value=0xf0}, {.addr=0x64c2, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x64c1, .value=0xf0, .type=IO_READ},
        {.addr=0x64c2, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xa78c, .a=0x6c, .x=0x7c, .y=0x25, .sp=0x36, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xa78c, .value=0xf0}, {.addr=0xa78d, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xa78e, .a=0x6c, .x=0x7c, .y=0x25, .sp=0x36, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa78c, .value=0xf0}, {.addr=0xa78d, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xa78c, .value=0xf0, .type=IO_READ},
        {.addr=0xa78d, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x6ca7, .a=0x26, .x=0x56, .y=0xb7, .sp=0xc8, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x6ca7, .value=0xf0}, {.addr=0x6ca8, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x6ca9, .a=0x26, .x=0x56, .y=0xb7, .sp=0xc8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x6ca7, .value=0xf0}, {.addr=0x6ca8, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x6ca7, .value=0xf0, .type=IO_READ},
        {.addr=0x6ca8, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xb7ea, .a=0x9a, .x=0x13, .y=0xcf, .sp=0xaa, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb7ea, .value=0xf0}, {.addr=0xb7eb, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xb7ec, .a=0x9a, .x=0x13, .y=0xcf, .sp=0xaa, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb7ea, .value=0xf0}, {.addr=0xb7eb, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xb7ea, .value=0xf0, .type=IO_READ},
        {.addr=0xb7eb, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xa3bc, .a=0xb4, .x=0x1f, .y=0x47, .sp=0x09, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xa3bc, .value=0xf0}, {.addr=0xa3bd, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xa3be, .a=0xb4, .x=0x1f, .y=0x47, .sp=0x09, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xa3bc, .value=0xf0}, {.addr=0xa3bd, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xa3bc, .value=0xf0, .type=IO_READ},
        {.addr=0xa3bd, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xdcc6, .a=0x1e, .x=0x90, .y=0x9b, .sp=0x32, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc6, .value=0xf0}, {.addr=0xdcc7, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xdcc8, .a=0x1e, .x=0x90, .y=0x9b, .sp=0x32, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xdcc6, .value=0xf0}, {.addr=0xdcc7, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xdcc6, .value=0xf0, .type=IO_READ},
        {.addr=0xdcc7, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xa8da, .a=0x7a, .x=0xa2, .y=0x98, .sp=0x11, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xa8da, .value=0xf0}, {.addr=0xa8db, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xa89f, .a=0x7a, .x=0xa2, .y=0x98, .sp=0x11, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xa8da, .value=0xf0}, {.addr=0xa8db, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xa8da, .value=0xf0, .type=IO_READ},
        {.addr=0xa8db, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x228e, .a=0x29, .x=0xa5, .y=0x8c, .sp=0x91, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x228e, .value=0xf0}, {.addr=0x228f, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x2249, .a=0x29, .x=0xa5, .y=0x8c, .sp=0x91, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x228e, .value=0xf0}, {.addr=0x228f, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x228e, .value=0xf0, .type=IO_READ},
        {.addr=0x228f, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xb230, .a=0x2d, .x=0x4f, .y=0xee, .sp=0xc0, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xb230, .value=0xf0}, {.addr=0xb231, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xb1ca, .a=0x2d, .x=0x4f, .y=0xee, .sp=0xc0, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xb230, .value=0xf0}, {.addr=0xb231, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xb230, .value=0xf0, .type=IO_READ},
        {.addr=0xb231, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x7a06, .a=0x5a, .x=0x68, .y=0x97, .sp=0x4b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x7a06, .value=0xf0}, {.addr=0x7a07, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x7a08, .a=0x5a, .x=0x68, .y=0x97, .sp=0x4b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x7a06, .value=0xf0}, {.addr=0x7a07, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x7a06, .value=0xf0, .type=IO_READ},
        {.addr=0x7a07, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xd5df, .a=0x16, .x=0x5f, .y=0xd4, .sp=0x84, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xd5df, .value=0xf0}, {.addr=0xd5e0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd5e1, .a=0x16, .x=0x5f, .y=0xd4, .sp=0x84, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd5df, .value=0xf0}, {.addr=0xd5e0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd5df, .value=0xf0, .type=IO_READ},
        {.addr=0xd5e0, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x6a13, .a=0xdf, .x=0x7b, .y=0x0e, .sp=0xca, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x6a13, .value=0xf0}, {.addr=0x6a14, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x69b6, .a=0xdf, .x=0x7b, .y=0x0e, .sp=0xca, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x6a13, .value=0xf0}, {.addr=0x6a14, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x6a13, .value=0xf0, .type=IO_READ},
        {.addr=0x6a14, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xe87e, .a=0x42, .x=0x96, .y=0xe2, .sp=0x62, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xe87e, .value=0xf0}, {.addr=0xe87f, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xe880, .a=0x42, .x=0x96, .y=0xe2, .sp=0x62, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xe87e, .value=0xf0}, {.addr=0xe87f, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xe87e, .value=0xf0, .type=IO_READ},
        {.addr=0xe87f, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xcb3f, .a=0xd6, .x=0xd4, .y=0xd0, .sp=0x38, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xcb3f, .value=0xf0}, {.addr=0xcb40, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xcb38, .a=0xd6, .x=0xd4, .y=0xd0, .sp=0x38, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xcb3f, .value=0xf0}, {.addr=0xcb40, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xcb3f, .value=0xf0, .type=IO_READ},
        {.addr=0xcb40, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xa647, .a=0x6f, .x=0x2e, .y=0x95, .sp=0xc1, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xa647, .value=0xf0}, {.addr=0xa648, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xa649, .a=0x6f, .x=0x2e, .y=0x95, .sp=0xc1, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xa647, .value=0xf0}, {.addr=0xa648, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xa647, .value=0xf0, .type=IO_READ},
        {.addr=0xa648, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xe721, .a=0xb9, .x=0x77, .y=0x3c, .sp=0xe4, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xe721, .value=0xf0}, {.addr=0xe722, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xe725, .a=0xb9, .x=0x77, .y=0x3c, .sp=0xe4, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xe721, .value=0xf0}, {.addr=0xe722, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xe721, .value=0xf0, .type=IO_READ},
        {.addr=0xe722, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xbd11, .a=0x70, .x=0x7d, .y=0x77, .sp=0x6a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xbd11, .value=0xf0}, {.addr=0xbd12, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xbce2, .a=0x70, .x=0x7d, .y=0x77, .sp=0x6a, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xbd11, .value=0xf0}, {.addr=0xbd12, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xbd11, .value=0xf0, .type=IO_READ},
        {.addr=0xbd12, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x77ff, .a=0xcc, .x=0xca, .y=0x61, .sp=0xf8, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x77ff, .value=0xf0}, {.addr=0x7800, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x7801, .a=0xcc, .x=0xca, .y=0x61, .sp=0xf8, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x77ff, .value=0xf0}, {.addr=0x7800, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x77ff, .value=0xf0, .type=IO_READ},
        {.addr=0x7800, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x88c6, .a=0x68, .x=0xbe, .y=0xad, .sp=0xee, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x88c6, .value=0xf0}, {.addr=0x88c7, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x8922, .a=0x68, .x=0xbe, .y=0xad, .sp=0xee, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x88c6, .value=0xf0}, {.addr=0x88c7, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x88c6, .value=0xf0, .type=IO_READ},
        {.addr=0x88c7, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x6401, .a=0xde, .x=0xc9, .y=0x07, .sp=0xc8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x6401, .value=0xf0}, {.addr=0x6402, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x63c1, .a=0xde, .x=0xc9, .y=0x07, .sp=0xc8, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x6401, .value=0xf0}, {.addr=0x6402, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x6401, .value=0xf0, .type=IO_READ},
        {.addr=0x6402, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x63f9, .a=0x81, .x=0xc1, .y=0xc8, .sp=0xae, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x63f9, .value=0xf0}, {.addr=0x63fa, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x6388, .a=0x81, .x=0xc1, .y=0xc8, .sp=0xae, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x63f9, .value=0xf0}, {.addr=0x63fa, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x63f9, .value=0xf0, .type=IO_READ},
        {.addr=0x63fa, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xf10a, .a=0xfb, .x=0x6c, .y=0xe2, .sp=0x74, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xf10a, .value=0xf0}, {.addr=0xf10b, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xf0fe, .a=0xfb, .x=0x6c, .y=0xe2, .sp=0x74, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xf10a, .value=0xf0}, {.addr=0xf10b, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xf10a, .value=0xf0, .type=IO_READ},
        {.addr=0xf10b, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x632f, .a=0x46, .x=0xbc, .y=0x2f, .sp=0xc7, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x632f, .value=0xf0}, {.addr=0x6330, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x6331, .a=0x46, .x=0xbc, .y=0x2f, .sp=0xc7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x632f, .value=0xf0}, {.addr=0x6330, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x632f, .value=0xf0, .type=IO_READ},
        {.addr=0x6330, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x1e84, .a=0xff, .x=0x4d, .y=0x9b, .sp=0xf0, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x1e84, .value=0xf0}, {.addr=0x1e85, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x1e86, .a=0xff, .x=0x4d, .y=0x9b, .sp=0xf0, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1e84, .value=0xf0}, {.addr=0x1e85, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x1e84, .value=0xf0, .type=IO_READ},
        {.addr=0x1e85, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x9926, .a=0xa7, .x=0x05, .y=0x96, .sp=0x65, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x9926, .value=0xf0}, {.addr=0x9927, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x9917, .a=0xa7, .x=0x05, .y=0x96, .sp=0x65, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x9926, .value=0xf0}, {.addr=0x9927, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x9926, .value=0xf0, .type=IO_READ},
        {.addr=0x9927, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x1038, .a=0x61, .x=0x29, .y=0x37, .sp=0xeb, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x1038, .value=0xf0}, {.addr=0x1039, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x0fbf, .a=0x61, .x=0x29, .y=0x37, .sp=0xeb, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x1038, .value=0xf0}, {.addr=0x1039, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x1038, .value=0xf0, .type=IO_READ},
        {.addr=0x1039, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x5859, .a=0xf2, .x=0xf5, .y=0xc8, .sp=0xb1, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x5859, .value=0xf0}, {.addr=0x585a, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x5812, .a=0xf2, .x=0xf5, .y=0xc8, .sp=0xb1, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x5859, .value=0xf0}, {.addr=0x585a, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x5859, .value=0xf0, .type=IO_READ},
        {.addr=0x585a, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xc17f, .a=0xde, .x=0xb5, .y=0x1b, .sp=0xfb, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xc17f, .value=0xf0}, {.addr=0xc180, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xc182, .a=0xde, .x=0xb5, .y=0x1b, .sp=0xfb, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xc17f, .value=0xf0}, {.addr=0xc180, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xc17f, .value=0xf0, .type=IO_READ},
        {.addr=0xc180, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x1a58, .a=0x47, .x=0x25, .y=0x57, .sp=0x92, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x1a58, .value=0xf0}, {.addr=0x1a59, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1a28, .a=0x47, .x=0x25, .y=0x57, .sp=0x92, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x1a58, .value=0xf0}, {.addr=0x1a59, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1a58, .value=0xf0, .type=IO_READ},
        {.addr=0x1a59, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xed51, .a=0xb5, .x=0x07, .y=0xef, .sp=0xb3, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xed51, .value=0xf0}, {.addr=0xed52, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xed53, .a=0xb5, .x=0x07, .y=0xef, .sp=0xb3, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xed51, .value=0xf0}, {.addr=0xed52, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xed51, .value=0xf0, .type=IO_READ},
        {.addr=0xed52, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x694a, .a=0x96, .x=0xc1, .y=0xd8, .sp=0xd3, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x694a, .value=0xf0}, {.addr=0x694b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x694c, .a=0x96, .x=0xc1, .y=0xd8, .sp=0xd3, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x694a, .value=0xf0}, {.addr=0x694b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x694a, .value=0xf0, .type=IO_READ},
        {.addr=0x694b, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x0bd7, .a=0x2f, .x=0xed, .y=0xf8, .sp=0x8a, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0bd7, .value=0xf0}, {.addr=0x0bd8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0b95, .a=0x2f, .x=0xed, .y=0xf8, .sp=0x8a, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0bd7, .value=0xf0}, {.addr=0x0bd8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0bd7, .value=0xf0, .type=IO_READ},
        {.addr=0x0bd8, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x5982, .a=0x4b, .x=0xb5, .y=0x4d, .sp=0xb0, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x5982, .value=0xf0}, {.addr=0x5983, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x592b, .a=0x4b, .x=0xb5, .y=0x4d, .sp=0xb0, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x5982, .value=0xf0}, {.addr=0x5983, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x5982, .value=0xf0, .type=IO_READ},
        {.addr=0x5983, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x74fe, .a=0xf6, .x=0x31, .y=0xee, .sp=0xb2, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x74fe, .value=0xf0}, {.addr=0x74ff, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x7558, .a=0xf6, .x=0x31, .y=0xee, .sp=0xb2, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x74fe, .value=0xf0}, {.addr=0x74ff, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x74fe, .value=0xf0, .type=IO_READ},
        {.addr=0x74ff, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xf9fb, .a=0xff, .x=0x4e, .y=0xac, .sp=0x34, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xf9fb, .value=0xf0}, {.addr=0xf9fc, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xf9fd, .a=0xff, .x=0x4e, .y=0xac, .sp=0x34, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xf9fb, .value=0xf0}, {.addr=0xf9fc, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xf9fb, .value=0xf0, .type=IO_READ},
        {.addr=0xf9fc, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x90ed, .a=0xab, .x=0xae, .y=0xd5, .sp=0xd7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x90ed, .value=0xf0}, {.addr=0x90ee, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x90ef, .a=0xab, .x=0xae, .y=0xd5, .sp=0xd7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x90ed, .value=0xf0}, {.addr=0x90ee, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x90ed, .value=0xf0, .type=IO_READ},
        {.addr=0x90ee, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x1723, .a=0x61, .x=0x75, .y=0x86, .sp=0x23, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x1723, .value=0xf0}, {.addr=0x1724, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x16d2, .a=0x61, .x=0x75, .y=0x86, .sp=0x23, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x1723, .value=0xf0}, {.addr=0x1724, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x1723, .value=0xf0, .type=IO_READ},
        {.addr=0x1724, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x35de, .a=0x65, .x=0x66, .y=0x50, .sp=0xca, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x35de, .value=0xf0}, {.addr=0x35df, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x3565, .a=0x65, .x=0x66, .y=0x50, .sp=0xca, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x35de, .value=0xf0}, {.addr=0x35df, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x35de, .value=0xf0, .type=IO_READ},
        {.addr=0x35df, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x2587, .a=0xec, .x=0xcf, .y=0xb6, .sp=0xee, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2587, .value=0xf0}, {.addr=0x2588, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2589, .a=0xec, .x=0xcf, .y=0xb6, .sp=0xee, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2587, .value=0xf0}, {.addr=0x2588, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2587, .value=0xf0, .type=IO_READ},
        {.addr=0x2588, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x956c, .a=0x41, .x=0x88, .y=0x16, .sp=0xd9, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x956c, .value=0xf0}, {.addr=0x956d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x956e, .a=0x41, .x=0x88, .y=0x16, .sp=0xd9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x956c, .value=0xf0}, {.addr=0x956d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x956c, .value=0xf0, .type=IO_READ},
        {.addr=0x956d, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xa0ce, .a=0xd5, .x=0x05, .y=0x40, .sp=0xd4, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ce, .value=0xf0}, {.addr=0xa0cf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa0d0, .a=0xd5, .x=0x05, .y=0x40, .sp=0xd4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa0ce, .value=0xf0}, {.addr=0xa0cf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa0ce, .value=0xf0, .type=IO_READ},
        {.addr=0xa0cf, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xf97d, .a=0x4e, .x=0x2f, .y=0x97, .sp=0xa0, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xf97d, .value=0xf0}, {.addr=0xf97e, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xf96a, .a=0x4e, .x=0x2f, .y=0x97, .sp=0xa0, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xf97d, .value=0xf0}, {.addr=0xf97e, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xf97d, .value=0xf0, .type=IO_READ},
        {.addr=0xf97e, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x141e, .a=0x8d, .x=0x8d, .y=0xff, .sp=0xbd, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x141e, .value=0xf0}, {.addr=0x141f, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x1420, .a=0x8d, .x=0x8d, .y=0xff, .sp=0xbd, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x141e, .value=0xf0}, {.addr=0x141f, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x141e, .value=0xf0, .type=IO_READ},
        {.addr=0x141f, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x4ff3, .a=0xb3, .x=0x54, .y=0x63, .sp=0x63, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x4ff3, .value=0xf0}, {.addr=0x4ff4, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x4f86, .a=0xb3, .x=0x54, .y=0x63, .sp=0x63, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x4ff3, .value=0xf0}, {.addr=0x4ff4, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x4ff3, .value=0xf0, .type=IO_READ},
        {.addr=0x4ff4, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xf7cd, .a=0xde, .x=0x7d, .y=0x41, .sp=0x41, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xf7cd, .value=0xf0}, {.addr=0xf7ce, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xf7cf, .a=0xde, .x=0x7d, .y=0x41, .sp=0x41, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf7cd, .value=0xf0}, {.addr=0xf7ce, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xf7cd, .value=0xf0, .type=IO_READ},
        {.addr=0xf7ce, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x0c58, .a=0xa7, .x=0x67, .y=0xf0, .sp=0xce, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0c58, .value=0xf0}, {.addr=0x0c59, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0c08, .a=0xa7, .x=0x67, .y=0xf0, .sp=0xce, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0c58, .value=0xf0}, {.addr=0x0c59, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0c58, .value=0xf0, .type=IO_READ},
        {.addr=0x0c59, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xdbeb, .a=0x45, .x=0x79, .y=0xdc, .sp=0xf1, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xdbeb, .value=0xf0}, {.addr=0xdbec, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xdc15, .a=0x45, .x=0x79, .y=0xdc, .sp=0xf1, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xdbeb, .value=0xf0}, {.addr=0xdbec, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xdbeb, .value=0xf0, .type=IO_READ},
        {.addr=0xdbec, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xa6c9, .a=0x38, .x=0x20, .y=0xe3, .sp=0xf0, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xa6c9, .value=0xf0}, {.addr=0xa6ca, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa6cb, .a=0x38, .x=0x20, .y=0xe3, .sp=0xf0, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa6c9, .value=0xf0}, {.addr=0xa6ca, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa6c9, .value=0xf0, .type=IO_READ},
        {.addr=0xa6ca, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xa0ef, .a=0x09, .x=0x66, .y=0x55, .sp=0xe1, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ef, .value=0xf0}, {.addr=0xa0f0, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xa118, .a=0x09, .x=0x66, .y=0x55, .sp=0xe1, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xa0ef, .value=0xf0}, {.addr=0xa0f0, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xa0ef, .value=0xf0, .type=IO_READ},
        {.addr=0xa0f0, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x1d23, .a=0x40, .x=0xd1, .y=0x98, .sp=0x05, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x1d23, .value=0xf0}, {.addr=0x1d24, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x1d24, .a=0x40, .x=0xd1, .y=0x98, .sp=0x05, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x1d23, .value=0xf0}, {.addr=0x1d24, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x1d23, .value=0xf0, .type=IO_READ},
        {.addr=0x1d24, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x24d9, .a=0x6b, .x=0x9b, .y=0x45, .sp=0x07, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x24d9, .value=0xf0}, {.addr=0x24da, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x24db, .a=0x6b, .x=0x9b, .y=0x45, .sp=0x07, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x24d9, .value=0xf0}, {.addr=0x24da, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x24d9, .value=0xf0, .type=IO_READ},
        {.addr=0x24da, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xcb38, .a=0xa1, .x=0x50, .y=0x9c, .sp=0x60, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xcb38, .value=0xf0}, {.addr=0xcb39, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xcb3b, .a=0xa1, .x=0x50, .y=0x9c, .sp=0x60, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xcb38, .value=0xf0}, {.addr=0xcb39, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xcb38, .value=0xf0, .type=IO_READ},
        {.addr=0xcb39, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x7e7e, .a=0xab, .x=0x26, .y=0xba, .sp=0x2a, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x7e7e, .value=0xf0}, {.addr=0x7e7f, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x7e9b, .a=0xab, .x=0x26, .y=0xba, .sp=0x2a, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x7e7e, .value=0xf0}, {.addr=0x7e7f, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x7e7e, .value=0xf0, .type=IO_READ},
        {.addr=0x7e7f, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x5c9a, .a=0x23, .x=0xd6, .y=0xf3, .sp=0xdf, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x5c9a, .value=0xf0}, {.addr=0x5c9b, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x5c9c, .a=0x23, .x=0xd6, .y=0xf3, .sp=0xdf, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5c9a, .value=0xf0}, {.addr=0x5c9b, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x5c9a, .value=0xf0, .type=IO_READ},
        {.addr=0x5c9b, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xd4d7, .a=0xfb, .x=0x3d, .y=0xc1, .sp=0x43, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd4d7, .value=0xf0}, {.addr=0xd4d8, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xd48c, .a=0xfb, .x=0x3d, .y=0xc1, .sp=0x43, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xd4d7, .value=0xf0}, {.addr=0xd4d8, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xd4d7, .value=0xf0, .type=IO_READ},
        {.addr=0xd4d8, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x5613, .a=0x3d, .x=0xd8, .y=0x1a, .sp=0xe4, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x5613, .value=0xf0}, {.addr=0x5614, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x564a, .a=0x3d, .x=0xd8, .y=0x1a, .sp=0xe4, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x5613, .value=0xf0}, {.addr=0x5614, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x5613, .value=0xf0, .type=IO_READ},
        {.addr=0x5614, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x330f, .a=0xb9, .x=0x7b, .y=0x3f, .sp=0x11, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x330f, .value=0xf0}, {.addr=0x3310, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x3311, .a=0xb9, .x=0x7b, .y=0x3f, .sp=0x11, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x330f, .value=0xf0}, {.addr=0x3310, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x330f, .value=0xf0, .type=IO_READ},
        {.addr=0x3310, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xf114, .a=0xa1, .x=0x7c, .y=0xcf, .sp=0xb0, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xf114, .value=0xf0}, {.addr=0xf115, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xf116, .a=0xa1, .x=0x7c, .y=0xcf, .sp=0xb0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf114, .value=0xf0}, {.addr=0xf115, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xf114, .value=0xf0, .type=IO_READ},
        {.addr=0xf115, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x9fa0, .a=0xb7, .x=0xec, .y=0x51, .sp=0xd7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa0, .value=0xf0}, {.addr=0x9fa1, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x9fa2, .a=0xb7, .x=0xec, .y=0x51, .sp=0xd7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x9fa0, .value=0xf0}, {.addr=0x9fa1, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x9fa0, .value=0xf0, .type=IO_READ},
        {.addr=0x9fa1, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xfbcb, .a=0x08, .x=0x5e, .y=0xf0, .sp=0xa0, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xfbcb, .value=0xf0}, {.addr=0xfbcc, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xfb98, .a=0x08, .x=0x5e, .y=0xf0, .sp=0xa0, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xfbcb, .value=0xf0}, {.addr=0xfbcc, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xfbcb, .value=0xf0, .type=IO_READ},
        {.addr=0xfbcc, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x47ef, .a=0x49, .x=0x96, .y=0x7b, .sp=0xe6, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x47ef, .value=0xf0}, {.addr=0x47f0, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x47f1, .a=0x49, .x=0x96, .y=0x7b, .sp=0xe6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x47ef, .value=0xf0}, {.addr=0x47f0, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x47ef, .value=0xf0, .type=IO_READ},
        {.addr=0x47f0, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x8d75, .a=0xed, .x=0xb8, .y=0x82, .sp=0x8d, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x8d75, .value=0xf0}, {.addr=0x8d76, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x8d77, .a=0xed, .x=0xb8, .y=0x82, .sp=0x8d, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x8d75, .value=0xf0}, {.addr=0x8d76, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x8d75, .value=0xf0, .type=IO_READ},
        {.addr=0x8d76, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xd192, .a=0x6f, .x=0x73, .y=0x5f, .sp=0xc7, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xd192, .value=0xf0}, {.addr=0xd193, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xd194, .a=0x6f, .x=0x73, .y=0x5f, .sp=0xc7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd192, .value=0xf0}, {.addr=0xd193, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xd192, .value=0xf0, .type=IO_READ},
        {.addr=0xd193, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x9bbd, .a=0x46, .x=0x91, .y=0xcf, .sp=0x60, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x9bbd, .value=0xf0}, {.addr=0x9bbe, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x9bbf, .a=0x46, .x=0x91, .y=0xcf, .sp=0x60, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9bbd, .value=0xf0}, {.addr=0x9bbe, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x9bbd, .value=0xf0, .type=IO_READ},
        {.addr=0x9bbe, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x2903, .a=0xe0, .x=0xdf, .y=0xbb, .sp=0x88, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x2903, .value=0xf0}, {.addr=0x2904, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x2904, .a=0xe0, .x=0xdf, .y=0xbb, .sp=0x88, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x2903, .value=0xf0}, {.addr=0x2904, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x2903, .value=0xf0, .type=IO_READ},
        {.addr=0x2904, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x14e3, .a=0x8b, .x=0xba, .y=0x59, .sp=0x71, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x14e3, .value=0xf0}, {.addr=0x14e4, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x14e9, .a=0x8b, .x=0xba, .y=0x59, .sp=0x71, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x14e3, .value=0xf0}, {.addr=0x14e4, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x14e3, .value=0xf0, .type=IO_READ},
        {.addr=0x14e4, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x16c4, .a=0x71, .x=0x10, .y=0x1f, .sp=0x7e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x16c4, .value=0xf0}, {.addr=0x16c5, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x16c6, .a=0x71, .x=0x10, .y=0x1f, .sp=0x7e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x16c4, .value=0xf0}, {.addr=0x16c5, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x16c4, .value=0xf0, .type=IO_READ},
        {.addr=0x16c5, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xc25d, .a=0xc5, .x=0xe5, .y=0x9f, .sp=0xf5, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xc25d, .value=0xf0}, {.addr=0xc25e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc25f, .a=0xc5, .x=0xe5, .y=0x9f, .sp=0xf5, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc25d, .value=0xf0}, {.addr=0xc25e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc25d, .value=0xf0, .type=IO_READ},
        {.addr=0xc25e, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x74a2, .a=0x29, .x=0x70, .y=0x93, .sp=0xf7, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x74a2, .value=0xf0}, {.addr=0x74a3, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x7498, .a=0x29, .x=0x70, .y=0x93, .sp=0xf7, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x74a2, .value=0xf0}, {.addr=0x74a3, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x74a2, .value=0xf0, .type=IO_READ},
        {.addr=0x74a3, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xa92a, .a=0x0c, .x=0x8c, .y=0x08, .sp=0x2a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xa92a, .value=0xf0}, {.addr=0xa92b, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xa92c, .a=0x0c, .x=0x8c, .y=0x08, .sp=0x2a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa92a, .value=0xf0}, {.addr=0xa92b, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xa92a, .value=0xf0, .type=IO_READ},
        {.addr=0xa92b, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x1bcd, .a=0x2e, .x=0x67, .y=0x0f, .sp=0x66, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x1bcd, .value=0xf0}, {.addr=0x1bce, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x1bcf, .a=0x2e, .x=0x67, .y=0x0f, .sp=0x66, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1bcd, .value=0xf0}, {.addr=0x1bce, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x1bcd, .value=0xf0, .type=IO_READ},
        {.addr=0x1bce, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x03b0, .a=0x1f, .x=0xfb, .y=0x43, .sp=0x7a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x03b0, .value=0xf0}, {.addr=0x03b1, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x0377, .a=0x1f, .x=0xfb, .y=0x43, .sp=0x7a, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x03b0, .value=0xf0}, {.addr=0x03b1, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x03b0, .value=0xf0, .type=IO_READ},
        {.addr=0x03b1, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x1643, .a=0xdf, .x=0xaa, .y=0x0e, .sp=0x9e, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x1643, .value=0xf0}, {.addr=0x1644, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x1664, .a=0xdf, .x=0xaa, .y=0x0e, .sp=0x9e, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x1643, .value=0xf0}, {.addr=0x1644, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x1643, .value=0xf0, .type=IO_READ},
        {.addr=0x1644, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xd0cd, .a=0x5f, .x=0x6f, .y=0x60, .sp=0xc7, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xd0cd, .value=0xf0}, {.addr=0xd0ce, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xd0cf, .a=0x5f, .x=0x6f, .y=0x60, .sp=0xc7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xd0cd, .value=0xf0}, {.addr=0xd0ce, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xd0cd, .value=0xf0, .type=IO_READ},
        {.addr=0xd0ce, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x1ee5, .a=0x79, .x=0x09, .y=0x38, .sp=0x3a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x1ee5, .value=0xf0}, {.addr=0x1ee6, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x1ee7, .a=0x79, .x=0x09, .y=0x38, .sp=0x3a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1ee5, .value=0xf0}, {.addr=0x1ee6, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x1ee5, .value=0xf0, .type=IO_READ},
        {.addr=0x1ee6, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x17eb, .a=0x63, .x=0xab, .y=0x54, .sp=0xa6, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x17eb, .value=0xf0}, {.addr=0x17ec, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x17ed, .a=0x63, .x=0xab, .y=0x54, .sp=0xa6, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x17eb, .value=0xf0}, {.addr=0x17ec, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x17eb, .value=0xf0, .type=IO_READ},
        {.addr=0x17ec, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xb32f, .a=0xe6, .x=0xd6, .y=0x08, .sp=0xd3, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xb32f, .value=0xf0}, {.addr=0xb330, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xb361, .a=0xe6, .x=0xd6, .y=0x08, .sp=0xd3, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xb32f, .value=0xf0}, {.addr=0xb330, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xb32f, .value=0xf0, .type=IO_READ},
        {.addr=0xb330, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x2cd7, .a=0x6a, .x=0xbe, .y=0x6f, .sp=0xee, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x2cd7, .value=0xf0}, {.addr=0x2cd8, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2cd9, .a=0x6a, .x=0xbe, .y=0x6f, .sp=0xee, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2cd7, .value=0xf0}, {.addr=0x2cd8, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2cd7, .value=0xf0, .type=IO_READ},
        {.addr=0x2cd8, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xf148, .a=0x11, .x=0x3f, .y=0xc6, .sp=0xba, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xf148, .value=0xf0}, {.addr=0xf149, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xf0cb, .a=0x11, .x=0x3f, .y=0xc6, .sp=0xba, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xf148, .value=0xf0}, {.addr=0xf149, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xf148, .value=0xf0, .type=IO_READ},
        {.addr=0xf149, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x1170, .a=0x2d, .x=0x1c, .y=0x25, .sp=0x7b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x1170, .value=0xf0}, {.addr=0x1171, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x11cf, .a=0x2d, .x=0x1c, .y=0x25, .sp=0x7b, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x1170, .value=0xf0}, {.addr=0x1171, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1170, .value=0xf0, .type=IO_READ},
        {.addr=0x1171, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0100) {
    const struct CPU_State initial_cpu = {.pc=0xc201, .a=0x28, .x=0x13, .y=0x04, .sp=0x85, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xc201, .value=0xf0}, {.addr=0xc202, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xc203, .a=0x28, .x=0x13, .y=0x04, .sp=0x85, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc201, .value=0xf0}, {.addr=0xc202, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xc201, .value=0xf0, .type=IO_READ},
        {.addr=0xc202, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0101) {
    const struct CPU_State initial_cpu = {.pc=0xcb3e, .a=0x6a, .x=0xf5, .y=0x0b, .sp=0xdd, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xcb3e, .value=0xf0}, {.addr=0xcb3f, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xcad3, .a=0x6a, .x=0xf5, .y=0x0b, .sp=0xdd, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xcb3e, .value=0xf0}, {.addr=0xcb3f, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xcb3e, .value=0xf0, .type=IO_READ},
        {.addr=0xcb3f, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0102) {
    const struct CPU_State initial_cpu = {.pc=0xf731, .a=0x06, .x=0x32, .y=0xa5, .sp=0xc4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xf731, .value=0xf0}, {.addr=0xf732, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf733, .a=0x06, .x=0x32, .y=0xa5, .sp=0xc4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf731, .value=0xf0}, {.addr=0xf732, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf731, .value=0xf0, .type=IO_READ},
        {.addr=0xf732, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0103) {
    const struct CPU_State initial_cpu = {.pc=0x3a04, .a=0x06, .x=0xdc, .y=0x50, .sp=0x93, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x3a04, .value=0xf0}, {.addr=0x3a05, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x3a06, .a=0x06, .x=0xdc, .y=0x50, .sp=0x93, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x3a04, .value=0xf0}, {.addr=0x3a05, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x3a04, .value=0xf0, .type=IO_READ},
        {.addr=0x3a05, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0104) {
    const struct CPU_State initial_cpu = {.pc=0x4355, .a=0x2c, .x=0x43, .y=0xc1, .sp=0x6e, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x4355, .value=0xf0}, {.addr=0x4356, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x4357, .a=0x2c, .x=0x43, .y=0xc1, .sp=0x6e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4355, .value=0xf0}, {.addr=0x4356, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x4355, .value=0xf0, .type=IO_READ},
        {.addr=0x4356, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0105) {
    const struct CPU_State initial_cpu = {.pc=0xb462, .a=0x3e, .x=0x56, .y=0x92, .sp=0x64, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xb462, .value=0xf0}, {.addr=0xb463, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xb464, .a=0x3e, .x=0x56, .y=0x92, .sp=0x64, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb462, .value=0xf0}, {.addr=0xb463, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xb462, .value=0xf0, .type=IO_READ},
        {.addr=0xb463, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0106) {
    const struct CPU_State initial_cpu = {.pc=0xf4be, .a=0x87, .x=0x36, .y=0xfe, .sp=0xb3, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf4be, .value=0xf0}, {.addr=0xf4bf, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xf4c0, .a=0x87, .x=0x36, .y=0xfe, .sp=0xb3, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xf4be, .value=0xf0}, {.addr=0xf4bf, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xf4be, .value=0xf0, .type=IO_READ},
        {.addr=0xf4bf, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0107) {
    const struct CPU_State initial_cpu = {.pc=0x6f4c, .a=0xf2, .x=0xca, .y=0x5a, .sp=0x96, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x6f4c, .value=0xf0}, {.addr=0x6f4d, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x6ef9, .a=0xf2, .x=0xca, .y=0x5a, .sp=0x96, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x6f4c, .value=0xf0}, {.addr=0x6f4d, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x6f4c, .value=0xf0, .type=IO_READ},
        {.addr=0x6f4d, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0108) {
    const struct CPU_State initial_cpu = {.pc=0x53c3, .a=0x54, .x=0x09, .y=0x6b, .sp=0x9e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x53c3, .value=0xf0}, {.addr=0x53c4, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x53c5, .a=0x54, .x=0x09, .y=0x6b, .sp=0x9e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x53c3, .value=0xf0}, {.addr=0x53c4, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x53c3, .value=0xf0, .type=IO_READ},
        {.addr=0x53c4, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0109) {
    const struct CPU_State initial_cpu = {.pc=0xd096, .a=0xad, .x=0xf6, .y=0xed, .sp=0x38, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xd096, .value=0xf0}, {.addr=0xd097, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd105, .a=0xad, .x=0xf6, .y=0xed, .sp=0x38, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xd096, .value=0xf0}, {.addr=0xd097, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd096, .value=0xf0, .type=IO_READ},
        {.addr=0xd097, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_010A) {
    const struct CPU_State initial_cpu = {.pc=0x7a2e, .a=0x17, .x=0xd0, .y=0x75, .sp=0x30, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x7a2e, .value=0xf0}, {.addr=0x7a2f, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x7a30, .a=0x17, .x=0xd0, .y=0x75, .sp=0x30, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x7a2e, .value=0xf0}, {.addr=0x7a2f, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x7a2e, .value=0xf0, .type=IO_READ},
        {.addr=0x7a2f, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_010B) {
    const struct CPU_State initial_cpu = {.pc=0x42ab, .a=0xc1, .x=0x7b, .y=0xe4, .sp=0x10, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x42ab, .value=0xf0}, {.addr=0x42ac, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x42ad, .a=0xc1, .x=0x7b, .y=0xe4, .sp=0x10, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x42ab, .value=0xf0}, {.addr=0x42ac, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x42ab, .value=0xf0, .type=IO_READ},
        {.addr=0x42ac, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_010C) {
    const struct CPU_State initial_cpu = {.pc=0xc497, .a=0x81, .x=0x87, .y=0x1d, .sp=0x7f, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xc497, .value=0xf0}, {.addr=0xc498, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xc4cd, .a=0x81, .x=0x87, .y=0x1d, .sp=0x7f, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xc497, .value=0xf0}, {.addr=0xc498, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xc497, .value=0xf0, .type=IO_READ},
        {.addr=0xc498, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_010D) {
    const struct CPU_State initial_cpu = {.pc=0x8c79, .a=0xfb, .x=0xb1, .y=0x51, .sp=0xba, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x8c79, .value=0xf0}, {.addr=0x8c7a, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x8c6f, .a=0xfb, .x=0xb1, .y=0x51, .sp=0xba, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x8c79, .value=0xf0}, {.addr=0x8c7a, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x8c79, .value=0xf0, .type=IO_READ},
        {.addr=0x8c7a, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_010E) {
    const struct CPU_State initial_cpu = {.pc=0xc0be, .a=0xbf, .x=0x0b, .y=0xbb, .sp=0x01, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xc0be, .value=0xf0}, {.addr=0xc0bf, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xc0c0, .a=0xbf, .x=0x0b, .y=0xbb, .sp=0x01, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc0be, .value=0xf0}, {.addr=0xc0bf, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xc0be, .value=0xf0, .type=IO_READ},
        {.addr=0xc0bf, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_010F) {
    const struct CPU_State initial_cpu = {.pc=0xaade, .a=0x78, .x=0x7b, .y=0xc1, .sp=0x3f, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xaade, .value=0xf0}, {.addr=0xaadf, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xaae0, .a=0x78, .x=0x7b, .y=0xc1, .sp=0x3f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xaade, .value=0xf0}, {.addr=0xaadf, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xaade, .value=0xf0, .type=IO_READ},
        {.addr=0xaadf, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0110) {
    const struct CPU_State initial_cpu = {.pc=0xa328, .a=0x18, .x=0xe2, .y=0x7d, .sp=0xb9, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xa328, .value=0xf0}, {.addr=0xa329, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xa32a, .a=0x18, .x=0xe2, .y=0x7d, .sp=0xb9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xa328, .value=0xf0}, {.addr=0xa329, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xa328, .value=0xf0, .type=IO_READ},
        {.addr=0xa329, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0111) {
    const struct CPU_State initial_cpu = {.pc=0x6c7e, .a=0xb8, .x=0x6b, .y=0xef, .sp=0x2d, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x6c7e, .value=0xf0}, {.addr=0x6c7f, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x6c80, .a=0xb8, .x=0x6b, .y=0xef, .sp=0x2d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6c7e, .value=0xf0}, {.addr=0x6c7f, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x6c7e, .value=0xf0, .type=IO_READ},
        {.addr=0x6c7f, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0112) {
    const struct CPU_State initial_cpu = {.pc=0x3fa4, .a=0x13, .x=0x27, .y=0xef, .sp=0x66, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x3fa4, .value=0xf0}, {.addr=0x3fa5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3fa6, .a=0x13, .x=0x27, .y=0xef, .sp=0x66, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x3fa4, .value=0xf0}, {.addr=0x3fa5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3fa4, .value=0xf0, .type=IO_READ},
        {.addr=0x3fa5, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0113) {
    const struct CPU_State initial_cpu = {.pc=0xa8b6, .a=0xca, .x=0xe3, .y=0x3b, .sp=0xe4, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xa8b6, .value=0xf0}, {.addr=0xa8b7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa925, .a=0xca, .x=0xe3, .y=0x3b, .sp=0xe4, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xa8b6, .value=0xf0}, {.addr=0xa8b7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa8b6, .value=0xf0, .type=IO_READ},
        {.addr=0xa8b7, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0114) {
    const struct CPU_State initial_cpu = {.pc=0xba45, .a=0xff, .x=0x02, .y=0xcd, .sp=0x37, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xba45, .value=0xf0}, {.addr=0xba46, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xbac1, .a=0xff, .x=0x02, .y=0xcd, .sp=0x37, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xba45, .value=0xf0}, {.addr=0xba46, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xba45, .value=0xf0, .type=IO_READ},
        {.addr=0xba46, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0115) {
    const struct CPU_State initial_cpu = {.pc=0xafde, .a=0x66, .x=0x6d, .y=0xa5, .sp=0x59, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xafde, .value=0xf0}, {.addr=0xafdf, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xafe0, .a=0x66, .x=0x6d, .y=0xa5, .sp=0x59, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xafde, .value=0xf0}, {.addr=0xafdf, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xafde, .value=0xf0, .type=IO_READ},
        {.addr=0xafdf, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0116) {
    const struct CPU_State initial_cpu = {.pc=0x5b30, .a=0xd2, .x=0xc1, .y=0x95, .sp=0x3b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5b30, .value=0xf0}, {.addr=0x5b31, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x5b32, .a=0xd2, .x=0xc1, .y=0x95, .sp=0x3b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5b30, .value=0xf0}, {.addr=0x5b31, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x5b30, .value=0xf0, .type=IO_READ},
        {.addr=0x5b31, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0117) {
    const struct CPU_State initial_cpu = {.pc=0x49e7, .a=0x76, .x=0x5a, .y=0x34, .sp=0x56, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x49e7, .value=0xf0}, {.addr=0x49e8, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x49de, .a=0x76, .x=0x5a, .y=0x34, .sp=0x56, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x49e7, .value=0xf0}, {.addr=0x49e8, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x49e7, .value=0xf0, .type=IO_READ},
        {.addr=0x49e8, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0118) {
    const struct CPU_State initial_cpu = {.pc=0x9700, .a=0xe9, .x=0xdf, .y=0xc0, .sp=0xab, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x9700, .value=0xf0}, {.addr=0x9701, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x976d, .a=0xe9, .x=0xdf, .y=0xc0, .sp=0xab, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x9700, .value=0xf0}, {.addr=0x9701, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x9700, .value=0xf0, .type=IO_READ},
        {.addr=0x9701, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0119) {
    const struct CPU_State initial_cpu = {.pc=0xeb1e, .a=0x05, .x=0xd5, .y=0xe5, .sp=0x1d, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xeb1e, .value=0xf0}, {.addr=0xeb1f, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xeb20, .a=0x05, .x=0xd5, .y=0xe5, .sp=0x1d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xeb1e, .value=0xf0}, {.addr=0xeb1f, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xeb1e, .value=0xf0, .type=IO_READ},
        {.addr=0xeb1f, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_011A) {
    const struct CPU_State initial_cpu = {.pc=0x6eb6, .a=0xbc, .x=0xb7, .y=0x9f, .sp=0x8f, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x6eb6, .value=0xf0}, {.addr=0x6eb7, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x6eb8, .a=0xbc, .x=0xb7, .y=0x9f, .sp=0x8f, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6eb6, .value=0xf0}, {.addr=0x6eb7, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x6eb6, .value=0xf0, .type=IO_READ},
        {.addr=0x6eb7, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_011B) {
    const struct CPU_State initial_cpu = {.pc=0x152d, .a=0x36, .x=0x24, .y=0xc1, .sp=0x14, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x152d, .value=0xf0}, {.addr=0x152e, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x159a, .a=0x36, .x=0x24, .y=0xc1, .sp=0x14, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x152d, .value=0xf0}, {.addr=0x152e, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x152d, .value=0xf0, .type=IO_READ},
        {.addr=0x152e, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_011C) {
    const struct CPU_State initial_cpu = {.pc=0x2a22, .a=0x35, .x=0x0f, .y=0xfc, .sp=0xd2, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2a22, .value=0xf0}, {.addr=0x2a23, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x2a24, .a=0x35, .x=0x0f, .y=0xfc, .sp=0xd2, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2a22, .value=0xf0}, {.addr=0x2a23, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x2a22, .value=0xf0, .type=IO_READ},
        {.addr=0x2a23, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_011D) {
    const struct CPU_State initial_cpu = {.pc=0x3b20, .a=0xcc, .x=0xf2, .y=0x38, .sp=0x9a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x3b20, .value=0xf0}, {.addr=0x3b21, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x3b07, .a=0xcc, .x=0xf2, .y=0x38, .sp=0x9a, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x3b20, .value=0xf0}, {.addr=0x3b21, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x3b20, .value=0xf0, .type=IO_READ},
        {.addr=0x3b21, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_011E) {
    const struct CPU_State initial_cpu = {.pc=0x0fac, .a=0x39, .x=0xc7, .y=0x30, .sp=0x6b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0fac, .value=0xf0}, {.addr=0x0fad, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x0f71, .a=0x39, .x=0xc7, .y=0x30, .sp=0x6b, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0fac, .value=0xf0}, {.addr=0x0fad, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x0fac, .value=0xf0, .type=IO_READ},
        {.addr=0x0fad, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_011F) {
    const struct CPU_State initial_cpu = {.pc=0x89ab, .a=0xd1, .x=0x78, .y=0xd3, .sp=0x09, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x89ab, .value=0xf0}, {.addr=0x89ac, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x89ad, .a=0xd1, .x=0x78, .y=0xd3, .sp=0x09, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x89ab, .value=0xf0}, {.addr=0x89ac, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x89ab, .value=0xf0, .type=IO_READ},
        {.addr=0x89ac, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0120) {
    const struct CPU_State initial_cpu = {.pc=0x4585, .a=0x36, .x=0x53, .y=0xd1, .sp=0x9b, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x4585, .value=0xf0}, {.addr=0x4586, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x452e, .a=0x36, .x=0x53, .y=0xd1, .sp=0x9b, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x4585, .value=0xf0}, {.addr=0x4586, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x4585, .value=0xf0, .type=IO_READ},
        {.addr=0x4586, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0121) {
    const struct CPU_State initial_cpu = {.pc=0xcb09, .a=0xff, .x=0x76, .y=0xd6, .sp=0xc0, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xcb09, .value=0xf0}, {.addr=0xcb0a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcae7, .a=0xff, .x=0x76, .y=0xd6, .sp=0xc0, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xcb09, .value=0xf0}, {.addr=0xcb0a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcb09, .value=0xf0, .type=IO_READ},
        {.addr=0xcb0a, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0122) {
    const struct CPU_State initial_cpu = {.pc=0x8f80, .a=0xe7, .x=0xc1, .y=0x36, .sp=0xf1, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x8f80, .value=0xf0}, {.addr=0x8f81, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x8f58, .a=0xe7, .x=0xc1, .y=0x36, .sp=0xf1, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x8f80, .value=0xf0}, {.addr=0x8f81, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x8f80, .value=0xf0, .type=IO_READ},
        {.addr=0x8f81, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0123) {
    const struct CPU_State initial_cpu = {.pc=0xb89d, .a=0x44, .x=0xc5, .y=0x3f, .sp=0x46, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xb89d, .value=0xf0}, {.addr=0xb89e, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xb89f, .a=0x44, .x=0xc5, .y=0x3f, .sp=0x46, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb89d, .value=0xf0}, {.addr=0xb89e, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xb89d, .value=0xf0, .type=IO_READ},
        {.addr=0xb89e, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0124) {
    const struct CPU_State initial_cpu = {.pc=0x3c7e, .a=0x59, .x=0x33, .y=0xb6, .sp=0xb8, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x3c7e, .value=0xf0}, {.addr=0x3c7f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3c80, .a=0x59, .x=0x33, .y=0xb6, .sp=0xb8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x3c7e, .value=0xf0}, {.addr=0x3c7f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3c7e, .value=0xf0, .type=IO_READ},
        {.addr=0x3c7f, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0125) {
    const struct CPU_State initial_cpu = {.pc=0x87f4, .a=0x95, .x=0x2c, .y=0xb8, .sp=0x9d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x87f4, .value=0xf0}, {.addr=0x87f5, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x87d1, .a=0x95, .x=0x2c, .y=0xb8, .sp=0x9d, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x87f4, .value=0xf0}, {.addr=0x87f5, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x87f4, .value=0xf0, .type=IO_READ},
        {.addr=0x87f5, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0126) {
    const struct CPU_State initial_cpu = {.pc=0x085c, .a=0x15, .x=0xa2, .y=0x96, .sp=0x82, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x085c, .value=0xf0}, {.addr=0x085d, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x08a3, .a=0x15, .x=0xa2, .y=0x96, .sp=0x82, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x085c, .value=0xf0}, {.addr=0x085d, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x085c, .value=0xf0, .type=IO_READ},
        {.addr=0x085d, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0127) {
    const struct CPU_State initial_cpu = {.pc=0x2230, .a=0xed, .x=0x2c, .y=0xd6, .sp=0x07, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x2230, .value=0xf0}, {.addr=0x2231, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x227a, .a=0xed, .x=0x2c, .y=0xd6, .sp=0x07, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x2230, .value=0xf0}, {.addr=0x2231, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x2230, .value=0xf0, .type=IO_READ},
        {.addr=0x2231, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0128) {
    const struct CPU_State initial_cpu = {.pc=0xbf8e, .a=0x88, .x=0x02, .y=0x9c, .sp=0xaf, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xbf8e, .value=0xf0}, {.addr=0xbf8f, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xbf95, .a=0x88, .x=0x02, .y=0x9c, .sp=0xaf, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xbf8e, .value=0xf0}, {.addr=0xbf8f, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xbf8e, .value=0xf0, .type=IO_READ},
        {.addr=0xbf8f, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0129) {
    const struct CPU_State initial_cpu = {.pc=0x3636, .a=0xdc, .x=0xb3, .y=0x7f, .sp=0x18, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x3636, .value=0xf0}, {.addr=0x3637, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x35c3, .a=0xdc, .x=0xb3, .y=0x7f, .sp=0x18, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x3636, .value=0xf0}, {.addr=0x3637, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x3636, .value=0xf0, .type=IO_READ},
        {.addr=0x3637, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_012A) {
    const struct CPU_State initial_cpu = {.pc=0xf4e5, .a=0x51, .x=0x53, .y=0x28, .sp=0x42, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e5, .value=0xf0}, {.addr=0xf4e6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf4e7, .a=0x51, .x=0x53, .y=0x28, .sp=0x42, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf4e5, .value=0xf0}, {.addr=0xf4e6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf4e5, .value=0xf0, .type=IO_READ},
        {.addr=0xf4e6, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_012B) {
    const struct CPU_State initial_cpu = {.pc=0x32a3, .a=0x08, .x=0x80, .y=0x2a, .sp=0xc6, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x32a3, .value=0xf0}, {.addr=0x32a4, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x32a5, .a=0x08, .x=0x80, .y=0x2a, .sp=0xc6, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x32a3, .value=0xf0}, {.addr=0x32a4, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x32a3, .value=0xf0, .type=IO_READ},
        {.addr=0x32a4, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_012C) {
    const struct CPU_State initial_cpu = {.pc=0xc72e, .a=0xfc, .x=0x01, .y=0xd3, .sp=0x9b, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xc72e, .value=0xf0}, {.addr=0xc72f, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xc6ff, .a=0xfc, .x=0x01, .y=0xd3, .sp=0x9b, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xc72e, .value=0xf0}, {.addr=0xc72f, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xc72e, .value=0xf0, .type=IO_READ},
        {.addr=0xc72f, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_012D) {
    const struct CPU_State initial_cpu = {.pc=0x618a, .a=0x3d, .x=0xac, .y=0x13, .sp=0x17, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x618a, .value=0xf0}, {.addr=0x618b, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x618c, .a=0x3d, .x=0xac, .y=0x13, .sp=0x17, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x618a, .value=0xf0}, {.addr=0x618b, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x618a, .value=0xf0, .type=IO_READ},
        {.addr=0x618b, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_012E) {
    const struct CPU_State initial_cpu = {.pc=0xbc0c, .a=0x71, .x=0x11, .y=0xa5, .sp=0x92, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xbc0c, .value=0xf0}, {.addr=0xbc0d, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xbbe4, .a=0x71, .x=0x11, .y=0xa5, .sp=0x92, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xbc0c, .value=0xf0}, {.addr=0xbc0d, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xbc0c, .value=0xf0, .type=IO_READ},
        {.addr=0xbc0d, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_012F) {
    const struct CPU_State initial_cpu = {.pc=0xef03, .a=0xbe, .x=0x05, .y=0x61, .sp=0x0e, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xef03, .value=0xf0}, {.addr=0xef04, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xef4c, .a=0xbe, .x=0x05, .y=0x61, .sp=0x0e, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xef03, .value=0xf0}, {.addr=0xef04, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xef03, .value=0xf0, .type=IO_READ},
        {.addr=0xef04, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0130) {
    const struct CPU_State initial_cpu = {.pc=0xad92, .a=0xac, .x=0xd6, .y=0x03, .sp=0x89, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xad92, .value=0xf0}, {.addr=0xad93, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xad94, .a=0xac, .x=0xd6, .y=0x03, .sp=0x89, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xad92, .value=0xf0}, {.addr=0xad93, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xad92, .value=0xf0, .type=IO_READ},
        {.addr=0xad93, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0131) {
    const struct CPU_State initial_cpu = {.pc=0x551d, .a=0xe8, .x=0x32, .y=0xb2, .sp=0x89, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x551d, .value=0xf0}, {.addr=0x551e, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x54f7, .a=0xe8, .x=0x32, .y=0xb2, .sp=0x89, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x551d, .value=0xf0}, {.addr=0x551e, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x551d, .value=0xf0, .type=IO_READ},
        {.addr=0x551e, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0132) {
    const struct CPU_State initial_cpu = {.pc=0x361b, .a=0x04, .x=0x1e, .y=0x6d, .sp=0x0c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x361b, .value=0xf0}, {.addr=0x361c, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x365e, .a=0x04, .x=0x1e, .y=0x6d, .sp=0x0c, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x361b, .value=0xf0}, {.addr=0x361c, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x361b, .value=0xf0, .type=IO_READ},
        {.addr=0x361c, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0133) {
    const struct CPU_State initial_cpu = {.pc=0x7c94, .a=0xa1, .x=0xde, .y=0x83, .sp=0x19, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x7c94, .value=0xf0}, {.addr=0x7c95, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x7c96, .a=0xa1, .x=0xde, .y=0x83, .sp=0x19, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7c94, .value=0xf0}, {.addr=0x7c95, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x7c94, .value=0xf0, .type=IO_READ},
        {.addr=0x7c95, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0134) {
    const struct CPU_State initial_cpu = {.pc=0xd14a, .a=0x02, .x=0xf7, .y=0x34, .sp=0x4e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xd14a, .value=0xf0}, {.addr=0xd14b, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xd1af, .a=0x02, .x=0xf7, .y=0x34, .sp=0x4e, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xd14a, .value=0xf0}, {.addr=0xd14b, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xd14a, .value=0xf0, .type=IO_READ},
        {.addr=0xd14b, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0135) {
    const struct CPU_State initial_cpu = {.pc=0x0e45, .a=0xae, .x=0xba, .y=0x85, .sp=0x10, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0e45, .value=0xf0}, {.addr=0x0e46, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x0e47, .a=0xae, .x=0xba, .y=0x85, .sp=0x10, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0e45, .value=0xf0}, {.addr=0x0e46, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x0e45, .value=0xf0, .type=IO_READ},
        {.addr=0x0e46, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0136) {
    const struct CPU_State initial_cpu = {.pc=0x2f3f, .a=0xa4, .x=0xc2, .y=0xe6, .sp=0x34, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x2f3f, .value=0xf0}, {.addr=0x2f40, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x2f41, .a=0xa4, .x=0xc2, .y=0xe6, .sp=0x34, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x2f3f, .value=0xf0}, {.addr=0x2f40, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x2f3f, .value=0xf0, .type=IO_READ},
        {.addr=0x2f40, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0137) {
    const struct CPU_State initial_cpu = {.pc=0x7411, .a=0x77, .x=0x55, .y=0x5f, .sp=0x94, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x7411, .value=0xf0}, {.addr=0x7412, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x7413, .a=0x77, .x=0x55, .y=0x5f, .sp=0x94, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7411, .value=0xf0}, {.addr=0x7412, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x7411, .value=0xf0, .type=IO_READ},
        {.addr=0x7412, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0138) {
    const struct CPU_State initial_cpu = {.pc=0xe41a, .a=0x66, .x=0xe1, .y=0x9d, .sp=0x43, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xe41a, .value=0xf0}, {.addr=0xe41b, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xe3c6, .a=0x66, .x=0xe1, .y=0x9d, .sp=0x43, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xe41a, .value=0xf0}, {.addr=0xe41b, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xe41a, .value=0xf0, .type=IO_READ},
        {.addr=0xe41b, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0139) {
    const struct CPU_State initial_cpu = {.pc=0xb863, .a=0xc9, .x=0x73, .y=0x61, .sp=0x74, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb863, .value=0xf0}, {.addr=0xb864, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xb85e, .a=0xc9, .x=0x73, .y=0x61, .sp=0x74, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xb863, .value=0xf0}, {.addr=0xb864, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xb863, .value=0xf0, .type=IO_READ},
        {.addr=0xb864, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_013A) {
    const struct CPU_State initial_cpu = {.pc=0x84ef, .a=0x8f, .x=0xde, .y=0x1b, .sp=0xad, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x84ef, .value=0xf0}, {.addr=0x84f0, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x84fb, .a=0x8f, .x=0xde, .y=0x1b, .sp=0xad, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x84ef, .value=0xf0}, {.addr=0x84f0, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x84ef, .value=0xf0, .type=IO_READ},
        {.addr=0x84f0, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_013B) {
    const struct CPU_State initial_cpu = {.pc=0x43fa, .a=0xff, .x=0x59, .y=0x4a, .sp=0x81, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x43fa, .value=0xf0}, {.addr=0x43fb, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x4447, .a=0xff, .x=0x59, .y=0x4a, .sp=0x81, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x43fa, .value=0xf0}, {.addr=0x43fb, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x43fa, .value=0xf0, .type=IO_READ},
        {.addr=0x43fb, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_013C) {
    const struct CPU_State initial_cpu = {.pc=0x71d6, .a=0x93, .x=0xa0, .y=0x49, .sp=0xf5, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x71d6, .value=0xf0}, {.addr=0x71d7, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x71d8, .a=0x93, .x=0xa0, .y=0x49, .sp=0xf5, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x71d6, .value=0xf0}, {.addr=0x71d7, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x71d6, .value=0xf0, .type=IO_READ},
        {.addr=0x71d7, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_013D) {
    const struct CPU_State initial_cpu = {.pc=0xad2e, .a=0xb7, .x=0x53, .y=0x9f, .sp=0x44, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xad2e, .value=0xf0}, {.addr=0xad2f, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xad30, .a=0xb7, .x=0x53, .y=0x9f, .sp=0x44, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xad2e, .value=0xf0}, {.addr=0xad2f, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xad2e, .value=0xf0, .type=IO_READ},
        {.addr=0xad2f, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_013E) {
    const struct CPU_State initial_cpu = {.pc=0x0c6a, .a=0x38, .x=0xb2, .y=0x93, .sp=0x89, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0c6a, .value=0xf0}, {.addr=0x0c6b, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x0c30, .a=0x38, .x=0xb2, .y=0x93, .sp=0x89, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0c6a, .value=0xf0}, {.addr=0x0c6b, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x0c6a, .value=0xf0, .type=IO_READ},
        {.addr=0x0c6b, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_013F) {
    const struct CPU_State initial_cpu = {.pc=0xd52c, .a=0x9b, .x=0xc8, .y=0xc7, .sp=0xa3, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xd52c, .value=0xf0}, {.addr=0xd52d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd52e, .a=0x9b, .x=0xc8, .y=0xc7, .sp=0xa3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd52c, .value=0xf0}, {.addr=0xd52d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd52c, .value=0xf0, .type=IO_READ},
        {.addr=0xd52d, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0140) {
    const struct CPU_State initial_cpu = {.pc=0x916e, .a=0xfb, .x=0xad, .y=0x76, .sp=0xce, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x916e, .value=0xf0}, {.addr=0x916f, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x9170, .a=0xfb, .x=0xad, .y=0x76, .sp=0xce, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x916e, .value=0xf0}, {.addr=0x916f, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x916e, .value=0xf0, .type=IO_READ},
        {.addr=0x916f, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0141) {
    const struct CPU_State initial_cpu = {.pc=0x8853, .a=0x56, .x=0xe1, .y=0x1f, .sp=0x0d, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x8853, .value=0xf0}, {.addr=0x8854, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x87eb, .a=0x56, .x=0xe1, .y=0x1f, .sp=0x0d, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x8853, .value=0xf0}, {.addr=0x8854, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x8853, .value=0xf0, .type=IO_READ},
        {.addr=0x8854, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0142) {
    const struct CPU_State initial_cpu = {.pc=0xfd6a, .a=0x2e, .x=0x5d, .y=0x6c, .sp=0x64, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xfd6a, .value=0xf0}, {.addr=0xfd6b, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xfddf, .a=0x2e, .x=0x5d, .y=0x6c, .sp=0x64, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xfd6a, .value=0xf0}, {.addr=0xfd6b, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xfd6a, .value=0xf0, .type=IO_READ},
        {.addr=0xfd6b, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0143) {
    const struct CPU_State initial_cpu = {.pc=0x2f56, .a=0x34, .x=0xd5, .y=0xc8, .sp=0x44, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x2f56, .value=0xf0}, {.addr=0x2f57, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x2fb2, .a=0x34, .x=0xd5, .y=0xc8, .sp=0x44, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x2f56, .value=0xf0}, {.addr=0x2f57, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x2f56, .value=0xf0, .type=IO_READ},
        {.addr=0x2f57, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0144) {
    const struct CPU_State initial_cpu = {.pc=0x4e03, .a=0xba, .x=0x8c, .y=0xad, .sp=0xad, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x4e03, .value=0xf0}, {.addr=0x4e04, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x4e05, .a=0xba, .x=0x8c, .y=0xad, .sp=0xad, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x4e03, .value=0xf0}, {.addr=0x4e04, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x4e03, .value=0xf0, .type=IO_READ},
        {.addr=0x4e04, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0145) {
    const struct CPU_State initial_cpu = {.pc=0x084f, .a=0x81, .x=0x9b, .y=0x68, .sp=0x0f, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x084f, .value=0xf0}, {.addr=0x0850, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0851, .a=0x81, .x=0x9b, .y=0x68, .sp=0x0f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x084f, .value=0xf0}, {.addr=0x0850, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x084f, .value=0xf0, .type=IO_READ},
        {.addr=0x0850, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0146) {
    const struct CPU_State initial_cpu = {.pc=0xea22, .a=0x8d, .x=0x46, .y=0xfd, .sp=0x1e, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xea22, .value=0xf0}, {.addr=0xea23, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xe9fb, .a=0x8d, .x=0x46, .y=0xfd, .sp=0x1e, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xea22, .value=0xf0}, {.addr=0xea23, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xea22, .value=0xf0, .type=IO_READ},
        {.addr=0xea23, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0147) {
    const struct CPU_State initial_cpu = {.pc=0x68f6, .a=0xd7, .x=0xd4, .y=0x2c, .sp=0xcd, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x68f6, .value=0xf0}, {.addr=0x68f7, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x6961, .a=0xd7, .x=0xd4, .y=0x2c, .sp=0xcd, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x68f6, .value=0xf0}, {.addr=0x68f7, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x68f6, .value=0xf0, .type=IO_READ},
        {.addr=0x68f7, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0148) {
    const struct CPU_State initial_cpu = {.pc=0xb0b5, .a=0x56, .x=0xab, .y=0x54, .sp=0x78, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb0b5, .value=0xf0}, {.addr=0xb0b6, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xb0a1, .a=0x56, .x=0xab, .y=0x54, .sp=0x78, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xb0b5, .value=0xf0}, {.addr=0xb0b6, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xb0b5, .value=0xf0, .type=IO_READ},
        {.addr=0xb0b6, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0149) {
    const struct CPU_State initial_cpu = {.pc=0x8fd9, .a=0x93, .x=0xb2, .y=0xd9, .sp=0xa5, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x8fd9, .value=0xf0}, {.addr=0x8fda, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8ff7, .a=0x93, .x=0xb2, .y=0xd9, .sp=0xa5, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x8fd9, .value=0xf0}, {.addr=0x8fda, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8fd9, .value=0xf0, .type=IO_READ},
        {.addr=0x8fda, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_014A) {
    const struct CPU_State initial_cpu = {.pc=0xe1b7, .a=0xf0, .x=0x6b, .y=0x67, .sp=0x65, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xe1b7, .value=0xf0}, {.addr=0xe1b8, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xe149, .a=0xf0, .x=0x6b, .y=0x67, .sp=0x65, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xe1b7, .value=0xf0}, {.addr=0xe1b8, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xe1b7, .value=0xf0, .type=IO_READ},
        {.addr=0xe1b8, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_014B) {
    const struct CPU_State initial_cpu = {.pc=0xb1e7, .a=0xb7, .x=0xca, .y=0x97, .sp=0x68, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xb1e7, .value=0xf0}, {.addr=0xb1e8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb265, .a=0xb7, .x=0xca, .y=0x97, .sp=0x68, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xb1e7, .value=0xf0}, {.addr=0xb1e8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb1e7, .value=0xf0, .type=IO_READ},
        {.addr=0xb1e8, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_014C) {
    const struct CPU_State initial_cpu = {.pc=0xf29f, .a=0xa1, .x=0x0c, .y=0xe3, .sp=0x93, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xf29f, .value=0xf0}, {.addr=0xf2a0, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xf2a1, .a=0xa1, .x=0x0c, .y=0xe3, .sp=0x93, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf29f, .value=0xf0}, {.addr=0xf2a0, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xf29f, .value=0xf0, .type=IO_READ},
        {.addr=0xf2a0, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_014D) {
    const struct CPU_State initial_cpu = {.pc=0x98ee, .a=0x3c, .x=0x44, .y=0xdc, .sp=0xcd, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x98ee, .value=0xf0}, {.addr=0x98ef, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x98e5, .a=0x3c, .x=0x44, .y=0xdc, .sp=0xcd, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x98ee, .value=0xf0}, {.addr=0x98ef, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x98ee, .value=0xf0, .type=IO_READ},
        {.addr=0x98ef, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_014E) {
    const struct CPU_State initial_cpu = {.pc=0xecee, .a=0xde, .x=0x8c, .y=0x82, .sp=0xbf, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xecee, .value=0xf0}, {.addr=0xecef, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xecf0, .a=0xde, .x=0x8c, .y=0x82, .sp=0xbf, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xecee, .value=0xf0}, {.addr=0xecef, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xecee, .value=0xf0, .type=IO_READ},
        {.addr=0xecef, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_014F) {
    const struct CPU_State initial_cpu = {.pc=0x2fc0, .a=0x14, .x=0xe9, .y=0x11, .sp=0x1d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x2fc0, .value=0xf0}, {.addr=0x2fc1, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x2fc2, .a=0x14, .x=0xe9, .y=0x11, .sp=0x1d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x2fc0, .value=0xf0}, {.addr=0x2fc1, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x2fc0, .value=0xf0, .type=IO_READ},
        {.addr=0x2fc1, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0150) {
    const struct CPU_State initial_cpu = {.pc=0x2367, .a=0xe8, .x=0x2c, .y=0xa7, .sp=0xe6, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2367, .value=0xf0}, {.addr=0x2368, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x2369, .a=0xe8, .x=0x2c, .y=0xa7, .sp=0xe6, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2367, .value=0xf0}, {.addr=0x2368, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x2367, .value=0xf0, .type=IO_READ},
        {.addr=0x2368, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0151) {
    const struct CPU_State initial_cpu = {.pc=0x5a88, .a=0xb5, .x=0xe1, .y=0x90, .sp=0x94, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x5a88, .value=0xf0}, {.addr=0x5a89, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x5a8a, .a=0xb5, .x=0xe1, .y=0x90, .sp=0x94, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5a88, .value=0xf0}, {.addr=0x5a89, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x5a88, .value=0xf0, .type=IO_READ},
        {.addr=0x5a89, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0152) {
    const struct CPU_State initial_cpu = {.pc=0xc9b5, .a=0x2d, .x=0xdc, .y=0x71, .sp=0x79, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc9b5, .value=0xf0}, {.addr=0xc9b6, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xc9b7, .a=0x2d, .x=0xdc, .y=0x71, .sp=0x79, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc9b5, .value=0xf0}, {.addr=0xc9b6, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xc9b5, .value=0xf0, .type=IO_READ},
        {.addr=0xc9b6, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0153) {
    const struct CPU_State initial_cpu = {.pc=0x6897, .a=0x17, .x=0x59, .y=0xa7, .sp=0x0a, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x6897, .value=0xf0}, {.addr=0x6898, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x6898, .a=0x17, .x=0x59, .y=0xa7, .sp=0x0a, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x6897, .value=0xf0}, {.addr=0x6898, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x6897, .value=0xf0, .type=IO_READ},
        {.addr=0x6898, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0154) {
    const struct CPU_State initial_cpu = {.pc=0x1db0, .a=0xca, .x=0x8b, .y=0xd0, .sp=0x0f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x1db0, .value=0xf0}, {.addr=0x1db1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1e2f, .a=0xca, .x=0x8b, .y=0xd0, .sp=0x0f, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x1db0, .value=0xf0}, {.addr=0x1db1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1db0, .value=0xf0, .type=IO_READ},
        {.addr=0x1db1, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0155) {
    const struct CPU_State initial_cpu = {.pc=0x337c, .a=0x1e, .x=0x00, .y=0x3d, .sp=0x7e, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x337c, .value=0xf0}, {.addr=0x337d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x33db, .a=0x1e, .x=0x00, .y=0x3d, .sp=0x7e, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x337c, .value=0xf0}, {.addr=0x337d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x337c, .value=0xf0, .type=IO_READ},
        {.addr=0x337d, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0156) {
    const struct CPU_State initial_cpu = {.pc=0xc90e, .a=0x3e, .x=0xad, .y=0x98, .sp=0x8d, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xc90e, .value=0xf0}, {.addr=0xc90f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc8bf, .a=0x3e, .x=0xad, .y=0x98, .sp=0x8d, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xc90e, .value=0xf0}, {.addr=0xc90f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc90e, .value=0xf0, .type=IO_READ},
        {.addr=0xc90f, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0157) {
    const struct CPU_State initial_cpu = {.pc=0x0a15, .a=0x39, .x=0xaf, .y=0x8b, .sp=0xde, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0a15, .value=0xf0}, {.addr=0x0a16, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x0a8f, .a=0x39, .x=0xaf, .y=0x8b, .sp=0xde, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0a15, .value=0xf0}, {.addr=0x0a16, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x0a15, .value=0xf0, .type=IO_READ},
        {.addr=0x0a16, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0158) {
    const struct CPU_State initial_cpu = {.pc=0x0611, .a=0x60, .x=0xe8, .y=0xd6, .sp=0xd7, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0611, .value=0xf0}, {.addr=0x0612, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0613, .a=0x60, .x=0xe8, .y=0xd6, .sp=0xd7, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0611, .value=0xf0}, {.addr=0x0612, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0611, .value=0xf0, .type=IO_READ},
        {.addr=0x0612, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0159) {
    const struct CPU_State initial_cpu = {.pc=0x768c, .a=0x9b, .x=0x92, .y=0x7d, .sp=0xb6, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x768c, .value=0xf0}, {.addr=0x768d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x764a, .a=0x9b, .x=0x92, .y=0x7d, .sp=0xb6, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x768c, .value=0xf0}, {.addr=0x768d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x768c, .value=0xf0, .type=IO_READ},
        {.addr=0x768d, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_015A) {
    const struct CPU_State initial_cpu = {.pc=0x57ee, .a=0x36, .x=0x74, .y=0xfd, .sp=0x89, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x57ee, .value=0xf0}, {.addr=0x57ef, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x57f0, .a=0x36, .x=0x74, .y=0xfd, .sp=0x89, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x57ee, .value=0xf0}, {.addr=0x57ef, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x57ee, .value=0xf0, .type=IO_READ},
        {.addr=0x57ef, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_015B) {
    const struct CPU_State initial_cpu = {.pc=0x9329, .a=0xf6, .x=0xdd, .y=0x18, .sp=0x58, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x9329, .value=0xf0}, {.addr=0x932a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x932b, .a=0xf6, .x=0xdd, .y=0x18, .sp=0x58, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9329, .value=0xf0}, {.addr=0x932a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9329, .value=0xf0, .type=IO_READ},
        {.addr=0x932a, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_015C) {
    const struct CPU_State initial_cpu = {.pc=0x2b42, .a=0x56, .x=0x28, .y=0xe4, .sp=0x94, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x2b42, .value=0xf0}, {.addr=0x2b43, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x2b44, .a=0x56, .x=0x28, .y=0xe4, .sp=0x94, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x2b42, .value=0xf0}, {.addr=0x2b43, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x2b42, .value=0xf0, .type=IO_READ},
        {.addr=0x2b43, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_015D) {
    const struct CPU_State initial_cpu = {.pc=0x4ca1, .a=0xac, .x=0xf8, .y=0x21, .sp=0xac, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x4ca1, .value=0xf0}, {.addr=0x4ca2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4ce0, .a=0xac, .x=0xf8, .y=0x21, .sp=0xac, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x4ca1, .value=0xf0}, {.addr=0x4ca2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4ca1, .value=0xf0, .type=IO_READ},
        {.addr=0x4ca2, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_015E) {
    const struct CPU_State initial_cpu = {.pc=0x758f, .a=0x29, .x=0xdb, .y=0x39, .sp=0x25, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x758f, .value=0xf0}, {.addr=0x7590, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x75cb, .a=0x29, .x=0xdb, .y=0x39, .sp=0x25, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x758f, .value=0xf0}, {.addr=0x7590, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x758f, .value=0xf0, .type=IO_READ},
        {.addr=0x7590, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_015F) {
    const struct CPU_State initial_cpu = {.pc=0x6392, .a=0x06, .x=0x29, .y=0x9e, .sp=0x42, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x6392, .value=0xf0}, {.addr=0x6393, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x63cd, .a=0x06, .x=0x29, .y=0x9e, .sp=0x42, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x6392, .value=0xf0}, {.addr=0x6393, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x6392, .value=0xf0, .type=IO_READ},
        {.addr=0x6393, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0160) {
    const struct CPU_State initial_cpu = {.pc=0xcf9a, .a=0xfe, .x=0x84, .y=0xa8, .sp=0x67, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xcf9a, .value=0xf0}, {.addr=0xcf9b, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xcf9c, .a=0xfe, .x=0x84, .y=0xa8, .sp=0x67, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xcf9a, .value=0xf0}, {.addr=0xcf9b, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xcf9a, .value=0xf0, .type=IO_READ},
        {.addr=0xcf9b, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0161) {
    const struct CPU_State initial_cpu = {.pc=0xfbf7, .a=0x3b, .x=0xc4, .y=0xae, .sp=0xe3, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xfbf7, .value=0xf0}, {.addr=0xfbf8, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xfbf9, .a=0x3b, .x=0xc4, .y=0xae, .sp=0xe3, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xfbf7, .value=0xf0}, {.addr=0xfbf8, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xfbf7, .value=0xf0, .type=IO_READ},
        {.addr=0xfbf8, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0162) {
    const struct CPU_State initial_cpu = {.pc=0xc3f6, .a=0x96, .x=0x43, .y=0xe1, .sp=0xd3, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xc3f6, .value=0xf0}, {.addr=0xc3f7, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xc3e4, .a=0x96, .x=0x43, .y=0xe1, .sp=0xd3, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xc3f6, .value=0xf0}, {.addr=0xc3f7, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xc3f6, .value=0xf0, .type=IO_READ},
        {.addr=0xc3f7, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0163) {
    const struct CPU_State initial_cpu = {.pc=0x2d57, .a=0xdb, .x=0x63, .y=0x4e, .sp=0xba, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2d57, .value=0xf0}, {.addr=0x2d58, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x2d59, .a=0xdb, .x=0x63, .y=0x4e, .sp=0xba, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2d57, .value=0xf0}, {.addr=0x2d58, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x2d57, .value=0xf0, .type=IO_READ},
        {.addr=0x2d58, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0164) {
    const struct CPU_State initial_cpu = {.pc=0xbedb, .a=0x9b, .x=0x2c, .y=0xcc, .sp=0x08, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xbedb, .value=0xf0}, {.addr=0xbedc, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xbf29, .a=0x9b, .x=0x2c, .y=0xcc, .sp=0x08, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xbedb, .value=0xf0}, {.addr=0xbedc, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xbedb, .value=0xf0, .type=IO_READ},
        {.addr=0xbedc, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0165) {
    const struct CPU_State initial_cpu = {.pc=0xa9a7, .a=0x9f, .x=0xff, .y=0xd5, .sp=0xe2, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xa9a7, .value=0xf0}, {.addr=0xa9a8, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xa94a, .a=0x9f, .x=0xff, .y=0xd5, .sp=0xe2, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xa9a7, .value=0xf0}, {.addr=0xa9a8, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xa9a7, .value=0xf0, .type=IO_READ},
        {.addr=0xa9a8, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0166) {
    const struct CPU_State initial_cpu = {.pc=0xfe98, .a=0x88, .x=0xde, .y=0xb8, .sp=0x13, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xfe98, .value=0xf0}, {.addr=0xfe99, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xfe9a, .a=0x88, .x=0xde, .y=0xb8, .sp=0x13, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xfe98, .value=0xf0}, {.addr=0xfe99, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xfe98, .value=0xf0, .type=IO_READ},
        {.addr=0xfe99, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0167) {
    const struct CPU_State initial_cpu = {.pc=0xd618, .a=0xd7, .x=0x23, .y=0x16, .sp=0xd0, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xd618, .value=0xf0}, {.addr=0xd619, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xd61a, .a=0xd7, .x=0x23, .y=0x16, .sp=0xd0, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd618, .value=0xf0}, {.addr=0xd619, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xd618, .value=0xf0, .type=IO_READ},
        {.addr=0xd619, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0168) {
    const struct CPU_State initial_cpu = {.pc=0xe843, .a=0x29, .x=0x8d, .y=0x22, .sp=0x37, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xe843, .value=0xf0}, {.addr=0xe844, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xe8af, .a=0x29, .x=0x8d, .y=0x22, .sp=0x37, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xe843, .value=0xf0}, {.addr=0xe844, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xe843, .value=0xf0, .type=IO_READ},
        {.addr=0xe844, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0169) {
    const struct CPU_State initial_cpu = {.pc=0x9627, .a=0x89, .x=0x67, .y=0x2b, .sp=0xc9, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x9627, .value=0xf0}, {.addr=0x9628, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x967c, .a=0x89, .x=0x67, .y=0x2b, .sp=0xc9, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x9627, .value=0xf0}, {.addr=0x9628, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x9627, .value=0xf0, .type=IO_READ},
        {.addr=0x9628, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_016A) {
    const struct CPU_State initial_cpu = {.pc=0x5790, .a=0xf4, .x=0x3b, .y=0xb2, .sp=0x11, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x5790, .value=0xf0}, {.addr=0x5791, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x578f, .a=0xf4, .x=0x3b, .y=0xb2, .sp=0x11, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x5790, .value=0xf0}, {.addr=0x5791, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5790, .value=0xf0, .type=IO_READ},
        {.addr=0x5791, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_016B) {
    const struct CPU_State initial_cpu = {.pc=0xb4f2, .a=0xc9, .x=0x03, .y=0x0f, .sp=0x66, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f2, .value=0xf0}, {.addr=0xb4f3, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xb517, .a=0xc9, .x=0x03, .y=0x0f, .sp=0x66, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xb4f2, .value=0xf0}, {.addr=0xb4f3, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xb4f2, .value=0xf0, .type=IO_READ},
        {.addr=0xb4f3, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_016C) {
    const struct CPU_State initial_cpu = {.pc=0xbee4, .a=0x77, .x=0xa8, .y=0x67, .sp=0xc6, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xbee4, .value=0xf0}, {.addr=0xbee5, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xbf28, .a=0x77, .x=0xa8, .y=0x67, .sp=0xc6, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xbee4, .value=0xf0}, {.addr=0xbee5, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xbee4, .value=0xf0, .type=IO_READ},
        {.addr=0xbee5, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_016D) {
    const struct CPU_State initial_cpu = {.pc=0x7020, .a=0xfd, .x=0x03, .y=0x99, .sp=0xcc, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x7020, .value=0xf0}, {.addr=0x7021, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6fff, .a=0xfd, .x=0x03, .y=0x99, .sp=0xcc, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x7020, .value=0xf0}, {.addr=0x7021, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7020, .value=0xf0, .type=IO_READ},
        {.addr=0x7021, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_016E) {
    const struct CPU_State initial_cpu = {.pc=0x4539, .a=0xd2, .x=0x88, .y=0xa0, .sp=0xb8, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x4539, .value=0xf0}, {.addr=0x453a, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x453b, .a=0xd2, .x=0x88, .y=0xa0, .sp=0xb8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4539, .value=0xf0}, {.addr=0x453a, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x4539, .value=0xf0, .type=IO_READ},
        {.addr=0x453a, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_016F) {
    const struct CPU_State initial_cpu = {.pc=0x72aa, .a=0x60, .x=0x1a, .y=0xd5, .sp=0x53, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x72aa, .value=0xf0}, {.addr=0x72ab, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x731f, .a=0x60, .x=0x1a, .y=0xd5, .sp=0x53, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x72aa, .value=0xf0}, {.addr=0x72ab, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x72aa, .value=0xf0, .type=IO_READ},
        {.addr=0x72ab, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0170) {
    const struct CPU_State initial_cpu = {.pc=0x5e62, .a=0xa5, .x=0xe7, .y=0x8e, .sp=0xd2, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5e62, .value=0xf0}, {.addr=0x5e63, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x5e64, .a=0xa5, .x=0xe7, .y=0x8e, .sp=0xd2, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5e62, .value=0xf0}, {.addr=0x5e63, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x5e62, .value=0xf0, .type=IO_READ},
        {.addr=0x5e63, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0171) {
    const struct CPU_State initial_cpu = {.pc=0x4cfb, .a=0x0f, .x=0xda, .y=0x7a, .sp=0x30, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x4cfb, .value=0xf0}, {.addr=0x4cfc, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x4cfd, .a=0x0f, .x=0xda, .y=0x7a, .sp=0x30, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4cfb, .value=0xf0}, {.addr=0x4cfc, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x4cfb, .value=0xf0, .type=IO_READ},
        {.addr=0x4cfc, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0172) {
    const struct CPU_State initial_cpu = {.pc=0x9896, .a=0x6e, .x=0x7d, .y=0xcc, .sp=0xaa, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x9896, .value=0xf0}, {.addr=0x9897, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x9898, .a=0x6e, .x=0x7d, .y=0xcc, .sp=0xaa, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9896, .value=0xf0}, {.addr=0x9897, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x9896, .value=0xf0, .type=IO_READ},
        {.addr=0x9897, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0173) {
    const struct CPU_State initial_cpu = {.pc=0x324c, .a=0x15, .x=0xe5, .y=0xe4, .sp=0xdb, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x324c, .value=0xf0}, {.addr=0x324d, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x32bc, .a=0x15, .x=0xe5, .y=0xe4, .sp=0xdb, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x324c, .value=0xf0}, {.addr=0x324d, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x324c, .value=0xf0, .type=IO_READ},
        {.addr=0x324d, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0174) {
    const struct CPU_State initial_cpu = {.pc=0x19bc, .a=0x7b, .x=0xac, .y=0x83, .sp=0x58, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x19bc, .value=0xf0}, {.addr=0x19bd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x19de, .a=0x7b, .x=0xac, .y=0x83, .sp=0x58, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x19bc, .value=0xf0}, {.addr=0x19bd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x19bc, .value=0xf0, .type=IO_READ},
        {.addr=0x19bd, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0175) {
    const struct CPU_State initial_cpu = {.pc=0xc14e, .a=0x15, .x=0x31, .y=0xe6, .sp=0x39, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xc14e, .value=0xf0}, {.addr=0xc14f, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xc150, .a=0x15, .x=0x31, .y=0xe6, .sp=0x39, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc14e, .value=0xf0}, {.addr=0xc14f, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xc14e, .value=0xf0, .type=IO_READ},
        {.addr=0xc14f, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0176) {
    const struct CPU_State initial_cpu = {.pc=0x842d, .a=0x3b, .x=0x8b, .y=0xf5, .sp=0xd7, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x842d, .value=0xf0}, {.addr=0x842e, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x842f, .a=0x3b, .x=0x8b, .y=0xf5, .sp=0xd7, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x842d, .value=0xf0}, {.addr=0x842e, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x842d, .value=0xf0, .type=IO_READ},
        {.addr=0x842e, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0177) {
    const struct CPU_State initial_cpu = {.pc=0xe478, .a=0xbc, .x=0x16, .y=0x54, .sp=0xb4, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xe478, .value=0xf0}, {.addr=0xe479, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xe47a, .a=0xbc, .x=0x16, .y=0x54, .sp=0xb4, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xe478, .value=0xf0}, {.addr=0xe479, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xe478, .value=0xf0, .type=IO_READ},
        {.addr=0xe479, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0178) {
    const struct CPU_State initial_cpu = {.pc=0xf729, .a=0xfe, .x=0x09, .y=0x5a, .sp=0xd5, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xf729, .value=0xf0}, {.addr=0xf72a, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xf72b, .a=0xfe, .x=0x09, .y=0x5a, .sp=0xd5, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xf729, .value=0xf0}, {.addr=0xf72a, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xf729, .value=0xf0, .type=IO_READ},
        {.addr=0xf72a, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0179) {
    const struct CPU_State initial_cpu = {.pc=0xfa59, .a=0xcd, .x=0x1a, .y=0x00, .sp=0x9f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xfa59, .value=0xf0}, {.addr=0xfa5a, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xfa5b, .a=0xcd, .x=0x1a, .y=0x00, .sp=0x9f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xfa59, .value=0xf0}, {.addr=0xfa5a, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xfa59, .value=0xf0, .type=IO_READ},
        {.addr=0xfa5a, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_017A) {
    const struct CPU_State initial_cpu = {.pc=0x5f76, .a=0x8b, .x=0x5c, .y=0xd9, .sp=0xec, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x5f76, .value=0xf0}, {.addr=0x5f77, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5f78, .a=0x8b, .x=0x5c, .y=0xd9, .sp=0xec, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x5f76, .value=0xf0}, {.addr=0x5f77, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5f76, .value=0xf0, .type=IO_READ},
        {.addr=0x5f77, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_017B) {
    const struct CPU_State initial_cpu = {.pc=0x02ed, .a=0x9b, .x=0x27, .y=0x61, .sp=0xcb, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x02ed, .value=0xf0}, {.addr=0x02ee, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x030f, .a=0x9b, .x=0x27, .y=0x61, .sp=0xcb, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x02ed, .value=0xf0}, {.addr=0x02ee, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x02ed, .value=0xf0, .type=IO_READ},
        {.addr=0x02ee, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_017C) {
    const struct CPU_State initial_cpu = {.pc=0x20c6, .a=0xbc, .x=0x8b, .y=0x64, .sp=0x49, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x20c6, .value=0xf0}, {.addr=0x20c7, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x2143, .a=0xbc, .x=0x8b, .y=0x64, .sp=0x49, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x20c6, .value=0xf0}, {.addr=0x20c7, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x20c6, .value=0xf0, .type=IO_READ},
        {.addr=0x20c7, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_017D) {
    const struct CPU_State initial_cpu = {.pc=0xccc8, .a=0x3d, .x=0xf6, .y=0x40, .sp=0x8b, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xccc8, .value=0xf0}, {.addr=0xccc9, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xccca, .a=0x3d, .x=0xf6, .y=0x40, .sp=0x8b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xccc8, .value=0xf0}, {.addr=0xccc9, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xccc8, .value=0xf0, .type=IO_READ},
        {.addr=0xccc9, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_017E) {
    const struct CPU_State initial_cpu = {.pc=0x09ef, .a=0xb9, .x=0x29, .y=0x08, .sp=0xb0, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x09ef, .value=0xf0}, {.addr=0x09f0, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x09f1, .a=0xb9, .x=0x29, .y=0x08, .sp=0xb0, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x09ef, .value=0xf0}, {.addr=0x09f0, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x09ef, .value=0xf0, .type=IO_READ},
        {.addr=0x09f0, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_017F) {
    const struct CPU_State initial_cpu = {.pc=0x81e2, .a=0x3a, .x=0x82, .y=0x9c, .sp=0xe2, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x81e2, .value=0xf0}, {.addr=0x81e3, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x8195, .a=0x3a, .x=0x82, .y=0x9c, .sp=0xe2, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x81e2, .value=0xf0}, {.addr=0x81e3, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x81e2, .value=0xf0, .type=IO_READ},
        {.addr=0x81e3, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0180) {
    const struct CPU_State initial_cpu = {.pc=0xa845, .a=0xb9, .x=0x56, .y=0x16, .sp=0x2b, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa845, .value=0xf0}, {.addr=0xa846, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xa889, .a=0xb9, .x=0x56, .y=0x16, .sp=0x2b, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xa845, .value=0xf0}, {.addr=0xa846, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xa845, .value=0xf0, .type=IO_READ},
        {.addr=0xa846, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0181) {
    const struct CPU_State initial_cpu = {.pc=0x4905, .a=0xb8, .x=0x71, .y=0x8f, .sp=0x3b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x4905, .value=0xf0}, {.addr=0x4906, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x491d, .a=0xb8, .x=0x71, .y=0x8f, .sp=0x3b, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x4905, .value=0xf0}, {.addr=0x4906, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x4905, .value=0xf0, .type=IO_READ},
        {.addr=0x4906, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0182) {
    const struct CPU_State initial_cpu = {.pc=0x8ced, .a=0x3a, .x=0x97, .y=0xfd, .sp=0xf1, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x8ced, .value=0xf0}, {.addr=0x8cee, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8cef, .a=0x3a, .x=0x97, .y=0xfd, .sp=0xf1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8ced, .value=0xf0}, {.addr=0x8cee, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8ced, .value=0xf0, .type=IO_READ},
        {.addr=0x8cee, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0183) {
    const struct CPU_State initial_cpu = {.pc=0x884c, .a=0xd9, .x=0xcb, .y=0x47, .sp=0x9a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x884c, .value=0xf0}, {.addr=0x884d, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x87e3, .a=0xd9, .x=0xcb, .y=0x47, .sp=0x9a, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x884c, .value=0xf0}, {.addr=0x884d, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x884c, .value=0xf0, .type=IO_READ},
        {.addr=0x884d, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0184) {
    const struct CPU_State initial_cpu = {.pc=0x7a60, .a=0xe8, .x=0x64, .y=0xc7, .sp=0x33, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x7a60, .value=0xf0}, {.addr=0x7a61, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x7abc, .a=0xe8, .x=0x64, .y=0xc7, .sp=0x33, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x7a60, .value=0xf0}, {.addr=0x7a61, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x7a60, .value=0xf0, .type=IO_READ},
        {.addr=0x7a61, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0185) {
    const struct CPU_State initial_cpu = {.pc=0x1b72, .a=0xb1, .x=0x07, .y=0xea, .sp=0x0a, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x1b72, .value=0xf0}, {.addr=0x1b73, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1b74, .a=0xb1, .x=0x07, .y=0xea, .sp=0x0a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1b72, .value=0xf0}, {.addr=0x1b73, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1b72, .value=0xf0, .type=IO_READ},
        {.addr=0x1b73, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0186) {
    const struct CPU_State initial_cpu = {.pc=0x34c4, .a=0x94, .x=0xe2, .y=0xc5, .sp=0xb8, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x34c4, .value=0xf0}, {.addr=0x34c5, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x3534, .a=0x94, .x=0xe2, .y=0xc5, .sp=0xb8, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x34c4, .value=0xf0}, {.addr=0x34c5, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x34c4, .value=0xf0, .type=IO_READ},
        {.addr=0x34c5, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0187) {
    const struct CPU_State initial_cpu = {.pc=0x3a5d, .a=0xa8, .x=0x11, .y=0x2d, .sp=0xe6, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x3a5d, .value=0xf0}, {.addr=0x3a5e, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x3ada, .a=0xa8, .x=0x11, .y=0x2d, .sp=0xe6, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x3a5d, .value=0xf0}, {.addr=0x3a5e, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x3a5d, .value=0xf0, .type=IO_READ},
        {.addr=0x3a5e, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0188) {
    const struct CPU_State initial_cpu = {.pc=0xff11, .a=0x94, .x=0x06, .y=0xc4, .sp=0xf6, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xff11, .value=0xf0}, {.addr=0xff12, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xff10, .a=0x94, .x=0x06, .y=0xc4, .sp=0xf6, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xff11, .value=0xf0}, {.addr=0xff12, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xff11, .value=0xf0, .type=IO_READ},
        {.addr=0xff12, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0189) {
    const struct CPU_State initial_cpu = {.pc=0x2a7a, .a=0x12, .x=0x8a, .y=0x03, .sp=0xe3, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x2a7a, .value=0xf0}, {.addr=0x2a7b, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x2a7c, .a=0x12, .x=0x8a, .y=0x03, .sp=0xe3, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x2a7a, .value=0xf0}, {.addr=0x2a7b, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x2a7a, .value=0xf0, .type=IO_READ},
        {.addr=0x2a7b, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_018A) {
    const struct CPU_State initial_cpu = {.pc=0xb53c, .a=0xb2, .x=0x4d, .y=0xcc, .sp=0x77, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xb53c, .value=0xf0}, {.addr=0xb53d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb59b, .a=0xb2, .x=0x4d, .y=0xcc, .sp=0x77, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xb53c, .value=0xf0}, {.addr=0xb53d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb53c, .value=0xf0, .type=IO_READ},
        {.addr=0xb53d, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_018B) {
    const struct CPU_State initial_cpu = {.pc=0xd24f, .a=0x3f, .x=0x96, .y=0x40, .sp=0xb1, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xd24f, .value=0xf0}, {.addr=0xd250, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xd29b, .a=0x3f, .x=0x96, .y=0x40, .sp=0xb1, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xd24f, .value=0xf0}, {.addr=0xd250, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xd24f, .value=0xf0, .type=IO_READ},
        {.addr=0xd250, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_018C) {
    const struct CPU_State initial_cpu = {.pc=0x6c98, .a=0xa6, .x=0xa7, .y=0x9b, .sp=0x3d, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x6c98, .value=0xf0}, {.addr=0x6c99, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x6c9a, .a=0xa6, .x=0xa7, .y=0x9b, .sp=0x3d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6c98, .value=0xf0}, {.addr=0x6c99, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x6c98, .value=0xf0, .type=IO_READ},
        {.addr=0x6c99, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_018D) {
    const struct CPU_State initial_cpu = {.pc=0x6b2d, .a=0xd5, .x=0xcd, .y=0x3d, .sp=0xf2, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x6b2d, .value=0xf0}, {.addr=0x6b2e, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x6b2f, .a=0xd5, .x=0xcd, .y=0x3d, .sp=0xf2, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6b2d, .value=0xf0}, {.addr=0x6b2e, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x6b2d, .value=0xf0, .type=IO_READ},
        {.addr=0x6b2e, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_018E) {
    const struct CPU_State initial_cpu = {.pc=0xb377, .a=0x59, .x=0xec, .y=0xb5, .sp=0x0a, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xb377, .value=0xf0}, {.addr=0xb378, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb386, .a=0x59, .x=0xec, .y=0xb5, .sp=0x0a, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xb377, .value=0xf0}, {.addr=0xb378, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb377, .value=0xf0, .type=IO_READ},
        {.addr=0xb378, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_018F) {
    const struct CPU_State initial_cpu = {.pc=0x45ad, .a=0x4d, .x=0xc2, .y=0xc1, .sp=0xc3, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x45ad, .value=0xf0}, {.addr=0x45ae, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x45af, .a=0x4d, .x=0xc2, .y=0xc1, .sp=0xc3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x45ad, .value=0xf0}, {.addr=0x45ae, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x45ad, .value=0xf0, .type=IO_READ},
        {.addr=0x45ae, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0190) {
    const struct CPU_State initial_cpu = {.pc=0x240b, .a=0xc1, .x=0x2b, .y=0x71, .sp=0x65, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x240b, .value=0xf0}, {.addr=0x240c, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x2463, .a=0xc1, .x=0x2b, .y=0x71, .sp=0x65, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x240b, .value=0xf0}, {.addr=0x240c, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x240b, .value=0xf0, .type=IO_READ},
        {.addr=0x240c, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0191) {
    const struct CPU_State initial_cpu = {.pc=0x060d, .a=0x3d, .x=0xbe, .y=0xb5, .sp=0x08, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x060d, .value=0xf0}, {.addr=0x060e, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x064e, .a=0x3d, .x=0xbe, .y=0xb5, .sp=0x08, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x060d, .value=0xf0}, {.addr=0x060e, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x060d, .value=0xf0, .type=IO_READ},
        {.addr=0x060e, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0192) {
    const struct CPU_State initial_cpu = {.pc=0x980e, .a=0x73, .x=0xa2, .y=0xd2, .sp=0xb3, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x980e, .value=0xf0}, {.addr=0x980f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9810, .a=0x73, .x=0xa2, .y=0xd2, .sp=0xb3, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x980e, .value=0xf0}, {.addr=0x980f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x980e, .value=0xf0, .type=IO_READ},
        {.addr=0x980f, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0193) {
    const struct CPU_State initial_cpu = {.pc=0xfad4, .a=0xb7, .x=0xd8, .y=0xf7, .sp=0x78, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xfad4, .value=0xf0}, {.addr=0xfad5, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xfad6, .a=0xb7, .x=0xd8, .y=0xf7, .sp=0x78, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfad4, .value=0xf0}, {.addr=0xfad5, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xfad4, .value=0xf0, .type=IO_READ},
        {.addr=0xfad5, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0194) {
    const struct CPU_State initial_cpu = {.pc=0xa277, .a=0x53, .x=0x97, .y=0xc1, .sp=0xd7, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xa277, .value=0xf0}, {.addr=0xa278, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xa28c, .a=0x53, .x=0x97, .y=0xc1, .sp=0xd7, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xa277, .value=0xf0}, {.addr=0xa278, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xa277, .value=0xf0, .type=IO_READ},
        {.addr=0xa278, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0195) {
    const struct CPU_State initial_cpu = {.pc=0x78f1, .a=0x15, .x=0x61, .y=0xdc, .sp=0x6b, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x78f1, .value=0xf0}, {.addr=0x78f2, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x7917, .a=0x15, .x=0x61, .y=0xdc, .sp=0x6b, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x78f1, .value=0xf0}, {.addr=0x78f2, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x78f1, .value=0xf0, .type=IO_READ},
        {.addr=0x78f2, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0196) {
    const struct CPU_State initial_cpu = {.pc=0x3069, .a=0x2a, .x=0x6b, .y=0xda, .sp=0xe0, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x3069, .value=0xf0}, {.addr=0x306a, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x308a, .a=0x2a, .x=0x6b, .y=0xda, .sp=0xe0, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x3069, .value=0xf0}, {.addr=0x306a, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x3069, .value=0xf0, .type=IO_READ},
        {.addr=0x306a, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0197) {
    const struct CPU_State initial_cpu = {.pc=0x5522, .a=0x02, .x=0x29, .y=0x45, .sp=0xa8, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x5522, .value=0xf0}, {.addr=0x5523, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5524, .a=0x02, .x=0x29, .y=0x45, .sp=0xa8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x5522, .value=0xf0}, {.addr=0x5523, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5522, .value=0xf0, .type=IO_READ},
        {.addr=0x5523, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0198) {
    const struct CPU_State initial_cpu = {.pc=0x2cf2, .a=0xd6, .x=0xa6, .y=0xa3, .sp=0x8a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x2cf2, .value=0xf0}, {.addr=0x2cf3, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x2d2b, .a=0xd6, .x=0xa6, .y=0xa3, .sp=0x8a, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x2cf2, .value=0xf0}, {.addr=0x2cf3, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x2cf2, .value=0xf0, .type=IO_READ},
        {.addr=0x2cf3, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0199) {
    const struct CPU_State initial_cpu = {.pc=0x6c8d, .a=0x6b, .x=0x19, .y=0x69, .sp=0x3c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x6c8d, .value=0xf0}, {.addr=0x6c8e, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x6c94, .a=0x6b, .x=0x19, .y=0x69, .sp=0x3c, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x6c8d, .value=0xf0}, {.addr=0x6c8e, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x6c8d, .value=0xf0, .type=IO_READ},
        {.addr=0x6c8e, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_019A) {
    const struct CPU_State initial_cpu = {.pc=0x1202, .a=0xed, .x=0x6e, .y=0x8d, .sp=0xa1, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x1202, .value=0xf0}, {.addr=0x1203, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x1204, .a=0xed, .x=0x6e, .y=0x8d, .sp=0xa1, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1202, .value=0xf0}, {.addr=0x1203, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x1202, .value=0xf0, .type=IO_READ},
        {.addr=0x1203, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_019B) {
    const struct CPU_State initial_cpu = {.pc=0x3e35, .a=0x7e, .x=0x52, .y=0x00, .sp=0x95, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x3e35, .value=0xf0}, {.addr=0x3e36, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x3e37, .a=0x7e, .x=0x52, .y=0x00, .sp=0x95, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x3e35, .value=0xf0}, {.addr=0x3e36, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x3e35, .value=0xf0, .type=IO_READ},
        {.addr=0x3e36, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_019C) {
    const struct CPU_State initial_cpu = {.pc=0xc52a, .a=0x50, .x=0xf8, .y=0xbc, .sp=0xb7, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xc52a, .value=0xf0}, {.addr=0xc52b, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xc52c, .a=0x50, .x=0xf8, .y=0xbc, .sp=0xb7, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xc52a, .value=0xf0}, {.addr=0xc52b, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xc52a, .value=0xf0, .type=IO_READ},
        {.addr=0xc52b, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_019D) {
    const struct CPU_State initial_cpu = {.pc=0x36fa, .a=0xf2, .x=0xca, .y=0x31, .sp=0x37, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x36fa, .value=0xf0}, {.addr=0x36fb, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x36cb, .a=0xf2, .x=0xca, .y=0x31, .sp=0x37, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x36fa, .value=0xf0}, {.addr=0x36fb, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x36fa, .value=0xf0, .type=IO_READ},
        {.addr=0x36fb, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_019E) {
    const struct CPU_State initial_cpu = {.pc=0x7931, .a=0xb9, .x=0xcf, .y=0x36, .sp=0x3f, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x7931, .value=0xf0}, {.addr=0x7932, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x78da, .a=0xb9, .x=0xcf, .y=0x36, .sp=0x3f, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x7931, .value=0xf0}, {.addr=0x7932, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x7931, .value=0xf0, .type=IO_READ},
        {.addr=0x7932, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_019F) {
    const struct CPU_State initial_cpu = {.pc=0x88e7, .a=0xa0, .x=0xd0, .y=0x19, .sp=0x74, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x88e7, .value=0xf0}, {.addr=0x88e8, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x88f4, .a=0xa0, .x=0xd0, .y=0x19, .sp=0x74, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x88e7, .value=0xf0}, {.addr=0x88e8, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x88e7, .value=0xf0, .type=IO_READ},
        {.addr=0x88e8, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x2157, .a=0x0f, .x=0x9c, .y=0x17, .sp=0x7c, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x2157, .value=0xf0}, {.addr=0x2158, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x2159, .a=0x0f, .x=0x9c, .y=0x17, .sp=0x7c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2157, .value=0xf0}, {.addr=0x2158, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x2157, .value=0xf0, .type=IO_READ},
        {.addr=0x2158, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x5dab, .a=0xfc, .x=0xec, .y=0xb0, .sp=0x79, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x5dab, .value=0xf0}, {.addr=0x5dac, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x5d9c, .a=0xfc, .x=0xec, .y=0xb0, .sp=0x79, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x5dab, .value=0xf0}, {.addr=0x5dac, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x5dab, .value=0xf0, .type=IO_READ},
        {.addr=0x5dac, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x76bc, .a=0x04, .x=0x76, .y=0x1a, .sp=0x10, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x76bc, .value=0xf0}, {.addr=0x76bd, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x76f8, .a=0x04, .x=0x76, .y=0x1a, .sp=0x10, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x76bc, .value=0xf0}, {.addr=0x76bd, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x76bc, .value=0xf0, .type=IO_READ},
        {.addr=0x76bd, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xc65f, .a=0xe2, .x=0xde, .y=0x59, .sp=0x05, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc65f, .value=0xf0}, {.addr=0xc660, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc65d, .a=0xe2, .x=0xde, .y=0x59, .sp=0x05, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xc65f, .value=0xf0}, {.addr=0xc660, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc65f, .value=0xf0, .type=IO_READ},
        {.addr=0xc660, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xd90e, .a=0xaf, .x=0x39, .y=0x30, .sp=0x40, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xd90e, .value=0xf0}, {.addr=0xd90f, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xd910, .a=0xaf, .x=0x39, .y=0x30, .sp=0x40, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd90e, .value=0xf0}, {.addr=0xd90f, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xd90e, .value=0xf0, .type=IO_READ},
        {.addr=0xd90f, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x3d44, .a=0x82, .x=0xa3, .y=0xe6, .sp=0xed, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x3d44, .value=0xf0}, {.addr=0x3d45, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x3d9d, .a=0x82, .x=0xa3, .y=0xe6, .sp=0xed, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x3d44, .value=0xf0}, {.addr=0x3d45, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x3d44, .value=0xf0, .type=IO_READ},
        {.addr=0x3d45, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x1000, .a=0xe6, .x=0xe2, .y=0xbe, .sp=0x76, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x1000, .value=0xf0}, {.addr=0x1001, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x104d, .a=0xe6, .x=0xe2, .y=0xbe, .sp=0x76, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x1000, .value=0xf0}, {.addr=0x1001, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x1000, .value=0xf0, .type=IO_READ},
        {.addr=0x1001, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x586e, .a=0xbc, .x=0x4b, .y=0x26, .sp=0x68, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x586e, .value=0xf0}, {.addr=0x586f, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x58b8, .a=0xbc, .x=0x4b, .y=0x26, .sp=0x68, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x586e, .value=0xf0}, {.addr=0x586f, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x586e, .value=0xf0, .type=IO_READ},
        {.addr=0x586f, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xb9f8, .a=0xf9, .x=0x57, .y=0x79, .sp=0x21, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xb9f8, .value=0xf0}, {.addr=0xb9f9, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xb9fa, .a=0xf9, .x=0x57, .y=0x79, .sp=0x21, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb9f8, .value=0xf0}, {.addr=0xb9f9, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xb9f8, .value=0xf0, .type=IO_READ},
        {.addr=0xb9f9, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xaa15, .a=0xdb, .x=0x69, .y=0xec, .sp=0x88, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xaa15, .value=0xf0}, {.addr=0xaa16, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xaa17, .a=0xdb, .x=0x69, .y=0xec, .sp=0x88, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xaa15, .value=0xf0}, {.addr=0xaa16, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xaa15, .value=0xf0, .type=IO_READ},
        {.addr=0xaa16, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x5160, .a=0x54, .x=0x82, .y=0x04, .sp=0x26, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x5160, .value=0xf0}, {.addr=0x5161, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x51b5, .a=0x54, .x=0x82, .y=0x04, .sp=0x26, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x5160, .value=0xf0}, {.addr=0x5161, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x5160, .value=0xf0, .type=IO_READ},
        {.addr=0x5161, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xb5d1, .a=0xf5, .x=0x66, .y=0x65, .sp=0x25, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xb5d1, .value=0xf0}, {.addr=0xb5d2, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xb622, .a=0xf5, .x=0x66, .y=0x65, .sp=0x25, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xb5d1, .value=0xf0}, {.addr=0xb5d2, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xb5d1, .value=0xf0, .type=IO_READ},
        {.addr=0xb5d2, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xdbcf, .a=0x28, .x=0xf1, .y=0xde, .sp=0x79, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xdbcf, .value=0xf0}, {.addr=0xdbd0, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xdbd1, .a=0x28, .x=0xf1, .y=0xde, .sp=0x79, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xdbcf, .value=0xf0}, {.addr=0xdbd0, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xdbcf, .value=0xf0, .type=IO_READ},
        {.addr=0xdbd0, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xe0e2, .a=0x93, .x=0x1d, .y=0xc3, .sp=0x17, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe0e2, .value=0xf0}, {.addr=0xe0e3, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xe0e4, .a=0x93, .x=0x1d, .y=0xc3, .sp=0x17, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe0e2, .value=0xf0}, {.addr=0xe0e3, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xe0e2, .value=0xf0, .type=IO_READ},
        {.addr=0xe0e3, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x6048, .a=0xeb, .x=0x70, .y=0xa5, .sp=0x36, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x6048, .value=0xf0}, {.addr=0x6049, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6097, .a=0xeb, .x=0x70, .y=0xa5, .sp=0x36, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x6048, .value=0xf0}, {.addr=0x6049, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6048, .value=0xf0, .type=IO_READ},
        {.addr=0x6049, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xdaf9, .a=0x91, .x=0x94, .y=0x75, .sp=0x64, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xdaf9, .value=0xf0}, {.addr=0xdafa, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xdafb, .a=0x91, .x=0x94, .y=0x75, .sp=0x64, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xdaf9, .value=0xf0}, {.addr=0xdafa, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xdaf9, .value=0xf0, .type=IO_READ},
        {.addr=0xdafa, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xd45c, .a=0x08, .x=0x57, .y=0x89, .sp=0x6a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xd45c, .value=0xf0}, {.addr=0xd45d, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xd4b3, .a=0x08, .x=0x57, .y=0x89, .sp=0x6a, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xd45c, .value=0xf0}, {.addr=0xd45d, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xd45c, .value=0xf0, .type=IO_READ},
        {.addr=0xd45d, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xad17, .a=0x4f, .x=0x6b, .y=0x2e, .sp=0x4f, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xad17, .value=0xf0}, {.addr=0xad18, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xad19, .a=0x4f, .x=0x6b, .y=0x2e, .sp=0x4f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xad17, .value=0xf0}, {.addr=0xad18, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xad17, .value=0xf0, .type=IO_READ},
        {.addr=0xad18, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x5e40, .a=0xe3, .x=0xca, .y=0xcd, .sp=0x27, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5e40, .value=0xf0}, {.addr=0x5e41, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x5dd1, .a=0xe3, .x=0xca, .y=0xcd, .sp=0x27, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x5e40, .value=0xf0}, {.addr=0x5e41, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x5e40, .value=0xf0, .type=IO_READ},
        {.addr=0x5e41, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xfcff, .a=0x7f, .x=0xd4, .y=0xcd, .sp=0xfb, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xfcff, .value=0xf0}, {.addr=0xfd00, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfd27, .a=0x7f, .x=0xd4, .y=0xcd, .sp=0xfb, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xfcff, .value=0xf0}, {.addr=0xfd00, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfcff, .value=0xf0, .type=IO_READ},
        {.addr=0xfd00, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x5fe1, .a=0x0d, .x=0xd8, .y=0x59, .sp=0x9b, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe1, .value=0xf0}, {.addr=0x5fe2, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x5fe3, .a=0x0d, .x=0xd8, .y=0x59, .sp=0x9b, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x5fe1, .value=0xf0}, {.addr=0x5fe2, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x5fe1, .value=0xf0, .type=IO_READ},
        {.addr=0x5fe2, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xcea7, .a=0x05, .x=0x07, .y=0x16, .sp=0x92, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xcea7, .value=0xf0}, {.addr=0xcea8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xcea9, .a=0x05, .x=0x07, .y=0x16, .sp=0x92, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xcea7, .value=0xf0}, {.addr=0xcea8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xcea7, .value=0xf0, .type=IO_READ},
        {.addr=0xcea8, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x099e, .a=0x50, .x=0x76, .y=0x0a, .sp=0x3f, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x099e, .value=0xf0}, {.addr=0x099f, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x09a0, .a=0x50, .x=0x76, .y=0x0a, .sp=0x3f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x099e, .value=0xf0}, {.addr=0x099f, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x099e, .value=0xf0, .type=IO_READ},
        {.addr=0x099f, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x5c62, .a=0xc2, .x=0xf5, .y=0x05, .sp=0x61, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x5c62, .value=0xf0}, {.addr=0x5c63, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5c64, .a=0xc2, .x=0xf5, .y=0x05, .sp=0x61, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x5c62, .value=0xf0}, {.addr=0x5c63, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5c62, .value=0xf0, .type=IO_READ},
        {.addr=0x5c63, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xb2e3, .a=0x12, .x=0xb0, .y=0x78, .sp=0x1a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xb2e3, .value=0xf0}, {.addr=0xb2e4, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xb2e5, .a=0x12, .x=0xb0, .y=0x78, .sp=0x1a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb2e3, .value=0xf0}, {.addr=0xb2e4, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xb2e3, .value=0xf0, .type=IO_READ},
        {.addr=0xb2e4, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xdf74, .a=0xdd, .x=0xe3, .y=0xfb, .sp=0xef, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xdf74, .value=0xf0}, {.addr=0xdf75, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xdf5a, .a=0xdd, .x=0xe3, .y=0xfb, .sp=0xef, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xdf74, .value=0xf0}, {.addr=0xdf75, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xdf74, .value=0xf0, .type=IO_READ},
        {.addr=0xdf75, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xc9e0, .a=0xc0, .x=0x45, .y=0xbb, .sp=0xfa, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xc9e0, .value=0xf0}, {.addr=0xc9e1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc9e2, .a=0xc0, .x=0x45, .y=0xbb, .sp=0xfa, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc9e0, .value=0xf0}, {.addr=0xc9e1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc9e0, .value=0xf0, .type=IO_READ},
        {.addr=0xc9e1, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x6dd4, .a=0xda, .x=0xe6, .y=0x11, .sp=0x6c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd4, .value=0xf0}, {.addr=0x6dd5, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x6e3b, .a=0xda, .x=0xe6, .y=0x11, .sp=0x6c, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x6dd4, .value=0xf0}, {.addr=0x6dd5, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x6dd4, .value=0xf0, .type=IO_READ},
        {.addr=0x6dd5, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xbf76, .a=0x77, .x=0x65, .y=0xc3, .sp=0xe1, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xbf76, .value=0xf0}, {.addr=0xbf77, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xbf78, .a=0x77, .x=0x65, .y=0xc3, .sp=0xe1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbf76, .value=0xf0}, {.addr=0xbf77, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xbf76, .value=0xf0, .type=IO_READ},
        {.addr=0xbf77, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x1084, .a=0x84, .x=0xb8, .y=0xd4, .sp=0x82, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x1084, .value=0xf0}, {.addr=0x1085, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x10c2, .a=0x84, .x=0xb8, .y=0xd4, .sp=0x82, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x1084, .value=0xf0}, {.addr=0x1085, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1084, .value=0xf0, .type=IO_READ},
        {.addr=0x1085, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x6bb6, .a=0xdd, .x=0xe0, .y=0x5f, .sp=0xae, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x6bb6, .value=0xf0}, {.addr=0x6bb7, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x6c31, .a=0xdd, .x=0xe0, .y=0x5f, .sp=0xae, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x6bb6, .value=0xf0}, {.addr=0x6bb7, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x6bb6, .value=0xf0, .type=IO_READ},
        {.addr=0x6bb7, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x0715, .a=0xd9, .x=0xf5, .y=0xca, .sp=0x60, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0715, .value=0xf0}, {.addr=0x0716, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x0717, .a=0xd9, .x=0xf5, .y=0xca, .sp=0x60, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0715, .value=0xf0}, {.addr=0x0716, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x0715, .value=0xf0, .type=IO_READ},
        {.addr=0x0716, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x852a, .a=0x1e, .x=0x79, .y=0x76, .sp=0xdb, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x852a, .value=0xf0}, {.addr=0x852b, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x852c, .a=0x1e, .x=0x79, .y=0x76, .sp=0xdb, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x852a, .value=0xf0}, {.addr=0x852b, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x852a, .value=0xf0, .type=IO_READ},
        {.addr=0x852b, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x81f4, .a=0x05, .x=0xd5, .y=0x18, .sp=0x55, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x81f4, .value=0xf0}, {.addr=0x81f5, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x81f6, .a=0x05, .x=0xd5, .y=0x18, .sp=0x55, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x81f4, .value=0xf0}, {.addr=0x81f5, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x81f4, .value=0xf0, .type=IO_READ},
        {.addr=0x81f5, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x2764, .a=0xf8, .x=0x29, .y=0x69, .sp=0xd7, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x2764, .value=0xf0}, {.addr=0x2765, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x2766, .a=0xf8, .x=0x29, .y=0x69, .sp=0xd7, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2764, .value=0xf0}, {.addr=0x2765, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x2764, .value=0xf0, .type=IO_READ},
        {.addr=0x2765, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x740d, .a=0xfb, .x=0xbc, .y=0xc9, .sp=0x7c, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x740d, .value=0xf0}, {.addr=0x740e, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x7410, .a=0xfb, .x=0xbc, .y=0xc9, .sp=0x7c, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x740d, .value=0xf0}, {.addr=0x740e, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x740d, .value=0xf0, .type=IO_READ},
        {.addr=0x740e, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xf45e, .a=0xa0, .x=0xa8, .y=0x15, .sp=0x89, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xf45e, .value=0xf0}, {.addr=0xf45f, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xf460, .a=0xa0, .x=0xa8, .y=0x15, .sp=0x89, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf45e, .value=0xf0}, {.addr=0xf45f, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xf45e, .value=0xf0, .type=IO_READ},
        {.addr=0xf45f, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x68ca, .a=0xa8, .x=0x5b, .y=0xc1, .sp=0x04, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x68ca, .value=0xf0}, {.addr=0x68cb, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x68f5, .a=0xa8, .x=0x5b, .y=0xc1, .sp=0x04, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x68ca, .value=0xf0}, {.addr=0x68cb, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x68ca, .value=0xf0, .type=IO_READ},
        {.addr=0x68cb, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x537f, .a=0x3f, .x=0x56, .y=0x16, .sp=0xdf, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x537f, .value=0xf0}, {.addr=0x5380, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x5352, .a=0x3f, .x=0x56, .y=0x16, .sp=0xdf, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x537f, .value=0xf0}, {.addr=0x5380, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x537f, .value=0xf0, .type=IO_READ},
        {.addr=0x5380, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x9f58, .a=0xa2, .x=0xb5, .y=0xe3, .sp=0x83, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x9f58, .value=0xf0}, {.addr=0x9f59, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x9f1c, .a=0xa2, .x=0xb5, .y=0xe3, .sp=0x83, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x9f58, .value=0xf0}, {.addr=0x9f59, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x9f58, .value=0xf0, .type=IO_READ},
        {.addr=0x9f59, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xfaa1, .a=0x52, .x=0x73, .y=0x65, .sp=0x89, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xfaa1, .value=0xf0}, {.addr=0xfaa2, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xfaa3, .a=0x52, .x=0x73, .y=0x65, .sp=0x89, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xfaa1, .value=0xf0}, {.addr=0xfaa2, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xfaa1, .value=0xf0, .type=IO_READ},
        {.addr=0xfaa2, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x20a2, .a=0x92, .x=0x71, .y=0x58, .sp=0xf0, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x20a2, .value=0xf0}, {.addr=0x20a3, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x20a4, .a=0x92, .x=0x71, .y=0x58, .sp=0xf0, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x20a2, .value=0xf0}, {.addr=0x20a3, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x20a2, .value=0xf0, .type=IO_READ},
        {.addr=0x20a3, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xf7b7, .a=0xdc, .x=0x15, .y=0x4d, .sp=0xc8, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xf7b7, .value=0xf0}, {.addr=0xf7b8, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xf74b, .a=0xdc, .x=0x15, .y=0x4d, .sp=0xc8, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xf7b7, .value=0xf0}, {.addr=0xf7b8, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xf7b7, .value=0xf0, .type=IO_READ},
        {.addr=0xf7b8, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xcf2f, .a=0x7d, .x=0x60, .y=0x88, .sp=0xb1, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xcf2f, .value=0xf0}, {.addr=0xcf30, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xcf0e, .a=0x7d, .x=0x60, .y=0x88, .sp=0xb1, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xcf2f, .value=0xf0}, {.addr=0xcf30, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xcf2f, .value=0xf0, .type=IO_READ},
        {.addr=0xcf30, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xa389, .a=0x91, .x=0x9c, .y=0x76, .sp=0x38, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xa389, .value=0xf0}, {.addr=0xa38a, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xa38b, .a=0x91, .x=0x9c, .y=0x76, .sp=0x38, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xa389, .value=0xf0}, {.addr=0xa38a, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xa389, .value=0xf0, .type=IO_READ},
        {.addr=0xa38a, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x326f, .a=0xd2, .x=0x8b, .y=0x56, .sp=0xe2, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x326f, .value=0xf0}, {.addr=0x3270, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x329f, .a=0xd2, .x=0x8b, .y=0x56, .sp=0xe2, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x326f, .value=0xf0}, {.addr=0x3270, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x326f, .value=0xf0, .type=IO_READ},
        {.addr=0x3270, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x4941, .a=0x21, .x=0x22, .y=0xe1, .sp=0x97, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x4941, .value=0xf0}, {.addr=0x4942, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4943, .a=0x21, .x=0x22, .y=0xe1, .sp=0x97, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4941, .value=0xf0}, {.addr=0x4942, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4941, .value=0xf0, .type=IO_READ},
        {.addr=0x4942, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x102c, .a=0x98, .x=0x59, .y=0xc4, .sp=0xe7, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x102c, .value=0xf0}, {.addr=0x102d, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x1032, .a=0x98, .x=0x59, .y=0xc4, .sp=0xe7, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x102c, .value=0xf0}, {.addr=0x102d, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x102c, .value=0xf0, .type=IO_READ},
        {.addr=0x102d, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xf5c1, .a=0x75, .x=0x2d, .y=0x29, .sp=0x26, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xf5c1, .value=0xf0}, {.addr=0xf5c2, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xf61e, .a=0x75, .x=0x2d, .y=0x29, .sp=0x26, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xf5c1, .value=0xf0}, {.addr=0xf5c2, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xf5c1, .value=0xf0, .type=IO_READ},
        {.addr=0xf5c2, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x489e, .a=0xa6, .x=0x57, .y=0xa0, .sp=0x85, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x489e, .value=0xf0}, {.addr=0x489f, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x48c4, .a=0xa6, .x=0x57, .y=0xa0, .sp=0x85, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x489e, .value=0xf0}, {.addr=0x489f, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x489e, .value=0xf0, .type=IO_READ},
        {.addr=0x489f, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x5178, .a=0x87, .x=0xcd, .y=0x32, .sp=0x89, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5178, .value=0xf0}, {.addr=0x5179, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x517a, .a=0x87, .x=0xcd, .y=0x32, .sp=0x89, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5178, .value=0xf0}, {.addr=0x5179, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x5178, .value=0xf0, .type=IO_READ},
        {.addr=0x5179, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x5f2f, .a=0xac, .x=0x0b, .y=0x9e, .sp=0xc6, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x5f2f, .value=0xf0}, {.addr=0x5f30, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5f4e, .a=0xac, .x=0x0b, .y=0x9e, .sp=0xc6, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x5f2f, .value=0xf0}, {.addr=0x5f30, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5f2f, .value=0xf0, .type=IO_READ},
        {.addr=0x5f30, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xc364, .a=0xd1, .x=0xbd, .y=0x6e, .sp=0x6f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xc364, .value=0xf0}, {.addr=0xc365, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc2ec, .a=0xd1, .x=0xbd, .y=0x6e, .sp=0x6f, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xc364, .value=0xf0}, {.addr=0xc365, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc364, .value=0xf0, .type=IO_READ},
        {.addr=0xc365, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x8aee, .a=0xa2, .x=0xd2, .y=0x08, .sp=0xa5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x8aee, .value=0xf0}, {.addr=0x8aef, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x8b3a, .a=0xa2, .x=0xd2, .y=0x08, .sp=0xa5, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x8aee, .value=0xf0}, {.addr=0x8aef, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x8aee, .value=0xf0, .type=IO_READ},
        {.addr=0x8aef, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x04bc, .a=0x8f, .x=0x7d, .y=0xe6, .sp=0x01, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x04bc, .value=0xf0}, {.addr=0x04bd, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x04be, .a=0x8f, .x=0x7d, .y=0xe6, .sp=0x01, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x04bc, .value=0xf0}, {.addr=0x04bd, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x04bc, .value=0xf0, .type=IO_READ},
        {.addr=0x04bd, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x3f3e, .a=0x7f, .x=0xad, .y=0xb0, .sp=0xc1, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x3f3e, .value=0xf0}, {.addr=0x3f3f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3f5d, .a=0x7f, .x=0xad, .y=0xb0, .sp=0xc1, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x3f3e, .value=0xf0}, {.addr=0x3f3f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3f3e, .value=0xf0, .type=IO_READ},
        {.addr=0x3f3f, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x6f03, .a=0xa7, .x=0xcb, .y=0xea, .sp=0x0c, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x6f03, .value=0xf0}, {.addr=0x6f04, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x6e9f, .a=0xa7, .x=0xcb, .y=0xea, .sp=0x0c, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x6f03, .value=0xf0}, {.addr=0x6f04, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x6f03, .value=0xf0, .type=IO_READ},
        {.addr=0x6f04, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x738c, .a=0xca, .x=0xa5, .y=0x15, .sp=0x2d, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x738c, .value=0xf0}, {.addr=0x738d, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x7397, .a=0xca, .x=0xa5, .y=0x15, .sp=0x2d, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x738c, .value=0xf0}, {.addr=0x738d, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x738c, .value=0xf0, .type=IO_READ},
        {.addr=0x738d, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xdaa6, .a=0x4c, .x=0x25, .y=0x2a, .sp=0x7f, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa6, .value=0xf0}, {.addr=0xdaa7, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xdaa8, .a=0x4c, .x=0x25, .y=0x2a, .sp=0x7f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xdaa6, .value=0xf0}, {.addr=0xdaa7, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xdaa6, .value=0xf0, .type=IO_READ},
        {.addr=0xdaa7, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xbe17, .a=0xb0, .x=0xc6, .y=0x51, .sp=0xc8, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xbe17, .value=0xf0}, {.addr=0xbe18, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xbe12, .a=0xb0, .x=0xc6, .y=0x51, .sp=0xc8, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xbe17, .value=0xf0}, {.addr=0xbe18, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xbe17, .value=0xf0, .type=IO_READ},
        {.addr=0xbe18, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x1696, .a=0xf7, .x=0x0b, .y=0x2f, .sp=0x4a, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x1696, .value=0xf0}, {.addr=0x1697, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1698, .a=0xf7, .x=0x0b, .y=0x2f, .sp=0x4a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1696, .value=0xf0}, {.addr=0x1697, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1696, .value=0xf0, .type=IO_READ},
        {.addr=0x1697, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x8055, .a=0x58, .x=0xa1, .y=0x27, .sp=0x16, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x8055, .value=0xf0}, {.addr=0x8056, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x7ffa, .a=0x58, .x=0xa1, .y=0x27, .sp=0x16, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x8055, .value=0xf0}, {.addr=0x8056, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x8055, .value=0xf0, .type=IO_READ},
        {.addr=0x8056, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xddeb, .a=0x20, .x=0x85, .y=0xcf, .sp=0xd9, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xddeb, .value=0xf0}, {.addr=0xddec, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xdded, .a=0x20, .x=0x85, .y=0xcf, .sp=0xd9, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xddeb, .value=0xf0}, {.addr=0xddec, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xddeb, .value=0xf0, .type=IO_READ},
        {.addr=0xddec, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xa5d9, .a=0x40, .x=0x2e, .y=0xa4, .sp=0x3f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa5d9, .value=0xf0}, {.addr=0xa5da, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xa590, .a=0x40, .x=0x2e, .y=0xa4, .sp=0x3f, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xa5d9, .value=0xf0}, {.addr=0xa5da, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xa5d9, .value=0xf0, .type=IO_READ},
        {.addr=0xa5da, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x42c5, .a=0x05, .x=0x20, .y=0x90, .sp=0x50, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x42c5, .value=0xf0}, {.addr=0x42c6, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x42c7, .a=0x05, .x=0x20, .y=0x90, .sp=0x50, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x42c5, .value=0xf0}, {.addr=0x42c6, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x42c5, .value=0xf0, .type=IO_READ},
        {.addr=0x42c6, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x5ec0, .a=0x3a, .x=0xa9, .y=0xf4, .sp=0x43, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec0, .value=0xf0}, {.addr=0x5ec1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5ec8, .a=0x3a, .x=0xa9, .y=0xf4, .sp=0x43, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x5ec0, .value=0xf0}, {.addr=0x5ec1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5ec0, .value=0xf0, .type=IO_READ},
        {.addr=0x5ec1, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x6571, .a=0x95, .x=0x48, .y=0xc7, .sp=0xba, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x6571, .value=0xf0}, {.addr=0x6572, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x6573, .a=0x95, .x=0x48, .y=0xc7, .sp=0xba, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x6571, .value=0xf0}, {.addr=0x6572, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x6571, .value=0xf0, .type=IO_READ},
        {.addr=0x6572, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x1db8, .a=0xdc, .x=0xc7, .y=0x7c, .sp=0xe2, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x1db8, .value=0xf0}, {.addr=0x1db9, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x1da5, .a=0xdc, .x=0xc7, .y=0x7c, .sp=0xe2, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x1db8, .value=0xf0}, {.addr=0x1db9, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x1db8, .value=0xf0, .type=IO_READ},
        {.addr=0x1db9, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xe012, .a=0x6b, .x=0xa6, .y=0x7e, .sp=0x75, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe012, .value=0xf0}, {.addr=0xe013, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xe02b, .a=0x6b, .x=0xa6, .y=0x7e, .sp=0x75, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xe012, .value=0xf0}, {.addr=0xe013, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xe012, .value=0xf0, .type=IO_READ},
        {.addr=0xe013, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x5af7, .a=0x42, .x=0x4f, .y=0xd9, .sp=0x10, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x5af7, .value=0xf0}, {.addr=0x5af8, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x5b1d, .a=0x42, .x=0x4f, .y=0xd9, .sp=0x10, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x5af7, .value=0xf0}, {.addr=0x5af8, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x5af7, .value=0xf0, .type=IO_READ},
        {.addr=0x5af8, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x0799, .a=0x9f, .x=0xca, .y=0x0c, .sp=0x93, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0799, .value=0xf0}, {.addr=0x079a, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x079b, .a=0x9f, .x=0xca, .y=0x0c, .sp=0x93, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0799, .value=0xf0}, {.addr=0x079a, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x0799, .value=0xf0, .type=IO_READ},
        {.addr=0x079a, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xe82c, .a=0x90, .x=0x7d, .y=0x5d, .sp=0xcc, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xe82c, .value=0xf0}, {.addr=0xe82d, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xe7fa, .a=0x90, .x=0x7d, .y=0x5d, .sp=0xcc, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xe82c, .value=0xf0}, {.addr=0xe82d, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xe82c, .value=0xf0, .type=IO_READ},
        {.addr=0xe82d, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x67ed, .a=0xd4, .x=0xf8, .y=0x1b, .sp=0xec, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x67ed, .value=0xf0}, {.addr=0x67ee, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x67ef, .a=0xd4, .x=0xf8, .y=0x1b, .sp=0xec, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x67ed, .value=0xf0}, {.addr=0x67ee, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x67ed, .value=0xf0, .type=IO_READ},
        {.addr=0x67ee, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x9a66, .a=0x6a, .x=0xd9, .y=0x03, .sp=0x3b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x9a66, .value=0xf0}, {.addr=0x9a67, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x9a49, .a=0x6a, .x=0xd9, .y=0x03, .sp=0x3b, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x9a66, .value=0xf0}, {.addr=0x9a67, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x9a66, .value=0xf0, .type=IO_READ},
        {.addr=0x9a67, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xb946, .a=0x95, .x=0x0b, .y=0xe9, .sp=0x67, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xb946, .value=0xf0}, {.addr=0xb947, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xb948, .a=0x95, .x=0x0b, .y=0xe9, .sp=0x67, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb946, .value=0xf0}, {.addr=0xb947, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xb946, .value=0xf0, .type=IO_READ},
        {.addr=0xb947, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xbaa5, .a=0x55, .x=0x67, .y=0x1c, .sp=0x27, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xbaa5, .value=0xf0}, {.addr=0xbaa6, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xbaa7, .a=0x55, .x=0x67, .y=0x1c, .sp=0x27, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xbaa5, .value=0xf0}, {.addr=0xbaa6, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xbaa5, .value=0xf0, .type=IO_READ},
        {.addr=0xbaa6, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x6fcd, .a=0xca, .x=0x1d, .y=0x4d, .sp=0xee, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x6fcd, .value=0xf0}, {.addr=0x6fce, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x6fcf, .a=0xca, .x=0x1d, .y=0x4d, .sp=0xee, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6fcd, .value=0xf0}, {.addr=0x6fce, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x6fcd, .value=0xf0, .type=IO_READ},
        {.addr=0x6fce, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x0ea7, .a=0xa9, .x=0x8f, .y=0x48, .sp=0x5f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0ea7, .value=0xf0}, {.addr=0x0ea8, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x0ea9, .a=0xa9, .x=0x8f, .y=0x48, .sp=0x5f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0ea7, .value=0xf0}, {.addr=0x0ea8, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x0ea7, .value=0xf0, .type=IO_READ},
        {.addr=0x0ea8, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x7d12, .a=0x2e, .x=0xc7, .y=0x2f, .sp=0x8f, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x7d12, .value=0xf0}, {.addr=0x7d13, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x7d14, .a=0x2e, .x=0xc7, .y=0x2f, .sp=0x8f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x7d12, .value=0xf0}, {.addr=0x7d13, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x7d12, .value=0xf0, .type=IO_READ},
        {.addr=0x7d13, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x64f5, .a=0x36, .x=0x76, .y=0xcb, .sp=0xe3, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x64f5, .value=0xf0}, {.addr=0x64f6, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x6511, .a=0x36, .x=0x76, .y=0xcb, .sp=0xe3, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x64f5, .value=0xf0}, {.addr=0x64f6, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x64f5, .value=0xf0, .type=IO_READ},
        {.addr=0x64f6, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x2720, .a=0xfd, .x=0xb8, .y=0x4c, .sp=0x35, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x2720, .value=0xf0}, {.addr=0x2721, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x2777, .a=0xfd, .x=0xb8, .y=0x4c, .sp=0x35, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x2720, .value=0xf0}, {.addr=0x2721, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x2720, .value=0xf0, .type=IO_READ},
        {.addr=0x2721, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x2cbe, .a=0x91, .x=0x05, .y=0x7c, .sp=0x11, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x2cbe, .value=0xf0}, {.addr=0x2cbf, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x2cd5, .a=0x91, .x=0x05, .y=0x7c, .sp=0x11, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x2cbe, .value=0xf0}, {.addr=0x2cbf, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x2cbe, .value=0xf0, .type=IO_READ},
        {.addr=0x2cbf, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xe784, .a=0xa1, .x=0xd2, .y=0x05, .sp=0xf4, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xe784, .value=0xf0}, {.addr=0xe785, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe786, .a=0xa1, .x=0xd2, .y=0x05, .sp=0xf4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe784, .value=0xf0}, {.addr=0xe785, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe784, .value=0xf0, .type=IO_READ},
        {.addr=0xe785, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x25b9, .a=0xce, .x=0xc0, .y=0x18, .sp=0x79, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x25b9, .value=0xf0}, {.addr=0x25ba, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x260a, .a=0xce, .x=0xc0, .y=0x18, .sp=0x79, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x25b9, .value=0xf0}, {.addr=0x25ba, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x25b9, .value=0xf0, .type=IO_READ},
        {.addr=0x25ba, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xbc1c, .a=0x09, .x=0xb4, .y=0x18, .sp=0xe3, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xbc1c, .value=0xf0}, {.addr=0xbc1d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xbc1e, .a=0x09, .x=0xb4, .y=0x18, .sp=0xe3, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xbc1c, .value=0xf0}, {.addr=0xbc1d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xbc1c, .value=0xf0, .type=IO_READ},
        {.addr=0xbc1d, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x71ee, .a=0x03, .x=0x47, .y=0xd5, .sp=0x05, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x71ee, .value=0xf0}, {.addr=0x71ef, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x71f0, .a=0x03, .x=0x47, .y=0xd5, .sp=0x05, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x71ee, .value=0xf0}, {.addr=0x71ef, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x71ee, .value=0xf0, .type=IO_READ},
        {.addr=0x71ef, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x146e, .a=0x26, .x=0x92, .y=0xe4, .sp=0xad, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x146e, .value=0xf0}, {.addr=0x146f, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x1470, .a=0x26, .x=0x92, .y=0xe4, .sp=0xad, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x146e, .value=0xf0}, {.addr=0x146f, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x146e, .value=0xf0, .type=IO_READ},
        {.addr=0x146f, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x6899, .a=0xed, .x=0xe0, .y=0x4f, .sp=0x44, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x6899, .value=0xf0}, {.addr=0x689a, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x689b, .a=0xed, .x=0xe0, .y=0x4f, .sp=0x44, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x6899, .value=0xf0}, {.addr=0x689a, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x6899, .value=0xf0, .type=IO_READ},
        {.addr=0x689a, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xbd27, .a=0x07, .x=0x7e, .y=0x04, .sp=0xd2, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xbd27, .value=0xf0}, {.addr=0xbd28, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xbce1, .a=0x07, .x=0x7e, .y=0x04, .sp=0xd2, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xbd27, .value=0xf0}, {.addr=0xbd28, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xbd27, .value=0xf0, .type=IO_READ},
        {.addr=0xbd28, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xc18e, .a=0xc9, .x=0x42, .y=0x60, .sp=0x50, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xc18e, .value=0xf0}, {.addr=0xc18f, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xc198, .a=0xc9, .x=0x42, .y=0x60, .sp=0x50, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xc18e, .value=0xf0}, {.addr=0xc18f, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xc18e, .value=0xf0, .type=IO_READ},
        {.addr=0xc18f, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x2d5a, .a=0xe1, .x=0x78, .y=0x9a, .sp=0x06, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x2d5a, .value=0xf0}, {.addr=0x2d5b, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x2d30, .a=0xe1, .x=0x78, .y=0x9a, .sp=0x06, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x2d5a, .value=0xf0}, {.addr=0x2d5b, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x2d5a, .value=0xf0, .type=IO_READ},
        {.addr=0x2d5b, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x5305, .a=0xab, .x=0xe0, .y=0xa0, .sp=0x37, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5305, .value=0xf0}, {.addr=0x5306, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x5375, .a=0xab, .x=0xe0, .y=0xa0, .sp=0x37, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x5305, .value=0xf0}, {.addr=0x5306, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x5305, .value=0xf0, .type=IO_READ},
        {.addr=0x5306, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xe3f2, .a=0x12, .x=0xfb, .y=0xe3, .sp=0x3c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xe3f2, .value=0xf0}, {.addr=0xe3f3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe3d3, .a=0x12, .x=0xfb, .y=0xe3, .sp=0x3c, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xe3f2, .value=0xf0}, {.addr=0xe3f3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe3f2, .value=0xf0, .type=IO_READ},
        {.addr=0xe3f3, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x2488, .a=0xec, .x=0x1c, .y=0x79, .sp=0xb2, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x2488, .value=0xf0}, {.addr=0x2489, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x24ef, .a=0xec, .x=0x1c, .y=0x79, .sp=0xb2, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x2488, .value=0xf0}, {.addr=0x2489, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x2488, .value=0xf0, .type=IO_READ},
        {.addr=0x2489, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x36e2, .a=0x70, .x=0x35, .y=0x71, .sp=0x60, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x36e2, .value=0xf0}, {.addr=0x36e3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3700, .a=0x70, .x=0x35, .y=0x71, .sp=0x60, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x36e2, .value=0xf0}, {.addr=0x36e3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x36e2, .value=0xf0, .type=IO_READ},
        {.addr=0x36e3, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0200) {
    const struct CPU_State initial_cpu = {.pc=0xac6c, .a=0x17, .x=0x56, .y=0xce, .sp=0x83, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xac6c, .value=0xf0}, {.addr=0xac6d, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xac6e, .a=0x17, .x=0x56, .y=0xce, .sp=0x83, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xac6c, .value=0xf0}, {.addr=0xac6d, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xac6c, .value=0xf0, .type=IO_READ},
        {.addr=0xac6d, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0201) {
    const struct CPU_State initial_cpu = {.pc=0xf569, .a=0x1b, .x=0xb5, .y=0x8f, .sp=0xf6, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xf569, .value=0xf0}, {.addr=0xf56a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf5e7, .a=0x1b, .x=0xb5, .y=0x8f, .sp=0xf6, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xf569, .value=0xf0}, {.addr=0xf56a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf569, .value=0xf0, .type=IO_READ},
        {.addr=0xf56a, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0202) {
    const struct CPU_State initial_cpu = {.pc=0x92be, .a=0x92, .x=0x27, .y=0x53, .sp=0xea, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x92be, .value=0xf0}, {.addr=0x92bf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x92e6, .a=0x92, .x=0x27, .y=0x53, .sp=0xea, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x92be, .value=0xf0}, {.addr=0x92bf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x92be, .value=0xf0, .type=IO_READ},
        {.addr=0x92bf, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0203) {
    const struct CPU_State initial_cpu = {.pc=0x8826, .a=0x97, .x=0x1f, .y=0xbb, .sp=0x44, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x8826, .value=0xf0}, {.addr=0x8827, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x8828, .a=0x97, .x=0x1f, .y=0xbb, .sp=0x44, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x8826, .value=0xf0}, {.addr=0x8827, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8826, .value=0xf0, .type=IO_READ},
        {.addr=0x8827, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0204) {
    const struct CPU_State initial_cpu = {.pc=0x4d62, .a=0xb5, .x=0xb9, .y=0xfb, .sp=0x2d, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4d62, .value=0xf0}, {.addr=0x4d63, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x4d64, .a=0xb5, .x=0xb9, .y=0xfb, .sp=0x2d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4d62, .value=0xf0}, {.addr=0x4d63, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x4d62, .value=0xf0, .type=IO_READ},
        {.addr=0x4d63, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0205) {
    const struct CPU_State initial_cpu = {.pc=0x489b, .a=0x20, .x=0x17, .y=0xb2, .sp=0x4f, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x489b, .value=0xf0}, {.addr=0x489c, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x489d, .a=0x20, .x=0x17, .y=0xb2, .sp=0x4f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x489b, .value=0xf0}, {.addr=0x489c, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x489b, .value=0xf0, .type=IO_READ},
        {.addr=0x489c, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0206) {
    const struct CPU_State initial_cpu = {.pc=0xae6f, .a=0x88, .x=0xd3, .y=0xc1, .sp=0xf1, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xae6f, .value=0xf0}, {.addr=0xae70, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xae71, .a=0x88, .x=0xd3, .y=0xc1, .sp=0xf1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xae6f, .value=0xf0}, {.addr=0xae70, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xae6f, .value=0xf0, .type=IO_READ},
        {.addr=0xae70, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0207) {
    const struct CPU_State initial_cpu = {.pc=0xd5f8, .a=0x6e, .x=0xe9, .y=0x80, .sp=0x8f, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f8, .value=0xf0}, {.addr=0xd5f9, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xd611, .a=0x6e, .x=0xe9, .y=0x80, .sp=0x8f, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xd5f8, .value=0xf0}, {.addr=0xd5f9, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xd5f8, .value=0xf0, .type=IO_READ},
        {.addr=0xd5f9, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0208) {
    const struct CPU_State initial_cpu = {.pc=0x2a8e, .a=0x1d, .x=0x39, .y=0x76, .sp=0xa1, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x2a8e, .value=0xf0}, {.addr=0x2a8f, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x2ae0, .a=0x1d, .x=0x39, .y=0x76, .sp=0xa1, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x2a8e, .value=0xf0}, {.addr=0x2a8f, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x2a8e, .value=0xf0, .type=IO_READ},
        {.addr=0x2a8f, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0209) {
    const struct CPU_State initial_cpu = {.pc=0x6d72, .a=0x9f, .x=0xc1, .y=0x59, .sp=0x49, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x6d72, .value=0xf0}, {.addr=0x6d73, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6d3a, .a=0x9f, .x=0xc1, .y=0x59, .sp=0x49, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x6d72, .value=0xf0}, {.addr=0x6d73, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6d72, .value=0xf0, .type=IO_READ},
        {.addr=0x6d73, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_020A) {
    const struct CPU_State initial_cpu = {.pc=0xc648, .a=0x61, .x=0xe0, .y=0x78, .sp=0xb8, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc648, .value=0xf0}, {.addr=0xc649, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xc68e, .a=0x61, .x=0xe0, .y=0x78, .sp=0xb8, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xc648, .value=0xf0}, {.addr=0xc649, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xc648, .value=0xf0, .type=IO_READ},
        {.addr=0xc649, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_020B) {
    const struct CPU_State initial_cpu = {.pc=0xb9aa, .a=0x77, .x=0x1b, .y=0x61, .sp=0xf5, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xb9aa, .value=0xf0}, {.addr=0xb9ab, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xb9ac, .a=0x77, .x=0x1b, .y=0x61, .sp=0xf5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xb9aa, .value=0xf0}, {.addr=0xb9ab, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xb9aa, .value=0xf0, .type=IO_READ},
        {.addr=0xb9ab, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_020C) {
    const struct CPU_State initial_cpu = {.pc=0x2352, .a=0x15, .x=0x9a, .y=0x3f, .sp=0xba, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x2352, .value=0xf0}, {.addr=0x2353, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x2354, .a=0x15, .x=0x9a, .y=0x3f, .sp=0xba, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x2352, .value=0xf0}, {.addr=0x2353, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x2352, .value=0xf0, .type=IO_READ},
        {.addr=0x2353, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_020D) {
    const struct CPU_State initial_cpu = {.pc=0x0c70, .a=0x75, .x=0xd2, .y=0x93, .sp=0x49, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0c70, .value=0xf0}, {.addr=0x0c71, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x0c72, .a=0x75, .x=0xd2, .y=0x93, .sp=0x49, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0c70, .value=0xf0}, {.addr=0x0c71, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x0c70, .value=0xf0, .type=IO_READ},
        {.addr=0x0c71, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_020E) {
    const struct CPU_State initial_cpu = {.pc=0x6deb, .a=0x17, .x=0x36, .y=0xc0, .sp=0xe0, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6deb, .value=0xf0}, {.addr=0x6dec, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x6e1b, .a=0x17, .x=0x36, .y=0xc0, .sp=0xe0, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x6deb, .value=0xf0}, {.addr=0x6dec, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x6deb, .value=0xf0, .type=IO_READ},
        {.addr=0x6dec, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_020F) {
    const struct CPU_State initial_cpu = {.pc=0xefd8, .a=0xe0, .x=0x06, .y=0x97, .sp=0x2b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xefd8, .value=0xf0}, {.addr=0xefd9, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xefda, .a=0xe0, .x=0x06, .y=0x97, .sp=0x2b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xefd8, .value=0xf0}, {.addr=0xefd9, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xefd8, .value=0xf0, .type=IO_READ},
        {.addr=0xefd9, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0210) {
    const struct CPU_State initial_cpu = {.pc=0xf744, .a=0x11, .x=0x2e, .y=0x3f, .sp=0x53, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xf744, .value=0xf0}, {.addr=0xf745, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xf746, .a=0x11, .x=0x2e, .y=0x3f, .sp=0x53, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf744, .value=0xf0}, {.addr=0xf745, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xf744, .value=0xf0, .type=IO_READ},
        {.addr=0xf745, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0211) {
    const struct CPU_State initial_cpu = {.pc=0x64af, .a=0x80, .x=0x2d, .y=0x41, .sp=0x34, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x64af, .value=0xf0}, {.addr=0x64b0, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x652b, .a=0x80, .x=0x2d, .y=0x41, .sp=0x34, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x64af, .value=0xf0}, {.addr=0x64b0, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x64af, .value=0xf0, .type=IO_READ},
        {.addr=0x64b0, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0212) {
    const struct CPU_State initial_cpu = {.pc=0xc029, .a=0x1a, .x=0xd6, .y=0x01, .sp=0xc4, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xc029, .value=0xf0}, {.addr=0xc02a, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xc02e, .a=0x1a, .x=0xd6, .y=0x01, .sp=0xc4, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xc029, .value=0xf0}, {.addr=0xc02a, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xc029, .value=0xf0, .type=IO_READ},
        {.addr=0xc02a, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0213) {
    const struct CPU_State initial_cpu = {.pc=0xa2ee, .a=0xa7, .x=0x26, .y=0xc0, .sp=0xbb, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xa2ee, .value=0xf0}, {.addr=0xa2ef, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xa2b3, .a=0xa7, .x=0x26, .y=0xc0, .sp=0xbb, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xa2ee, .value=0xf0}, {.addr=0xa2ef, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xa2ee, .value=0xf0, .type=IO_READ},
        {.addr=0xa2ef, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0214) {
    const struct CPU_State initial_cpu = {.pc=0xea0a, .a=0x1c, .x=0xe2, .y=0xed, .sp=0x8a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xea0a, .value=0xf0}, {.addr=0xea0b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe9d2, .a=0x1c, .x=0xe2, .y=0xed, .sp=0x8a, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xea0a, .value=0xf0}, {.addr=0xea0b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xea0a, .value=0xf0, .type=IO_READ},
        {.addr=0xea0b, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0215) {
    const struct CPU_State initial_cpu = {.pc=0x17d6, .a=0x50, .x=0x80, .y=0xf9, .sp=0x2e, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x17d6, .value=0xf0}, {.addr=0x17d7, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x17d8, .a=0x50, .x=0x80, .y=0xf9, .sp=0x2e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x17d6, .value=0xf0}, {.addr=0x17d7, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x17d6, .value=0xf0, .type=IO_READ},
        {.addr=0x17d7, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0216) {
    const struct CPU_State initial_cpu = {.pc=0x50a6, .a=0xf1, .x=0x04, .y=0xe4, .sp=0x17, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x50a6, .value=0xf0}, {.addr=0x50a7, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x50a3, .a=0xf1, .x=0x04, .y=0xe4, .sp=0x17, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x50a6, .value=0xf0}, {.addr=0x50a7, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x50a6, .value=0xf0, .type=IO_READ},
        {.addr=0x50a7, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0217) {
    const struct CPU_State initial_cpu = {.pc=0x5867, .a=0xb8, .x=0x06, .y=0x79, .sp=0x68, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x5867, .value=0xf0}, {.addr=0x5868, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5869, .a=0xb8, .x=0x06, .y=0x79, .sp=0x68, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5867, .value=0xf0}, {.addr=0x5868, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5867, .value=0xf0, .type=IO_READ},
        {.addr=0x5868, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0218) {
    const struct CPU_State initial_cpu = {.pc=0x7db7, .a=0x99, .x=0xff, .y=0x7a, .sp=0x70, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x7db7, .value=0xf0}, {.addr=0x7db8, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x7db9, .a=0x99, .x=0xff, .y=0x7a, .sp=0x70, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7db7, .value=0xf0}, {.addr=0x7db8, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x7db7, .value=0xf0, .type=IO_READ},
        {.addr=0x7db8, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0219) {
    const struct CPU_State initial_cpu = {.pc=0x616f, .a=0x5a, .x=0x4d, .y=0xfc, .sp=0xf5, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x616f, .value=0xf0}, {.addr=0x6170, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x6171, .a=0x5a, .x=0x4d, .y=0xfc, .sp=0xf5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x616f, .value=0xf0}, {.addr=0x6170, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x616f, .value=0xf0, .type=IO_READ},
        {.addr=0x6170, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_021A) {
    const struct CPU_State initial_cpu = {.pc=0x07f3, .a=0xca, .x=0x6f, .y=0xbe, .sp=0x3c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x07f3, .value=0xf0}, {.addr=0x07f4, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x0778, .a=0xca, .x=0x6f, .y=0xbe, .sp=0x3c, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x07f3, .value=0xf0}, {.addr=0x07f4, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x07f3, .value=0xf0, .type=IO_READ},
        {.addr=0x07f4, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_021B) {
    const struct CPU_State initial_cpu = {.pc=0x67cf, .a=0xe8, .x=0x15, .y=0x1f, .sp=0x2b, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x67cf, .value=0xf0}, {.addr=0x67d0, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x6828, .a=0xe8, .x=0x15, .y=0x1f, .sp=0x2b, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x67cf, .value=0xf0}, {.addr=0x67d0, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x67cf, .value=0xf0, .type=IO_READ},
        {.addr=0x67d0, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_021C) {
    const struct CPU_State initial_cpu = {.pc=0xb47c, .a=0xc0, .x=0x17, .y=0xe3, .sp=0x45, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xb47c, .value=0xf0}, {.addr=0xb47d, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xb4a0, .a=0xc0, .x=0x17, .y=0xe3, .sp=0x45, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xb47c, .value=0xf0}, {.addr=0xb47d, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xb47c, .value=0xf0, .type=IO_READ},
        {.addr=0xb47d, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_021D) {
    const struct CPU_State initial_cpu = {.pc=0xd7de, .a=0x57, .x=0x1b, .y=0x32, .sp=0x61, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xd7de, .value=0xf0}, {.addr=0xd7df, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xd7e0, .a=0x57, .x=0x1b, .y=0x32, .sp=0x61, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xd7de, .value=0xf0}, {.addr=0xd7df, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xd7de, .value=0xf0, .type=IO_READ},
        {.addr=0xd7df, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_021E) {
    const struct CPU_State initial_cpu = {.pc=0xd189, .a=0xd8, .x=0x3f, .y=0xd5, .sp=0x06, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xd189, .value=0xf0}, {.addr=0xd18a, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xd18b, .a=0xd8, .x=0x3f, .y=0xd5, .sp=0x06, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd189, .value=0xf0}, {.addr=0xd18a, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xd189, .value=0xf0, .type=IO_READ},
        {.addr=0xd18a, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_021F) {
    const struct CPU_State initial_cpu = {.pc=0x2e22, .a=0xf4, .x=0xfb, .y=0x76, .sp=0xc0, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x2e22, .value=0xf0}, {.addr=0x2e23, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x2e1b, .a=0xf4, .x=0xfb, .y=0x76, .sp=0xc0, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x2e22, .value=0xf0}, {.addr=0x2e23, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x2e22, .value=0xf0, .type=IO_READ},
        {.addr=0x2e23, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0220) {
    const struct CPU_State initial_cpu = {.pc=0x1f5f, .a=0x60, .x=0x99, .y=0xb1, .sp=0x91, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x1f5f, .value=0xf0}, {.addr=0x1f60, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x1f5c, .a=0x60, .x=0x99, .y=0xb1, .sp=0x91, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x1f5f, .value=0xf0}, {.addr=0x1f60, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x1f5f, .value=0xf0, .type=IO_READ},
        {.addr=0x1f60, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0221) {
    const struct CPU_State initial_cpu = {.pc=0xf4ff, .a=0xd7, .x=0xe2, .y=0x3f, .sp=0xdd, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xf4ff, .value=0xf0}, {.addr=0xf500, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xf501, .a=0xd7, .x=0xe2, .y=0x3f, .sp=0xdd, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xf4ff, .value=0xf0}, {.addr=0xf500, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xf4ff, .value=0xf0, .type=IO_READ},
        {.addr=0xf500, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0222) {
    const struct CPU_State initial_cpu = {.pc=0x9e25, .a=0x52, .x=0x0f, .y=0x81, .sp=0x66, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x9e25, .value=0xf0}, {.addr=0x9e26, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x9dbb, .a=0x52, .x=0x0f, .y=0x81, .sp=0x66, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x9e25, .value=0xf0}, {.addr=0x9e26, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x9e25, .value=0xf0, .type=IO_READ},
        {.addr=0x9e26, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0223) {
    const struct CPU_State initial_cpu = {.pc=0xa88a, .a=0xcb, .x=0xbc, .y=0x86, .sp=0x53, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xa88a, .value=0xf0}, {.addr=0xa88b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa88c, .a=0xcb, .x=0xbc, .y=0x86, .sp=0x53, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xa88a, .value=0xf0}, {.addr=0xa88b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa88a, .value=0xf0, .type=IO_READ},
        {.addr=0xa88b, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0224) {
    const struct CPU_State initial_cpu = {.pc=0xf508, .a=0xc8, .x=0x03, .y=0xe7, .sp=0x00, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xf508, .value=0xf0}, {.addr=0xf509, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xf50a, .a=0xc8, .x=0x03, .y=0xe7, .sp=0x00, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf508, .value=0xf0}, {.addr=0xf509, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xf508, .value=0xf0, .type=IO_READ},
        {.addr=0xf509, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0225) {
    const struct CPU_State initial_cpu = {.pc=0xdb93, .a=0x4b, .x=0xe0, .y=0x92, .sp=0x61, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xdb93, .value=0xf0}, {.addr=0xdb94, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xdb95, .a=0x4b, .x=0xe0, .y=0x92, .sp=0x61, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xdb93, .value=0xf0}, {.addr=0xdb94, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xdb93, .value=0xf0, .type=IO_READ},
        {.addr=0xdb94, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0226) {
    const struct CPU_State initial_cpu = {.pc=0x563c, .a=0x9c, .x=0xb7, .y=0x60, .sp=0xc0, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x563c, .value=0xf0}, {.addr=0x563d, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x5616, .a=0x9c, .x=0xb7, .y=0x60, .sp=0xc0, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x563c, .value=0xf0}, {.addr=0x563d, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x563c, .value=0xf0, .type=IO_READ},
        {.addr=0x563d, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0227) {
    const struct CPU_State initial_cpu = {.pc=0x5fc6, .a=0xdc, .x=0x60, .y=0xb0, .sp=0x9c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x5fc6, .value=0xf0}, {.addr=0x5fc7, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x6019, .a=0xdc, .x=0x60, .y=0xb0, .sp=0x9c, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x5fc6, .value=0xf0}, {.addr=0x5fc7, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x5fc6, .value=0xf0, .type=IO_READ},
        {.addr=0x5fc7, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0228) {
    const struct CPU_State initial_cpu = {.pc=0xed89, .a=0x35, .x=0x75, .y=0x0f, .sp=0x0c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xed89, .value=0xf0}, {.addr=0xed8a, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xed8b, .a=0x35, .x=0x75, .y=0x0f, .sp=0x0c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xed89, .value=0xf0}, {.addr=0xed8a, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xed89, .value=0xf0, .type=IO_READ},
        {.addr=0xed8a, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0229) {
    const struct CPU_State initial_cpu = {.pc=0x9946, .a=0x66, .x=0xbb, .y=0xc9, .sp=0x7a, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x9946, .value=0xf0}, {.addr=0x9947, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x9948, .a=0x66, .x=0xbb, .y=0xc9, .sp=0x7a, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9946, .value=0xf0}, {.addr=0x9947, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x9946, .value=0xf0, .type=IO_READ},
        {.addr=0x9947, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_022A) {
    const struct CPU_State initial_cpu = {.pc=0x4a18, .a=0x02, .x=0x27, .y=0xd0, .sp=0xa7, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x4a18, .value=0xf0}, {.addr=0x4a19, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x4a8a, .a=0x02, .x=0x27, .y=0xd0, .sp=0xa7, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x4a18, .value=0xf0}, {.addr=0x4a19, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x4a18, .value=0xf0, .type=IO_READ},
        {.addr=0x4a19, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_022B) {
    const struct CPU_State initial_cpu = {.pc=0xf2e3, .a=0xca, .x=0xc9, .y=0x8b, .sp=0xbb, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xf2e3, .value=0xf0}, {.addr=0xf2e4, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xf2e5, .a=0xca, .x=0xc9, .y=0x8b, .sp=0xbb, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf2e3, .value=0xf0}, {.addr=0xf2e4, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xf2e3, .value=0xf0, .type=IO_READ},
        {.addr=0xf2e4, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_022C) {
    const struct CPU_State initial_cpu = {.pc=0x7c3f, .a=0x7f, .x=0x72, .y=0x1d, .sp=0xc9, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x7c3f, .value=0xf0}, {.addr=0x7c40, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x7c4a, .a=0x7f, .x=0x72, .y=0x1d, .sp=0xc9, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x7c3f, .value=0xf0}, {.addr=0x7c40, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x7c3f, .value=0xf0, .type=IO_READ},
        {.addr=0x7c40, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_022D) {
    const struct CPU_State initial_cpu = {.pc=0xcdba, .a=0x3f, .x=0x2a, .y=0xa1, .sp=0x47, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xcdba, .value=0xf0}, {.addr=0xcdbb, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xcd64, .a=0x3f, .x=0x2a, .y=0xa1, .sp=0x47, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xcdba, .value=0xf0}, {.addr=0xcdbb, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xcdba, .value=0xf0, .type=IO_READ},
        {.addr=0xcdbb, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_022E) {
    const struct CPU_State initial_cpu = {.pc=0x705c, .a=0x65, .x=0xf8, .y=0xea, .sp=0xfb, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x705c, .value=0xf0}, {.addr=0x705d, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x70cc, .a=0x65, .x=0xf8, .y=0xea, .sp=0xfb, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x705c, .value=0xf0}, {.addr=0x705d, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x705c, .value=0xf0, .type=IO_READ},
        {.addr=0x705d, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_022F) {
    const struct CPU_State initial_cpu = {.pc=0xd370, .a=0x77, .x=0x6b, .y=0x0c, .sp=0xc2, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xd370, .value=0xf0}, {.addr=0xd371, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd372, .a=0x77, .x=0x6b, .y=0x0c, .sp=0xc2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xd370, .value=0xf0}, {.addr=0xd371, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd370, .value=0xf0, .type=IO_READ},
        {.addr=0xd371, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0230) {
    const struct CPU_State initial_cpu = {.pc=0x6a2b, .a=0xde, .x=0x7a, .y=0x23, .sp=0xb8, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x6a2b, .value=0xf0}, {.addr=0x6a2c, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x6a40, .a=0xde, .x=0x7a, .y=0x23, .sp=0xb8, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x6a2b, .value=0xf0}, {.addr=0x6a2c, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x6a2b, .value=0xf0, .type=IO_READ},
        {.addr=0x6a2c, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0231) {
    const struct CPU_State initial_cpu = {.pc=0x2044, .a=0x21, .x=0x58, .y=0x8f, .sp=0x7a, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x2044, .value=0xf0}, {.addr=0x2045, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x2046, .a=0x21, .x=0x58, .y=0x8f, .sp=0x7a, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x2044, .value=0xf0}, {.addr=0x2045, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x2044, .value=0xf0, .type=IO_READ},
        {.addr=0x2045, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0232) {
    const struct CPU_State initial_cpu = {.pc=0xf4c1, .a=0x25, .x=0x00, .y=0xe3, .sp=0x01, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xf4c1, .value=0xf0}, {.addr=0xf4c2, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xf4c3, .a=0x25, .x=0x00, .y=0xe3, .sp=0x01, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xf4c1, .value=0xf0}, {.addr=0xf4c2, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xf4c1, .value=0xf0, .type=IO_READ},
        {.addr=0xf4c2, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0233) {
    const struct CPU_State initial_cpu = {.pc=0x7d57, .a=0x72, .x=0xfe, .y=0xce, .sp=0x09, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x7d57, .value=0xf0}, {.addr=0x7d58, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x7d59, .a=0x72, .x=0xfe, .y=0xce, .sp=0x09, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7d57, .value=0xf0}, {.addr=0x7d58, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x7d57, .value=0xf0, .type=IO_READ},
        {.addr=0x7d58, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0234) {
    const struct CPU_State initial_cpu = {.pc=0xf4a8, .a=0x93, .x=0x12, .y=0x84, .sp=0x1c, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xf4a8, .value=0xf0}, {.addr=0xf4a9, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xf4aa, .a=0x93, .x=0x12, .y=0x84, .sp=0x1c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf4a8, .value=0xf0}, {.addr=0xf4a9, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xf4a8, .value=0xf0, .type=IO_READ},
        {.addr=0xf4a9, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0235) {
    const struct CPU_State initial_cpu = {.pc=0x2f75, .a=0xb7, .x=0x52, .y=0x4c, .sp=0xe9, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x2f75, .value=0xf0}, {.addr=0x2f76, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x2f8c, .a=0xb7, .x=0x52, .y=0x4c, .sp=0xe9, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x2f75, .value=0xf0}, {.addr=0x2f76, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x2f75, .value=0xf0, .type=IO_READ},
        {.addr=0x2f76, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0236) {
    const struct CPU_State initial_cpu = {.pc=0x0f0f, .a=0x7b, .x=0x30, .y=0xe7, .sp=0x96, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0f0f, .value=0xf0}, {.addr=0x0f10, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x0ec6, .a=0x7b, .x=0x30, .y=0xe7, .sp=0x96, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x0f0f, .value=0xf0}, {.addr=0x0f10, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x0f0f, .value=0xf0, .type=IO_READ},
        {.addr=0x0f10, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0237) {
    const struct CPU_State initial_cpu = {.pc=0x1033, .a=0xe4, .x=0xbb, .y=0xac, .sp=0xdc, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x1033, .value=0xf0}, {.addr=0x1034, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1035, .a=0xe4, .x=0xbb, .y=0xac, .sp=0xdc, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1033, .value=0xf0}, {.addr=0x1034, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1033, .value=0xf0, .type=IO_READ},
        {.addr=0x1034, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0238) {
    const struct CPU_State initial_cpu = {.pc=0x2fc3, .a=0x97, .x=0xdb, .y=0x87, .sp=0x7e, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x2fc3, .value=0xf0}, {.addr=0x2fc4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2fa2, .a=0x97, .x=0xdb, .y=0x87, .sp=0x7e, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x2fc3, .value=0xf0}, {.addr=0x2fc4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2fc3, .value=0xf0, .type=IO_READ},
        {.addr=0x2fc4, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0239) {
    const struct CPU_State initial_cpu = {.pc=0x04b7, .a=0x38, .x=0xd2, .y=0x80, .sp=0x81, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x04b7, .value=0xf0}, {.addr=0x04b8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x04b9, .a=0x38, .x=0xd2, .y=0x80, .sp=0x81, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x04b7, .value=0xf0}, {.addr=0x04b8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x04b7, .value=0xf0, .type=IO_READ},
        {.addr=0x04b8, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_023A) {
    const struct CPU_State initial_cpu = {.pc=0xd392, .a=0xc7, .x=0x9d, .y=0x2a, .sp=0x31, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xd392, .value=0xf0}, {.addr=0xd393, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xd394, .a=0xc7, .x=0x9d, .y=0x2a, .sp=0x31, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd392, .value=0xf0}, {.addr=0xd393, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xd392, .value=0xf0, .type=IO_READ},
        {.addr=0xd393, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_023B) {
    const struct CPU_State initial_cpu = {.pc=0x8462, .a=0x9c, .x=0x08, .y=0xbc, .sp=0x62, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x8462, .value=0xf0}, {.addr=0x8463, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x84cd, .a=0x9c, .x=0x08, .y=0xbc, .sp=0x62, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x8462, .value=0xf0}, {.addr=0x8463, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x8462, .value=0xf0, .type=IO_READ},
        {.addr=0x8463, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_023C) {
    const struct CPU_State initial_cpu = {.pc=0x9d51, .a=0x93, .x=0x13, .y=0x7d, .sp=0xd3, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x9d51, .value=0xf0}, {.addr=0x9d52, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x9d55, .a=0x93, .x=0x13, .y=0x7d, .sp=0xd3, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x9d51, .value=0xf0}, {.addr=0x9d52, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x9d51, .value=0xf0, .type=IO_READ},
        {.addr=0x9d52, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_023D) {
    const struct CPU_State initial_cpu = {.pc=0x2112, .a=0x4b, .x=0x30, .y=0x36, .sp=0xd5, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2112, .value=0xf0}, {.addr=0x2113, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x2114, .a=0x4b, .x=0x30, .y=0x36, .sp=0xd5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2112, .value=0xf0}, {.addr=0x2113, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x2112, .value=0xf0, .type=IO_READ},
        {.addr=0x2113, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_023E) {
    const struct CPU_State initial_cpu = {.pc=0x726e, .a=0xe1, .x=0x78, .y=0x1b, .sp=0xaa, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x726e, .value=0xf0}, {.addr=0x726f, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x726f, .a=0xe1, .x=0x78, .y=0x1b, .sp=0xaa, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x726e, .value=0xf0}, {.addr=0x726f, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x726e, .value=0xf0, .type=IO_READ},
        {.addr=0x726f, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_023F) {
    const struct CPU_State initial_cpu = {.pc=0xe65d, .a=0xf7, .x=0x89, .y=0xc5, .sp=0x9c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xe65d, .value=0xf0}, {.addr=0xe65e, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xe65f, .a=0xf7, .x=0x89, .y=0xc5, .sp=0x9c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe65d, .value=0xf0}, {.addr=0xe65e, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xe65d, .value=0xf0, .type=IO_READ},
        {.addr=0xe65e, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0240) {
    const struct CPU_State initial_cpu = {.pc=0xc9bf, .a=0xb7, .x=0x02, .y=0x52, .sp=0xf1, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xc9bf, .value=0xf0}, {.addr=0xc9c0, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xc9c1, .a=0xb7, .x=0x02, .y=0x52, .sp=0xf1, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc9bf, .value=0xf0}, {.addr=0xc9c0, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xc9bf, .value=0xf0, .type=IO_READ},
        {.addr=0xc9c0, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0241) {
    const struct CPU_State initial_cpu = {.pc=0x4a55, .a=0x0b, .x=0x18, .y=0x46, .sp=0x31, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x4a55, .value=0xf0}, {.addr=0x4a56, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x4a6d, .a=0x0b, .x=0x18, .y=0x46, .sp=0x31, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x4a55, .value=0xf0}, {.addr=0x4a56, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x4a55, .value=0xf0, .type=IO_READ},
        {.addr=0x4a56, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0242) {
    const struct CPU_State initial_cpu = {.pc=0x8992, .a=0x87, .x=0x8e, .y=0xdf, .sp=0xa5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8992, .value=0xf0}, {.addr=0x8993, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x8994, .a=0x87, .x=0x8e, .y=0xdf, .sp=0xa5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8992, .value=0xf0}, {.addr=0x8993, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x8992, .value=0xf0, .type=IO_READ},
        {.addr=0x8993, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0243) {
    const struct CPU_State initial_cpu = {.pc=0xcb1a, .a=0xcf, .x=0xdc, .y=0x5d, .sp=0xaa, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xcb1a, .value=0xf0}, {.addr=0xcb1b, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xcb1c, .a=0xcf, .x=0xdc, .y=0x5d, .sp=0xaa, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xcb1a, .value=0xf0}, {.addr=0xcb1b, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xcb1a, .value=0xf0, .type=IO_READ},
        {.addr=0xcb1b, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0244) {
    const struct CPU_State initial_cpu = {.pc=0x6792, .a=0x4a, .x=0x6c, .y=0x1b, .sp=0x00, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x6792, .value=0xf0}, {.addr=0x6793, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x6812, .a=0x4a, .x=0x6c, .y=0x1b, .sp=0x00, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x6792, .value=0xf0}, {.addr=0x6793, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x6792, .value=0xf0, .type=IO_READ},
        {.addr=0x6793, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0245) {
    const struct CPU_State initial_cpu = {.pc=0x1026, .a=0xda, .x=0x33, .y=0x1c, .sp=0x85, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x1026, .value=0xf0}, {.addr=0x1027, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x1028, .a=0xda, .x=0x33, .y=0x1c, .sp=0x85, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x1026, .value=0xf0}, {.addr=0x1027, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x1026, .value=0xf0, .type=IO_READ},
        {.addr=0x1027, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0246) {
    const struct CPU_State initial_cpu = {.pc=0xae76, .a=0x43, .x=0xf7, .y=0xd2, .sp=0x2f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xae76, .value=0xf0}, {.addr=0xae77, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xae78, .a=0x43, .x=0xf7, .y=0xd2, .sp=0x2f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xae76, .value=0xf0}, {.addr=0xae77, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xae76, .value=0xf0, .type=IO_READ},
        {.addr=0xae77, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0247) {
    const struct CPU_State initial_cpu = {.pc=0x7154, .a=0x7d, .x=0x86, .y=0xd7, .sp=0xd8, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x7154, .value=0xf0}, {.addr=0x7155, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x7156, .a=0x7d, .x=0x86, .y=0xd7, .sp=0xd8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x7154, .value=0xf0}, {.addr=0x7155, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x7154, .value=0xf0, .type=IO_READ},
        {.addr=0x7155, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0248) {
    const struct CPU_State initial_cpu = {.pc=0x384f, .a=0x83, .x=0x46, .y=0x63, .sp=0x8e, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x384f, .value=0xf0}, {.addr=0x3850, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x3851, .a=0x83, .x=0x46, .y=0x63, .sp=0x8e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x384f, .value=0xf0}, {.addr=0x3850, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x384f, .value=0xf0, .type=IO_READ},
        {.addr=0x3850, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0249) {
    const struct CPU_State initial_cpu = {.pc=0xd065, .a=0xff, .x=0x7a, .y=0x47, .sp=0xa4, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xd065, .value=0xf0}, {.addr=0xd066, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xd067, .a=0xff, .x=0x7a, .y=0x47, .sp=0xa4, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd065, .value=0xf0}, {.addr=0xd066, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xd065, .value=0xf0, .type=IO_READ},
        {.addr=0xd066, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_024A) {
    const struct CPU_State initial_cpu = {.pc=0xfbfc, .a=0x17, .x=0xcc, .y=0xd8, .sp=0x25, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xfbfc, .value=0xf0}, {.addr=0xfbfd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfbfe, .a=0x17, .x=0xcc, .y=0xd8, .sp=0x25, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xfbfc, .value=0xf0}, {.addr=0xfbfd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfbfc, .value=0xf0, .type=IO_READ},
        {.addr=0xfbfd, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_024B) {
    const struct CPU_State initial_cpu = {.pc=0xd927, .a=0x5c, .x=0xb3, .y=0x81, .sp=0xeb, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xd927, .value=0xf0}, {.addr=0xd928, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xd929, .a=0x5c, .x=0xb3, .y=0x81, .sp=0xeb, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd927, .value=0xf0}, {.addr=0xd928, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xd927, .value=0xf0, .type=IO_READ},
        {.addr=0xd928, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_024C) {
    const struct CPU_State initial_cpu = {.pc=0xb599, .a=0xfb, .x=0x90, .y=0x4b, .sp=0xfe, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xb599, .value=0xf0}, {.addr=0xb59a, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xb59b, .a=0xfb, .x=0x90, .y=0x4b, .sp=0xfe, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xb599, .value=0xf0}, {.addr=0xb59a, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xb599, .value=0xf0, .type=IO_READ},
        {.addr=0xb59a, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_024D) {
    const struct CPU_State initial_cpu = {.pc=0xe26b, .a=0xbb, .x=0xed, .y=0x79, .sp=0x91, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xe26b, .value=0xf0}, {.addr=0xe26c, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xe2d9, .a=0xbb, .x=0xed, .y=0x79, .sp=0x91, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xe26b, .value=0xf0}, {.addr=0xe26c, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xe26b, .value=0xf0, .type=IO_READ},
        {.addr=0xe26c, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_024E) {
    const struct CPU_State initial_cpu = {.pc=0xccbf, .a=0xdc, .x=0x0d, .y=0x7e, .sp=0xaf, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xccbf, .value=0xf0}, {.addr=0xccc0, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xccc1, .a=0xdc, .x=0x0d, .y=0x7e, .sp=0xaf, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xccbf, .value=0xf0}, {.addr=0xccc0, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xccbf, .value=0xf0, .type=IO_READ},
        {.addr=0xccc0, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_024F) {
    const struct CPU_State initial_cpu = {.pc=0xaa64, .a=0x92, .x=0x2b, .y=0xc9, .sp=0x8f, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xaa64, .value=0xf0}, {.addr=0xaa65, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xaa6e, .a=0x92, .x=0x2b, .y=0xc9, .sp=0x8f, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xaa64, .value=0xf0}, {.addr=0xaa65, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xaa64, .value=0xf0, .type=IO_READ},
        {.addr=0xaa65, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0250) {
    const struct CPU_State initial_cpu = {.pc=0x627b, .a=0x96, .x=0x13, .y=0x4b, .sp=0x6d, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x627b, .value=0xf0}, {.addr=0x627c, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x62c9, .a=0x96, .x=0x13, .y=0x4b, .sp=0x6d, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x627b, .value=0xf0}, {.addr=0x627c, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x627b, .value=0xf0, .type=IO_READ},
        {.addr=0x627c, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0251) {
    const struct CPU_State initial_cpu = {.pc=0x051b, .a=0xb2, .x=0xa6, .y=0xb4, .sp=0x7e, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x051b, .value=0xf0}, {.addr=0x051c, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x0530, .a=0xb2, .x=0xa6, .y=0xb4, .sp=0x7e, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x051b, .value=0xf0}, {.addr=0x051c, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x051b, .value=0xf0, .type=IO_READ},
        {.addr=0x051c, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0252) {
    const struct CPU_State initial_cpu = {.pc=0xc8ec, .a=0x4f, .x=0x70, .y=0xae, .sp=0xbe, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xc8ec, .value=0xf0}, {.addr=0xc8ed, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xc947, .a=0x4f, .x=0x70, .y=0xae, .sp=0xbe, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xc8ec, .value=0xf0}, {.addr=0xc8ed, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xc8ec, .value=0xf0, .type=IO_READ},
        {.addr=0xc8ed, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0253) {
    const struct CPU_State initial_cpu = {.pc=0xefe9, .a=0xff, .x=0x4a, .y=0xe2, .sp=0xb2, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xefe9, .value=0xf0}, {.addr=0xefea, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xefca, .a=0xff, .x=0x4a, .y=0xe2, .sp=0xb2, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xefe9, .value=0xf0}, {.addr=0xefea, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xefe9, .value=0xf0, .type=IO_READ},
        {.addr=0xefea, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0254) {
    const struct CPU_State initial_cpu = {.pc=0xaa2b, .a=0xb9, .x=0x2b, .y=0xdb, .sp=0x6e, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xaa2b, .value=0xf0}, {.addr=0xaa2c, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xaa24, .a=0xb9, .x=0x2b, .y=0xdb, .sp=0x6e, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xaa2b, .value=0xf0}, {.addr=0xaa2c, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xaa2b, .value=0xf0, .type=IO_READ},
        {.addr=0xaa2c, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0255) {
    const struct CPU_State initial_cpu = {.pc=0xfc24, .a=0xe0, .x=0x01, .y=0x05, .sp=0x78, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xfc24, .value=0xf0}, {.addr=0xfc25, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xfbea, .a=0xe0, .x=0x01, .y=0x05, .sp=0x78, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xfc24, .value=0xf0}, {.addr=0xfc25, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xfc24, .value=0xf0, .type=IO_READ},
        {.addr=0xfc25, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0256) {
    const struct CPU_State initial_cpu = {.pc=0xb3e6, .a=0x43, .x=0xd2, .y=0xb0, .sp=0x28, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xb3e6, .value=0xf0}, {.addr=0xb3e7, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xb439, .a=0x43, .x=0xd2, .y=0xb0, .sp=0x28, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xb3e6, .value=0xf0}, {.addr=0xb3e7, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xb3e6, .value=0xf0, .type=IO_READ},
        {.addr=0xb3e7, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0257) {
    const struct CPU_State initial_cpu = {.pc=0xf722, .a=0x94, .x=0x1a, .y=0x75, .sp=0xcb, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xf722, .value=0xf0}, {.addr=0xf723, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf6e1, .a=0x94, .x=0x1a, .y=0x75, .sp=0xcb, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xf722, .value=0xf0}, {.addr=0xf723, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf722, .value=0xf0, .type=IO_READ},
        {.addr=0xf723, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0258) {
    const struct CPU_State initial_cpu = {.pc=0xa5ae, .a=0xb4, .x=0x57, .y=0xb4, .sp=0xfb, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xa5ae, .value=0xf0}, {.addr=0xa5af, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xa600, .a=0xb4, .x=0x57, .y=0xb4, .sp=0xfb, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xa5ae, .value=0xf0}, {.addr=0xa5af, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xa5ae, .value=0xf0, .type=IO_READ},
        {.addr=0xa5af, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0259) {
    const struct CPU_State initial_cpu = {.pc=0xd37f, .a=0x5b, .x=0x99, .y=0x5a, .sp=0x85, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xd37f, .value=0xf0}, {.addr=0xd380, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xd3b5, .a=0x5b, .x=0x99, .y=0x5a, .sp=0x85, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xd37f, .value=0xf0}, {.addr=0xd380, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xd37f, .value=0xf0, .type=IO_READ},
        {.addr=0xd380, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_025A) {
    const struct CPU_State initial_cpu = {.pc=0x58aa, .a=0x40, .x=0x5b, .y=0xce, .sp=0xbc, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x58aa, .value=0xf0}, {.addr=0x58ab, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x58ac, .a=0x40, .x=0x5b, .y=0xce, .sp=0xbc, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x58aa, .value=0xf0}, {.addr=0x58ab, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x58aa, .value=0xf0, .type=IO_READ},
        {.addr=0x58ab, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_025B) {
    const struct CPU_State initial_cpu = {.pc=0xe4e1, .a=0x14, .x=0xd0, .y=0xd6, .sp=0xd6, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xe4e1, .value=0xf0}, {.addr=0xe4e2, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xe4e3, .a=0x14, .x=0xd0, .y=0xd6, .sp=0xd6, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xe4e1, .value=0xf0}, {.addr=0xe4e2, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xe4e1, .value=0xf0, .type=IO_READ},
        {.addr=0xe4e2, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_025C) {
    const struct CPU_State initial_cpu = {.pc=0xb367, .a=0xed, .x=0x89, .y=0x2d, .sp=0xf8, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xb367, .value=0xf0}, {.addr=0xb368, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xb369, .a=0xed, .x=0x89, .y=0x2d, .sp=0xf8, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xb367, .value=0xf0}, {.addr=0xb368, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xb367, .value=0xf0, .type=IO_READ},
        {.addr=0xb368, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_025D) {
    const struct CPU_State initial_cpu = {.pc=0x2bda, .a=0xbd, .x=0x6d, .y=0xdc, .sp=0x53, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x2bda, .value=0xf0}, {.addr=0x2bdb, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x2b71, .a=0xbd, .x=0x6d, .y=0xdc, .sp=0x53, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x2bda, .value=0xf0}, {.addr=0x2bdb, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x2bda, .value=0xf0, .type=IO_READ},
        {.addr=0x2bdb, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_025E) {
    const struct CPU_State initial_cpu = {.pc=0x4416, .a=0x19, .x=0x79, .y=0xa9, .sp=0x27, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x4416, .value=0xf0}, {.addr=0x4417, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x43b7, .a=0x19, .x=0x79, .y=0xa9, .sp=0x27, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x4416, .value=0xf0}, {.addr=0x4417, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4416, .value=0xf0, .type=IO_READ},
        {.addr=0x4417, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_025F) {
    const struct CPU_State initial_cpu = {.pc=0xd4a2, .a=0x6e, .x=0xc2, .y=0xf0, .sp=0xb9, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xd4a2, .value=0xf0}, {.addr=0xd4a3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xd4a4, .a=0x6e, .x=0xc2, .y=0xf0, .sp=0xb9, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd4a2, .value=0xf0}, {.addr=0xd4a3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xd4a2, .value=0xf0, .type=IO_READ},
        {.addr=0xd4a3, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0260) {
    const struct CPU_State initial_cpu = {.pc=0xd02e, .a=0xd1, .x=0x2c, .y=0xb8, .sp=0xca, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd02e, .value=0xf0}, {.addr=0xd02f, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xd030, .a=0xd1, .x=0x2c, .y=0xb8, .sp=0xca, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd02e, .value=0xf0}, {.addr=0xd02f, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xd02e, .value=0xf0, .type=IO_READ},
        {.addr=0xd02f, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0261) {
    const struct CPU_State initial_cpu = {.pc=0xcb41, .a=0x8b, .x=0x69, .y=0x77, .sp=0x08, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xcb41, .value=0xf0}, {.addr=0xcb42, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xcb08, .a=0x8b, .x=0x69, .y=0x77, .sp=0x08, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xcb41, .value=0xf0}, {.addr=0xcb42, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xcb41, .value=0xf0, .type=IO_READ},
        {.addr=0xcb42, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0262) {
    const struct CPU_State initial_cpu = {.pc=0x2644, .a=0x38, .x=0x01, .y=0xd5, .sp=0xda, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x2644, .value=0xf0}, {.addr=0x2645, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x2646, .a=0x38, .x=0x01, .y=0xd5, .sp=0xda, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2644, .value=0xf0}, {.addr=0x2645, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x2644, .value=0xf0, .type=IO_READ},
        {.addr=0x2645, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0263) {
    const struct CPU_State initial_cpu = {.pc=0x50d6, .a=0xa4, .x=0xd3, .y=0xfe, .sp=0xb3, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x50d6, .value=0xf0}, {.addr=0x50d7, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x50d8, .a=0xa4, .x=0xd3, .y=0xfe, .sp=0xb3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x50d6, .value=0xf0}, {.addr=0x50d7, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x50d6, .value=0xf0, .type=IO_READ},
        {.addr=0x50d7, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0264) {
    const struct CPU_State initial_cpu = {.pc=0xa7fc, .a=0x91, .x=0x5d, .y=0x0c, .sp=0xf9, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xa7fc, .value=0xf0}, {.addr=0xa7fd, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xa7af, .a=0x91, .x=0x5d, .y=0x0c, .sp=0xf9, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xa7fc, .value=0xf0}, {.addr=0xa7fd, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xa7fc, .value=0xf0, .type=IO_READ},
        {.addr=0xa7fd, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0265) {
    const struct CPU_State initial_cpu = {.pc=0x2012, .a=0xc8, .x=0x15, .y=0x26, .sp=0xfe, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x2012, .value=0xf0}, {.addr=0x2013, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x2014, .a=0xc8, .x=0x15, .y=0x26, .sp=0xfe, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x2012, .value=0xf0}, {.addr=0x2013, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x2012, .value=0xf0, .type=IO_READ},
        {.addr=0x2013, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0266) {
    const struct CPU_State initial_cpu = {.pc=0xaac5, .a=0x96, .x=0x60, .y=0x4a, .sp=0x99, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xaac5, .value=0xf0}, {.addr=0xaac6, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xab40, .a=0x96, .x=0x60, .y=0x4a, .sp=0x99, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xaac5, .value=0xf0}, {.addr=0xaac6, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xaac5, .value=0xf0, .type=IO_READ},
        {.addr=0xaac6, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0267) {
    const struct CPU_State initial_cpu = {.pc=0x96eb, .a=0x90, .x=0x03, .y=0xb9, .sp=0x1e, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x96eb, .value=0xf0}, {.addr=0x96ec, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x9716, .a=0x90, .x=0x03, .y=0xb9, .sp=0x1e, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x96eb, .value=0xf0}, {.addr=0x96ec, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x96eb, .value=0xf0, .type=IO_READ},
        {.addr=0x96ec, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0268) {
    const struct CPU_State initial_cpu = {.pc=0x006f, .a=0xa4, .x=0x32, .y=0x27, .sp=0xe0, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0xf0}, {.addr=0x0070, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x0092, .a=0xa4, .x=0x32, .y=0x27, .sp=0xe0, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0xf0}, {.addr=0x0070, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x006f, .value=0xf0, .type=IO_READ},
        {.addr=0x0070, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0269) {
    const struct CPU_State initial_cpu = {.pc=0x06f4, .a=0x45, .x=0xe3, .y=0x01, .sp=0xfb, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x06f4, .value=0xf0}, {.addr=0x06f5, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x06f6, .a=0x45, .x=0xe3, .y=0x01, .sp=0xfb, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x06f4, .value=0xf0}, {.addr=0x06f5, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x06f4, .value=0xf0, .type=IO_READ},
        {.addr=0x06f5, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_026A) {
    const struct CPU_State initial_cpu = {.pc=0x91fe, .a=0x3a, .x=0xa1, .y=0x49, .sp=0x27, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x91fe, .value=0xf0}, {.addr=0x91ff, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x9200, .a=0x3a, .x=0xa1, .y=0x49, .sp=0x27, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x91fe, .value=0xf0}, {.addr=0x91ff, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x91fe, .value=0xf0, .type=IO_READ},
        {.addr=0x91ff, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_026B) {
    const struct CPU_State initial_cpu = {.pc=0x51c4, .a=0x53, .x=0xba, .y=0x56, .sp=0x82, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x51c4, .value=0xf0}, {.addr=0x51c5, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x5160, .a=0x53, .x=0xba, .y=0x56, .sp=0x82, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x51c4, .value=0xf0}, {.addr=0x51c5, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x51c4, .value=0xf0, .type=IO_READ},
        {.addr=0x51c5, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_026C) {
    const struct CPU_State initial_cpu = {.pc=0xfe27, .a=0x0c, .x=0xab, .y=0xf3, .sp=0x4c, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xfe27, .value=0xf0}, {.addr=0xfe28, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xfe29, .a=0x0c, .x=0xab, .y=0xf3, .sp=0x4c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xfe27, .value=0xf0}, {.addr=0xfe28, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xfe27, .value=0xf0, .type=IO_READ},
        {.addr=0xfe28, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_026D) {
    const struct CPU_State initial_cpu = {.pc=0xae54, .a=0xdf, .x=0x42, .y=0xb9, .sp=0x99, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xae54, .value=0xf0}, {.addr=0xae55, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xae06, .a=0xdf, .x=0x42, .y=0xb9, .sp=0x99, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xae54, .value=0xf0}, {.addr=0xae55, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xae54, .value=0xf0, .type=IO_READ},
        {.addr=0xae55, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_026E) {
    const struct CPU_State initial_cpu = {.pc=0xf92c, .a=0xd6, .x=0x6f, .y=0x83, .sp=0x09, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xf92c, .value=0xf0}, {.addr=0xf92d, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xf91e, .a=0xd6, .x=0x6f, .y=0x83, .sp=0x09, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xf92c, .value=0xf0}, {.addr=0xf92d, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xf92c, .value=0xf0, .type=IO_READ},
        {.addr=0xf92d, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_026F) {
    const struct CPU_State initial_cpu = {.pc=0x4456, .a=0x8a, .x=0x5b, .y=0xb3, .sp=0x9f, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x4456, .value=0xf0}, {.addr=0x4457, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x4458, .a=0x8a, .x=0x5b, .y=0xb3, .sp=0x9f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4456, .value=0xf0}, {.addr=0x4457, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x4456, .value=0xf0, .type=IO_READ},
        {.addr=0x4457, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0270) {
    const struct CPU_State initial_cpu = {.pc=0x82db, .a=0x5c, .x=0x29, .y=0xb4, .sp=0xe5, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x82db, .value=0xf0}, {.addr=0x82dc, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x82b4, .a=0x5c, .x=0x29, .y=0xb4, .sp=0xe5, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x82db, .value=0xf0}, {.addr=0x82dc, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x82db, .value=0xf0, .type=IO_READ},
        {.addr=0x82dc, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0271) {
    const struct CPU_State initial_cpu = {.pc=0x0aa0, .a=0x1d, .x=0xda, .y=0xf2, .sp=0x55, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0aa0, .value=0xf0}, {.addr=0x0aa1, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x0aa2, .a=0x1d, .x=0xda, .y=0xf2, .sp=0x55, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0aa0, .value=0xf0}, {.addr=0x0aa1, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x0aa0, .value=0xf0, .type=IO_READ},
        {.addr=0x0aa1, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0272) {
    const struct CPU_State initial_cpu = {.pc=0x853d, .a=0x01, .x=0x87, .y=0x32, .sp=0x51, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x853d, .value=0xf0}, {.addr=0x853e, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x8586, .a=0x01, .x=0x87, .y=0x32, .sp=0x51, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x853d, .value=0xf0}, {.addr=0x853e, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x853d, .value=0xf0, .type=IO_READ},
        {.addr=0x853e, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0273) {
    const struct CPU_State initial_cpu = {.pc=0xaa18, .a=0x37, .x=0xfc, .y=0x39, .sp=0x46, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xaa18, .value=0xf0}, {.addr=0xaa19, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xaa5c, .a=0x37, .x=0xfc, .y=0x39, .sp=0x46, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xaa18, .value=0xf0}, {.addr=0xaa19, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xaa18, .value=0xf0, .type=IO_READ},
        {.addr=0xaa19, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0274) {
    const struct CPU_State initial_cpu = {.pc=0xb204, .a=0x51, .x=0xee, .y=0x71, .sp=0xb9, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xb204, .value=0xf0}, {.addr=0xb205, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xb1af, .a=0x51, .x=0xee, .y=0x71, .sp=0xb9, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xb204, .value=0xf0}, {.addr=0xb205, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xb204, .value=0xf0, .type=IO_READ},
        {.addr=0xb205, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0275) {
    const struct CPU_State initial_cpu = {.pc=0xce36, .a=0x4c, .x=0x3c, .y=0x1a, .sp=0xfa, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xce36, .value=0xf0}, {.addr=0xce37, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xce38, .a=0x4c, .x=0x3c, .y=0x1a, .sp=0xfa, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xce36, .value=0xf0}, {.addr=0xce37, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xce36, .value=0xf0, .type=IO_READ},
        {.addr=0xce37, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0276) {
    const struct CPU_State initial_cpu = {.pc=0x75e4, .a=0xfa, .x=0x46, .y=0xe0, .sp=0xf9, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x75e4, .value=0xf0}, {.addr=0x75e5, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x75ad, .a=0xfa, .x=0x46, .y=0xe0, .sp=0xf9, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x75e4, .value=0xf0}, {.addr=0x75e5, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x75e4, .value=0xf0, .type=IO_READ},
        {.addr=0x75e5, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0277) {
    const struct CPU_State initial_cpu = {.pc=0xab50, .a=0x94, .x=0x51, .y=0x9e, .sp=0xef, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xab50, .value=0xf0}, {.addr=0xab51, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xab69, .a=0x94, .x=0x51, .y=0x9e, .sp=0xef, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xab50, .value=0xf0}, {.addr=0xab51, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xab50, .value=0xf0, .type=IO_READ},
        {.addr=0xab51, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0278) {
    const struct CPU_State initial_cpu = {.pc=0x1c76, .a=0x71, .x=0x1c, .y=0xfe, .sp=0xb4, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1c76, .value=0xf0}, {.addr=0x1c77, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x1ca8, .a=0x71, .x=0x1c, .y=0xfe, .sp=0xb4, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x1c76, .value=0xf0}, {.addr=0x1c77, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x1c76, .value=0xf0, .type=IO_READ},
        {.addr=0x1c77, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0279) {
    const struct CPU_State initial_cpu = {.pc=0x3e86, .a=0x16, .x=0x07, .y=0x42, .sp=0xb3, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x3e86, .value=0xf0}, {.addr=0x3e87, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x3e88, .a=0x16, .x=0x07, .y=0x42, .sp=0xb3, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x3e86, .value=0xf0}, {.addr=0x3e87, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x3e86, .value=0xf0, .type=IO_READ},
        {.addr=0x3e87, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_027A) {
    const struct CPU_State initial_cpu = {.pc=0x7f8b, .a=0xa4, .x=0xfa, .y=0xea, .sp=0x21, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x7f8b, .value=0xf0}, {.addr=0x7f8c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7f3c, .a=0xa4, .x=0xfa, .y=0xea, .sp=0x21, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x7f8b, .value=0xf0}, {.addr=0x7f8c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7f8b, .value=0xf0, .type=IO_READ},
        {.addr=0x7f8c, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_027B) {
    const struct CPU_State initial_cpu = {.pc=0xd724, .a=0x26, .x=0xbe, .y=0xd8, .sp=0xad, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xd724, .value=0xf0}, {.addr=0xd725, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xd726, .a=0x26, .x=0xbe, .y=0xd8, .sp=0xad, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xd724, .value=0xf0}, {.addr=0xd725, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xd724, .value=0xf0, .type=IO_READ},
        {.addr=0xd725, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_027C) {
    const struct CPU_State initial_cpu = {.pc=0x86f0, .a=0x9a, .x=0x5a, .y=0x9e, .sp=0xaa, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x86f0, .value=0xf0}, {.addr=0x86f1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8680, .a=0x9a, .x=0x5a, .y=0x9e, .sp=0xaa, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x86f0, .value=0xf0}, {.addr=0x86f1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x86f0, .value=0xf0, .type=IO_READ},
        {.addr=0x86f1, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_027D) {
    const struct CPU_State initial_cpu = {.pc=0xc518, .a=0x44, .x=0x4f, .y=0x96, .sp=0x87, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xc518, .value=0xf0}, {.addr=0xc519, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc4fa, .a=0x44, .x=0x4f, .y=0x96, .sp=0x87, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xc518, .value=0xf0}, {.addr=0xc519, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc518, .value=0xf0, .type=IO_READ},
        {.addr=0xc519, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_027E) {
    const struct CPU_State initial_cpu = {.pc=0x17f1, .a=0x9b, .x=0xf5, .y=0x9d, .sp=0x56, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x17f1, .value=0xf0}, {.addr=0x17f2, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x17f3, .a=0x9b, .x=0xf5, .y=0x9d, .sp=0x56, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x17f1, .value=0xf0}, {.addr=0x17f2, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x17f1, .value=0xf0, .type=IO_READ},
        {.addr=0x17f2, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_027F) {
    const struct CPU_State initial_cpu = {.pc=0x281e, .a=0x4d, .x=0xf0, .y=0x4d, .sp=0xac, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x281e, .value=0xf0}, {.addr=0x281f, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x27a3, .a=0x4d, .x=0xf0, .y=0x4d, .sp=0xac, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x281e, .value=0xf0}, {.addr=0x281f, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x281e, .value=0xf0, .type=IO_READ},
        {.addr=0x281f, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0280) {
    const struct CPU_State initial_cpu = {.pc=0x73b8, .a=0x0d, .x=0x38, .y=0xca, .sp=0x64, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x73b8, .value=0xf0}, {.addr=0x73b9, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x73ab, .a=0x0d, .x=0x38, .y=0xca, .sp=0x64, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x73b8, .value=0xf0}, {.addr=0x73b9, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x73b8, .value=0xf0, .type=IO_READ},
        {.addr=0x73b9, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0281) {
    const struct CPU_State initial_cpu = {.pc=0xf047, .a=0xbb, .x=0x76, .y=0x0c, .sp=0xef, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xf047, .value=0xf0}, {.addr=0xf048, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xf01d, .a=0xbb, .x=0x76, .y=0x0c, .sp=0xef, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xf047, .value=0xf0}, {.addr=0xf048, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xf047, .value=0xf0, .type=IO_READ},
        {.addr=0xf048, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0282) {
    const struct CPU_State initial_cpu = {.pc=0xfae7, .a=0x17, .x=0x9c, .y=0x4f, .sp=0x82, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xfae7, .value=0xf0}, {.addr=0xfae8, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xfae9, .a=0x17, .x=0x9c, .y=0x4f, .sp=0x82, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xfae7, .value=0xf0}, {.addr=0xfae8, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xfae7, .value=0xf0, .type=IO_READ},
        {.addr=0xfae8, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0283) {
    const struct CPU_State initial_cpu = {.pc=0xcc77, .a=0x5b, .x=0xbe, .y=0x30, .sp=0xda, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xcc77, .value=0xf0}, {.addr=0xcc78, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xcc79, .a=0x5b, .x=0xbe, .y=0x30, .sp=0xda, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xcc77, .value=0xf0}, {.addr=0xcc78, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xcc77, .value=0xf0, .type=IO_READ},
        {.addr=0xcc78, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0284) {
    const struct CPU_State initial_cpu = {.pc=0xbd26, .a=0x45, .x=0xbc, .y=0x39, .sp=0xa6, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xbd26, .value=0xf0}, {.addr=0xbd27, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xbd28, .a=0x45, .x=0xbc, .y=0x39, .sp=0xa6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xbd26, .value=0xf0}, {.addr=0xbd27, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xbd26, .value=0xf0, .type=IO_READ},
        {.addr=0xbd27, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0285) {
    const struct CPU_State initial_cpu = {.pc=0x394a, .a=0x57, .x=0xcb, .y=0x43, .sp=0xc5, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x394a, .value=0xf0}, {.addr=0x394b, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x3919, .a=0x57, .x=0xcb, .y=0x43, .sp=0xc5, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x394a, .value=0xf0}, {.addr=0x394b, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x394a, .value=0xf0, .type=IO_READ},
        {.addr=0x394b, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0286) {
    const struct CPU_State initial_cpu = {.pc=0x5656, .a=0x3d, .x=0xef, .y=0x5e, .sp=0x5e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x5656, .value=0xf0}, {.addr=0x5657, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x569e, .a=0x3d, .x=0xef, .y=0x5e, .sp=0x5e, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x5656, .value=0xf0}, {.addr=0x5657, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5656, .value=0xf0, .type=IO_READ},
        {.addr=0x5657, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0287) {
    const struct CPU_State initial_cpu = {.pc=0x4941, .a=0x94, .x=0xed, .y=0x6f, .sp=0xfb, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x4941, .value=0xf0}, {.addr=0x4942, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x4943, .a=0x94, .x=0xed, .y=0x6f, .sp=0xfb, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4941, .value=0xf0}, {.addr=0x4942, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x4941, .value=0xf0, .type=IO_READ},
        {.addr=0x4942, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0288) {
    const struct CPU_State initial_cpu = {.pc=0xd65b, .a=0xbb, .x=0x42, .y=0xc2, .sp=0x06, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xd65b, .value=0xf0}, {.addr=0xd65c, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xd6b8, .a=0xbb, .x=0x42, .y=0xc2, .sp=0x06, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xd65b, .value=0xf0}, {.addr=0xd65c, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xd65b, .value=0xf0, .type=IO_READ},
        {.addr=0xd65c, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0289) {
    const struct CPU_State initial_cpu = {.pc=0x1957, .a=0x28, .x=0x9e, .y=0x34, .sp=0xb1, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x1957, .value=0xf0}, {.addr=0x1958, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x1959, .a=0x28, .x=0x9e, .y=0x34, .sp=0xb1, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x1957, .value=0xf0}, {.addr=0x1958, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x1957, .value=0xf0, .type=IO_READ},
        {.addr=0x1958, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_028A) {
    const struct CPU_State initial_cpu = {.pc=0x0e39, .a=0x01, .x=0x5e, .y=0x5a, .sp=0xd3, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0e39, .value=0xf0}, {.addr=0x0e3a, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x0e3b, .a=0x01, .x=0x5e, .y=0x5a, .sp=0xd3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0e39, .value=0xf0}, {.addr=0x0e3a, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x0e39, .value=0xf0, .type=IO_READ},
        {.addr=0x0e3a, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_028B) {
    const struct CPU_State initial_cpu = {.pc=0xe1da, .a=0x11, .x=0x6f, .y=0x16, .sp=0x5a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xe1da, .value=0xf0}, {.addr=0xe1db, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xe20d, .a=0x11, .x=0x6f, .y=0x16, .sp=0x5a, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xe1da, .value=0xf0}, {.addr=0xe1db, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xe1da, .value=0xf0, .type=IO_READ},
        {.addr=0xe1db, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_028C) {
    const struct CPU_State initial_cpu = {.pc=0x9eac, .a=0x68, .x=0x76, .y=0x0e, .sp=0x8c, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x9eac, .value=0xf0}, {.addr=0x9ead, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x9eae, .a=0x68, .x=0x76, .y=0x0e, .sp=0x8c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9eac, .value=0xf0}, {.addr=0x9ead, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x9eac, .value=0xf0, .type=IO_READ},
        {.addr=0x9ead, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_028D) {
    const struct CPU_State initial_cpu = {.pc=0x0729, .a=0xc4, .x=0xef, .y=0xcc, .sp=0xd2, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0729, .value=0xf0}, {.addr=0x072a, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x079b, .a=0xc4, .x=0xef, .y=0xcc, .sp=0xd2, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0729, .value=0xf0}, {.addr=0x072a, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x0729, .value=0xf0, .type=IO_READ},
        {.addr=0x072a, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_028E) {
    const struct CPU_State initial_cpu = {.pc=0xdf3c, .a=0x84, .x=0x72, .y=0x92, .sp=0xc0, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xdf3c, .value=0xf0}, {.addr=0xdf3d, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xdf3e, .a=0x84, .x=0x72, .y=0x92, .sp=0xc0, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xdf3c, .value=0xf0}, {.addr=0xdf3d, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xdf3c, .value=0xf0, .type=IO_READ},
        {.addr=0xdf3d, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_028F) {
    const struct CPU_State initial_cpu = {.pc=0xfbbc, .a=0x63, .x=0x1f, .y=0x1b, .sp=0xc3, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xfbbc, .value=0xf0}, {.addr=0xfbbd, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xfbe8, .a=0x63, .x=0x1f, .y=0x1b, .sp=0xc3, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xfbbc, .value=0xf0}, {.addr=0xfbbd, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xfbbc, .value=0xf0, .type=IO_READ},
        {.addr=0xfbbd, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0290) {
    const struct CPU_State initial_cpu = {.pc=0x6d6b, .a=0x70, .x=0x99, .y=0x5c, .sp=0x32, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x6d6b, .value=0xf0}, {.addr=0x6d6c, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x6d6e, .a=0x70, .x=0x99, .y=0x5c, .sp=0x32, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x6d6b, .value=0xf0}, {.addr=0x6d6c, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x6d6b, .value=0xf0, .type=IO_READ},
        {.addr=0x6d6c, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0291) {
    const struct CPU_State initial_cpu = {.pc=0x2232, .a=0xdb, .x=0xca, .y=0xeb, .sp=0x90, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2232, .value=0xf0}, {.addr=0x2233, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x2234, .a=0xdb, .x=0xca, .y=0xeb, .sp=0x90, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2232, .value=0xf0}, {.addr=0x2233, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x2232, .value=0xf0, .type=IO_READ},
        {.addr=0x2233, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0292) {
    const struct CPU_State initial_cpu = {.pc=0x7c6f, .a=0xe7, .x=0x2b, .y=0x89, .sp=0x1e, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6f, .value=0xf0}, {.addr=0x7c70, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x7c71, .a=0xe7, .x=0x2b, .y=0x89, .sp=0x1e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7c6f, .value=0xf0}, {.addr=0x7c70, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x7c6f, .value=0xf0, .type=IO_READ},
        {.addr=0x7c70, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0293) {
    const struct CPU_State initial_cpu = {.pc=0x21e6, .a=0x2e, .x=0xc4, .y=0x9b, .sp=0x3a, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x21e6, .value=0xf0}, {.addr=0x21e7, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x21e8, .a=0x2e, .x=0xc4, .y=0x9b, .sp=0x3a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x21e6, .value=0xf0}, {.addr=0x21e7, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x21e6, .value=0xf0, .type=IO_READ},
        {.addr=0x21e7, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0294) {
    const struct CPU_State initial_cpu = {.pc=0x9cc3, .a=0xac, .x=0x4d, .y=0x51, .sp=0x67, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x9cc3, .value=0xf0}, {.addr=0x9cc4, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x9d20, .a=0xac, .x=0x4d, .y=0x51, .sp=0x67, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x9cc3, .value=0xf0}, {.addr=0x9cc4, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x9cc3, .value=0xf0, .type=IO_READ},
        {.addr=0x9cc4, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0295) {
    const struct CPU_State initial_cpu = {.pc=0xfb06, .a=0xd7, .x=0x35, .y=0x0f, .sp=0xfa, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xfb06, .value=0xf0}, {.addr=0xfb07, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xfb08, .a=0xd7, .x=0x35, .y=0x0f, .sp=0xfa, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xfb06, .value=0xf0}, {.addr=0xfb07, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xfb06, .value=0xf0, .type=IO_READ},
        {.addr=0xfb07, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0296) {
    const struct CPU_State initial_cpu = {.pc=0xa49c, .a=0x57, .x=0x7d, .y=0x48, .sp=0xe3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xa49c, .value=0xf0}, {.addr=0xa49d, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xa477, .a=0x57, .x=0x7d, .y=0x48, .sp=0xe3, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xa49c, .value=0xf0}, {.addr=0xa49d, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xa49c, .value=0xf0, .type=IO_READ},
        {.addr=0xa49d, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0297) {
    const struct CPU_State initial_cpu = {.pc=0xed9d, .a=0x58, .x=0x29, .y=0x83, .sp=0x34, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xed9d, .value=0xf0}, {.addr=0xed9e, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xed23, .a=0x58, .x=0x29, .y=0x83, .sp=0x34, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xed9d, .value=0xf0}, {.addr=0xed9e, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xed9d, .value=0xf0, .type=IO_READ},
        {.addr=0xed9e, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0298) {
    const struct CPU_State initial_cpu = {.pc=0xd7aa, .a=0xe4, .x=0xd1, .y=0x41, .sp=0xe4, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd7aa, .value=0xf0}, {.addr=0xd7ab, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xd7ac, .a=0xe4, .x=0xd1, .y=0x41, .sp=0xe4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd7aa, .value=0xf0}, {.addr=0xd7ab, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xd7aa, .value=0xf0, .type=IO_READ},
        {.addr=0xd7ab, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0299) {
    const struct CPU_State initial_cpu = {.pc=0x5dec, .a=0xbb, .x=0xd4, .y=0x06, .sp=0xc4, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x5dec, .value=0xf0}, {.addr=0x5ded, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5dac, .a=0xbb, .x=0xd4, .y=0x06, .sp=0xc4, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x5dec, .value=0xf0}, {.addr=0x5ded, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5dec, .value=0xf0, .type=IO_READ},
        {.addr=0x5ded, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_029A) {
    const struct CPU_State initial_cpu = {.pc=0xe641, .a=0x04, .x=0x55, .y=0x74, .sp=0x57, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xe641, .value=0xf0}, {.addr=0xe642, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xe627, .a=0x04, .x=0x55, .y=0x74, .sp=0x57, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xe641, .value=0xf0}, {.addr=0xe642, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xe641, .value=0xf0, .type=IO_READ},
        {.addr=0xe642, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_029B) {
    const struct CPU_State initial_cpu = {.pc=0x5677, .a=0xef, .x=0xc6, .y=0xd8, .sp=0xa0, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x5677, .value=0xf0}, {.addr=0x5678, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x55ff, .a=0xef, .x=0xc6, .y=0xd8, .sp=0xa0, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x5677, .value=0xf0}, {.addr=0x5678, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5677, .value=0xf0, .type=IO_READ},
        {.addr=0x5678, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_029C) {
    const struct CPU_State initial_cpu = {.pc=0x29c8, .a=0x9f, .x=0x8d, .y=0x41, .sp=0x40, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x29c8, .value=0xf0}, {.addr=0x29c9, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x29ca, .a=0x9f, .x=0x8d, .y=0x41, .sp=0x40, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x29c8, .value=0xf0}, {.addr=0x29c9, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x29c8, .value=0xf0, .type=IO_READ},
        {.addr=0x29c9, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_029D) {
    const struct CPU_State initial_cpu = {.pc=0xe8db, .a=0xad, .x=0x7b, .y=0x27, .sp=0xb9, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xe8db, .value=0xf0}, {.addr=0xe8dc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe8dd, .a=0xad, .x=0x7b, .y=0x27, .sp=0xb9, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe8db, .value=0xf0}, {.addr=0xe8dc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe8db, .value=0xf0, .type=IO_READ},
        {.addr=0xe8dc, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_029E) {
    const struct CPU_State initial_cpu = {.pc=0xd7ea, .a=0xce, .x=0xd5, .y=0x5f, .sp=0xe7, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xd7ea, .value=0xf0}, {.addr=0xd7eb, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xd7c1, .a=0xce, .x=0xd5, .y=0x5f, .sp=0xe7, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xd7ea, .value=0xf0}, {.addr=0xd7eb, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xd7ea, .value=0xf0, .type=IO_READ},
        {.addr=0xd7eb, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_029F) {
    const struct CPU_State initial_cpu = {.pc=0xe547, .a=0xc2, .x=0xd7, .y=0x8b, .sp=0x68, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xe547, .value=0xf0}, {.addr=0xe548, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xe549, .a=0xc2, .x=0xd7, .y=0x8b, .sp=0x68, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe547, .value=0xf0}, {.addr=0xe548, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xe547, .value=0xf0, .type=IO_READ},
        {.addr=0xe548, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x3d1b, .a=0x62, .x=0xc3, .y=0x14, .sp=0xf2, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x3d1b, .value=0xf0}, {.addr=0x3d1c, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x3d1d, .a=0x62, .x=0xc3, .y=0x14, .sp=0xf2, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x3d1b, .value=0xf0}, {.addr=0x3d1c, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x3d1b, .value=0xf0, .type=IO_READ},
        {.addr=0x3d1c, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x567e, .a=0x3a, .x=0x24, .y=0x3d, .sp=0x8b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x567e, .value=0xf0}, {.addr=0x567f, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x56aa, .a=0x3a, .x=0x24, .y=0x3d, .sp=0x8b, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x567e, .value=0xf0}, {.addr=0x567f, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x567e, .value=0xf0, .type=IO_READ},
        {.addr=0x567f, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xce72, .a=0xa0, .x=0xd8, .y=0x36, .sp=0xd3, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xce72, .value=0xf0}, {.addr=0xce73, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xce0e, .a=0xa0, .x=0xd8, .y=0x36, .sp=0xd3, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xce72, .value=0xf0}, {.addr=0xce73, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xce72, .value=0xf0, .type=IO_READ},
        {.addr=0xce73, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xcfce, .a=0x7b, .x=0x6d, .y=0x01, .sp=0xa4, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xcfce, .value=0xf0}, {.addr=0xcfcf, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xcfd0, .a=0x7b, .x=0x6d, .y=0x01, .sp=0xa4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xcfce, .value=0xf0}, {.addr=0xcfcf, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xcfce, .value=0xf0, .type=IO_READ},
        {.addr=0xcfcf, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x2657, .a=0x49, .x=0x5a, .y=0xf0, .sp=0x56, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x2657, .value=0xf0}, {.addr=0x2658, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x2659, .a=0x49, .x=0x5a, .y=0xf0, .sp=0x56, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2657, .value=0xf0}, {.addr=0x2658, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x2657, .value=0xf0, .type=IO_READ},
        {.addr=0x2658, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x4b0b, .a=0xee, .x=0x4f, .y=0x70, .sp=0xbb, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x4b0b, .value=0xf0}, {.addr=0x4b0c, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x4b1c, .a=0xee, .x=0x4f, .y=0x70, .sp=0xbb, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x4b0b, .value=0xf0}, {.addr=0x4b0c, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x4b0b, .value=0xf0, .type=IO_READ},
        {.addr=0x4b0c, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x075f, .a=0x4e, .x=0x25, .y=0xf4, .sp=0xae, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x075f, .value=0xf0}, {.addr=0x0760, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x07b9, .a=0x4e, .x=0x25, .y=0xf4, .sp=0xae, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x075f, .value=0xf0}, {.addr=0x0760, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x075f, .value=0xf0, .type=IO_READ},
        {.addr=0x0760, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x80fd, .a=0x7b, .x=0x9b, .y=0x82, .sp=0x98, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x80fd, .value=0xf0}, {.addr=0x80fe, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x80ff, .a=0x7b, .x=0x9b, .y=0x82, .sp=0x98, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x80fd, .value=0xf0}, {.addr=0x80fe, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x80fd, .value=0xf0, .type=IO_READ},
        {.addr=0x80fe, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x5829, .a=0x8c, .x=0xc6, .y=0xf4, .sp=0x36, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x5829, .value=0xf0}, {.addr=0x582a, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x582b, .a=0x8c, .x=0xc6, .y=0xf4, .sp=0x36, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5829, .value=0xf0}, {.addr=0x582a, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x5829, .value=0xf0, .type=IO_READ},
        {.addr=0x582a, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xc7a6, .a=0x29, .x=0x4e, .y=0x4c, .sp=0x40, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xc7a6, .value=0xf0}, {.addr=0xc7a7, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xc7ac, .a=0x29, .x=0x4e, .y=0x4c, .sp=0x40, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xc7a6, .value=0xf0}, {.addr=0xc7a7, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xc7a6, .value=0xf0, .type=IO_READ},
        {.addr=0xc7a7, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x29dd, .a=0xc6, .x=0xd5, .y=0x74, .sp=0x48, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x29dd, .value=0xf0}, {.addr=0x29de, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x297b, .a=0xc6, .x=0xd5, .y=0x74, .sp=0x48, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x29dd, .value=0xf0}, {.addr=0x29de, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x29dd, .value=0xf0, .type=IO_READ},
        {.addr=0x29de, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xce9e, .a=0xff, .x=0x0e, .y=0xcb, .sp=0xe2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xce9e, .value=0xf0}, {.addr=0xce9f, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xcf17, .a=0xff, .x=0x0e, .y=0xcb, .sp=0xe2, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xce9e, .value=0xf0}, {.addr=0xce9f, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xce9e, .value=0xf0, .type=IO_READ},
        {.addr=0xce9f, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x7042, .a=0x84, .x=0xa4, .y=0x73, .sp=0x33, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7042, .value=0xf0}, {.addr=0x7043, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x7044, .a=0x84, .x=0xa4, .y=0x73, .sp=0x33, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7042, .value=0xf0}, {.addr=0x7043, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x7042, .value=0xf0, .type=IO_READ},
        {.addr=0x7043, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x08ea, .a=0xf9, .x=0xdb, .y=0xcb, .sp=0x57, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x08ea, .value=0xf0}, {.addr=0x08eb, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x08ec, .a=0xf9, .x=0xdb, .y=0xcb, .sp=0x57, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x08ea, .value=0xf0}, {.addr=0x08eb, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x08ea, .value=0xf0, .type=IO_READ},
        {.addr=0x08eb, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x1275, .a=0x7a, .x=0xc7, .y=0x58, .sp=0xf5, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x1275, .value=0xf0}, {.addr=0x1276, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x12d4, .a=0x7a, .x=0xc7, .y=0x58, .sp=0xf5, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x1275, .value=0xf0}, {.addr=0x1276, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1275, .value=0xf0, .type=IO_READ},
        {.addr=0x1276, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x74bd, .a=0xa9, .x=0x17, .y=0xce, .sp=0x30, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x74bd, .value=0xf0}, {.addr=0x74be, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x7517, .a=0xa9, .x=0x17, .y=0xce, .sp=0x30, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x74bd, .value=0xf0}, {.addr=0x74be, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x74bd, .value=0xf0, .type=IO_READ},
        {.addr=0x74be, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x9fcb, .a=0xf6, .x=0x8e, .y=0xe5, .sp=0x99, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x9fcb, .value=0xf0}, {.addr=0x9fcc, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x9fcd, .a=0xf6, .x=0x8e, .y=0xe5, .sp=0x99, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9fcb, .value=0xf0}, {.addr=0x9fcc, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x9fcb, .value=0xf0, .type=IO_READ},
        {.addr=0x9fcc, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xb10d, .a=0x76, .x=0x0b, .y=0xb4, .sp=0x07, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xb10d, .value=0xf0}, {.addr=0xb10e, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xb0a6, .a=0x76, .x=0x0b, .y=0xb4, .sp=0x07, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xb10d, .value=0xf0}, {.addr=0xb10e, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xb10d, .value=0xf0, .type=IO_READ},
        {.addr=0xb10e, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x698c, .a=0x1e, .x=0x56, .y=0x11, .sp=0xc9, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x698c, .value=0xf0}, {.addr=0x698d, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x69c2, .a=0x1e, .x=0x56, .y=0x11, .sp=0xc9, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x698c, .value=0xf0}, {.addr=0x698d, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x698c, .value=0xf0, .type=IO_READ},
        {.addr=0x698d, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x7243, .a=0xf9, .x=0xba, .y=0xcb, .sp=0xb8, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x7243, .value=0xf0}, {.addr=0x7244, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x7245, .a=0xf9, .x=0xba, .y=0xcb, .sp=0xb8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7243, .value=0xf0}, {.addr=0x7244, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x7243, .value=0xf0, .type=IO_READ},
        {.addr=0x7244, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xbde4, .a=0xd4, .x=0x7b, .y=0x5b, .sp=0x7c, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xbde4, .value=0xf0}, {.addr=0xbde5, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xbde6, .a=0xd4, .x=0x7b, .y=0x5b, .sp=0x7c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xbde4, .value=0xf0}, {.addr=0xbde5, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xbde4, .value=0xf0, .type=IO_READ},
        {.addr=0xbde5, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x550f, .a=0xcc, .x=0xae, .y=0x38, .sp=0x2f, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x550f, .value=0xf0}, {.addr=0x5510, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x54d5, .a=0xcc, .x=0xae, .y=0x38, .sp=0x2f, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x550f, .value=0xf0}, {.addr=0x5510, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x550f, .value=0xf0, .type=IO_READ},
        {.addr=0x5510, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x3838, .a=0x35, .x=0x17, .y=0x52, .sp=0x69, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x3838, .value=0xf0}, {.addr=0x3839, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x37bd, .a=0x35, .x=0x17, .y=0x52, .sp=0x69, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x3838, .value=0xf0}, {.addr=0x3839, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x3838, .value=0xf0, .type=IO_READ},
        {.addr=0x3839, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x950e, .a=0xbc, .x=0x7d, .y=0x90, .sp=0x76, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x950e, .value=0xf0}, {.addr=0x950f, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x9510, .a=0xbc, .x=0x7d, .y=0x90, .sp=0x76, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x950e, .value=0xf0}, {.addr=0x950f, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x950e, .value=0xf0, .type=IO_READ},
        {.addr=0x950f, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xeef7, .a=0xed, .x=0x58, .y=0x25, .sp=0x34, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xeef7, .value=0xf0}, {.addr=0xeef8, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xeef9, .a=0xed, .x=0x58, .y=0x25, .sp=0x34, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xeef7, .value=0xf0}, {.addr=0xeef8, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xeef7, .value=0xf0, .type=IO_READ},
        {.addr=0xeef8, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xcfa5, .a=0x73, .x=0xf1, .y=0xcd, .sp=0x83, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa5, .value=0xf0}, {.addr=0xcfa6, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xcfae, .a=0x73, .x=0xf1, .y=0xcd, .sp=0x83, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xcfa5, .value=0xf0}, {.addr=0xcfa6, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xcfa5, .value=0xf0, .type=IO_READ},
        {.addr=0xcfa6, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x72b3, .a=0x5f, .x=0x8b, .y=0x54, .sp=0x5c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x72b3, .value=0xf0}, {.addr=0x72b4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x72b5, .a=0x5f, .x=0x8b, .y=0x54, .sp=0x5c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x72b3, .value=0xf0}, {.addr=0x72b4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x72b3, .value=0xf0, .type=IO_READ},
        {.addr=0x72b4, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x2319, .a=0x86, .x=0xa3, .y=0x9a, .sp=0x28, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2319, .value=0xf0}, {.addr=0x231a, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x231b, .a=0x86, .x=0xa3, .y=0x9a, .sp=0x28, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2319, .value=0xf0}, {.addr=0x231a, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x2319, .value=0xf0, .type=IO_READ},
        {.addr=0x231a, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x9036, .a=0x90, .x=0x32, .y=0x94, .sp=0x42, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x9036, .value=0xf0}, {.addr=0x9037, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x9050, .a=0x90, .x=0x32, .y=0x94, .sp=0x42, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x9036, .value=0xf0}, {.addr=0x9037, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x9036, .value=0xf0, .type=IO_READ},
        {.addr=0x9037, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xe122, .a=0xf6, .x=0xfd, .y=0x95, .sp=0x07, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xe122, .value=0xf0}, {.addr=0xe123, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xe124, .a=0xf6, .x=0xfd, .y=0x95, .sp=0x07, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xe122, .value=0xf0}, {.addr=0xe123, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xe122, .value=0xf0, .type=IO_READ},
        {.addr=0xe123, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x33f1, .a=0xd1, .x=0x41, .y=0x75, .sp=0xb8, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x33f1, .value=0xf0}, {.addr=0x33f2, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x33f3, .a=0xd1, .x=0x41, .y=0x75, .sp=0xb8, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x33f1, .value=0xf0}, {.addr=0x33f2, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x33f1, .value=0xf0, .type=IO_READ},
        {.addr=0x33f2, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x7169, .a=0x99, .x=0x9d, .y=0x65, .sp=0x09, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x7169, .value=0xf0}, {.addr=0x716a, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x714c, .a=0x99, .x=0x9d, .y=0x65, .sp=0x09, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x7169, .value=0xf0}, {.addr=0x716a, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x7169, .value=0xf0, .type=IO_READ},
        {.addr=0x716a, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x4850, .a=0x1b, .x=0x4c, .y=0xab, .sp=0xc5, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x4850, .value=0xf0}, {.addr=0x4851, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x481e, .a=0x1b, .x=0x4c, .y=0xab, .sp=0xc5, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x4850, .value=0xf0}, {.addr=0x4851, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x4850, .value=0xf0, .type=IO_READ},
        {.addr=0x4851, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x4833, .a=0x50, .x=0x27, .y=0x26, .sp=0x1a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x4833, .value=0xf0}, {.addr=0x4834, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x4835, .a=0x50, .x=0x27, .y=0x26, .sp=0x1a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4833, .value=0xf0}, {.addr=0x4834, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x4833, .value=0xf0, .type=IO_READ},
        {.addr=0x4834, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xe4ea, .a=0xd0, .x=0xe0, .y=0x52, .sp=0x65, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xe4ea, .value=0xf0}, {.addr=0xe4eb, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xe4ec, .a=0xd0, .x=0xe0, .y=0x52, .sp=0x65, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe4ea, .value=0xf0}, {.addr=0xe4eb, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xe4ea, .value=0xf0, .type=IO_READ},
        {.addr=0xe4eb, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x6eed, .a=0xaa, .x=0x6c, .y=0x15, .sp=0x0d, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6eed, .value=0xf0}, {.addr=0x6eee, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x6eef, .a=0xaa, .x=0x6c, .y=0x15, .sp=0x0d, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x6eed, .value=0xf0}, {.addr=0x6eee, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x6eed, .value=0xf0, .type=IO_READ},
        {.addr=0x6eee, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xcf4d, .a=0xd0, .x=0x2e, .y=0xb6, .sp=0x35, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xcf4d, .value=0xf0}, {.addr=0xcf4e, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xcf4f, .a=0xd0, .x=0x2e, .y=0xb6, .sp=0x35, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xcf4d, .value=0xf0}, {.addr=0xcf4e, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xcf4d, .value=0xf0, .type=IO_READ},
        {.addr=0xcf4e, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x2bab, .a=0x1a, .x=0xf5, .y=0xd6, .sp=0xed, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x2bab, .value=0xf0}, {.addr=0x2bac, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x2c11, .a=0x1a, .x=0xf5, .y=0xd6, .sp=0xed, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x2bab, .value=0xf0}, {.addr=0x2bac, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x2bab, .value=0xf0, .type=IO_READ},
        {.addr=0x2bac, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x805f, .a=0x15, .x=0xcc, .y=0x9a, .sp=0x44, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x805f, .value=0xf0}, {.addr=0x8060, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x8061, .a=0x15, .x=0xcc, .y=0x9a, .sp=0x44, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x805f, .value=0xf0}, {.addr=0x8060, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x805f, .value=0xf0, .type=IO_READ},
        {.addr=0x8060, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x2913, .a=0xe0, .x=0x7c, .y=0xd9, .sp=0xcc, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x2913, .value=0xf0}, {.addr=0x2914, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x2915, .a=0xe0, .x=0x7c, .y=0xd9, .sp=0xcc, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2913, .value=0xf0}, {.addr=0x2914, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x2913, .value=0xf0, .type=IO_READ},
        {.addr=0x2914, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x2945, .a=0x86, .x=0xbe, .y=0x3b, .sp=0xc0, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2945, .value=0xf0}, {.addr=0x2946, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2947, .a=0x86, .x=0xbe, .y=0x3b, .sp=0xc0, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2945, .value=0xf0}, {.addr=0x2946, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2945, .value=0xf0, .type=IO_READ},
        {.addr=0x2946, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xad60, .a=0xff, .x=0x3b, .y=0x30, .sp=0x43, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xad60, .value=0xf0}, {.addr=0xad61, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xadb8, .a=0xff, .x=0x3b, .y=0x30, .sp=0x43, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xad60, .value=0xf0}, {.addr=0xad61, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xad60, .value=0xf0, .type=IO_READ},
        {.addr=0xad61, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xd7bc, .a=0x98, .x=0x47, .y=0x47, .sp=0xc5, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xd7bc, .value=0xf0}, {.addr=0xd7bd, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xd74a, .a=0x98, .x=0x47, .y=0x47, .sp=0xc5, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xd7bc, .value=0xf0}, {.addr=0xd7bd, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xd7bc, .value=0xf0, .type=IO_READ},
        {.addr=0xd7bd, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xd970, .a=0xc6, .x=0xc4, .y=0xad, .sp=0xa7, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xd970, .value=0xf0}, {.addr=0xd971, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xd9cd, .a=0xc6, .x=0xc4, .y=0xad, .sp=0xa7, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xd970, .value=0xf0}, {.addr=0xd971, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xd970, .value=0xf0, .type=IO_READ},
        {.addr=0xd971, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xee8e, .a=0x7b, .x=0x16, .y=0xbd, .sp=0xf1, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xee8e, .value=0xf0}, {.addr=0xee8f, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xef08, .a=0x7b, .x=0x16, .y=0xbd, .sp=0xf1, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xee8e, .value=0xf0}, {.addr=0xee8f, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xee8e, .value=0xf0, .type=IO_READ},
        {.addr=0xee8f, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xc6db, .a=0x61, .x=0xde, .y=0xdf, .sp=0x2d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xc6db, .value=0xf0}, {.addr=0xc6dc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc6dd, .a=0x61, .x=0xde, .y=0xdf, .sp=0x2d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc6db, .value=0xf0}, {.addr=0xc6dc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc6db, .value=0xf0, .type=IO_READ},
        {.addr=0xc6dc, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x034a, .a=0xcc, .x=0xcc, .y=0xbb, .sp=0xa7, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x034a, .value=0xf0}, {.addr=0x034b, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x035c, .a=0xcc, .x=0xcc, .y=0xbb, .sp=0xa7, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x034a, .value=0xf0}, {.addr=0x034b, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x034a, .value=0xf0, .type=IO_READ},
        {.addr=0x034b, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xd14c, .a=0xae, .x=0xf6, .y=0xb9, .sp=0x5e, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xd14c, .value=0xf0}, {.addr=0xd14d, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xd14e, .a=0xae, .x=0xf6, .y=0xb9, .sp=0x5e, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xd14c, .value=0xf0}, {.addr=0xd14d, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xd14c, .value=0xf0, .type=IO_READ},
        {.addr=0xd14d, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x14d5, .a=0x55, .x=0x63, .y=0xc4, .sp=0x27, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x14d5, .value=0xf0}, {.addr=0x14d6, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x1525, .a=0x55, .x=0x63, .y=0xc4, .sp=0x27, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x14d5, .value=0xf0}, {.addr=0x14d6, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x14d5, .value=0xf0, .type=IO_READ},
        {.addr=0x14d6, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x7d83, .a=0x95, .x=0x9b, .y=0x88, .sp=0xef, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x7d83, .value=0xf0}, {.addr=0x7d84, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x7def, .a=0x95, .x=0x9b, .y=0x88, .sp=0xef, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x7d83, .value=0xf0}, {.addr=0x7d84, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x7d83, .value=0xf0, .type=IO_READ},
        {.addr=0x7d84, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x0c79, .a=0x47, .x=0x0c, .y=0x22, .sp=0x6e, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0c79, .value=0xf0}, {.addr=0x0c7a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0c7b, .a=0x47, .x=0x0c, .y=0x22, .sp=0x6e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0c79, .value=0xf0}, {.addr=0x0c7a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0c79, .value=0xf0, .type=IO_READ},
        {.addr=0x0c7a, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x826b, .a=0x39, .x=0xba, .y=0x70, .sp=0x52, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x826b, .value=0xf0}, {.addr=0x826c, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x82ab, .a=0x39, .x=0xba, .y=0x70, .sp=0x52, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x826b, .value=0xf0}, {.addr=0x826c, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x826b, .value=0xf0, .type=IO_READ},
        {.addr=0x826c, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xbc8a, .a=0xa2, .x=0x0a, .y=0x1b, .sp=0x38, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xbc8a, .value=0xf0}, {.addr=0xbc8b, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xbc71, .a=0xa2, .x=0x0a, .y=0x1b, .sp=0x38, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xbc8a, .value=0xf0}, {.addr=0xbc8b, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xbc8a, .value=0xf0, .type=IO_READ},
        {.addr=0xbc8b, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x6483, .a=0xd8, .x=0xaa, .y=0xaf, .sp=0xce, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x6483, .value=0xf0}, {.addr=0x6484, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x647f, .a=0xd8, .x=0xaa, .y=0xaf, .sp=0xce, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x6483, .value=0xf0}, {.addr=0x6484, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x6483, .value=0xf0, .type=IO_READ},
        {.addr=0x6484, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x76f0, .a=0x5c, .x=0xee, .y=0x5b, .sp=0xf4, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x76f0, .value=0xf0}, {.addr=0x76f1, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x76d0, .a=0x5c, .x=0xee, .y=0x5b, .sp=0xf4, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x76f0, .value=0xf0}, {.addr=0x76f1, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x76f0, .value=0xf0, .type=IO_READ},
        {.addr=0x76f1, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x75ae, .a=0x95, .x=0xe2, .y=0x8e, .sp=0x40, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x75ae, .value=0xf0}, {.addr=0x75af, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x75b0, .a=0x95, .x=0xe2, .y=0x8e, .sp=0x40, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x75ae, .value=0xf0}, {.addr=0x75af, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x75ae, .value=0xf0, .type=IO_READ},
        {.addr=0x75af, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x5bac, .a=0x15, .x=0x12, .y=0x5d, .sp=0xeb, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x5bac, .value=0xf0}, {.addr=0x5bad, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x5bae, .a=0x15, .x=0x12, .y=0x5d, .sp=0xeb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5bac, .value=0xf0}, {.addr=0x5bad, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x5bac, .value=0xf0, .type=IO_READ},
        {.addr=0x5bad, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x74cf, .a=0x00, .x=0x9b, .y=0x30, .sp=0x05, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x74cf, .value=0xf0}, {.addr=0x74d0, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x74d1, .a=0x00, .x=0x9b, .y=0x30, .sp=0x05, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x74cf, .value=0xf0}, {.addr=0x74d0, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x74cf, .value=0xf0, .type=IO_READ},
        {.addr=0x74d0, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xe538, .a=0x39, .x=0x1d, .y=0x47, .sp=0xa8, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xe538, .value=0xf0}, {.addr=0xe539, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xe53a, .a=0x39, .x=0x1d, .y=0x47, .sp=0xa8, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xe538, .value=0xf0}, {.addr=0xe539, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xe538, .value=0xf0, .type=IO_READ},
        {.addr=0xe539, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x6c34, .a=0x0b, .x=0x43, .y=0x48, .sp=0x52, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x6c34, .value=0xf0}, {.addr=0x6c35, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x6c36, .a=0x0b, .x=0x43, .y=0x48, .sp=0x52, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6c34, .value=0xf0}, {.addr=0x6c35, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x6c34, .value=0xf0, .type=IO_READ},
        {.addr=0x6c35, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x1bcb, .a=0x4e, .x=0x8c, .y=0x47, .sp=0x54, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x1bcb, .value=0xf0}, {.addr=0x1bcc, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x1bcd, .a=0x4e, .x=0x8c, .y=0x47, .sp=0x54, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x1bcb, .value=0xf0}, {.addr=0x1bcc, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x1bcb, .value=0xf0, .type=IO_READ},
        {.addr=0x1bcc, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x0c97, .a=0xff, .x=0x9b, .y=0x5e, .sp=0x51, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0c97, .value=0xf0}, {.addr=0x0c98, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x0c99, .a=0xff, .x=0x9b, .y=0x5e, .sp=0x51, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0c97, .value=0xf0}, {.addr=0x0c98, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x0c97, .value=0xf0, .type=IO_READ},
        {.addr=0x0c98, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x7a3d, .a=0x9f, .x=0x0b, .y=0x25, .sp=0x91, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x7a3d, .value=0xf0}, {.addr=0x7a3e, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x7a82, .a=0x9f, .x=0x0b, .y=0x25, .sp=0x91, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x7a3d, .value=0xf0}, {.addr=0x7a3e, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x7a3d, .value=0xf0, .type=IO_READ},
        {.addr=0x7a3e, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x63bb, .a=0xd2, .x=0xeb, .y=0xca, .sp=0xc5, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x63bb, .value=0xf0}, {.addr=0x63bc, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x63f8, .a=0xd2, .x=0xeb, .y=0xca, .sp=0xc5, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x63bb, .value=0xf0}, {.addr=0x63bc, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x63bb, .value=0xf0, .type=IO_READ},
        {.addr=0x63bc, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xb29c, .a=0x71, .x=0x5c, .y=0x35, .sp=0x7c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xb29c, .value=0xf0}, {.addr=0xb29d, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xb29e, .a=0x71, .x=0x5c, .y=0x35, .sp=0x7c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb29c, .value=0xf0}, {.addr=0xb29d, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xb29c, .value=0xf0, .type=IO_READ},
        {.addr=0xb29d, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x4682, .a=0x9a, .x=0x25, .y=0xfa, .sp=0xf7, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x4682, .value=0xf0}, {.addr=0x4683, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x4684, .a=0x9a, .x=0x25, .y=0xfa, .sp=0xf7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4682, .value=0xf0}, {.addr=0x4683, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x4682, .value=0xf0, .type=IO_READ},
        {.addr=0x4683, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xf213, .a=0x95, .x=0xb3, .y=0x46, .sp=0xf7, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xf213, .value=0xf0}, {.addr=0xf214, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xf205, .a=0x95, .x=0xb3, .y=0x46, .sp=0xf7, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xf213, .value=0xf0}, {.addr=0xf214, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xf213, .value=0xf0, .type=IO_READ},
        {.addr=0xf214, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xcb79, .a=0x55, .x=0xaa, .y=0x8d, .sp=0xf2, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xcb79, .value=0xf0}, {.addr=0xcb7a, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xcb7b, .a=0x55, .x=0xaa, .y=0x8d, .sp=0xf2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xcb79, .value=0xf0}, {.addr=0xcb7a, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xcb79, .value=0xf0, .type=IO_READ},
        {.addr=0xcb7a, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x205e, .a=0xc1, .x=0x9a, .y=0x13, .sp=0xcb, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x205e, .value=0xf0}, {.addr=0x205f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2060, .a=0xc1, .x=0x9a, .y=0x13, .sp=0xcb, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x205e, .value=0xf0}, {.addr=0x205f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x205e, .value=0xf0, .type=IO_READ},
        {.addr=0x205f, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x705b, .a=0x6c, .x=0xb7, .y=0x64, .sp=0xda, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x705b, .value=0xf0}, {.addr=0x705c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x707d, .a=0x6c, .x=0xb7, .y=0x64, .sp=0xda, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x705b, .value=0xf0}, {.addr=0x705c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x705b, .value=0xf0, .type=IO_READ},
        {.addr=0x705c, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x2b26, .a=0x51, .x=0x27, .y=0xce, .sp=0xa8, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x2b26, .value=0xf0}, {.addr=0x2b27, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x2b28, .a=0x51, .x=0x27, .y=0xce, .sp=0xa8, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x2b26, .value=0xf0}, {.addr=0x2b27, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x2b26, .value=0xf0, .type=IO_READ},
        {.addr=0x2b27, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x2506, .a=0x4a, .x=0xc7, .y=0x1b, .sp=0x96, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x2506, .value=0xf0}, {.addr=0x2507, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x2508, .a=0x4a, .x=0xc7, .y=0x1b, .sp=0x96, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2506, .value=0xf0}, {.addr=0x2507, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x2506, .value=0xf0, .type=IO_READ},
        {.addr=0x2507, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xef52, .a=0xfd, .x=0x53, .y=0x2c, .sp=0xf7, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xef52, .value=0xf0}, {.addr=0xef53, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xef54, .a=0xfd, .x=0x53, .y=0x2c, .sp=0xf7, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xef52, .value=0xf0}, {.addr=0xef53, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xef52, .value=0xf0, .type=IO_READ},
        {.addr=0xef53, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x099b, .a=0x5a, .x=0xaa, .y=0x21, .sp=0xd5, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x099b, .value=0xf0}, {.addr=0x099c, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x0978, .a=0x5a, .x=0xaa, .y=0x21, .sp=0xd5, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x099b, .value=0xf0}, {.addr=0x099c, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x099b, .value=0xf0, .type=IO_READ},
        {.addr=0x099c, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x95cf, .a=0x32, .x=0x80, .y=0x4b, .sp=0x51, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x95cf, .value=0xf0}, {.addr=0x95d0, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x955c, .a=0x32, .x=0x80, .y=0x4b, .sp=0x51, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x95cf, .value=0xf0}, {.addr=0x95d0, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x95cf, .value=0xf0, .type=IO_READ},
        {.addr=0x95d0, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x2f4f, .a=0x03, .x=0x9d, .y=0x4f, .sp=0xb4, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2f4f, .value=0xf0}, {.addr=0x2f50, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x2fcf, .a=0x03, .x=0x9d, .y=0x4f, .sp=0xb4, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x2f4f, .value=0xf0}, {.addr=0x2f50, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x2f4f, .value=0xf0, .type=IO_READ},
        {.addr=0x2f50, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x5eea, .a=0x8e, .x=0xef, .y=0x23, .sp=0x77, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x5eea, .value=0xf0}, {.addr=0x5eeb, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x5eec, .a=0x8e, .x=0xef, .y=0x23, .sp=0x77, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x5eea, .value=0xf0}, {.addr=0x5eeb, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x5eea, .value=0xf0, .type=IO_READ},
        {.addr=0x5eeb, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x623a, .a=0x99, .x=0x3c, .y=0xe1, .sp=0xbd, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x623a, .value=0xf0}, {.addr=0x623b, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x61d4, .a=0x99, .x=0x3c, .y=0xe1, .sp=0xbd, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x623a, .value=0xf0}, {.addr=0x623b, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x623a, .value=0xf0, .type=IO_READ},
        {.addr=0x623b, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xf7bb, .a=0x74, .x=0x21, .y=0x5f, .sp=0x24, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xf7bb, .value=0xf0}, {.addr=0xf7bc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf7bd, .a=0x74, .x=0x21, .y=0x5f, .sp=0x24, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf7bb, .value=0xf0}, {.addr=0xf7bc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf7bb, .value=0xf0, .type=IO_READ},
        {.addr=0xf7bc, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x0e1a, .a=0x88, .x=0x2a, .y=0x18, .sp=0x67, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0e1a, .value=0xf0}, {.addr=0x0e1b, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x0e6a, .a=0x88, .x=0x2a, .y=0x18, .sp=0x67, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0e1a, .value=0xf0}, {.addr=0x0e1b, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x0e1a, .value=0xf0, .type=IO_READ},
        {.addr=0x0e1b, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x04af, .a=0x4d, .x=0x61, .y=0x5a, .sp=0xac, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x04af, .value=0xf0}, {.addr=0x04b0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x04b1, .a=0x4d, .x=0x61, .y=0x5a, .sp=0xac, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x04af, .value=0xf0}, {.addr=0x04b0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x04af, .value=0xf0, .type=IO_READ},
        {.addr=0x04b0, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x5b37, .a=0xeb, .x=0x8d, .y=0xdb, .sp=0xfb, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x5b37, .value=0xf0}, {.addr=0x5b38, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5b39, .a=0xeb, .x=0x8d, .y=0xdb, .sp=0xfb, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x5b37, .value=0xf0}, {.addr=0x5b38, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5b37, .value=0xf0, .type=IO_READ},
        {.addr=0x5b38, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xc489, .a=0x7e, .x=0x2b, .y=0x74, .sp=0x50, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xc489, .value=0xf0}, {.addr=0xc48a, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xc48b, .a=0x7e, .x=0x2b, .y=0x74, .sp=0x50, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc489, .value=0xf0}, {.addr=0xc48a, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xc489, .value=0xf0, .type=IO_READ},
        {.addr=0xc48a, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x4908, .a=0x8a, .x=0x89, .y=0x1e, .sp=0xdf, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4908, .value=0xf0}, {.addr=0x4909, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x4916, .a=0x8a, .x=0x89, .y=0x1e, .sp=0xdf, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x4908, .value=0xf0}, {.addr=0x4909, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x4908, .value=0xf0, .type=IO_READ},
        {.addr=0x4909, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xedcd, .a=0xfd, .x=0x0e, .y=0x12, .sp=0x4a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xedcd, .value=0xf0}, {.addr=0xedce, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xee11, .a=0xfd, .x=0x0e, .y=0x12, .sp=0x4a, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xedcd, .value=0xf0}, {.addr=0xedce, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xedcd, .value=0xf0, .type=IO_READ},
        {.addr=0xedce, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x8a08, .a=0x01, .x=0x7a, .y=0x90, .sp=0xf1, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x8a08, .value=0xf0}, {.addr=0x8a09, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x8a3a, .a=0x01, .x=0x7a, .y=0x90, .sp=0xf1, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x8a08, .value=0xf0}, {.addr=0x8a09, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x8a08, .value=0xf0, .type=IO_READ},
        {.addr=0x8a09, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x0b23, .a=0x91, .x=0xf7, .y=0xc6, .sp=0xc4, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0b23, .value=0xf0}, {.addr=0x0b24, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x0af9, .a=0x91, .x=0xf7, .y=0xc6, .sp=0xc4, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0b23, .value=0xf0}, {.addr=0x0b24, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x0b23, .value=0xf0, .type=IO_READ},
        {.addr=0x0b24, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x0c67, .a=0xd4, .x=0x45, .y=0x74, .sp=0xdc, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0c67, .value=0xf0}, {.addr=0x0c68, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x0c69, .a=0xd4, .x=0x45, .y=0x74, .sp=0xdc, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0c67, .value=0xf0}, {.addr=0x0c68, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x0c67, .value=0xf0, .type=IO_READ},
        {.addr=0x0c68, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x6f41, .a=0x45, .x=0xf1, .y=0x4b, .sp=0xa3, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x6f41, .value=0xf0}, {.addr=0x6f42, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x6f85, .a=0x45, .x=0xf1, .y=0x4b, .sp=0xa3, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x6f41, .value=0xf0}, {.addr=0x6f42, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x6f41, .value=0xf0, .type=IO_READ},
        {.addr=0x6f42, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x70b8, .a=0xb9, .x=0x36, .y=0xad, .sp=0xa4, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x70b8, .value=0xf0}, {.addr=0x70b9, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x70ba, .a=0xb9, .x=0x36, .y=0xad, .sp=0xa4, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x70b8, .value=0xf0}, {.addr=0x70b9, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x70b8, .value=0xf0, .type=IO_READ},
        {.addr=0x70b9, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xca4e, .a=0xb1, .x=0x0e, .y=0x93, .sp=0x73, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xca4e, .value=0xf0}, {.addr=0xca4f, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xca50, .a=0xb1, .x=0x0e, .y=0x93, .sp=0x73, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xca4e, .value=0xf0}, {.addr=0xca4f, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xca4e, .value=0xf0, .type=IO_READ},
        {.addr=0xca4f, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xb762, .a=0x57, .x=0xa4, .y=0x70, .sp=0x38, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xb762, .value=0xf0}, {.addr=0xb763, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xb764, .a=0x57, .x=0xa4, .y=0x70, .sp=0x38, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb762, .value=0xf0}, {.addr=0xb763, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xb762, .value=0xf0, .type=IO_READ},
        {.addr=0xb763, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x3d7c, .a=0xbb, .x=0xed, .y=0xd3, .sp=0xd7, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x3d7c, .value=0xf0}, {.addr=0x3d7d, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x3d82, .a=0xbb, .x=0xed, .y=0xd3, .sp=0xd7, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x3d7c, .value=0xf0}, {.addr=0x3d7d, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x3d7c, .value=0xf0, .type=IO_READ},
        {.addr=0x3d7d, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x6ecb, .a=0xec, .x=0x2a, .y=0xa4, .sp=0x22, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x6ecb, .value=0xf0}, {.addr=0x6ecc, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x6e71, .a=0xec, .x=0x2a, .y=0xa4, .sp=0x22, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x6ecb, .value=0xf0}, {.addr=0x6ecc, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x6ecb, .value=0xf0, .type=IO_READ},
        {.addr=0x6ecc, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xb0df, .a=0x14, .x=0x3b, .y=0xfc, .sp=0xee, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xb0df, .value=0xf0}, {.addr=0xb0e0, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xb0e1, .a=0x14, .x=0x3b, .y=0xfc, .sp=0xee, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb0df, .value=0xf0}, {.addr=0xb0e0, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xb0df, .value=0xf0, .type=IO_READ},
        {.addr=0xb0e0, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x0615, .a=0x10, .x=0x0a, .y=0x7e, .sp=0xd4, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0615, .value=0xf0}, {.addr=0x0616, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x063a, .a=0x10, .x=0x0a, .y=0x7e, .sp=0xd4, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0615, .value=0xf0}, {.addr=0x0616, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x0615, .value=0xf0, .type=IO_READ},
        {.addr=0x0616, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0300) {
    const struct CPU_State initial_cpu = {.pc=0xa539, .a=0x62, .x=0xa3, .y=0xfd, .sp=0x42, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xa539, .value=0xf0}, {.addr=0xa53a, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xa4ce, .a=0x62, .x=0xa3, .y=0xfd, .sp=0x42, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xa539, .value=0xf0}, {.addr=0xa53a, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xa539, .value=0xf0, .type=IO_READ},
        {.addr=0xa53a, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0301) {
    const struct CPU_State initial_cpu = {.pc=0xb906, .a=0xbd, .x=0x02, .y=0x31, .sp=0x8e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xb906, .value=0xf0}, {.addr=0xb907, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xb908, .a=0xbd, .x=0x02, .y=0x31, .sp=0x8e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb906, .value=0xf0}, {.addr=0xb907, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xb906, .value=0xf0, .type=IO_READ},
        {.addr=0xb907, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0302) {
    const struct CPU_State initial_cpu = {.pc=0x9291, .a=0x07, .x=0x1d, .y=0xae, .sp=0x4a, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x9291, .value=0xf0}, {.addr=0x9292, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x924a, .a=0x07, .x=0x1d, .y=0xae, .sp=0x4a, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x9291, .value=0xf0}, {.addr=0x9292, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x9291, .value=0xf0, .type=IO_READ},
        {.addr=0x9292, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0303) {
    const struct CPU_State initial_cpu = {.pc=0x259c, .a=0x93, .x=0xab, .y=0x61, .sp=0x71, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x259c, .value=0xf0}, {.addr=0x259d, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x259e, .a=0x93, .x=0xab, .y=0x61, .sp=0x71, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x259c, .value=0xf0}, {.addr=0x259d, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x259c, .value=0xf0, .type=IO_READ},
        {.addr=0x259d, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0304) {
    const struct CPU_State initial_cpu = {.pc=0xf99b, .a=0xdc, .x=0x55, .y=0xae, .sp=0x10, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xf99b, .value=0xf0}, {.addr=0xf99c, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xf9c7, .a=0xdc, .x=0x55, .y=0xae, .sp=0x10, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xf99b, .value=0xf0}, {.addr=0xf99c, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xf99b, .value=0xf0, .type=IO_READ},
        {.addr=0xf99c, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0305) {
    const struct CPU_State initial_cpu = {.pc=0xce82, .a=0x3b, .x=0x8f, .y=0x69, .sp=0x0d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xce82, .value=0xf0}, {.addr=0xce83, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xce8d, .a=0x3b, .x=0x8f, .y=0x69, .sp=0x0d, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xce82, .value=0xf0}, {.addr=0xce83, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xce82, .value=0xf0, .type=IO_READ},
        {.addr=0xce83, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0306) {
    const struct CPU_State initial_cpu = {.pc=0x27ae, .a=0x99, .x=0x45, .y=0xc1, .sp=0xe9, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x27ae, .value=0xf0}, {.addr=0x27af, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x2741, .a=0x99, .x=0x45, .y=0xc1, .sp=0xe9, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x27ae, .value=0xf0}, {.addr=0x27af, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x27ae, .value=0xf0, .type=IO_READ},
        {.addr=0x27af, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0307) {
    const struct CPU_State initial_cpu = {.pc=0xea1c, .a=0x05, .x=0xe6, .y=0x25, .sp=0xbf, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xea1c, .value=0xf0}, {.addr=0xea1d, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xea41, .a=0x05, .x=0xe6, .y=0x25, .sp=0xbf, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xea1c, .value=0xf0}, {.addr=0xea1d, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xea1c, .value=0xf0, .type=IO_READ},
        {.addr=0xea1d, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0308) {
    const struct CPU_State initial_cpu = {.pc=0xbc11, .a=0xba, .x=0x4c, .y=0xa2, .sp=0xa3, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xbc11, .value=0xf0}, {.addr=0xbc12, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xbc49, .a=0xba, .x=0x4c, .y=0xa2, .sp=0xa3, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xbc11, .value=0xf0}, {.addr=0xbc12, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xbc11, .value=0xf0, .type=IO_READ},
        {.addr=0xbc12, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0309) {
    const struct CPU_State initial_cpu = {.pc=0x90e8, .a=0x9d, .x=0x86, .y=0x56, .sp=0xa5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x90e8, .value=0xf0}, {.addr=0x90e9, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x907a, .a=0x9d, .x=0x86, .y=0x56, .sp=0xa5, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x90e8, .value=0xf0}, {.addr=0x90e9, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x90e8, .value=0xf0, .type=IO_READ},
        {.addr=0x90e9, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_030A) {
    const struct CPU_State initial_cpu = {.pc=0x3a10, .a=0xfd, .x=0xb5, .y=0xe4, .sp=0x7a, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x3a10, .value=0xf0}, {.addr=0x3a11, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3a12, .a=0xfd, .x=0xb5, .y=0xe4, .sp=0x7a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3a10, .value=0xf0}, {.addr=0x3a11, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3a10, .value=0xf0, .type=IO_READ},
        {.addr=0x3a11, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_030B) {
    const struct CPU_State initial_cpu = {.pc=0x6c71, .a=0x99, .x=0x18, .y=0xbb, .sp=0x51, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x6c71, .value=0xf0}, {.addr=0x6c72, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x6c73, .a=0x99, .x=0x18, .y=0xbb, .sp=0x51, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x6c71, .value=0xf0}, {.addr=0x6c72, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x6c71, .value=0xf0, .type=IO_READ},
        {.addr=0x6c72, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_030C) {
    const struct CPU_State initial_cpu = {.pc=0xd31a, .a=0x76, .x=0x46, .y=0xd0, .sp=0x2a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd31a, .value=0xf0}, {.addr=0xd31b, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xd354, .a=0x76, .x=0x46, .y=0xd0, .sp=0x2a, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xd31a, .value=0xf0}, {.addr=0xd31b, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xd31a, .value=0xf0, .type=IO_READ},
        {.addr=0xd31b, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_030D) {
    const struct CPU_State initial_cpu = {.pc=0x99a4, .a=0x25, .x=0x57, .y=0x91, .sp=0xfa, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x99a4, .value=0xf0}, {.addr=0x99a5, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x99a6, .a=0x25, .x=0x57, .y=0x91, .sp=0xfa, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x99a4, .value=0xf0}, {.addr=0x99a5, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x99a4, .value=0xf0, .type=IO_READ},
        {.addr=0x99a5, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_030E) {
    const struct CPU_State initial_cpu = {.pc=0xbc22, .a=0x97, .x=0xa9, .y=0xac, .sp=0x68, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xbc22, .value=0xf0}, {.addr=0xbc23, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xbc79, .a=0x97, .x=0xa9, .y=0xac, .sp=0x68, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xbc22, .value=0xf0}, {.addr=0xbc23, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xbc22, .value=0xf0, .type=IO_READ},
        {.addr=0xbc23, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_030F) {
    const struct CPU_State initial_cpu = {.pc=0x9fcc, .a=0xdf, .x=0x97, .y=0x7c, .sp=0x61, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x9fcc, .value=0xf0}, {.addr=0x9fcd, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x9fce, .a=0xdf, .x=0x97, .y=0x7c, .sp=0x61, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9fcc, .value=0xf0}, {.addr=0x9fcd, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x9fcc, .value=0xf0, .type=IO_READ},
        {.addr=0x9fcd, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0310) {
    const struct CPU_State initial_cpu = {.pc=0xbb36, .a=0x47, .x=0xb8, .y=0xeb, .sp=0x27, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xbb36, .value=0xf0}, {.addr=0xbb37, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xbb38, .a=0x47, .x=0xb8, .y=0xeb, .sp=0x27, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xbb36, .value=0xf0}, {.addr=0xbb37, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xbb36, .value=0xf0, .type=IO_READ},
        {.addr=0xbb37, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0311) {
    const struct CPU_State initial_cpu = {.pc=0xc2e5, .a=0x67, .x=0xef, .y=0xf4, .sp=0xe1, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xc2e5, .value=0xf0}, {.addr=0xc2e6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc283, .a=0x67, .x=0xef, .y=0xf4, .sp=0xe1, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xc2e5, .value=0xf0}, {.addr=0xc2e6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc2e5, .value=0xf0, .type=IO_READ},
        {.addr=0xc2e6, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0312) {
    const struct CPU_State initial_cpu = {.pc=0x6586, .a=0x16, .x=0x3a, .y=0x89, .sp=0x3e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x6586, .value=0xf0}, {.addr=0x6587, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x6588, .a=0x16, .x=0x3a, .y=0x89, .sp=0x3e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x6586, .value=0xf0}, {.addr=0x6587, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x6586, .value=0xf0, .type=IO_READ},
        {.addr=0x6587, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0313) {
    const struct CPU_State initial_cpu = {.pc=0x3865, .a=0x0a, .x=0x6d, .y=0x88, .sp=0x6e, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x3865, .value=0xf0}, {.addr=0x3866, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x3867, .a=0x0a, .x=0x6d, .y=0x88, .sp=0x6e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3865, .value=0xf0}, {.addr=0x3866, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x3865, .value=0xf0, .type=IO_READ},
        {.addr=0x3866, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0314) {
    const struct CPU_State initial_cpu = {.pc=0x9a2a, .a=0xbf, .x=0xe0, .y=0x13, .sp=0x8e, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x9a2a, .value=0xf0}, {.addr=0x9a2b, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x99d5, .a=0xbf, .x=0xe0, .y=0x13, .sp=0x8e, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x9a2a, .value=0xf0}, {.addr=0x9a2b, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x9a2a, .value=0xf0, .type=IO_READ},
        {.addr=0x9a2b, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0315) {
    const struct CPU_State initial_cpu = {.pc=0x7a5e, .a=0x77, .x=0x11, .y=0x21, .sp=0x8c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x7a5e, .value=0xf0}, {.addr=0x7a5f, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x7a97, .a=0x77, .x=0x11, .y=0x21, .sp=0x8c, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x7a5e, .value=0xf0}, {.addr=0x7a5f, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x7a5e, .value=0xf0, .type=IO_READ},
        {.addr=0x7a5f, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0316) {
    const struct CPU_State initial_cpu = {.pc=0x20e5, .a=0x23, .x=0x84, .y=0x89, .sp=0xf6, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x20e5, .value=0xf0}, {.addr=0x20e6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2114, .a=0x23, .x=0x84, .y=0x89, .sp=0xf6, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x20e5, .value=0xf0}, {.addr=0x20e6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x20e5, .value=0xf0, .type=IO_READ},
        {.addr=0x20e6, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0317) {
    const struct CPU_State initial_cpu = {.pc=0xfaeb, .a=0xf8, .x=0x21, .y=0xea, .sp=0x30, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xfaeb, .value=0xf0}, {.addr=0xfaec, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xfaed, .a=0xf8, .x=0x21, .y=0xea, .sp=0x30, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xfaeb, .value=0xf0}, {.addr=0xfaec, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xfaeb, .value=0xf0, .type=IO_READ},
        {.addr=0xfaec, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0318) {
    const struct CPU_State initial_cpu = {.pc=0xf718, .a=0xcc, .x=0xb5, .y=0x3d, .sp=0xef, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xf718, .value=0xf0}, {.addr=0xf719, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xf799, .a=0xcc, .x=0xb5, .y=0x3d, .sp=0xef, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xf718, .value=0xf0}, {.addr=0xf719, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xf718, .value=0xf0, .type=IO_READ},
        {.addr=0xf719, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0319) {
    const struct CPU_State initial_cpu = {.pc=0x2dc5, .a=0x34, .x=0x86, .y=0x48, .sp=0x80, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x2dc5, .value=0xf0}, {.addr=0x2dc6, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x2dc7, .a=0x34, .x=0x86, .y=0x48, .sp=0x80, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2dc5, .value=0xf0}, {.addr=0x2dc6, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x2dc5, .value=0xf0, .type=IO_READ},
        {.addr=0x2dc6, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_031A) {
    const struct CPU_State initial_cpu = {.pc=0xb9e2, .a=0x1e, .x=0x8e, .y=0x7f, .sp=0x63, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xb9e2, .value=0xf0}, {.addr=0xb9e3, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xb9e4, .a=0x1e, .x=0x8e, .y=0x7f, .sp=0x63, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xb9e2, .value=0xf0}, {.addr=0xb9e3, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xb9e2, .value=0xf0, .type=IO_READ},
        {.addr=0xb9e3, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_031B) {
    const struct CPU_State initial_cpu = {.pc=0x1baa, .a=0xd6, .x=0x90, .y=0xc4, .sp=0xfd, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x1baa, .value=0xf0}, {.addr=0x1bab, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x1bcf, .a=0xd6, .x=0x90, .y=0xc4, .sp=0xfd, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x1baa, .value=0xf0}, {.addr=0x1bab, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x1baa, .value=0xf0, .type=IO_READ},
        {.addr=0x1bab, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_031C) {
    const struct CPU_State initial_cpu = {.pc=0x2f64, .a=0x01, .x=0x2d, .y=0x3f, .sp=0xc8, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x2f64, .value=0xf0}, {.addr=0x2f65, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x2f66, .a=0x01, .x=0x2d, .y=0x3f, .sp=0xc8, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2f64, .value=0xf0}, {.addr=0x2f65, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x2f64, .value=0xf0, .type=IO_READ},
        {.addr=0x2f65, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_031D) {
    const struct CPU_State initial_cpu = {.pc=0xd37d, .a=0x74, .x=0xb8, .y=0xce, .sp=0xd8, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xd37d, .value=0xf0}, {.addr=0xd37e, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xd37f, .a=0x74, .x=0xb8, .y=0xce, .sp=0xd8, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd37d, .value=0xf0}, {.addr=0xd37e, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xd37d, .value=0xf0, .type=IO_READ},
        {.addr=0xd37e, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_031E) {
    const struct CPU_State initial_cpu = {.pc=0xf6f4, .a=0xbb, .x=0xd9, .y=0xd6, .sp=0xf6, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf6f4, .value=0xf0}, {.addr=0xf6f5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf6f6, .a=0xbb, .x=0xd9, .y=0xd6, .sp=0xf6, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf6f4, .value=0xf0}, {.addr=0xf6f5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf6f4, .value=0xf0, .type=IO_READ},
        {.addr=0xf6f5, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_031F) {
    const struct CPU_State initial_cpu = {.pc=0x5d60, .a=0x4b, .x=0x5d, .y=0xa5, .sp=0x8c, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x5d60, .value=0xf0}, {.addr=0x5d61, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x5cec, .a=0x4b, .x=0x5d, .y=0xa5, .sp=0x8c, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x5d60, .value=0xf0}, {.addr=0x5d61, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x5d60, .value=0xf0, .type=IO_READ},
        {.addr=0x5d61, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0320) {
    const struct CPU_State initial_cpu = {.pc=0x99cd, .a=0x03, .x=0xb9, .y=0xee, .sp=0x05, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x99cd, .value=0xf0}, {.addr=0x99ce, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x99e3, .a=0x03, .x=0xb9, .y=0xee, .sp=0x05, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x99cd, .value=0xf0}, {.addr=0x99ce, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x99cd, .value=0xf0, .type=IO_READ},
        {.addr=0x99ce, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0321) {
    const struct CPU_State initial_cpu = {.pc=0x0ac9, .a=0x1d, .x=0x92, .y=0x6c, .sp=0x85, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0ac9, .value=0xf0}, {.addr=0x0aca, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x0ae5, .a=0x1d, .x=0x92, .y=0x6c, .sp=0x85, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0ac9, .value=0xf0}, {.addr=0x0aca, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x0ac9, .value=0xf0, .type=IO_READ},
        {.addr=0x0aca, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0322) {
    const struct CPU_State initial_cpu = {.pc=0xc54b, .a=0xee, .x=0x6b, .y=0x2b, .sp=0xd7, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xc54b, .value=0xf0}, {.addr=0xc54c, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xc54d, .a=0xee, .x=0x6b, .y=0x2b, .sp=0xd7, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc54b, .value=0xf0}, {.addr=0xc54c, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xc54b, .value=0xf0, .type=IO_READ},
        {.addr=0xc54c, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0323) {
    const struct CPU_State initial_cpu = {.pc=0x2095, .a=0xf1, .x=0xc7, .y=0x3d, .sp=0x48, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x2095, .value=0xf0}, {.addr=0x2096, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x2031, .a=0xf1, .x=0xc7, .y=0x3d, .sp=0x48, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x2095, .value=0xf0}, {.addr=0x2096, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x2095, .value=0xf0, .type=IO_READ},
        {.addr=0x2096, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0324) {
    const struct CPU_State initial_cpu = {.pc=0xfb3a, .a=0x4f, .x=0xcf, .y=0x98, .sp=0x1a, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xfb3a, .value=0xf0}, {.addr=0xfb3b, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xfb3c, .a=0x4f, .x=0xcf, .y=0x98, .sp=0x1a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xfb3a, .value=0xf0}, {.addr=0xfb3b, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xfb3a, .value=0xf0, .type=IO_READ},
        {.addr=0xfb3b, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0325) {
    const struct CPU_State initial_cpu = {.pc=0x26e3, .a=0x88, .x=0xbf, .y=0x8c, .sp=0x10, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x26e3, .value=0xf0}, {.addr=0x26e4, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x26e5, .a=0x88, .x=0xbf, .y=0x8c, .sp=0x10, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x26e3, .value=0xf0}, {.addr=0x26e4, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x26e3, .value=0xf0, .type=IO_READ},
        {.addr=0x26e4, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0326) {
    const struct CPU_State initial_cpu = {.pc=0x8499, .a=0xcb, .x=0x6c, .y=0xc0, .sp=0x1c, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x8499, .value=0xf0}, {.addr=0x849a, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x8440, .a=0xcb, .x=0x6c, .y=0xc0, .sp=0x1c, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x8499, .value=0xf0}, {.addr=0x849a, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x8499, .value=0xf0, .type=IO_READ},
        {.addr=0x849a, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0327) {
    const struct CPU_State initial_cpu = {.pc=0x9d31, .a=0xef, .x=0x9d, .y=0xd8, .sp=0xf0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x9d31, .value=0xf0}, {.addr=0x9d32, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9cf2, .a=0xef, .x=0x9d, .y=0xd8, .sp=0xf0, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x9d31, .value=0xf0}, {.addr=0x9d32, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9d31, .value=0xf0, .type=IO_READ},
        {.addr=0x9d32, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0328) {
    const struct CPU_State initial_cpu = {.pc=0x0a99, .a=0x7d, .x=0x9e, .y=0xda, .sp=0xc5, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0a99, .value=0xf0}, {.addr=0x0a9a, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x0afa, .a=0x7d, .x=0x9e, .y=0xda, .sp=0xc5, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0a99, .value=0xf0}, {.addr=0x0a9a, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x0a99, .value=0xf0, .type=IO_READ},
        {.addr=0x0a9a, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0329) {
    const struct CPU_State initial_cpu = {.pc=0xa00f, .a=0xce, .x=0xd1, .y=0x0a, .sp=0x46, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xa00f, .value=0xf0}, {.addr=0xa010, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xa08c, .a=0xce, .x=0xd1, .y=0x0a, .sp=0x46, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xa00f, .value=0xf0}, {.addr=0xa010, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xa00f, .value=0xf0, .type=IO_READ},
        {.addr=0xa010, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_032A) {
    const struct CPU_State initial_cpu = {.pc=0x8f7c, .a=0xff, .x=0x6b, .y=0xe6, .sp=0x52, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x8f7c, .value=0xf0}, {.addr=0x8f7d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8f7e, .a=0xff, .x=0x6b, .y=0xe6, .sp=0x52, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8f7c, .value=0xf0}, {.addr=0x8f7d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8f7c, .value=0xf0, .type=IO_READ},
        {.addr=0x8f7d, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_032B) {
    const struct CPU_State initial_cpu = {.pc=0x806b, .a=0xae, .x=0x43, .y=0x7b, .sp=0xb9, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x806b, .value=0xf0}, {.addr=0x806c, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x8091, .a=0xae, .x=0x43, .y=0x7b, .sp=0xb9, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x806b, .value=0xf0}, {.addr=0x806c, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x806b, .value=0xf0, .type=IO_READ},
        {.addr=0x806c, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_032C) {
    const struct CPU_State initial_cpu = {.pc=0xc0f0, .a=0xe5, .x=0x9e, .y=0x6d, .sp=0xfa, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xc0f0, .value=0xf0}, {.addr=0xc0f1, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xc0b3, .a=0xe5, .x=0x9e, .y=0x6d, .sp=0xfa, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xc0f0, .value=0xf0}, {.addr=0xc0f1, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xc0f0, .value=0xf0, .type=IO_READ},
        {.addr=0xc0f1, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_032D) {
    const struct CPU_State initial_cpu = {.pc=0xf630, .a=0xa1, .x=0xa4, .y=0x73, .sp=0xc6, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xf630, .value=0xf0}, {.addr=0xf631, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xf5c3, .a=0xa1, .x=0xa4, .y=0x73, .sp=0xc6, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xf630, .value=0xf0}, {.addr=0xf631, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xf630, .value=0xf0, .type=IO_READ},
        {.addr=0xf631, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_032E) {
    const struct CPU_State initial_cpu = {.pc=0x8a56, .a=0x3c, .x=0x7c, .y=0xa4, .sp=0xbd, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x8a56, .value=0xf0}, {.addr=0x8a57, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x8a58, .a=0x3c, .x=0x7c, .y=0xa4, .sp=0xbd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8a56, .value=0xf0}, {.addr=0x8a57, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x8a56, .value=0xf0, .type=IO_READ},
        {.addr=0x8a57, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_032F) {
    const struct CPU_State initial_cpu = {.pc=0xa485, .a=0xb8, .x=0x55, .y=0xbe, .sp=0x50, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xa485, .value=0xf0}, {.addr=0xa486, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa4f4, .a=0xb8, .x=0x55, .y=0xbe, .sp=0x50, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xa485, .value=0xf0}, {.addr=0xa486, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa485, .value=0xf0, .type=IO_READ},
        {.addr=0xa486, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0330) {
    const struct CPU_State initial_cpu = {.pc=0xad83, .a=0x3e, .x=0x0b, .y=0x60, .sp=0x23, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xad83, .value=0xf0}, {.addr=0xad84, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xad85, .a=0x3e, .x=0x0b, .y=0x60, .sp=0x23, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xad83, .value=0xf0}, {.addr=0xad84, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xad83, .value=0xf0, .type=IO_READ},
        {.addr=0xad84, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0331) {
    const struct CPU_State initial_cpu = {.pc=0xc21a, .a=0x70, .x=0x20, .y=0x98, .sp=0x19, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xc21a, .value=0xf0}, {.addr=0xc21b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc21c, .a=0x70, .x=0x20, .y=0x98, .sp=0x19, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xc21a, .value=0xf0}, {.addr=0xc21b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc21a, .value=0xf0, .type=IO_READ},
        {.addr=0xc21b, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0332) {
    const struct CPU_State initial_cpu = {.pc=0x46cd, .a=0x6b, .x=0xcc, .y=0xc7, .sp=0x2b, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x46cd, .value=0xf0}, {.addr=0x46ce, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x46cf, .a=0x6b, .x=0xcc, .y=0xc7, .sp=0x2b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x46cd, .value=0xf0}, {.addr=0x46ce, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x46cd, .value=0xf0, .type=IO_READ},
        {.addr=0x46ce, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0333) {
    const struct CPU_State initial_cpu = {.pc=0xf955, .a=0xaa, .x=0x01, .y=0xa5, .sp=0x7b, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xf955, .value=0xf0}, {.addr=0xf956, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xf957, .a=0xaa, .x=0x01, .y=0xa5, .sp=0x7b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf955, .value=0xf0}, {.addr=0xf956, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xf955, .value=0xf0, .type=IO_READ},
        {.addr=0xf956, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0334) {
    const struct CPU_State initial_cpu = {.pc=0x82ee, .a=0x09, .x=0x4a, .y=0x60, .sp=0x6c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x82ee, .value=0xf0}, {.addr=0x82ef, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x82f0, .a=0x09, .x=0x4a, .y=0x60, .sp=0x6c, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x82ee, .value=0xf0}, {.addr=0x82ef, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x82ee, .value=0xf0, .type=IO_READ},
        {.addr=0x82ef, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0335) {
    const struct CPU_State initial_cpu = {.pc=0x1e4a, .a=0xcc, .x=0x37, .y=0x02, .sp=0xee, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x1e4a, .value=0xf0}, {.addr=0x1e4b, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x1e4c, .a=0xcc, .x=0x37, .y=0x02, .sp=0xee, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1e4a, .value=0xf0}, {.addr=0x1e4b, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x1e4a, .value=0xf0, .type=IO_READ},
        {.addr=0x1e4b, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0336) {
    const struct CPU_State initial_cpu = {.pc=0x934c, .a=0x72, .x=0x8d, .y=0x83, .sp=0x8e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x934c, .value=0xf0}, {.addr=0x934d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x92ee, .a=0x72, .x=0x8d, .y=0x83, .sp=0x8e, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x934c, .value=0xf0}, {.addr=0x934d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x934c, .value=0xf0, .type=IO_READ},
        {.addr=0x934d, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0337) {
    const struct CPU_State initial_cpu = {.pc=0x94c3, .a=0x8b, .x=0xaa, .y=0x98, .sp=0xae, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x94c3, .value=0xf0}, {.addr=0x94c4, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x94c5, .a=0x8b, .x=0xaa, .y=0x98, .sp=0xae, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x94c3, .value=0xf0}, {.addr=0x94c4, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x94c3, .value=0xf0, .type=IO_READ},
        {.addr=0x94c4, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0338) {
    const struct CPU_State initial_cpu = {.pc=0x4337, .a=0xc4, .x=0x3a, .y=0x4d, .sp=0x2f, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x4337, .value=0xf0}, {.addr=0x4338, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x42e8, .a=0xc4, .x=0x3a, .y=0x4d, .sp=0x2f, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x4337, .value=0xf0}, {.addr=0x4338, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4337, .value=0xf0, .type=IO_READ},
        {.addr=0x4338, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0339) {
    const struct CPU_State initial_cpu = {.pc=0xfbe2, .a=0x31, .x=0x92, .y=0x20, .sp=0x0b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe2, .value=0xf0}, {.addr=0xfbe3, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xfbe4, .a=0x31, .x=0x92, .y=0x20, .sp=0x0b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfbe2, .value=0xf0}, {.addr=0xfbe3, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xfbe2, .value=0xf0, .type=IO_READ},
        {.addr=0xfbe3, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_033A) {
    const struct CPU_State initial_cpu = {.pc=0xf8f7, .a=0x1e, .x=0x1b, .y=0x2c, .sp=0xde, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xf8f7, .value=0xf0}, {.addr=0xf8f8, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xf881, .a=0x1e, .x=0x1b, .y=0x2c, .sp=0xde, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xf8f7, .value=0xf0}, {.addr=0xf8f8, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xf8f7, .value=0xf0, .type=IO_READ},
        {.addr=0xf8f8, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_033B) {
    const struct CPU_State initial_cpu = {.pc=0x57ed, .a=0xe3, .x=0xe5, .y=0x6a, .sp=0xa3, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x57ed, .value=0xf0}, {.addr=0x57ee, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x578c, .a=0xe3, .x=0xe5, .y=0x6a, .sp=0xa3, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x57ed, .value=0xf0}, {.addr=0x57ee, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x57ed, .value=0xf0, .type=IO_READ},
        {.addr=0x57ee, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_033C) {
    const struct CPU_State initial_cpu = {.pc=0x989d, .a=0x32, .x=0x8a, .y=0xed, .sp=0x90, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x989d, .value=0xf0}, {.addr=0x989e, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x98e1, .a=0x32, .x=0x8a, .y=0xed, .sp=0x90, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x989d, .value=0xf0}, {.addr=0x989e, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x989d, .value=0xf0, .type=IO_READ},
        {.addr=0x989e, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_033D) {
    const struct CPU_State initial_cpu = {.pc=0x7695, .a=0xae, .x=0x29, .y=0xef, .sp=0xdd, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x7695, .value=0xf0}, {.addr=0x7696, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x7650, .a=0xae, .x=0x29, .y=0xef, .sp=0xdd, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x7695, .value=0xf0}, {.addr=0x7696, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x7695, .value=0xf0, .type=IO_READ},
        {.addr=0x7696, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_033E) {
    const struct CPU_State initial_cpu = {.pc=0xc734, .a=0x28, .x=0xe7, .y=0xb2, .sp=0x7f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xc734, .value=0xf0}, {.addr=0xc735, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc736, .a=0x28, .x=0xe7, .y=0xb2, .sp=0x7f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xc734, .value=0xf0}, {.addr=0xc735, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc734, .value=0xf0, .type=IO_READ},
        {.addr=0xc735, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_033F) {
    const struct CPU_State initial_cpu = {.pc=0xff31, .a=0x30, .x=0xe7, .y=0x77, .sp=0x4c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xff31, .value=0xf0}, {.addr=0xff32, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xff33, .a=0x30, .x=0xe7, .y=0x77, .sp=0x4c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xff31, .value=0xf0}, {.addr=0xff32, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xff31, .value=0xf0, .type=IO_READ},
        {.addr=0xff32, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0340) {
    const struct CPU_State initial_cpu = {.pc=0xd308, .a=0xc0, .x=0x40, .y=0xee, .sp=0xa0, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xd308, .value=0xf0}, {.addr=0xd309, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xd30a, .a=0xc0, .x=0x40, .y=0xee, .sp=0xa0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd308, .value=0xf0}, {.addr=0xd309, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xd308, .value=0xf0, .type=IO_READ},
        {.addr=0xd309, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0341) {
    const struct CPU_State initial_cpu = {.pc=0xe7d0, .a=0x6a, .x=0x1a, .y=0x0d, .sp=0x60, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xe7d0, .value=0xf0}, {.addr=0xe7d1, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xe7d2, .a=0x6a, .x=0x1a, .y=0x0d, .sp=0x60, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xe7d0, .value=0xf0}, {.addr=0xe7d1, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xe7d0, .value=0xf0, .type=IO_READ},
        {.addr=0xe7d1, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0342) {
    const struct CPU_State initial_cpu = {.pc=0xa5d7, .a=0x03, .x=0xa0, .y=0xd6, .sp=0xee, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xa5d7, .value=0xf0}, {.addr=0xa5d8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa5d9, .a=0x03, .x=0xa0, .y=0xd6, .sp=0xee, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xa5d7, .value=0xf0}, {.addr=0xa5d8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa5d7, .value=0xf0, .type=IO_READ},
        {.addr=0xa5d8, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0343) {
    const struct CPU_State initial_cpu = {.pc=0x7d17, .a=0x45, .x=0xf4, .y=0x48, .sp=0x79, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7d17, .value=0xf0}, {.addr=0x7d18, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x7d19, .a=0x45, .x=0xf4, .y=0x48, .sp=0x79, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7d17, .value=0xf0}, {.addr=0x7d18, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x7d17, .value=0xf0, .type=IO_READ},
        {.addr=0x7d18, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0344) {
    const struct CPU_State initial_cpu = {.pc=0x938e, .a=0x4a, .x=0x96, .y=0x5b, .sp=0x14, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x938e, .value=0xf0}, {.addr=0x938f, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x93fe, .a=0x4a, .x=0x96, .y=0x5b, .sp=0x14, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x938e, .value=0xf0}, {.addr=0x938f, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x938e, .value=0xf0, .type=IO_READ},
        {.addr=0x938f, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0345) {
    const struct CPU_State initial_cpu = {.pc=0x1dbf, .a=0x84, .x=0x80, .y=0xd4, .sp=0x71, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x1dbf, .value=0xf0}, {.addr=0x1dc0, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x1dc1, .a=0x84, .x=0x80, .y=0xd4, .sp=0x71, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x1dbf, .value=0xf0}, {.addr=0x1dc0, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x1dbf, .value=0xf0, .type=IO_READ},
        {.addr=0x1dc0, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0346) {
    const struct CPU_State initial_cpu = {.pc=0xdebb, .a=0x94, .x=0x1f, .y=0xa3, .sp=0x4d, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xdebb, .value=0xf0}, {.addr=0xdebc, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xdebd, .a=0x94, .x=0x1f, .y=0xa3, .sp=0x4d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xdebb, .value=0xf0}, {.addr=0xdebc, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xdebb, .value=0xf0, .type=IO_READ},
        {.addr=0xdebc, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0347) {
    const struct CPU_State initial_cpu = {.pc=0x432e, .a=0x8c, .x=0x6a, .y=0x53, .sp=0x2c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x432e, .value=0xf0}, {.addr=0x432f, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x435c, .a=0x8c, .x=0x6a, .y=0x53, .sp=0x2c, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x432e, .value=0xf0}, {.addr=0x432f, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x432e, .value=0xf0, .type=IO_READ},
        {.addr=0x432f, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0348) {
    const struct CPU_State initial_cpu = {.pc=0x0c64, .a=0x6b, .x=0x9e, .y=0x0b, .sp=0x70, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0c64, .value=0xf0}, {.addr=0x0c65, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x0c6f, .a=0x6b, .x=0x9e, .y=0x0b, .sp=0x70, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0c64, .value=0xf0}, {.addr=0x0c65, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x0c64, .value=0xf0, .type=IO_READ},
        {.addr=0x0c65, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0349) {
    const struct CPU_State initial_cpu = {.pc=0xbee0, .a=0x1d, .x=0xea, .y=0x26, .sp=0x98, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xbee0, .value=0xf0}, {.addr=0xbee1, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xbee2, .a=0x1d, .x=0xea, .y=0x26, .sp=0x98, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xbee0, .value=0xf0}, {.addr=0xbee1, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xbee0, .value=0xf0, .type=IO_READ},
        {.addr=0xbee1, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_034A) {
    const struct CPU_State initial_cpu = {.pc=0xe3fb, .a=0xaf, .x=0xe7, .y=0x46, .sp=0x82, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xe3fb, .value=0xf0}, {.addr=0xe3fc, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xe3fd, .a=0xaf, .x=0xe7, .y=0x46, .sp=0x82, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xe3fb, .value=0xf0}, {.addr=0xe3fc, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xe3fb, .value=0xf0, .type=IO_READ},
        {.addr=0xe3fc, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_034B) {
    const struct CPU_State initial_cpu = {.pc=0xcc5c, .a=0x83, .x=0xb1, .y=0xf9, .sp=0x6f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xcc5c, .value=0xf0}, {.addr=0xcc5d, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xcbdf, .a=0x83, .x=0xb1, .y=0xf9, .sp=0x6f, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xcc5c, .value=0xf0}, {.addr=0xcc5d, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xcc5c, .value=0xf0, .type=IO_READ},
        {.addr=0xcc5d, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_034C) {
    const struct CPU_State initial_cpu = {.pc=0xd9ea, .a=0x5d, .x=0xc8, .y=0xb0, .sp=0x14, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ea, .value=0xf0}, {.addr=0xd9eb, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xd9ec, .a=0x5d, .x=0xc8, .y=0xb0, .sp=0x14, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd9ea, .value=0xf0}, {.addr=0xd9eb, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xd9ea, .value=0xf0, .type=IO_READ},
        {.addr=0xd9eb, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_034D) {
    const struct CPU_State initial_cpu = {.pc=0xaf94, .a=0x08, .x=0x54, .y=0xf4, .sp=0xb0, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xaf94, .value=0xf0}, {.addr=0xaf95, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xaf96, .a=0x08, .x=0x54, .y=0xf4, .sp=0xb0, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xaf94, .value=0xf0}, {.addr=0xaf95, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xaf94, .value=0xf0, .type=IO_READ},
        {.addr=0xaf95, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_034E) {
    const struct CPU_State initial_cpu = {.pc=0x7b3c, .a=0x4e, .x=0xea, .y=0xcb, .sp=0xf3, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7b3c, .value=0xf0}, {.addr=0x7b3d, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x7b3e, .a=0x4e, .x=0xea, .y=0xcb, .sp=0xf3, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7b3c, .value=0xf0}, {.addr=0x7b3d, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x7b3c, .value=0xf0, .type=IO_READ},
        {.addr=0x7b3d, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_034F) {
    const struct CPU_State initial_cpu = {.pc=0x4d3c, .a=0x73, .x=0xaf, .y=0xd6, .sp=0x6b, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x4d3c, .value=0xf0}, {.addr=0x4d3d, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x4d4c, .a=0x73, .x=0xaf, .y=0xd6, .sp=0x6b, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x4d3c, .value=0xf0}, {.addr=0x4d3d, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x4d3c, .value=0xf0, .type=IO_READ},
        {.addr=0x4d3d, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0350) {
    const struct CPU_State initial_cpu = {.pc=0xa206, .a=0x07, .x=0xe7, .y=0x7b, .sp=0x16, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xa206, .value=0xf0}, {.addr=0xa207, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xa208, .a=0x07, .x=0xe7, .y=0x7b, .sp=0x16, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xa206, .value=0xf0}, {.addr=0xa207, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xa206, .value=0xf0, .type=IO_READ},
        {.addr=0xa207, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0351) {
    const struct CPU_State initial_cpu = {.pc=0xe8af, .a=0x15, .x=0xa4, .y=0xed, .sp=0xaa, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xe8af, .value=0xf0}, {.addr=0xe8b0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe8b1, .a=0x15, .x=0xa4, .y=0xed, .sp=0xaa, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe8af, .value=0xf0}, {.addr=0xe8b0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe8af, .value=0xf0, .type=IO_READ},
        {.addr=0xe8b0, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0352) {
    const struct CPU_State initial_cpu = {.pc=0x409c, .a=0x61, .x=0xd0, .y=0xa8, .sp=0x33, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x409c, .value=0xf0}, {.addr=0x409d, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x409e, .a=0x61, .x=0xd0, .y=0xa8, .sp=0x33, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x409c, .value=0xf0}, {.addr=0x409d, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x409c, .value=0xf0, .type=IO_READ},
        {.addr=0x409d, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0353) {
    const struct CPU_State initial_cpu = {.pc=0x403b, .a=0xf9, .x=0x87, .y=0x7d, .sp=0xee, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x403b, .value=0xf0}, {.addr=0x403c, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x4015, .a=0xf9, .x=0x87, .y=0x7d, .sp=0xee, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x403b, .value=0xf0}, {.addr=0x403c, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x403b, .value=0xf0, .type=IO_READ},
        {.addr=0x403c, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0354) {
    const struct CPU_State initial_cpu = {.pc=0xe82e, .a=0xb9, .x=0xea, .y=0x95, .sp=0xb0, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xe82e, .value=0xf0}, {.addr=0xe82f, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xe7fc, .a=0xb9, .x=0xea, .y=0x95, .sp=0xb0, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xe82e, .value=0xf0}, {.addr=0xe82f, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xe82e, .value=0xf0, .type=IO_READ},
        {.addr=0xe82f, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0355) {
    const struct CPU_State initial_cpu = {.pc=0x7ade, .a=0xd9, .x=0xd5, .y=0xfc, .sp=0xcc, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x7ade, .value=0xf0}, {.addr=0x7adf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7ae0, .a=0xd9, .x=0xd5, .y=0xfc, .sp=0xcc, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7ade, .value=0xf0}, {.addr=0x7adf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7ade, .value=0xf0, .type=IO_READ},
        {.addr=0x7adf, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0356) {
    const struct CPU_State initial_cpu = {.pc=0xc245, .a=0xdd, .x=0x41, .y=0xfd, .sp=0x76, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xc245, .value=0xf0}, {.addr=0xc246, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xc247, .a=0xdd, .x=0x41, .y=0xfd, .sp=0x76, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xc245, .value=0xf0}, {.addr=0xc246, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xc245, .value=0xf0, .type=IO_READ},
        {.addr=0xc246, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0357) {
    const struct CPU_State initial_cpu = {.pc=0x1097, .a=0xfe, .x=0xb5, .y=0x59, .sp=0xf6, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x1097, .value=0xf0}, {.addr=0x1098, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x109c, .a=0xfe, .x=0xb5, .y=0x59, .sp=0xf6, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x1097, .value=0xf0}, {.addr=0x1098, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x1097, .value=0xf0, .type=IO_READ},
        {.addr=0x1098, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0358) {
    const struct CPU_State initial_cpu = {.pc=0x852b, .a=0x55, .x=0xbc, .y=0xee, .sp=0x04, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x852b, .value=0xf0}, {.addr=0x852c, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x84ed, .a=0x55, .x=0xbc, .y=0xee, .sp=0x04, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x852b, .value=0xf0}, {.addr=0x852c, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x852b, .value=0xf0, .type=IO_READ},
        {.addr=0x852c, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0359) {
    const struct CPU_State initial_cpu = {.pc=0x3176, .a=0xb0, .x=0xff, .y=0x31, .sp=0x61, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x3176, .value=0xf0}, {.addr=0x3177, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x31e7, .a=0xb0, .x=0xff, .y=0x31, .sp=0x61, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x3176, .value=0xf0}, {.addr=0x3177, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x3176, .value=0xf0, .type=IO_READ},
        {.addr=0x3177, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_035A) {
    const struct CPU_State initial_cpu = {.pc=0xb92f, .a=0x4e, .x=0xb0, .y=0x42, .sp=0xa5, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xb92f, .value=0xf0}, {.addr=0xb930, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb931, .a=0x4e, .x=0xb0, .y=0x42, .sp=0xa5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xb92f, .value=0xf0}, {.addr=0xb930, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb92f, .value=0xf0, .type=IO_READ},
        {.addr=0xb930, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_035B) {
    const struct CPU_State initial_cpu = {.pc=0x101d, .a=0xb4, .x=0xfe, .y=0x91, .sp=0x21, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x101d, .value=0xf0}, {.addr=0x101e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0ffb, .a=0xb4, .x=0xfe, .y=0x91, .sp=0x21, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x101d, .value=0xf0}, {.addr=0x101e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x101d, .value=0xf0, .type=IO_READ},
        {.addr=0x101e, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_035C) {
    const struct CPU_State initial_cpu = {.pc=0xe177, .a=0xb1, .x=0x24, .y=0xf5, .sp=0x35, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xe177, .value=0xf0}, {.addr=0xe178, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe116, .a=0xb1, .x=0x24, .y=0xf5, .sp=0x35, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xe177, .value=0xf0}, {.addr=0xe178, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe177, .value=0xf0, .type=IO_READ},
        {.addr=0xe178, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_035D) {
    const struct CPU_State initial_cpu = {.pc=0xfa48, .a=0x13, .x=0x16, .y=0x53, .sp=0x16, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xfa48, .value=0xf0}, {.addr=0xfa49, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfa4a, .a=0x13, .x=0x16, .y=0x53, .sp=0x16, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xfa48, .value=0xf0}, {.addr=0xfa49, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfa48, .value=0xf0, .type=IO_READ},
        {.addr=0xfa49, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_035E) {
    const struct CPU_State initial_cpu = {.pc=0x794f, .a=0xc5, .x=0x17, .y=0xb7, .sp=0x97, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x794f, .value=0xf0}, {.addr=0x7950, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x7951, .a=0xc5, .x=0x17, .y=0xb7, .sp=0x97, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x794f, .value=0xf0}, {.addr=0x7950, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x794f, .value=0xf0, .type=IO_READ},
        {.addr=0x7950, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_035F) {
    const struct CPU_State initial_cpu = {.pc=0x7b9f, .a=0xc8, .x=0xea, .y=0xf9, .sp=0x52, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x7b9f, .value=0xf0}, {.addr=0x7ba0, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x7b37, .a=0xc8, .x=0xea, .y=0xf9, .sp=0x52, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x7b9f, .value=0xf0}, {.addr=0x7ba0, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x7b9f, .value=0xf0, .type=IO_READ},
        {.addr=0x7ba0, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0360) {
    const struct CPU_State initial_cpu = {.pc=0x27db, .a=0x00, .x=0x96, .y=0xde, .sp=0x59, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x27db, .value=0xf0}, {.addr=0x27dc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x27dd, .a=0x00, .x=0x96, .y=0xde, .sp=0x59, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x27db, .value=0xf0}, {.addr=0x27dc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x27db, .value=0xf0, .type=IO_READ},
        {.addr=0x27dc, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0361) {
    const struct CPU_State initial_cpu = {.pc=0x41fc, .a=0x04, .x=0x4f, .y=0xb1, .sp=0x23, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x41fc, .value=0xf0}, {.addr=0x41fd, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x41fe, .a=0x04, .x=0x4f, .y=0xb1, .sp=0x23, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x41fc, .value=0xf0}, {.addr=0x41fd, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x41fc, .value=0xf0, .type=IO_READ},
        {.addr=0x41fd, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0362) {
    const struct CPU_State initial_cpu = {.pc=0xc5ff, .a=0x06, .x=0xf0, .y=0x2e, .sp=0xba, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xc5ff, .value=0xf0}, {.addr=0xc600, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xc64b, .a=0x06, .x=0xf0, .y=0x2e, .sp=0xba, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xc5ff, .value=0xf0}, {.addr=0xc600, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xc5ff, .value=0xf0, .type=IO_READ},
        {.addr=0xc600, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0363) {
    const struct CPU_State initial_cpu = {.pc=0xe2d7, .a=0xcc, .x=0x9e, .y=0x47, .sp=0x8d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d7, .value=0xf0}, {.addr=0xe2d8, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xe2d9, .a=0xcc, .x=0x9e, .y=0x47, .sp=0x8d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe2d7, .value=0xf0}, {.addr=0xe2d8, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xe2d7, .value=0xf0, .type=IO_READ},
        {.addr=0xe2d8, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0364) {
    const struct CPU_State initial_cpu = {.pc=0x1854, .a=0xff, .x=0xf3, .y=0x29, .sp=0x4b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x1854, .value=0xf0}, {.addr=0x1855, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x1856, .a=0xff, .x=0xf3, .y=0x29, .sp=0x4b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x1854, .value=0xf0}, {.addr=0x1855, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x1854, .value=0xf0, .type=IO_READ},
        {.addr=0x1855, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0365) {
    const struct CPU_State initial_cpu = {.pc=0xa231, .a=0x48, .x=0x38, .y=0xa7, .sp=0xf5, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa231, .value=0xf0}, {.addr=0xa232, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xa233, .a=0x48, .x=0x38, .y=0xa7, .sp=0xf5, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa231, .value=0xf0}, {.addr=0xa232, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xa231, .value=0xf0, .type=IO_READ},
        {.addr=0xa232, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0366) {
    const struct CPU_State initial_cpu = {.pc=0xa45e, .a=0x75, .x=0x10, .y=0x7a, .sp=0x3b, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xa45e, .value=0xf0}, {.addr=0xa45f, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xa46f, .a=0x75, .x=0x10, .y=0x7a, .sp=0x3b, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xa45e, .value=0xf0}, {.addr=0xa45f, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xa45e, .value=0xf0, .type=IO_READ},
        {.addr=0xa45f, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0367) {
    const struct CPU_State initial_cpu = {.pc=0xf74d, .a=0x42, .x=0x90, .y=0x7c, .sp=0x97, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xf74d, .value=0xf0}, {.addr=0xf74e, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xf74f, .a=0x42, .x=0x90, .y=0x7c, .sp=0x97, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xf74d, .value=0xf0}, {.addr=0xf74e, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xf74d, .value=0xf0, .type=IO_READ},
        {.addr=0xf74e, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0368) {
    const struct CPU_State initial_cpu = {.pc=0xd9c8, .a=0xef, .x=0x4c, .y=0x14, .sp=0x37, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xd9c8, .value=0xf0}, {.addr=0xd9c9, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xd980, .a=0xef, .x=0x4c, .y=0x14, .sp=0x37, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xd9c8, .value=0xf0}, {.addr=0xd9c9, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xd9c8, .value=0xf0, .type=IO_READ},
        {.addr=0xd9c9, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0369) {
    const struct CPU_State initial_cpu = {.pc=0xa5f3, .a=0x89, .x=0x94, .y=0xfe, .sp=0x7a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xa5f3, .value=0xf0}, {.addr=0xa5f4, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xa63c, .a=0x89, .x=0x94, .y=0xfe, .sp=0x7a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xa5f3, .value=0xf0}, {.addr=0xa5f4, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xa5f3, .value=0xf0, .type=IO_READ},
        {.addr=0xa5f4, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_036A) {
    const struct CPU_State initial_cpu = {.pc=0xf02c, .a=0xc4, .x=0x11, .y=0xd0, .sp=0x1c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xf02c, .value=0xf0}, {.addr=0xf02d, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xf02e, .a=0xc4, .x=0x11, .y=0xd0, .sp=0x1c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xf02c, .value=0xf0}, {.addr=0xf02d, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xf02c, .value=0xf0, .type=IO_READ},
        {.addr=0xf02d, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_036B) {
    const struct CPU_State initial_cpu = {.pc=0x7568, .a=0xa9, .x=0x96, .y=0x47, .sp=0x0c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x7568, .value=0xf0}, {.addr=0x7569, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x754e, .a=0xa9, .x=0x96, .y=0x47, .sp=0x0c, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x7568, .value=0xf0}, {.addr=0x7569, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x7568, .value=0xf0, .type=IO_READ},
        {.addr=0x7569, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_036C) {
    const struct CPU_State initial_cpu = {.pc=0x2518, .a=0x58, .x=0xb2, .y=0xf2, .sp=0x68, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x2518, .value=0xf0}, {.addr=0x2519, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x251a, .a=0x58, .x=0xb2, .y=0xf2, .sp=0x68, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2518, .value=0xf0}, {.addr=0x2519, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x2518, .value=0xf0, .type=IO_READ},
        {.addr=0x2519, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_036D) {
    const struct CPU_State initial_cpu = {.pc=0x9005, .a=0x46, .x=0x0d, .y=0xe0, .sp=0x5a, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x9005, .value=0xf0}, {.addr=0x9006, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x8fd3, .a=0x46, .x=0x0d, .y=0xe0, .sp=0x5a, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x9005, .value=0xf0}, {.addr=0x9006, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x9005, .value=0xf0, .type=IO_READ},
        {.addr=0x9006, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_036E) {
    const struct CPU_State initial_cpu = {.pc=0x4acf, .a=0xb6, .x=0xa7, .y=0xdd, .sp=0xac, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x4acf, .value=0xf0}, {.addr=0x4ad0, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x4af3, .a=0xb6, .x=0xa7, .y=0xdd, .sp=0xac, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x4acf, .value=0xf0}, {.addr=0x4ad0, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x4acf, .value=0xf0, .type=IO_READ},
        {.addr=0x4ad0, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_036F) {
    const struct CPU_State initial_cpu = {.pc=0xe46b, .a=0x5b, .x=0xbd, .y=0x12, .sp=0x03, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xe46b, .value=0xf0}, {.addr=0xe46c, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xe3fa, .a=0x5b, .x=0xbd, .y=0x12, .sp=0x03, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xe46b, .value=0xf0}, {.addr=0xe46c, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xe46b, .value=0xf0, .type=IO_READ},
        {.addr=0xe46c, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0370) {
    const struct CPU_State initial_cpu = {.pc=0xb677, .a=0xd6, .x=0xee, .y=0x70, .sp=0x5d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xb677, .value=0xf0}, {.addr=0xb678, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xb679, .a=0xd6, .x=0xee, .y=0x70, .sp=0x5d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb677, .value=0xf0}, {.addr=0xb678, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xb677, .value=0xf0, .type=IO_READ},
        {.addr=0xb678, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0371) {
    const struct CPU_State initial_cpu = {.pc=0x45d2, .a=0x05, .x=0x4d, .y=0x76, .sp=0x2e, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x45d2, .value=0xf0}, {.addr=0x45d3, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x45e9, .a=0x05, .x=0x4d, .y=0x76, .sp=0x2e, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x45d2, .value=0xf0}, {.addr=0x45d3, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x45d2, .value=0xf0, .type=IO_READ},
        {.addr=0x45d3, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0372) {
    const struct CPU_State initial_cpu = {.pc=0xa31c, .a=0x58, .x=0x1e, .y=0xcf, .sp=0x5b, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xa31c, .value=0xf0}, {.addr=0xa31d, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xa31e, .a=0x58, .x=0x1e, .y=0xcf, .sp=0x5b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xa31c, .value=0xf0}, {.addr=0xa31d, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xa31c, .value=0xf0, .type=IO_READ},
        {.addr=0xa31d, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0373) {
    const struct CPU_State initial_cpu = {.pc=0x6fee, .a=0x66, .x=0xdc, .y=0xcf, .sp=0x34, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x6fee, .value=0xf0}, {.addr=0x6fef, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x705b, .a=0x66, .x=0xdc, .y=0xcf, .sp=0x34, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x6fee, .value=0xf0}, {.addr=0x6fef, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x6fee, .value=0xf0, .type=IO_READ},
        {.addr=0x6fef, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0374) {
    const struct CPU_State initial_cpu = {.pc=0x097f, .a=0x5d, .x=0x5f, .y=0x8d, .sp=0x9e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x097f, .value=0xf0}, {.addr=0x0980, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x0955, .a=0x5d, .x=0x5f, .y=0x8d, .sp=0x9e, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x097f, .value=0xf0}, {.addr=0x0980, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x097f, .value=0xf0, .type=IO_READ},
        {.addr=0x0980, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0375) {
    const struct CPU_State initial_cpu = {.pc=0x55aa, .a=0x9b, .x=0x6b, .y=0x8c, .sp=0x63, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x55aa, .value=0xf0}, {.addr=0x55ab, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x55d9, .a=0x9b, .x=0x6b, .y=0x8c, .sp=0x63, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x55aa, .value=0xf0}, {.addr=0x55ab, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x55aa, .value=0xf0, .type=IO_READ},
        {.addr=0x55ab, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0376) {
    const struct CPU_State initial_cpu = {.pc=0x8069, .a=0x9d, .x=0xf4, .y=0x6a, .sp=0x70, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x8069, .value=0xf0}, {.addr=0x806a, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x806b, .a=0x9d, .x=0xf4, .y=0x6a, .sp=0x70, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8069, .value=0xf0}, {.addr=0x806a, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x8069, .value=0xf0, .type=IO_READ},
        {.addr=0x806a, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0377) {
    const struct CPU_State initial_cpu = {.pc=0x0645, .a=0xbe, .x=0x06, .y=0xc5, .sp=0x09, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0645, .value=0xf0}, {.addr=0x0646, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x0647, .a=0xbe, .x=0x06, .y=0xc5, .sp=0x09, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0645, .value=0xf0}, {.addr=0x0646, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x0645, .value=0xf0, .type=IO_READ},
        {.addr=0x0646, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0378) {
    const struct CPU_State initial_cpu = {.pc=0xcb9f, .a=0x8e, .x=0x29, .y=0xd2, .sp=0x3b, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xcb9f, .value=0xf0}, {.addr=0xcba0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcba1, .a=0x8e, .x=0x29, .y=0xd2, .sp=0x3b, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xcb9f, .value=0xf0}, {.addr=0xcba0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcb9f, .value=0xf0, .type=IO_READ},
        {.addr=0xcba0, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0379) {
    const struct CPU_State initial_cpu = {.pc=0x08d1, .a=0x21, .x=0xfc, .y=0x82, .sp=0x07, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x08d1, .value=0xf0}, {.addr=0x08d2, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x08c9, .a=0x21, .x=0xfc, .y=0x82, .sp=0x07, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x08d1, .value=0xf0}, {.addr=0x08d2, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x08d1, .value=0xf0, .type=IO_READ},
        {.addr=0x08d2, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_037A) {
    const struct CPU_State initial_cpu = {.pc=0x22b2, .a=0x26, .x=0x07, .y=0x49, .sp=0x01, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x22b2, .value=0xf0}, {.addr=0x22b3, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x22b4, .a=0x26, .x=0x07, .y=0x49, .sp=0x01, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x22b2, .value=0xf0}, {.addr=0x22b3, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x22b2, .value=0xf0, .type=IO_READ},
        {.addr=0x22b3, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_037B) {
    const struct CPU_State initial_cpu = {.pc=0x3c73, .a=0x7f, .x=0x3a, .y=0x66, .sp=0xcf, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x3c73, .value=0xf0}, {.addr=0x3c74, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x3c76, .a=0x7f, .x=0x3a, .y=0x66, .sp=0xcf, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x3c73, .value=0xf0}, {.addr=0x3c74, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x3c73, .value=0xf0, .type=IO_READ},
        {.addr=0x3c74, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_037C) {
    const struct CPU_State initial_cpu = {.pc=0xac63, .a=0x45, .x=0xaa, .y=0xae, .sp=0xfa, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xac63, .value=0xf0}, {.addr=0xac64, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xac9d, .a=0x45, .x=0xaa, .y=0xae, .sp=0xfa, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xac63, .value=0xf0}, {.addr=0xac64, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xac63, .value=0xf0, .type=IO_READ},
        {.addr=0xac64, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_037D) {
    const struct CPU_State initial_cpu = {.pc=0x9928, .a=0x92, .x=0xba, .y=0xda, .sp=0xe6, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x9928, .value=0xf0}, {.addr=0x9929, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x995a, .a=0x92, .x=0xba, .y=0xda, .sp=0xe6, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x9928, .value=0xf0}, {.addr=0x9929, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x9928, .value=0xf0, .type=IO_READ},
        {.addr=0x9929, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_037E) {
    const struct CPU_State initial_cpu = {.pc=0x571b, .a=0x9b, .x=0x8e, .y=0x74, .sp=0xc1, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x571b, .value=0xf0}, {.addr=0x571c, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x571d, .a=0x9b, .x=0x8e, .y=0x74, .sp=0xc1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x571b, .value=0xf0}, {.addr=0x571c, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x571b, .value=0xf0, .type=IO_READ},
        {.addr=0x571c, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_037F) {
    const struct CPU_State initial_cpu = {.pc=0x882e, .a=0x20, .x=0xa3, .y=0x3c, .sp=0x70, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x882e, .value=0xf0}, {.addr=0x882f, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x883c, .a=0x20, .x=0xa3, .y=0x3c, .sp=0x70, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x882e, .value=0xf0}, {.addr=0x882f, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x882e, .value=0xf0, .type=IO_READ},
        {.addr=0x882f, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0380) {
    const struct CPU_State initial_cpu = {.pc=0xdcf3, .a=0xa0, .x=0xc3, .y=0xe0, .sp=0x28, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xdcf3, .value=0xf0}, {.addr=0xdcf4, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xdccb, .a=0xa0, .x=0xc3, .y=0xe0, .sp=0x28, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xdcf3, .value=0xf0}, {.addr=0xdcf4, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xdcf3, .value=0xf0, .type=IO_READ},
        {.addr=0xdcf4, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0381) {
    const struct CPU_State initial_cpu = {.pc=0x4282, .a=0xa0, .x=0xd7, .y=0x4d, .sp=0x65, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x4282, .value=0xf0}, {.addr=0x4283, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4284, .a=0xa0, .x=0xd7, .y=0x4d, .sp=0x65, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4282, .value=0xf0}, {.addr=0x4283, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4282, .value=0xf0, .type=IO_READ},
        {.addr=0x4283, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0382) {
    const struct CPU_State initial_cpu = {.pc=0xbb0e, .a=0x51, .x=0xba, .y=0xe9, .sp=0xfb, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xbb0e, .value=0xf0}, {.addr=0xbb0f, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xbb10, .a=0x51, .x=0xba, .y=0xe9, .sp=0xfb, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xbb0e, .value=0xf0}, {.addr=0xbb0f, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xbb0e, .value=0xf0, .type=IO_READ},
        {.addr=0xbb0f, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0383) {
    const struct CPU_State initial_cpu = {.pc=0x1334, .a=0x2b, .x=0xd0, .y=0x09, .sp=0xc1, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x1334, .value=0xf0}, {.addr=0x1335, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x132d, .a=0x2b, .x=0xd0, .y=0x09, .sp=0xc1, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x1334, .value=0xf0}, {.addr=0x1335, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x1334, .value=0xf0, .type=IO_READ},
        {.addr=0x1335, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0384) {
    const struct CPU_State initial_cpu = {.pc=0x72aa, .a=0xa9, .x=0x5d, .y=0x5c, .sp=0xa2, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x72aa, .value=0xf0}, {.addr=0x72ab, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x72a4, .a=0xa9, .x=0x5d, .y=0x5c, .sp=0xa2, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x72aa, .value=0xf0}, {.addr=0x72ab, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x72aa, .value=0xf0, .type=IO_READ},
        {.addr=0x72ab, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0385) {
    const struct CPU_State initial_cpu = {.pc=0xe572, .a=0x8a, .x=0xff, .y=0x08, .sp=0x89, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xe572, .value=0xf0}, {.addr=0xe573, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xe5e9, .a=0x8a, .x=0xff, .y=0x08, .sp=0x89, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xe572, .value=0xf0}, {.addr=0xe573, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xe572, .value=0xf0, .type=IO_READ},
        {.addr=0xe573, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0386) {
    const struct CPU_State initial_cpu = {.pc=0x7b8a, .a=0x7f, .x=0x50, .y=0x24, .sp=0xc2, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x7b8a, .value=0xf0}, {.addr=0x7b8b, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x7b96, .a=0x7f, .x=0x50, .y=0x24, .sp=0xc2, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x7b8a, .value=0xf0}, {.addr=0x7b8b, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x7b8a, .value=0xf0, .type=IO_READ},
        {.addr=0x7b8b, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0387) {
    const struct CPU_State initial_cpu = {.pc=0x5993, .a=0x38, .x=0x62, .y=0xe3, .sp=0x46, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x5993, .value=0xf0}, {.addr=0x5994, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x599c, .a=0x38, .x=0x62, .y=0xe3, .sp=0x46, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x5993, .value=0xf0}, {.addr=0x5994, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x5993, .value=0xf0, .type=IO_READ},
        {.addr=0x5994, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0388) {
    const struct CPU_State initial_cpu = {.pc=0x82b7, .a=0xfc, .x=0x26, .y=0xe0, .sp=0x20, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x82b7, .value=0xf0}, {.addr=0x82b8, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x82b9, .a=0xfc, .x=0x26, .y=0xe0, .sp=0x20, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x82b7, .value=0xf0}, {.addr=0x82b8, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x82b7, .value=0xf0, .type=IO_READ},
        {.addr=0x82b8, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0389) {
    const struct CPU_State initial_cpu = {.pc=0xf9ae, .a=0xa9, .x=0xe2, .y=0x86, .sp=0x52, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ae, .value=0xf0}, {.addr=0xf9af, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xf9b0, .a=0xa9, .x=0xe2, .y=0x86, .sp=0x52, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf9ae, .value=0xf0}, {.addr=0xf9af, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xf9ae, .value=0xf0, .type=IO_READ},
        {.addr=0xf9af, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_038A) {
    const struct CPU_State initial_cpu = {.pc=0x63a7, .a=0xca, .x=0xbc, .y=0xe2, .sp=0x27, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x63a7, .value=0xf0}, {.addr=0x63a8, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x6370, .a=0xca, .x=0xbc, .y=0xe2, .sp=0x27, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x63a7, .value=0xf0}, {.addr=0x63a8, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x63a7, .value=0xf0, .type=IO_READ},
        {.addr=0x63a8, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_038B) {
    const struct CPU_State initial_cpu = {.pc=0x5b55, .a=0x48, .x=0x8d, .y=0xfa, .sp=0xc8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x5b55, .value=0xf0}, {.addr=0x5b56, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x5b57, .a=0x48, .x=0x8d, .y=0xfa, .sp=0xc8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5b55, .value=0xf0}, {.addr=0x5b56, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x5b55, .value=0xf0, .type=IO_READ},
        {.addr=0x5b56, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_038C) {
    const struct CPU_State initial_cpu = {.pc=0xd7db, .a=0xd9, .x=0x3b, .y=0xc3, .sp=0x30, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xd7db, .value=0xf0}, {.addr=0xd7dc, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xd807, .a=0xd9, .x=0x3b, .y=0xc3, .sp=0x30, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xd7db, .value=0xf0}, {.addr=0xd7dc, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xd7db, .value=0xf0, .type=IO_READ},
        {.addr=0xd7dc, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_038D) {
    const struct CPU_State initial_cpu = {.pc=0x41f4, .a=0xda, .x=0xec, .y=0x49, .sp=0x79, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x41f4, .value=0xf0}, {.addr=0x41f5, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x4246, .a=0xda, .x=0xec, .y=0x49, .sp=0x79, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x41f4, .value=0xf0}, {.addr=0x41f5, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x41f4, .value=0xf0, .type=IO_READ},
        {.addr=0x41f5, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_038E) {
    const struct CPU_State initial_cpu = {.pc=0xc227, .a=0x62, .x=0x84, .y=0x86, .sp=0xba, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xc227, .value=0xf0}, {.addr=0xc228, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xc229, .a=0x62, .x=0x84, .y=0x86, .sp=0xba, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xc227, .value=0xf0}, {.addr=0xc228, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xc227, .value=0xf0, .type=IO_READ},
        {.addr=0xc228, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_038F) {
    const struct CPU_State initial_cpu = {.pc=0xeb31, .a=0x52, .x=0x16, .y=0x1d, .sp=0x7d, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xeb31, .value=0xf0}, {.addr=0xeb32, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xeab8, .a=0x52, .x=0x16, .y=0x1d, .sp=0x7d, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xeb31, .value=0xf0}, {.addr=0xeb32, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xeb31, .value=0xf0, .type=IO_READ},
        {.addr=0xeb32, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0390) {
    const struct CPU_State initial_cpu = {.pc=0x05ef, .a=0x8a, .x=0x46, .y=0xe9, .sp=0xb5, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x05ef, .value=0xf0}, {.addr=0x05f0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x064d, .a=0x8a, .x=0x46, .y=0xe9, .sp=0xb5, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x05ef, .value=0xf0}, {.addr=0x05f0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x05ef, .value=0xf0, .type=IO_READ},
        {.addr=0x05f0, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0391) {
    const struct CPU_State initial_cpu = {.pc=0xfa88, .a=0xb4, .x=0xd4, .y=0x33, .sp=0xf1, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xfa88, .value=0xf0}, {.addr=0xfa89, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xfa3f, .a=0xb4, .x=0xd4, .y=0x33, .sp=0xf1, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xfa88, .value=0xf0}, {.addr=0xfa89, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xfa88, .value=0xf0, .type=IO_READ},
        {.addr=0xfa89, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0392) {
    const struct CPU_State initial_cpu = {.pc=0x55d1, .a=0x3c, .x=0xc9, .y=0xe2, .sp=0xeb, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x55d1, .value=0xf0}, {.addr=0x55d2, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x55f8, .a=0x3c, .x=0xc9, .y=0xe2, .sp=0xeb, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x55d1, .value=0xf0}, {.addr=0x55d2, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x55d1, .value=0xf0, .type=IO_READ},
        {.addr=0x55d2, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0393) {
    const struct CPU_State initial_cpu = {.pc=0x269b, .a=0xda, .x=0x76, .y=0xe1, .sp=0x2c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x269b, .value=0xf0}, {.addr=0x269c, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x270e, .a=0xda, .x=0x76, .y=0xe1, .sp=0x2c, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x269b, .value=0xf0}, {.addr=0x269c, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x269b, .value=0xf0, .type=IO_READ},
        {.addr=0x269c, .value=0x71, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0394) {
    const struct CPU_State initial_cpu = {.pc=0x748a, .a=0x32, .x=0x8c, .y=0x97, .sp=0xc0, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x748a, .value=0xf0}, {.addr=0x748b, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x748c, .a=0x32, .x=0x8c, .y=0x97, .sp=0xc0, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x748a, .value=0xf0}, {.addr=0x748b, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x748a, .value=0xf0, .type=IO_READ},
        {.addr=0x748b, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0395) {
    const struct CPU_State initial_cpu = {.pc=0xc526, .a=0x56, .x=0x9f, .y=0xca, .sp=0x67, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xc526, .value=0xf0}, {.addr=0xc527, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xc510, .a=0x56, .x=0x9f, .y=0xca, .sp=0x67, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xc526, .value=0xf0}, {.addr=0xc527, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xc526, .value=0xf0, .type=IO_READ},
        {.addr=0xc527, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0396) {
    const struct CPU_State initial_cpu = {.pc=0x5af0, .a=0x55, .x=0x9d, .y=0xd8, .sp=0xac, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x5af0, .value=0xf0}, {.addr=0x5af1, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x5af2, .a=0x55, .x=0x9d, .y=0xd8, .sp=0xac, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5af0, .value=0xf0}, {.addr=0x5af1, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x5af0, .value=0xf0, .type=IO_READ},
        {.addr=0x5af1, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0397) {
    const struct CPU_State initial_cpu = {.pc=0xe3e6, .a=0x64, .x=0x1a, .y=0x97, .sp=0xf1, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e6, .value=0xf0}, {.addr=0xe3e7, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xe3e8, .a=0x64, .x=0x1a, .y=0x97, .sp=0xf1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe3e6, .value=0xf0}, {.addr=0xe3e7, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xe3e6, .value=0xf0, .type=IO_READ},
        {.addr=0xe3e7, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0398) {
    const struct CPU_State initial_cpu = {.pc=0xa674, .a=0xce, .x=0x2a, .y=0x4b, .sp=0xad, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xa674, .value=0xf0}, {.addr=0xa675, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xa676, .a=0xce, .x=0x2a, .y=0x4b, .sp=0xad, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xa674, .value=0xf0}, {.addr=0xa675, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xa674, .value=0xf0, .type=IO_READ},
        {.addr=0xa675, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_0399) {
    const struct CPU_State initial_cpu = {.pc=0xe697, .a=0x0c, .x=0xfe, .y=0xea, .sp=0x98, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xe697, .value=0xf0}, {.addr=0xe698, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xe6c0, .a=0x0c, .x=0xfe, .y=0xea, .sp=0x98, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xe697, .value=0xf0}, {.addr=0xe698, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xe697, .value=0xf0, .type=IO_READ},
        {.addr=0xe698, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_039A) {
    const struct CPU_State initial_cpu = {.pc=0xf73b, .a=0x12, .x=0x85, .y=0x44, .sp=0xfd, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xf73b, .value=0xf0}, {.addr=0xf73c, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xf6d6, .a=0x12, .x=0x85, .y=0x44, .sp=0xfd, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xf73b, .value=0xf0}, {.addr=0xf73c, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xf73b, .value=0xf0, .type=IO_READ},
        {.addr=0xf73c, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_039B) {
    const struct CPU_State initial_cpu = {.pc=0xd983, .a=0x55, .x=0x39, .y=0x1a, .sp=0x80, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xd983, .value=0xf0}, {.addr=0xd984, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd985, .a=0x55, .x=0x39, .y=0x1a, .sp=0x80, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd983, .value=0xf0}, {.addr=0xd984, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd983, .value=0xf0, .type=IO_READ},
        {.addr=0xd984, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_039C) {
    const struct CPU_State initial_cpu = {.pc=0xff73, .a=0x84, .x=0xf3, .y=0xdf, .sp=0x5a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xff73, .value=0xf0}, {.addr=0xff74, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xff75, .a=0x84, .x=0xf3, .y=0xdf, .sp=0x5a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xff73, .value=0xf0}, {.addr=0xff74, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xff73, .value=0xf0, .type=IO_READ},
        {.addr=0xff74, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_039D) {
    const struct CPU_State initial_cpu = {.pc=0x068a, .a=0xfa, .x=0xde, .y=0x9e, .sp=0x1a, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x068a, .value=0xf0}, {.addr=0x068b, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x068c, .a=0xfa, .x=0xde, .y=0x9e, .sp=0x1a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x068a, .value=0xf0}, {.addr=0x068b, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x068a, .value=0xf0, .type=IO_READ},
        {.addr=0x068b, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_039E) {
    const struct CPU_State initial_cpu = {.pc=0x3421, .a=0xa9, .x=0xd3, .y=0xdd, .sp=0xa2, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x3421, .value=0xf0}, {.addr=0x3422, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x3465, .a=0xa9, .x=0xd3, .y=0xdd, .sp=0xa2, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x3421, .value=0xf0}, {.addr=0x3422, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x3421, .value=0xf0, .type=IO_READ},
        {.addr=0x3422, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_039F) {
    const struct CPU_State initial_cpu = {.pc=0xd45c, .a=0x5f, .x=0x10, .y=0xf7, .sp=0x07, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xd45c, .value=0xf0}, {.addr=0xd45d, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xd4b6, .a=0x5f, .x=0x10, .y=0xf7, .sp=0x07, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xd45c, .value=0xf0}, {.addr=0xd45d, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xd45c, .value=0xf0, .type=IO_READ},
        {.addr=0xd45d, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x8d1a, .a=0x15, .x=0xf6, .y=0x3f, .sp=0x85, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x8d1a, .value=0xf0}, {.addr=0x8d1b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8d59, .a=0x15, .x=0xf6, .y=0x3f, .sp=0x85, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x8d1a, .value=0xf0}, {.addr=0x8d1b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8d1a, .value=0xf0, .type=IO_READ},
        {.addr=0x8d1b, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x4f08, .a=0x2f, .x=0xe5, .y=0x2e, .sp=0x8d, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x4f08, .value=0xf0}, {.addr=0x4f09, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x4f0a, .a=0x2f, .x=0xe5, .y=0x2e, .sp=0x8d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x4f08, .value=0xf0}, {.addr=0x4f09, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x4f08, .value=0xf0, .type=IO_READ},
        {.addr=0x4f09, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x637c, .a=0x89, .x=0x1b, .y=0xe7, .sp=0xb3, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x637c, .value=0xf0}, {.addr=0x637d, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x6316, .a=0x89, .x=0x1b, .y=0xe7, .sp=0xb3, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x637c, .value=0xf0}, {.addr=0x637d, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x637c, .value=0xf0, .type=IO_READ},
        {.addr=0x637d, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xef9f, .a=0x6c, .x=0xa2, .y=0x05, .sp=0x3e, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xef9f, .value=0xf0}, {.addr=0xefa0, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xefa1, .a=0x6c, .x=0xa2, .y=0x05, .sp=0x3e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xef9f, .value=0xf0}, {.addr=0xefa0, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xef9f, .value=0xf0, .type=IO_READ},
        {.addr=0xefa0, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xf025, .a=0x10, .x=0x63, .y=0x9a, .sp=0xcf, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xf025, .value=0xf0}, {.addr=0xf026, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xf065, .a=0x10, .x=0x63, .y=0x9a, .sp=0xcf, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xf025, .value=0xf0}, {.addr=0xf026, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xf025, .value=0xf0, .type=IO_READ},
        {.addr=0xf026, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x605b, .a=0xe5, .x=0x7c, .y=0xa5, .sp=0x50, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x605b, .value=0xf0}, {.addr=0x605c, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x603a, .a=0xe5, .x=0x7c, .y=0xa5, .sp=0x50, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x605b, .value=0xf0}, {.addr=0x605c, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x605b, .value=0xf0, .type=IO_READ},
        {.addr=0x605c, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xf0a6, .a=0xd3, .x=0x59, .y=0x1b, .sp=0xe1, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xf0a6, .value=0xf0}, {.addr=0xf0a7, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xf0a8, .a=0xd3, .x=0x59, .y=0x1b, .sp=0xe1, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xf0a6, .value=0xf0}, {.addr=0xf0a7, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xf0a6, .value=0xf0, .type=IO_READ},
        {.addr=0xf0a7, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x5fdf, .a=0x4a, .x=0xa1, .y=0x63, .sp=0x7d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x5fdf, .value=0xf0}, {.addr=0x5fe0, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x5fe1, .a=0x4a, .x=0xa1, .y=0x63, .sp=0x7d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5fdf, .value=0xf0}, {.addr=0x5fe0, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x5fdf, .value=0xf0, .type=IO_READ},
        {.addr=0x5fe0, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x2395, .a=0xa6, .x=0x80, .y=0x00, .sp=0x14, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x2395, .value=0xf0}, {.addr=0x2396, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x2397, .a=0xa6, .x=0x80, .y=0x00, .sp=0x14, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2395, .value=0xf0}, {.addr=0x2396, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x2395, .value=0xf0, .type=IO_READ},
        {.addr=0x2396, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x7e6b, .a=0xa3, .x=0xd9, .y=0x79, .sp=0xba, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x7e6b, .value=0xf0}, {.addr=0x7e6c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7df3, .a=0xa3, .x=0xd9, .y=0x79, .sp=0xba, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x7e6b, .value=0xf0}, {.addr=0x7e6c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7e6b, .value=0xf0, .type=IO_READ},
        {.addr=0x7e6c, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xc99f, .a=0x82, .x=0x9a, .y=0xad, .sp=0x02, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xc99f, .value=0xf0}, {.addr=0xc9a0, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xc970, .a=0x82, .x=0x9a, .y=0xad, .sp=0x02, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xc99f, .value=0xf0}, {.addr=0xc9a0, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xc99f, .value=0xf0, .type=IO_READ},
        {.addr=0xc9a0, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xed5f, .a=0x60, .x=0x2b, .y=0xf3, .sp=0x57, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xed5f, .value=0xf0}, {.addr=0xed60, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xed59, .a=0x60, .x=0x2b, .y=0xf3, .sp=0x57, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xed5f, .value=0xf0}, {.addr=0xed60, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xed5f, .value=0xf0, .type=IO_READ},
        {.addr=0xed60, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xa723, .a=0xed, .x=0x53, .y=0x79, .sp=0xd5, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xa723, .value=0xf0}, {.addr=0xa724, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xa725, .a=0xed, .x=0x53, .y=0x79, .sp=0xd5, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa723, .value=0xf0}, {.addr=0xa724, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xa723, .value=0xf0, .type=IO_READ},
        {.addr=0xa724, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x9da9, .a=0x6f, .x=0x77, .y=0x71, .sp=0x65, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x9da9, .value=0xf0}, {.addr=0x9daa, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x9da3, .a=0x6f, .x=0x77, .y=0x71, .sp=0x65, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x9da9, .value=0xf0}, {.addr=0x9daa, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x9da9, .value=0xf0, .type=IO_READ},
        {.addr=0x9daa, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x0f22, .a=0xe5, .x=0x60, .y=0xca, .sp=0x50, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0f22, .value=0xf0}, {.addr=0x0f23, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x0f24, .a=0xe5, .x=0x60, .y=0xca, .sp=0x50, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0f22, .value=0xf0}, {.addr=0x0f23, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x0f22, .value=0xf0, .type=IO_READ},
        {.addr=0x0f23, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x02c8, .a=0x4b, .x=0x78, .y=0x58, .sp=0xbd, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x02c8, .value=0xf0}, {.addr=0x02c9, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x02ca, .a=0x4b, .x=0x78, .y=0x58, .sp=0xbd, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x02c8, .value=0xf0}, {.addr=0x02c9, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x02c8, .value=0xf0, .type=IO_READ},
        {.addr=0x02c9, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x2d57, .a=0x76, .x=0x94, .y=0x7a, .sp=0xe9, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x2d57, .value=0xf0}, {.addr=0x2d58, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x2dbe, .a=0x76, .x=0x94, .y=0x7a, .sp=0xe9, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x2d57, .value=0xf0}, {.addr=0x2d58, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x2d57, .value=0xf0, .type=IO_READ},
        {.addr=0x2d58, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xbba2, .a=0x9b, .x=0x37, .y=0x54, .sp=0x35, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xbba2, .value=0xf0}, {.addr=0xbba3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbbc0, .a=0x9b, .x=0x37, .y=0x54, .sp=0x35, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xbba2, .value=0xf0}, {.addr=0xbba3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbba2, .value=0xf0, .type=IO_READ},
        {.addr=0xbba3, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x6b1c, .a=0x36, .x=0x5f, .y=0x26, .sp=0x6d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x6b1c, .value=0xf0}, {.addr=0x6b1d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6b5a, .a=0x36, .x=0x5f, .y=0x26, .sp=0x6d, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x6b1c, .value=0xf0}, {.addr=0x6b1d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6b1c, .value=0xf0, .type=IO_READ},
        {.addr=0x6b1d, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xafaa, .a=0x9b, .x=0x1d, .y=0x11, .sp=0x88, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xafaa, .value=0xf0}, {.addr=0xafab, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xafef, .a=0x9b, .x=0x1d, .y=0x11, .sp=0x88, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xafaa, .value=0xf0}, {.addr=0xafab, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xafaa, .value=0xf0, .type=IO_READ},
        {.addr=0xafab, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xe999, .a=0x9e, .x=0x72, .y=0xcd, .sp=0x9a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xe999, .value=0xf0}, {.addr=0xe99a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xe99b, .a=0x9e, .x=0x72, .y=0xcd, .sp=0x9a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe999, .value=0xf0}, {.addr=0xe99a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xe999, .value=0xf0, .type=IO_READ},
        {.addr=0xe99a, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x3250, .a=0x0e, .x=0x30, .y=0x9b, .sp=0xc7, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x3250, .value=0xf0}, {.addr=0x3251, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x3221, .a=0x0e, .x=0x30, .y=0x9b, .sp=0xc7, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x3250, .value=0xf0}, {.addr=0x3251, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x3250, .value=0xf0, .type=IO_READ},
        {.addr=0x3251, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xc4a6, .a=0xd0, .x=0x7a, .y=0x07, .sp=0xa2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xc4a6, .value=0xf0}, {.addr=0xc4a7, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xc4b0, .a=0xd0, .x=0x7a, .y=0x07, .sp=0xa2, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xc4a6, .value=0xf0}, {.addr=0xc4a7, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xc4a6, .value=0xf0, .type=IO_READ},
        {.addr=0xc4a7, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xd8ad, .a=0x27, .x=0xa4, .y=0x8c, .sp=0x3b, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd8ad, .value=0xf0}, {.addr=0xd8ae, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xd910, .a=0x27, .x=0xa4, .y=0x8c, .sp=0x3b, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xd8ad, .value=0xf0}, {.addr=0xd8ae, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xd8ad, .value=0xf0, .type=IO_READ},
        {.addr=0xd8ae, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x3d65, .a=0x06, .x=0x95, .y=0x68, .sp=0xd8, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x3d65, .value=0xf0}, {.addr=0x3d66, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x3d67, .a=0x06, .x=0x95, .y=0x68, .sp=0xd8, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3d65, .value=0xf0}, {.addr=0x3d66, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x3d65, .value=0xf0, .type=IO_READ},
        {.addr=0x3d66, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xda7e, .a=0xd2, .x=0x26, .y=0x81, .sp=0xc9, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xda7e, .value=0xf0}, {.addr=0xda7f, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xda8d, .a=0xd2, .x=0x26, .y=0x81, .sp=0xc9, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xda7e, .value=0xf0}, {.addr=0xda7f, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xda7e, .value=0xf0, .type=IO_READ},
        {.addr=0xda7f, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x7259, .a=0x7b, .x=0xa9, .y=0xbc, .sp=0xa7, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7259, .value=0xf0}, {.addr=0x725a, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x725b, .a=0x7b, .x=0xa9, .y=0xbc, .sp=0xa7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x7259, .value=0xf0}, {.addr=0x725a, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x7259, .value=0xf0, .type=IO_READ},
        {.addr=0x725a, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xdfdf, .a=0xdb, .x=0x78, .y=0x5e, .sp=0xb8, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xdfdf, .value=0xf0}, {.addr=0xdfe0, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xe04a, .a=0xdb, .x=0x78, .y=0x5e, .sp=0xb8, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xdfdf, .value=0xf0}, {.addr=0xdfe0, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xdfdf, .value=0xf0, .type=IO_READ},
        {.addr=0xdfe0, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x1feb, .a=0x67, .x=0x57, .y=0x87, .sp=0xba, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x1feb, .value=0xf0}, {.addr=0x1fec, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x1fed, .a=0x67, .x=0x57, .y=0x87, .sp=0xba, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x1feb, .value=0xf0}, {.addr=0x1fec, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x1feb, .value=0xf0, .type=IO_READ},
        {.addr=0x1fec, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xa762, .a=0xf1, .x=0x85, .y=0x40, .sp=0x6c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xa762, .value=0xf0}, {.addr=0xa763, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xa764, .a=0xf1, .x=0x85, .y=0x40, .sp=0x6c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa762, .value=0xf0}, {.addr=0xa763, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xa762, .value=0xf0, .type=IO_READ},
        {.addr=0xa763, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x43ca, .a=0x0e, .x=0x33, .y=0xc7, .sp=0x06, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x43ca, .value=0xf0}, {.addr=0x43cb, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x43c8, .a=0x0e, .x=0x33, .y=0xc7, .sp=0x06, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x43ca, .value=0xf0}, {.addr=0x43cb, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x43ca, .value=0xf0, .type=IO_READ},
        {.addr=0x43cb, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x6115, .a=0x55, .x=0x46, .y=0x0b, .sp=0x11, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x6115, .value=0xf0}, {.addr=0x6116, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x6117, .a=0x55, .x=0x46, .y=0x0b, .sp=0x11, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x6115, .value=0xf0}, {.addr=0x6116, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x6115, .value=0xf0, .type=IO_READ},
        {.addr=0x6116, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x5c3d, .a=0xe5, .x=0x56, .y=0x96, .sp=0xe8, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x5c3d, .value=0xf0}, {.addr=0x5c3e, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x5bf6, .a=0xe5, .x=0x56, .y=0x96, .sp=0xe8, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x5c3d, .value=0xf0}, {.addr=0x5c3e, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x5c3d, .value=0xf0, .type=IO_READ},
        {.addr=0x5c3e, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x282a, .a=0x59, .x=0xf8, .y=0xd1, .sp=0x1d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x282a, .value=0xf0}, {.addr=0x282b, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x282c, .a=0x59, .x=0xf8, .y=0xd1, .sp=0x1d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x282a, .value=0xf0}, {.addr=0x282b, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x282a, .value=0xf0, .type=IO_READ},
        {.addr=0x282b, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x2d61, .a=0x84, .x=0xef, .y=0xa5, .sp=0xca, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x2d61, .value=0xf0}, {.addr=0x2d62, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x2d63, .a=0x84, .x=0xef, .y=0xa5, .sp=0xca, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x2d61, .value=0xf0}, {.addr=0x2d62, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x2d61, .value=0xf0, .type=IO_READ},
        {.addr=0x2d62, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xea1f, .a=0xce, .x=0xde, .y=0xb7, .sp=0x72, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xea1f, .value=0xf0}, {.addr=0xea20, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xea1a, .a=0xce, .x=0xde, .y=0xb7, .sp=0x72, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xea1f, .value=0xf0}, {.addr=0xea20, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xea1f, .value=0xf0, .type=IO_READ},
        {.addr=0xea20, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x62f4, .a=0xfc, .x=0x8f, .y=0x41, .sp=0x51, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x62f4, .value=0xf0}, {.addr=0x62f5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x62f6, .a=0xfc, .x=0x8f, .y=0x41, .sp=0x51, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x62f4, .value=0xf0}, {.addr=0x62f5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x62f4, .value=0xf0, .type=IO_READ},
        {.addr=0x62f5, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x08bc, .a=0xdc, .x=0xe8, .y=0xa7, .sp=0x9e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x08bc, .value=0xf0}, {.addr=0x08bd, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x0880, .a=0xdc, .x=0xe8, .y=0xa7, .sp=0x9e, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x08bc, .value=0xf0}, {.addr=0x08bd, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x08bc, .value=0xf0, .type=IO_READ},
        {.addr=0x08bd, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x2e9b, .a=0x5d, .x=0x6e, .y=0x06, .sp=0x70, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x2e9b, .value=0xf0}, {.addr=0x2e9c, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x2e9d, .a=0x5d, .x=0x6e, .y=0x06, .sp=0x70, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2e9b, .value=0xf0}, {.addr=0x2e9c, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x2e9b, .value=0xf0, .type=IO_READ},
        {.addr=0x2e9c, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xa5cf, .a=0x00, .x=0xae, .y=0xb7, .sp=0xa4, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xa5cf, .value=0xf0}, {.addr=0xa5d0, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xa5d1, .a=0x00, .x=0xae, .y=0xb7, .sp=0xa4, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa5cf, .value=0xf0}, {.addr=0xa5d0, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xa5cf, .value=0xf0, .type=IO_READ},
        {.addr=0xa5d0, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xf462, .a=0xb4, .x=0x03, .y=0x4b, .sp=0x72, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xf462, .value=0xf0}, {.addr=0xf463, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xf419, .a=0xb4, .x=0x03, .y=0x4b, .sp=0x72, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xf462, .value=0xf0}, {.addr=0xf463, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xf462, .value=0xf0, .type=IO_READ},
        {.addr=0xf463, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x5f98, .a=0x0b, .x=0x4e, .y=0x68, .sp=0xa0, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x5f98, .value=0xf0}, {.addr=0x5f99, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x5f9a, .a=0x0b, .x=0x4e, .y=0x68, .sp=0xa0, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5f98, .value=0xf0}, {.addr=0x5f99, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x5f98, .value=0xf0, .type=IO_READ},
        {.addr=0x5f99, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x265a, .a=0xf8, .x=0x9c, .y=0x98, .sp=0xc5, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x265a, .value=0xf0}, {.addr=0x265b, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x265c, .a=0xf8, .x=0x9c, .y=0x98, .sp=0xc5, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x265a, .value=0xf0}, {.addr=0x265b, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x265a, .value=0xf0, .type=IO_READ},
        {.addr=0x265b, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x20bc, .a=0xfd, .x=0xdf, .y=0xf0, .sp=0xc5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x20bc, .value=0xf0}, {.addr=0x20bd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x20be, .a=0xfd, .x=0xdf, .y=0xf0, .sp=0xc5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x20bc, .value=0xf0}, {.addr=0x20bd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x20bc, .value=0xf0, .type=IO_READ},
        {.addr=0x20bd, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x23eb, .a=0x65, .x=0xb9, .y=0x36, .sp=0xcc, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x23eb, .value=0xf0}, {.addr=0x23ec, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x23ed, .a=0x65, .x=0xb9, .y=0x36, .sp=0xcc, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x23eb, .value=0xf0}, {.addr=0x23ec, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x23eb, .value=0xf0, .type=IO_READ},
        {.addr=0x23ec, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x36b7, .a=0x99, .x=0xc3, .y=0xbb, .sp=0x6d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x36b7, .value=0xf0}, {.addr=0x36b8, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x370d, .a=0x99, .x=0xc3, .y=0xbb, .sp=0x6d, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x36b7, .value=0xf0}, {.addr=0x36b8, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x36b7, .value=0xf0, .type=IO_READ},
        {.addr=0x36b8, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xd8c0, .a=0xc2, .x=0xfd, .y=0x6f, .sp=0xbf, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xd8c0, .value=0xf0}, {.addr=0xd8c1, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xd872, .a=0xc2, .x=0xfd, .y=0x6f, .sp=0xbf, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xd8c0, .value=0xf0}, {.addr=0xd8c1, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xd8c0, .value=0xf0, .type=IO_READ},
        {.addr=0xd8c1, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x8cc6, .a=0xf5, .x=0xb7, .y=0xcb, .sp=0xf5, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x8cc6, .value=0xf0}, {.addr=0x8cc7, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x8d1c, .a=0xf5, .x=0xb7, .y=0xcb, .sp=0xf5, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x8cc6, .value=0xf0}, {.addr=0x8cc7, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x8cc6, .value=0xf0, .type=IO_READ},
        {.addr=0x8cc7, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xc957, .a=0xc1, .x=0x67, .y=0x57, .sp=0x87, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xc957, .value=0xf0}, {.addr=0xc958, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xc959, .a=0xc1, .x=0x67, .y=0x57, .sp=0x87, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xc957, .value=0xf0}, {.addr=0xc958, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xc957, .value=0xf0, .type=IO_READ},
        {.addr=0xc958, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x8a55, .a=0xd4, .x=0x3a, .y=0x00, .sp=0x36, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x8a55, .value=0xf0}, {.addr=0x8a56, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x8a57, .a=0xd4, .x=0x3a, .y=0x00, .sp=0x36, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8a55, .value=0xf0}, {.addr=0x8a56, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x8a55, .value=0xf0, .type=IO_READ},
        {.addr=0x8a56, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x3260, .a=0x04, .x=0x67, .y=0x0d, .sp=0x51, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x3260, .value=0xf0}, {.addr=0x3261, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x3262, .a=0x04, .x=0x67, .y=0x0d, .sp=0x51, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x3260, .value=0xf0}, {.addr=0x3261, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x3260, .value=0xf0, .type=IO_READ},
        {.addr=0x3261, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x9728, .a=0xf0, .x=0x06, .y=0x85, .sp=0x66, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x9728, .value=0xf0}, {.addr=0x9729, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x96e8, .a=0xf0, .x=0x06, .y=0x85, .sp=0x66, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x9728, .value=0xf0}, {.addr=0x9729, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9728, .value=0xf0, .type=IO_READ},
        {.addr=0x9729, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x2441, .a=0xc3, .x=0xb7, .y=0xc1, .sp=0x8c, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x2441, .value=0xf0}, {.addr=0x2442, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x241d, .a=0xc3, .x=0xb7, .y=0xc1, .sp=0x8c, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x2441, .value=0xf0}, {.addr=0x2442, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x2441, .value=0xf0, .type=IO_READ},
        {.addr=0x2442, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x93f0, .a=0xb2, .x=0x73, .y=0x10, .sp=0x79, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x93f0, .value=0xf0}, {.addr=0x93f1, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x93f2, .a=0xb2, .x=0x73, .y=0x10, .sp=0x79, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x93f0, .value=0xf0}, {.addr=0x93f1, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x93f0, .value=0xf0, .type=IO_READ},
        {.addr=0x93f1, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xb276, .a=0x87, .x=0xbd, .y=0x7d, .sp=0x95, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xb276, .value=0xf0}, {.addr=0xb277, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb278, .a=0x87, .x=0xbd, .y=0x7d, .sp=0x95, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xb276, .value=0xf0}, {.addr=0xb277, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb276, .value=0xf0, .type=IO_READ},
        {.addr=0xb277, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x6967, .a=0x01, .x=0x31, .y=0x41, .sp=0x76, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x6967, .value=0xf0}, {.addr=0x6968, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x695a, .a=0x01, .x=0x31, .y=0x41, .sp=0x76, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x6967, .value=0xf0}, {.addr=0x6968, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x6967, .value=0xf0, .type=IO_READ},
        {.addr=0x6968, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xdeeb, .a=0x39, .x=0x33, .y=0x29, .sp=0xca, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xdeeb, .value=0xf0}, {.addr=0xdeec, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xdeed, .a=0x39, .x=0x33, .y=0x29, .sp=0xca, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xdeeb, .value=0xf0}, {.addr=0xdeec, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xdeeb, .value=0xf0, .type=IO_READ},
        {.addr=0xdeec, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x2d46, .a=0x74, .x=0x75, .y=0xdf, .sp=0x8a, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x2d46, .value=0xf0}, {.addr=0x2d47, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x2d57, .a=0x74, .x=0x75, .y=0xdf, .sp=0x8a, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x2d46, .value=0xf0}, {.addr=0x2d47, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x2d46, .value=0xf0, .type=IO_READ},
        {.addr=0x2d47, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x154c, .a=0x89, .x=0x73, .y=0x45, .sp=0x1b, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x154c, .value=0xf0}, {.addr=0x154d, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x1543, .a=0x89, .x=0x73, .y=0x45, .sp=0x1b, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x154c, .value=0xf0}, {.addr=0x154d, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x154c, .value=0xf0, .type=IO_READ},
        {.addr=0x154d, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xc141, .a=0xda, .x=0x04, .y=0x8c, .sp=0x19, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xc141, .value=0xf0}, {.addr=0xc142, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc0c3, .a=0xda, .x=0x04, .y=0x8c, .sp=0x19, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xc141, .value=0xf0}, {.addr=0xc142, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc141, .value=0xf0, .type=IO_READ},
        {.addr=0xc142, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x6204, .a=0xd8, .x=0x99, .y=0xb4, .sp=0x1b, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x6204, .value=0xf0}, {.addr=0x6205, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x6204, .a=0xd8, .x=0x99, .y=0xb4, .sp=0x1b, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x6204, .value=0xf0}, {.addr=0x6205, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x6204, .value=0xf0, .type=IO_READ},
        {.addr=0x6205, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xc251, .a=0x47, .x=0x6e, .y=0x32, .sp=0x14, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc251, .value=0xf0}, {.addr=0xc252, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xc253, .a=0x47, .x=0x6e, .y=0x32, .sp=0x14, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc251, .value=0xf0}, {.addr=0xc252, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xc251, .value=0xf0, .type=IO_READ},
        {.addr=0xc252, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x1ea6, .a=0xaa, .x=0xfc, .y=0x79, .sp=0x67, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x1ea6, .value=0xf0}, {.addr=0x1ea7, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x1e50, .a=0xaa, .x=0xfc, .y=0x79, .sp=0x67, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x1ea6, .value=0xf0}, {.addr=0x1ea7, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x1ea6, .value=0xf0, .type=IO_READ},
        {.addr=0x1ea7, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xb429, .a=0x8f, .x=0xe3, .y=0xba, .sp=0x29, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xb429, .value=0xf0}, {.addr=0xb42a, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xb42b, .a=0x8f, .x=0xe3, .y=0xba, .sp=0x29, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb429, .value=0xf0}, {.addr=0xb42a, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xb429, .value=0xf0, .type=IO_READ},
        {.addr=0xb42a, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xb504, .a=0x66, .x=0x4b, .y=0x30, .sp=0x7d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xb504, .value=0xf0}, {.addr=0xb505, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb506, .a=0x66, .x=0x4b, .y=0x30, .sp=0x7d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xb504, .value=0xf0}, {.addr=0xb505, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb504, .value=0xf0, .type=IO_READ},
        {.addr=0xb505, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xde20, .a=0x5c, .x=0x2a, .y=0x67, .sp=0x98, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xde20, .value=0xf0}, {.addr=0xde21, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xde22, .a=0x5c, .x=0x2a, .y=0x67, .sp=0x98, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xde20, .value=0xf0}, {.addr=0xde21, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xde20, .value=0xf0, .type=IO_READ},
        {.addr=0xde21, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x6685, .a=0xc8, .x=0x3c, .y=0xff, .sp=0x49, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6685, .value=0xf0}, {.addr=0x6686, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x6687, .a=0xc8, .x=0x3c, .y=0xff, .sp=0x49, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6685, .value=0xf0}, {.addr=0x6686, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x6685, .value=0xf0, .type=IO_READ},
        {.addr=0x6686, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xd851, .a=0xd0, .x=0xe7, .y=0x65, .sp=0x45, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xd851, .value=0xf0}, {.addr=0xd852, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xd851, .a=0xd0, .x=0xe7, .y=0x65, .sp=0x45, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xd851, .value=0xf0}, {.addr=0xd852, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xd851, .value=0xf0, .type=IO_READ},
        {.addr=0xd852, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x4e8a, .a=0xe6, .x=0x15, .y=0x50, .sp=0x18, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x4e8a, .value=0xf0}, {.addr=0x4e8b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4e8c, .a=0xe6, .x=0x15, .y=0x50, .sp=0x18, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4e8a, .value=0xf0}, {.addr=0x4e8b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4e8a, .value=0xf0, .type=IO_READ},
        {.addr=0x4e8b, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xc093, .a=0x3e, .x=0x58, .y=0x7f, .sp=0xd6, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xc093, .value=0xf0}, {.addr=0xc094, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xc095, .a=0x3e, .x=0x58, .y=0x7f, .sp=0xd6, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xc093, .value=0xf0}, {.addr=0xc094, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xc093, .value=0xf0, .type=IO_READ},
        {.addr=0xc094, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x0348, .a=0x76, .x=0x5f, .y=0x6e, .sp=0x77, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0348, .value=0xf0}, {.addr=0x0349, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x034a, .a=0x76, .x=0x5f, .y=0x6e, .sp=0x77, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0348, .value=0xf0}, {.addr=0x0349, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x0348, .value=0xf0, .type=IO_READ},
        {.addr=0x0349, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_F0, _F0_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x67e6, .a=0x87, .x=0xe6, .y=0xae, .sp=0x54, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x67e6, .value=0xf0}, {.addr=0x67e7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x67e8, .a=0x87, .x=0xe6, .y=0xae, .sp=0x54, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x67e6, .value=0xf0}, {.addr=0x67e7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x67e6, .value=0xf0, .type=IO_READ},
        {.addr=0x67e7, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("F0 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
