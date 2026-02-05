#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_C6, _C6_0000) {
    const struct CPU_State initial_cpu = {.pc=0x40a3, .a=0x3d, .x=0x67, .y=0xfb, .sp=0x32, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xc4}, {.addr=0x40a3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x40a4, .a=0x3d, .x=0x67, .y=0xfb, .sp=0x32, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x3d}, {.addr=0x40a3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x40a3, .value=0xc6, .type=IO_READ},
        {.addr=0x40a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xc4, .type=IO_READ},
        {.addr=0x0167, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0001) {
    const struct CPU_State initial_cpu = {.pc=0xf219, .a=0xab, .x=0xba, .y=0x51, .sp=0x26, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xe6}, {.addr=0xf219, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf21a, .a=0xab, .x=0xba, .y=0x51, .sp=0x26, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xab}, {.addr=0xf219, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf219, .value=0xc6, .type=IO_READ},
        {.addr=0xf21a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xe6, .type=IO_READ},
        {.addr=0x01ba, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0002) {
    const struct CPU_State initial_cpu = {.pc=0xd592, .a=0x5f, .x=0x88, .y=0x3b, .sp=0x3d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0xba}, {.addr=0xd592, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd593, .a=0x5f, .x=0x88, .y=0x3b, .sp=0x3d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x5f}, {.addr=0xd592, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd592, .value=0xc6, .type=IO_READ},
        {.addr=0xd593, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0xba, .type=IO_READ},
        {.addr=0x0188, .value=0x5f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0003) {
    const struct CPU_State initial_cpu = {.pc=0x6202, .a=0x70, .x=0x77, .y=0xb0, .sp=0x3f, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x22}, {.addr=0x6202, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6203, .a=0x70, .x=0x77, .y=0xb0, .sp=0x3f, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x70}, {.addr=0x6202, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6202, .value=0xc6, .type=IO_READ},
        {.addr=0x6203, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x22, .type=IO_READ},
        {.addr=0x0077, .value=0x70, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0004) {
    const struct CPU_State initial_cpu = {.pc=0x7a1b, .a=0x21, .x=0xe1, .y=0xcf, .sp=0x41, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x3e}, {.addr=0x7a1b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7a1c, .a=0x21, .x=0xe1, .y=0xcf, .sp=0x41, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x21}, {.addr=0x7a1b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7a1b, .value=0xc6, .type=IO_READ},
        {.addr=0x7a1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x3e, .type=IO_READ},
        {.addr=0x01e1, .value=0x21, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0005) {
    const struct CPU_State initial_cpu = {.pc=0x861f, .a=0x68, .x=0x09, .y=0x90, .sp=0xe2, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0xe7}, {.addr=0x861f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8620, .a=0x68, .x=0x09, .y=0x90, .sp=0xe2, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x68}, {.addr=0x861f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x861f, .value=0xc6, .type=IO_READ},
        {.addr=0x8620, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0xe7, .type=IO_READ},
        {.addr=0x0009, .value=0x68, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0006) {
    const struct CPU_State initial_cpu = {.pc=0xcb5e, .a=0x7c, .x=0x8b, .y=0x9d, .sp=0x13, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x8f}, {.addr=0xcb5e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcb5f, .a=0x7c, .x=0x8b, .y=0x9d, .sp=0x13, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x7c}, {.addr=0xcb5e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcb5e, .value=0xc6, .type=IO_READ},
        {.addr=0xcb5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x8f, .type=IO_READ},
        {.addr=0x018b, .value=0x7c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0007) {
    const struct CPU_State initial_cpu = {.pc=0xe7a0, .a=0x1d, .x=0x15, .y=0x4d, .sp=0x68, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0xbd}, {.addr=0xe7a0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe7a1, .a=0x1d, .x=0x15, .y=0x4d, .sp=0x68, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0x1d}, {.addr=0xe7a0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe7a0, .value=0xc6, .type=IO_READ},
        {.addr=0xe7a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0xbd, .type=IO_READ},
        {.addr=0x0015, .value=0x1d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0008) {
    const struct CPU_State initial_cpu = {.pc=0x589b, .a=0x57, .x=0xea, .y=0x39, .sp=0xdf, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xb2}, {.addr=0x589b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x589c, .a=0x57, .x=0xea, .y=0x39, .sp=0xdf, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x57}, {.addr=0x589b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x589b, .value=0xc6, .type=IO_READ},
        {.addr=0x589c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xb2, .type=IO_READ},
        {.addr=0x01ea, .value=0x57, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0009) {
    const struct CPU_State initial_cpu = {.pc=0x531e, .a=0x11, .x=0xb4, .y=0xe0, .sp=0xd5, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x1f}, {.addr=0x531e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x531f, .a=0x11, .x=0xb4, .y=0xe0, .sp=0xd5, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x11}, {.addr=0x531e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x531e, .value=0xc6, .type=IO_READ},
        {.addr=0x531f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x1f, .type=IO_READ},
        {.addr=0x01b4, .value=0x11, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_000B) {
    const struct CPU_State initial_cpu = {.pc=0x3f3f, .a=0x6c, .x=0xaa, .y=0x35, .sp=0x78, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0xa6}, {.addr=0x3f3f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3f40, .a=0x6c, .x=0xaa, .y=0x35, .sp=0x78, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0x6c}, {.addr=0x3f3f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3f3f, .value=0xc6, .type=IO_READ},
        {.addr=0x3f40, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0xa6, .type=IO_READ},
        {.addr=0x00aa, .value=0x6c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_000C) {
    const struct CPU_State initial_cpu = {.pc=0x362b, .a=0x1d, .x=0x8a, .y=0xf1, .sp=0x28, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xf0}, {.addr=0x362b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x362c, .a=0x1d, .x=0x8a, .y=0xf1, .sp=0x28, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x1d}, {.addr=0x362b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x362b, .value=0xc6, .type=IO_READ},
        {.addr=0x362c, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xf0, .type=IO_READ},
        {.addr=0x018a, .value=0x1d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_000D) {
    const struct CPU_State initial_cpu = {.pc=0xb45e, .a=0x1c, .x=0xd1, .y=0x4e, .sp=0x0f, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x51}, {.addr=0xb45e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb45f, .a=0x1c, .x=0xd1, .y=0x4e, .sp=0x0f, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x1c}, {.addr=0xb45e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb45e, .value=0xc6, .type=IO_READ},
        {.addr=0xb45f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x51, .type=IO_READ},
        {.addr=0x01d1, .value=0x1c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_000E) {
    const struct CPU_State initial_cpu = {.pc=0x6f7a, .a=0x68, .x=0xec, .y=0x11, .sp=0x16, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x77}, {.addr=0x6f7a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6f7b, .a=0x68, .x=0xec, .y=0x11, .sp=0x16, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x68}, {.addr=0x6f7a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6f7a, .value=0xc6, .type=IO_READ},
        {.addr=0x6f7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x77, .type=IO_READ},
        {.addr=0x01ec, .value=0x68, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_000F) {
    const struct CPU_State initial_cpu = {.pc=0x134a, .a=0x09, .x=0x49, .y=0x99, .sp=0xbf, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x52}, {.addr=0x134a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x134b, .a=0x09, .x=0x49, .y=0x99, .sp=0xbf, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x09}, {.addr=0x134a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x134a, .value=0xc6, .type=IO_READ},
        {.addr=0x134b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x52, .type=IO_READ},
        {.addr=0x0149, .value=0x09, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0010) {
    const struct CPU_State initial_cpu = {.pc=0x9179, .a=0xa1, .x=0xa9, .y=0xb3, .sp=0x88, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x60}, {.addr=0x9179, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x917a, .a=0xa1, .x=0xa9, .y=0xb3, .sp=0x88, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0xa1}, {.addr=0x9179, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9179, .value=0xc6, .type=IO_READ},
        {.addr=0x917a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0x60, .type=IO_READ},
        {.addr=0x00a9, .value=0xa1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0011) {
    const struct CPU_State initial_cpu = {.pc=0x54fc, .a=0xb5, .x=0xb4, .y=0xc9, .sp=0x02, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0x18}, {.addr=0x54fc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x54fd, .a=0xb5, .x=0xb4, .y=0xc9, .sp=0x02, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0xb5}, {.addr=0x54fc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x54fc, .value=0xc6, .type=IO_READ},
        {.addr=0x54fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0x18, .type=IO_READ},
        {.addr=0x00b4, .value=0xb5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0012) {
    const struct CPU_State initial_cpu = {.pc=0x3ae4, .a=0xa3, .x=0x77, .y=0x47, .sp=0x86, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x8b}, {.addr=0x3ae4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3ae5, .a=0xa3, .x=0x77, .y=0x47, .sp=0x86, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0xa3}, {.addr=0x3ae4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3ae4, .value=0xc6, .type=IO_READ},
        {.addr=0x3ae5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x8b, .type=IO_READ},
        {.addr=0x0077, .value=0xa3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0013) {
    const struct CPU_State initial_cpu = {.pc=0x318b, .a=0xf4, .x=0x9c, .y=0x36, .sp=0xdf, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x9b}, {.addr=0x318b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x318c, .a=0xf4, .x=0x9c, .y=0x36, .sp=0xdf, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0xf4}, {.addr=0x318b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x318b, .value=0xc6, .type=IO_READ},
        {.addr=0x318c, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0x9b, .type=IO_READ},
        {.addr=0x009c, .value=0xf4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0014) {
    const struct CPU_State initial_cpu = {.pc=0xe8d3, .a=0xf6, .x=0xb9, .y=0xf8, .sp=0x63, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0x11}, {.addr=0xe8d3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe8d4, .a=0xf6, .x=0xb9, .y=0xf8, .sp=0x63, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0xf6}, {.addr=0xe8d3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe8d3, .value=0xc6, .type=IO_READ},
        {.addr=0xe8d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0x11, .type=IO_READ},
        {.addr=0x00b9, .value=0xf6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0015) {
    const struct CPU_State initial_cpu = {.pc=0xa1c5, .a=0x23, .x=0x4b, .y=0x70, .sp=0xaf, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0xba}, {.addr=0xa1c5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa1c6, .a=0x23, .x=0x4b, .y=0x70, .sp=0xaf, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x23}, {.addr=0xa1c5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa1c5, .value=0xc6, .type=IO_READ},
        {.addr=0xa1c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0xba, .type=IO_READ},
        {.addr=0x004b, .value=0x23, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0016) {
    const struct CPU_State initial_cpu = {.pc=0xc852, .a=0x63, .x=0x7f, .y=0x76, .sp=0x4e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0xf9}, {.addr=0xc852, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc853, .a=0x63, .x=0x7f, .y=0x76, .sp=0x4e, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x63}, {.addr=0xc852, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc852, .value=0xc6, .type=IO_READ},
        {.addr=0xc853, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0xf9, .type=IO_READ},
        {.addr=0x017f, .value=0x63, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0017) {
    const struct CPU_State initial_cpu = {.pc=0x79ac, .a=0x9f, .x=0x6b, .y=0x85, .sp=0x0e, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0xe1}, {.addr=0x79ac, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x79ad, .a=0x9f, .x=0x6b, .y=0x85, .sp=0x0e, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x9f}, {.addr=0x79ac, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x79ac, .value=0xc6, .type=IO_READ},
        {.addr=0x79ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xe1, .type=IO_READ},
        {.addr=0x016b, .value=0x9f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0018) {
    const struct CPU_State initial_cpu = {.pc=0x2520, .a=0x2b, .x=0x0b, .y=0x45, .sp=0xe9, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x70}, {.addr=0x2520, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2521, .a=0x2b, .x=0x0b, .y=0x45, .sp=0xe9, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x2b}, {.addr=0x2520, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2520, .value=0xc6, .type=IO_READ},
        {.addr=0x2521, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x70, .type=IO_READ},
        {.addr=0x000b, .value=0x2b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0019) {
    const struct CPU_State initial_cpu = {.pc=0x5140, .a=0xd2, .x=0x3a, .y=0x44, .sp=0x16, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x54}, {.addr=0x5140, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5141, .a=0xd2, .x=0x3a, .y=0x44, .sp=0x16, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xd2}, {.addr=0x5140, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5140, .value=0xc6, .type=IO_READ},
        {.addr=0x5141, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x54, .type=IO_READ},
        {.addr=0x003a, .value=0xd2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_001A) {
    const struct CPU_State initial_cpu = {.pc=0xf71c, .a=0x8f, .x=0xe0, .y=0x91, .sp=0xfa, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x31}, {.addr=0xf71c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf71d, .a=0x8f, .x=0xe0, .y=0x91, .sp=0xfa, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x8f}, {.addr=0xf71c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf71c, .value=0xc6, .type=IO_READ},
        {.addr=0xf71d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x31, .type=IO_READ},
        {.addr=0x01e0, .value=0x8f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_001B) {
    const struct CPU_State initial_cpu = {.pc=0x39ba, .a=0x66, .x=0x3d, .y=0x30, .sp=0x82, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0xde}, {.addr=0x39ba, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x39bb, .a=0x66, .x=0x3d, .y=0x30, .sp=0x82, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x66}, {.addr=0x39ba, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x39ba, .value=0xc6, .type=IO_READ},
        {.addr=0x39bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0xde, .type=IO_READ},
        {.addr=0x003d, .value=0x66, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_001C) {
    const struct CPU_State initial_cpu = {.pc=0x2c21, .a=0x10, .x=0xed, .y=0xc2, .sp=0x0a, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x54}, {.addr=0x2c21, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2c22, .a=0x10, .x=0xed, .y=0xc2, .sp=0x0a, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x10}, {.addr=0x2c21, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2c21, .value=0xc6, .type=IO_READ},
        {.addr=0x2c22, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x54, .type=IO_READ},
        {.addr=0x00ed, .value=0x10, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_001D) {
    const struct CPU_State initial_cpu = {.pc=0x556c, .a=0x3b, .x=0xd5, .y=0xe7, .sp=0xe8, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x8b}, {.addr=0x556c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x556d, .a=0x3b, .x=0xd5, .y=0xe7, .sp=0xe8, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x3b}, {.addr=0x556c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x556c, .value=0xc6, .type=IO_READ},
        {.addr=0x556d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x8b, .type=IO_READ},
        {.addr=0x00d5, .value=0x3b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_001E) {
    const struct CPU_State initial_cpu = {.pc=0x754d, .a=0xb6, .x=0x0f, .y=0x2a, .sp=0xe5, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0xf9}, {.addr=0x754d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x754e, .a=0xb6, .x=0x0f, .y=0x2a, .sp=0xe5, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0xb6}, {.addr=0x754d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x754d, .value=0xc6, .type=IO_READ},
        {.addr=0x754e, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0xf9, .type=IO_READ},
        {.addr=0x010f, .value=0xb6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_001F) {
    const struct CPU_State initial_cpu = {.pc=0xca19, .a=0x6b, .x=0xd6, .y=0xb4, .sp=0xcf, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xc0}, {.addr=0xca19, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xca1a, .a=0x6b, .x=0xd6, .y=0xb4, .sp=0xcf, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x6b}, {.addr=0xca19, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xca19, .value=0xc6, .type=IO_READ},
        {.addr=0xca1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xc0, .type=IO_READ},
        {.addr=0x00d6, .value=0x6b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0020) {
    const struct CPU_State initial_cpu = {.pc=0xc231, .a=0xd2, .x=0x4e, .y=0x0d, .sp=0x7f, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x28}, {.addr=0xc231, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc232, .a=0xd2, .x=0x4e, .y=0x0d, .sp=0x7f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0xd2}, {.addr=0xc231, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc231, .value=0xc6, .type=IO_READ},
        {.addr=0xc232, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x28, .type=IO_READ},
        {.addr=0x004e, .value=0xd2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0021) {
    const struct CPU_State initial_cpu = {.pc=0xfb07, .a=0x69, .x=0x94, .y=0x9b, .sp=0x23, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x0a}, {.addr=0xfb07, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfb08, .a=0x69, .x=0x94, .y=0x9b, .sp=0x23, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x69}, {.addr=0xfb07, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfb07, .value=0xc6, .type=IO_READ},
        {.addr=0xfb08, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x0a, .type=IO_READ},
        {.addr=0x0094, .value=0x69, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0022) {
    const struct CPU_State initial_cpu = {.pc=0xf97d, .a=0x04, .x=0x96, .y=0xf2, .sp=0xd8, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0xfb}, {.addr=0xf97d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf97e, .a=0x04, .x=0x96, .y=0xf2, .sp=0xd8, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x04}, {.addr=0xf97d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf97d, .value=0xc6, .type=IO_READ},
        {.addr=0xf97e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xfb, .type=IO_READ},
        {.addr=0x0196, .value=0x04, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0023) {
    const struct CPU_State initial_cpu = {.pc=0xa468, .a=0x28, .x=0xa5, .y=0x4b, .sp=0x86, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xce}, {.addr=0xa468, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa469, .a=0x28, .x=0xa5, .y=0x4b, .sp=0x86, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x28}, {.addr=0xa468, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa468, .value=0xc6, .type=IO_READ},
        {.addr=0xa469, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xce, .type=IO_READ},
        {.addr=0x01a5, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0024) {
    const struct CPU_State initial_cpu = {.pc=0xfbb0, .a=0xde, .x=0xa2, .y=0x6e, .sp=0xda, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xec}, {.addr=0xfbb0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfbb1, .a=0xde, .x=0xa2, .y=0x6e, .sp=0xda, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xde}, {.addr=0xfbb0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfbb0, .value=0xc6, .type=IO_READ},
        {.addr=0xfbb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0xec, .type=IO_READ},
        {.addr=0x01a2, .value=0xde, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0025) {
    const struct CPU_State initial_cpu = {.pc=0x4e9a, .a=0xa8, .x=0xd8, .y=0x4c, .sp=0xee, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x20}, {.addr=0x4e9a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4e9b, .a=0xa8, .x=0xd8, .y=0x4c, .sp=0xee, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xa8}, {.addr=0x4e9a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4e9a, .value=0xc6, .type=IO_READ},
        {.addr=0x4e9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x20, .type=IO_READ},
        {.addr=0x01d8, .value=0xa8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0026) {
    const struct CPU_State initial_cpu = {.pc=0x1b0a, .a=0x2b, .x=0xb1, .y=0x8f, .sp=0xe3, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0xc5}, {.addr=0x1b0a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1b0b, .a=0x2b, .x=0xb1, .y=0x8f, .sp=0xe3, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x2b}, {.addr=0x1b0a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1b0a, .value=0xc6, .type=IO_READ},
        {.addr=0x1b0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xc5, .type=IO_READ},
        {.addr=0x01b1, .value=0x2b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0027) {
    const struct CPU_State initial_cpu = {.pc=0xc76e, .a=0x21, .x=0x68, .y=0x9b, .sp=0x1a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x89}, {.addr=0xc76e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc76f, .a=0x21, .x=0x68, .y=0x9b, .sp=0x1a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x21}, {.addr=0xc76e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc76e, .value=0xc6, .type=IO_READ},
        {.addr=0xc76f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x89, .type=IO_READ},
        {.addr=0x0168, .value=0x21, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0028) {
    const struct CPU_State initial_cpu = {.pc=0x15b0, .a=0x3c, .x=0xb8, .y=0xfc, .sp=0xe9, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0xc8}, {.addr=0x15b0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x15b1, .a=0x3c, .x=0xb8, .y=0xfc, .sp=0xe9, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x3c}, {.addr=0x15b0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x15b0, .value=0xc6, .type=IO_READ},
        {.addr=0x15b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xc8, .type=IO_READ},
        {.addr=0x01b8, .value=0x3c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0029) {
    const struct CPU_State initial_cpu = {.pc=0xfa20, .a=0x26, .x=0x25, .y=0xc8, .sp=0x54, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x0a}, {.addr=0xfa20, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfa21, .a=0x26, .x=0x25, .y=0xc8, .sp=0x54, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x26}, {.addr=0xfa20, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfa20, .value=0xc6, .type=IO_READ},
        {.addr=0xfa21, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x0a, .type=IO_READ},
        {.addr=0x0025, .value=0x26, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_002A) {
    const struct CPU_State initial_cpu = {.pc=0x6bec, .a=0x0b, .x=0xed, .y=0xb3, .sp=0x69, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x36}, {.addr=0x6bec, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6bed, .a=0x0b, .x=0xed, .y=0xb3, .sp=0x69, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x0b}, {.addr=0x6bec, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6bec, .value=0xc6, .type=IO_READ},
        {.addr=0x6bed, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x36, .type=IO_READ},
        {.addr=0x01ed, .value=0x0b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_002B) {
    const struct CPU_State initial_cpu = {.pc=0x4bcd, .a=0xbb, .x=0x16, .y=0x37, .sp=0x18, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0xf7}, {.addr=0x4bcd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4bce, .a=0xbb, .x=0x16, .y=0x37, .sp=0x18, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0xbb}, {.addr=0x4bcd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4bcd, .value=0xc6, .type=IO_READ},
        {.addr=0x4bce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0xf7, .type=IO_READ},
        {.addr=0x0016, .value=0xbb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_002C) {
    const struct CPU_State initial_cpu = {.pc=0x9f06, .a=0xbc, .x=0xfd, .y=0xa5, .sp=0x9d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x16}, {.addr=0x9f06, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9f07, .a=0xbc, .x=0xfd, .y=0xa5, .sp=0x9d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xbc}, {.addr=0x9f06, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9f06, .value=0xc6, .type=IO_READ},
        {.addr=0x9f07, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x16, .type=IO_READ},
        {.addr=0x01fd, .value=0xbc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_002D) {
    const struct CPU_State initial_cpu = {.pc=0x7f49, .a=0xb8, .x=0xa9, .y=0x98, .sp=0x77, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xdf}, {.addr=0x7f49, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7f4a, .a=0xb8, .x=0xa9, .y=0x98, .sp=0x77, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xb8}, {.addr=0x7f49, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7f49, .value=0xc6, .type=IO_READ},
        {.addr=0x7f4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0xdf, .type=IO_READ},
        {.addr=0x01a9, .value=0xb8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_002E) {
    const struct CPU_State initial_cpu = {.pc=0x452a, .a=0x60, .x=0x8e, .y=0xdc, .sp=0x1b, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x49}, {.addr=0x452a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x452b, .a=0x60, .x=0x8e, .y=0xdc, .sp=0x1b, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x60}, {.addr=0x452a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x452a, .value=0xc6, .type=IO_READ},
        {.addr=0x452b, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x49, .type=IO_READ},
        {.addr=0x018e, .value=0x60, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_002F) {
    const struct CPU_State initial_cpu = {.pc=0x3d48, .a=0x11, .x=0x98, .y=0xb7, .sp=0x57, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x03}, {.addr=0x3d48, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3d49, .a=0x11, .x=0x98, .y=0xb7, .sp=0x57, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x11}, {.addr=0x3d48, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3d48, .value=0xc6, .type=IO_READ},
        {.addr=0x3d49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x03, .type=IO_READ},
        {.addr=0x0098, .value=0x11, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0030) {
    const struct CPU_State initial_cpu = {.pc=0xc673, .a=0x85, .x=0x40, .y=0x94, .sp=0x45, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0x29}, {.addr=0xc673, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc674, .a=0x85, .x=0x40, .y=0x94, .sp=0x45, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0x85}, {.addr=0xc673, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc673, .value=0xc6, .type=IO_READ},
        {.addr=0xc674, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0x29, .type=IO_READ},
        {.addr=0x0040, .value=0x85, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0031) {
    const struct CPU_State initial_cpu = {.pc=0x1cd4, .a=0xb4, .x=0xcc, .y=0x0d, .sp=0x8c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x0b}, {.addr=0x1cd4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1cd5, .a=0xb4, .x=0xcc, .y=0x0d, .sp=0x8c, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xb4}, {.addr=0x1cd4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1cd4, .value=0xc6, .type=IO_READ},
        {.addr=0x1cd5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x0b, .type=IO_READ},
        {.addr=0x01cc, .value=0xb4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0032) {
    const struct CPU_State initial_cpu = {.pc=0xfa3c, .a=0x46, .x=0x0f, .y=0xc9, .sp=0xf8, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0xde}, {.addr=0xfa3c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfa3d, .a=0x46, .x=0x0f, .y=0xc9, .sp=0xf8, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x46}, {.addr=0xfa3c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfa3c, .value=0xc6, .type=IO_READ},
        {.addr=0xfa3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0xde, .type=IO_READ},
        {.addr=0x000f, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0033) {
    const struct CPU_State initial_cpu = {.pc=0x1579, .a=0xec, .x=0x86, .y=0xf3, .sp=0x8a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x95}, {.addr=0x1579, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x157a, .a=0xec, .x=0x86, .y=0xf3, .sp=0x8a, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xec}, {.addr=0x1579, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1579, .value=0xc6, .type=IO_READ},
        {.addr=0x157a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x95, .type=IO_READ},
        {.addr=0x0086, .value=0xec, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0034) {
    const struct CPU_State initial_cpu = {.pc=0x3d66, .a=0x48, .x=0x35, .y=0x83, .sp=0x12, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0xc6}, {.addr=0x3d66, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3d67, .a=0x48, .x=0x35, .y=0x83, .sp=0x12, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x48}, {.addr=0x3d66, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3d66, .value=0xc6, .type=IO_READ},
        {.addr=0x3d67, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0xc6, .type=IO_READ},
        {.addr=0x0035, .value=0x48, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0035) {
    const struct CPU_State initial_cpu = {.pc=0x8e0d, .a=0x80, .x=0xcf, .y=0x1d, .sp=0x37, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xe9}, {.addr=0x8e0d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8e0e, .a=0x80, .x=0xcf, .y=0x1d, .sp=0x37, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x80}, {.addr=0x8e0d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8e0d, .value=0xc6, .type=IO_READ},
        {.addr=0x8e0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xe9, .type=IO_READ},
        {.addr=0x01cf, .value=0x80, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0036) {
    const struct CPU_State initial_cpu = {.pc=0xfa8f, .a=0x0f, .x=0xa4, .y=0x99, .sp=0x64, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x49}, {.addr=0xfa8f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfa90, .a=0x0f, .x=0xa4, .y=0x99, .sp=0x64, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x0f}, {.addr=0xfa8f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfa8f, .value=0xc6, .type=IO_READ},
        {.addr=0xfa90, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x49, .type=IO_READ},
        {.addr=0x01a4, .value=0x0f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0037) {
    const struct CPU_State initial_cpu = {.pc=0x5cdc, .a=0x5a, .x=0x45, .y=0x1a, .sp=0xb7, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x57}, {.addr=0x5cdc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5cdd, .a=0x5a, .x=0x45, .y=0x1a, .sp=0xb7, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x5a}, {.addr=0x5cdc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5cdc, .value=0xc6, .type=IO_READ},
        {.addr=0x5cdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x57, .type=IO_READ},
        {.addr=0x0045, .value=0x5a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0038) {
    const struct CPU_State initial_cpu = {.pc=0xc237, .a=0x16, .x=0x95, .y=0x68, .sp=0x25, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xf7}, {.addr=0xc237, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc238, .a=0x16, .x=0x95, .y=0x68, .sp=0x25, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x16}, {.addr=0xc237, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc237, .value=0xc6, .type=IO_READ},
        {.addr=0xc238, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0xf7, .type=IO_READ},
        {.addr=0x0195, .value=0x16, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0039) {
    const struct CPU_State initial_cpu = {.pc=0x9458, .a=0x5e, .x=0x18, .y=0x86, .sp=0xb3, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x17}, {.addr=0x9458, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9459, .a=0x5e, .x=0x18, .y=0x86, .sp=0xb3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x5e}, {.addr=0x9458, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9458, .value=0xc6, .type=IO_READ},
        {.addr=0x9459, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x17, .type=IO_READ},
        {.addr=0x0118, .value=0x5e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_003A) {
    const struct CPU_State initial_cpu = {.pc=0x0cef, .a=0x3d, .x=0xe1, .y=0xea, .sp=0xd9, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x0e}, {.addr=0x0cef, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0cf0, .a=0x3d, .x=0xe1, .y=0xea, .sp=0xd9, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x3d}, {.addr=0x0cef, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0cef, .value=0xc6, .type=IO_READ},
        {.addr=0x0cf0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x0e, .type=IO_READ},
        {.addr=0x01e1, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_003B) {
    const struct CPU_State initial_cpu = {.pc=0xa168, .a=0xb6, .x=0xb6, .y=0xda, .sp=0xf4, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0x6e}, {.addr=0xa168, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa169, .a=0xb6, .x=0xb6, .y=0xda, .sp=0xf4, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0xb6}, {.addr=0xa168, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa168, .value=0xc6, .type=IO_READ},
        {.addr=0xa169, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0x6e, .type=IO_READ},
        {.addr=0x00b6, .value=0xb6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_003C) {
    const struct CPU_State initial_cpu = {.pc=0x83c4, .a=0x0f, .x=0x61, .y=0x4e, .sp=0xe2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x5f}, {.addr=0x83c4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x83c5, .a=0x0f, .x=0x61, .y=0x4e, .sp=0xe2, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x0f}, {.addr=0x83c4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x83c4, .value=0xc6, .type=IO_READ},
        {.addr=0x83c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x5f, .type=IO_READ},
        {.addr=0x0161, .value=0x0f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_003D) {
    const struct CPU_State initial_cpu = {.pc=0xdf80, .a=0xd2, .x=0x6a, .y=0x51, .sp=0x78, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x71}, {.addr=0xdf80, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdf81, .a=0xd2, .x=0x6a, .y=0x51, .sp=0x78, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xd2}, {.addr=0xdf80, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdf80, .value=0xc6, .type=IO_READ},
        {.addr=0xdf81, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0x71, .type=IO_READ},
        {.addr=0x006a, .value=0xd2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_003E) {
    const struct CPU_State initial_cpu = {.pc=0x7069, .a=0x4c, .x=0x86, .y=0xb4, .sp=0xa3, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x8a}, {.addr=0x7069, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x706a, .a=0x4c, .x=0x86, .y=0xb4, .sp=0xa3, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x4c}, {.addr=0x7069, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7069, .value=0xc6, .type=IO_READ},
        {.addr=0x706a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x8a, .type=IO_READ},
        {.addr=0x0086, .value=0x4c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_003F) {
    const struct CPU_State initial_cpu = {.pc=0xae9f, .a=0x82, .x=0xcf, .y=0x65, .sp=0x19, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x77}, {.addr=0xae9f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xaea0, .a=0x82, .x=0xcf, .y=0x65, .sp=0x19, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x82}, {.addr=0xae9f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xae9f, .value=0xc6, .type=IO_READ},
        {.addr=0xaea0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x77, .type=IO_READ},
        {.addr=0x00cf, .value=0x82, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0040) {
    const struct CPU_State initial_cpu = {.pc=0xcaa7, .a=0x54, .x=0x5e, .y=0x78, .sp=0xa5, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0xe4}, {.addr=0xcaa7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcaa8, .a=0x54, .x=0x5e, .y=0x78, .sp=0xa5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0x54}, {.addr=0xcaa7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcaa7, .value=0xc6, .type=IO_READ},
        {.addr=0xcaa8, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0xe4, .type=IO_READ},
        {.addr=0x005e, .value=0x54, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0041) {
    const struct CPU_State initial_cpu = {.pc=0x54de, .a=0x8d, .x=0x7e, .y=0x6c, .sp=0xbf, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x48}, {.addr=0x54de, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x54df, .a=0x8d, .x=0x7e, .y=0x6c, .sp=0xbf, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x8d}, {.addr=0x54de, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x54de, .value=0xc6, .type=IO_READ},
        {.addr=0x54df, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x48, .type=IO_READ},
        {.addr=0x017e, .value=0x8d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0042) {
    const struct CPU_State initial_cpu = {.pc=0x8a09, .a=0x43, .x=0x39, .y=0x8f, .sp=0x31, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x76}, {.addr=0x8a09, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8a0a, .a=0x43, .x=0x39, .y=0x8f, .sp=0x31, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x43}, {.addr=0x8a09, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8a09, .value=0xc6, .type=IO_READ},
        {.addr=0x8a0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x76, .type=IO_READ},
        {.addr=0x0139, .value=0x43, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0043) {
    const struct CPU_State initial_cpu = {.pc=0x3870, .a=0x16, .x=0x6d, .y=0xf7, .sp=0xde, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x44}, {.addr=0x3870, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3871, .a=0x16, .x=0x6d, .y=0xf7, .sp=0xde, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x16}, {.addr=0x3870, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3870, .value=0xc6, .type=IO_READ},
        {.addr=0x3871, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x44, .type=IO_READ},
        {.addr=0x016d, .value=0x16, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0044) {
    const struct CPU_State initial_cpu = {.pc=0xd83b, .a=0xb0, .x=0xb5, .y=0x4d, .sp=0x2f, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00b5, .value=0x71}, {.addr=0xd83b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd83c, .a=0xb0, .x=0xb5, .y=0x4d, .sp=0x2f, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x00b5, .value=0xb0}, {.addr=0xd83b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd83b, .value=0xc6, .type=IO_READ},
        {.addr=0xd83c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b5, .value=0x71, .type=IO_READ},
        {.addr=0x00b5, .value=0xb0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0045) {
    const struct CPU_State initial_cpu = {.pc=0xfd7d, .a=0xab, .x=0x15, .y=0x47, .sp=0xba, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0xbb}, {.addr=0xfd7d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfd7e, .a=0xab, .x=0x15, .y=0x47, .sp=0xba, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0xab}, {.addr=0xfd7d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfd7d, .value=0xc6, .type=IO_READ},
        {.addr=0xfd7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0xbb, .type=IO_READ},
        {.addr=0x0015, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0046) {
    const struct CPU_State initial_cpu = {.pc=0x370b, .a=0x52, .x=0x65, .y=0x45, .sp=0x2e, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0xb9}, {.addr=0x370b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x370c, .a=0x52, .x=0x65, .y=0x45, .sp=0x2e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0x52}, {.addr=0x370b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x370b, .value=0xc6, .type=IO_READ},
        {.addr=0x370c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0xb9, .type=IO_READ},
        {.addr=0x0065, .value=0x52, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0047) {
    const struct CPU_State initial_cpu = {.pc=0xe92b, .a=0x58, .x=0x1b, .y=0xd4, .sp=0xe5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x28}, {.addr=0xe92b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe92c, .a=0x58, .x=0x1b, .y=0xd4, .sp=0xe5, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x58}, {.addr=0xe92b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe92b, .value=0xc6, .type=IO_READ},
        {.addr=0xe92c, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x28, .type=IO_READ},
        {.addr=0x001b, .value=0x58, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0048) {
    const struct CPU_State initial_cpu = {.pc=0x5ae2, .a=0x09, .x=0x45, .y=0xa5, .sp=0xf9, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0xd5}, {.addr=0x5ae2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5ae3, .a=0x09, .x=0x45, .y=0xa5, .sp=0xf9, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x09}, {.addr=0x5ae2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5ae2, .value=0xc6, .type=IO_READ},
        {.addr=0x5ae3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0xd5, .type=IO_READ},
        {.addr=0x0045, .value=0x09, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0049) {
    const struct CPU_State initial_cpu = {.pc=0xeea3, .a=0x28, .x=0xc6, .y=0xbc, .sp=0x32, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xba}, {.addr=0xeea3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xeea4, .a=0x28, .x=0xc6, .y=0xbc, .sp=0x32, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x28}, {.addr=0xeea3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xeea3, .value=0xc6, .type=IO_READ},
        {.addr=0xeea4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xba, .type=IO_READ},
        {.addr=0x01c6, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_004A) {
    const struct CPU_State initial_cpu = {.pc=0x64e7, .a=0xb3, .x=0xf6, .y=0xac, .sp=0x6a, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xc2}, {.addr=0x64e7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x64e8, .a=0xb3, .x=0xf6, .y=0xac, .sp=0x6a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xb3}, {.addr=0x64e7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x64e7, .value=0xc6, .type=IO_READ},
        {.addr=0x64e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0xc2, .type=IO_READ},
        {.addr=0x01f6, .value=0xb3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_004B) {
    const struct CPU_State initial_cpu = {.pc=0x8c0f, .a=0x31, .x=0x2b, .y=0xb6, .sp=0xd6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xbe}, {.addr=0x8c0f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8c10, .a=0x31, .x=0x2b, .y=0xb6, .sp=0xd6, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x31}, {.addr=0x8c0f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8c0f, .value=0xc6, .type=IO_READ},
        {.addr=0x8c10, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xbe, .type=IO_READ},
        {.addr=0x012b, .value=0x31, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_004C) {
    const struct CPU_State initial_cpu = {.pc=0xff43, .a=0x66, .x=0xfc, .y=0x80, .sp=0xa6, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x05}, {.addr=0xff43, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xff44, .a=0x66, .x=0xfc, .y=0x80, .sp=0xa6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x66}, {.addr=0xff43, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xff43, .value=0xc6, .type=IO_READ},
        {.addr=0xff44, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x05, .type=IO_READ},
        {.addr=0x01fc, .value=0x66, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_004D) {
    const struct CPU_State initial_cpu = {.pc=0x2531, .a=0xf9, .x=0xe8, .y=0x7d, .sp=0xbf, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0x7a}, {.addr=0x2531, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2532, .a=0xf9, .x=0xe8, .y=0x7d, .sp=0xbf, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xf9}, {.addr=0x2531, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2531, .value=0xc6, .type=IO_READ},
        {.addr=0x2532, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0x7a, .type=IO_READ},
        {.addr=0x00e8, .value=0xf9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_004E) {
    const struct CPU_State initial_cpu = {.pc=0xa4bc, .a=0xf1, .x=0x3a, .y=0xd3, .sp=0x70, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0xa3}, {.addr=0xa4bc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa4bd, .a=0xf1, .x=0x3a, .y=0xd3, .sp=0x70, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xf1}, {.addr=0xa4bc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa4bc, .value=0xc6, .type=IO_READ},
        {.addr=0xa4bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0xa3, .type=IO_READ},
        {.addr=0x013a, .value=0xf1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_004F) {
    const struct CPU_State initial_cpu = {.pc=0x1b8d, .a=0x45, .x=0xd1, .y=0x0d, .sp=0x90, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x9e}, {.addr=0x1b8d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1b8e, .a=0x45, .x=0xd1, .y=0x0d, .sp=0x90, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x45}, {.addr=0x1b8d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1b8d, .value=0xc6, .type=IO_READ},
        {.addr=0x1b8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x9e, .type=IO_READ},
        {.addr=0x01d1, .value=0x45, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0050) {
    const struct CPU_State initial_cpu = {.pc=0x87f2, .a=0xe5, .x=0x11, .y=0x5d, .sp=0xa7, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xa2}, {.addr=0x87f2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x87f3, .a=0xe5, .x=0x11, .y=0x5d, .sp=0xa7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xe5}, {.addr=0x87f2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x87f2, .value=0xc6, .type=IO_READ},
        {.addr=0x87f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xa2, .type=IO_READ},
        {.addr=0x0111, .value=0xe5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0051) {
    const struct CPU_State initial_cpu = {.pc=0x08e4, .a=0x5d, .x=0x16, .y=0xf7, .sp=0x4b, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0x25}, {.addr=0x08e4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x08e5, .a=0x5d, .x=0x16, .y=0xf7, .sp=0x4b, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0x5d}, {.addr=0x08e4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x08e4, .value=0xc6, .type=IO_READ},
        {.addr=0x08e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0x25, .type=IO_READ},
        {.addr=0x0016, .value=0x5d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0052) {
    const struct CPU_State initial_cpu = {.pc=0xadc0, .a=0xe3, .x=0xa2, .y=0xa4, .sp=0x46, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x0c}, {.addr=0xadc0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xadc1, .a=0xe3, .x=0xa2, .y=0xa4, .sp=0x46, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xe3}, {.addr=0xadc0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xadc0, .value=0xc6, .type=IO_READ},
        {.addr=0xadc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x0c, .type=IO_READ},
        {.addr=0x01a2, .value=0xe3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0054) {
    const struct CPU_State initial_cpu = {.pc=0xcc47, .a=0xec, .x=0x5c, .y=0x6f, .sp=0x1c, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xc1}, {.addr=0xcc47, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcc48, .a=0xec, .x=0x5c, .y=0x6f, .sp=0x1c, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xec}, {.addr=0xcc47, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcc47, .value=0xc6, .type=IO_READ},
        {.addr=0xcc48, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xc1, .type=IO_READ},
        {.addr=0x015c, .value=0xec, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0055) {
    const struct CPU_State initial_cpu = {.pc=0x9c71, .a=0x66, .x=0xff, .y=0x0a, .sp=0x2d, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x84}, {.addr=0x9c71, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9c72, .a=0x66, .x=0xff, .y=0x0a, .sp=0x2d, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x66}, {.addr=0x9c71, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9c71, .value=0xc6, .type=IO_READ},
        {.addr=0x9c72, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x84, .type=IO_READ},
        {.addr=0x01ff, .value=0x66, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0057) {
    const struct CPU_State initial_cpu = {.pc=0x211d, .a=0x02, .x=0x35, .y=0xdb, .sp=0xc6, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0xe3}, {.addr=0x211d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x211e, .a=0x02, .x=0x35, .y=0xdb, .sp=0xc6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x02}, {.addr=0x211d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x211d, .value=0xc6, .type=IO_READ},
        {.addr=0x211e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0xe3, .type=IO_READ},
        {.addr=0x0035, .value=0x02, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0058) {
    const struct CPU_State initial_cpu = {.pc=0xb94f, .a=0xed, .x=0x18, .y=0x8c, .sp=0xcf, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x76}, {.addr=0xb94f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb950, .a=0xed, .x=0x18, .y=0x8c, .sp=0xcf, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xed}, {.addr=0xb94f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb94f, .value=0xc6, .type=IO_READ},
        {.addr=0xb950, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x76, .type=IO_READ},
        {.addr=0x0118, .value=0xed, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_005A) {
    const struct CPU_State initial_cpu = {.pc=0x9e2c, .a=0x19, .x=0x19, .y=0x4a, .sp=0x39, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0x2e}, {.addr=0x9e2c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9e2d, .a=0x19, .x=0x19, .y=0x4a, .sp=0x39, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0x19}, {.addr=0x9e2c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9e2c, .value=0xc6, .type=IO_READ},
        {.addr=0x9e2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0019, .value=0x2e, .type=IO_READ},
        {.addr=0x0019, .value=0x19, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_005B) {
    const struct CPU_State initial_cpu = {.pc=0x2a99, .a=0xbd, .x=0x30, .y=0xc9, .sp=0xc1, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xce}, {.addr=0x2a99, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2a9a, .a=0xbd, .x=0x30, .y=0xc9, .sp=0xc1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xbd}, {.addr=0x2a99, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2a99, .value=0xc6, .type=IO_READ},
        {.addr=0x2a9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xce, .type=IO_READ},
        {.addr=0x0130, .value=0xbd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_005C) {
    const struct CPU_State initial_cpu = {.pc=0xb772, .a=0x36, .x=0x08, .y=0x06, .sp=0x88, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xa8}, {.addr=0xb772, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb773, .a=0x36, .x=0x08, .y=0x06, .sp=0x88, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x36}, {.addr=0xb772, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb772, .value=0xc6, .type=IO_READ},
        {.addr=0xb773, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0xa8, .type=IO_READ},
        {.addr=0x0108, .value=0x36, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_005D) {
    const struct CPU_State initial_cpu = {.pc=0x900b, .a=0x86, .x=0xb5, .y=0x7f, .sp=0xd7, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x9d}, {.addr=0x900b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x900c, .a=0x86, .x=0xb5, .y=0x7f, .sp=0xd7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x86}, {.addr=0x900b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x900b, .value=0xc6, .type=IO_READ},
        {.addr=0x900c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x9d, .type=IO_READ},
        {.addr=0x01b5, .value=0x86, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_005E) {
    const struct CPU_State initial_cpu = {.pc=0x16f6, .a=0xaf, .x=0x74, .y=0x9a, .sp=0x5f, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x10}, {.addr=0x16f6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x16f7, .a=0xaf, .x=0x74, .y=0x9a, .sp=0x5f, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xaf}, {.addr=0x16f6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x16f6, .value=0xc6, .type=IO_READ},
        {.addr=0x16f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x10, .type=IO_READ},
        {.addr=0x0174, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_005F) {
    const struct CPU_State initial_cpu = {.pc=0x4d6c, .a=0x33, .x=0x23, .y=0x55, .sp=0x0c, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x28}, {.addr=0x4d6c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4d6d, .a=0x33, .x=0x23, .y=0x55, .sp=0x0c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x33}, {.addr=0x4d6c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4d6c, .value=0xc6, .type=IO_READ},
        {.addr=0x4d6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x28, .type=IO_READ},
        {.addr=0x0123, .value=0x33, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0060) {
    const struct CPU_State initial_cpu = {.pc=0xe9c3, .a=0xe3, .x=0xc1, .y=0x7c, .sp=0x7f, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0xd4}, {.addr=0xe9c3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe9c4, .a=0xe3, .x=0xc1, .y=0x7c, .sp=0x7f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0xe3}, {.addr=0xe9c3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe9c3, .value=0xc6, .type=IO_READ},
        {.addr=0xe9c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0xd4, .type=IO_READ},
        {.addr=0x00c1, .value=0xe3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0061) {
    const struct CPU_State initial_cpu = {.pc=0xf5b6, .a=0xe1, .x=0xef, .y=0x8a, .sp=0x23, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x2c}, {.addr=0xf5b6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf5b7, .a=0xe1, .x=0xef, .y=0x8a, .sp=0x23, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xe1}, {.addr=0xf5b6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf5b6, .value=0xc6, .type=IO_READ},
        {.addr=0xf5b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x2c, .type=IO_READ},
        {.addr=0x01ef, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0062) {
    const struct CPU_State initial_cpu = {.pc=0xeb3e, .a=0x8b, .x=0x77, .y=0x66, .sp=0x98, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x42}, {.addr=0xeb3e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xeb3f, .a=0x8b, .x=0x77, .y=0x66, .sp=0x98, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x8b}, {.addr=0xeb3e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xeb3e, .value=0xc6, .type=IO_READ},
        {.addr=0xeb3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x42, .type=IO_READ},
        {.addr=0x0177, .value=0x8b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0063) {
    const struct CPU_State initial_cpu = {.pc=0x47a5, .a=0x0a, .x=0x99, .y=0xe0, .sp=0x8b, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0xc0}, {.addr=0x47a5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x47a6, .a=0x0a, .x=0x99, .y=0xe0, .sp=0x8b, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x0a}, {.addr=0x47a5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x47a5, .value=0xc6, .type=IO_READ},
        {.addr=0x47a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0xc0, .type=IO_READ},
        {.addr=0x0099, .value=0x0a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0064) {
    const struct CPU_State initial_cpu = {.pc=0x86d7, .a=0x63, .x=0x02, .y=0xb0, .sp=0x09, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xcc}, {.addr=0x86d7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x86d8, .a=0x63, .x=0x02, .y=0xb0, .sp=0x09, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x63}, {.addr=0x86d7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x86d7, .value=0xc6, .type=IO_READ},
        {.addr=0x86d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xcc, .type=IO_READ},
        {.addr=0x0102, .value=0x63, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0065) {
    const struct CPU_State initial_cpu = {.pc=0xc7ce, .a=0xc3, .x=0x96, .y=0x24, .sp=0xa1, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x19}, {.addr=0xc7ce, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc7cf, .a=0xc3, .x=0x96, .y=0x24, .sp=0xa1, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0xc3}, {.addr=0xc7ce, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc7ce, .value=0xc6, .type=IO_READ},
        {.addr=0xc7cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x19, .type=IO_READ},
        {.addr=0x0096, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0066) {
    const struct CPU_State initial_cpu = {.pc=0x1b13, .a=0x71, .x=0x6b, .y=0x04, .sp=0xda, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0xcd}, {.addr=0x1b13, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1b14, .a=0x71, .x=0x6b, .y=0x04, .sp=0xda, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x71}, {.addr=0x1b13, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1b13, .value=0xc6, .type=IO_READ},
        {.addr=0x1b14, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0xcd, .type=IO_READ},
        {.addr=0x006b, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0067) {
    const struct CPU_State initial_cpu = {.pc=0x0b34, .a=0xbf, .x=0xcb, .y=0x98, .sp=0xfc, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0xa5}, {.addr=0x0b34, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0b35, .a=0xbf, .x=0xcb, .y=0x98, .sp=0xfc, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0xbf}, {.addr=0x0b34, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0b34, .value=0xc6, .type=IO_READ},
        {.addr=0x0b35, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0xa5, .type=IO_READ},
        {.addr=0x00cb, .value=0xbf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0068) {
    const struct CPU_State initial_cpu = {.pc=0x6005, .a=0x12, .x=0x08, .y=0xf9, .sp=0x2e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0x55}, {.addr=0x6005, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6006, .a=0x12, .x=0x08, .y=0xf9, .sp=0x2e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0x12}, {.addr=0x6005, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6005, .value=0xc6, .type=IO_READ},
        {.addr=0x6006, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0x55, .type=IO_READ},
        {.addr=0x0008, .value=0x12, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0069) {
    const struct CPU_State initial_cpu = {.pc=0xb9f1, .a=0x94, .x=0xdf, .y=0x26, .sp=0x30, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xeb}, {.addr=0xb9f1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb9f2, .a=0x94, .x=0xdf, .y=0x26, .sp=0x30, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x94}, {.addr=0xb9f1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb9f1, .value=0xc6, .type=IO_READ},
        {.addr=0xb9f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xeb, .type=IO_READ},
        {.addr=0x01df, .value=0x94, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_006B) {
    const struct CPU_State initial_cpu = {.pc=0x6dfa, .a=0x0e, .x=0xcf, .y=0x54, .sp=0x62, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x8c}, {.addr=0x6dfa, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6dfb, .a=0x0e, .x=0xcf, .y=0x54, .sp=0x62, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x0e}, {.addr=0x6dfa, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6dfa, .value=0xc6, .type=IO_READ},
        {.addr=0x6dfb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x8c, .type=IO_READ},
        {.addr=0x00cf, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_006C) {
    const struct CPU_State initial_cpu = {.pc=0xc1aa, .a=0x96, .x=0x41, .y=0xba, .sp=0x6b, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xd9}, {.addr=0xc1aa, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc1ab, .a=0x96, .x=0x41, .y=0xba, .sp=0x6b, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x96}, {.addr=0xc1aa, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc1aa, .value=0xc6, .type=IO_READ},
        {.addr=0xc1ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0xd9, .type=IO_READ},
        {.addr=0x0141, .value=0x96, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_006D) {
    const struct CPU_State initial_cpu = {.pc=0xaacb, .a=0x5c, .x=0x00, .y=0x66, .sp=0x1f, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x55}, {.addr=0xaacb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xaacc, .a=0x5c, .x=0x00, .y=0x66, .sp=0x1f, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x5c}, {.addr=0xaacb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xaacb, .value=0xc6, .type=IO_READ},
        {.addr=0xaacc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x55, .type=IO_READ},
        {.addr=0x0100, .value=0x5c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_006E) {
    const struct CPU_State initial_cpu = {.pc=0xf4d7, .a=0xd7, .x=0xc5, .y=0xae, .sp=0xd4, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x89}, {.addr=0xf4d7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf4d8, .a=0xd7, .x=0xc5, .y=0xae, .sp=0xd4, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xd7}, {.addr=0xf4d7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf4d7, .value=0xc6, .type=IO_READ},
        {.addr=0xf4d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x89, .type=IO_READ},
        {.addr=0x01c5, .value=0xd7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_006F) {
    const struct CPU_State initial_cpu = {.pc=0x85b4, .a=0xe7, .x=0xdc, .y=0x85, .sp=0x65, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x62}, {.addr=0x85b4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x85b5, .a=0xe7, .x=0xdc, .y=0x85, .sp=0x65, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0xe7}, {.addr=0x85b4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x85b4, .value=0xc6, .type=IO_READ},
        {.addr=0x85b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x62, .type=IO_READ},
        {.addr=0x00dc, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0070) {
    const struct CPU_State initial_cpu = {.pc=0x6ae2, .a=0x24, .x=0xc5, .y=0x92, .sp=0x21, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xa0}, {.addr=0x6ae2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6ae3, .a=0x24, .x=0xc5, .y=0x92, .sp=0x21, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x24}, {.addr=0x6ae2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6ae2, .value=0xc6, .type=IO_READ},
        {.addr=0x6ae3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xa0, .type=IO_READ},
        {.addr=0x01c5, .value=0x24, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0071) {
    const struct CPU_State initial_cpu = {.pc=0x98e6, .a=0xed, .x=0x31, .y=0xe3, .sp=0x65, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x3b}, {.addr=0x98e6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x98e7, .a=0xed, .x=0x31, .y=0xe3, .sp=0x65, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xed}, {.addr=0x98e6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x98e6, .value=0xc6, .type=IO_READ},
        {.addr=0x98e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x3b, .type=IO_READ},
        {.addr=0x0131, .value=0xed, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0072) {
    const struct CPU_State initial_cpu = {.pc=0xe3c5, .a=0xb3, .x=0x2e, .y=0x11, .sp=0xe5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x9a}, {.addr=0xe3c5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe3c6, .a=0xb3, .x=0x2e, .y=0x11, .sp=0xe5, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xb3}, {.addr=0xe3c5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe3c5, .value=0xc6, .type=IO_READ},
        {.addr=0xe3c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x9a, .type=IO_READ},
        {.addr=0x012e, .value=0xb3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0073) {
    const struct CPU_State initial_cpu = {.pc=0x25c6, .a=0xd3, .x=0x84, .y=0x5b, .sp=0x48, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x02}, {.addr=0x25c6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x25c7, .a=0xd3, .x=0x84, .y=0x5b, .sp=0x48, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0xd3}, {.addr=0x25c6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x25c6, .value=0xc6, .type=IO_READ},
        {.addr=0x25c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0x02, .type=IO_READ},
        {.addr=0x0084, .value=0xd3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0074) {
    const struct CPU_State initial_cpu = {.pc=0x05e5, .a=0xd4, .x=0x96, .y=0xb9, .sp=0xce, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x37}, {.addr=0x05e5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x05e6, .a=0xd4, .x=0x96, .y=0xb9, .sp=0xce, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xd4}, {.addr=0x05e5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x05e5, .value=0xc6, .type=IO_READ},
        {.addr=0x05e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x37, .type=IO_READ},
        {.addr=0x0196, .value=0xd4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0075) {
    const struct CPU_State initial_cpu = {.pc=0xe190, .a=0x9b, .x=0x2a, .y=0x46, .sp=0xaa, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x4b}, {.addr=0xe190, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe191, .a=0x9b, .x=0x2a, .y=0x46, .sp=0xaa, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x9b}, {.addr=0xe190, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe190, .value=0xc6, .type=IO_READ},
        {.addr=0xe191, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x4b, .type=IO_READ},
        {.addr=0x012a, .value=0x9b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0076) {
    const struct CPU_State initial_cpu = {.pc=0xd24f, .a=0x3e, .x=0xe7, .y=0xf6, .sp=0xb8, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0xf5}, {.addr=0xd24f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd250, .a=0x3e, .x=0xe7, .y=0xf6, .sp=0xb8, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x3e}, {.addr=0xd24f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd24f, .value=0xc6, .type=IO_READ},
        {.addr=0xd250, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xf5, .type=IO_READ},
        {.addr=0x00e7, .value=0x3e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0077) {
    const struct CPU_State initial_cpu = {.pc=0xeba1, .a=0xa0, .x=0xfb, .y=0x68, .sp=0x59, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x1e}, {.addr=0xeba1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xeba2, .a=0xa0, .x=0xfb, .y=0x68, .sp=0x59, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xa0}, {.addr=0xeba1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xeba1, .value=0xc6, .type=IO_READ},
        {.addr=0xeba2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x1e, .type=IO_READ},
        {.addr=0x01fb, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0078) {
    const struct CPU_State initial_cpu = {.pc=0x3771, .a=0xf5, .x=0x13, .y=0x54, .sp=0xb4, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xeb}, {.addr=0x3771, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3772, .a=0xf5, .x=0x13, .y=0x54, .sp=0xb4, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xf5}, {.addr=0x3771, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3771, .value=0xc6, .type=IO_READ},
        {.addr=0x3772, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xeb, .type=IO_READ},
        {.addr=0x0113, .value=0xf5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0079) {
    const struct CPU_State initial_cpu = {.pc=0xbb0f, .a=0xfa, .x=0xc5, .y=0x08, .sp=0xa8, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xef}, {.addr=0xbb0f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbb10, .a=0xfa, .x=0xc5, .y=0x08, .sp=0xa8, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xfa}, {.addr=0xbb0f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbb0f, .value=0xc6, .type=IO_READ},
        {.addr=0xbb10, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xef, .type=IO_READ},
        {.addr=0x01c5, .value=0xfa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_007A) {
    const struct CPU_State initial_cpu = {.pc=0xe824, .a=0x09, .x=0x67, .y=0x7e, .sp=0x4c, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x53}, {.addr=0xe824, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe825, .a=0x09, .x=0x67, .y=0x7e, .sp=0x4c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0x09}, {.addr=0xe824, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe824, .value=0xc6, .type=IO_READ},
        {.addr=0xe825, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0x53, .type=IO_READ},
        {.addr=0x0067, .value=0x09, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_007B) {
    const struct CPU_State initial_cpu = {.pc=0x3c76, .a=0xc7, .x=0x30, .y=0x06, .sp=0xf9, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x94}, {.addr=0x3c76, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3c77, .a=0xc7, .x=0x30, .y=0x06, .sp=0xf9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xc7}, {.addr=0x3c76, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3c76, .value=0xc6, .type=IO_READ},
        {.addr=0x3c77, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x94, .type=IO_READ},
        {.addr=0x0130, .value=0xc7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_007C) {
    const struct CPU_State initial_cpu = {.pc=0xf8f4, .a=0x9c, .x=0x9a, .y=0xd3, .sp=0xa4, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x3d}, {.addr=0xf8f4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf8f5, .a=0x9c, .x=0x9a, .y=0xd3, .sp=0xa4, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x9c}, {.addr=0xf8f4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf8f4, .value=0xc6, .type=IO_READ},
        {.addr=0xf8f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x3d, .type=IO_READ},
        {.addr=0x019a, .value=0x9c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_007D) {
    const struct CPU_State initial_cpu = {.pc=0xfde0, .a=0x60, .x=0xd0, .y=0x33, .sp=0x06, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x41}, {.addr=0xfde0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfde1, .a=0x60, .x=0xd0, .y=0x33, .sp=0x06, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x60}, {.addr=0xfde0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfde0, .value=0xc6, .type=IO_READ},
        {.addr=0xfde1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x41, .type=IO_READ},
        {.addr=0x01d0, .value=0x60, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_007E) {
    const struct CPU_State initial_cpu = {.pc=0x9666, .a=0x12, .x=0x18, .y=0x65, .sp=0xd4, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x96}, {.addr=0x9666, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9667, .a=0x12, .x=0x18, .y=0x65, .sp=0xd4, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x12}, {.addr=0x9666, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9666, .value=0xc6, .type=IO_READ},
        {.addr=0x9667, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x96, .type=IO_READ},
        {.addr=0x0018, .value=0x12, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_007F) {
    const struct CPU_State initial_cpu = {.pc=0x8a4c, .a=0xab, .x=0x60, .y=0x85, .sp=0xa2, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x20}, {.addr=0x8a4c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8a4d, .a=0xab, .x=0x60, .y=0x85, .sp=0xa2, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xab}, {.addr=0x8a4c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8a4c, .value=0xc6, .type=IO_READ},
        {.addr=0x8a4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x20, .type=IO_READ},
        {.addr=0x0160, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0080) {
    const struct CPU_State initial_cpu = {.pc=0x4c71, .a=0x9c, .x=0xed, .y=0x09, .sp=0x4a, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x76}, {.addr=0x4c71, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4c72, .a=0x9c, .x=0xed, .y=0x09, .sp=0x4a, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x9c}, {.addr=0x4c71, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4c71, .value=0xc6, .type=IO_READ},
        {.addr=0x4c72, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x76, .type=IO_READ},
        {.addr=0x00ed, .value=0x9c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0081) {
    const struct CPU_State initial_cpu = {.pc=0xd02f, .a=0xd4, .x=0x96, .y=0x72, .sp=0xba, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x33}, {.addr=0xd02f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd030, .a=0xd4, .x=0x96, .y=0x72, .sp=0xba, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xd4}, {.addr=0xd02f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd02f, .value=0xc6, .type=IO_READ},
        {.addr=0xd030, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x33, .type=IO_READ},
        {.addr=0x0196, .value=0xd4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0082) {
    const struct CPU_State initial_cpu = {.pc=0x9b9c, .a=0x60, .x=0xf1, .y=0x3d, .sp=0xac, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x95}, {.addr=0x9b9c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9b9d, .a=0x60, .x=0xf1, .y=0x3d, .sp=0xac, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x60}, {.addr=0x9b9c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9b9c, .value=0xc6, .type=IO_READ},
        {.addr=0x9b9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x95, .type=IO_READ},
        {.addr=0x01f1, .value=0x60, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0083) {
    const struct CPU_State initial_cpu = {.pc=0x7b38, .a=0x3a, .x=0xd6, .y=0x91, .sp=0xe9, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x72}, {.addr=0x7b38, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7b39, .a=0x3a, .x=0xd6, .y=0x91, .sp=0xe9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x3a}, {.addr=0x7b38, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7b38, .value=0xc6, .type=IO_READ},
        {.addr=0x7b39, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0x72, .type=IO_READ},
        {.addr=0x00d6, .value=0x3a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0084) {
    const struct CPU_State initial_cpu = {.pc=0xd423, .a=0x4a, .x=0x0a, .y=0x17, .sp=0xf1, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x0c}, {.addr=0xd423, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd424, .a=0x4a, .x=0x0a, .y=0x17, .sp=0xf1, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x4a}, {.addr=0xd423, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd423, .value=0xc6, .type=IO_READ},
        {.addr=0xd424, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x0c, .type=IO_READ},
        {.addr=0x010a, .value=0x4a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0085) {
    const struct CPU_State initial_cpu = {.pc=0x87af, .a=0x12, .x=0xf3, .y=0xdf, .sp=0xfe, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0xf9}, {.addr=0x87af, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x87b0, .a=0x12, .x=0xf3, .y=0xdf, .sp=0xfe, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x12}, {.addr=0x87af, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x87af, .value=0xc6, .type=IO_READ},
        {.addr=0x87b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xf9, .type=IO_READ},
        {.addr=0x01f3, .value=0x12, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0086) {
    const struct CPU_State initial_cpu = {.pc=0x6e27, .a=0xda, .x=0x48, .y=0x19, .sp=0x8a, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x6c}, {.addr=0x6e27, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6e28, .a=0xda, .x=0x48, .y=0x19, .sp=0x8a, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0xda}, {.addr=0x6e27, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6e27, .value=0xc6, .type=IO_READ},
        {.addr=0x6e28, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x6c, .type=IO_READ},
        {.addr=0x0048, .value=0xda, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0087) {
    const struct CPU_State initial_cpu = {.pc=0xe560, .a=0xf9, .x=0x6c, .y=0xa2, .sp=0x38, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0xb2}, {.addr=0xe560, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe561, .a=0xf9, .x=0x6c, .y=0xa2, .sp=0x38, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0xf9}, {.addr=0xe560, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe560, .value=0xc6, .type=IO_READ},
        {.addr=0xe561, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0xb2, .type=IO_READ},
        {.addr=0x006c, .value=0xf9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0088) {
    const struct CPU_State initial_cpu = {.pc=0xa204, .a=0xd2, .x=0x4f, .y=0x1f, .sp=0x41, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0x8d}, {.addr=0xa204, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa205, .a=0xd2, .x=0x4f, .y=0x1f, .sp=0x41, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0xd2}, {.addr=0xa204, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa204, .value=0xc6, .type=IO_READ},
        {.addr=0xa205, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0x8d, .type=IO_READ},
        {.addr=0x004f, .value=0xd2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0089) {
    const struct CPU_State initial_cpu = {.pc=0xc0ce, .a=0xc5, .x=0x90, .y=0xd4, .sp=0xaa, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x19}, {.addr=0xc0ce, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc0cf, .a=0xc5, .x=0x90, .y=0xd4, .sp=0xaa, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xc5}, {.addr=0xc0ce, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc0ce, .value=0xc6, .type=IO_READ},
        {.addr=0xc0cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x19, .type=IO_READ},
        {.addr=0x0190, .value=0xc5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_008A) {
    const struct CPU_State initial_cpu = {.pc=0x0f4d, .a=0x54, .x=0x0a, .y=0x4b, .sp=0xa3, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x5e}, {.addr=0x0f4d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0f4e, .a=0x54, .x=0x0a, .y=0x4b, .sp=0xa3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x54}, {.addr=0x0f4d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0f4d, .value=0xc6, .type=IO_READ},
        {.addr=0x0f4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x5e, .type=IO_READ},
        {.addr=0x010a, .value=0x54, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_008B) {
    const struct CPU_State initial_cpu = {.pc=0x67bf, .a=0xdd, .x=0x8a, .y=0x00, .sp=0xe5, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x0e}, {.addr=0x67bf, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x67c0, .a=0xdd, .x=0x8a, .y=0x00, .sp=0xe5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xdd}, {.addr=0x67bf, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x67bf, .value=0xc6, .type=IO_READ},
        {.addr=0x67c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x0e, .type=IO_READ},
        {.addr=0x018a, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_008C) {
    const struct CPU_State initial_cpu = {.pc=0x345a, .a=0x30, .x=0x96, .y=0x3b, .sp=0x79, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x3e}, {.addr=0x345a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x345b, .a=0x30, .x=0x96, .y=0x3b, .sp=0x79, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x30}, {.addr=0x345a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x345a, .value=0xc6, .type=IO_READ},
        {.addr=0x345b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x3e, .type=IO_READ},
        {.addr=0x0096, .value=0x30, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_008D) {
    const struct CPU_State initial_cpu = {.pc=0x8002, .a=0x55, .x=0xd2, .y=0xfb, .sp=0x71, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x3a}, {.addr=0x8002, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8003, .a=0x55, .x=0xd2, .y=0xfb, .sp=0x71, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x55}, {.addr=0x8002, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8002, .value=0xc6, .type=IO_READ},
        {.addr=0x8003, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x3a, .type=IO_READ},
        {.addr=0x01d2, .value=0x55, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_008E) {
    const struct CPU_State initial_cpu = {.pc=0xd62b, .a=0xdd, .x=0xc0, .y=0x6f, .sp=0x0c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0xff}, {.addr=0xd62b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd62c, .a=0xdd, .x=0xc0, .y=0x6f, .sp=0x0c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xdd}, {.addr=0xd62b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd62b, .value=0xc6, .type=IO_READ},
        {.addr=0xd62c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0xff, .type=IO_READ},
        {.addr=0x01c0, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_008F) {
    const struct CPU_State initial_cpu = {.pc=0x71c3, .a=0xb5, .x=0x6d, .y=0x25, .sp=0x0f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x25}, {.addr=0x71c3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x71c4, .a=0xb5, .x=0x6d, .y=0x25, .sp=0x0f, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0xb5}, {.addr=0x71c3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x71c3, .value=0xc6, .type=IO_READ},
        {.addr=0x71c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x006d, .value=0x25, .type=IO_READ},
        {.addr=0x006d, .value=0xb5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0090) {
    const struct CPU_State initial_cpu = {.pc=0x29dd, .a=0x95, .x=0x85, .y=0x48, .sp=0xdb, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xab}, {.addr=0x29dd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x29de, .a=0x95, .x=0x85, .y=0x48, .sp=0xdb, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x95}, {.addr=0x29dd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x29dd, .value=0xc6, .type=IO_READ},
        {.addr=0x29de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xab, .type=IO_READ},
        {.addr=0x0185, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0091) {
    const struct CPU_State initial_cpu = {.pc=0xf3d8, .a=0xf2, .x=0x88, .y=0xad, .sp=0x3c, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0x6a}, {.addr=0xf3d8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf3d9, .a=0xf2, .x=0x88, .y=0xad, .sp=0x3c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0xf2}, {.addr=0xf3d8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf3d8, .value=0xc6, .type=IO_READ},
        {.addr=0xf3d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0x6a, .type=IO_READ},
        {.addr=0x0088, .value=0xf2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0093) {
    const struct CPU_State initial_cpu = {.pc=0x99d5, .a=0xd7, .x=0x1d, .y=0xc4, .sp=0xef, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x21}, {.addr=0x99d5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x99d6, .a=0xd7, .x=0x1d, .y=0xc4, .sp=0xef, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xd7}, {.addr=0x99d5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x99d5, .value=0xc6, .type=IO_READ},
        {.addr=0x99d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x21, .type=IO_READ},
        {.addr=0x011d, .value=0xd7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0094) {
    const struct CPU_State initial_cpu = {.pc=0x3bf4, .a=0x05, .x=0x07, .y=0x86, .sp=0x9a, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x19}, {.addr=0x3bf4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3bf5, .a=0x05, .x=0x07, .y=0x86, .sp=0x9a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x05}, {.addr=0x3bf4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3bf4, .value=0xc6, .type=IO_READ},
        {.addr=0x3bf5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x19, .type=IO_READ},
        {.addr=0x0107, .value=0x05, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0095) {
    const struct CPU_State initial_cpu = {.pc=0x4212, .a=0x3b, .x=0x2b, .y=0xac, .sp=0x2e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x77}, {.addr=0x4212, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4213, .a=0x3b, .x=0x2b, .y=0xac, .sp=0x2e, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x3b}, {.addr=0x4212, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4212, .value=0xc6, .type=IO_READ},
        {.addr=0x4213, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x77, .type=IO_READ},
        {.addr=0x002b, .value=0x3b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0096) {
    const struct CPU_State initial_cpu = {.pc=0x8a5e, .a=0x2e, .x=0x8e, .y=0x69, .sp=0xa9, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xbe}, {.addr=0x8a5e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8a5f, .a=0x2e, .x=0x8e, .y=0x69, .sp=0xa9, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x2e}, {.addr=0x8a5e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8a5e, .value=0xc6, .type=IO_READ},
        {.addr=0x8a5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xbe, .type=IO_READ},
        {.addr=0x018e, .value=0x2e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0097) {
    const struct CPU_State initial_cpu = {.pc=0x1c34, .a=0x2e, .x=0x2d, .y=0x9e, .sp=0x5a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0xca}, {.addr=0x1c34, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1c35, .a=0x2e, .x=0x2d, .y=0x9e, .sp=0x5a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x2e}, {.addr=0x1c34, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1c34, .value=0xc6, .type=IO_READ},
        {.addr=0x1c35, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0xca, .type=IO_READ},
        {.addr=0x002d, .value=0x2e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0098) {
    const struct CPU_State initial_cpu = {.pc=0x5a22, .a=0xc0, .x=0x91, .y=0x59, .sp=0xf4, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x43}, {.addr=0x5a22, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5a23, .a=0xc0, .x=0x91, .y=0x59, .sp=0xf4, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xc0}, {.addr=0x5a22, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5a22, .value=0xc6, .type=IO_READ},
        {.addr=0x5a23, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x43, .type=IO_READ},
        {.addr=0x0191, .value=0xc0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0099) {
    const struct CPU_State initial_cpu = {.pc=0xf5b4, .a=0x8e, .x=0x63, .y=0x2f, .sp=0xcb, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x7c}, {.addr=0xf5b4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf5b5, .a=0x8e, .x=0x63, .y=0x2f, .sp=0xcb, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x8e}, {.addr=0xf5b4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf5b4, .value=0xc6, .type=IO_READ},
        {.addr=0xf5b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x7c, .type=IO_READ},
        {.addr=0x0163, .value=0x8e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_009A) {
    const struct CPU_State initial_cpu = {.pc=0xecea, .a=0x2d, .x=0x0d, .y=0xfa, .sp=0xb9, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0xa8}, {.addr=0xecea, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xeceb, .a=0x2d, .x=0x0d, .y=0xfa, .sp=0xb9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x2d}, {.addr=0xecea, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xecea, .value=0xc6, .type=IO_READ},
        {.addr=0xeceb, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0xa8, .type=IO_READ},
        {.addr=0x000d, .value=0x2d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_009B) {
    const struct CPU_State initial_cpu = {.pc=0xf108, .a=0x71, .x=0x22, .y=0xd0, .sp=0x86, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x55}, {.addr=0xf108, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf109, .a=0x71, .x=0x22, .y=0xd0, .sp=0x86, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x71}, {.addr=0xf108, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf108, .value=0xc6, .type=IO_READ},
        {.addr=0xf109, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x55, .type=IO_READ},
        {.addr=0x0122, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_009C) {
    const struct CPU_State initial_cpu = {.pc=0xc895, .a=0x46, .x=0xea, .y=0xb2, .sp=0x70, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x30}, {.addr=0xc895, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc896, .a=0x46, .x=0xea, .y=0xb2, .sp=0x70, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x46}, {.addr=0xc895, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc895, .value=0xc6, .type=IO_READ},
        {.addr=0xc896, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x30, .type=IO_READ},
        {.addr=0x01ea, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_009D) {
    const struct CPU_State initial_cpu = {.pc=0x1b53, .a=0x13, .x=0x95, .y=0xb0, .sp=0xa2, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x25}, {.addr=0x1b53, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1b54, .a=0x13, .x=0x95, .y=0xb0, .sp=0xa2, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x13}, {.addr=0x1b53, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1b53, .value=0xc6, .type=IO_READ},
        {.addr=0x1b54, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0x25, .type=IO_READ},
        {.addr=0x0095, .value=0x13, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_009E) {
    const struct CPU_State initial_cpu = {.pc=0x75b3, .a=0xc7, .x=0x1e, .y=0x5a, .sp=0x4b, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0xb5}, {.addr=0x75b3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x75b4, .a=0xc7, .x=0x1e, .y=0x5a, .sp=0x4b, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0xc7}, {.addr=0x75b3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x75b3, .value=0xc6, .type=IO_READ},
        {.addr=0x75b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0xb5, .type=IO_READ},
        {.addr=0x001e, .value=0xc7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_009F) {
    const struct CPU_State initial_cpu = {.pc=0x0eed, .a=0xd2, .x=0x82, .y=0x01, .sp=0xbe, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0xfa}, {.addr=0x0eed, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0eee, .a=0xd2, .x=0x82, .y=0x01, .sp=0xbe, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xd2}, {.addr=0x0eed, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0eed, .value=0xc6, .type=IO_READ},
        {.addr=0x0eee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0xfa, .type=IO_READ},
        {.addr=0x0082, .value=0xd2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xd98c, .a=0xbd, .x=0x84, .y=0x96, .sp=0x52, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xee}, {.addr=0xd98c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd98d, .a=0xbd, .x=0x84, .y=0x96, .sp=0x52, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xbd}, {.addr=0xd98c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd98c, .value=0xc6, .type=IO_READ},
        {.addr=0xd98d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xee, .type=IO_READ},
        {.addr=0x0184, .value=0xbd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x748c, .a=0xf3, .x=0xe3, .y=0x71, .sp=0x91, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xaf}, {.addr=0x748c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x748d, .a=0xf3, .x=0xe3, .y=0x71, .sp=0x91, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xf3}, {.addr=0x748c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x748c, .value=0xc6, .type=IO_READ},
        {.addr=0x748d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xaf, .type=IO_READ},
        {.addr=0x01e3, .value=0xf3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x9f69, .a=0x7f, .x=0xdb, .y=0x15, .sp=0x16, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0xd5}, {.addr=0x9f69, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9f6a, .a=0x7f, .x=0xdb, .y=0x15, .sp=0x16, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x7f}, {.addr=0x9f69, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9f69, .value=0xc6, .type=IO_READ},
        {.addr=0x9f6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0xd5, .type=IO_READ},
        {.addr=0x00db, .value=0x7f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xb58e, .a=0xc7, .x=0xb5, .y=0x9d, .sp=0x2c, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00b5, .value=0xf4}, {.addr=0xb58e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb58f, .a=0xc7, .x=0xb5, .y=0x9d, .sp=0x2c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00b5, .value=0xc7}, {.addr=0xb58e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb58e, .value=0xc6, .type=IO_READ},
        {.addr=0xb58f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b5, .value=0xf4, .type=IO_READ},
        {.addr=0x00b5, .value=0xc7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xe4db, .a=0x68, .x=0x43, .y=0x1f, .sp=0x1c, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xc4}, {.addr=0xe4db, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe4dc, .a=0x68, .x=0x43, .y=0x1f, .sp=0x1c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x68}, {.addr=0xe4db, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe4db, .value=0xc6, .type=IO_READ},
        {.addr=0xe4dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xc4, .type=IO_READ},
        {.addr=0x0043, .value=0x68, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xe93f, .a=0x46, .x=0xac, .y=0xa8, .sp=0xe2, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x32}, {.addr=0xe93f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe940, .a=0x46, .x=0xac, .y=0xa8, .sp=0xe2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x46}, {.addr=0xe93f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe93f, .value=0xc6, .type=IO_READ},
        {.addr=0xe940, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x32, .type=IO_READ},
        {.addr=0x00ac, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x56f6, .a=0x71, .x=0xe8, .y=0xd1, .sp=0x4e, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xe2}, {.addr=0x56f6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x56f7, .a=0x71, .x=0xe8, .y=0xd1, .sp=0x4e, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x71}, {.addr=0x56f6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x56f6, .value=0xc6, .type=IO_READ},
        {.addr=0x56f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xe2, .type=IO_READ},
        {.addr=0x01e8, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x020d, .a=0x43, .x=0xdd, .y=0xba, .sp=0x55, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x75}, {.addr=0x020d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x020e, .a=0x43, .x=0xdd, .y=0xba, .sp=0x55, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x43}, {.addr=0x020d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x020d, .value=0xc6, .type=IO_READ},
        {.addr=0x020e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x75, .type=IO_READ},
        {.addr=0x00dd, .value=0x43, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xe18b, .a=0x29, .x=0x67, .y=0xcb, .sp=0xfe, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xd9}, {.addr=0xe18b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe18c, .a=0x29, .x=0x67, .y=0xcb, .sp=0xfe, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x29}, {.addr=0xe18b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe18b, .value=0xc6, .type=IO_READ},
        {.addr=0xe18c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xd9, .type=IO_READ},
        {.addr=0x0167, .value=0x29, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x159c, .a=0xd9, .x=0x5a, .y=0xcf, .sp=0xaf, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x45}, {.addr=0x159c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x159d, .a=0xd9, .x=0x5a, .y=0xcf, .sp=0xaf, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0xd9}, {.addr=0x159c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x159c, .value=0xc6, .type=IO_READ},
        {.addr=0x159d, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x45, .type=IO_READ},
        {.addr=0x005a, .value=0xd9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x53ec, .a=0x98, .x=0x6e, .y=0x0e, .sp=0x08, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x47}, {.addr=0x53ec, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x53ed, .a=0x98, .x=0x6e, .y=0x0e, .sp=0x08, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x98}, {.addr=0x53ec, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x53ec, .value=0xc6, .type=IO_READ},
        {.addr=0x53ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x47, .type=IO_READ},
        {.addr=0x016e, .value=0x98, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xe323, .a=0x84, .x=0x69, .y=0x26, .sp=0x05, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x5c}, {.addr=0xe323, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe324, .a=0x84, .x=0x69, .y=0x26, .sp=0x05, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x84}, {.addr=0xe323, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe323, .value=0xc6, .type=IO_READ},
        {.addr=0xe324, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x5c, .type=IO_READ},
        {.addr=0x0069, .value=0x84, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xc828, .a=0xf0, .x=0x32, .y=0xbe, .sp=0x04, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x75}, {.addr=0xc828, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc829, .a=0xf0, .x=0x32, .y=0xbe, .sp=0x04, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0xf0}, {.addr=0xc828, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc828, .value=0xc6, .type=IO_READ},
        {.addr=0xc829, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x75, .type=IO_READ},
        {.addr=0x0032, .value=0xf0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x3c1e, .a=0xc9, .x=0x3e, .y=0x72, .sp=0xc5, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x2a}, {.addr=0x3c1e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3c1f, .a=0xc9, .x=0x3e, .y=0x72, .sp=0xc5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xc9}, {.addr=0x3c1e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3c1e, .value=0xc6, .type=IO_READ},
        {.addr=0x3c1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x2a, .type=IO_READ},
        {.addr=0x013e, .value=0xc9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xfb41, .a=0x8e, .x=0xce, .y=0x8a, .sp=0xfb, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x85}, {.addr=0xfb41, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfb42, .a=0x8e, .x=0xce, .y=0x8a, .sp=0xfb, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x8e}, {.addr=0xfb41, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfb41, .value=0xc6, .type=IO_READ},
        {.addr=0xfb42, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x85, .type=IO_READ},
        {.addr=0x00ce, .value=0x8e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xd4c3, .a=0xe5, .x=0x3b, .y=0x14, .sp=0x2a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x19}, {.addr=0xd4c3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd4c4, .a=0xe5, .x=0x3b, .y=0x14, .sp=0x2a, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0xe5}, {.addr=0xd4c3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd4c3, .value=0xc6, .type=IO_READ},
        {.addr=0xd4c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x19, .type=IO_READ},
        {.addr=0x003b, .value=0xe5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x6572, .a=0x81, .x=0x32, .y=0x94, .sp=0x75, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x24}, {.addr=0x6572, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6573, .a=0x81, .x=0x32, .y=0x94, .sp=0x75, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x81}, {.addr=0x6572, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6572, .value=0xc6, .type=IO_READ},
        {.addr=0x6573, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x24, .type=IO_READ},
        {.addr=0x0032, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x6e17, .a=0x1b, .x=0x25, .y=0xc4, .sp=0xbd, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x2a}, {.addr=0x6e17, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6e18, .a=0x1b, .x=0x25, .y=0xc4, .sp=0xbd, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x1b}, {.addr=0x6e17, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6e17, .value=0xc6, .type=IO_READ},
        {.addr=0x6e18, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x2a, .type=IO_READ},
        {.addr=0x0125, .value=0x1b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xe037, .a=0x1c, .x=0x49, .y=0xaa, .sp=0x74, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0xe5}, {.addr=0xe037, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe038, .a=0x1c, .x=0x49, .y=0xaa, .sp=0x74, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x1c}, {.addr=0xe037, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe037, .value=0xc6, .type=IO_READ},
        {.addr=0xe038, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0xe5, .type=IO_READ},
        {.addr=0x0049, .value=0x1c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x3356, .a=0xbf, .x=0x9b, .y=0x25, .sp=0x8d, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x91}, {.addr=0x3356, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3357, .a=0xbf, .x=0x9b, .y=0x25, .sp=0x8d, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0xbf}, {.addr=0x3356, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3356, .value=0xc6, .type=IO_READ},
        {.addr=0x3357, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0x91, .type=IO_READ},
        {.addr=0x009b, .value=0xbf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xf320, .a=0xf1, .x=0x3c, .y=0x2f, .sp=0x40, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xc3}, {.addr=0xf320, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf321, .a=0xf1, .x=0x3c, .y=0x2f, .sp=0x40, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xf1}, {.addr=0xf320, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf320, .value=0xc6, .type=IO_READ},
        {.addr=0xf321, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xc3, .type=IO_READ},
        {.addr=0x013c, .value=0xf1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x4fde, .a=0x7a, .x=0x62, .y=0x22, .sp=0x74, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x11}, {.addr=0x4fde, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4fdf, .a=0x7a, .x=0x62, .y=0x22, .sp=0x74, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x7a}, {.addr=0x4fde, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4fde, .value=0xc6, .type=IO_READ},
        {.addr=0x4fdf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x11, .type=IO_READ},
        {.addr=0x0062, .value=0x7a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x9b2d, .a=0x11, .x=0x5b, .y=0x38, .sp=0x28, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x3c}, {.addr=0x9b2d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9b2e, .a=0x11, .x=0x5b, .y=0x38, .sp=0x28, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x11}, {.addr=0x9b2d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9b2d, .value=0xc6, .type=IO_READ},
        {.addr=0x9b2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x3c, .type=IO_READ},
        {.addr=0x005b, .value=0x11, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xf83a, .a=0xeb, .x=0xa4, .y=0x0d, .sp=0x4f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0xfb}, {.addr=0xf83a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf83b, .a=0xeb, .x=0xa4, .y=0x0d, .sp=0x4f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xeb}, {.addr=0xf83a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf83a, .value=0xc6, .type=IO_READ},
        {.addr=0xf83b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xfb, .type=IO_READ},
        {.addr=0x01a4, .value=0xeb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x6653, .a=0x9a, .x=0x2a, .y=0xd1, .sp=0x35, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x08}, {.addr=0x6653, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6654, .a=0x9a, .x=0x2a, .y=0xd1, .sp=0x35, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x9a}, {.addr=0x6653, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6653, .value=0xc6, .type=IO_READ},
        {.addr=0x6654, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x08, .type=IO_READ},
        {.addr=0x002a, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x864e, .a=0x09, .x=0x34, .y=0xa2, .sp=0xf6, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xc7}, {.addr=0x864e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x864f, .a=0x09, .x=0x34, .y=0xa2, .sp=0xf6, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x09}, {.addr=0x864e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x864e, .value=0xc6, .type=IO_READ},
        {.addr=0x864f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xc7, .type=IO_READ},
        {.addr=0x0134, .value=0x09, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x9108, .a=0xc3, .x=0xd5, .y=0xd6, .sp=0xe2, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xfa}, {.addr=0x9108, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9109, .a=0xc3, .x=0xd5, .y=0xd6, .sp=0xe2, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xc3}, {.addr=0x9108, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9108, .value=0xc6, .type=IO_READ},
        {.addr=0x9109, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xfa, .type=IO_READ},
        {.addr=0x01d5, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x0e63, .a=0x22, .x=0x47, .y=0x5e, .sp=0x0b, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x44}, {.addr=0x0e63, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0e64, .a=0x22, .x=0x47, .y=0x5e, .sp=0x0b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x22}, {.addr=0x0e63, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0e63, .value=0xc6, .type=IO_READ},
        {.addr=0x0e64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x44, .type=IO_READ},
        {.addr=0x0147, .value=0x22, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xeb6a, .a=0x39, .x=0x22, .y=0x20, .sp=0x2a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0x91}, {.addr=0xeb6a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xeb6b, .a=0x39, .x=0x22, .y=0x20, .sp=0x2a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0x39}, {.addr=0xeb6a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xeb6a, .value=0xc6, .type=IO_READ},
        {.addr=0xeb6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0022, .value=0x91, .type=IO_READ},
        {.addr=0x0022, .value=0x39, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xb5a6, .a=0x06, .x=0xb0, .y=0x92, .sp=0xb5, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0xec}, {.addr=0xb5a6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb5a7, .a=0x06, .x=0xb0, .y=0x92, .sp=0xb5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0x06}, {.addr=0xb5a6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb5a6, .value=0xc6, .type=IO_READ},
        {.addr=0xb5a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0xec, .type=IO_READ},
        {.addr=0x00b0, .value=0x06, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x2012, .a=0xb1, .x=0x82, .y=0x25, .sp=0x1d, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x87}, {.addr=0x2012, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2013, .a=0xb1, .x=0x82, .y=0x25, .sp=0x1d, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xb1}, {.addr=0x2012, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2012, .value=0xc6, .type=IO_READ},
        {.addr=0x2013, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x87, .type=IO_READ},
        {.addr=0x0182, .value=0xb1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xe3f6, .a=0x23, .x=0x2d, .y=0xe1, .sp=0xa4, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0xf7}, {.addr=0xe3f6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe3f7, .a=0x23, .x=0x2d, .y=0xe1, .sp=0xa4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x23}, {.addr=0xe3f6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe3f6, .value=0xc6, .type=IO_READ},
        {.addr=0xe3f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0xf7, .type=IO_READ},
        {.addr=0x002d, .value=0x23, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x67ae, .a=0x7e, .x=0xc7, .y=0xf4, .sp=0xae, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x65}, {.addr=0x67ae, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x67af, .a=0x7e, .x=0xc7, .y=0xf4, .sp=0xae, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x7e}, {.addr=0x67ae, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x67ae, .value=0xc6, .type=IO_READ},
        {.addr=0x67af, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x65, .type=IO_READ},
        {.addr=0x00c7, .value=0x7e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x568a, .a=0xb8, .x=0xf8, .y=0x9b, .sp=0xde, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xf2}, {.addr=0x568a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x568b, .a=0xb8, .x=0xf8, .y=0x9b, .sp=0xde, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xb8}, {.addr=0x568a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x568a, .value=0xc6, .type=IO_READ},
        {.addr=0x568b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xf2, .type=IO_READ},
        {.addr=0x01f8, .value=0xb8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xe7a6, .a=0xfc, .x=0xd7, .y=0xbf, .sp=0x40, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x3b}, {.addr=0xe7a6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe7a7, .a=0xfc, .x=0xd7, .y=0xbf, .sp=0x40, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xfc}, {.addr=0xe7a6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe7a6, .value=0xc6, .type=IO_READ},
        {.addr=0xe7a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x3b, .type=IO_READ},
        {.addr=0x01d7, .value=0xfc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x12a8, .a=0xc7, .x=0x0a, .y=0x61, .sp=0xaa, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x91}, {.addr=0x12a8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x12a9, .a=0xc7, .x=0x0a, .y=0x61, .sp=0xaa, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0xc7}, {.addr=0x12a8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x12a8, .value=0xc6, .type=IO_READ},
        {.addr=0x12a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x91, .type=IO_READ},
        {.addr=0x000a, .value=0xc7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x467b, .a=0x29, .x=0xc7, .y=0xd4, .sp=0x68, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x34}, {.addr=0x467b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x467c, .a=0x29, .x=0xc7, .y=0xd4, .sp=0x68, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x29}, {.addr=0x467b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x467b, .value=0xc6, .type=IO_READ},
        {.addr=0x467c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x34, .type=IO_READ},
        {.addr=0x00c7, .value=0x29, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xc747, .a=0x4b, .x=0x56, .y=0xf8, .sp=0x25, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x6c}, {.addr=0xc747, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc748, .a=0x4b, .x=0x56, .y=0xf8, .sp=0x25, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x4b}, {.addr=0xc747, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc747, .value=0xc6, .type=IO_READ},
        {.addr=0xc748, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x6c, .type=IO_READ},
        {.addr=0x0156, .value=0x4b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x9bd3, .a=0x23, .x=0x67, .y=0x2b, .sp=0x22, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x69}, {.addr=0x9bd3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9bd4, .a=0x23, .x=0x67, .y=0x2b, .sp=0x22, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x23}, {.addr=0x9bd3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9bd3, .value=0xc6, .type=IO_READ},
        {.addr=0x9bd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x69, .type=IO_READ},
        {.addr=0x0167, .value=0x23, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xf53f, .a=0x03, .x=0x47, .y=0x44, .sp=0xbf, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0xd4}, {.addr=0xf53f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf540, .a=0x03, .x=0x47, .y=0x44, .sp=0xbf, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x03}, {.addr=0xf53f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf53f, .value=0xc6, .type=IO_READ},
        {.addr=0xf540, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0xd4, .type=IO_READ},
        {.addr=0x0147, .value=0x03, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xda4b, .a=0x3c, .x=0xc8, .y=0x92, .sp=0x5d, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x7d}, {.addr=0xda4b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xda4c, .a=0x3c, .x=0xc8, .y=0x92, .sp=0x5d, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x3c}, {.addr=0xda4b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xda4b, .value=0xc6, .type=IO_READ},
        {.addr=0xda4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x7d, .type=IO_READ},
        {.addr=0x01c8, .value=0x3c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x77df, .a=0x3b, .x=0x20, .y=0x27, .sp=0x7d, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x5a}, {.addr=0x77df, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x77e0, .a=0x3b, .x=0x20, .y=0x27, .sp=0x7d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x3b}, {.addr=0x77df, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x77df, .value=0xc6, .type=IO_READ},
        {.addr=0x77e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x5a, .type=IO_READ},
        {.addr=0x0120, .value=0x3b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xa713, .a=0x83, .x=0xac, .y=0x7e, .sp=0x27, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0xc7}, {.addr=0xa713, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa714, .a=0x83, .x=0xac, .y=0x7e, .sp=0x27, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x83}, {.addr=0xa713, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa713, .value=0xc6, .type=IO_READ},
        {.addr=0xa714, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0xc7, .type=IO_READ},
        {.addr=0x00ac, .value=0x83, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x2238, .a=0xe7, .x=0x80, .y=0x07, .sp=0xad, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0x8a}, {.addr=0x2238, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2239, .a=0xe7, .x=0x80, .y=0x07, .sp=0xad, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0xe7}, {.addr=0x2238, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2238, .value=0xc6, .type=IO_READ},
        {.addr=0x2239, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0x8a, .type=IO_READ},
        {.addr=0x0080, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x48c2, .a=0x4e, .x=0x05, .y=0x7f, .sp=0x90, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x1f}, {.addr=0x48c2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x48c3, .a=0x4e, .x=0x05, .y=0x7f, .sp=0x90, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x4e}, {.addr=0x48c2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x48c2, .value=0xc6, .type=IO_READ},
        {.addr=0x48c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0x1f, .type=IO_READ},
        {.addr=0x0005, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xa989, .a=0xb1, .x=0x4a, .y=0x55, .sp=0x2a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x60}, {.addr=0xa989, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa98a, .a=0xb1, .x=0x4a, .y=0x55, .sp=0x2a, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xb1}, {.addr=0xa989, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa989, .value=0xc6, .type=IO_READ},
        {.addr=0xa98a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x60, .type=IO_READ},
        {.addr=0x014a, .value=0xb1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x01b2, .a=0x95, .x=0x33, .y=0x41, .sp=0xc8, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x5b}, {.addr=0x01b2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x01b3, .a=0x95, .x=0x33, .y=0x41, .sp=0xc8, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x95}, {.addr=0x01b2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x01b2, .value=0xc6, .type=IO_READ},
        {.addr=0x01b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x5b, .type=IO_READ},
        {.addr=0x0033, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xb01f, .a=0x5a, .x=0x70, .y=0x4b, .sp=0xbc, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x9a}, {.addr=0xb01f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb020, .a=0x5a, .x=0x70, .y=0x4b, .sp=0xbc, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x5a}, {.addr=0xb01f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb01f, .value=0xc6, .type=IO_READ},
        {.addr=0xb020, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x9a, .type=IO_READ},
        {.addr=0x0070, .value=0x5a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xe993, .a=0x28, .x=0xdf, .y=0xe4, .sp=0xcd, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x33}, {.addr=0xe993, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe994, .a=0x28, .x=0xdf, .y=0xe4, .sp=0xcd, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x28}, {.addr=0xe993, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe993, .value=0xc6, .type=IO_READ},
        {.addr=0xe994, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x33, .type=IO_READ},
        {.addr=0x01df, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xfda4, .a=0x9e, .x=0x94, .y=0x41, .sp=0x62, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xab}, {.addr=0xfda4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfda5, .a=0x9e, .x=0x94, .y=0x41, .sp=0x62, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x9e}, {.addr=0xfda4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfda4, .value=0xc6, .type=IO_READ},
        {.addr=0xfda5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xab, .type=IO_READ},
        {.addr=0x0194, .value=0x9e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x8e90, .a=0xc2, .x=0x9f, .y=0x6d, .sp=0x0e, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x19}, {.addr=0x8e90, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8e91, .a=0xc2, .x=0x9f, .y=0x6d, .sp=0x0e, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xc2}, {.addr=0x8e90, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8e90, .value=0xc6, .type=IO_READ},
        {.addr=0x8e91, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x19, .type=IO_READ},
        {.addr=0x019f, .value=0xc2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x8ad9, .a=0x52, .x=0xb4, .y=0x60, .sp=0x6f, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x08}, {.addr=0x8ad9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8ada, .a=0x52, .x=0xb4, .y=0x60, .sp=0x6f, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x52}, {.addr=0x8ad9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8ad9, .value=0xc6, .type=IO_READ},
        {.addr=0x8ada, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x08, .type=IO_READ},
        {.addr=0x01b4, .value=0x52, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xff88, .a=0x71, .x=0xb4, .y=0x44, .sp=0x91, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0x77}, {.addr=0xff88, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xff89, .a=0x71, .x=0xb4, .y=0x44, .sp=0x91, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0x71}, {.addr=0xff88, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xff88, .value=0xc6, .type=IO_READ},
        {.addr=0xff89, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0x77, .type=IO_READ},
        {.addr=0x00b4, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x55c4, .a=0x86, .x=0x06, .y=0x0d, .sp=0x3e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0xbd}, {.addr=0x55c4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x55c5, .a=0x86, .x=0x06, .y=0x0d, .sp=0x3e, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0x86}, {.addr=0x55c4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x55c4, .value=0xc6, .type=IO_READ},
        {.addr=0x55c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0xbd, .type=IO_READ},
        {.addr=0x0006, .value=0x86, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x1bd9, .a=0xc5, .x=0x68, .y=0x63, .sp=0x95, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0xaa}, {.addr=0x1bd9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1bda, .a=0xc5, .x=0x68, .y=0x63, .sp=0x95, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0xc5}, {.addr=0x1bd9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1bd9, .value=0xc6, .type=IO_READ},
        {.addr=0x1bda, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0xaa, .type=IO_READ},
        {.addr=0x0068, .value=0xc5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x03fb, .a=0xa5, .x=0x92, .y=0xe6, .sp=0x68, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x50}, {.addr=0x03fb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x03fc, .a=0xa5, .x=0x92, .y=0xe6, .sp=0x68, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0xa5}, {.addr=0x03fb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x03fb, .value=0xc6, .type=IO_READ},
        {.addr=0x03fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0x50, .type=IO_READ},
        {.addr=0x0092, .value=0xa5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xbf1b, .a=0xe9, .x=0xb0, .y=0x87, .sp=0xb5, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xe6}, {.addr=0xbf1b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbf1c, .a=0xe9, .x=0xb0, .y=0x87, .sp=0xb5, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xe9}, {.addr=0xbf1b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbf1b, .value=0xc6, .type=IO_READ},
        {.addr=0xbf1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xe6, .type=IO_READ},
        {.addr=0x01b0, .value=0xe9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x1980, .a=0x23, .x=0x0b, .y=0x16, .sp=0xb4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x25}, {.addr=0x1980, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1981, .a=0x23, .x=0x0b, .y=0x16, .sp=0xb4, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x23}, {.addr=0x1980, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1980, .value=0xc6, .type=IO_READ},
        {.addr=0x1981, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x25, .type=IO_READ},
        {.addr=0x000b, .value=0x23, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x8157, .a=0xa8, .x=0xa2, .y=0x17, .sp=0x7f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x4a}, {.addr=0x8157, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8158, .a=0xa8, .x=0xa2, .y=0x17, .sp=0x7f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0xa8}, {.addr=0x8157, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8157, .value=0xc6, .type=IO_READ},
        {.addr=0x8158, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x4a, .type=IO_READ},
        {.addr=0x00a2, .value=0xa8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xa048, .a=0x0f, .x=0x51, .y=0x9c, .sp=0xf8, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x76}, {.addr=0xa048, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa049, .a=0x0f, .x=0x51, .y=0x9c, .sp=0xf8, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x0f}, {.addr=0xa048, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa048, .value=0xc6, .type=IO_READ},
        {.addr=0xa049, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x76, .type=IO_READ},
        {.addr=0x0151, .value=0x0f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x8795, .a=0xcb, .x=0xb3, .y=0x98, .sp=0x58, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xd6}, {.addr=0x8795, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8796, .a=0xcb, .x=0xb3, .y=0x98, .sp=0x58, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xcb}, {.addr=0x8795, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8795, .value=0xc6, .type=IO_READ},
        {.addr=0x8796, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0xd6, .type=IO_READ},
        {.addr=0x01b3, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x6434, .a=0x8c, .x=0xd5, .y=0x08, .sp=0xa4, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0xb3}, {.addr=0x6434, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6435, .a=0x8c, .x=0xd5, .y=0x08, .sp=0xa4, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x8c}, {.addr=0x6434, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6434, .value=0xc6, .type=IO_READ},
        {.addr=0x6435, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0xb3, .type=IO_READ},
        {.addr=0x00d5, .value=0x8c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xd31f, .a=0xa5, .x=0x87, .y=0x4e, .sp=0x61, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xad}, {.addr=0xd31f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd320, .a=0xa5, .x=0x87, .y=0x4e, .sp=0x61, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xa5}, {.addr=0xd31f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd31f, .value=0xc6, .type=IO_READ},
        {.addr=0xd320, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xad, .type=IO_READ},
        {.addr=0x0087, .value=0xa5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x497d, .a=0x32, .x=0xa6, .y=0xcb, .sp=0x67, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x5d}, {.addr=0x497d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x497e, .a=0x32, .x=0xa6, .y=0xcb, .sp=0x67, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x32}, {.addr=0x497d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x497d, .value=0xc6, .type=IO_READ},
        {.addr=0x497e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x5d, .type=IO_READ},
        {.addr=0x01a6, .value=0x32, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x088f, .a=0x9f, .x=0x46, .y=0x89, .sp=0x8d, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0x72}, {.addr=0x088f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0890, .a=0x9f, .x=0x46, .y=0x89, .sp=0x8d, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0x9f}, {.addr=0x088f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x088f, .value=0xc6, .type=IO_READ},
        {.addr=0x0890, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0x72, .type=IO_READ},
        {.addr=0x0046, .value=0x9f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x1b80, .a=0x0d, .x=0x72, .y=0xa4, .sp=0x4a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0xf7}, {.addr=0x1b80, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1b81, .a=0x0d, .x=0x72, .y=0xa4, .sp=0x4a, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x0d}, {.addr=0x1b80, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1b80, .value=0xc6, .type=IO_READ},
        {.addr=0x1b81, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0xf7, .type=IO_READ},
        {.addr=0x0072, .value=0x0d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xa112, .a=0xec, .x=0xaf, .y=0xcb, .sp=0x35, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0xba}, {.addr=0xa112, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa113, .a=0xec, .x=0xaf, .y=0xcb, .sp=0x35, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0xec}, {.addr=0xa112, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa112, .value=0xc6, .type=IO_READ},
        {.addr=0xa113, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0xba, .type=IO_READ},
        {.addr=0x00af, .value=0xec, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xd839, .a=0xeb, .x=0xf9, .y=0xe0, .sp=0xd6, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x8f}, {.addr=0xd839, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd83a, .a=0xeb, .x=0xf9, .y=0xe0, .sp=0xd6, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0xeb}, {.addr=0xd839, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd839, .value=0xc6, .type=IO_READ},
        {.addr=0xd83a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x8f, .type=IO_READ},
        {.addr=0x01f9, .value=0xeb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xa22d, .a=0x2f, .x=0x3c, .y=0x6a, .sp=0x7c, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x93}, {.addr=0xa22d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa22e, .a=0x2f, .x=0x3c, .y=0x6a, .sp=0x7c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x2f}, {.addr=0xa22d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa22d, .value=0xc6, .type=IO_READ},
        {.addr=0xa22e, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x93, .type=IO_READ},
        {.addr=0x003c, .value=0x2f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x5627, .a=0x5c, .x=0xa0, .y=0xe4, .sp=0xab, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xcb}, {.addr=0x5627, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5628, .a=0x5c, .x=0xa0, .y=0xe4, .sp=0xab, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x5c}, {.addr=0x5627, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5627, .value=0xc6, .type=IO_READ},
        {.addr=0x5628, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xcb, .type=IO_READ},
        {.addr=0x01a0, .value=0x5c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x7438, .a=0x9f, .x=0x87, .y=0xd7, .sp=0xb9, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x1e}, {.addr=0x7438, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7439, .a=0x9f, .x=0x87, .y=0xd7, .sp=0xb9, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x9f}, {.addr=0x7438, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7438, .value=0xc6, .type=IO_READ},
        {.addr=0x7439, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0x1e, .type=IO_READ},
        {.addr=0x0087, .value=0x9f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x501c, .a=0xe0, .x=0x29, .y=0x61, .sp=0x47, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x3b}, {.addr=0x501c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x501d, .a=0xe0, .x=0x29, .y=0x61, .sp=0x47, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xe0}, {.addr=0x501c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x501c, .value=0xc6, .type=IO_READ},
        {.addr=0x501d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x3b, .type=IO_READ},
        {.addr=0x0129, .value=0xe0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xb022, .a=0x7a, .x=0x74, .y=0x7f, .sp=0xa4, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x70}, {.addr=0xb022, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb023, .a=0x7a, .x=0x74, .y=0x7f, .sp=0xa4, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x7a}, {.addr=0xb022, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb022, .value=0xc6, .type=IO_READ},
        {.addr=0xb023, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x70, .type=IO_READ},
        {.addr=0x0074, .value=0x7a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x2e2b, .a=0xb3, .x=0x27, .y=0x2c, .sp=0x55, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0x6b}, {.addr=0x2e2b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2e2c, .a=0xb3, .x=0x27, .y=0x2c, .sp=0x55, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0xb3}, {.addr=0x2e2b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2e2b, .value=0xc6, .type=IO_READ},
        {.addr=0x2e2c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0x6b, .type=IO_READ},
        {.addr=0x0027, .value=0xb3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x9ad8, .a=0xaf, .x=0xe5, .y=0x6a, .sp=0xef, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x75}, {.addr=0x9ad8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9ad9, .a=0xaf, .x=0xe5, .y=0x6a, .sp=0xef, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0xaf}, {.addr=0x9ad8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9ad8, .value=0xc6, .type=IO_READ},
        {.addr=0x9ad9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x75, .type=IO_READ},
        {.addr=0x01e5, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x477f, .a=0x99, .x=0x13, .y=0x40, .sp=0xf3, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xa7}, {.addr=0x477f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4780, .a=0x99, .x=0x13, .y=0x40, .sp=0xf3, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x99}, {.addr=0x477f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x477f, .value=0xc6, .type=IO_READ},
        {.addr=0x4780, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xa7, .type=IO_READ},
        {.addr=0x0113, .value=0x99, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x57f1, .a=0xc0, .x=0x51, .y=0xcf, .sp=0x14, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x99}, {.addr=0x57f1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x57f2, .a=0xc0, .x=0x51, .y=0xcf, .sp=0x14, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xc0}, {.addr=0x57f1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x57f1, .value=0xc6, .type=IO_READ},
        {.addr=0x57f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x99, .type=IO_READ},
        {.addr=0x0151, .value=0xc0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xdd8c, .a=0x70, .x=0xf5, .y=0x85, .sp=0xd9, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xac}, {.addr=0xdd8c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdd8d, .a=0x70, .x=0xf5, .y=0x85, .sp=0xd9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x70}, {.addr=0xdd8c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdd8c, .value=0xc6, .type=IO_READ},
        {.addr=0xdd8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0xac, .type=IO_READ},
        {.addr=0x01f5, .value=0x70, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xb769, .a=0xe6, .x=0xd1, .y=0x32, .sp=0xf8, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x91}, {.addr=0xb769, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb76a, .a=0xe6, .x=0xd1, .y=0x32, .sp=0xf8, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0xe6}, {.addr=0xb769, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb769, .value=0xc6, .type=IO_READ},
        {.addr=0xb76a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x91, .type=IO_READ},
        {.addr=0x00d1, .value=0xe6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x2d98, .a=0xc8, .x=0xcd, .y=0x73, .sp=0xd0, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x5e}, {.addr=0x2d98, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2d99, .a=0xc8, .x=0xcd, .y=0x73, .sp=0xd0, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0xc8}, {.addr=0x2d98, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2d98, .value=0xc6, .type=IO_READ},
        {.addr=0x2d99, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x5e, .type=IO_READ},
        {.addr=0x00cd, .value=0xc8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x71fa, .a=0x1f, .x=0xf3, .y=0x88, .sp=0x95, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x17}, {.addr=0x71fa, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x71fb, .a=0x1f, .x=0xf3, .y=0x88, .sp=0x95, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x1f}, {.addr=0x71fa, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x71fa, .value=0xc6, .type=IO_READ},
        {.addr=0x71fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x17, .type=IO_READ},
        {.addr=0x01f3, .value=0x1f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xae23, .a=0xb6, .x=0x9b, .y=0x3a, .sp=0x6b, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0xbc}, {.addr=0xae23, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xae24, .a=0xb6, .x=0x9b, .y=0x3a, .sp=0x6b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0xb6}, {.addr=0xae23, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xae23, .value=0xc6, .type=IO_READ},
        {.addr=0xae24, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0xbc, .type=IO_READ},
        {.addr=0x009b, .value=0xb6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x95fb, .a=0x95, .x=0xa2, .y=0x13, .sp=0x59, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x5c}, {.addr=0x95fb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x95fc, .a=0x95, .x=0xa2, .y=0x13, .sp=0x59, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x95}, {.addr=0x95fb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x95fb, .value=0xc6, .type=IO_READ},
        {.addr=0x95fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x5c, .type=IO_READ},
        {.addr=0x00a2, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x12fe, .a=0x82, .x=0xe6, .y=0x52, .sp=0x82, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x82}, {.addr=0x12fe, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x12ff, .a=0x82, .x=0xe6, .y=0x52, .sp=0x82, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x82}, {.addr=0x12fe, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x12fe, .value=0xc6, .type=IO_READ},
        {.addr=0x12ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x82, .type=IO_READ},
        {.addr=0x01e6, .value=0x82, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xbcdb, .a=0xae, .x=0xba, .y=0xe9, .sp=0xa5, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xc6}, {.addr=0xbcdb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbcdc, .a=0xae, .x=0xba, .y=0xe9, .sp=0xa5, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xae}, {.addr=0xbcdb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbcdb, .value=0xc6, .type=IO_READ},
        {.addr=0xbcdc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xc6, .type=IO_READ},
        {.addr=0x01ba, .value=0xae, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xc3af, .a=0xa2, .x=0x8c, .y=0xee, .sp=0xf7, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0x0e}, {.addr=0xc3af, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc3b0, .a=0xa2, .x=0x8c, .y=0xee, .sp=0xf7, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0xa2}, {.addr=0xc3af, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc3af, .value=0xc6, .type=IO_READ},
        {.addr=0xc3b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0x0e, .type=IO_READ},
        {.addr=0x008c, .value=0xa2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xe431, .a=0x6f, .x=0xcd, .y=0xf4, .sp=0x47, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x9e}, {.addr=0xe431, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe432, .a=0x6f, .x=0xcd, .y=0xf4, .sp=0x47, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x6f}, {.addr=0xe431, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe431, .value=0xc6, .type=IO_READ},
        {.addr=0xe432, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x9e, .type=IO_READ},
        {.addr=0x01cd, .value=0x6f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x7b04, .a=0x87, .x=0x9e, .y=0x78, .sp=0x18, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0xe0}, {.addr=0x7b04, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7b05, .a=0x87, .x=0x9e, .y=0x78, .sp=0x18, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0x87}, {.addr=0x7b04, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7b04, .value=0xc6, .type=IO_READ},
        {.addr=0x7b05, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0xe0, .type=IO_READ},
        {.addr=0x009e, .value=0x87, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x8106, .a=0x07, .x=0xc9, .y=0x97, .sp=0xd5, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x83}, {.addr=0x8106, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8107, .a=0x07, .x=0xc9, .y=0x97, .sp=0xd5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x07}, {.addr=0x8106, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8106, .value=0xc6, .type=IO_READ},
        {.addr=0x8107, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x83, .type=IO_READ},
        {.addr=0x01c9, .value=0x07, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x8b92, .a=0x48, .x=0x00, .y=0x34, .sp=0x8f, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x96}, {.addr=0x8b92, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8b93, .a=0x48, .x=0x00, .y=0x34, .sp=0x8f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x48}, {.addr=0x8b92, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8b92, .value=0xc6, .type=IO_READ},
        {.addr=0x8b93, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0x96, .type=IO_READ},
        {.addr=0x0000, .value=0x48, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x3452, .a=0x86, .x=0xf3, .y=0x65, .sp=0xf9, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0xef}, {.addr=0x3452, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3453, .a=0x86, .x=0xf3, .y=0x65, .sp=0xf9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x86}, {.addr=0x3452, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3452, .value=0xc6, .type=IO_READ},
        {.addr=0x3453, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xef, .type=IO_READ},
        {.addr=0x01f3, .value=0x86, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xa3fa, .a=0x1e, .x=0x75, .y=0x27, .sp=0xcf, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xed}, {.addr=0xa3fa, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa3fb, .a=0x1e, .x=0x75, .y=0x27, .sp=0xcf, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0x1e}, {.addr=0xa3fa, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa3fa, .value=0xc6, .type=IO_READ},
        {.addr=0xa3fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0xed, .type=IO_READ},
        {.addr=0x0075, .value=0x1e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xbfcf, .a=0xc1, .x=0x1f, .y=0x8d, .sp=0x1e, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x05}, {.addr=0xbfcf, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbfd0, .a=0xc1, .x=0x1f, .y=0x8d, .sp=0x1e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0xc1}, {.addr=0xbfcf, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbfcf, .value=0xc6, .type=IO_READ},
        {.addr=0xbfd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0x05, .type=IO_READ},
        {.addr=0x001f, .value=0xc1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0100) {
    const struct CPU_State initial_cpu = {.pc=0x276f, .a=0x45, .x=0x07, .y=0x6c, .sp=0x9a, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x54}, {.addr=0x276f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2770, .a=0x45, .x=0x07, .y=0x6c, .sp=0x9a, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x45}, {.addr=0x276f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x276f, .value=0xc6, .type=IO_READ},
        {.addr=0x2770, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x54, .type=IO_READ},
        {.addr=0x0007, .value=0x45, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0101) {
    const struct CPU_State initial_cpu = {.pc=0xedd1, .a=0x68, .x=0x75, .y=0x6c, .sp=0xe5, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0x40}, {.addr=0xedd1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xedd2, .a=0x68, .x=0x75, .y=0x6c, .sp=0xe5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0x68}, {.addr=0xedd1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xedd1, .value=0xc6, .type=IO_READ},
        {.addr=0xedd2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0x40, .type=IO_READ},
        {.addr=0x0075, .value=0x68, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0102) {
    const struct CPU_State initial_cpu = {.pc=0x144f, .a=0x6a, .x=0xe8, .y=0xb9, .sp=0x79, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xf2}, {.addr=0x144f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1450, .a=0x6a, .x=0xe8, .y=0xb9, .sp=0x79, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x6a}, {.addr=0x144f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x144f, .value=0xc6, .type=IO_READ},
        {.addr=0x1450, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xf2, .type=IO_READ},
        {.addr=0x01e8, .value=0x6a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0103) {
    const struct CPU_State initial_cpu = {.pc=0xcf87, .a=0x54, .x=0xdc, .y=0x97, .sp=0x6e, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x6b}, {.addr=0xcf87, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcf88, .a=0x54, .x=0xdc, .y=0x97, .sp=0x6e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x54}, {.addr=0xcf87, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcf87, .value=0xc6, .type=IO_READ},
        {.addr=0xcf88, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x6b, .type=IO_READ},
        {.addr=0x00dc, .value=0x54, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0104) {
    const struct CPU_State initial_cpu = {.pc=0xc11a, .a=0x56, .x=0x09, .y=0xf6, .sp=0x65, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x48}, {.addr=0xc11a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc11b, .a=0x56, .x=0x09, .y=0xf6, .sp=0x65, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x56}, {.addr=0xc11a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc11a, .value=0xc6, .type=IO_READ},
        {.addr=0xc11b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0x48, .type=IO_READ},
        {.addr=0x0009, .value=0x56, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0105) {
    const struct CPU_State initial_cpu = {.pc=0xa975, .a=0x07, .x=0x32, .y=0xa6, .sp=0x2c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xd8}, {.addr=0xa975, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa976, .a=0x07, .x=0x32, .y=0xa6, .sp=0x2c, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x07}, {.addr=0xa975, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa975, .value=0xc6, .type=IO_READ},
        {.addr=0xa976, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xd8, .type=IO_READ},
        {.addr=0x0132, .value=0x07, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0107) {
    const struct CPU_State initial_cpu = {.pc=0x7af3, .a=0xf2, .x=0xdb, .y=0xec, .sp=0x78, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xe7}, {.addr=0x7af3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7af4, .a=0xf2, .x=0xdb, .y=0xec, .sp=0x78, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xf2}, {.addr=0x7af3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7af3, .value=0xc6, .type=IO_READ},
        {.addr=0x7af4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0xe7, .type=IO_READ},
        {.addr=0x01db, .value=0xf2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0108) {
    const struct CPU_State initial_cpu = {.pc=0x26d8, .a=0x1b, .x=0x45, .y=0xc3, .sp=0xa3, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x84}, {.addr=0x26d8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x26d9, .a=0x1b, .x=0x45, .y=0xc3, .sp=0xa3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x1b}, {.addr=0x26d8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x26d8, .value=0xc6, .type=IO_READ},
        {.addr=0x26d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x84, .type=IO_READ},
        {.addr=0x0145, .value=0x1b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0109) {
    const struct CPU_State initial_cpu = {.pc=0x996c, .a=0xf9, .x=0x7d, .y=0xe2, .sp=0xad, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0x49}, {.addr=0x996c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x996d, .a=0xf9, .x=0x7d, .y=0xe2, .sp=0xad, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0xf9}, {.addr=0x996c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x996c, .value=0xc6, .type=IO_READ},
        {.addr=0x996d, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0x49, .type=IO_READ},
        {.addr=0x007d, .value=0xf9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_010A) {
    const struct CPU_State initial_cpu = {.pc=0x946c, .a=0xc0, .x=0xb7, .y=0xc5, .sp=0x0b, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0xd4}, {.addr=0x946c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x946d, .a=0xc0, .x=0xb7, .y=0xc5, .sp=0x0b, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0xc0}, {.addr=0x946c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x946c, .value=0xc6, .type=IO_READ},
        {.addr=0x946d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0xd4, .type=IO_READ},
        {.addr=0x00b7, .value=0xc0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_010B) {
    const struct CPU_State initial_cpu = {.pc=0x3816, .a=0xac, .x=0x1c, .y=0xe2, .sp=0x35, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x38}, {.addr=0x3816, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3817, .a=0xac, .x=0x1c, .y=0xe2, .sp=0x35, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0xac}, {.addr=0x3816, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3816, .value=0xc6, .type=IO_READ},
        {.addr=0x3817, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x38, .type=IO_READ},
        {.addr=0x001c, .value=0xac, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_010C) {
    const struct CPU_State initial_cpu = {.pc=0xe926, .a=0x01, .x=0xbf, .y=0xfc, .sp=0xe6, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x14}, {.addr=0xe926, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe927, .a=0x01, .x=0xbf, .y=0xfc, .sp=0xe6, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x01}, {.addr=0xe926, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe926, .value=0xc6, .type=IO_READ},
        {.addr=0xe927, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x14, .type=IO_READ},
        {.addr=0x00bf, .value=0x01, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_010D) {
    const struct CPU_State initial_cpu = {.pc=0x0581, .a=0x81, .x=0x4f, .y=0x67, .sp=0x8c, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0xd7}, {.addr=0x0581, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0582, .a=0x81, .x=0x4f, .y=0x67, .sp=0x8c, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0x81}, {.addr=0x0581, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0581, .value=0xc6, .type=IO_READ},
        {.addr=0x0582, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0xd7, .type=IO_READ},
        {.addr=0x004f, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_010E) {
    const struct CPU_State initial_cpu = {.pc=0x4dbe, .a=0x9a, .x=0x3b, .y=0x3c, .sp=0x4c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x76}, {.addr=0x4dbe, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4dbf, .a=0x9a, .x=0x3b, .y=0x3c, .sp=0x4c, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x9a}, {.addr=0x4dbe, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4dbe, .value=0xc6, .type=IO_READ},
        {.addr=0x4dbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x76, .type=IO_READ},
        {.addr=0x003b, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_010F) {
    const struct CPU_State initial_cpu = {.pc=0x2bc8, .a=0x1d, .x=0xd6, .y=0x82, .sp=0x02, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x89}, {.addr=0x2bc8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2bc9, .a=0x1d, .x=0xd6, .y=0x82, .sp=0x02, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x1d}, {.addr=0x2bc8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2bc8, .value=0xc6, .type=IO_READ},
        {.addr=0x2bc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0x89, .type=IO_READ},
        {.addr=0x00d6, .value=0x1d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0110) {
    const struct CPU_State initial_cpu = {.pc=0x35b5, .a=0x2c, .x=0x11, .y=0xa1, .sp=0x67, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0xdb}, {.addr=0x35b5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x35b6, .a=0x2c, .x=0x11, .y=0xa1, .sp=0x67, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x2c}, {.addr=0x35b5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x35b5, .value=0xc6, .type=IO_READ},
        {.addr=0x35b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0xdb, .type=IO_READ},
        {.addr=0x0011, .value=0x2c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0111) {
    const struct CPU_State initial_cpu = {.pc=0x5d5a, .a=0x61, .x=0x2f, .y=0x85, .sp=0x62, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x7f}, {.addr=0x5d5a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5d5b, .a=0x61, .x=0x2f, .y=0x85, .sp=0x62, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x61}, {.addr=0x5d5a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5d5a, .value=0xc6, .type=IO_READ},
        {.addr=0x5d5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x7f, .type=IO_READ},
        {.addr=0x012f, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0112) {
    const struct CPU_State initial_cpu = {.pc=0xcc23, .a=0xe7, .x=0x77, .y=0x87, .sp=0x42, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x99}, {.addr=0xcc23, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcc24, .a=0xe7, .x=0x77, .y=0x87, .sp=0x42, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0xe7}, {.addr=0xcc23, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcc23, .value=0xc6, .type=IO_READ},
        {.addr=0xcc24, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x99, .type=IO_READ},
        {.addr=0x0077, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0113) {
    const struct CPU_State initial_cpu = {.pc=0x48d1, .a=0xf2, .x=0x50, .y=0x93, .sp=0xc5, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x19}, {.addr=0x48d1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x48d2, .a=0xf2, .x=0x50, .y=0x93, .sp=0xc5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0xf2}, {.addr=0x48d1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x48d1, .value=0xc6, .type=IO_READ},
        {.addr=0x48d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x19, .type=IO_READ},
        {.addr=0x0050, .value=0xf2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0114) {
    const struct CPU_State initial_cpu = {.pc=0x610f, .a=0x9d, .x=0xed, .y=0xc7, .sp=0x00, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x61}, {.addr=0x610f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6110, .a=0x9d, .x=0xed, .y=0xc7, .sp=0x00, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x9d}, {.addr=0x610f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x610f, .value=0xc6, .type=IO_READ},
        {.addr=0x6110, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x61, .type=IO_READ},
        {.addr=0x00ed, .value=0x9d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0115) {
    const struct CPU_State initial_cpu = {.pc=0x6cc0, .a=0xbc, .x=0xca, .y=0x50, .sp=0xb4, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x06}, {.addr=0x6cc0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6cc1, .a=0xbc, .x=0xca, .y=0x50, .sp=0xb4, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xbc}, {.addr=0x6cc0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6cc0, .value=0xc6, .type=IO_READ},
        {.addr=0x6cc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x06, .type=IO_READ},
        {.addr=0x01ca, .value=0xbc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0116) {
    const struct CPU_State initial_cpu = {.pc=0x7a35, .a=0xa6, .x=0xc1, .y=0x5d, .sp=0x37, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x31}, {.addr=0x7a35, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7a36, .a=0xa6, .x=0xc1, .y=0x5d, .sp=0x37, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xa6}, {.addr=0x7a35, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7a35, .value=0xc6, .type=IO_READ},
        {.addr=0x7a36, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x31, .type=IO_READ},
        {.addr=0x01c1, .value=0xa6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0117) {
    const struct CPU_State initial_cpu = {.pc=0x2b0c, .a=0xb5, .x=0x9c, .y=0xe7, .sp=0xa6, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x1c}, {.addr=0x2b0c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2b0d, .a=0xb5, .x=0x9c, .y=0xe7, .sp=0xa6, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xb5}, {.addr=0x2b0c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2b0c, .value=0xc6, .type=IO_READ},
        {.addr=0x2b0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x1c, .type=IO_READ},
        {.addr=0x019c, .value=0xb5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0118) {
    const struct CPU_State initial_cpu = {.pc=0xe5df, .a=0x5a, .x=0xac, .y=0xb3, .sp=0x60, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x15}, {.addr=0xe5df, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe5e0, .a=0x5a, .x=0xac, .y=0xb3, .sp=0x60, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x5a}, {.addr=0xe5df, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe5df, .value=0xc6, .type=IO_READ},
        {.addr=0xe5e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x15, .type=IO_READ},
        {.addr=0x00ac, .value=0x5a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0119) {
    const struct CPU_State initial_cpu = {.pc=0xf7c0, .a=0x74, .x=0x44, .y=0xff, .sp=0x0c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0x52}, {.addr=0xf7c0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf7c1, .a=0x74, .x=0x44, .y=0xff, .sp=0x0c, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0x74}, {.addr=0xf7c0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf7c0, .value=0xc6, .type=IO_READ},
        {.addr=0xf7c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0x52, .type=IO_READ},
        {.addr=0x0044, .value=0x74, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_011A) {
    const struct CPU_State initial_cpu = {.pc=0xddb7, .a=0x07, .x=0xb4, .y=0xdc, .sp=0x3a, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0x14}, {.addr=0xddb7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xddb8, .a=0x07, .x=0xb4, .y=0xdc, .sp=0x3a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0x07}, {.addr=0xddb7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xddb7, .value=0xc6, .type=IO_READ},
        {.addr=0xddb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0x14, .type=IO_READ},
        {.addr=0x00b4, .value=0x07, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_011B) {
    const struct CPU_State initial_cpu = {.pc=0x7991, .a=0xce, .x=0x4b, .y=0x0b, .sp=0x1e, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x8f}, {.addr=0x7991, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7992, .a=0xce, .x=0x4b, .y=0x0b, .sp=0x1e, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xce}, {.addr=0x7991, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7991, .value=0xc6, .type=IO_READ},
        {.addr=0x7992, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x8f, .type=IO_READ},
        {.addr=0x014b, .value=0xce, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_011D) {
    const struct CPU_State initial_cpu = {.pc=0x4e60, .a=0xb4, .x=0x0a, .y=0xd8, .sp=0x60, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xef}, {.addr=0x4e60, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4e61, .a=0xb4, .x=0x0a, .y=0xd8, .sp=0x60, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xb4}, {.addr=0x4e60, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4e60, .value=0xc6, .type=IO_READ},
        {.addr=0x4e61, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xef, .type=IO_READ},
        {.addr=0x010a, .value=0xb4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_011E) {
    const struct CPU_State initial_cpu = {.pc=0x489f, .a=0x43, .x=0xfa, .y=0x69, .sp=0xa5, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x42}, {.addr=0x489f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x48a0, .a=0x43, .x=0xfa, .y=0x69, .sp=0xa5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x43}, {.addr=0x489f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x489f, .value=0xc6, .type=IO_READ},
        {.addr=0x48a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x42, .type=IO_READ},
        {.addr=0x01fa, .value=0x43, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_011F) {
    const struct CPU_State initial_cpu = {.pc=0xd54d, .a=0x43, .x=0x94, .y=0x50, .sp=0xa9, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x89}, {.addr=0xd54d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd54e, .a=0x43, .x=0x94, .y=0x50, .sp=0xa9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x43}, {.addr=0xd54d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd54d, .value=0xc6, .type=IO_READ},
        {.addr=0xd54e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x89, .type=IO_READ},
        {.addr=0x0094, .value=0x43, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0120) {
    const struct CPU_State initial_cpu = {.pc=0x84b6, .a=0x1b, .x=0xf0, .y=0x8e, .sp=0xf9, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xf1}, {.addr=0x84b6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x84b7, .a=0x1b, .x=0xf0, .y=0x8e, .sp=0xf9, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x1b}, {.addr=0x84b6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x84b6, .value=0xc6, .type=IO_READ},
        {.addr=0x84b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xf1, .type=IO_READ},
        {.addr=0x01f0, .value=0x1b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0122) {
    const struct CPU_State initial_cpu = {.pc=0xda67, .a=0x43, .x=0xed, .y=0x25, .sp=0xa7, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x2b}, {.addr=0xda67, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xda68, .a=0x43, .x=0xed, .y=0x25, .sp=0xa7, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x43}, {.addr=0xda67, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xda67, .value=0xc6, .type=IO_READ},
        {.addr=0xda68, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x2b, .type=IO_READ},
        {.addr=0x01ed, .value=0x43, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0123) {
    const struct CPU_State initial_cpu = {.pc=0xbd84, .a=0x3c, .x=0x64, .y=0xc9, .sp=0x77, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x53}, {.addr=0xbd84, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbd85, .a=0x3c, .x=0x64, .y=0xc9, .sp=0x77, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x3c}, {.addr=0xbd84, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbd84, .value=0xc6, .type=IO_READ},
        {.addr=0xbd85, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0x53, .type=IO_READ},
        {.addr=0x0064, .value=0x3c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0124) {
    const struct CPU_State initial_cpu = {.pc=0x1b84, .a=0xe7, .x=0x71, .y=0x3b, .sp=0x08, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x51}, {.addr=0x1b84, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1b85, .a=0xe7, .x=0x71, .y=0x3b, .sp=0x08, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xe7}, {.addr=0x1b84, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1b84, .value=0xc6, .type=IO_READ},
        {.addr=0x1b85, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x51, .type=IO_READ},
        {.addr=0x0171, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0125) {
    const struct CPU_State initial_cpu = {.pc=0x98e3, .a=0x01, .x=0x6a, .y=0x99, .sp=0x8a, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xa3}, {.addr=0x98e3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x98e4, .a=0x01, .x=0x6a, .y=0x99, .sp=0x8a, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x01}, {.addr=0x98e3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x98e3, .value=0xc6, .type=IO_READ},
        {.addr=0x98e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xa3, .type=IO_READ},
        {.addr=0x016a, .value=0x01, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0126) {
    const struct CPU_State initial_cpu = {.pc=0x8c87, .a=0xed, .x=0x41, .y=0xd0, .sp=0x5c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0xd2}, {.addr=0x8c87, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8c88, .a=0xed, .x=0x41, .y=0xd0, .sp=0x5c, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0xed}, {.addr=0x8c87, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8c87, .value=0xc6, .type=IO_READ},
        {.addr=0x8c88, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0xd2, .type=IO_READ},
        {.addr=0x0041, .value=0xed, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0127) {
    const struct CPU_State initial_cpu = {.pc=0x0f90, .a=0x91, .x=0xa8, .y=0xac, .sp=0xfd, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x27}, {.addr=0x0f90, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0f91, .a=0x91, .x=0xa8, .y=0xac, .sp=0xfd, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x91}, {.addr=0x0f90, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0f90, .value=0xc6, .type=IO_READ},
        {.addr=0x0f91, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x27, .type=IO_READ},
        {.addr=0x01a8, .value=0x91, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0128) {
    const struct CPU_State initial_cpu = {.pc=0x3fbe, .a=0x13, .x=0x4f, .y=0xe4, .sp=0xfa, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0x75}, {.addr=0x3fbe, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3fbf, .a=0x13, .x=0x4f, .y=0xe4, .sp=0xfa, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0x13}, {.addr=0x3fbe, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3fbe, .value=0xc6, .type=IO_READ},
        {.addr=0x3fbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0x75, .type=IO_READ},
        {.addr=0x004f, .value=0x13, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0129) {
    const struct CPU_State initial_cpu = {.pc=0x9295, .a=0x8e, .x=0xff, .y=0xa6, .sp=0x32, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x8b}, {.addr=0x9295, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9296, .a=0x8e, .x=0xff, .y=0xa6, .sp=0x32, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x8e}, {.addr=0x9295, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9295, .value=0xc6, .type=IO_READ},
        {.addr=0x9296, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x8b, .type=IO_READ},
        {.addr=0x01ff, .value=0x8e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_012A) {
    const struct CPU_State initial_cpu = {.pc=0x38a7, .a=0x30, .x=0x3f, .y=0xc3, .sp=0xac, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x17}, {.addr=0x38a7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x38a8, .a=0x30, .x=0x3f, .y=0xc3, .sp=0xac, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x30}, {.addr=0x38a7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x38a7, .value=0xc6, .type=IO_READ},
        {.addr=0x38a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x17, .type=IO_READ},
        {.addr=0x013f, .value=0x30, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_012B) {
    const struct CPU_State initial_cpu = {.pc=0xccff, .a=0xa8, .x=0x2f, .y=0x85, .sp=0x46, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x4d}, {.addr=0xccff, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcd00, .a=0xa8, .x=0x2f, .y=0x85, .sp=0x46, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xa8}, {.addr=0xccff, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xccff, .value=0xc6, .type=IO_READ},
        {.addr=0xcd00, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x4d, .type=IO_READ},
        {.addr=0x012f, .value=0xa8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_012C) {
    const struct CPU_State initial_cpu = {.pc=0xbd0e, .a=0xc9, .x=0x11, .y=0x6a, .sp=0x1b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x43}, {.addr=0xbd0e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbd0f, .a=0xc9, .x=0x11, .y=0x6a, .sp=0x1b, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0xc9}, {.addr=0xbd0e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbd0e, .value=0xc6, .type=IO_READ},
        {.addr=0xbd0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x43, .type=IO_READ},
        {.addr=0x0011, .value=0xc9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_012D) {
    const struct CPU_State initial_cpu = {.pc=0x23da, .a=0x3d, .x=0xa2, .y=0x2c, .sp=0xb5, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x5d}, {.addr=0x23da, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x23db, .a=0x3d, .x=0xa2, .y=0x2c, .sp=0xb5, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x3d}, {.addr=0x23da, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x23da, .value=0xc6, .type=IO_READ},
        {.addr=0x23db, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x5d, .type=IO_READ},
        {.addr=0x00a2, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_012E) {
    const struct CPU_State initial_cpu = {.pc=0x124a, .a=0x28, .x=0x00, .y=0xe8, .sp=0x18, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x78}, {.addr=0x124a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x124b, .a=0x28, .x=0x00, .y=0xe8, .sp=0x18, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x28}, {.addr=0x124a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x124a, .value=0xc6, .type=IO_READ},
        {.addr=0x124b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0x78, .type=IO_READ},
        {.addr=0x0000, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_012F) {
    const struct CPU_State initial_cpu = {.pc=0x9b87, .a=0xbc, .x=0xea, .y=0x35, .sp=0x54, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x25}, {.addr=0x9b87, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9b88, .a=0xbc, .x=0xea, .y=0x35, .sp=0x54, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xbc}, {.addr=0x9b87, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9b87, .value=0xc6, .type=IO_READ},
        {.addr=0x9b88, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x25, .type=IO_READ},
        {.addr=0x01ea, .value=0xbc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0130) {
    const struct CPU_State initial_cpu = {.pc=0xd846, .a=0xe7, .x=0x80, .y=0x9d, .sp=0xfa, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x03}, {.addr=0xd846, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd847, .a=0xe7, .x=0x80, .y=0x9d, .sp=0xfa, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xe7}, {.addr=0xd846, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd846, .value=0xc6, .type=IO_READ},
        {.addr=0xd847, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x03, .type=IO_READ},
        {.addr=0x0180, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0131) {
    const struct CPU_State initial_cpu = {.pc=0x2425, .a=0xa2, .x=0x87, .y=0xdb, .sp=0xb3, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xc8}, {.addr=0x2425, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2426, .a=0xa2, .x=0x87, .y=0xdb, .sp=0xb3, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xa2}, {.addr=0x2425, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2425, .value=0xc6, .type=IO_READ},
        {.addr=0x2426, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xc8, .type=IO_READ},
        {.addr=0x0087, .value=0xa2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0132) {
    const struct CPU_State initial_cpu = {.pc=0xfa39, .a=0xae, .x=0x92, .y=0x1b, .sp=0x14, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x2b}, {.addr=0xfa39, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfa3a, .a=0xae, .x=0x92, .y=0x1b, .sp=0x14, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xae}, {.addr=0xfa39, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfa39, .value=0xc6, .type=IO_READ},
        {.addr=0xfa3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x2b, .type=IO_READ},
        {.addr=0x0192, .value=0xae, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0133) {
    const struct CPU_State initial_cpu = {.pc=0xb692, .a=0xd0, .x=0x46, .y=0x58, .sp=0xb2, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0xc0}, {.addr=0xb692, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb693, .a=0xd0, .x=0x46, .y=0x58, .sp=0xb2, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xd0}, {.addr=0xb692, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb692, .value=0xc6, .type=IO_READ},
        {.addr=0xb693, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0xc0, .type=IO_READ},
        {.addr=0x0146, .value=0xd0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0134) {
    const struct CPU_State initial_cpu = {.pc=0x4587, .a=0x85, .x=0x95, .y=0xc7, .sp=0x14, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0xf6}, {.addr=0x4587, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4588, .a=0x85, .x=0x95, .y=0xc7, .sp=0x14, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x85}, {.addr=0x4587, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4587, .value=0xc6, .type=IO_READ},
        {.addr=0x4588, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0xf6, .type=IO_READ},
        {.addr=0x0095, .value=0x85, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0136) {
    const struct CPU_State initial_cpu = {.pc=0x188e, .a=0xed, .x=0x13, .y=0x38, .sp=0x8e, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xa2}, {.addr=0x188e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x188f, .a=0xed, .x=0x13, .y=0x38, .sp=0x8e, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xed}, {.addr=0x188e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x188e, .value=0xc6, .type=IO_READ},
        {.addr=0x188f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xa2, .type=IO_READ},
        {.addr=0x0113, .value=0xed, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0137) {
    const struct CPU_State initial_cpu = {.pc=0xde2a, .a=0x92, .x=0x83, .y=0x12, .sp=0x8c, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x5f}, {.addr=0xde2a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xde2b, .a=0x92, .x=0x83, .y=0x12, .sp=0x8c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x92}, {.addr=0xde2a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xde2a, .value=0xc6, .type=IO_READ},
        {.addr=0xde2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x5f, .type=IO_READ},
        {.addr=0x0183, .value=0x92, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0138) {
    const struct CPU_State initial_cpu = {.pc=0x3594, .a=0x4e, .x=0x89, .y=0x0e, .sp=0x26, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0xb4}, {.addr=0x3594, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3595, .a=0x4e, .x=0x89, .y=0x0e, .sp=0x26, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0x4e}, {.addr=0x3594, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3594, .value=0xc6, .type=IO_READ},
        {.addr=0x3595, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0xb4, .type=IO_READ},
        {.addr=0x0089, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0139) {
    const struct CPU_State initial_cpu = {.pc=0x8d46, .a=0x66, .x=0x9a, .y=0xa6, .sp=0x72, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0xa3}, {.addr=0x8d46, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8d47, .a=0x66, .x=0x9a, .y=0xa6, .sp=0x72, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x66}, {.addr=0x8d46, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8d46, .value=0xc6, .type=IO_READ},
        {.addr=0x8d47, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0xa3, .type=IO_READ},
        {.addr=0x009a, .value=0x66, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_013A) {
    const struct CPU_State initial_cpu = {.pc=0xc740, .a=0x4f, .x=0x12, .y=0x98, .sp=0xaa, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x10}, {.addr=0xc740, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc741, .a=0x4f, .x=0x12, .y=0x98, .sp=0xaa, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x4f}, {.addr=0xc740, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc740, .value=0xc6, .type=IO_READ},
        {.addr=0xc741, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x10, .type=IO_READ},
        {.addr=0x0112, .value=0x4f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_013B) {
    const struct CPU_State initial_cpu = {.pc=0xd40b, .a=0x3c, .x=0x51, .y=0xdf, .sp=0xe6, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0xa8}, {.addr=0xd40b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd40c, .a=0x3c, .x=0x51, .y=0xdf, .sp=0xe6, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x3c}, {.addr=0xd40b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd40b, .value=0xc6, .type=IO_READ},
        {.addr=0xd40c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0xa8, .type=IO_READ},
        {.addr=0x0051, .value=0x3c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_013C) {
    const struct CPU_State initial_cpu = {.pc=0xb8b2, .a=0xfc, .x=0xea, .y=0x62, .sp=0x19, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0xf9}, {.addr=0xb8b2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb8b3, .a=0xfc, .x=0xea, .y=0x62, .sp=0x19, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0xfc}, {.addr=0xb8b2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb8b2, .value=0xc6, .type=IO_READ},
        {.addr=0xb8b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0xf9, .type=IO_READ},
        {.addr=0x00ea, .value=0xfc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_013E) {
    const struct CPU_State initial_cpu = {.pc=0x331b, .a=0x1f, .x=0x8e, .y=0xa9, .sp=0x4f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x68}, {.addr=0x331b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x331c, .a=0x1f, .x=0x8e, .y=0xa9, .sp=0x4f, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x1f}, {.addr=0x331b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x331b, .value=0xc6, .type=IO_READ},
        {.addr=0x331c, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x68, .type=IO_READ},
        {.addr=0x018e, .value=0x1f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_013F) {
    const struct CPU_State initial_cpu = {.pc=0x2284, .a=0xbe, .x=0x77, .y=0xae, .sp=0xc6, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0xd1}, {.addr=0x2284, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2285, .a=0xbe, .x=0x77, .y=0xae, .sp=0xc6, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0xbe}, {.addr=0x2284, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2284, .value=0xc6, .type=IO_READ},
        {.addr=0x2285, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0xd1, .type=IO_READ},
        {.addr=0x0077, .value=0xbe, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0140) {
    const struct CPU_State initial_cpu = {.pc=0xfaab, .a=0x9f, .x=0x39, .y=0x3f, .sp=0xae, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x64}, {.addr=0xfaab, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfaac, .a=0x9f, .x=0x39, .y=0x3f, .sp=0xae, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x9f}, {.addr=0xfaab, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfaab, .value=0xc6, .type=IO_READ},
        {.addr=0xfaac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x64, .type=IO_READ},
        {.addr=0x0039, .value=0x9f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0141) {
    const struct CPU_State initial_cpu = {.pc=0xe3d5, .a=0xa7, .x=0xc9, .y=0xe9, .sp=0x4f, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x35}, {.addr=0xe3d5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe3d6, .a=0xa7, .x=0xc9, .y=0xe9, .sp=0x4f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0xa7}, {.addr=0xe3d5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe3d5, .value=0xc6, .type=IO_READ},
        {.addr=0xe3d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x35, .type=IO_READ},
        {.addr=0x00c9, .value=0xa7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0142) {
    const struct CPU_State initial_cpu = {.pc=0x3d94, .a=0xc0, .x=0xb7, .y=0x51, .sp=0xbf, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0xf4}, {.addr=0x3d94, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3d95, .a=0xc0, .x=0xb7, .y=0x51, .sp=0xbf, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xc0}, {.addr=0x3d94, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3d94, .value=0xc6, .type=IO_READ},
        {.addr=0x3d95, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xf4, .type=IO_READ},
        {.addr=0x01b7, .value=0xc0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0143) {
    const struct CPU_State initial_cpu = {.pc=0x6cb9, .a=0x9c, .x=0xad, .y=0xe7, .sp=0x3c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x9c}, {.addr=0x6cb9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6cba, .a=0x9c, .x=0xad, .y=0xe7, .sp=0x3c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x9c}, {.addr=0x6cb9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6cb9, .value=0xc6, .type=IO_READ},
        {.addr=0x6cba, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x9c, .type=IO_READ},
        {.addr=0x01ad, .value=0x9c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0144) {
    const struct CPU_State initial_cpu = {.pc=0x37b1, .a=0x1f, .x=0x13, .y=0x54, .sp=0x85, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0x72}, {.addr=0x37b1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x37b2, .a=0x1f, .x=0x13, .y=0x54, .sp=0x85, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0x1f}, {.addr=0x37b1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x37b1, .value=0xc6, .type=IO_READ},
        {.addr=0x37b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0x72, .type=IO_READ},
        {.addr=0x0013, .value=0x1f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0145) {
    const struct CPU_State initial_cpu = {.pc=0xe3bf, .a=0x59, .x=0x81, .y=0x25, .sp=0xac, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xbc}, {.addr=0xe3bf, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe3c0, .a=0x59, .x=0x81, .y=0x25, .sp=0xac, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x59}, {.addr=0xe3bf, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe3bf, .value=0xc6, .type=IO_READ},
        {.addr=0xe3c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xbc, .type=IO_READ},
        {.addr=0x0181, .value=0x59, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0146) {
    const struct CPU_State initial_cpu = {.pc=0x5c33, .a=0x90, .x=0x57, .y=0x07, .sp=0x9c, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x44}, {.addr=0x5c33, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5c34, .a=0x90, .x=0x57, .y=0x07, .sp=0x9c, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x90}, {.addr=0x5c33, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5c33, .value=0xc6, .type=IO_READ},
        {.addr=0x5c34, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x44, .type=IO_READ},
        {.addr=0x0157, .value=0x90, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0147) {
    const struct CPU_State initial_cpu = {.pc=0x6bd5, .a=0x64, .x=0x55, .y=0x8a, .sp=0xe3, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x9b}, {.addr=0x6bd5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6bd6, .a=0x64, .x=0x55, .y=0x8a, .sp=0xe3, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0x64}, {.addr=0x6bd5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6bd5, .value=0xc6, .type=IO_READ},
        {.addr=0x6bd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0x9b, .type=IO_READ},
        {.addr=0x0055, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0148) {
    const struct CPU_State initial_cpu = {.pc=0x0615, .a=0xaf, .x=0xb8, .y=0xd0, .sp=0x34, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x80}, {.addr=0x0615, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0616, .a=0xaf, .x=0xb8, .y=0xd0, .sp=0x34, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xaf}, {.addr=0x0615, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0615, .value=0xc6, .type=IO_READ},
        {.addr=0x0616, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x80, .type=IO_READ},
        {.addr=0x01b8, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0149) {
    const struct CPU_State initial_cpu = {.pc=0xbd4b, .a=0x15, .x=0x2e, .y=0x7d, .sp=0xad, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0x14}, {.addr=0xbd4b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbd4c, .a=0x15, .x=0x2e, .y=0x7d, .sp=0xad, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0x15}, {.addr=0xbd4b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbd4b, .value=0xc6, .type=IO_READ},
        {.addr=0xbd4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0x14, .type=IO_READ},
        {.addr=0x002e, .value=0x15, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_014A) {
    const struct CPU_State initial_cpu = {.pc=0xe846, .a=0x72, .x=0x85, .y=0xad, .sp=0x8b, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x2c}, {.addr=0xe846, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe847, .a=0x72, .x=0x85, .y=0xad, .sp=0x8b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x72}, {.addr=0xe846, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe846, .value=0xc6, .type=IO_READ},
        {.addr=0xe847, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x2c, .type=IO_READ},
        {.addr=0x0185, .value=0x72, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_014B) {
    const struct CPU_State initial_cpu = {.pc=0x3fb1, .a=0xbb, .x=0x4e, .y=0x40, .sp=0x40, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xa5}, {.addr=0x3fb1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3fb2, .a=0xbb, .x=0x4e, .y=0x40, .sp=0x40, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xbb}, {.addr=0x3fb1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3fb1, .value=0xc6, .type=IO_READ},
        {.addr=0x3fb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xa5, .type=IO_READ},
        {.addr=0x014e, .value=0xbb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_014C) {
    const struct CPU_State initial_cpu = {.pc=0x3623, .a=0x06, .x=0x61, .y=0x50, .sp=0x55, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xbb}, {.addr=0x3623, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3624, .a=0x06, .x=0x61, .y=0x50, .sp=0x55, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x06}, {.addr=0x3623, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3623, .value=0xc6, .type=IO_READ},
        {.addr=0x3624, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xbb, .type=IO_READ},
        {.addr=0x0161, .value=0x06, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_014D) {
    const struct CPU_State initial_cpu = {.pc=0xf1e1, .a=0xe2, .x=0x81, .y=0x43, .sp=0xe4, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x87}, {.addr=0xf1e1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf1e2, .a=0xe2, .x=0x81, .y=0x43, .sp=0xe4, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0xe2}, {.addr=0xf1e1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf1e1, .value=0xc6, .type=IO_READ},
        {.addr=0xf1e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x87, .type=IO_READ},
        {.addr=0x0081, .value=0xe2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_014E) {
    const struct CPU_State initial_cpu = {.pc=0x2793, .a=0xc0, .x=0xaa, .y=0xd8, .sp=0xc4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x90}, {.addr=0x2793, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2794, .a=0xc0, .x=0xaa, .y=0xd8, .sp=0xc4, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xc0}, {.addr=0x2793, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2793, .value=0xc6, .type=IO_READ},
        {.addr=0x2794, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x90, .type=IO_READ},
        {.addr=0x01aa, .value=0xc0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_014F) {
    const struct CPU_State initial_cpu = {.pc=0x61ad, .a=0x9e, .x=0xcb, .y=0xa3, .sp=0x47, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x85}, {.addr=0x61ad, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x61ae, .a=0x9e, .x=0xcb, .y=0xa3, .sp=0x47, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0x9e}, {.addr=0x61ad, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x61ad, .value=0xc6, .type=IO_READ},
        {.addr=0x61ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0x85, .type=IO_READ},
        {.addr=0x00cb, .value=0x9e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0150) {
    const struct CPU_State initial_cpu = {.pc=0xb5ff, .a=0x02, .x=0x43, .y=0xe7, .sp=0xc0, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x78}, {.addr=0xb5ff, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb600, .a=0x02, .x=0x43, .y=0xe7, .sp=0xc0, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x02}, {.addr=0xb5ff, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb5ff, .value=0xc6, .type=IO_READ},
        {.addr=0xb600, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x78, .type=IO_READ},
        {.addr=0x0043, .value=0x02, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0151) {
    const struct CPU_State initial_cpu = {.pc=0xf55b, .a=0x3f, .x=0xa2, .y=0xda, .sp=0x8d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x1b}, {.addr=0xf55b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf55c, .a=0x3f, .x=0xa2, .y=0xda, .sp=0x8d, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x3f}, {.addr=0xf55b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf55b, .value=0xc6, .type=IO_READ},
        {.addr=0xf55c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x1b, .type=IO_READ},
        {.addr=0x00a2, .value=0x3f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0152) {
    const struct CPU_State initial_cpu = {.pc=0x6b03, .a=0xcd, .x=0x12, .y=0x60, .sp=0x7e, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0x25}, {.addr=0x6b03, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6b04, .a=0xcd, .x=0x12, .y=0x60, .sp=0x7e, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0xcd}, {.addr=0x6b03, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6b03, .value=0xc6, .type=IO_READ},
        {.addr=0x6b04, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0x25, .type=IO_READ},
        {.addr=0x0012, .value=0xcd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0153) {
    const struct CPU_State initial_cpu = {.pc=0x7dfc, .a=0xdf, .x=0x53, .y=0x04, .sp=0xec, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xe8}, {.addr=0x7dfc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7dfd, .a=0xdf, .x=0x53, .y=0x04, .sp=0xec, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xdf}, {.addr=0x7dfc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7dfc, .value=0xc6, .type=IO_READ},
        {.addr=0x7dfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0xe8, .type=IO_READ},
        {.addr=0x0153, .value=0xdf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0154) {
    const struct CPU_State initial_cpu = {.pc=0x53bb, .a=0x24, .x=0x22, .y=0x78, .sp=0x3b, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0xc7}, {.addr=0x53bb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x53bc, .a=0x24, .x=0x22, .y=0x78, .sp=0x3b, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x24}, {.addr=0x53bb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x53bb, .value=0xc6, .type=IO_READ},
        {.addr=0x53bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xc7, .type=IO_READ},
        {.addr=0x0122, .value=0x24, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0155) {
    const struct CPU_State initial_cpu = {.pc=0x9958, .a=0x2d, .x=0x4f, .y=0x63, .sp=0x50, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x66}, {.addr=0x9958, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9959, .a=0x2d, .x=0x4f, .y=0x63, .sp=0x50, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x2d}, {.addr=0x9958, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9958, .value=0xc6, .type=IO_READ},
        {.addr=0x9959, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x66, .type=IO_READ},
        {.addr=0x014f, .value=0x2d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0156) {
    const struct CPU_State initial_cpu = {.pc=0xad49, .a=0xcf, .x=0xcb, .y=0xa0, .sp=0x1e, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x29}, {.addr=0xad49, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xad4a, .a=0xcf, .x=0xcb, .y=0xa0, .sp=0x1e, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xcf}, {.addr=0xad49, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xad49, .value=0xc6, .type=IO_READ},
        {.addr=0xad4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x29, .type=IO_READ},
        {.addr=0x01cb, .value=0xcf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0157) {
    const struct CPU_State initial_cpu = {.pc=0xf98a, .a=0x55, .x=0x90, .y=0xab, .sp=0x8e, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x41}, {.addr=0xf98a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf98b, .a=0x55, .x=0x90, .y=0xab, .sp=0x8e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x55}, {.addr=0xf98a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf98a, .value=0xc6, .type=IO_READ},
        {.addr=0xf98b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x41, .type=IO_READ},
        {.addr=0x0090, .value=0x55, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0158) {
    const struct CPU_State initial_cpu = {.pc=0x0154, .a=0x82, .x=0xd0, .y=0x0b, .sp=0xb4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xf4}, {.addr=0x0154, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0155, .a=0x82, .x=0xd0, .y=0x0b, .sp=0xb4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0x82}, {.addr=0x0154, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0154, .value=0xc6, .type=IO_READ},
        {.addr=0x0155, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xf4, .type=IO_READ},
        {.addr=0x00d0, .value=0x82, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0159) {
    const struct CPU_State initial_cpu = {.pc=0x565c, .a=0xf2, .x=0xfc, .y=0x32, .sp=0x3e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x81}, {.addr=0x565c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x565d, .a=0xf2, .x=0xfc, .y=0x32, .sp=0x3e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xf2}, {.addr=0x565c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x565c, .value=0xc6, .type=IO_READ},
        {.addr=0x565d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x81, .type=IO_READ},
        {.addr=0x01fc, .value=0xf2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_015A) {
    const struct CPU_State initial_cpu = {.pc=0xb91a, .a=0x2b, .x=0xf1, .y=0x8a, .sp=0xd9, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x61}, {.addr=0xb91a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb91b, .a=0x2b, .x=0xf1, .y=0x8a, .sp=0xd9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x2b}, {.addr=0xb91a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb91a, .value=0xc6, .type=IO_READ},
        {.addr=0xb91b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x61, .type=IO_READ},
        {.addr=0x01f1, .value=0x2b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_015B) {
    const struct CPU_State initial_cpu = {.pc=0xe12b, .a=0x9e, .x=0x09, .y=0xf9, .sp=0x3a, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x75}, {.addr=0xe12b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe12c, .a=0x9e, .x=0x09, .y=0xf9, .sp=0x3a, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x9e}, {.addr=0xe12b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe12b, .value=0xc6, .type=IO_READ},
        {.addr=0xe12c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0x75, .type=IO_READ},
        {.addr=0x0009, .value=0x9e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_015C) {
    const struct CPU_State initial_cpu = {.pc=0x0fcb, .a=0x1e, .x=0x6f, .y=0x0a, .sp=0x96, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x21}, {.addr=0x0fcb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0fcc, .a=0x1e, .x=0x6f, .y=0x0a, .sp=0x96, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x1e}, {.addr=0x0fcb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0fcb, .value=0xc6, .type=IO_READ},
        {.addr=0x0fcc, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x21, .type=IO_READ},
        {.addr=0x006f, .value=0x1e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_015D) {
    const struct CPU_State initial_cpu = {.pc=0xb8cb, .a=0x4d, .x=0x61, .y=0x96, .sp=0xe8, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x34}, {.addr=0xb8cb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb8cc, .a=0x4d, .x=0x61, .y=0x96, .sp=0xe8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x4d}, {.addr=0xb8cb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb8cb, .value=0xc6, .type=IO_READ},
        {.addr=0xb8cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x34, .type=IO_READ},
        {.addr=0x0161, .value=0x4d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_015E) {
    const struct CPU_State initial_cpu = {.pc=0xc162, .a=0x5b, .x=0xf1, .y=0x70, .sp=0x30, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x56}, {.addr=0xc162, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc163, .a=0x5b, .x=0xf1, .y=0x70, .sp=0x30, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x5b}, {.addr=0xc162, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc162, .value=0xc6, .type=IO_READ},
        {.addr=0xc163, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x56, .type=IO_READ},
        {.addr=0x01f1, .value=0x5b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_015F) {
    const struct CPU_State initial_cpu = {.pc=0x5de8, .a=0x89, .x=0xb2, .y=0xa6, .sp=0x08, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x81}, {.addr=0x5de8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5de9, .a=0x89, .x=0xb2, .y=0xa6, .sp=0x08, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x89}, {.addr=0x5de8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5de8, .value=0xc6, .type=IO_READ},
        {.addr=0x5de9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0x81, .type=IO_READ},
        {.addr=0x00b2, .value=0x89, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0160) {
    const struct CPU_State initial_cpu = {.pc=0x1759, .a=0xfc, .x=0x54, .y=0x00, .sp=0x98, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x7e}, {.addr=0x1759, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x175a, .a=0xfc, .x=0x54, .y=0x00, .sp=0x98, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xfc}, {.addr=0x1759, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1759, .value=0xc6, .type=IO_READ},
        {.addr=0x175a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x7e, .type=IO_READ},
        {.addr=0x0154, .value=0xfc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0161) {
    const struct CPU_State initial_cpu = {.pc=0x8080, .a=0x35, .x=0x2a, .y=0xfb, .sp=0xf9, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x72}, {.addr=0x8080, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8081, .a=0x35, .x=0x2a, .y=0xfb, .sp=0xf9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x35}, {.addr=0x8080, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8080, .value=0xc6, .type=IO_READ},
        {.addr=0x8081, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x72, .type=IO_READ},
        {.addr=0x002a, .value=0x35, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0162) {
    const struct CPU_State initial_cpu = {.pc=0x8202, .a=0x38, .x=0x15, .y=0xf9, .sp=0xe9, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0x15}, {.addr=0x8202, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8203, .a=0x38, .x=0x15, .y=0xf9, .sp=0xe9, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0x38}, {.addr=0x8202, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8202, .value=0xc6, .type=IO_READ},
        {.addr=0x8203, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x38, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0163) {
    const struct CPU_State initial_cpu = {.pc=0xd390, .a=0x38, .x=0x06, .y=0x57, .sp=0xfe, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xad}, {.addr=0xd390, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd391, .a=0x38, .x=0x06, .y=0x57, .sp=0xfe, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x38}, {.addr=0xd390, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd390, .value=0xc6, .type=IO_READ},
        {.addr=0xd391, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0xad, .type=IO_READ},
        {.addr=0x0106, .value=0x38, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0164) {
    const struct CPU_State initial_cpu = {.pc=0xcbe7, .a=0x11, .x=0x12, .y=0x46, .sp=0x41, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0x77}, {.addr=0xcbe7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcbe8, .a=0x11, .x=0x12, .y=0x46, .sp=0x41, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0x11}, {.addr=0xcbe7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcbe7, .value=0xc6, .type=IO_READ},
        {.addr=0xcbe8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0x77, .type=IO_READ},
        {.addr=0x0012, .value=0x11, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0165) {
    const struct CPU_State initial_cpu = {.pc=0xbfd6, .a=0x6e, .x=0x35, .y=0xd4, .sp=0x32, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0x4d}, {.addr=0xbfd6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbfd7, .a=0x6e, .x=0x35, .y=0xd4, .sp=0x32, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x6e}, {.addr=0xbfd6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbfd6, .value=0xc6, .type=IO_READ},
        {.addr=0xbfd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0x4d, .type=IO_READ},
        {.addr=0x0035, .value=0x6e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0166) {
    const struct CPU_State initial_cpu = {.pc=0x81d7, .a=0xee, .x=0xb6, .y=0x2b, .sp=0x77, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0xad}, {.addr=0x81d7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x81d8, .a=0xee, .x=0xb6, .y=0x2b, .sp=0x77, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xee}, {.addr=0x81d7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x81d7, .value=0xc6, .type=IO_READ},
        {.addr=0x81d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xad, .type=IO_READ},
        {.addr=0x01b6, .value=0xee, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0167) {
    const struct CPU_State initial_cpu = {.pc=0x25d9, .a=0x5e, .x=0x35, .y=0x9f, .sp=0x1b, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0x2a}, {.addr=0x25d9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x25da, .a=0x5e, .x=0x35, .y=0x9f, .sp=0x1b, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x5e}, {.addr=0x25d9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x25d9, .value=0xc6, .type=IO_READ},
        {.addr=0x25da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0x2a, .type=IO_READ},
        {.addr=0x0035, .value=0x5e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0168) {
    const struct CPU_State initial_cpu = {.pc=0x31aa, .a=0xb2, .x=0x71, .y=0x44, .sp=0xc5, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xda}, {.addr=0x31aa, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x31ab, .a=0xb2, .x=0x71, .y=0x44, .sp=0xc5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xb2}, {.addr=0x31aa, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x31aa, .value=0xc6, .type=IO_READ},
        {.addr=0x31ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xda, .type=IO_READ},
        {.addr=0x0171, .value=0xb2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0169) {
    const struct CPU_State initial_cpu = {.pc=0xcee5, .a=0xd9, .x=0xa6, .y=0x49, .sp=0x37, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x98}, {.addr=0xcee5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcee6, .a=0xd9, .x=0xa6, .y=0x49, .sp=0x37, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0xd9}, {.addr=0xcee5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcee5, .value=0xc6, .type=IO_READ},
        {.addr=0xcee6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x98, .type=IO_READ},
        {.addr=0x01a6, .value=0xd9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_016B) {
    const struct CPU_State initial_cpu = {.pc=0x73bc, .a=0x8a, .x=0x73, .y=0xcb, .sp=0x7d, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x6d}, {.addr=0x73bc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x73bd, .a=0x8a, .x=0x73, .y=0xcb, .sp=0x7d, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x8a}, {.addr=0x73bc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x73bc, .value=0xc6, .type=IO_READ},
        {.addr=0x73bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x6d, .type=IO_READ},
        {.addr=0x0173, .value=0x8a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_016C) {
    const struct CPU_State initial_cpu = {.pc=0xe108, .a=0xfb, .x=0x40, .y=0x31, .sp=0x05, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x0a}, {.addr=0xe108, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe109, .a=0xfb, .x=0x40, .y=0x31, .sp=0x05, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xfb}, {.addr=0xe108, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe108, .value=0xc6, .type=IO_READ},
        {.addr=0xe109, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x0a, .type=IO_READ},
        {.addr=0x0140, .value=0xfb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_016D) {
    const struct CPU_State initial_cpu = {.pc=0xf1f6, .a=0xe0, .x=0x13, .y=0xe8, .sp=0xad, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x47}, {.addr=0xf1f6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf1f7, .a=0xe0, .x=0x13, .y=0xe8, .sp=0xad, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xe0}, {.addr=0xf1f6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf1f6, .value=0xc6, .type=IO_READ},
        {.addr=0xf1f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x47, .type=IO_READ},
        {.addr=0x0113, .value=0xe0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_016E) {
    const struct CPU_State initial_cpu = {.pc=0x28bd, .a=0x54, .x=0xe6, .y=0x34, .sp=0x7f, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x49}, {.addr=0x28bd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x28be, .a=0x54, .x=0xe6, .y=0x34, .sp=0x7f, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x54}, {.addr=0x28bd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x28bd, .value=0xc6, .type=IO_READ},
        {.addr=0x28be, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x49, .type=IO_READ},
        {.addr=0x01e6, .value=0x54, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_016F) {
    const struct CPU_State initial_cpu = {.pc=0x2f2f, .a=0x8d, .x=0x33, .y=0xdf, .sp=0x6b, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x20}, {.addr=0x2f2f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2f30, .a=0x8d, .x=0x33, .y=0xdf, .sp=0x6b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x8d}, {.addr=0x2f2f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2f2f, .value=0xc6, .type=IO_READ},
        {.addr=0x2f30, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x20, .type=IO_READ},
        {.addr=0x0033, .value=0x8d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0170) {
    const struct CPU_State initial_cpu = {.pc=0x3c78, .a=0x66, .x=0x51, .y=0xc5, .sp=0xad, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xcb}, {.addr=0x3c78, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3c79, .a=0x66, .x=0x51, .y=0xc5, .sp=0xad, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x66}, {.addr=0x3c78, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3c78, .value=0xc6, .type=IO_READ},
        {.addr=0x3c79, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xcb, .type=IO_READ},
        {.addr=0x0151, .value=0x66, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0171) {
    const struct CPU_State initial_cpu = {.pc=0x817c, .a=0x79, .x=0xa8, .y=0xbe, .sp=0xd1, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xf2}, {.addr=0x817c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x817d, .a=0x79, .x=0xa8, .y=0xbe, .sp=0xd1, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0x79}, {.addr=0x817c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x817c, .value=0xc6, .type=IO_READ},
        {.addr=0x817d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xf2, .type=IO_READ},
        {.addr=0x00a8, .value=0x79, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0172) {
    const struct CPU_State initial_cpu = {.pc=0x55e9, .a=0x3d, .x=0x1c, .y=0x77, .sp=0xb8, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0xd5}, {.addr=0x55e9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x55ea, .a=0x3d, .x=0x1c, .y=0x77, .sp=0xb8, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x3d}, {.addr=0x55e9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x55e9, .value=0xc6, .type=IO_READ},
        {.addr=0x55ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xd5, .type=IO_READ},
        {.addr=0x011c, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0173) {
    const struct CPU_State initial_cpu = {.pc=0x959f, .a=0xfc, .x=0x42, .y=0xac, .sp=0xc6, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x7f}, {.addr=0x959f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x95a0, .a=0xfc, .x=0x42, .y=0xac, .sp=0xc6, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xfc}, {.addr=0x959f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x959f, .value=0xc6, .type=IO_READ},
        {.addr=0x95a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x7f, .type=IO_READ},
        {.addr=0x0142, .value=0xfc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0174) {
    const struct CPU_State initial_cpu = {.pc=0x9cd8, .a=0xa4, .x=0x9a, .y=0xa8, .sp=0x91, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0xaf}, {.addr=0x9cd8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9cd9, .a=0xa4, .x=0x9a, .y=0xa8, .sp=0x91, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0xa4}, {.addr=0x9cd8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9cd8, .value=0xc6, .type=IO_READ},
        {.addr=0x9cd9, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0xaf, .type=IO_READ},
        {.addr=0x009a, .value=0xa4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0175) {
    const struct CPU_State initial_cpu = {.pc=0xed06, .a=0xd4, .x=0x8c, .y=0x9d, .sp=0x5e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x43}, {.addr=0xed06, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xed07, .a=0xd4, .x=0x8c, .y=0x9d, .sp=0x5e, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xd4}, {.addr=0xed06, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xed06, .value=0xc6, .type=IO_READ},
        {.addr=0xed07, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x43, .type=IO_READ},
        {.addr=0x018c, .value=0xd4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0176) {
    const struct CPU_State initial_cpu = {.pc=0x56e8, .a=0x91, .x=0x05, .y=0xea, .sp=0x9c, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0xdc}, {.addr=0x56e8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x56e9, .a=0x91, .x=0x05, .y=0xea, .sp=0x9c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x91}, {.addr=0x56e8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x56e8, .value=0xc6, .type=IO_READ},
        {.addr=0x56e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0xdc, .type=IO_READ},
        {.addr=0x0105, .value=0x91, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0177) {
    const struct CPU_State initial_cpu = {.pc=0x0d05, .a=0x38, .x=0x29, .y=0xe5, .sp=0xce, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0xb2}, {.addr=0x0d05, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0d06, .a=0x38, .x=0x29, .y=0xe5, .sp=0xce, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0x38}, {.addr=0x0d05, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0d05, .value=0xc6, .type=IO_READ},
        {.addr=0x0d06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0xb2, .type=IO_READ},
        {.addr=0x0029, .value=0x38, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0178) {
    const struct CPU_State initial_cpu = {.pc=0x187a, .a=0xb3, .x=0x2c, .y=0x3b, .sp=0x37, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0xdc}, {.addr=0x187a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x187b, .a=0xb3, .x=0x2c, .y=0x3b, .sp=0x37, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xb3}, {.addr=0x187a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x187a, .value=0xc6, .type=IO_READ},
        {.addr=0x187b, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xdc, .type=IO_READ},
        {.addr=0x012c, .value=0xb3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0179) {
    const struct CPU_State initial_cpu = {.pc=0xb5a2, .a=0x78, .x=0x78, .y=0xf7, .sp=0xd3, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0xaa}, {.addr=0xb5a2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb5a3, .a=0x78, .x=0x78, .y=0xf7, .sp=0xd3, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0x78}, {.addr=0xb5a2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb5a2, .value=0xc6, .type=IO_READ},
        {.addr=0xb5a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0xaa, .type=IO_READ},
        {.addr=0x0078, .value=0x78, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_017A) {
    const struct CPU_State initial_cpu = {.pc=0xe84c, .a=0xa1, .x=0x6b, .y=0xc8, .sp=0xfa, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0xc1}, {.addr=0xe84c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe84d, .a=0xa1, .x=0x6b, .y=0xc8, .sp=0xfa, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0xa1}, {.addr=0xe84c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe84c, .value=0xc6, .type=IO_READ},
        {.addr=0xe84d, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0xc1, .type=IO_READ},
        {.addr=0x006b, .value=0xa1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_017B) {
    const struct CPU_State initial_cpu = {.pc=0x1f18, .a=0x62, .x=0x1b, .y=0x04, .sp=0x12, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xd8}, {.addr=0x1f18, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1f19, .a=0x62, .x=0x1b, .y=0x04, .sp=0x12, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x62}, {.addr=0x1f18, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1f18, .value=0xc6, .type=IO_READ},
        {.addr=0x1f19, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xd8, .type=IO_READ},
        {.addr=0x011b, .value=0x62, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_017C) {
    const struct CPU_State initial_cpu = {.pc=0xf776, .a=0xe1, .x=0x23, .y=0xf4, .sp=0xd4, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xf9}, {.addr=0xf776, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf777, .a=0xe1, .x=0x23, .y=0xf4, .sp=0xd4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xe1}, {.addr=0xf776, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf776, .value=0xc6, .type=IO_READ},
        {.addr=0xf777, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0xf9, .type=IO_READ},
        {.addr=0x0123, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_017D) {
    const struct CPU_State initial_cpu = {.pc=0x4782, .a=0xcb, .x=0x87, .y=0xf9, .sp=0x18, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x3e}, {.addr=0x4782, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4783, .a=0xcb, .x=0x87, .y=0xf9, .sp=0x18, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xcb}, {.addr=0x4782, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4782, .value=0xc6, .type=IO_READ},
        {.addr=0x4783, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0x3e, .type=IO_READ},
        {.addr=0x0087, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_017E) {
    const struct CPU_State initial_cpu = {.pc=0x8146, .a=0x29, .x=0x1f, .y=0x68, .sp=0xf3, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x00}, {.addr=0x8146, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8147, .a=0x29, .x=0x1f, .y=0x68, .sp=0xf3, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0x29}, {.addr=0x8146, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8146, .value=0xc6, .type=IO_READ},
        {.addr=0x8147, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0x00, .type=IO_READ},
        {.addr=0x001f, .value=0x29, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_017F) {
    const struct CPU_State initial_cpu = {.pc=0x1141, .a=0x9a, .x=0x31, .y=0xb4, .sp=0x83, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x3d}, {.addr=0x1141, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1142, .a=0x9a, .x=0x31, .y=0xb4, .sp=0x83, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x9a}, {.addr=0x1141, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1141, .value=0xc6, .type=IO_READ},
        {.addr=0x1142, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x3d, .type=IO_READ},
        {.addr=0x0031, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0180) {
    const struct CPU_State initial_cpu = {.pc=0x7021, .a=0x52, .x=0x02, .y=0xb2, .sp=0xc5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0xb5}, {.addr=0x7021, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7022, .a=0x52, .x=0x02, .y=0xb2, .sp=0xc5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0x52}, {.addr=0x7021, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7021, .value=0xc6, .type=IO_READ},
        {.addr=0x7022, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0xb5, .type=IO_READ},
        {.addr=0x0002, .value=0x52, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0181) {
    const struct CPU_State initial_cpu = {.pc=0x9316, .a=0x03, .x=0xed, .y=0x98, .sp=0xae, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x98}, {.addr=0x9316, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9317, .a=0x03, .x=0xed, .y=0x98, .sp=0xae, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x03}, {.addr=0x9316, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9316, .value=0xc6, .type=IO_READ},
        {.addr=0x9317, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x98, .type=IO_READ},
        {.addr=0x00ed, .value=0x03, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0182) {
    const struct CPU_State initial_cpu = {.pc=0x1ebd, .a=0x72, .x=0x3f, .y=0x1b, .sp=0xd9, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0xda}, {.addr=0x1ebd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1ebe, .a=0x72, .x=0x3f, .y=0x1b, .sp=0xd9, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x72}, {.addr=0x1ebd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1ebd, .value=0xc6, .type=IO_READ},
        {.addr=0x1ebe, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0xda, .type=IO_READ},
        {.addr=0x013f, .value=0x72, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0183) {
    const struct CPU_State initial_cpu = {.pc=0x40d2, .a=0x2e, .x=0xa3, .y=0x71, .sp=0x52, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x17}, {.addr=0x40d2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x40d3, .a=0x2e, .x=0xa3, .y=0x71, .sp=0x52, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x2e}, {.addr=0x40d2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x40d2, .value=0xc6, .type=IO_READ},
        {.addr=0x40d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x17, .type=IO_READ},
        {.addr=0x01a3, .value=0x2e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0184) {
    const struct CPU_State initial_cpu = {.pc=0x36e9, .a=0x6f, .x=0xda, .y=0xe8, .sp=0xf7, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0x47}, {.addr=0x36e9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x36ea, .a=0x6f, .x=0xda, .y=0xe8, .sp=0xf7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0x6f}, {.addr=0x36e9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x36e9, .value=0xc6, .type=IO_READ},
        {.addr=0x36ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x00da, .value=0x47, .type=IO_READ},
        {.addr=0x00da, .value=0x6f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0185) {
    const struct CPU_State initial_cpu = {.pc=0x9c85, .a=0x3c, .x=0xd4, .y=0x8b, .sp=0xe4, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0xd3}, {.addr=0x9c85, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9c86, .a=0x3c, .x=0xd4, .y=0x8b, .sp=0xe4, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x3c}, {.addr=0x9c85, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9c85, .value=0xc6, .type=IO_READ},
        {.addr=0x9c86, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0xd3, .type=IO_READ},
        {.addr=0x00d4, .value=0x3c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0186) {
    const struct CPU_State initial_cpu = {.pc=0xb909, .a=0x64, .x=0x91, .y=0xc1, .sp=0x16, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x4f}, {.addr=0xb909, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb90a, .a=0x64, .x=0x91, .y=0xc1, .sp=0x16, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x64}, {.addr=0xb909, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb909, .value=0xc6, .type=IO_READ},
        {.addr=0xb90a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x4f, .type=IO_READ},
        {.addr=0x0191, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0187) {
    const struct CPU_State initial_cpu = {.pc=0x831f, .a=0xd9, .x=0x3a, .y=0xf2, .sp=0xe1, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x75}, {.addr=0x831f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8320, .a=0xd9, .x=0x3a, .y=0xf2, .sp=0xe1, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xd9}, {.addr=0x831f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x831f, .value=0xc6, .type=IO_READ},
        {.addr=0x8320, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x75, .type=IO_READ},
        {.addr=0x003a, .value=0xd9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0188) {
    const struct CPU_State initial_cpu = {.pc=0xa9b9, .a=0xb1, .x=0x80, .y=0x72, .sp=0x61, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0xcf}, {.addr=0xa9b9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa9ba, .a=0xb1, .x=0x80, .y=0x72, .sp=0x61, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0xb1}, {.addr=0xa9b9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa9b9, .value=0xc6, .type=IO_READ},
        {.addr=0xa9ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0xcf, .type=IO_READ},
        {.addr=0x0080, .value=0xb1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0189) {
    const struct CPU_State initial_cpu = {.pc=0x192e, .a=0x56, .x=0x52, .y=0xdd, .sp=0xde, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x1a}, {.addr=0x192e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x192f, .a=0x56, .x=0x52, .y=0xdd, .sp=0xde, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x56}, {.addr=0x192e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x192e, .value=0xc6, .type=IO_READ},
        {.addr=0x192f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x1a, .type=IO_READ},
        {.addr=0x0152, .value=0x56, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_018A) {
    const struct CPU_State initial_cpu = {.pc=0xee48, .a=0x55, .x=0x83, .y=0x5d, .sp=0x51, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x6e}, {.addr=0xee48, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xee49, .a=0x55, .x=0x83, .y=0x5d, .sp=0x51, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x55}, {.addr=0xee48, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xee48, .value=0xc6, .type=IO_READ},
        {.addr=0xee49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x6e, .type=IO_READ},
        {.addr=0x0083, .value=0x55, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_018B) {
    const struct CPU_State initial_cpu = {.pc=0x45ba, .a=0x84, .x=0x5d, .y=0x29, .sp=0xdd, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0xe6}, {.addr=0x45ba, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x45bb, .a=0x84, .x=0x5d, .y=0x29, .sp=0xdd, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x84}, {.addr=0x45ba, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x45ba, .value=0xc6, .type=IO_READ},
        {.addr=0x45bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0xe6, .type=IO_READ},
        {.addr=0x005d, .value=0x84, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_018C) {
    const struct CPU_State initial_cpu = {.pc=0x08cb, .a=0xf2, .x=0xe8, .y=0xda, .sp=0x97, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x5a}, {.addr=0x08cb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x08cc, .a=0xf2, .x=0xe8, .y=0xda, .sp=0x97, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xf2}, {.addr=0x08cb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x08cb, .value=0xc6, .type=IO_READ},
        {.addr=0x08cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x5a, .type=IO_READ},
        {.addr=0x01e8, .value=0xf2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_018D) {
    const struct CPU_State initial_cpu = {.pc=0xcd02, .a=0x9d, .x=0x31, .y=0x27, .sp=0x01, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x61}, {.addr=0xcd02, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcd03, .a=0x9d, .x=0x31, .y=0x27, .sp=0x01, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x9d}, {.addr=0xcd02, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcd02, .value=0xc6, .type=IO_READ},
        {.addr=0xcd03, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x61, .type=IO_READ},
        {.addr=0x0131, .value=0x9d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_018E) {
    const struct CPU_State initial_cpu = {.pc=0xd387, .a=0x4c, .x=0xa9, .y=0x64, .sp=0x66, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x82}, {.addr=0xd387, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd388, .a=0x4c, .x=0xa9, .y=0x64, .sp=0x66, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x4c}, {.addr=0xd387, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd387, .value=0xc6, .type=IO_READ},
        {.addr=0xd388, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x82, .type=IO_READ},
        {.addr=0x01a9, .value=0x4c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_018F) {
    const struct CPU_State initial_cpu = {.pc=0xa250, .a=0x77, .x=0xed, .y=0xe3, .sp=0x65, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x5b}, {.addr=0xa250, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa251, .a=0x77, .x=0xed, .y=0xe3, .sp=0x65, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x77}, {.addr=0xa250, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa250, .value=0xc6, .type=IO_READ},
        {.addr=0xa251, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x5b, .type=IO_READ},
        {.addr=0x01ed, .value=0x77, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0190) {
    const struct CPU_State initial_cpu = {.pc=0x0767, .a=0xb9, .x=0x29, .y=0xc1, .sp=0x84, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0xfb}, {.addr=0x0767, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0768, .a=0xb9, .x=0x29, .y=0xc1, .sp=0x84, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0xb9}, {.addr=0x0767, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0767, .value=0xc6, .type=IO_READ},
        {.addr=0x0768, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0xfb, .type=IO_READ},
        {.addr=0x0029, .value=0xb9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0191) {
    const struct CPU_State initial_cpu = {.pc=0x8166, .a=0x9b, .x=0x52, .y=0xdd, .sp=0x90, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x85}, {.addr=0x8166, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8167, .a=0x9b, .x=0x52, .y=0xdd, .sp=0x90, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x9b}, {.addr=0x8166, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8166, .value=0xc6, .type=IO_READ},
        {.addr=0x8167, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x85, .type=IO_READ},
        {.addr=0x0152, .value=0x9b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0192) {
    const struct CPU_State initial_cpu = {.pc=0xbb74, .a=0x03, .x=0x17, .y=0x02, .sp=0x3e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0xb1}, {.addr=0xbb74, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbb75, .a=0x03, .x=0x17, .y=0x02, .sp=0x3e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x03}, {.addr=0xbb74, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbb74, .value=0xc6, .type=IO_READ},
        {.addr=0xbb75, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0xb1, .type=IO_READ},
        {.addr=0x0017, .value=0x03, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0193) {
    const struct CPU_State initial_cpu = {.pc=0x57a7, .a=0x8c, .x=0x13, .y=0x67, .sp=0xad, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x70}, {.addr=0x57a7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x57a8, .a=0x8c, .x=0x13, .y=0x67, .sp=0xad, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x8c}, {.addr=0x57a7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x57a7, .value=0xc6, .type=IO_READ},
        {.addr=0x57a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x70, .type=IO_READ},
        {.addr=0x0113, .value=0x8c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0194) {
    const struct CPU_State initial_cpu = {.pc=0xb587, .a=0x78, .x=0xfd, .y=0x4f, .sp=0x39, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x44}, {.addr=0xb587, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb588, .a=0x78, .x=0xfd, .y=0x4f, .sp=0x39, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x78}, {.addr=0xb587, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb587, .value=0xc6, .type=IO_READ},
        {.addr=0xb588, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x44, .type=IO_READ},
        {.addr=0x01fd, .value=0x78, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0195) {
    const struct CPU_State initial_cpu = {.pc=0xcb24, .a=0xdf, .x=0xd5, .y=0xb8, .sp=0xee, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xf4}, {.addr=0xcb24, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcb25, .a=0xdf, .x=0xd5, .y=0xb8, .sp=0xee, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xdf}, {.addr=0xcb24, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcb24, .value=0xc6, .type=IO_READ},
        {.addr=0xcb25, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xf4, .type=IO_READ},
        {.addr=0x01d5, .value=0xdf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0196) {
    const struct CPU_State initial_cpu = {.pc=0x8695, .a=0xe8, .x=0xd9, .y=0xbf, .sp=0xc0, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0xdd}, {.addr=0x8695, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8696, .a=0xe8, .x=0xd9, .y=0xbf, .sp=0xc0, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xe8}, {.addr=0x8695, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8695, .value=0xc6, .type=IO_READ},
        {.addr=0x8696, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xdd, .type=IO_READ},
        {.addr=0x01d9, .value=0xe8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0197) {
    const struct CPU_State initial_cpu = {.pc=0xdc03, .a=0x55, .x=0x38, .y=0xf9, .sp=0x99, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0xdd}, {.addr=0xdc03, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdc04, .a=0x55, .x=0x38, .y=0xf9, .sp=0x99, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x55}, {.addr=0xdc03, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdc03, .value=0xc6, .type=IO_READ},
        {.addr=0xdc04, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0xdd, .type=IO_READ},
        {.addr=0x0038, .value=0x55, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0198) {
    const struct CPU_State initial_cpu = {.pc=0x67e3, .a=0x3f, .x=0x9d, .y=0x33, .sp=0x58, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x65}, {.addr=0x67e3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x67e4, .a=0x3f, .x=0x9d, .y=0x33, .sp=0x58, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x3f}, {.addr=0x67e3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x67e3, .value=0xc6, .type=IO_READ},
        {.addr=0x67e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x65, .type=IO_READ},
        {.addr=0x019d, .value=0x3f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0199) {
    const struct CPU_State initial_cpu = {.pc=0x26bd, .a=0x3e, .x=0xdd, .y=0x2c, .sp=0xc0, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x00}, {.addr=0x26bd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x26be, .a=0x3e, .x=0xdd, .y=0x2c, .sp=0xc0, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x3e}, {.addr=0x26bd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x26bd, .value=0xc6, .type=IO_READ},
        {.addr=0x26be, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x00, .type=IO_READ},
        {.addr=0x00dd, .value=0x3e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_019A) {
    const struct CPU_State initial_cpu = {.pc=0xb5dd, .a=0x7a, .x=0x21, .y=0x8b, .sp=0x52, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x3b}, {.addr=0xb5dd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb5de, .a=0x7a, .x=0x21, .y=0x8b, .sp=0x52, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x7a}, {.addr=0xb5dd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb5dd, .value=0xc6, .type=IO_READ},
        {.addr=0xb5de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x3b, .type=IO_READ},
        {.addr=0x0121, .value=0x7a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_019B) {
    const struct CPU_State initial_cpu = {.pc=0x45f6, .a=0x46, .x=0xe1, .y=0x8b, .sp=0xe7, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x94}, {.addr=0x45f6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x45f7, .a=0x46, .x=0xe1, .y=0x8b, .sp=0xe7, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x46}, {.addr=0x45f6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x45f6, .value=0xc6, .type=IO_READ},
        {.addr=0x45f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x94, .type=IO_READ},
        {.addr=0x00e1, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_019C) {
    const struct CPU_State initial_cpu = {.pc=0x99e6, .a=0x74, .x=0x08, .y=0x8f, .sp=0x7c, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x55}, {.addr=0x99e6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x99e7, .a=0x74, .x=0x08, .y=0x8f, .sp=0x7c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x74}, {.addr=0x99e6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x99e6, .value=0xc6, .type=IO_READ},
        {.addr=0x99e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x55, .type=IO_READ},
        {.addr=0x0108, .value=0x74, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_019D) {
    const struct CPU_State initial_cpu = {.pc=0x6494, .a=0x4e, .x=0xb9, .y=0xa7, .sp=0xe7, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x87}, {.addr=0x6494, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6495, .a=0x4e, .x=0xb9, .y=0xa7, .sp=0xe7, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x4e}, {.addr=0x6494, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6494, .value=0xc6, .type=IO_READ},
        {.addr=0x6495, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x87, .type=IO_READ},
        {.addr=0x01b9, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_019E) {
    const struct CPU_State initial_cpu = {.pc=0x60ea, .a=0x0d, .x=0x4a, .y=0xe7, .sp=0xc4, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0xba}, {.addr=0x60ea, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x60eb, .a=0x0d, .x=0x4a, .y=0xe7, .sp=0xc4, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x0d}, {.addr=0x60ea, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x60ea, .value=0xc6, .type=IO_READ},
        {.addr=0x60eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0xba, .type=IO_READ},
        {.addr=0x004a, .value=0x0d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_019F) {
    const struct CPU_State initial_cpu = {.pc=0xd278, .a=0xf3, .x=0xe3, .y=0x45, .sp=0x2b, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xbb}, {.addr=0xd278, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd279, .a=0xf3, .x=0xe3, .y=0x45, .sp=0x2b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xf3}, {.addr=0xd278, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd278, .value=0xc6, .type=IO_READ},
        {.addr=0xd279, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xbb, .type=IO_READ},
        {.addr=0x01e3, .value=0xf3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xb906, .a=0xec, .x=0x4c, .y=0xd0, .sp=0xfe, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x6f}, {.addr=0xb906, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb907, .a=0xec, .x=0x4c, .y=0xd0, .sp=0xfe, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xec}, {.addr=0xb906, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb906, .value=0xc6, .type=IO_READ},
        {.addr=0xb907, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0x6f, .type=IO_READ},
        {.addr=0x004c, .value=0xec, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x3b2f, .a=0x96, .x=0x35, .y=0x13, .sp=0xaa, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xd1}, {.addr=0x3b2f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3b30, .a=0x96, .x=0x35, .y=0x13, .sp=0xaa, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x96}, {.addr=0x3b2f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3b2f, .value=0xc6, .type=IO_READ},
        {.addr=0x3b30, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xd1, .type=IO_READ},
        {.addr=0x0135, .value=0x96, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x3869, .a=0x29, .x=0x08, .y=0xdb, .sp=0x75, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x7b}, {.addr=0x3869, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x386a, .a=0x29, .x=0x08, .y=0xdb, .sp=0x75, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x29}, {.addr=0x3869, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3869, .value=0xc6, .type=IO_READ},
        {.addr=0x386a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x7b, .type=IO_READ},
        {.addr=0x0108, .value=0x29, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x1797, .a=0x7a, .x=0xe0, .y=0xdc, .sp=0xc7, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xde}, {.addr=0x1797, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1798, .a=0x7a, .x=0xe0, .y=0xdc, .sp=0xc7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x7a}, {.addr=0x1797, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1797, .value=0xc6, .type=IO_READ},
        {.addr=0x1798, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xde, .type=IO_READ},
        {.addr=0x01e0, .value=0x7a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xd97c, .a=0x58, .x=0x94, .y=0xae, .sp=0x68, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x62}, {.addr=0xd97c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd97d, .a=0x58, .x=0x94, .y=0xae, .sp=0x68, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x58}, {.addr=0xd97c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd97c, .value=0xc6, .type=IO_READ},
        {.addr=0xd97d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x62, .type=IO_READ},
        {.addr=0x0094, .value=0x58, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xc3d9, .a=0x02, .x=0xbb, .y=0xd6, .sp=0xc8, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0x67}, {.addr=0xc3d9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc3da, .a=0x02, .x=0xbb, .y=0xd6, .sp=0xc8, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x02}, {.addr=0xc3d9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc3d9, .value=0xc6, .type=IO_READ},
        {.addr=0xc3da, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0x67, .type=IO_READ},
        {.addr=0x00bb, .value=0x02, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xad1c, .a=0x66, .x=0xbe, .y=0xf3, .sp=0x30, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0xb8}, {.addr=0xad1c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xad1d, .a=0x66, .x=0xbe, .y=0xf3, .sp=0x30, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x66}, {.addr=0xad1c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xad1c, .value=0xc6, .type=IO_READ},
        {.addr=0xad1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0xb8, .type=IO_READ},
        {.addr=0x01be, .value=0x66, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xc8ba, .a=0xd3, .x=0x6a, .y=0x96, .sp=0x9f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x6b}, {.addr=0xc8ba, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc8bb, .a=0xd3, .x=0x6a, .y=0x96, .sp=0x9f, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xd3}, {.addr=0xc8ba, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc8ba, .value=0xc6, .type=IO_READ},
        {.addr=0xc8bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0x6b, .type=IO_READ},
        {.addr=0x006a, .value=0xd3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xef49, .a=0xd5, .x=0x71, .y=0x11, .sp=0x0c, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x64}, {.addr=0xef49, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xef4a, .a=0xd5, .x=0x71, .y=0x11, .sp=0x0c, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xd5}, {.addr=0xef49, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xef49, .value=0xc6, .type=IO_READ},
        {.addr=0xef4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x64, .type=IO_READ},
        {.addr=0x0171, .value=0xd5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x5a0f, .a=0x0a, .x=0x64, .y=0x75, .sp=0x3b, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0xe6}, {.addr=0x5a0f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5a10, .a=0x0a, .x=0x64, .y=0x75, .sp=0x3b, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x0a}, {.addr=0x5a0f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5a0f, .value=0xc6, .type=IO_READ},
        {.addr=0x5a10, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0xe6, .type=IO_READ},
        {.addr=0x0064, .value=0x0a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xfad5, .a=0x8b, .x=0xb1, .y=0x3d, .sp=0xfe, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x14}, {.addr=0xfad5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfad6, .a=0x8b, .x=0xb1, .y=0x3d, .sp=0xfe, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x8b}, {.addr=0xfad5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfad5, .value=0xc6, .type=IO_READ},
        {.addr=0xfad6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x14, .type=IO_READ},
        {.addr=0x00b1, .value=0x8b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xb2b8, .a=0x6f, .x=0xc3, .y=0xb4, .sp=0xb9, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x45}, {.addr=0xb2b8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb2b9, .a=0x6f, .x=0xc3, .y=0xb4, .sp=0xb9, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x6f}, {.addr=0xb2b8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb2b8, .value=0xc6, .type=IO_READ},
        {.addr=0xb2b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x45, .type=IO_READ},
        {.addr=0x00c3, .value=0x6f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x7749, .a=0x9e, .x=0x17, .y=0x87, .sp=0x1a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0xb3}, {.addr=0x7749, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x774a, .a=0x9e, .x=0x17, .y=0x87, .sp=0x1a, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x9e}, {.addr=0x7749, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7749, .value=0xc6, .type=IO_READ},
        {.addr=0x774a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0xb3, .type=IO_READ},
        {.addr=0x0117, .value=0x9e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x9d41, .a=0x58, .x=0xe5, .y=0x07, .sp=0x51, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0xf6}, {.addr=0x9d41, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9d42, .a=0x58, .x=0xe5, .y=0x07, .sp=0x51, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x58}, {.addr=0x9d41, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9d41, .value=0xc6, .type=IO_READ},
        {.addr=0x9d42, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0xf6, .type=IO_READ},
        {.addr=0x00e5, .value=0x58, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x4a1a, .a=0x16, .x=0xcb, .y=0x8b, .sp=0x29, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x1c}, {.addr=0x4a1a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4a1b, .a=0x16, .x=0xcb, .y=0x8b, .sp=0x29, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0x16}, {.addr=0x4a1a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4a1a, .value=0xc6, .type=IO_READ},
        {.addr=0x4a1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0x1c, .type=IO_READ},
        {.addr=0x00cb, .value=0x16, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xd360, .a=0xac, .x=0xae, .y=0x23, .sp=0x8c, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x84}, {.addr=0xd360, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd361, .a=0xac, .x=0xae, .y=0x23, .sp=0x8c, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xac}, {.addr=0xd360, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd360, .value=0xc6, .type=IO_READ},
        {.addr=0xd361, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x84, .type=IO_READ},
        {.addr=0x01ae, .value=0xac, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x2cf6, .a=0xe8, .x=0x05, .y=0x06, .sp=0x57, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x86}, {.addr=0x2cf6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2cf7, .a=0xe8, .x=0x05, .y=0x06, .sp=0x57, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xe8}, {.addr=0x2cf6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2cf6, .value=0xc6, .type=IO_READ},
        {.addr=0x2cf7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x86, .type=IO_READ},
        {.addr=0x0105, .value=0xe8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x4754, .a=0x54, .x=0xb6, .y=0xdb, .sp=0xa4, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0xc2}, {.addr=0x4754, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4755, .a=0x54, .x=0xb6, .y=0xdb, .sp=0xa4, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0x54}, {.addr=0x4754, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4754, .value=0xc6, .type=IO_READ},
        {.addr=0x4755, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0xc2, .type=IO_READ},
        {.addr=0x00b6, .value=0x54, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xe4ee, .a=0x5a, .x=0xe3, .y=0xb8, .sp=0x88, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xcb}, {.addr=0xe4ee, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe4ef, .a=0x5a, .x=0xe3, .y=0xb8, .sp=0x88, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x5a}, {.addr=0xe4ee, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe4ee, .value=0xc6, .type=IO_READ},
        {.addr=0xe4ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xcb, .type=IO_READ},
        {.addr=0x01e3, .value=0x5a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x6a19, .a=0x79, .x=0x77, .y=0xe7, .sp=0xc1, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x0b}, {.addr=0x6a19, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6a1a, .a=0x79, .x=0x77, .y=0xe7, .sp=0xc1, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x79}, {.addr=0x6a19, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6a19, .value=0xc6, .type=IO_READ},
        {.addr=0x6a1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x0b, .type=IO_READ},
        {.addr=0x0177, .value=0x79, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x74d2, .a=0x01, .x=0xb5, .y=0xa8, .sp=0x0b, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x7b}, {.addr=0x74d2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x74d3, .a=0x01, .x=0xb5, .y=0xa8, .sp=0x0b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x01}, {.addr=0x74d2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x74d2, .value=0xc6, .type=IO_READ},
        {.addr=0x74d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x7b, .type=IO_READ},
        {.addr=0x01b5, .value=0x01, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x337b, .a=0x3d, .x=0xf7, .y=0xc6, .sp=0x64, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x7c}, {.addr=0x337b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x337c, .a=0x3d, .x=0xf7, .y=0xc6, .sp=0x64, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x3d}, {.addr=0x337b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x337b, .value=0xc6, .type=IO_READ},
        {.addr=0x337c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x7c, .type=IO_READ},
        {.addr=0x01f7, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xc5ad, .a=0x0a, .x=0xe1, .y=0x43, .sp=0xcf, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x35}, {.addr=0xc5ad, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc5ae, .a=0x0a, .x=0xe1, .y=0x43, .sp=0xcf, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x0a}, {.addr=0xc5ad, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc5ad, .value=0xc6, .type=IO_READ},
        {.addr=0xc5ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x35, .type=IO_READ},
        {.addr=0x00e1, .value=0x0a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x1abd, .a=0xd1, .x=0x7e, .y=0x49, .sp=0x32, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0x62}, {.addr=0x1abd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1abe, .a=0xd1, .x=0x7e, .y=0x49, .sp=0x32, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0xd1}, {.addr=0x1abd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1abd, .value=0xc6, .type=IO_READ},
        {.addr=0x1abe, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0x62, .type=IO_READ},
        {.addr=0x007e, .value=0xd1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xe920, .a=0x2c, .x=0x3e, .y=0x58, .sp=0x2e, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x65}, {.addr=0xe920, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe921, .a=0x2c, .x=0x3e, .y=0x58, .sp=0x2e, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x2c}, {.addr=0xe920, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe920, .value=0xc6, .type=IO_READ},
        {.addr=0xe921, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x65, .type=IO_READ},
        {.addr=0x013e, .value=0x2c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x222a, .a=0xbd, .x=0x8a, .y=0xa0, .sp=0xa8, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xf4}, {.addr=0x222a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x222b, .a=0xbd, .x=0x8a, .y=0xa0, .sp=0xa8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xbd}, {.addr=0x222a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x222a, .value=0xc6, .type=IO_READ},
        {.addr=0x222b, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xf4, .type=IO_READ},
        {.addr=0x018a, .value=0xbd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x33f3, .a=0x1a, .x=0xea, .y=0xba, .sp=0x29, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x6a}, {.addr=0x33f3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x33f4, .a=0x1a, .x=0xea, .y=0xba, .sp=0x29, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x1a}, {.addr=0x33f3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x33f3, .value=0xc6, .type=IO_READ},
        {.addr=0x33f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x6a, .type=IO_READ},
        {.addr=0x01ea, .value=0x1a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x937a, .a=0x5b, .x=0x39, .y=0x6f, .sp=0xaf, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0xee}, {.addr=0x937a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x937b, .a=0x5b, .x=0x39, .y=0x6f, .sp=0xaf, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x5b}, {.addr=0x937a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x937a, .value=0xc6, .type=IO_READ},
        {.addr=0x937b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0xee, .type=IO_READ},
        {.addr=0x0039, .value=0x5b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x7b8b, .a=0x17, .x=0x4a, .y=0xc1, .sp=0x08, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x3b}, {.addr=0x7b8b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7b8c, .a=0x17, .x=0x4a, .y=0xc1, .sp=0x08, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x17}, {.addr=0x7b8b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7b8b, .value=0xc6, .type=IO_READ},
        {.addr=0x7b8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0x3b, .type=IO_READ},
        {.addr=0x004a, .value=0x17, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xaad8, .a=0xcb, .x=0x21, .y=0x39, .sp=0x43, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x8f}, {.addr=0xaad8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xaad9, .a=0xcb, .x=0x21, .y=0x39, .sp=0x43, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0xcb}, {.addr=0xaad8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xaad8, .value=0xc6, .type=IO_READ},
        {.addr=0xaad9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x8f, .type=IO_READ},
        {.addr=0x0021, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xdee6, .a=0x19, .x=0x12, .y=0x7d, .sp=0xf5, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x88}, {.addr=0xdee6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdee7, .a=0x19, .x=0x12, .y=0x7d, .sp=0xf5, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x19}, {.addr=0xdee6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdee6, .value=0xc6, .type=IO_READ},
        {.addr=0xdee7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x88, .type=IO_READ},
        {.addr=0x0112, .value=0x19, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x1529, .a=0xda, .x=0xa7, .y=0x25, .sp=0x24, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x36}, {.addr=0x1529, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x152a, .a=0xda, .x=0xa7, .y=0x25, .sp=0x24, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0xda}, {.addr=0x1529, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1529, .value=0xc6, .type=IO_READ},
        {.addr=0x152a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0x36, .type=IO_READ},
        {.addr=0x00a7, .value=0xda, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x5b40, .a=0xca, .x=0x66, .y=0x07, .sp=0xb7, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x2d}, {.addr=0x5b40, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5b41, .a=0xca, .x=0x66, .y=0x07, .sp=0xb7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xca}, {.addr=0x5b40, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5b40, .value=0xc6, .type=IO_READ},
        {.addr=0x5b41, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x2d, .type=IO_READ},
        {.addr=0x0166, .value=0xca, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xd2f8, .a=0x47, .x=0x5f, .y=0x61, .sp=0x7f, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0xcd}, {.addr=0xd2f8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd2f9, .a=0x47, .x=0x5f, .y=0x61, .sp=0x7f, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x47}, {.addr=0xd2f8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd2f8, .value=0xc6, .type=IO_READ},
        {.addr=0xd2f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xcd, .type=IO_READ},
        {.addr=0x015f, .value=0x47, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x159c, .a=0x84, .x=0x5f, .y=0x00, .sp=0x70, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0xa6}, {.addr=0x159c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x159d, .a=0x84, .x=0x5f, .y=0x00, .sp=0x70, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x84}, {.addr=0x159c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x159c, .value=0xc6, .type=IO_READ},
        {.addr=0x159d, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0xa6, .type=IO_READ},
        {.addr=0x005f, .value=0x84, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x3689, .a=0x51, .x=0xcd, .y=0x89, .sp=0x9a, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x39}, {.addr=0x3689, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x368a, .a=0x51, .x=0xcd, .y=0x89, .sp=0x9a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x51}, {.addr=0x3689, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3689, .value=0xc6, .type=IO_READ},
        {.addr=0x368a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x39, .type=IO_READ},
        {.addr=0x00cd, .value=0x51, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xc00c, .a=0x01, .x=0x53, .y=0xdf, .sp=0x4d, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xc4}, {.addr=0xc00c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc00d, .a=0x01, .x=0x53, .y=0xdf, .sp=0x4d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x01}, {.addr=0xc00c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc00c, .value=0xc6, .type=IO_READ},
        {.addr=0xc00d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0xc4, .type=IO_READ},
        {.addr=0x0153, .value=0x01, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xfa90, .a=0x97, .x=0x52, .y=0xcd, .sp=0x20, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0xbe}, {.addr=0xfa90, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfa91, .a=0x97, .x=0x52, .y=0xcd, .sp=0x20, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x97}, {.addr=0xfa90, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfa90, .value=0xc6, .type=IO_READ},
        {.addr=0xfa91, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0xbe, .type=IO_READ},
        {.addr=0x0052, .value=0x97, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x622e, .a=0xa8, .x=0xd5, .y=0x98, .sp=0xf5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x54}, {.addr=0x622e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x622f, .a=0xa8, .x=0xd5, .y=0x98, .sp=0xf5, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xa8}, {.addr=0x622e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x622e, .value=0xc6, .type=IO_READ},
        {.addr=0x622f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x54, .type=IO_READ},
        {.addr=0x01d5, .value=0xa8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x31d6, .a=0x03, .x=0x93, .y=0xff, .sp=0xb3, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xf9}, {.addr=0x31d6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x31d7, .a=0x03, .x=0x93, .y=0xff, .sp=0xb3, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x03}, {.addr=0x31d6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x31d6, .value=0xc6, .type=IO_READ},
        {.addr=0x31d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xf9, .type=IO_READ},
        {.addr=0x0193, .value=0x03, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x84a1, .a=0x00, .x=0xc7, .y=0xa6, .sp=0xf5, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0xde}, {.addr=0x84a1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x84a2, .a=0x00, .x=0xc7, .y=0xa6, .sp=0xf5, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x00}, {.addr=0x84a1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x84a1, .value=0xc6, .type=IO_READ},
        {.addr=0x84a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0xde, .type=IO_READ},
        {.addr=0x00c7, .value=0x00, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x6c8f, .a=0xa9, .x=0xd4, .y=0xfa, .sp=0x6b, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x24}, {.addr=0x6c8f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6c90, .a=0xa9, .x=0xd4, .y=0xfa, .sp=0x6b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xa9}, {.addr=0x6c8f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6c8f, .value=0xc6, .type=IO_READ},
        {.addr=0x6c90, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x24, .type=IO_READ},
        {.addr=0x01d4, .value=0xa9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x41dc, .a=0xd6, .x=0x60, .y=0x22, .sp=0x87, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0xc4}, {.addr=0x41dc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x41dd, .a=0xd6, .x=0x60, .y=0x22, .sp=0x87, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0xd6}, {.addr=0x41dc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x41dc, .value=0xc6, .type=IO_READ},
        {.addr=0x41dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0xc4, .type=IO_READ},
        {.addr=0x0060, .value=0xd6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x520d, .a=0xf3, .x=0x7e, .y=0xa8, .sp=0x99, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0xd8}, {.addr=0x520d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x520e, .a=0xf3, .x=0x7e, .y=0xa8, .sp=0x99, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0xf3}, {.addr=0x520d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x520d, .value=0xc6, .type=IO_READ},
        {.addr=0x520e, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0xd8, .type=IO_READ},
        {.addr=0x017e, .value=0xf3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xcd64, .a=0x2e, .x=0x29, .y=0x35, .sp=0xbb, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0x7e}, {.addr=0xcd64, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcd65, .a=0x2e, .x=0x29, .y=0x35, .sp=0xbb, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0x2e}, {.addr=0xcd64, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcd64, .value=0xc6, .type=IO_READ},
        {.addr=0xcd65, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0x7e, .type=IO_READ},
        {.addr=0x0029, .value=0x2e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xb1f9, .a=0xe1, .x=0x24, .y=0xc0, .sp=0xb4, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0x96}, {.addr=0xb1f9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb1fa, .a=0xe1, .x=0x24, .y=0xc0, .sp=0xb4, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0xe1}, {.addr=0xb1f9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb1f9, .value=0xc6, .type=IO_READ},
        {.addr=0xb1fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0x96, .type=IO_READ},
        {.addr=0x0024, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x2849, .a=0x31, .x=0x22, .y=0x03, .sp=0xbe, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x7f}, {.addr=0x2849, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x284a, .a=0x31, .x=0x22, .y=0x03, .sp=0xbe, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x31}, {.addr=0x2849, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2849, .value=0xc6, .type=IO_READ},
        {.addr=0x284a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x7f, .type=IO_READ},
        {.addr=0x0122, .value=0x31, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x3782, .a=0x24, .x=0x9b, .y=0xf5, .sp=0x29, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x18}, {.addr=0x3782, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3783, .a=0x24, .x=0x9b, .y=0xf5, .sp=0x29, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0x24}, {.addr=0x3782, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3782, .value=0xc6, .type=IO_READ},
        {.addr=0x3783, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0x18, .type=IO_READ},
        {.addr=0x009b, .value=0x24, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xad8d, .a=0x9f, .x=0xb2, .y=0x07, .sp=0x82, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x59}, {.addr=0xad8d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xad8e, .a=0x9f, .x=0xb2, .y=0x07, .sp=0x82, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x9f}, {.addr=0xad8d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xad8d, .value=0xc6, .type=IO_READ},
        {.addr=0xad8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0x59, .type=IO_READ},
        {.addr=0x00b2, .value=0x9f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xd80f, .a=0xb6, .x=0x2e, .y=0xf9, .sp=0x1a, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0x1c}, {.addr=0xd80f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd810, .a=0xb6, .x=0x2e, .y=0xf9, .sp=0x1a, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0xb6}, {.addr=0xd80f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd80f, .value=0xc6, .type=IO_READ},
        {.addr=0xd810, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0x1c, .type=IO_READ},
        {.addr=0x002e, .value=0xb6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x414d, .a=0xee, .x=0x21, .y=0x45, .sp=0x08, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x02}, {.addr=0x414d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x414e, .a=0xee, .x=0x21, .y=0x45, .sp=0x08, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0xee}, {.addr=0x414d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x414d, .value=0xc6, .type=IO_READ},
        {.addr=0x414e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x02, .type=IO_READ},
        {.addr=0x0021, .value=0xee, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xc176, .a=0xe4, .x=0x74, .y=0x6e, .sp=0x16, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x6a}, {.addr=0xc176, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc177, .a=0xe4, .x=0x74, .y=0x6e, .sp=0x16, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0xe4}, {.addr=0xc176, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc176, .value=0xc6, .type=IO_READ},
        {.addr=0xc177, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x6a, .type=IO_READ},
        {.addr=0x0074, .value=0xe4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x8877, .a=0x75, .x=0x27, .y=0x6b, .sp=0x97, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x19}, {.addr=0x8877, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8878, .a=0x75, .x=0x27, .y=0x6b, .sp=0x97, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x75}, {.addr=0x8877, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8877, .value=0xc6, .type=IO_READ},
        {.addr=0x8878, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x19, .type=IO_READ},
        {.addr=0x0127, .value=0x75, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xba9b, .a=0x3b, .x=0xb5, .y=0x38, .sp=0xde, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x19}, {.addr=0xba9b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xba9c, .a=0x3b, .x=0xb5, .y=0x38, .sp=0xde, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x3b}, {.addr=0xba9b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xba9b, .value=0xc6, .type=IO_READ},
        {.addr=0xba9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x19, .type=IO_READ},
        {.addr=0x01b5, .value=0x3b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x10cb, .a=0xd8, .x=0xd6, .y=0x6a, .sp=0x5e, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x58}, {.addr=0x10cb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x10cc, .a=0xd8, .x=0xd6, .y=0x6a, .sp=0x5e, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0xd8}, {.addr=0x10cb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x10cb, .value=0xc6, .type=IO_READ},
        {.addr=0x10cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x58, .type=IO_READ},
        {.addr=0x01d6, .value=0xd8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x8273, .a=0x70, .x=0x43, .y=0x6c, .sp=0xfa, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x41}, {.addr=0x8273, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8274, .a=0x70, .x=0x43, .y=0x6c, .sp=0xfa, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x70}, {.addr=0x8273, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8273, .value=0xc6, .type=IO_READ},
        {.addr=0x8274, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x41, .type=IO_READ},
        {.addr=0x0043, .value=0x70, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xe472, .a=0xee, .x=0xea, .y=0x4b, .sp=0x49, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x6d}, {.addr=0xe472, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe473, .a=0xee, .x=0xea, .y=0x4b, .sp=0x49, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xee}, {.addr=0xe472, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe472, .value=0xc6, .type=IO_READ},
        {.addr=0xe473, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x6d, .type=IO_READ},
        {.addr=0x01ea, .value=0xee, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xb0dc, .a=0xeb, .x=0x5e, .y=0x6f, .sp=0x3b, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0x71}, {.addr=0xb0dc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb0dd, .a=0xeb, .x=0x5e, .y=0x6f, .sp=0x3b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0xeb}, {.addr=0xb0dc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb0dc, .value=0xc6, .type=IO_READ},
        {.addr=0xb0dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0x71, .type=IO_READ},
        {.addr=0x005e, .value=0xeb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x82cc, .a=0x34, .x=0xc6, .y=0xcd, .sp=0x74, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x7a}, {.addr=0x82cc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x82cd, .a=0x34, .x=0xc6, .y=0xcd, .sp=0x74, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x34}, {.addr=0x82cc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x82cc, .value=0xc6, .type=IO_READ},
        {.addr=0x82cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x7a, .type=IO_READ},
        {.addr=0x01c6, .value=0x34, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x53b9, .a=0x7b, .x=0xd6, .y=0x4d, .sp=0x36, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x50}, {.addr=0x53b9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x53ba, .a=0x7b, .x=0xd6, .y=0x4d, .sp=0x36, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x7b}, {.addr=0x53b9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x53b9, .value=0xc6, .type=IO_READ},
        {.addr=0x53ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0x50, .type=IO_READ},
        {.addr=0x00d6, .value=0x7b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x0244, .a=0x5b, .x=0xf3, .y=0x37, .sp=0x2d, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0xf1}, {.addr=0x0244, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0245, .a=0x5b, .x=0xf3, .y=0x37, .sp=0x2d, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x5b}, {.addr=0x0244, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0244, .value=0xc6, .type=IO_READ},
        {.addr=0x0245, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xf1, .type=IO_READ},
        {.addr=0x01f3, .value=0x5b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x32ea, .a=0xdd, .x=0x80, .y=0x83, .sp=0x69, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x1d}, {.addr=0x32ea, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x32eb, .a=0xdd, .x=0x80, .y=0x83, .sp=0x69, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xdd}, {.addr=0x32ea, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x32ea, .value=0xc6, .type=IO_READ},
        {.addr=0x32eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x1d, .type=IO_READ},
        {.addr=0x0180, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xa67d, .a=0x72, .x=0x3d, .y=0x30, .sp=0xc6, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x16}, {.addr=0xa67d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa67e, .a=0x72, .x=0x3d, .y=0x30, .sp=0xc6, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x72}, {.addr=0xa67d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa67d, .value=0xc6, .type=IO_READ},
        {.addr=0xa67e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x16, .type=IO_READ},
        {.addr=0x013d, .value=0x72, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x8da2, .a=0x94, .x=0x72, .y=0xb6, .sp=0x57, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xfa}, {.addr=0x8da2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8da3, .a=0x94, .x=0x72, .y=0xb6, .sp=0x57, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x94}, {.addr=0x8da2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8da2, .value=0xc6, .type=IO_READ},
        {.addr=0x8da3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xfa, .type=IO_READ},
        {.addr=0x0172, .value=0x94, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xdfdf, .a=0x03, .x=0xb8, .y=0x32, .sp=0x47, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x38}, {.addr=0xdfdf, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdfe0, .a=0x03, .x=0xb8, .y=0x32, .sp=0x47, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x03}, {.addr=0xdfdf, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdfdf, .value=0xc6, .type=IO_READ},
        {.addr=0xdfe0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x38, .type=IO_READ},
        {.addr=0x00b8, .value=0x03, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x14ad, .a=0xb4, .x=0x3b, .y=0x1b, .sp=0x8b, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x90}, {.addr=0x14ad, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x14ae, .a=0xb4, .x=0x3b, .y=0x1b, .sp=0x8b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0xb4}, {.addr=0x14ad, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x14ad, .value=0xc6, .type=IO_READ},
        {.addr=0x14ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x90, .type=IO_READ},
        {.addr=0x003b, .value=0xb4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xf755, .a=0xdc, .x=0x59, .y=0xc3, .sp=0xb2, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x56}, {.addr=0xf755, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf756, .a=0xdc, .x=0x59, .y=0xc3, .sp=0xb2, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0xdc}, {.addr=0xf755, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf755, .value=0xc6, .type=IO_READ},
        {.addr=0xf756, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0x56, .type=IO_READ},
        {.addr=0x0059, .value=0xdc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xed48, .a=0xab, .x=0x4c, .y=0x9b, .sp=0xae, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x60}, {.addr=0xed48, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xed49, .a=0xab, .x=0x4c, .y=0x9b, .sp=0xae, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xab}, {.addr=0xed48, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xed48, .value=0xc6, .type=IO_READ},
        {.addr=0xed49, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0x60, .type=IO_READ},
        {.addr=0x004c, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x1987, .a=0x75, .x=0xff, .y=0x8a, .sp=0x47, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x30}, {.addr=0x1987, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1988, .a=0x75, .x=0xff, .y=0x8a, .sp=0x47, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x75}, {.addr=0x1987, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1987, .value=0xc6, .type=IO_READ},
        {.addr=0x1988, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x30, .type=IO_READ},
        {.addr=0x01ff, .value=0x75, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xa82c, .a=0x9c, .x=0x1c, .y=0xbb, .sp=0x1d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x8f}, {.addr=0xa82c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa82d, .a=0x9c, .x=0x1c, .y=0xbb, .sp=0x1d, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x9c}, {.addr=0xa82c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa82c, .value=0xc6, .type=IO_READ},
        {.addr=0xa82d, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x8f, .type=IO_READ},
        {.addr=0x001c, .value=0x9c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x831d, .a=0xa9, .x=0x00, .y=0xb1, .sp=0xdd, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x16}, {.addr=0x831d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x831e, .a=0xa9, .x=0x00, .y=0xb1, .sp=0xdd, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0xa9}, {.addr=0x831d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x831d, .value=0xc6, .type=IO_READ},
        {.addr=0x831e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0x16, .type=IO_READ},
        {.addr=0x0000, .value=0xa9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x76cd, .a=0x28, .x=0xba, .y=0x8b, .sp=0x1e, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0xbb}, {.addr=0x76cd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x76ce, .a=0x28, .x=0xba, .y=0x8b, .sp=0x1e, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x28}, {.addr=0x76cd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x76cd, .value=0xc6, .type=IO_READ},
        {.addr=0x76ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0xbb, .type=IO_READ},
        {.addr=0x00ba, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x001e, .a=0xaf, .x=0xea, .y=0x4a, .sp=0x58, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0xc6}, {.addr=0x01ea, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x001f, .a=0xaf, .x=0xea, .y=0x4a, .sp=0x58, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0xc6}, {.addr=0x01ea, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x001e, .value=0xc6, .type=IO_READ},
        {.addr=0x001f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x81, .type=IO_READ},
        {.addr=0x01ea, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xa196, .a=0x5f, .x=0x2a, .y=0x5a, .sp=0x68, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x10}, {.addr=0xa196, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa197, .a=0x5f, .x=0x2a, .y=0x5a, .sp=0x68, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x5f}, {.addr=0xa196, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa196, .value=0xc6, .type=IO_READ},
        {.addr=0xa197, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x10, .type=IO_READ},
        {.addr=0x002a, .value=0x5f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x6ab7, .a=0x74, .x=0xd0, .y=0xc2, .sp=0xe5, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x50}, {.addr=0x6ab7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6ab8, .a=0x74, .x=0xd0, .y=0xc2, .sp=0xe5, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x74}, {.addr=0x6ab7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6ab7, .value=0xc6, .type=IO_READ},
        {.addr=0x6ab8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x50, .type=IO_READ},
        {.addr=0x01d0, .value=0x74, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xae2d, .a=0x0c, .x=0x79, .y=0x51, .sp=0x40, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x22}, {.addr=0xae2d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xae2e, .a=0x0c, .x=0x79, .y=0x51, .sp=0x40, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x0c}, {.addr=0xae2d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xae2d, .value=0xc6, .type=IO_READ},
        {.addr=0xae2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x22, .type=IO_READ},
        {.addr=0x0079, .value=0x0c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x9d4d, .a=0x3f, .x=0x51, .y=0x76, .sp=0xa1, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x3c}, {.addr=0x9d4d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9d4e, .a=0x3f, .x=0x51, .y=0x76, .sp=0xa1, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x3f}, {.addr=0x9d4d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9d4d, .value=0xc6, .type=IO_READ},
        {.addr=0x9d4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x3c, .type=IO_READ},
        {.addr=0x0051, .value=0x3f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xe086, .a=0x5c, .x=0x33, .y=0x28, .sp=0x60, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x90}, {.addr=0xe086, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe087, .a=0x5c, .x=0x33, .y=0x28, .sp=0x60, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x5c}, {.addr=0xe086, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe086, .value=0xc6, .type=IO_READ},
        {.addr=0xe087, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x90, .type=IO_READ},
        {.addr=0x0133, .value=0x5c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xe135, .a=0x40, .x=0x72, .y=0xcd, .sp=0x9b, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x96}, {.addr=0xe135, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe136, .a=0x40, .x=0x72, .y=0xcd, .sp=0x9b, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x40}, {.addr=0xe135, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe135, .value=0xc6, .type=IO_READ},
        {.addr=0xe136, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0x96, .type=IO_READ},
        {.addr=0x0072, .value=0x40, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x24f8, .a=0x9c, .x=0x4c, .y=0x64, .sp=0xb3, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x0a}, {.addr=0x24f8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x24f9, .a=0x9c, .x=0x4c, .y=0x64, .sp=0xb3, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0x9c}, {.addr=0x24f8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x24f8, .value=0xc6, .type=IO_READ},
        {.addr=0x24f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0x0a, .type=IO_READ},
        {.addr=0x004c, .value=0x9c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xf6ae, .a=0xc4, .x=0x1e, .y=0x73, .sp=0x95, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x36}, {.addr=0xf6ae, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf6af, .a=0xc4, .x=0x1e, .y=0x73, .sp=0x95, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0xc4}, {.addr=0xf6ae, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf6ae, .value=0xc6, .type=IO_READ},
        {.addr=0xf6af, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x36, .type=IO_READ},
        {.addr=0x011e, .value=0xc4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x8392, .a=0xb8, .x=0x55, .y=0xcb, .sp=0x44, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x6e}, {.addr=0x8392, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8393, .a=0xb8, .x=0x55, .y=0xcb, .sp=0x44, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0xb8}, {.addr=0x8392, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8392, .value=0xc6, .type=IO_READ},
        {.addr=0x8393, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0x6e, .type=IO_READ},
        {.addr=0x0055, .value=0xb8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x6b72, .a=0xe3, .x=0x28, .y=0xc9, .sp=0xc2, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x6d}, {.addr=0x6b72, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6b73, .a=0xe3, .x=0x28, .y=0xc9, .sp=0xc2, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xe3}, {.addr=0x6b72, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6b72, .value=0xc6, .type=IO_READ},
        {.addr=0x6b73, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x6d, .type=IO_READ},
        {.addr=0x0128, .value=0xe3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x7a33, .a=0xe5, .x=0x53, .y=0x4c, .sp=0xff, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x90}, {.addr=0x7a33, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7a34, .a=0xe5, .x=0x53, .y=0x4c, .sp=0xff, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xe5}, {.addr=0x7a33, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7a33, .value=0xc6, .type=IO_READ},
        {.addr=0x7a34, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x90, .type=IO_READ},
        {.addr=0x0153, .value=0xe5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xa42b, .a=0x3c, .x=0xd5, .y=0xd3, .sp=0xea, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0xeb}, {.addr=0xa42b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa42c, .a=0x3c, .x=0xd5, .y=0xd3, .sp=0xea, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x3c}, {.addr=0xa42b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa42b, .value=0xc6, .type=IO_READ},
        {.addr=0xa42c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0xeb, .type=IO_READ},
        {.addr=0x00d5, .value=0x3c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x6f09, .a=0x5f, .x=0xdd, .y=0x89, .sp=0xc1, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0xed}, {.addr=0x6f09, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6f0a, .a=0x5f, .x=0xdd, .y=0x89, .sp=0xc1, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x5f}, {.addr=0x6f09, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6f09, .value=0xc6, .type=IO_READ},
        {.addr=0x6f0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0xed, .type=IO_READ},
        {.addr=0x00dd, .value=0x5f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xf93b, .a=0x3f, .x=0x55, .y=0x25, .sp=0x11, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x6f}, {.addr=0xf93b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf93c, .a=0x3f, .x=0x55, .y=0x25, .sp=0x11, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x3f}, {.addr=0xf93b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf93b, .value=0xc6, .type=IO_READ},
        {.addr=0xf93c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x6f, .type=IO_READ},
        {.addr=0x0155, .value=0x3f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x50cc, .a=0xed, .x=0x31, .y=0xf2, .sp=0x31, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x91}, {.addr=0x50cc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x50cd, .a=0xed, .x=0x31, .y=0xf2, .sp=0x31, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xed}, {.addr=0x50cc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x50cc, .value=0xc6, .type=IO_READ},
        {.addr=0x50cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x91, .type=IO_READ},
        {.addr=0x0131, .value=0xed, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x1cf9, .a=0x49, .x=0x93, .y=0xf6, .sp=0xb6, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x56}, {.addr=0x1cf9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1cfa, .a=0x49, .x=0x93, .y=0xf6, .sp=0xb6, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x49}, {.addr=0x1cf9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1cf9, .value=0xc6, .type=IO_READ},
        {.addr=0x1cfa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x56, .type=IO_READ},
        {.addr=0x0193, .value=0x49, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x664a, .a=0x5c, .x=0x1b, .y=0x98, .sp=0xd6, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x1c}, {.addr=0x664a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x664b, .a=0x5c, .x=0x1b, .y=0x98, .sp=0xd6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x5c}, {.addr=0x664a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x664a, .value=0xc6, .type=IO_READ},
        {.addr=0x664b, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x1c, .type=IO_READ},
        {.addr=0x011b, .value=0x5c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x4c1f, .a=0x5d, .x=0xec, .y=0xe5, .sp=0x78, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x9b}, {.addr=0x4c1f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4c20, .a=0x5d, .x=0xec, .y=0xe5, .sp=0x78, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x5d}, {.addr=0x4c1f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4c1f, .value=0xc6, .type=IO_READ},
        {.addr=0x4c20, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x9b, .type=IO_READ},
        {.addr=0x01ec, .value=0x5d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x228d, .a=0x98, .x=0xee, .y=0xe0, .sp=0xf8, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xa1}, {.addr=0x228d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x228e, .a=0x98, .x=0xee, .y=0xe0, .sp=0xf8, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x98}, {.addr=0x228d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x228d, .value=0xc6, .type=IO_READ},
        {.addr=0x228e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xa1, .type=IO_READ},
        {.addr=0x01ee, .value=0x98, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xd121, .a=0xaa, .x=0xfd, .y=0xfa, .sp=0xe0, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x74}, {.addr=0xd121, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd122, .a=0xaa, .x=0xfd, .y=0xfa, .sp=0xe0, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xaa}, {.addr=0xd121, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd121, .value=0xc6, .type=IO_READ},
        {.addr=0xd122, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x74, .type=IO_READ},
        {.addr=0x01fd, .value=0xaa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0200) {
    const struct CPU_State initial_cpu = {.pc=0x2ea0, .a=0x25, .x=0xa8, .y=0xd8, .sp=0x6e, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0x94}, {.addr=0x2ea0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2ea1, .a=0x25, .x=0xa8, .y=0xd8, .sp=0x6e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0x25}, {.addr=0x2ea0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2ea0, .value=0xc6, .type=IO_READ},
        {.addr=0x2ea1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0x94, .type=IO_READ},
        {.addr=0x00a8, .value=0x25, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0201) {
    const struct CPU_State initial_cpu = {.pc=0x4c62, .a=0xa0, .x=0x94, .y=0xe5, .sp=0xdc, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x27}, {.addr=0x4c62, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4c63, .a=0xa0, .x=0x94, .y=0xe5, .sp=0xdc, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0xa0}, {.addr=0x4c62, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4c62, .value=0xc6, .type=IO_READ},
        {.addr=0x4c63, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x27, .type=IO_READ},
        {.addr=0x0094, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0202) {
    const struct CPU_State initial_cpu = {.pc=0xb8ab, .a=0xd7, .x=0x34, .y=0xc5, .sp=0x93, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x45}, {.addr=0xb8ab, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb8ac, .a=0xd7, .x=0x34, .y=0xc5, .sp=0x93, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xd7}, {.addr=0xb8ab, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb8ab, .value=0xc6, .type=IO_READ},
        {.addr=0xb8ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x45, .type=IO_READ},
        {.addr=0x0134, .value=0xd7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0203) {
    const struct CPU_State initial_cpu = {.pc=0xb21a, .a=0x4e, .x=0xe5, .y=0x42, .sp=0xa3, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0xa2}, {.addr=0xb21a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb21b, .a=0x4e, .x=0xe5, .y=0x42, .sp=0xa3, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x4e}, {.addr=0xb21a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb21a, .value=0xc6, .type=IO_READ},
        {.addr=0xb21b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0xa2, .type=IO_READ},
        {.addr=0x00e5, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0204) {
    const struct CPU_State initial_cpu = {.pc=0xfebc, .a=0x19, .x=0xa1, .y=0x93, .sp=0x2f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xd1}, {.addr=0xfebc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfebd, .a=0x19, .x=0xa1, .y=0x93, .sp=0x2f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x19}, {.addr=0xfebc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfebc, .value=0xc6, .type=IO_READ},
        {.addr=0xfebd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xd1, .type=IO_READ},
        {.addr=0x01a1, .value=0x19, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0205) {
    const struct CPU_State initial_cpu = {.pc=0x36c1, .a=0x1a, .x=0xf7, .y=0xc9, .sp=0xc8, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x80}, {.addr=0x36c1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x36c2, .a=0x1a, .x=0xf7, .y=0xc9, .sp=0xc8, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x1a}, {.addr=0x36c1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x36c1, .value=0xc6, .type=IO_READ},
        {.addr=0x36c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x80, .type=IO_READ},
        {.addr=0x01f7, .value=0x1a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0206) {
    const struct CPU_State initial_cpu = {.pc=0xa3f1, .a=0x45, .x=0x75, .y=0x1a, .sp=0x02, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xfa}, {.addr=0xa3f1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa3f2, .a=0x45, .x=0x75, .y=0x1a, .sp=0x02, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0x45}, {.addr=0xa3f1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa3f1, .value=0xc6, .type=IO_READ},
        {.addr=0xa3f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0xfa, .type=IO_READ},
        {.addr=0x0075, .value=0x45, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0207) {
    const struct CPU_State initial_cpu = {.pc=0xac63, .a=0x27, .x=0x53, .y=0x22, .sp=0x32, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x62}, {.addr=0xac63, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xac64, .a=0x27, .x=0x53, .y=0x22, .sp=0x32, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x27}, {.addr=0xac63, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xac63, .value=0xc6, .type=IO_READ},
        {.addr=0xac64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x62, .type=IO_READ},
        {.addr=0x0153, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0208) {
    const struct CPU_State initial_cpu = {.pc=0xdb37, .a=0x62, .x=0x11, .y=0x10, .sp=0x23, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x22}, {.addr=0xdb37, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdb38, .a=0x62, .x=0x11, .y=0x10, .sp=0x23, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x62}, {.addr=0xdb37, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdb37, .value=0xc6, .type=IO_READ},
        {.addr=0xdb38, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x22, .type=IO_READ},
        {.addr=0x0111, .value=0x62, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0209) {
    const struct CPU_State initial_cpu = {.pc=0x7fff, .a=0x89, .x=0x30, .y=0x4f, .sp=0x18, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xa1}, {.addr=0x7fff, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8000, .a=0x89, .x=0x30, .y=0x4f, .sp=0x18, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x89}, {.addr=0x7fff, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7fff, .value=0xc6, .type=IO_READ},
        {.addr=0x8000, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xa1, .type=IO_READ},
        {.addr=0x0130, .value=0x89, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_020A) {
    const struct CPU_State initial_cpu = {.pc=0x7a54, .a=0x6f, .x=0x33, .y=0x49, .sp=0x43, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x28}, {.addr=0x7a54, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7a55, .a=0x6f, .x=0x33, .y=0x49, .sp=0x43, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x6f}, {.addr=0x7a54, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7a54, .value=0xc6, .type=IO_READ},
        {.addr=0x7a55, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x28, .type=IO_READ},
        {.addr=0x0033, .value=0x6f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_020B) {
    const struct CPU_State initial_cpu = {.pc=0x5962, .a=0x7b, .x=0x13, .y=0xd0, .sp=0x35, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x1a}, {.addr=0x5962, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5963, .a=0x7b, .x=0x13, .y=0xd0, .sp=0x35, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x7b}, {.addr=0x5962, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5962, .value=0xc6, .type=IO_READ},
        {.addr=0x5963, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x1a, .type=IO_READ},
        {.addr=0x0113, .value=0x7b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_020C) {
    const struct CPU_State initial_cpu = {.pc=0xf204, .a=0x4e, .x=0xda, .y=0xbf, .sp=0x68, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xd6}, {.addr=0xf204, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf205, .a=0x4e, .x=0xda, .y=0xbf, .sp=0x68, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x4e}, {.addr=0xf204, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf204, .value=0xc6, .type=IO_READ},
        {.addr=0xf205, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xd6, .type=IO_READ},
        {.addr=0x01da, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_020D) {
    const struct CPU_State initial_cpu = {.pc=0xc617, .a=0x09, .x=0x55, .y=0x62, .sp=0x3c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x60}, {.addr=0xc617, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc618, .a=0x09, .x=0x55, .y=0x62, .sp=0x3c, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x09}, {.addr=0xc617, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc617, .value=0xc6, .type=IO_READ},
        {.addr=0xc618, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x60, .type=IO_READ},
        {.addr=0x0155, .value=0x09, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_020E) {
    const struct CPU_State initial_cpu = {.pc=0x6929, .a=0xe0, .x=0x50, .y=0xe3, .sp=0xb8, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x13}, {.addr=0x6929, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x692a, .a=0xe0, .x=0x50, .y=0xe3, .sp=0xb8, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xe0}, {.addr=0x6929, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6929, .value=0xc6, .type=IO_READ},
        {.addr=0x692a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x13, .type=IO_READ},
        {.addr=0x0150, .value=0xe0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_020F) {
    const struct CPU_State initial_cpu = {.pc=0x7521, .a=0xdd, .x=0x1f, .y=0x6e, .sp=0x5f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x25}, {.addr=0x7521, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7522, .a=0xdd, .x=0x1f, .y=0x6e, .sp=0x5f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xdd}, {.addr=0x7521, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7521, .value=0xc6, .type=IO_READ},
        {.addr=0x7522, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x25, .type=IO_READ},
        {.addr=0x011f, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0210) {
    const struct CPU_State initial_cpu = {.pc=0x7695, .a=0xa4, .x=0xd8, .y=0x7c, .sp=0x39, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x25}, {.addr=0x7695, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7696, .a=0xa4, .x=0xd8, .y=0x7c, .sp=0x39, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0xa4}, {.addr=0x7695, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7695, .value=0xc6, .type=IO_READ},
        {.addr=0x7696, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x25, .type=IO_READ},
        {.addr=0x00d8, .value=0xa4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0211) {
    const struct CPU_State initial_cpu = {.pc=0x87ff, .a=0x5c, .x=0x50, .y=0xba, .sp=0x17, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xd9}, {.addr=0x87ff, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8800, .a=0x5c, .x=0x50, .y=0xba, .sp=0x17, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x5c}, {.addr=0x87ff, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x87ff, .value=0xc6, .type=IO_READ},
        {.addr=0x8800, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xd9, .type=IO_READ},
        {.addr=0x0150, .value=0x5c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0212) {
    const struct CPU_State initial_cpu = {.pc=0x279a, .a=0x81, .x=0xde, .y=0xc2, .sp=0x57, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0x42}, {.addr=0x279a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x279b, .a=0x81, .x=0xde, .y=0xc2, .sp=0x57, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0x81}, {.addr=0x279a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x279a, .value=0xc6, .type=IO_READ},
        {.addr=0x279b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00de, .value=0x42, .type=IO_READ},
        {.addr=0x00de, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0213) {
    const struct CPU_State initial_cpu = {.pc=0x164d, .a=0xfb, .x=0x72, .y=0x59, .sp=0xb5, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xcd}, {.addr=0x164d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x164e, .a=0xfb, .x=0x72, .y=0x59, .sp=0xb5, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xfb}, {.addr=0x164d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x164d, .value=0xc6, .type=IO_READ},
        {.addr=0x164e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xcd, .type=IO_READ},
        {.addr=0x0172, .value=0xfb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0214) {
    const struct CPU_State initial_cpu = {.pc=0x0c02, .a=0x10, .x=0xbb, .y=0xf1, .sp=0xe7, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x77}, {.addr=0x0c02, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0c03, .a=0x10, .x=0xbb, .y=0xf1, .sp=0xe7, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x10}, {.addr=0x0c02, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0c02, .value=0xc6, .type=IO_READ},
        {.addr=0x0c03, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x77, .type=IO_READ},
        {.addr=0x01bb, .value=0x10, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0215) {
    const struct CPU_State initial_cpu = {.pc=0x5e8d, .a=0xdf, .x=0x9f, .y=0xe0, .sp=0x7b, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xbb}, {.addr=0x5e8d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5e8e, .a=0xdf, .x=0x9f, .y=0xe0, .sp=0x7b, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xdf}, {.addr=0x5e8d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5e8d, .value=0xc6, .type=IO_READ},
        {.addr=0x5e8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xbb, .type=IO_READ},
        {.addr=0x009f, .value=0xdf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0216) {
    const struct CPU_State initial_cpu = {.pc=0x9518, .a=0x78, .x=0x3b, .y=0x2f, .sp=0x30, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0xa2}, {.addr=0x9518, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9519, .a=0x78, .x=0x3b, .y=0x2f, .sp=0x30, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x78}, {.addr=0x9518, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9518, .value=0xc6, .type=IO_READ},
        {.addr=0x9519, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0xa2, .type=IO_READ},
        {.addr=0x003b, .value=0x78, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0217) {
    const struct CPU_State initial_cpu = {.pc=0x04dc, .a=0x85, .x=0x5d, .y=0xee, .sp=0x71, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x24}, {.addr=0x04dc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x04dd, .a=0x85, .x=0x5d, .y=0xee, .sp=0x71, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x85}, {.addr=0x04dc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x04dc, .value=0xc6, .type=IO_READ},
        {.addr=0x04dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0x24, .type=IO_READ},
        {.addr=0x005d, .value=0x85, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0218) {
    const struct CPU_State initial_cpu = {.pc=0x02c7, .a=0x7b, .x=0xe7, .y=0xd3, .sp=0xaa, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0xac}, {.addr=0x02c7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x02c8, .a=0x7b, .x=0xe7, .y=0xd3, .sp=0xaa, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x7b}, {.addr=0x02c7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x02c7, .value=0xc6, .type=IO_READ},
        {.addr=0x02c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xac, .type=IO_READ},
        {.addr=0x00e7, .value=0x7b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0219) {
    const struct CPU_State initial_cpu = {.pc=0x1dbc, .a=0x5c, .x=0x48, .y=0xfc, .sp=0x6c, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x8b}, {.addr=0x1dbc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1dbd, .a=0x5c, .x=0x48, .y=0xfc, .sp=0x6c, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x5c}, {.addr=0x1dbc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1dbc, .value=0xc6, .type=IO_READ},
        {.addr=0x1dbd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x8b, .type=IO_READ},
        {.addr=0x0148, .value=0x5c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_021A) {
    const struct CPU_State initial_cpu = {.pc=0x8773, .a=0xa3, .x=0x37, .y=0x4d, .sp=0x02, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x04}, {.addr=0x8773, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8774, .a=0xa3, .x=0x37, .y=0x4d, .sp=0x02, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xa3}, {.addr=0x8773, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8773, .value=0xc6, .type=IO_READ},
        {.addr=0x8774, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x04, .type=IO_READ},
        {.addr=0x0137, .value=0xa3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_021B) {
    const struct CPU_State initial_cpu = {.pc=0x7a6f, .a=0xd5, .x=0x4f, .y=0xc4, .sp=0x47, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0xd4}, {.addr=0x7a6f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7a70, .a=0xd5, .x=0x4f, .y=0xc4, .sp=0x47, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0xd5}, {.addr=0x7a6f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7a6f, .value=0xc6, .type=IO_READ},
        {.addr=0x7a70, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0xd4, .type=IO_READ},
        {.addr=0x004f, .value=0xd5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_021C) {
    const struct CPU_State initial_cpu = {.pc=0xbb5c, .a=0x00, .x=0xbb, .y=0x16, .sp=0x6b, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0xe3}, {.addr=0xbb5c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbb5d, .a=0x00, .x=0xbb, .y=0x16, .sp=0x6b, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0xbb5c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbb5c, .value=0xc6, .type=IO_READ},
        {.addr=0xbb5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xe3, .type=IO_READ},
        {.addr=0x01bb, .value=0x00, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_021D) {
    const struct CPU_State initial_cpu = {.pc=0x3f09, .a=0xe8, .x=0x4f, .y=0xd6, .sp=0x3c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x9c}, {.addr=0x3f09, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3f0a, .a=0xe8, .x=0x4f, .y=0xd6, .sp=0x3c, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xe8}, {.addr=0x3f09, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3f09, .value=0xc6, .type=IO_READ},
        {.addr=0x3f0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x9c, .type=IO_READ},
        {.addr=0x014f, .value=0xe8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_021E) {
    const struct CPU_State initial_cpu = {.pc=0xf5bf, .a=0x2e, .x=0x3a, .y=0x06, .sp=0x72, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x28}, {.addr=0xf5bf, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf5c0, .a=0x2e, .x=0x3a, .y=0x06, .sp=0x72, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0x2e}, {.addr=0xf5bf, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf5bf, .value=0xc6, .type=IO_READ},
        {.addr=0xf5c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x28, .type=IO_READ},
        {.addr=0x003a, .value=0x2e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_021F) {
    const struct CPU_State initial_cpu = {.pc=0xfc83, .a=0x95, .x=0x05, .y=0xaa, .sp=0x7b, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0xa8}, {.addr=0xfc83, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfc84, .a=0x95, .x=0x05, .y=0xaa, .sp=0x7b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x95}, {.addr=0xfc83, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfc83, .value=0xc6, .type=IO_READ},
        {.addr=0xfc84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0xa8, .type=IO_READ},
        {.addr=0x0005, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0220) {
    const struct CPU_State initial_cpu = {.pc=0xc13a, .a=0x3d, .x=0x1b, .y=0x70, .sp=0x5e, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0xb4}, {.addr=0xc13a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc13b, .a=0x3d, .x=0x1b, .y=0x70, .sp=0x5e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x3d}, {.addr=0xc13a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc13a, .value=0xc6, .type=IO_READ},
        {.addr=0xc13b, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0xb4, .type=IO_READ},
        {.addr=0x001b, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0221) {
    const struct CPU_State initial_cpu = {.pc=0xd47c, .a=0xe7, .x=0x03, .y=0x2e, .sp=0xc9, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0xff}, {.addr=0xd47c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd47d, .a=0xe7, .x=0x03, .y=0x2e, .sp=0xc9, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0xe7}, {.addr=0xd47c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd47c, .value=0xc6, .type=IO_READ},
        {.addr=0xd47d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0xff, .type=IO_READ},
        {.addr=0x0003, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0222) {
    const struct CPU_State initial_cpu = {.pc=0xb517, .a=0xe3, .x=0x21, .y=0xac, .sp=0xab, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x18}, {.addr=0xb517, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb518, .a=0xe3, .x=0x21, .y=0xac, .sp=0xab, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0xe3}, {.addr=0xb517, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb517, .value=0xc6, .type=IO_READ},
        {.addr=0xb518, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x18, .type=IO_READ},
        {.addr=0x0021, .value=0xe3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0223) {
    const struct CPU_State initial_cpu = {.pc=0xfda4, .a=0x9b, .x=0x77, .y=0xf3, .sp=0x1a, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x24}, {.addr=0xfda4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfda5, .a=0x9b, .x=0x77, .y=0xf3, .sp=0x1a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x9b}, {.addr=0xfda4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfda4, .value=0xc6, .type=IO_READ},
        {.addr=0xfda5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x24, .type=IO_READ},
        {.addr=0x0177, .value=0x9b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0224) {
    const struct CPU_State initial_cpu = {.pc=0x1807, .a=0x81, .x=0xf4, .y=0x00, .sp=0x58, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x91}, {.addr=0x1807, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1808, .a=0x81, .x=0xf4, .y=0x00, .sp=0x58, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x81}, {.addr=0x1807, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1807, .value=0xc6, .type=IO_READ},
        {.addr=0x1808, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x91, .type=IO_READ},
        {.addr=0x01f4, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0225) {
    const struct CPU_State initial_cpu = {.pc=0xae5e, .a=0x57, .x=0x21, .y=0x7f, .sp=0xe9, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x73}, {.addr=0xae5e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xae5f, .a=0x57, .x=0x21, .y=0x7f, .sp=0xe9, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x57}, {.addr=0xae5e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xae5e, .value=0xc6, .type=IO_READ},
        {.addr=0xae5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x73, .type=IO_READ},
        {.addr=0x0021, .value=0x57, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0226) {
    const struct CPU_State initial_cpu = {.pc=0xfeb5, .a=0xcd, .x=0xb6, .y=0x8d, .sp=0x2f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0xa2}, {.addr=0xfeb5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfeb6, .a=0xcd, .x=0xb6, .y=0x8d, .sp=0x2f, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0xcd}, {.addr=0xfeb5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfeb5, .value=0xc6, .type=IO_READ},
        {.addr=0xfeb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0xa2, .type=IO_READ},
        {.addr=0x00b6, .value=0xcd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0227) {
    const struct CPU_State initial_cpu = {.pc=0x3a94, .a=0xf0, .x=0x5c, .y=0x77, .sp=0x28, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x67}, {.addr=0x3a94, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3a95, .a=0xf0, .x=0x5c, .y=0x77, .sp=0x28, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xf0}, {.addr=0x3a94, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3a94, .value=0xc6, .type=IO_READ},
        {.addr=0x3a95, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x67, .type=IO_READ},
        {.addr=0x015c, .value=0xf0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0228) {
    const struct CPU_State initial_cpu = {.pc=0x7d08, .a=0x8a, .x=0x93, .y=0x75, .sp=0x1e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x39}, {.addr=0x7d08, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7d09, .a=0x8a, .x=0x93, .y=0x75, .sp=0x1e, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x8a}, {.addr=0x7d08, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7d08, .value=0xc6, .type=IO_READ},
        {.addr=0x7d09, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x39, .type=IO_READ},
        {.addr=0x0093, .value=0x8a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0229) {
    const struct CPU_State initial_cpu = {.pc=0x34fc, .a=0xfb, .x=0x90, .y=0xc3, .sp=0x73, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xb0}, {.addr=0x34fc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x34fd, .a=0xfb, .x=0x90, .y=0xc3, .sp=0x73, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xfb}, {.addr=0x34fc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x34fc, .value=0xc6, .type=IO_READ},
        {.addr=0x34fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0xb0, .type=IO_READ},
        {.addr=0x0190, .value=0xfb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_022A) {
    const struct CPU_State initial_cpu = {.pc=0x45e1, .a=0x6e, .x=0xc8, .y=0xdf, .sp=0x93, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x45}, {.addr=0x45e1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x45e2, .a=0x6e, .x=0xc8, .y=0xdf, .sp=0x93, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x6e}, {.addr=0x45e1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x45e1, .value=0xc6, .type=IO_READ},
        {.addr=0x45e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0x45, .type=IO_READ},
        {.addr=0x00c8, .value=0x6e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_022B) {
    const struct CPU_State initial_cpu = {.pc=0x8d13, .a=0xce, .x=0x5c, .y=0xe6, .sp=0x6d, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x67}, {.addr=0x8d13, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8d14, .a=0xce, .x=0x5c, .y=0xe6, .sp=0x6d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0xce}, {.addr=0x8d13, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8d13, .value=0xc6, .type=IO_READ},
        {.addr=0x8d14, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0x67, .type=IO_READ},
        {.addr=0x005c, .value=0xce, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_022C) {
    const struct CPU_State initial_cpu = {.pc=0x4dcc, .a=0xd4, .x=0xb3, .y=0xd7, .sp=0x4c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xdd}, {.addr=0x4dcc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4dcd, .a=0xd4, .x=0xb3, .y=0xd7, .sp=0x4c, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xd4}, {.addr=0x4dcc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4dcc, .value=0xc6, .type=IO_READ},
        {.addr=0x4dcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0xdd, .type=IO_READ},
        {.addr=0x01b3, .value=0xd4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_022D) {
    const struct CPU_State initial_cpu = {.pc=0x89c5, .a=0x64, .x=0xc0, .y=0x8f, .sp=0xb0, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x18}, {.addr=0x89c5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x89c6, .a=0x64, .x=0xc0, .y=0x8f, .sp=0xb0, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x64}, {.addr=0x89c5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x89c5, .value=0xc6, .type=IO_READ},
        {.addr=0x89c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x18, .type=IO_READ},
        {.addr=0x00c0, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_022E) {
    const struct CPU_State initial_cpu = {.pc=0x925c, .a=0xf6, .x=0x5a, .y=0x97, .sp=0x97, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xea}, {.addr=0x925c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x925d, .a=0xf6, .x=0x5a, .y=0x97, .sp=0x97, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xf6}, {.addr=0x925c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x925c, .value=0xc6, .type=IO_READ},
        {.addr=0x925d, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xea, .type=IO_READ},
        {.addr=0x015a, .value=0xf6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_022F) {
    const struct CPU_State initial_cpu = {.pc=0x8ab7, .a=0x4d, .x=0xef, .y=0xec, .sp=0xa5, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0xf5}, {.addr=0x8ab7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8ab8, .a=0x4d, .x=0xef, .y=0xec, .sp=0xa5, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0x4d}, {.addr=0x8ab7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8ab7, .value=0xc6, .type=IO_READ},
        {.addr=0x8ab8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0xf5, .type=IO_READ},
        {.addr=0x00ef, .value=0x4d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0230) {
    const struct CPU_State initial_cpu = {.pc=0x7730, .a=0xed, .x=0x1e, .y=0x8d, .sp=0xc9, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x11}, {.addr=0x7730, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7731, .a=0xed, .x=0x1e, .y=0x8d, .sp=0xc9, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0xed}, {.addr=0x7730, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7730, .value=0xc6, .type=IO_READ},
        {.addr=0x7731, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x11, .type=IO_READ},
        {.addr=0x011e, .value=0xed, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0231) {
    const struct CPU_State initial_cpu = {.pc=0x6f3d, .a=0x9d, .x=0x86, .y=0x76, .sp=0xd8, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x7f}, {.addr=0x6f3d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6f3e, .a=0x9d, .x=0x86, .y=0x76, .sp=0xd8, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x9d}, {.addr=0x6f3d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6f3d, .value=0xc6, .type=IO_READ},
        {.addr=0x6f3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x7f, .type=IO_READ},
        {.addr=0x0186, .value=0x9d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0232) {
    const struct CPU_State initial_cpu = {.pc=0xef7d, .a=0x42, .x=0x98, .y=0x95, .sp=0xf5, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x18}, {.addr=0xef7d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xef7e, .a=0x42, .x=0x98, .y=0x95, .sp=0xf5, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x42}, {.addr=0xef7d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xef7d, .value=0xc6, .type=IO_READ},
        {.addr=0xef7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x18, .type=IO_READ},
        {.addr=0x0098, .value=0x42, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0233) {
    const struct CPU_State initial_cpu = {.pc=0xcdf5, .a=0x22, .x=0x99, .y=0x83, .sp=0x5f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x24}, {.addr=0xcdf5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcdf6, .a=0x22, .x=0x99, .y=0x83, .sp=0x5f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x22}, {.addr=0xcdf5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcdf5, .value=0xc6, .type=IO_READ},
        {.addr=0xcdf6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0x24, .type=IO_READ},
        {.addr=0x0099, .value=0x22, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0234) {
    const struct CPU_State initial_cpu = {.pc=0x5b25, .a=0xfa, .x=0xee, .y=0x58, .sp=0x81, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x07}, {.addr=0x5b25, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5b26, .a=0xfa, .x=0xee, .y=0x58, .sp=0x81, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xfa}, {.addr=0x5b25, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5b25, .value=0xc6, .type=IO_READ},
        {.addr=0x5b26, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x07, .type=IO_READ},
        {.addr=0x01ee, .value=0xfa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0235) {
    const struct CPU_State initial_cpu = {.pc=0x97ea, .a=0xa6, .x=0x35, .y=0xeb, .sp=0x25, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xae}, {.addr=0x97ea, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x97eb, .a=0xa6, .x=0x35, .y=0xeb, .sp=0x25, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xa6}, {.addr=0x97ea, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x97ea, .value=0xc6, .type=IO_READ},
        {.addr=0x97eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xae, .type=IO_READ},
        {.addr=0x0135, .value=0xa6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0236) {
    const struct CPU_State initial_cpu = {.pc=0xc52c, .a=0x9b, .x=0x8e, .y=0x17, .sp=0x0b, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0xa4}, {.addr=0xc52c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc52d, .a=0x9b, .x=0x8e, .y=0x17, .sp=0x0b, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x9b}, {.addr=0xc52c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc52c, .value=0xc6, .type=IO_READ},
        {.addr=0xc52d, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0xa4, .type=IO_READ},
        {.addr=0x008e, .value=0x9b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0237) {
    const struct CPU_State initial_cpu = {.pc=0x62ee, .a=0xd3, .x=0x07, .y=0x31, .sp=0x6e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0xb9}, {.addr=0x62ee, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x62ef, .a=0xd3, .x=0x07, .y=0x31, .sp=0x6e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0xd3}, {.addr=0x62ee, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x62ee, .value=0xc6, .type=IO_READ},
        {.addr=0x62ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0xb9, .type=IO_READ},
        {.addr=0x0007, .value=0xd3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0238) {
    const struct CPU_State initial_cpu = {.pc=0xafe7, .a=0x82, .x=0x97, .y=0xc5, .sp=0xbf, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0xb7}, {.addr=0xafe7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xafe8, .a=0x82, .x=0x97, .y=0xc5, .sp=0xbf, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x82}, {.addr=0xafe7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xafe7, .value=0xc6, .type=IO_READ},
        {.addr=0xafe8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0xb7, .type=IO_READ},
        {.addr=0x0097, .value=0x82, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0239) {
    const struct CPU_State initial_cpu = {.pc=0xe920, .a=0xbe, .x=0x31, .y=0xae, .sp=0x98, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x81}, {.addr=0xe920, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe921, .a=0xbe, .x=0x31, .y=0xae, .sp=0x98, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xbe}, {.addr=0xe920, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe920, .value=0xc6, .type=IO_READ},
        {.addr=0xe921, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x81, .type=IO_READ},
        {.addr=0x0031, .value=0xbe, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_023A) {
    const struct CPU_State initial_cpu = {.pc=0x0038, .a=0x14, .x=0x70, .y=0x6a, .sp=0xb8, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0xc6}, {.addr=0x0070, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x0039, .a=0x14, .x=0x70, .y=0x6a, .sp=0xb8, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0xc6}, {.addr=0x0070, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x0038, .value=0xc6, .type=IO_READ},
        {.addr=0x0039, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x5f, .type=IO_READ},
        {.addr=0x0070, .value=0x14, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_023B) {
    const struct CPU_State initial_cpu = {.pc=0x9726, .a=0xfe, .x=0x98, .y=0x97, .sp=0x8a, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x2a}, {.addr=0x9726, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9727, .a=0xfe, .x=0x98, .y=0x97, .sp=0x8a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0xfe}, {.addr=0x9726, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9726, .value=0xc6, .type=IO_READ},
        {.addr=0x9727, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x2a, .type=IO_READ},
        {.addr=0x0098, .value=0xfe, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_023C) {
    const struct CPU_State initial_cpu = {.pc=0x5413, .a=0x54, .x=0xf1, .y=0xf4, .sp=0x35, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x16}, {.addr=0x5413, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5414, .a=0x54, .x=0xf1, .y=0xf4, .sp=0x35, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x54}, {.addr=0x5413, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5413, .value=0xc6, .type=IO_READ},
        {.addr=0x5414, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x16, .type=IO_READ},
        {.addr=0x01f1, .value=0x54, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_023D) {
    const struct CPU_State initial_cpu = {.pc=0x2560, .a=0x46, .x=0xd4, .y=0x6d, .sp=0x42, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x14}, {.addr=0x2560, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2561, .a=0x46, .x=0xd4, .y=0x6d, .sp=0x42, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x46}, {.addr=0x2560, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2560, .value=0xc6, .type=IO_READ},
        {.addr=0x2561, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x14, .type=IO_READ},
        {.addr=0x01d4, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_023E) {
    const struct CPU_State initial_cpu = {.pc=0x8866, .a=0xe3, .x=0xa0, .y=0x2b, .sp=0xcb, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xb9}, {.addr=0x8866, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8867, .a=0xe3, .x=0xa0, .y=0x2b, .sp=0xcb, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xe3}, {.addr=0x8866, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8866, .value=0xc6, .type=IO_READ},
        {.addr=0x8867, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xb9, .type=IO_READ},
        {.addr=0x01a0, .value=0xe3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_023F) {
    const struct CPU_State initial_cpu = {.pc=0x8cfa, .a=0x2b, .x=0x8d, .y=0x33, .sp=0x8f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x17}, {.addr=0x8cfa, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8cfb, .a=0x2b, .x=0x8d, .y=0x33, .sp=0x8f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x2b}, {.addr=0x8cfa, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8cfa, .value=0xc6, .type=IO_READ},
        {.addr=0x8cfb, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x17, .type=IO_READ},
        {.addr=0x018d, .value=0x2b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0240) {
    const struct CPU_State initial_cpu = {.pc=0x7e28, .a=0x63, .x=0x90, .y=0x3f, .sp=0xe6, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xbb}, {.addr=0x7e28, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7e29, .a=0x63, .x=0x90, .y=0x3f, .sp=0xe6, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x63}, {.addr=0x7e28, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7e28, .value=0xc6, .type=IO_READ},
        {.addr=0x7e29, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0xbb, .type=IO_READ},
        {.addr=0x0190, .value=0x63, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0241) {
    const struct CPU_State initial_cpu = {.pc=0x4958, .a=0x1d, .x=0x5f, .y=0x88, .sp=0x67, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0xb5}, {.addr=0x4958, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4959, .a=0x1d, .x=0x5f, .y=0x88, .sp=0x67, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x1d}, {.addr=0x4958, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4958, .value=0xc6, .type=IO_READ},
        {.addr=0x4959, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0xb5, .type=IO_READ},
        {.addr=0x005f, .value=0x1d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0242) {
    const struct CPU_State initial_cpu = {.pc=0x9b9e, .a=0x2d, .x=0xeb, .y=0x8c, .sp=0x0e, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x82}, {.addr=0x9b9e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9b9f, .a=0x2d, .x=0xeb, .y=0x8c, .sp=0x0e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x2d}, {.addr=0x9b9e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9b9e, .value=0xc6, .type=IO_READ},
        {.addr=0x9b9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x82, .type=IO_READ},
        {.addr=0x00eb, .value=0x2d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0243) {
    const struct CPU_State initial_cpu = {.pc=0x8bdc, .a=0xb1, .x=0x99, .y=0xf4, .sp=0xb3, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0xc5}, {.addr=0x8bdc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8bdd, .a=0xb1, .x=0x99, .y=0xf4, .sp=0xb3, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0xb1}, {.addr=0x8bdc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8bdc, .value=0xc6, .type=IO_READ},
        {.addr=0x8bdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0xc5, .type=IO_READ},
        {.addr=0x0099, .value=0xb1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0244) {
    const struct CPU_State initial_cpu = {.pc=0x4ee8, .a=0xe6, .x=0x31, .y=0x67, .sp=0xb4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x44}, {.addr=0x4ee8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4ee9, .a=0xe6, .x=0x31, .y=0x67, .sp=0xb4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xe6}, {.addr=0x4ee8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4ee8, .value=0xc6, .type=IO_READ},
        {.addr=0x4ee9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x44, .type=IO_READ},
        {.addr=0x0031, .value=0xe6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0245) {
    const struct CPU_State initial_cpu = {.pc=0x68f5, .a=0xc7, .x=0x6a, .y=0x58, .sp=0xd9, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x4f}, {.addr=0x68f5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x68f6, .a=0xc7, .x=0x6a, .y=0x58, .sp=0xd9, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xc7}, {.addr=0x68f5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x68f5, .value=0xc6, .type=IO_READ},
        {.addr=0x68f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x4f, .type=IO_READ},
        {.addr=0x016a, .value=0xc7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0246) {
    const struct CPU_State initial_cpu = {.pc=0x7da9, .a=0x5f, .x=0x8a, .y=0xf8, .sp=0x3f, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x6f}, {.addr=0x7da9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7daa, .a=0x5f, .x=0x8a, .y=0xf8, .sp=0x3f, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0x5f}, {.addr=0x7da9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7da9, .value=0xc6, .type=IO_READ},
        {.addr=0x7daa, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0x6f, .type=IO_READ},
        {.addr=0x008a, .value=0x5f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0247) {
    const struct CPU_State initial_cpu = {.pc=0x8d48, .a=0x66, .x=0xd9, .y=0xee, .sp=0xea, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x53}, {.addr=0x8d48, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8d49, .a=0x66, .x=0xd9, .y=0xee, .sp=0xea, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x66}, {.addr=0x8d48, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8d48, .value=0xc6, .type=IO_READ},
        {.addr=0x8d49, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x53, .type=IO_READ},
        {.addr=0x01d9, .value=0x66, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0248) {
    const struct CPU_State initial_cpu = {.pc=0xd755, .a=0x1b, .x=0xb3, .y=0x01, .sp=0xc3, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x77}, {.addr=0xd755, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd756, .a=0x1b, .x=0xb3, .y=0x01, .sp=0xc3, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x1b}, {.addr=0xd755, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd755, .value=0xc6, .type=IO_READ},
        {.addr=0xd756, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x77, .type=IO_READ},
        {.addr=0x01b3, .value=0x1b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0249) {
    const struct CPU_State initial_cpu = {.pc=0x0d93, .a=0x1f, .x=0x59, .y=0x22, .sp=0x5d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x0e}, {.addr=0x0d93, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0d94, .a=0x1f, .x=0x59, .y=0x22, .sp=0x5d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0x1f}, {.addr=0x0d93, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0d93, .value=0xc6, .type=IO_READ},
        {.addr=0x0d94, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0x0e, .type=IO_READ},
        {.addr=0x0059, .value=0x1f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_024B) {
    const struct CPU_State initial_cpu = {.pc=0x55b4, .a=0x33, .x=0x07, .y=0xc1, .sp=0x21, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x24}, {.addr=0x55b4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x55b5, .a=0x33, .x=0x07, .y=0xc1, .sp=0x21, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x33}, {.addr=0x55b4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x55b4, .value=0xc6, .type=IO_READ},
        {.addr=0x55b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x24, .type=IO_READ},
        {.addr=0x0007, .value=0x33, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_024C) {
    const struct CPU_State initial_cpu = {.pc=0x3163, .a=0x2f, .x=0x7e, .y=0x2c, .sp=0xc4, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x1b}, {.addr=0x3163, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3164, .a=0x2f, .x=0x7e, .y=0x2c, .sp=0xc4, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x2f}, {.addr=0x3163, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3163, .value=0xc6, .type=IO_READ},
        {.addr=0x3164, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x1b, .type=IO_READ},
        {.addr=0x017e, .value=0x2f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_024D) {
    const struct CPU_State initial_cpu = {.pc=0x349e, .a=0x70, .x=0xc9, .y=0x62, .sp=0x5b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x13}, {.addr=0x349e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x349f, .a=0x70, .x=0xc9, .y=0x62, .sp=0x5b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x70}, {.addr=0x349e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x349e, .value=0xc6, .type=IO_READ},
        {.addr=0x349f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x13, .type=IO_READ},
        {.addr=0x01c9, .value=0x70, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_024E) {
    const struct CPU_State initial_cpu = {.pc=0x862d, .a=0x8b, .x=0xcd, .y=0xf9, .sp=0x94, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x9c}, {.addr=0x862d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x862e, .a=0x8b, .x=0xcd, .y=0xf9, .sp=0x94, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x8b}, {.addr=0x862d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x862d, .value=0xc6, .type=IO_READ},
        {.addr=0x862e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x9c, .type=IO_READ},
        {.addr=0x00cd, .value=0x8b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_024F) {
    const struct CPU_State initial_cpu = {.pc=0x5f5a, .a=0x77, .x=0x34, .y=0x53, .sp=0x0b, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0x27}, {.addr=0x5f5a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5f5b, .a=0x77, .x=0x34, .y=0x53, .sp=0x0b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0x77}, {.addr=0x5f5a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5f5a, .value=0xc6, .type=IO_READ},
        {.addr=0x5f5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0x27, .type=IO_READ},
        {.addr=0x0034, .value=0x77, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0250) {
    const struct CPU_State initial_cpu = {.pc=0xb8e3, .a=0xe0, .x=0x8a, .y=0x1d, .sp=0x3f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x8b}, {.addr=0xb8e3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb8e4, .a=0xe0, .x=0x8a, .y=0x1d, .sp=0x3f, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xe0}, {.addr=0xb8e3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb8e3, .value=0xc6, .type=IO_READ},
        {.addr=0xb8e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0x8b, .type=IO_READ},
        {.addr=0x008a, .value=0xe0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0251) {
    const struct CPU_State initial_cpu = {.pc=0xe311, .a=0x0e, .x=0x15, .y=0x20, .sp=0x9a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0xf2}, {.addr=0xe311, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe312, .a=0x0e, .x=0x15, .y=0x20, .sp=0x9a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0x0e}, {.addr=0xe311, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe311, .value=0xc6, .type=IO_READ},
        {.addr=0xe312, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0xf2, .type=IO_READ},
        {.addr=0x0015, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0252) {
    const struct CPU_State initial_cpu = {.pc=0x4a8b, .a=0xa2, .x=0xc5, .y=0x86, .sp=0x53, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x16}, {.addr=0x4a8b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4a8c, .a=0xa2, .x=0xc5, .y=0x86, .sp=0x53, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0xa2}, {.addr=0x4a8b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4a8b, .value=0xc6, .type=IO_READ},
        {.addr=0x4a8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x16, .type=IO_READ},
        {.addr=0x00c5, .value=0xa2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0253) {
    const struct CPU_State initial_cpu = {.pc=0x5597, .a=0x8f, .x=0x66, .y=0xb2, .sp=0x2a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xa5}, {.addr=0x5597, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5598, .a=0x8f, .x=0x66, .y=0xb2, .sp=0x2a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x8f}, {.addr=0x5597, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5597, .value=0xc6, .type=IO_READ},
        {.addr=0x5598, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xa5, .type=IO_READ},
        {.addr=0x0166, .value=0x8f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0254) {
    const struct CPU_State initial_cpu = {.pc=0x10d6, .a=0xe5, .x=0xb9, .y=0x80, .sp=0x94, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x09}, {.addr=0x10d6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x10d7, .a=0xe5, .x=0xb9, .y=0x80, .sp=0x94, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xe5}, {.addr=0x10d6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x10d6, .value=0xc6, .type=IO_READ},
        {.addr=0x10d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x09, .type=IO_READ},
        {.addr=0x01b9, .value=0xe5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0256) {
    const struct CPU_State initial_cpu = {.pc=0x3857, .a=0x3a, .x=0x1b, .y=0x1d, .sp=0xa3, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0xa8}, {.addr=0x3857, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3858, .a=0x3a, .x=0x1b, .y=0x1d, .sp=0xa3, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x3a}, {.addr=0x3857, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3857, .value=0xc6, .type=IO_READ},
        {.addr=0x3858, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0xa8, .type=IO_READ},
        {.addr=0x001b, .value=0x3a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0257) {
    const struct CPU_State initial_cpu = {.pc=0xac32, .a=0xd7, .x=0x8f, .y=0x0b, .sp=0x9e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xfb}, {.addr=0xac32, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xac33, .a=0xd7, .x=0x8f, .y=0x0b, .sp=0x9e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xd7}, {.addr=0xac32, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xac32, .value=0xc6, .type=IO_READ},
        {.addr=0xac33, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0xfb, .type=IO_READ},
        {.addr=0x018f, .value=0xd7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0258) {
    const struct CPU_State initial_cpu = {.pc=0x8c90, .a=0xc2, .x=0x61, .y=0x8b, .sp=0xf0, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x35}, {.addr=0x8c90, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8c91, .a=0xc2, .x=0x61, .y=0x8b, .sp=0xf0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xc2}, {.addr=0x8c90, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8c90, .value=0xc6, .type=IO_READ},
        {.addr=0x8c91, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x35, .type=IO_READ},
        {.addr=0x0161, .value=0xc2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0259) {
    const struct CPU_State initial_cpu = {.pc=0xa093, .a=0x26, .x=0x85, .y=0x02, .sp=0x54, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xbb}, {.addr=0xa093, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa094, .a=0x26, .x=0x85, .y=0x02, .sp=0x54, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x26}, {.addr=0xa093, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa093, .value=0xc6, .type=IO_READ},
        {.addr=0xa094, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xbb, .type=IO_READ},
        {.addr=0x0185, .value=0x26, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_025A) {
    const struct CPU_State initial_cpu = {.pc=0x64ae, .a=0xe7, .x=0xe9, .y=0x3d, .sp=0xff, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0xe9}, {.addr=0x64ae, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x64af, .a=0xe7, .x=0xe9, .y=0x3d, .sp=0xff, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0xe7}, {.addr=0x64ae, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x64ae, .value=0xc6, .type=IO_READ},
        {.addr=0x64af, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_025B) {
    const struct CPU_State initial_cpu = {.pc=0x02ac, .a=0xd6, .x=0x98, .y=0x8a, .sp=0xe1, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0xdd}, {.addr=0x02ac, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x02ad, .a=0xd6, .x=0x98, .y=0x8a, .sp=0xe1, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0xd6}, {.addr=0x02ac, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x02ac, .value=0xc6, .type=IO_READ},
        {.addr=0x02ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0xdd, .type=IO_READ},
        {.addr=0x0098, .value=0xd6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_025C) {
    const struct CPU_State initial_cpu = {.pc=0xd852, .a=0xae, .x=0x8b, .y=0x71, .sp=0x5f, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0xd4}, {.addr=0xd852, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd853, .a=0xae, .x=0x8b, .y=0x71, .sp=0x5f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xae}, {.addr=0xd852, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd852, .value=0xc6, .type=IO_READ},
        {.addr=0xd853, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0xd4, .type=IO_READ},
        {.addr=0x018b, .value=0xae, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_025D) {
    const struct CPU_State initial_cpu = {.pc=0xbe74, .a=0xc7, .x=0x04, .y=0xf8, .sp=0x41, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0x64}, {.addr=0xbe74, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbe75, .a=0xc7, .x=0x04, .y=0xf8, .sp=0x41, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0xc7}, {.addr=0xbe74, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbe74, .value=0xc6, .type=IO_READ},
        {.addr=0xbe75, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0x64, .type=IO_READ},
        {.addr=0x0004, .value=0xc7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_025E) {
    const struct CPU_State initial_cpu = {.pc=0xd2d2, .a=0xbc, .x=0x51, .y=0xcf, .sp=0xf2, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x9e}, {.addr=0xd2d2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd2d3, .a=0xbc, .x=0x51, .y=0xcf, .sp=0xf2, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xbc}, {.addr=0xd2d2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd2d2, .value=0xc6, .type=IO_READ},
        {.addr=0xd2d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x9e, .type=IO_READ},
        {.addr=0x0151, .value=0xbc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_025F) {
    const struct CPU_State initial_cpu = {.pc=0x4da4, .a=0x6a, .x=0xd8, .y=0xdf, .sp=0x5d, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x01}, {.addr=0x4da4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4da5, .a=0x6a, .x=0xd8, .y=0xdf, .sp=0x5d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x6a}, {.addr=0x4da4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4da4, .value=0xc6, .type=IO_READ},
        {.addr=0x4da5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x01, .type=IO_READ},
        {.addr=0x00d8, .value=0x6a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0260) {
    const struct CPU_State initial_cpu = {.pc=0xaa26, .a=0xd5, .x=0x6b, .y=0xeb, .sp=0xfa, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0xff}, {.addr=0xaa26, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xaa27, .a=0xd5, .x=0x6b, .y=0xeb, .sp=0xfa, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xd5}, {.addr=0xaa26, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xaa26, .value=0xc6, .type=IO_READ},
        {.addr=0xaa27, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xff, .type=IO_READ},
        {.addr=0x016b, .value=0xd5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0261) {
    const struct CPU_State initial_cpu = {.pc=0x3b32, .a=0xac, .x=0x9e, .y=0x0c, .sp=0x8c, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x97}, {.addr=0x3b32, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3b33, .a=0xac, .x=0x9e, .y=0x0c, .sp=0x8c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xac}, {.addr=0x3b32, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3b32, .value=0xc6, .type=IO_READ},
        {.addr=0x3b33, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x97, .type=IO_READ},
        {.addr=0x019e, .value=0xac, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0262) {
    const struct CPU_State initial_cpu = {.pc=0xae3c, .a=0xdd, .x=0x29, .y=0xa3, .sp=0x25, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0x59}, {.addr=0xae3c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xae3d, .a=0xdd, .x=0x29, .y=0xa3, .sp=0x25, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0xdd}, {.addr=0xae3c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xae3c, .value=0xc6, .type=IO_READ},
        {.addr=0xae3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0x59, .type=IO_READ},
        {.addr=0x0029, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0263) {
    const struct CPU_State initial_cpu = {.pc=0xb33a, .a=0x4e, .x=0x4f, .y=0xd7, .sp=0x3b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0x9b}, {.addr=0xb33a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb33b, .a=0x4e, .x=0x4f, .y=0xd7, .sp=0x3b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0x4e}, {.addr=0xb33a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb33a, .value=0xc6, .type=IO_READ},
        {.addr=0xb33b, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0x9b, .type=IO_READ},
        {.addr=0x004f, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0264) {
    const struct CPU_State initial_cpu = {.pc=0x6551, .a=0x3e, .x=0x01, .y=0x21, .sp=0x46, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0x1d}, {.addr=0x6551, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6552, .a=0x3e, .x=0x01, .y=0x21, .sp=0x46, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0x3e}, {.addr=0x6551, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6551, .value=0xc6, .type=IO_READ},
        {.addr=0x6552, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0x1d, .type=IO_READ},
        {.addr=0x0001, .value=0x3e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0265) {
    const struct CPU_State initial_cpu = {.pc=0x0c44, .a=0x45, .x=0xa8, .y=0x90, .sp=0x52, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0xde}, {.addr=0x0c44, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0c45, .a=0x45, .x=0xa8, .y=0x90, .sp=0x52, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x45}, {.addr=0x0c44, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0c44, .value=0xc6, .type=IO_READ},
        {.addr=0x0c45, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xde, .type=IO_READ},
        {.addr=0x01a8, .value=0x45, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0266) {
    const struct CPU_State initial_cpu = {.pc=0xa1a6, .a=0x54, .x=0x4d, .y=0x0c, .sp=0xff, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0x46}, {.addr=0xa1a6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa1a7, .a=0x54, .x=0x4d, .y=0x0c, .sp=0xff, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0x54}, {.addr=0xa1a6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa1a6, .value=0xc6, .type=IO_READ},
        {.addr=0xa1a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0x46, .type=IO_READ},
        {.addr=0x004d, .value=0x54, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0267) {
    const struct CPU_State initial_cpu = {.pc=0x6a1e, .a=0xe6, .x=0x50, .y=0xee, .sp=0x24, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x2a}, {.addr=0x6a1e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6a1f, .a=0xe6, .x=0x50, .y=0xee, .sp=0x24, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0xe6}, {.addr=0x6a1e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6a1e, .value=0xc6, .type=IO_READ},
        {.addr=0x6a1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x2a, .type=IO_READ},
        {.addr=0x0050, .value=0xe6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0268) {
    const struct CPU_State initial_cpu = {.pc=0xb871, .a=0x9b, .x=0x0b, .y=0xc3, .sp=0xab, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x62}, {.addr=0xb871, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb872, .a=0x9b, .x=0x0b, .y=0xc3, .sp=0xab, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x9b}, {.addr=0xb871, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb871, .value=0xc6, .type=IO_READ},
        {.addr=0xb872, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x62, .type=IO_READ},
        {.addr=0x010b, .value=0x9b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0269) {
    const struct CPU_State initial_cpu = {.pc=0x2d6c, .a=0x06, .x=0x6c, .y=0x99, .sp=0x9c, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x2e}, {.addr=0x2d6c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2d6d, .a=0x06, .x=0x6c, .y=0x99, .sp=0x9c, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0x06}, {.addr=0x2d6c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2d6c, .value=0xc6, .type=IO_READ},
        {.addr=0x2d6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0x2e, .type=IO_READ},
        {.addr=0x006c, .value=0x06, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_026A) {
    const struct CPU_State initial_cpu = {.pc=0xb0d5, .a=0x0e, .x=0x0c, .y=0x30, .sp=0x34, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x4a}, {.addr=0xb0d5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb0d6, .a=0x0e, .x=0x0c, .y=0x30, .sp=0x34, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x0e}, {.addr=0xb0d5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb0d5, .value=0xc6, .type=IO_READ},
        {.addr=0xb0d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0x4a, .type=IO_READ},
        {.addr=0x000c, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_026C) {
    const struct CPU_State initial_cpu = {.pc=0xe0a9, .a=0x35, .x=0x02, .y=0xbb, .sp=0xe6, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x75}, {.addr=0xe0a9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe0aa, .a=0x35, .x=0x02, .y=0xbb, .sp=0xe6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x35}, {.addr=0xe0a9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe0a9, .value=0xc6, .type=IO_READ},
        {.addr=0xe0aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x75, .type=IO_READ},
        {.addr=0x0102, .value=0x35, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_026D) {
    const struct CPU_State initial_cpu = {.pc=0x7456, .a=0xec, .x=0xa2, .y=0xa4, .sp=0x60, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xd5}, {.addr=0x7456, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7457, .a=0xec, .x=0xa2, .y=0xa4, .sp=0x60, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xec}, {.addr=0x7456, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7456, .value=0xc6, .type=IO_READ},
        {.addr=0x7457, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0xd5, .type=IO_READ},
        {.addr=0x01a2, .value=0xec, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_026E) {
    const struct CPU_State initial_cpu = {.pc=0x3e43, .a=0xd4, .x=0x5d, .y=0x14, .sp=0xfb, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0xc2}, {.addr=0x3e43, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3e44, .a=0xd4, .x=0x5d, .y=0x14, .sp=0xfb, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xd4}, {.addr=0x3e43, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3e43, .value=0xc6, .type=IO_READ},
        {.addr=0x3e44, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0xc2, .type=IO_READ},
        {.addr=0x015d, .value=0xd4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_026F) {
    const struct CPU_State initial_cpu = {.pc=0xcd2c, .a=0xbf, .x=0x78, .y=0x72, .sp=0x9a, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x99}, {.addr=0xcd2c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcd2d, .a=0xbf, .x=0x78, .y=0x72, .sp=0x9a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xbf}, {.addr=0xcd2c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcd2c, .value=0xc6, .type=IO_READ},
        {.addr=0xcd2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x99, .type=IO_READ},
        {.addr=0x0178, .value=0xbf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0270) {
    const struct CPU_State initial_cpu = {.pc=0x9ff5, .a=0x10, .x=0x43, .y=0xed, .sp=0xa2, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x0a}, {.addr=0x9ff5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9ff6, .a=0x10, .x=0x43, .y=0xed, .sp=0xa2, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x10}, {.addr=0x9ff5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9ff5, .value=0xc6, .type=IO_READ},
        {.addr=0x9ff6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x0a, .type=IO_READ},
        {.addr=0x0143, .value=0x10, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0271) {
    const struct CPU_State initial_cpu = {.pc=0x8051, .a=0xf2, .x=0x9f, .y=0x26, .sp=0x3b, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x62}, {.addr=0x8051, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8052, .a=0xf2, .x=0x9f, .y=0x26, .sp=0x3b, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xf2}, {.addr=0x8051, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8051, .value=0xc6, .type=IO_READ},
        {.addr=0x8052, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0x62, .type=IO_READ},
        {.addr=0x009f, .value=0xf2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0272) {
    const struct CPU_State initial_cpu = {.pc=0x7a1c, .a=0x8c, .x=0x48, .y=0x09, .sp=0xd5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0xee}, {.addr=0x7a1c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7a1d, .a=0x8c, .x=0x48, .y=0x09, .sp=0xd5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x8c}, {.addr=0x7a1c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7a1c, .value=0xc6, .type=IO_READ},
        {.addr=0x7a1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0xee, .type=IO_READ},
        {.addr=0x0048, .value=0x8c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0273) {
    const struct CPU_State initial_cpu = {.pc=0x6e3f, .a=0xff, .x=0x2f, .y=0x9b, .sp=0x15, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0xc6}, {.addr=0x6e3f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6e40, .a=0xff, .x=0x2f, .y=0x9b, .sp=0x15, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0xff}, {.addr=0x6e3f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6e3f, .value=0xc6, .type=IO_READ},
        {.addr=0x6e40, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0xc6, .type=IO_READ},
        {.addr=0x002f, .value=0xff, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0274) {
    const struct CPU_State initial_cpu = {.pc=0x2318, .a=0x0d, .x=0x25, .y=0x98, .sp=0xb7, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0xde}, {.addr=0x2318, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2319, .a=0x0d, .x=0x25, .y=0x98, .sp=0xb7, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x0d}, {.addr=0x2318, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2318, .value=0xc6, .type=IO_READ},
        {.addr=0x2319, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0xde, .type=IO_READ},
        {.addr=0x0025, .value=0x0d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0275) {
    const struct CPU_State initial_cpu = {.pc=0x48d6, .a=0x6c, .x=0x8a, .y=0xcb, .sp=0x86, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xfa}, {.addr=0x48d6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x48d7, .a=0x6c, .x=0x8a, .y=0xcb, .sp=0x86, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x6c}, {.addr=0x48d6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x48d6, .value=0xc6, .type=IO_READ},
        {.addr=0x48d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xfa, .type=IO_READ},
        {.addr=0x018a, .value=0x6c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0276) {
    const struct CPU_State initial_cpu = {.pc=0xdb56, .a=0x89, .x=0xc0, .y=0x4c, .sp=0xcb, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x52}, {.addr=0xdb56, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdb57, .a=0x89, .x=0xc0, .y=0x4c, .sp=0xcb, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x89}, {.addr=0xdb56, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdb56, .value=0xc6, .type=IO_READ},
        {.addr=0xdb57, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x52, .type=IO_READ},
        {.addr=0x00c0, .value=0x89, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0277) {
    const struct CPU_State initial_cpu = {.pc=0x880f, .a=0xb5, .x=0x1e, .y=0x96, .sp=0x6d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0x18}, {.addr=0x880f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8810, .a=0xb5, .x=0x1e, .y=0x96, .sp=0x6d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0xb5}, {.addr=0x880f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x880f, .value=0xc6, .type=IO_READ},
        {.addr=0x8810, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0x18, .type=IO_READ},
        {.addr=0x001e, .value=0xb5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0278) {
    const struct CPU_State initial_cpu = {.pc=0xc5f2, .a=0xe2, .x=0x83, .y=0xc4, .sp=0x35, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x60}, {.addr=0xc5f2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc5f3, .a=0xe2, .x=0x83, .y=0xc4, .sp=0x35, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0xe2}, {.addr=0xc5f2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc5f2, .value=0xc6, .type=IO_READ},
        {.addr=0xc5f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x60, .type=IO_READ},
        {.addr=0x0083, .value=0xe2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0279) {
    const struct CPU_State initial_cpu = {.pc=0x9f70, .a=0xd5, .x=0x77, .y=0x9a, .sp=0x48, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0xd7}, {.addr=0x9f70, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9f71, .a=0xd5, .x=0x77, .y=0x9a, .sp=0x48, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0xd5}, {.addr=0x9f70, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9f70, .value=0xc6, .type=IO_READ},
        {.addr=0x9f71, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0xd7, .type=IO_READ},
        {.addr=0x0077, .value=0xd5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_027A) {
    const struct CPU_State initial_cpu = {.pc=0x669c, .a=0xd6, .x=0x05, .y=0x48, .sp=0xba, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0xcb}, {.addr=0x669c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x669d, .a=0xd6, .x=0x05, .y=0x48, .sp=0xba, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0xd6}, {.addr=0x669c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x669c, .value=0xc6, .type=IO_READ},
        {.addr=0x669d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0xcb, .type=IO_READ},
        {.addr=0x0005, .value=0xd6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_027B) {
    const struct CPU_State initial_cpu = {.pc=0x992d, .a=0xbb, .x=0xa6, .y=0xf3, .sp=0x71, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x35}, {.addr=0x992d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x992e, .a=0xbb, .x=0xa6, .y=0xf3, .sp=0x71, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0xbb}, {.addr=0x992d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x992d, .value=0xc6, .type=IO_READ},
        {.addr=0x992e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0x35, .type=IO_READ},
        {.addr=0x00a6, .value=0xbb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_027C) {
    const struct CPU_State initial_cpu = {.pc=0x1672, .a=0xd7, .x=0x8a, .y=0x94, .sp=0x7b, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x88}, {.addr=0x1672, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1673, .a=0xd7, .x=0x8a, .y=0x94, .sp=0x7b, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xd7}, {.addr=0x1672, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1672, .value=0xc6, .type=IO_READ},
        {.addr=0x1673, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x88, .type=IO_READ},
        {.addr=0x018a, .value=0xd7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_027D) {
    const struct CPU_State initial_cpu = {.pc=0xa2db, .a=0x7c, .x=0x14, .y=0x60, .sp=0x41, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x75}, {.addr=0xa2db, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa2dc, .a=0x7c, .x=0x14, .y=0x60, .sp=0x41, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x7c}, {.addr=0xa2db, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa2db, .value=0xc6, .type=IO_READ},
        {.addr=0xa2dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x75, .type=IO_READ},
        {.addr=0x0014, .value=0x7c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_027E) {
    const struct CPU_State initial_cpu = {.pc=0x7707, .a=0x25, .x=0x03, .y=0x42, .sp=0x7d, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xde}, {.addr=0x7707, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7708, .a=0x25, .x=0x03, .y=0x42, .sp=0x7d, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x25}, {.addr=0x7707, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7707, .value=0xc6, .type=IO_READ},
        {.addr=0x7708, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xde, .type=IO_READ},
        {.addr=0x0103, .value=0x25, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_027F) {
    const struct CPU_State initial_cpu = {.pc=0xb3c7, .a=0x95, .x=0xbe, .y=0xad, .sp=0x80, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0xb9}, {.addr=0xb3c7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb3c8, .a=0x95, .x=0xbe, .y=0xad, .sp=0x80, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0x95}, {.addr=0xb3c7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb3c7, .value=0xc6, .type=IO_READ},
        {.addr=0xb3c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00be, .value=0xb9, .type=IO_READ},
        {.addr=0x00be, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0280) {
    const struct CPU_State initial_cpu = {.pc=0x2863, .a=0xa5, .x=0x83, .y=0x9a, .sp=0x03, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x95}, {.addr=0x2863, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2864, .a=0xa5, .x=0x83, .y=0x9a, .sp=0x03, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xa5}, {.addr=0x2863, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2863, .value=0xc6, .type=IO_READ},
        {.addr=0x2864, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x95, .type=IO_READ},
        {.addr=0x0183, .value=0xa5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0281) {
    const struct CPU_State initial_cpu = {.pc=0x7d47, .a=0x0e, .x=0x5d, .y=0xcd, .sp=0xfb, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x18}, {.addr=0x7d47, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7d48, .a=0x0e, .x=0x5d, .y=0xcd, .sp=0xfb, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x0e}, {.addr=0x7d47, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7d47, .value=0xc6, .type=IO_READ},
        {.addr=0x7d48, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x18, .type=IO_READ},
        {.addr=0x015d, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0282) {
    const struct CPU_State initial_cpu = {.pc=0x8ad4, .a=0x27, .x=0xe4, .y=0x2f, .sp=0x61, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xf1}, {.addr=0x8ad4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8ad5, .a=0x27, .x=0xe4, .y=0x2f, .sp=0x61, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x27}, {.addr=0x8ad4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8ad4, .value=0xc6, .type=IO_READ},
        {.addr=0x8ad5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xf1, .type=IO_READ},
        {.addr=0x01e4, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0283) {
    const struct CPU_State initial_cpu = {.pc=0xa2fe, .a=0x8c, .x=0x9c, .y=0x79, .sp=0x55, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x2d}, {.addr=0xa2fe, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa2ff, .a=0x8c, .x=0x9c, .y=0x79, .sp=0x55, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x8c}, {.addr=0xa2fe, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa2fe, .value=0xc6, .type=IO_READ},
        {.addr=0xa2ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0x2d, .type=IO_READ},
        {.addr=0x009c, .value=0x8c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0284) {
    const struct CPU_State initial_cpu = {.pc=0x8a72, .a=0xae, .x=0xcb, .y=0x68, .sp=0x2b, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x08}, {.addr=0x8a72, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8a73, .a=0xae, .x=0xcb, .y=0x68, .sp=0x2b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0xae}, {.addr=0x8a72, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8a72, .value=0xc6, .type=IO_READ},
        {.addr=0x8a73, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0x08, .type=IO_READ},
        {.addr=0x00cb, .value=0xae, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0285) {
    const struct CPU_State initial_cpu = {.pc=0xa563, .a=0x3e, .x=0xeb, .y=0x75, .sp=0xb8, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x0a}, {.addr=0xa563, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa564, .a=0x3e, .x=0xeb, .y=0x75, .sp=0xb8, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x3e}, {.addr=0xa563, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa563, .value=0xc6, .type=IO_READ},
        {.addr=0xa564, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x0a, .type=IO_READ},
        {.addr=0x01eb, .value=0x3e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0286) {
    const struct CPU_State initial_cpu = {.pc=0x78ab, .a=0x2b, .x=0x32, .y=0x6b, .sp=0x1b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x24}, {.addr=0x78ab, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x78ac, .a=0x2b, .x=0x32, .y=0x6b, .sp=0x1b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x2b}, {.addr=0x78ab, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x78ab, .value=0xc6, .type=IO_READ},
        {.addr=0x78ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x24, .type=IO_READ},
        {.addr=0x0032, .value=0x2b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0287) {
    const struct CPU_State initial_cpu = {.pc=0x62c2, .a=0x81, .x=0xdc, .y=0xbc, .sp=0x27, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x88}, {.addr=0x62c2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x62c3, .a=0x81, .x=0xdc, .y=0xbc, .sp=0x27, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x81}, {.addr=0x62c2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x62c2, .value=0xc6, .type=IO_READ},
        {.addr=0x62c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x88, .type=IO_READ},
        {.addr=0x01dc, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0288) {
    const struct CPU_State initial_cpu = {.pc=0xdeef, .a=0xec, .x=0x81, .y=0xaa, .sp=0xa6, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x2d}, {.addr=0xdeef, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdef0, .a=0xec, .x=0x81, .y=0xaa, .sp=0xa6, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xec}, {.addr=0xdeef, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdeef, .value=0xc6, .type=IO_READ},
        {.addr=0xdef0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x2d, .type=IO_READ},
        {.addr=0x0181, .value=0xec, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0289) {
    const struct CPU_State initial_cpu = {.pc=0x109e, .a=0xc9, .x=0x4c, .y=0xce, .sp=0xf5, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0xe6}, {.addr=0x109e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x109f, .a=0xc9, .x=0x4c, .y=0xce, .sp=0xf5, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xc9}, {.addr=0x109e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x109e, .value=0xc6, .type=IO_READ},
        {.addr=0x109f, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0xe6, .type=IO_READ},
        {.addr=0x004c, .value=0xc9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_028A) {
    const struct CPU_State initial_cpu = {.pc=0x3611, .a=0xa7, .x=0x37, .y=0xd8, .sp=0xe8, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0x4d}, {.addr=0x3611, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3612, .a=0xa7, .x=0x37, .y=0xd8, .sp=0xe8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0xa7}, {.addr=0x3611, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3611, .value=0xc6, .type=IO_READ},
        {.addr=0x3612, .value=DUMMY, .type=IO_READ},
        {.addr=0x0037, .value=0x4d, .type=IO_READ},
        {.addr=0x0037, .value=0xa7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_028B) {
    const struct CPU_State initial_cpu = {.pc=0xeb73, .a=0xe3, .x=0x81, .y=0x5a, .sp=0x17, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xa6}, {.addr=0xeb73, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xeb74, .a=0xe3, .x=0x81, .y=0x5a, .sp=0x17, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xe3}, {.addr=0xeb73, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xeb73, .value=0xc6, .type=IO_READ},
        {.addr=0xeb74, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xa6, .type=IO_READ},
        {.addr=0x0181, .value=0xe3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_028C) {
    const struct CPU_State initial_cpu = {.pc=0x6309, .a=0xd3, .x=0xaa, .y=0x00, .sp=0xe8, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x03}, {.addr=0x6309, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x630a, .a=0xd3, .x=0xaa, .y=0x00, .sp=0xe8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0xd3}, {.addr=0x6309, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6309, .value=0xc6, .type=IO_READ},
        {.addr=0x630a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0x03, .type=IO_READ},
        {.addr=0x00aa, .value=0xd3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_028D) {
    const struct CPU_State initial_cpu = {.pc=0xf5df, .a=0xcb, .x=0x81, .y=0x05, .sp=0x49, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xa9}, {.addr=0xf5df, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf5e0, .a=0xcb, .x=0x81, .y=0x05, .sp=0x49, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xcb}, {.addr=0xf5df, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf5df, .value=0xc6, .type=IO_READ},
        {.addr=0xf5e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xa9, .type=IO_READ},
        {.addr=0x0181, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_028E) {
    const struct CPU_State initial_cpu = {.pc=0x0b80, .a=0x70, .x=0x61, .y=0xb9, .sp=0xb7, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x56}, {.addr=0x0b80, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0b81, .a=0x70, .x=0x61, .y=0xb9, .sp=0xb7, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x70}, {.addr=0x0b80, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0b80, .value=0xc6, .type=IO_READ},
        {.addr=0x0b81, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x56, .type=IO_READ},
        {.addr=0x0161, .value=0x70, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_028F) {
    const struct CPU_State initial_cpu = {.pc=0x2115, .a=0xac, .x=0xc3, .y=0xc3, .sp=0x08, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xd5}, {.addr=0x2115, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2116, .a=0xac, .x=0xc3, .y=0xc3, .sp=0x08, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xac}, {.addr=0x2115, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2115, .value=0xc6, .type=IO_READ},
        {.addr=0x2116, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xd5, .type=IO_READ},
        {.addr=0x00c3, .value=0xac, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0290) {
    const struct CPU_State initial_cpu = {.pc=0x8e8e, .a=0x7b, .x=0x02, .y=0x04, .sp=0x09, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x62}, {.addr=0x8e8e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8e8f, .a=0x7b, .x=0x02, .y=0x04, .sp=0x09, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x7b}, {.addr=0x8e8e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8e8e, .value=0xc6, .type=IO_READ},
        {.addr=0x8e8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x62, .type=IO_READ},
        {.addr=0x0102, .value=0x7b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0292) {
    const struct CPU_State initial_cpu = {.pc=0xd59f, .a=0x4f, .x=0xbb, .y=0xeb, .sp=0x99, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x82}, {.addr=0xd59f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd5a0, .a=0x4f, .x=0xbb, .y=0xeb, .sp=0x99, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x4f}, {.addr=0xd59f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd59f, .value=0xc6, .type=IO_READ},
        {.addr=0xd5a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x82, .type=IO_READ},
        {.addr=0x01bb, .value=0x4f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0293) {
    const struct CPU_State initial_cpu = {.pc=0x826f, .a=0x25, .x=0x10, .y=0x96, .sp=0x5c, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0xba}, {.addr=0x826f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8270, .a=0x25, .x=0x10, .y=0x96, .sp=0x5c, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x25}, {.addr=0x826f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x826f, .value=0xc6, .type=IO_READ},
        {.addr=0x8270, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0xba, .type=IO_READ},
        {.addr=0x0010, .value=0x25, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0294) {
    const struct CPU_State initial_cpu = {.pc=0xe396, .a=0x20, .x=0x30, .y=0xc9, .sp=0x1a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x14}, {.addr=0xe396, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe397, .a=0x20, .x=0x30, .y=0xc9, .sp=0x1a, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x20}, {.addr=0xe396, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe396, .value=0xc6, .type=IO_READ},
        {.addr=0xe397, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x14, .type=IO_READ},
        {.addr=0x0030, .value=0x20, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0295) {
    const struct CPU_State initial_cpu = {.pc=0x05a8, .a=0x0e, .x=0x0a, .y=0x16, .sp=0x77, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x78}, {.addr=0x05a8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x05a9, .a=0x0e, .x=0x0a, .y=0x16, .sp=0x77, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x0e}, {.addr=0x05a8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x05a8, .value=0xc6, .type=IO_READ},
        {.addr=0x05a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x78, .type=IO_READ},
        {.addr=0x000a, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0296) {
    const struct CPU_State initial_cpu = {.pc=0xc41f, .a=0x2a, .x=0x71, .y=0xd2, .sp=0x9c, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x78}, {.addr=0xc41f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc420, .a=0x2a, .x=0x71, .y=0xd2, .sp=0x9c, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x2a}, {.addr=0xc41f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc41f, .value=0xc6, .type=IO_READ},
        {.addr=0xc420, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x78, .type=IO_READ},
        {.addr=0x0071, .value=0x2a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0297) {
    const struct CPU_State initial_cpu = {.pc=0xeea9, .a=0x2b, .x=0x66, .y=0xd1, .sp=0x04, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xbc}, {.addr=0xeea9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xeeaa, .a=0x2b, .x=0x66, .y=0xd1, .sp=0x04, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x2b}, {.addr=0xeea9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xeea9, .value=0xc6, .type=IO_READ},
        {.addr=0xeeaa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xbc, .type=IO_READ},
        {.addr=0x0166, .value=0x2b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0299) {
    const struct CPU_State initial_cpu = {.pc=0x39e3, .a=0x62, .x=0x5c, .y=0xe9, .sp=0x9e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x62}, {.addr=0x39e3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x39e4, .a=0x62, .x=0x5c, .y=0xe9, .sp=0x9e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x62}, {.addr=0x39e3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x39e3, .value=0xc6, .type=IO_READ},
        {.addr=0x39e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0x62, .type=IO_READ},
        {.addr=0x005c, .value=0x62, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_029A) {
    const struct CPU_State initial_cpu = {.pc=0x5737, .a=0xb4, .x=0x97, .y=0x64, .sp=0x4e, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x68}, {.addr=0x5737, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5738, .a=0xb4, .x=0x97, .y=0x64, .sp=0x4e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0xb4}, {.addr=0x5737, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5737, .value=0xc6, .type=IO_READ},
        {.addr=0x5738, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x68, .type=IO_READ},
        {.addr=0x0097, .value=0xb4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_029B) {
    const struct CPU_State initial_cpu = {.pc=0xa83f, .a=0x01, .x=0x6e, .y=0x53, .sp=0x13, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0x41}, {.addr=0xa83f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa840, .a=0x01, .x=0x6e, .y=0x53, .sp=0x13, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0x01}, {.addr=0xa83f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa83f, .value=0xc6, .type=IO_READ},
        {.addr=0xa840, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0x41, .type=IO_READ},
        {.addr=0x006e, .value=0x01, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_029C) {
    const struct CPU_State initial_cpu = {.pc=0x03db, .a=0xca, .x=0xdb, .y=0x73, .sp=0xd6, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x46}, {.addr=0x03db, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x03dc, .a=0xca, .x=0xdb, .y=0x73, .sp=0xd6, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0xca}, {.addr=0x03db, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x03db, .value=0xc6, .type=IO_READ},
        {.addr=0x03dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x46, .type=IO_READ},
        {.addr=0x00db, .value=0xca, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_029D) {
    const struct CPU_State initial_cpu = {.pc=0x63b2, .a=0xa1, .x=0x5d, .y=0x41, .sp=0x77, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x6c}, {.addr=0x63b2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x63b3, .a=0xa1, .x=0x5d, .y=0x41, .sp=0x77, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xa1}, {.addr=0x63b2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x63b2, .value=0xc6, .type=IO_READ},
        {.addr=0x63b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x6c, .type=IO_READ},
        {.addr=0x015d, .value=0xa1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_029E) {
    const struct CPU_State initial_cpu = {.pc=0xf928, .a=0x73, .x=0xe0, .y=0x60, .sp=0xce, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x97}, {.addr=0xf928, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf929, .a=0x73, .x=0xe0, .y=0x60, .sp=0xce, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x73}, {.addr=0xf928, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf928, .value=0xc6, .type=IO_READ},
        {.addr=0xf929, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x97, .type=IO_READ},
        {.addr=0x01e0, .value=0x73, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_029F) {
    const struct CPU_State initial_cpu = {.pc=0x1ae0, .a=0x09, .x=0xca, .y=0xc3, .sp=0x4b, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x5f}, {.addr=0x1ae0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1ae1, .a=0x09, .x=0xca, .y=0xc3, .sp=0x4b, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x09}, {.addr=0x1ae0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1ae0, .value=0xc6, .type=IO_READ},
        {.addr=0x1ae1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x5f, .type=IO_READ},
        {.addr=0x01ca, .value=0x09, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xab31, .a=0xea, .x=0xc7, .y=0x2d, .sp=0x5d, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x84}, {.addr=0xab31, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xab32, .a=0xea, .x=0xc7, .y=0x2d, .sp=0x5d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xea}, {.addr=0xab31, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xab31, .value=0xc6, .type=IO_READ},
        {.addr=0xab32, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x84, .type=IO_READ},
        {.addr=0x01c7, .value=0xea, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x2b56, .a=0x4b, .x=0x59, .y=0x76, .sp=0x40, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xc1}, {.addr=0x2b56, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2b57, .a=0x4b, .x=0x59, .y=0x76, .sp=0x40, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x4b}, {.addr=0x2b56, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2b56, .value=0xc6, .type=IO_READ},
        {.addr=0x2b57, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0xc1, .type=IO_READ},
        {.addr=0x0159, .value=0x4b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x450c, .a=0x2a, .x=0x28, .y=0x67, .sp=0xf4, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x2f}, {.addr=0x450c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x450d, .a=0x2a, .x=0x28, .y=0x67, .sp=0xf4, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x2a}, {.addr=0x450c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x450c, .value=0xc6, .type=IO_READ},
        {.addr=0x450d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x2f, .type=IO_READ},
        {.addr=0x0128, .value=0x2a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xa359, .a=0xf8, .x=0xb1, .y=0x2f, .sp=0xa2, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0xca}, {.addr=0xa359, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa35a, .a=0xf8, .x=0xb1, .y=0x2f, .sp=0xa2, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xf8}, {.addr=0xa359, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa359, .value=0xc6, .type=IO_READ},
        {.addr=0xa35a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xca, .type=IO_READ},
        {.addr=0x01b1, .value=0xf8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x1b22, .a=0x02, .x=0x7b, .y=0xae, .sp=0x82, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x39}, {.addr=0x1b22, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1b23, .a=0x02, .x=0x7b, .y=0xae, .sp=0x82, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0x02}, {.addr=0x1b22, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1b22, .value=0xc6, .type=IO_READ},
        {.addr=0x1b23, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0x39, .type=IO_READ},
        {.addr=0x007b, .value=0x02, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x6f22, .a=0x90, .x=0x0d, .y=0x36, .sp=0x0c, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0xf8}, {.addr=0x6f22, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6f23, .a=0x90, .x=0x0d, .y=0x36, .sp=0x0c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x90}, {.addr=0x6f22, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6f22, .value=0xc6, .type=IO_READ},
        {.addr=0x6f23, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0xf8, .type=IO_READ},
        {.addr=0x000d, .value=0x90, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x5db0, .a=0xfa, .x=0x1c, .y=0x2c, .sp=0xd3, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x05}, {.addr=0x5db0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5db1, .a=0xfa, .x=0x1c, .y=0x2c, .sp=0xd3, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0xfa}, {.addr=0x5db0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5db0, .value=0xc6, .type=IO_READ},
        {.addr=0x5db1, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x05, .type=IO_READ},
        {.addr=0x001c, .value=0xfa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x4e4d, .a=0x02, .x=0x83, .y=0xe0, .sp=0xe6, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x1a}, {.addr=0x4e4d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4e4e, .a=0x02, .x=0x83, .y=0xe0, .sp=0xe6, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x02}, {.addr=0x4e4d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4e4d, .value=0xc6, .type=IO_READ},
        {.addr=0x4e4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x1a, .type=IO_READ},
        {.addr=0x0183, .value=0x02, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x2baa, .a=0x87, .x=0xa2, .y=0x3c, .sp=0x98, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x82}, {.addr=0x2baa, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2bab, .a=0x87, .x=0xa2, .y=0x3c, .sp=0x98, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x87}, {.addr=0x2baa, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2baa, .value=0xc6, .type=IO_READ},
        {.addr=0x2bab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x82, .type=IO_READ},
        {.addr=0x01a2, .value=0x87, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x5e96, .a=0x3b, .x=0x05, .y=0x0f, .sp=0x6c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0xf0}, {.addr=0x5e96, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5e97, .a=0x3b, .x=0x05, .y=0x0f, .sp=0x6c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x3b}, {.addr=0x5e96, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5e96, .value=0xc6, .type=IO_READ},
        {.addr=0x5e97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0xf0, .type=IO_READ},
        {.addr=0x0005, .value=0x3b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x8cdc, .a=0xaa, .x=0xf8, .y=0x14, .sp=0x17, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xd8}, {.addr=0x8cdc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8cdd, .a=0xaa, .x=0xf8, .y=0x14, .sp=0x17, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xaa}, {.addr=0x8cdc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8cdc, .value=0xc6, .type=IO_READ},
        {.addr=0x8cdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xd8, .type=IO_READ},
        {.addr=0x01f8, .value=0xaa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x68a0, .a=0x34, .x=0x40, .y=0xeb, .sp=0x32, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0x13}, {.addr=0x68a0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x68a1, .a=0x34, .x=0x40, .y=0xeb, .sp=0x32, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0x34}, {.addr=0x68a0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x68a0, .value=0xc6, .type=IO_READ},
        {.addr=0x68a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0x13, .type=IO_READ},
        {.addr=0x0040, .value=0x34, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x2754, .a=0x61, .x=0x76, .y=0x4c, .sp=0xcc, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x88}, {.addr=0x2754, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2755, .a=0x61, .x=0x76, .y=0x4c, .sp=0xcc, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x61}, {.addr=0x2754, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2754, .value=0xc6, .type=IO_READ},
        {.addr=0x2755, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x88, .type=IO_READ},
        {.addr=0x0176, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x3dd7, .a=0xfc, .x=0x88, .y=0x6b, .sp=0xd2, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x2c}, {.addr=0x3dd7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3dd8, .a=0xfc, .x=0x88, .y=0x6b, .sp=0xd2, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xfc}, {.addr=0x3dd7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3dd7, .value=0xc6, .type=IO_READ},
        {.addr=0x3dd8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x2c, .type=IO_READ},
        {.addr=0x0188, .value=0xfc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xa52e, .a=0xaf, .x=0x76, .y=0x21, .sp=0x99, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0xa5}, {.addr=0xa52e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa52f, .a=0xaf, .x=0x76, .y=0x21, .sp=0x99, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xaf}, {.addr=0xa52e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa52e, .value=0xc6, .type=IO_READ},
        {.addr=0xa52f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0xa5, .type=IO_READ},
        {.addr=0x0076, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x7fad, .a=0x8a, .x=0x32, .y=0x15, .sp=0x12, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x7f}, {.addr=0x7fad, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7fae, .a=0x8a, .x=0x32, .y=0x15, .sp=0x12, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x8a}, {.addr=0x7fad, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7fad, .value=0xc6, .type=IO_READ},
        {.addr=0x7fae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x7f, .type=IO_READ},
        {.addr=0x0132, .value=0x8a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x2e7a, .a=0x50, .x=0x5f, .y=0x20, .sp=0x61, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x29}, {.addr=0x2e7a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2e7b, .a=0x50, .x=0x5f, .y=0x20, .sp=0x61, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x50}, {.addr=0x2e7a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2e7a, .value=0xc6, .type=IO_READ},
        {.addr=0x2e7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x29, .type=IO_READ},
        {.addr=0x005f, .value=0x50, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x00b4, .a=0xf1, .x=0x93, .y=0x72, .sp=0xd5, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0xc6}, {.addr=0x0193, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x00b5, .a=0xf1, .x=0x93, .y=0x72, .sp=0xd5, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0xc6}, {.addr=0x0193, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x00b4, .value=0xc6, .type=IO_READ},
        {.addr=0x00b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x7c, .type=IO_READ},
        {.addr=0x0193, .value=0xf1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xe06f, .a=0x37, .x=0x9f, .y=0x3d, .sp=0x5b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xc5}, {.addr=0xe06f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe070, .a=0x37, .x=0x9f, .y=0x3d, .sp=0x5b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x37}, {.addr=0xe06f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe06f, .value=0xc6, .type=IO_READ},
        {.addr=0xe070, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xc5, .type=IO_READ},
        {.addr=0x019f, .value=0x37, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xc10d, .a=0xbc, .x=0xe3, .y=0x40, .sp=0x86, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xb1}, {.addr=0xc10d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc10e, .a=0xbc, .x=0xe3, .y=0x40, .sp=0x86, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xbc}, {.addr=0xc10d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc10d, .value=0xc6, .type=IO_READ},
        {.addr=0xc10e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xb1, .type=IO_READ},
        {.addr=0x01e3, .value=0xbc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xf4af, .a=0x1d, .x=0xe3, .y=0x9c, .sp=0xff, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0xf5}, {.addr=0xf4af, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf4b0, .a=0x1d, .x=0xe3, .y=0x9c, .sp=0xff, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0x1d}, {.addr=0xf4af, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf4af, .value=0xc6, .type=IO_READ},
        {.addr=0xf4b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0xf5, .type=IO_READ},
        {.addr=0x00e3, .value=0x1d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x403c, .a=0x93, .x=0xa0, .y=0x75, .sp=0x95, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x79}, {.addr=0x403c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x403d, .a=0x93, .x=0xa0, .y=0x75, .sp=0x95, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x93}, {.addr=0x403c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x403c, .value=0xc6, .type=IO_READ},
        {.addr=0x403d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x79, .type=IO_READ},
        {.addr=0x01a0, .value=0x93, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x07c2, .a=0xf8, .x=0x15, .y=0xa2, .sp=0xc3, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0xf0}, {.addr=0x07c2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x07c3, .a=0xf8, .x=0x15, .y=0xa2, .sp=0xc3, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0xf8}, {.addr=0x07c2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x07c2, .value=0xc6, .type=IO_READ},
        {.addr=0x07c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0xf0, .type=IO_READ},
        {.addr=0x0015, .value=0xf8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x9b52, .a=0x45, .x=0x2f, .y=0x9e, .sp=0x0b, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0xcf}, {.addr=0x9b52, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9b53, .a=0x45, .x=0x2f, .y=0x9e, .sp=0x0b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x45}, {.addr=0x9b52, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9b52, .value=0xc6, .type=IO_READ},
        {.addr=0x9b53, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0xcf, .type=IO_READ},
        {.addr=0x002f, .value=0x45, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xc828, .a=0x12, .x=0x93, .y=0x50, .sp=0x20, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0xc0}, {.addr=0xc828, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc829, .a=0x12, .x=0x93, .y=0x50, .sp=0x20, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x12}, {.addr=0xc828, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc828, .value=0xc6, .type=IO_READ},
        {.addr=0xc829, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0xc0, .type=IO_READ},
        {.addr=0x0093, .value=0x12, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xde5e, .a=0x88, .x=0x2c, .y=0x9d, .sp=0xb6, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0x9a}, {.addr=0xde5e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xde5f, .a=0x88, .x=0x2c, .y=0x9d, .sp=0xb6, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0x88}, {.addr=0xde5e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xde5e, .value=0xc6, .type=IO_READ},
        {.addr=0xde5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0x9a, .type=IO_READ},
        {.addr=0x002c, .value=0x88, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x6d82, .a=0x10, .x=0x99, .y=0x03, .sp=0x7f, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x64}, {.addr=0x6d82, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6d83, .a=0x10, .x=0x99, .y=0x03, .sp=0x7f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x10}, {.addr=0x6d82, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6d82, .value=0xc6, .type=IO_READ},
        {.addr=0x6d83, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x64, .type=IO_READ},
        {.addr=0x0199, .value=0x10, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x6ff8, .a=0xa5, .x=0x85, .y=0xd8, .sp=0x1d, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x25}, {.addr=0x6ff8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6ff9, .a=0xa5, .x=0x85, .y=0xd8, .sp=0x1d, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xa5}, {.addr=0x6ff8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6ff8, .value=0xc6, .type=IO_READ},
        {.addr=0x6ff9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x25, .type=IO_READ},
        {.addr=0x0185, .value=0xa5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xe4bc, .a=0x60, .x=0x49, .y=0xbe, .sp=0x09, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x29}, {.addr=0xe4bc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe4bd, .a=0x60, .x=0x49, .y=0xbe, .sp=0x09, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x60}, {.addr=0xe4bc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe4bc, .value=0xc6, .type=IO_READ},
        {.addr=0xe4bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x29, .type=IO_READ},
        {.addr=0x0049, .value=0x60, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x5ef1, .a=0xd2, .x=0xc2, .y=0xd7, .sp=0xa1, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xcd}, {.addr=0x5ef1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5ef2, .a=0xd2, .x=0xc2, .y=0xd7, .sp=0xa1, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xd2}, {.addr=0x5ef1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5ef1, .value=0xc6, .type=IO_READ},
        {.addr=0x5ef2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xcd, .type=IO_READ},
        {.addr=0x01c2, .value=0xd2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x0af0, .a=0x01, .x=0x80, .y=0xa4, .sp=0x69, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x79}, {.addr=0x0af0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0af1, .a=0x01, .x=0x80, .y=0xa4, .sp=0x69, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x01}, {.addr=0x0af0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0af0, .value=0xc6, .type=IO_READ},
        {.addr=0x0af1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x79, .type=IO_READ},
        {.addr=0x0180, .value=0x01, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x72e4, .a=0x7e, .x=0xbf, .y=0x30, .sp=0x33, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x2d}, {.addr=0x72e4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x72e5, .a=0x7e, .x=0xbf, .y=0x30, .sp=0x33, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x7e}, {.addr=0x72e4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x72e4, .value=0xc6, .type=IO_READ},
        {.addr=0x72e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x2d, .type=IO_READ},
        {.addr=0x01bf, .value=0x7e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x7d96, .a=0x2e, .x=0x4e, .y=0x52, .sp=0xda, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xfd}, {.addr=0x7d96, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7d97, .a=0x2e, .x=0x4e, .y=0x52, .sp=0xda, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x2e}, {.addr=0x7d96, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7d96, .value=0xc6, .type=IO_READ},
        {.addr=0x7d97, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xfd, .type=IO_READ},
        {.addr=0x014e, .value=0x2e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x184a, .a=0x3a, .x=0xbc, .y=0x76, .sp=0xf3, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0xc8}, {.addr=0x184a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x184b, .a=0x3a, .x=0xbc, .y=0x76, .sp=0xf3, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x3a}, {.addr=0x184a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x184a, .value=0xc6, .type=IO_READ},
        {.addr=0x184b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0xc8, .type=IO_READ},
        {.addr=0x01bc, .value=0x3a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xebc8, .a=0x86, .x=0x89, .y=0xf1, .sp=0x64, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x59}, {.addr=0xebc8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xebc9, .a=0x86, .x=0x89, .y=0xf1, .sp=0x64, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x86}, {.addr=0xebc8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xebc8, .value=0xc6, .type=IO_READ},
        {.addr=0xebc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x59, .type=IO_READ},
        {.addr=0x0189, .value=0x86, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x380f, .a=0xbd, .x=0xc9, .y=0x47, .sp=0x3f, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xab}, {.addr=0x380f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3810, .a=0xbd, .x=0xc9, .y=0x47, .sp=0x3f, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xbd}, {.addr=0x380f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x380f, .value=0xc6, .type=IO_READ},
        {.addr=0x3810, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0xab, .type=IO_READ},
        {.addr=0x01c9, .value=0xbd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xe128, .a=0xd5, .x=0xd6, .y=0x23, .sp=0x31, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xbc}, {.addr=0xe128, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe129, .a=0xd5, .x=0xd6, .y=0x23, .sp=0x31, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xd5}, {.addr=0xe128, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe128, .value=0xc6, .type=IO_READ},
        {.addr=0xe129, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xbc, .type=IO_READ},
        {.addr=0x00d6, .value=0xd5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x909b, .a=0x42, .x=0x87, .y=0x48, .sp=0x1e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xd1}, {.addr=0x909b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x909c, .a=0x42, .x=0x87, .y=0x48, .sp=0x1e, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x42}, {.addr=0x909b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x909b, .value=0xc6, .type=IO_READ},
        {.addr=0x909c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xd1, .type=IO_READ},
        {.addr=0x0087, .value=0x42, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xea33, .a=0xd4, .x=0xce, .y=0xd9, .sp=0x28, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x89}, {.addr=0xea33, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xea34, .a=0xd4, .x=0xce, .y=0xd9, .sp=0x28, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xd4}, {.addr=0xea33, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xea33, .value=0xc6, .type=IO_READ},
        {.addr=0xea34, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x89, .type=IO_READ},
        {.addr=0x01ce, .value=0xd4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xb72b, .a=0x22, .x=0x5a, .y=0x8d, .sp=0x72, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0xcf}, {.addr=0xb72b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb72c, .a=0x22, .x=0x5a, .y=0x8d, .sp=0x72, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x22}, {.addr=0xb72b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb72b, .value=0xc6, .type=IO_READ},
        {.addr=0xb72c, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0xcf, .type=IO_READ},
        {.addr=0x005a, .value=0x22, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xea04, .a=0x21, .x=0xcd, .y=0xc6, .sp=0xa6, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xde}, {.addr=0xea04, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xea05, .a=0x21, .x=0xcd, .y=0xc6, .sp=0xa6, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x21}, {.addr=0xea04, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xea04, .value=0xc6, .type=IO_READ},
        {.addr=0xea05, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xde, .type=IO_READ},
        {.addr=0x01cd, .value=0x21, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x5737, .a=0x49, .x=0xb3, .y=0xda, .sp=0x47, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x48}, {.addr=0x5737, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5738, .a=0x49, .x=0xb3, .y=0xda, .sp=0x47, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x49}, {.addr=0x5737, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5737, .value=0xc6, .type=IO_READ},
        {.addr=0x5738, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x48, .type=IO_READ},
        {.addr=0x00b3, .value=0x49, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x7fe1, .a=0x97, .x=0x1c, .y=0xf4, .sp=0x22, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0xf5}, {.addr=0x7fe1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7fe2, .a=0x97, .x=0x1c, .y=0xf4, .sp=0x22, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x97}, {.addr=0x7fe1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7fe1, .value=0xc6, .type=IO_READ},
        {.addr=0x7fe2, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0xf5, .type=IO_READ},
        {.addr=0x001c, .value=0x97, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x2b93, .a=0xd8, .x=0x81, .y=0x39, .sp=0x49, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x2a}, {.addr=0x2b93, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2b94, .a=0xd8, .x=0x81, .y=0x39, .sp=0x49, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xd8}, {.addr=0x2b93, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2b93, .value=0xc6, .type=IO_READ},
        {.addr=0x2b94, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x2a, .type=IO_READ},
        {.addr=0x0181, .value=0xd8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xd623, .a=0xc2, .x=0x2d, .y=0x80, .sp=0x47, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xe4}, {.addr=0xd623, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd624, .a=0xc2, .x=0x2d, .y=0x80, .sp=0x47, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xc2}, {.addr=0xd623, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd623, .value=0xc6, .type=IO_READ},
        {.addr=0xd624, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xe4, .type=IO_READ},
        {.addr=0x012d, .value=0xc2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xd92e, .a=0x63, .x=0xb9, .y=0x2a, .sp=0x14, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x19}, {.addr=0xd92e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd92f, .a=0x63, .x=0xb9, .y=0x2a, .sp=0x14, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x63}, {.addr=0xd92e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd92e, .value=0xc6, .type=IO_READ},
        {.addr=0xd92f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x19, .type=IO_READ},
        {.addr=0x01b9, .value=0x63, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x11b9, .a=0x04, .x=0xc6, .y=0xc6, .sp=0x82, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0xaf}, {.addr=0x11b9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x11ba, .a=0x04, .x=0xc6, .y=0xc6, .sp=0x82, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0x04}, {.addr=0x11b9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x11b9, .value=0xc6, .type=IO_READ},
        {.addr=0x11ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0xaf, .type=IO_READ},
        {.addr=0x00c6, .value=0x04, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xbff4, .a=0x38, .x=0x7e, .y=0x47, .sp=0x52, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0x61}, {.addr=0xbff4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbff5, .a=0x38, .x=0x7e, .y=0x47, .sp=0x52, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0x38}, {.addr=0xbff4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbff4, .value=0xc6, .type=IO_READ},
        {.addr=0xbff5, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0x61, .type=IO_READ},
        {.addr=0x007e, .value=0x38, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x09ce, .a=0x8f, .x=0x9e, .y=0x37, .sp=0xd4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0x51}, {.addr=0x09ce, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x09cf, .a=0x8f, .x=0x9e, .y=0x37, .sp=0xd4, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0x8f}, {.addr=0x09ce, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x09ce, .value=0xc6, .type=IO_READ},
        {.addr=0x09cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0x51, .type=IO_READ},
        {.addr=0x009e, .value=0x8f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xa108, .a=0x36, .x=0x60, .y=0xbf, .sp=0xaa, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x79}, {.addr=0xa108, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa109, .a=0x36, .x=0x60, .y=0xbf, .sp=0xaa, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x36}, {.addr=0xa108, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa108, .value=0xc6, .type=IO_READ},
        {.addr=0xa109, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x79, .type=IO_READ},
        {.addr=0x0160, .value=0x36, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x4298, .a=0xbf, .x=0xbd, .y=0x5c, .sp=0x7c, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0xc0}, {.addr=0x4298, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4299, .a=0xbf, .x=0xbd, .y=0x5c, .sp=0x7c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0xbf}, {.addr=0x4298, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4298, .value=0xc6, .type=IO_READ},
        {.addr=0x4299, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0xc0, .type=IO_READ},
        {.addr=0x00bd, .value=0xbf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x0593, .a=0x1b, .x=0x0e, .y=0x25, .sp=0x99, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x63}, {.addr=0x0593, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0594, .a=0x1b, .x=0x0e, .y=0x25, .sp=0x99, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x1b}, {.addr=0x0593, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0593, .value=0xc6, .type=IO_READ},
        {.addr=0x0594, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0x63, .type=IO_READ},
        {.addr=0x010e, .value=0x1b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x8d0d, .a=0xc1, .x=0x44, .y=0xef, .sp=0xfa, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x34}, {.addr=0x8d0d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8d0e, .a=0xc1, .x=0x44, .y=0xef, .sp=0xfa, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xc1}, {.addr=0x8d0d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8d0d, .value=0xc6, .type=IO_READ},
        {.addr=0x8d0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x34, .type=IO_READ},
        {.addr=0x0144, .value=0xc1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xaca5, .a=0x48, .x=0xbb, .y=0x6a, .sp=0xc3, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0xe6}, {.addr=0xaca5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xaca6, .a=0x48, .x=0xbb, .y=0x6a, .sp=0xc3, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x48}, {.addr=0xaca5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xaca5, .value=0xc6, .type=IO_READ},
        {.addr=0xaca6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0xe6, .type=IO_READ},
        {.addr=0x00bb, .value=0x48, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x5497, .a=0x78, .x=0x5f, .y=0x5d, .sp=0x61, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x76}, {.addr=0x5497, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5498, .a=0x78, .x=0x5f, .y=0x5d, .sp=0x61, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x78}, {.addr=0x5497, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5497, .value=0xc6, .type=IO_READ},
        {.addr=0x5498, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x76, .type=IO_READ},
        {.addr=0x005f, .value=0x78, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xb9e7, .a=0xdc, .x=0xbc, .y=0xe8, .sp=0x56, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x50}, {.addr=0xb9e7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb9e8, .a=0xdc, .x=0xbc, .y=0xe8, .sp=0x56, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xdc}, {.addr=0xb9e7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb9e7, .value=0xc6, .type=IO_READ},
        {.addr=0xb9e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x50, .type=IO_READ},
        {.addr=0x01bc, .value=0xdc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xb332, .a=0x36, .x=0xd1, .y=0xfe, .sp=0xd9, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x25}, {.addr=0xb332, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb333, .a=0x36, .x=0xd1, .y=0xfe, .sp=0xd9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x36}, {.addr=0xb332, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb332, .value=0xc6, .type=IO_READ},
        {.addr=0xb333, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x25, .type=IO_READ},
        {.addr=0x00d1, .value=0x36, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xa6e5, .a=0xad, .x=0xeb, .y=0xda, .sp=0x74, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0xd6}, {.addr=0xa6e5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa6e6, .a=0xad, .x=0xeb, .y=0xda, .sp=0x74, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0xad}, {.addr=0xa6e5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa6e5, .value=0xc6, .type=IO_READ},
        {.addr=0xa6e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0xd6, .type=IO_READ},
        {.addr=0x00eb, .value=0xad, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xce1d, .a=0x9c, .x=0x9b, .y=0xd1, .sp=0xd2, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x6d}, {.addr=0xce1d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xce1e, .a=0x9c, .x=0x9b, .y=0xd1, .sp=0xd2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0x9c}, {.addr=0xce1d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xce1d, .value=0xc6, .type=IO_READ},
        {.addr=0xce1e, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0x6d, .type=IO_READ},
        {.addr=0x009b, .value=0x9c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xe6c3, .a=0x2a, .x=0xa8, .y=0x78, .sp=0x81, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x55}, {.addr=0xe6c3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe6c4, .a=0x2a, .x=0xa8, .y=0x78, .sp=0x81, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x2a}, {.addr=0xe6c3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe6c3, .value=0xc6, .type=IO_READ},
        {.addr=0xe6c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x55, .type=IO_READ},
        {.addr=0x01a8, .value=0x2a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xe590, .a=0x0c, .x=0x88, .y=0x93, .sp=0x0b, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x86}, {.addr=0xe590, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe591, .a=0x0c, .x=0x88, .y=0x93, .sp=0x0b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x0c}, {.addr=0xe590, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe590, .value=0xc6, .type=IO_READ},
        {.addr=0xe591, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x86, .type=IO_READ},
        {.addr=0x0188, .value=0x0c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x0614, .a=0x5f, .x=0xd6, .y=0xc5, .sp=0x0b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xba}, {.addr=0x0614, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0615, .a=0x5f, .x=0xd6, .y=0xc5, .sp=0x0b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x5f}, {.addr=0x0614, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0614, .value=0xc6, .type=IO_READ},
        {.addr=0x0615, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xba, .type=IO_READ},
        {.addr=0x00d6, .value=0x5f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x6b96, .a=0x82, .x=0x90, .y=0x21, .sp=0x64, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x6b}, {.addr=0x6b96, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6b97, .a=0x82, .x=0x90, .y=0x21, .sp=0x64, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x82}, {.addr=0x6b96, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6b96, .value=0xc6, .type=IO_READ},
        {.addr=0x6b97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x6b, .type=IO_READ},
        {.addr=0x0090, .value=0x82, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xf084, .a=0x32, .x=0xca, .y=0x60, .sp=0x26, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x7d}, {.addr=0xf084, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf085, .a=0x32, .x=0xca, .y=0x60, .sp=0x26, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x32}, {.addr=0xf084, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf084, .value=0xc6, .type=IO_READ},
        {.addr=0xf085, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x7d, .type=IO_READ},
        {.addr=0x01ca, .value=0x32, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x6e83, .a=0x24, .x=0x19, .y=0x1a, .sp=0x1c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0xf6}, {.addr=0x6e83, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6e84, .a=0x24, .x=0x19, .y=0x1a, .sp=0x1c, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0x24}, {.addr=0x6e83, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6e83, .value=0xc6, .type=IO_READ},
        {.addr=0x6e84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0019, .value=0xf6, .type=IO_READ},
        {.addr=0x0019, .value=0x24, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x775f, .a=0x7e, .x=0x98, .y=0xa5, .sp=0xe8, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0xd9}, {.addr=0x775f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7760, .a=0x7e, .x=0x98, .y=0xa5, .sp=0xe8, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x7e}, {.addr=0x775f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x775f, .value=0xc6, .type=IO_READ},
        {.addr=0x7760, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0xd9, .type=IO_READ},
        {.addr=0x0098, .value=0x7e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xd858, .a=0xe0, .x=0xc4, .y=0xe8, .sp=0x35, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x62}, {.addr=0xd858, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd859, .a=0xe0, .x=0xc4, .y=0xe8, .sp=0x35, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0xe0}, {.addr=0xd858, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd858, .value=0xc6, .type=IO_READ},
        {.addr=0xd859, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x62, .type=IO_READ},
        {.addr=0x00c4, .value=0xe0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x0e0e, .a=0x98, .x=0x95, .y=0x0e, .sp=0xd4, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x77}, {.addr=0x0e0e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0e0f, .a=0x98, .x=0x95, .y=0x0e, .sp=0xd4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x98}, {.addr=0x0e0e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0e0e, .value=0xc6, .type=IO_READ},
        {.addr=0x0e0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x77, .type=IO_READ},
        {.addr=0x0195, .value=0x98, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x8338, .a=0x82, .x=0x4b, .y=0xfd, .sp=0x21, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0xef}, {.addr=0x8338, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8339, .a=0x82, .x=0x4b, .y=0xfd, .sp=0x21, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x82}, {.addr=0x8338, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8338, .value=0xc6, .type=IO_READ},
        {.addr=0x8339, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0xef, .type=IO_READ},
        {.addr=0x004b, .value=0x82, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xbf83, .a=0x4f, .x=0xc1, .y=0x00, .sp=0xb4, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0x68}, {.addr=0xbf83, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbf84, .a=0x4f, .x=0xc1, .y=0x00, .sp=0xb4, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0x4f}, {.addr=0xbf83, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbf83, .value=0xc6, .type=IO_READ},
        {.addr=0xbf84, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0x68, .type=IO_READ},
        {.addr=0x00c1, .value=0x4f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xdff7, .a=0xab, .x=0xc2, .y=0x09, .sp=0x1f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0x80}, {.addr=0xdff7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdff8, .a=0xab, .x=0xc2, .y=0x09, .sp=0x1f, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0xab}, {.addr=0xdff7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdff7, .value=0xc6, .type=IO_READ},
        {.addr=0xdff8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0x80, .type=IO_READ},
        {.addr=0x00c2, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xbdc6, .a=0x71, .x=0x36, .y=0x76, .sp=0x27, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xb8}, {.addr=0xbdc6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbdc7, .a=0x71, .x=0x36, .y=0x76, .sp=0x27, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x71}, {.addr=0xbdc6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbdc6, .value=0xc6, .type=IO_READ},
        {.addr=0xbdc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xb8, .type=IO_READ},
        {.addr=0x0136, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xba64, .a=0xe4, .x=0x25, .y=0xf1, .sp=0xb2, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x40}, {.addr=0xba64, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xba65, .a=0xe4, .x=0x25, .y=0xf1, .sp=0xb2, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xe4}, {.addr=0xba64, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xba64, .value=0xc6, .type=IO_READ},
        {.addr=0xba65, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x40, .type=IO_READ},
        {.addr=0x0025, .value=0xe4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xa61f, .a=0x97, .x=0x55, .y=0xc4, .sp=0x35, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x1b}, {.addr=0xa61f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa620, .a=0x97, .x=0x55, .y=0xc4, .sp=0x35, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0x97}, {.addr=0xa61f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa61f, .value=0xc6, .type=IO_READ},
        {.addr=0xa620, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0x1b, .type=IO_READ},
        {.addr=0x0055, .value=0x97, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x7d6a, .a=0xd5, .x=0xc6, .y=0xf1, .sp=0xf5, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xf8}, {.addr=0x7d6a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7d6b, .a=0xd5, .x=0xc6, .y=0xf1, .sp=0xf5, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xd5}, {.addr=0x7d6a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7d6a, .value=0xc6, .type=IO_READ},
        {.addr=0x7d6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xf8, .type=IO_READ},
        {.addr=0x01c6, .value=0xd5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x2f61, .a=0xab, .x=0x25, .y=0xea, .sp=0xbc, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x97}, {.addr=0x2f61, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2f62, .a=0xab, .x=0x25, .y=0xea, .sp=0xbc, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xab}, {.addr=0x2f61, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2f61, .value=0xc6, .type=IO_READ},
        {.addr=0x2f62, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x97, .type=IO_READ},
        {.addr=0x0125, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x2517, .a=0xa8, .x=0x20, .y=0x15, .sp=0xe5, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x8b}, {.addr=0x2517, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2518, .a=0xa8, .x=0x20, .y=0x15, .sp=0xe5, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xa8}, {.addr=0x2517, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2517, .value=0xc6, .type=IO_READ},
        {.addr=0x2518, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x8b, .type=IO_READ},
        {.addr=0x0120, .value=0xa8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x7e31, .a=0xd7, .x=0xdb, .y=0x97, .sp=0x30, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x86}, {.addr=0x7e31, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7e32, .a=0xd7, .x=0xdb, .y=0x97, .sp=0x30, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xd7}, {.addr=0x7e31, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7e31, .value=0xc6, .type=IO_READ},
        {.addr=0x7e32, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x86, .type=IO_READ},
        {.addr=0x01db, .value=0xd7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x3b51, .a=0x80, .x=0xc9, .y=0xae, .sp=0x17, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x76}, {.addr=0x3b51, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3b52, .a=0x80, .x=0xc9, .y=0xae, .sp=0x17, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x80}, {.addr=0x3b51, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3b51, .value=0xc6, .type=IO_READ},
        {.addr=0x3b52, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x76, .type=IO_READ},
        {.addr=0x01c9, .value=0x80, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x86b0, .a=0x8b, .x=0x95, .y=0x8b, .sp=0x27, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x0d}, {.addr=0x86b0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x86b1, .a=0x8b, .x=0x95, .y=0x8b, .sp=0x27, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x8b}, {.addr=0x86b0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x86b0, .value=0xc6, .type=IO_READ},
        {.addr=0x86b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0x0d, .type=IO_READ},
        {.addr=0x0095, .value=0x8b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xec3e, .a=0x86, .x=0x84, .y=0xfd, .sp=0x17, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x07}, {.addr=0xec3e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xec3f, .a=0x86, .x=0x84, .y=0xfd, .sp=0x17, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x86}, {.addr=0xec3e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xec3e, .value=0xc6, .type=IO_READ},
        {.addr=0xec3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x07, .type=IO_READ},
        {.addr=0x0184, .value=0x86, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x23d9, .a=0xd8, .x=0xf2, .y=0xfb, .sp=0xb4, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0xd1}, {.addr=0x23d9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x23da, .a=0xd8, .x=0xf2, .y=0xfb, .sp=0xb4, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xd8}, {.addr=0x23d9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x23d9, .value=0xc6, .type=IO_READ},
        {.addr=0x23da, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0xd1, .type=IO_READ},
        {.addr=0x01f2, .value=0xd8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xaf90, .a=0xf1, .x=0x42, .y=0xab, .sp=0x43, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0xc3}, {.addr=0xaf90, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xaf91, .a=0xf1, .x=0x42, .y=0xab, .sp=0x43, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0xf1}, {.addr=0xaf90, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xaf90, .value=0xc6, .type=IO_READ},
        {.addr=0xaf91, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0xc3, .type=IO_READ},
        {.addr=0x0042, .value=0xf1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xfec2, .a=0x71, .x=0x57, .y=0xb6, .sp=0x9f, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0x39}, {.addr=0xfec2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfec3, .a=0x71, .x=0x57, .y=0xb6, .sp=0x9f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0x71}, {.addr=0xfec2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfec2, .value=0xc6, .type=IO_READ},
        {.addr=0xfec3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0x39, .type=IO_READ},
        {.addr=0x0057, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x62da, .a=0xdc, .x=0x15, .y=0xaa, .sp=0xf4, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0x3f}, {.addr=0x62da, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x62db, .a=0xdc, .x=0x15, .y=0xaa, .sp=0xf4, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0xdc}, {.addr=0x62da, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x62da, .value=0xc6, .type=IO_READ},
        {.addr=0x62db, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0x3f, .type=IO_READ},
        {.addr=0x0015, .value=0xdc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x5fef, .a=0x0b, .x=0x97, .y=0x43, .sp=0xf0, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x71}, {.addr=0x5fef, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5ff0, .a=0x0b, .x=0x97, .y=0x43, .sp=0xf0, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x0b}, {.addr=0x5fef, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5fef, .value=0xc6, .type=IO_READ},
        {.addr=0x5ff0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x71, .type=IO_READ},
        {.addr=0x0197, .value=0x0b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xdbd7, .a=0x0c, .x=0x9e, .y=0xf6, .sp=0xb8, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x62}, {.addr=0xdbd7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdbd8, .a=0x0c, .x=0x9e, .y=0xf6, .sp=0xb8, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x0c}, {.addr=0xdbd7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdbd7, .value=0xc6, .type=IO_READ},
        {.addr=0xdbd8, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x62, .type=IO_READ},
        {.addr=0x019e, .value=0x0c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x36f5, .a=0xc1, .x=0xe5, .y=0x08, .sp=0x1d, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x71}, {.addr=0x36f5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x36f6, .a=0xc1, .x=0xe5, .y=0x08, .sp=0x1d, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0xc1}, {.addr=0x36f5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x36f5, .value=0xc6, .type=IO_READ},
        {.addr=0x36f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0x71, .type=IO_READ},
        {.addr=0x00e5, .value=0xc1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x8b4d, .a=0x6e, .x=0xb1, .y=0x50, .sp=0xcb, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x48}, {.addr=0x8b4d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8b4e, .a=0x6e, .x=0xb1, .y=0x50, .sp=0xcb, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x6e}, {.addr=0x8b4d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8b4d, .value=0xc6, .type=IO_READ},
        {.addr=0x8b4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x48, .type=IO_READ},
        {.addr=0x01b1, .value=0x6e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x806a, .a=0x16, .x=0x65, .y=0x9e, .sp=0xae, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0x37}, {.addr=0x806a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x806b, .a=0x16, .x=0x65, .y=0x9e, .sp=0xae, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0x16}, {.addr=0x806a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x806a, .value=0xc6, .type=IO_READ},
        {.addr=0x806b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0x37, .type=IO_READ},
        {.addr=0x0065, .value=0x16, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xf609, .a=0xbd, .x=0x4b, .y=0x07, .sp=0x62, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x56}, {.addr=0xf609, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf60a, .a=0xbd, .x=0x4b, .y=0x07, .sp=0x62, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0xbd}, {.addr=0xf609, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf609, .value=0xc6, .type=IO_READ},
        {.addr=0xf60a, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0x56, .type=IO_READ},
        {.addr=0x004b, .value=0xbd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xdf68, .a=0x5c, .x=0x96, .y=0x07, .sp=0xe6, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x54}, {.addr=0xdf68, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdf69, .a=0x5c, .x=0x96, .y=0x07, .sp=0xe6, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x5c}, {.addr=0xdf68, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdf68, .value=0xc6, .type=IO_READ},
        {.addr=0xdf69, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x54, .type=IO_READ},
        {.addr=0x0196, .value=0x5c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x44e6, .a=0x81, .x=0xc1, .y=0x8b, .sp=0xdb, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0xe3}, {.addr=0x44e6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x44e7, .a=0x81, .x=0xc1, .y=0x8b, .sp=0xdb, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0x81}, {.addr=0x44e6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x44e6, .value=0xc6, .type=IO_READ},
        {.addr=0x44e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0xe3, .type=IO_READ},
        {.addr=0x00c1, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0300) {
    const struct CPU_State initial_cpu = {.pc=0x0b0e, .a=0x41, .x=0xaf, .y=0x3e, .sp=0xe8, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0xfb}, {.addr=0x0b0e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0b0f, .a=0x41, .x=0xaf, .y=0x3e, .sp=0xe8, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x41}, {.addr=0x0b0e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0b0e, .value=0xc6, .type=IO_READ},
        {.addr=0x0b0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xfb, .type=IO_READ},
        {.addr=0x01af, .value=0x41, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0301) {
    const struct CPU_State initial_cpu = {.pc=0xa82b, .a=0x28, .x=0x18, .y=0xbd, .sp=0xed, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x33}, {.addr=0xa82b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa82c, .a=0x28, .x=0x18, .y=0xbd, .sp=0xed, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x28}, {.addr=0xa82b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa82b, .value=0xc6, .type=IO_READ},
        {.addr=0xa82c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x33, .type=IO_READ},
        {.addr=0x0118, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0302) {
    const struct CPU_State initial_cpu = {.pc=0xa499, .a=0x04, .x=0x64, .y=0x68, .sp=0x3e, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x3d}, {.addr=0xa499, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa49a, .a=0x04, .x=0x64, .y=0x68, .sp=0x3e, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x04}, {.addr=0xa499, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa499, .value=0xc6, .type=IO_READ},
        {.addr=0xa49a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0x3d, .type=IO_READ},
        {.addr=0x0064, .value=0x04, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0303) {
    const struct CPU_State initial_cpu = {.pc=0x8f4b, .a=0x3d, .x=0x0c, .y=0x16, .sp=0x08, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x4d}, {.addr=0x8f4b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8f4c, .a=0x3d, .x=0x0c, .y=0x16, .sp=0x08, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x3d}, {.addr=0x8f4b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8f4b, .value=0xc6, .type=IO_READ},
        {.addr=0x8f4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0x4d, .type=IO_READ},
        {.addr=0x000c, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0305) {
    const struct CPU_State initial_cpu = {.pc=0x358d, .a=0xa0, .x=0x0a, .y=0x31, .sp=0xf0, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0xb8}, {.addr=0x358d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x358e, .a=0xa0, .x=0x0a, .y=0x31, .sp=0xf0, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0xa0}, {.addr=0x358d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x358d, .value=0xc6, .type=IO_READ},
        {.addr=0x358e, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0xb8, .type=IO_READ},
        {.addr=0x000a, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0306) {
    const struct CPU_State initial_cpu = {.pc=0xdb63, .a=0x9d, .x=0x85, .y=0x3b, .sp=0x72, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xc9}, {.addr=0xdb63, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdb64, .a=0x9d, .x=0x85, .y=0x3b, .sp=0x72, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0x9d}, {.addr=0xdb63, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdb63, .value=0xc6, .type=IO_READ},
        {.addr=0xdb64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xc9, .type=IO_READ},
        {.addr=0x0085, .value=0x9d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0307) {
    const struct CPU_State initial_cpu = {.pc=0x0d99, .a=0x6a, .x=0x2f, .y=0x4e, .sp=0xf5, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x7d}, {.addr=0x0d99, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0d9a, .a=0x6a, .x=0x2f, .y=0x4e, .sp=0xf5, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x6a}, {.addr=0x0d99, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0d99, .value=0xc6, .type=IO_READ},
        {.addr=0x0d9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x7d, .type=IO_READ},
        {.addr=0x002f, .value=0x6a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0308) {
    const struct CPU_State initial_cpu = {.pc=0x9750, .a=0xac, .x=0x54, .y=0x26, .sp=0x02, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x0f}, {.addr=0x9750, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9751, .a=0xac, .x=0x54, .y=0x26, .sp=0x02, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xac}, {.addr=0x9750, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9750, .value=0xc6, .type=IO_READ},
        {.addr=0x9751, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x0f, .type=IO_READ},
        {.addr=0x0154, .value=0xac, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0309) {
    const struct CPU_State initial_cpu = {.pc=0x69be, .a=0x67, .x=0xe0, .y=0x4c, .sp=0xbb, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x48}, {.addr=0x69be, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x69bf, .a=0x67, .x=0xe0, .y=0x4c, .sp=0xbb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x67}, {.addr=0x69be, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x69be, .value=0xc6, .type=IO_READ},
        {.addr=0x69bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x48, .type=IO_READ},
        {.addr=0x01e0, .value=0x67, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_030A) {
    const struct CPU_State initial_cpu = {.pc=0xeb78, .a=0xb5, .x=0xcb, .y=0xc0, .sp=0xd6, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0xab}, {.addr=0xeb78, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xeb79, .a=0xb5, .x=0xcb, .y=0xc0, .sp=0xd6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0xb5}, {.addr=0xeb78, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xeb78, .value=0xc6, .type=IO_READ},
        {.addr=0xeb79, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0xab, .type=IO_READ},
        {.addr=0x00cb, .value=0xb5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_030B) {
    const struct CPU_State initial_cpu = {.pc=0xfa6e, .a=0xab, .x=0x1a, .y=0x96, .sp=0x8c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0x09}, {.addr=0xfa6e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfa6f, .a=0xab, .x=0x1a, .y=0x96, .sp=0x8c, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0xab}, {.addr=0xfa6e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfa6e, .value=0xc6, .type=IO_READ},
        {.addr=0xfa6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x001a, .value=0x09, .type=IO_READ},
        {.addr=0x001a, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_030C) {
    const struct CPU_State initial_cpu = {.pc=0x4106, .a=0x92, .x=0xde, .y=0xad, .sp=0x0a, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0xf7}, {.addr=0x4106, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4107, .a=0x92, .x=0xde, .y=0xad, .sp=0x0a, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0x92}, {.addr=0x4106, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4106, .value=0xc6, .type=IO_READ},
        {.addr=0x4107, .value=DUMMY, .type=IO_READ},
        {.addr=0x00de, .value=0xf7, .type=IO_READ},
        {.addr=0x00de, .value=0x92, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_030D) {
    const struct CPU_State initial_cpu = {.pc=0x9a90, .a=0x88, .x=0x8c, .y=0xb0, .sp=0x28, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0x31}, {.addr=0x9a90, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9a91, .a=0x88, .x=0x8c, .y=0xb0, .sp=0x28, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0x88}, {.addr=0x9a90, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9a90, .value=0xc6, .type=IO_READ},
        {.addr=0x9a91, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0x31, .type=IO_READ},
        {.addr=0x008c, .value=0x88, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_030E) {
    const struct CPU_State initial_cpu = {.pc=0x0436, .a=0x97, .x=0xd5, .y=0x93, .sp=0x11, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x09}, {.addr=0x0436, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0437, .a=0x97, .x=0xd5, .y=0x93, .sp=0x11, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x97}, {.addr=0x0436, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0436, .value=0xc6, .type=IO_READ},
        {.addr=0x0437, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x09, .type=IO_READ},
        {.addr=0x00d5, .value=0x97, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_030F) {
    const struct CPU_State initial_cpu = {.pc=0x2e85, .a=0xa5, .x=0x8c, .y=0x23, .sp=0xdd, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0x36}, {.addr=0x2e85, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2e86, .a=0xa5, .x=0x8c, .y=0x23, .sp=0xdd, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0xa5}, {.addr=0x2e85, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2e85, .value=0xc6, .type=IO_READ},
        {.addr=0x2e86, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0x36, .type=IO_READ},
        {.addr=0x008c, .value=0xa5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0310) {
    const struct CPU_State initial_cpu = {.pc=0xfa26, .a=0x26, .x=0x54, .y=0x87, .sp=0xba, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x56}, {.addr=0xfa26, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfa27, .a=0x26, .x=0x54, .y=0x87, .sp=0xba, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x26}, {.addr=0xfa26, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfa26, .value=0xc6, .type=IO_READ},
        {.addr=0xfa27, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x56, .type=IO_READ},
        {.addr=0x0154, .value=0x26, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0311) {
    const struct CPU_State initial_cpu = {.pc=0x1df7, .a=0xe4, .x=0x4e, .y=0x6f, .sp=0xea, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x06}, {.addr=0x1df7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1df8, .a=0xe4, .x=0x4e, .y=0x6f, .sp=0xea, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0xe4}, {.addr=0x1df7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1df7, .value=0xc6, .type=IO_READ},
        {.addr=0x1df8, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x06, .type=IO_READ},
        {.addr=0x004e, .value=0xe4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0312) {
    const struct CPU_State initial_cpu = {.pc=0x9b78, .a=0x66, .x=0x6b, .y=0x52, .sp=0x32, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0xbe}, {.addr=0x9b78, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9b79, .a=0x66, .x=0x6b, .y=0x52, .sp=0x32, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x66}, {.addr=0x9b78, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9b78, .value=0xc6, .type=IO_READ},
        {.addr=0x9b79, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xbe, .type=IO_READ},
        {.addr=0x016b, .value=0x66, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0313) {
    const struct CPU_State initial_cpu = {.pc=0x56d4, .a=0x62, .x=0x86, .y=0xd5, .sp=0x9f, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xe4}, {.addr=0x56d4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x56d5, .a=0x62, .x=0x86, .y=0xd5, .sp=0x9f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x62}, {.addr=0x56d4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x56d4, .value=0xc6, .type=IO_READ},
        {.addr=0x56d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xe4, .type=IO_READ},
        {.addr=0x0186, .value=0x62, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0314) {
    const struct CPU_State initial_cpu = {.pc=0xe9a5, .a=0xb0, .x=0xc4, .y=0x08, .sp=0x5c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x10}, {.addr=0xe9a5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe9a6, .a=0xb0, .x=0xc4, .y=0x08, .sp=0x5c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0xb0}, {.addr=0xe9a5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe9a5, .value=0xc6, .type=IO_READ},
        {.addr=0xe9a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x10, .type=IO_READ},
        {.addr=0x00c4, .value=0xb0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0315) {
    const struct CPU_State initial_cpu = {.pc=0x2c7f, .a=0xa4, .x=0x3e, .y=0x5e, .sp=0xe3, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0x92}, {.addr=0x2c7f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2c80, .a=0xa4, .x=0x3e, .y=0x5e, .sp=0xe3, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0xa4}, {.addr=0x2c7f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2c7f, .value=0xc6, .type=IO_READ},
        {.addr=0x2c80, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0x92, .type=IO_READ},
        {.addr=0x003e, .value=0xa4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0316) {
    const struct CPU_State initial_cpu = {.pc=0xe41e, .a=0x69, .x=0x94, .y=0x16, .sp=0x57, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x21}, {.addr=0xe41e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe41f, .a=0x69, .x=0x94, .y=0x16, .sp=0x57, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x69}, {.addr=0xe41e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe41e, .value=0xc6, .type=IO_READ},
        {.addr=0xe41f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x21, .type=IO_READ},
        {.addr=0x0094, .value=0x69, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0317) {
    const struct CPU_State initial_cpu = {.pc=0x389b, .a=0x91, .x=0xb7, .y=0x81, .sp=0x10, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0xd0}, {.addr=0x389b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x389c, .a=0x91, .x=0xb7, .y=0x81, .sp=0x10, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x91}, {.addr=0x389b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x389b, .value=0xc6, .type=IO_READ},
        {.addr=0x389c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0xd0, .type=IO_READ},
        {.addr=0x00b7, .value=0x91, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0318) {
    const struct CPU_State initial_cpu = {.pc=0x2849, .a=0x6b, .x=0x76, .y=0x08, .sp=0xdc, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x91}, {.addr=0x2849, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x284a, .a=0x6b, .x=0x76, .y=0x08, .sp=0xdc, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x6b}, {.addr=0x2849, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2849, .value=0xc6, .type=IO_READ},
        {.addr=0x284a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x91, .type=IO_READ},
        {.addr=0x0076, .value=0x6b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0319) {
    const struct CPU_State initial_cpu = {.pc=0x9c8d, .a=0x8d, .x=0xe6, .y=0x6b, .sp=0xb1, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x45}, {.addr=0x9c8d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9c8e, .a=0x8d, .x=0xe6, .y=0x6b, .sp=0xb1, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x8d}, {.addr=0x9c8d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9c8d, .value=0xc6, .type=IO_READ},
        {.addr=0x9c8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0x45, .type=IO_READ},
        {.addr=0x00e6, .value=0x8d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_031A) {
    const struct CPU_State initial_cpu = {.pc=0xe369, .a=0x69, .x=0xdc, .y=0x6f, .sp=0xe8, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xcc}, {.addr=0xe369, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe36a, .a=0x69, .x=0xdc, .y=0x6f, .sp=0xe8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x69}, {.addr=0xe369, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe369, .value=0xc6, .type=IO_READ},
        {.addr=0xe36a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0xcc, .type=IO_READ},
        {.addr=0x01dc, .value=0x69, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_031B) {
    const struct CPU_State initial_cpu = {.pc=0x4371, .a=0x70, .x=0xee, .y=0x0e, .sp=0x88, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0xce}, {.addr=0x4371, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4372, .a=0x70, .x=0xee, .y=0x0e, .sp=0x88, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x70}, {.addr=0x4371, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4371, .value=0xc6, .type=IO_READ},
        {.addr=0x4372, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0xce, .type=IO_READ},
        {.addr=0x00ee, .value=0x70, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_031C) {
    const struct CPU_State initial_cpu = {.pc=0xd7b7, .a=0x6e, .x=0x54, .y=0x29, .sp=0x09, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x66}, {.addr=0xd7b7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd7b8, .a=0x6e, .x=0x54, .y=0x29, .sp=0x09, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x6e}, {.addr=0xd7b7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd7b7, .value=0xc6, .type=IO_READ},
        {.addr=0xd7b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x66, .type=IO_READ},
        {.addr=0x0054, .value=0x6e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_031D) {
    const struct CPU_State initial_cpu = {.pc=0x9059, .a=0x97, .x=0x1f, .y=0x1e, .sp=0xfb, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xc6}, {.addr=0x9059, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x905a, .a=0x97, .x=0x1f, .y=0x1e, .sp=0xfb, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x97}, {.addr=0x9059, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9059, .value=0xc6, .type=IO_READ},
        {.addr=0x905a, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xc6, .type=IO_READ},
        {.addr=0x011f, .value=0x97, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_031E) {
    const struct CPU_State initial_cpu = {.pc=0xad9e, .a=0x46, .x=0x59, .y=0x06, .sp=0x0c, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x7a}, {.addr=0xad9e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xad9f, .a=0x46, .x=0x59, .y=0x06, .sp=0x0c, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0x46}, {.addr=0xad9e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xad9e, .value=0xc6, .type=IO_READ},
        {.addr=0xad9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0x7a, .type=IO_READ},
        {.addr=0x0059, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_031F) {
    const struct CPU_State initial_cpu = {.pc=0xb3eb, .a=0xea, .x=0x52, .y=0x03, .sp=0x22, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0xf8}, {.addr=0xb3eb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb3ec, .a=0xea, .x=0x52, .y=0x03, .sp=0x22, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0xea}, {.addr=0xb3eb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb3eb, .value=0xc6, .type=IO_READ},
        {.addr=0xb3ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0xf8, .type=IO_READ},
        {.addr=0x0052, .value=0xea, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0320) {
    const struct CPU_State initial_cpu = {.pc=0x147b, .a=0xa6, .x=0x67, .y=0x06, .sp=0xe4, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x44}, {.addr=0x147b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x147c, .a=0xa6, .x=0x67, .y=0x06, .sp=0xe4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xa6}, {.addr=0x147b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x147b, .value=0xc6, .type=IO_READ},
        {.addr=0x147c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x44, .type=IO_READ},
        {.addr=0x0167, .value=0xa6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0321) {
    const struct CPU_State initial_cpu = {.pc=0x4643, .a=0xea, .x=0x8e, .y=0xd2, .sp=0x4f, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x80}, {.addr=0x4643, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4644, .a=0xea, .x=0x8e, .y=0xd2, .sp=0x4f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0xea}, {.addr=0x4643, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4643, .value=0xc6, .type=IO_READ},
        {.addr=0x4644, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x80, .type=IO_READ},
        {.addr=0x008e, .value=0xea, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0322) {
    const struct CPU_State initial_cpu = {.pc=0x14b0, .a=0x37, .x=0x3c, .y=0xb9, .sp=0xfa, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x77}, {.addr=0x14b0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x14b1, .a=0x37, .x=0x3c, .y=0xb9, .sp=0xfa, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x37}, {.addr=0x14b0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x14b0, .value=0xc6, .type=IO_READ},
        {.addr=0x14b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x77, .type=IO_READ},
        {.addr=0x003c, .value=0x37, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0323) {
    const struct CPU_State initial_cpu = {.pc=0x63a1, .a=0x59, .x=0xb5, .y=0x39, .sp=0x7a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x00b5, .value=0xef}, {.addr=0x63a1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x63a2, .a=0x59, .x=0xb5, .y=0x39, .sp=0x7a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x00b5, .value=0x59}, {.addr=0x63a1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x63a1, .value=0xc6, .type=IO_READ},
        {.addr=0x63a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b5, .value=0xef, .type=IO_READ},
        {.addr=0x00b5, .value=0x59, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0324) {
    const struct CPU_State initial_cpu = {.pc=0x601b, .a=0x33, .x=0x13, .y=0x1d, .sp=0x62, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xc1}, {.addr=0x601b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x601c, .a=0x33, .x=0x13, .y=0x1d, .sp=0x62, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x33}, {.addr=0x601b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x601b, .value=0xc6, .type=IO_READ},
        {.addr=0x601c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xc1, .type=IO_READ},
        {.addr=0x0113, .value=0x33, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0325) {
    const struct CPU_State initial_cpu = {.pc=0xb566, .a=0x8c, .x=0xa0, .y=0x83, .sp=0xd9, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0x16}, {.addr=0xb566, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb567, .a=0x8c, .x=0xa0, .y=0x83, .sp=0xd9, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0x8c}, {.addr=0xb566, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb566, .value=0xc6, .type=IO_READ},
        {.addr=0xb567, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0x16, .type=IO_READ},
        {.addr=0x00a0, .value=0x8c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0326) {
    const struct CPU_State initial_cpu = {.pc=0x860e, .a=0x19, .x=0x4f, .y=0x0e, .sp=0x7d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0x67}, {.addr=0x860e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x860f, .a=0x19, .x=0x4f, .y=0x0e, .sp=0x7d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0x19}, {.addr=0x860e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x860e, .value=0xc6, .type=IO_READ},
        {.addr=0x860f, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0x67, .type=IO_READ},
        {.addr=0x004f, .value=0x19, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0327) {
    const struct CPU_State initial_cpu = {.pc=0x2bdd, .a=0x87, .x=0x16, .y=0xe3, .sp=0x7c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x78}, {.addr=0x2bdd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2bde, .a=0x87, .x=0x16, .y=0xe3, .sp=0x7c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x87}, {.addr=0x2bdd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2bdd, .value=0xc6, .type=IO_READ},
        {.addr=0x2bde, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x78, .type=IO_READ},
        {.addr=0x0116, .value=0x87, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0328) {
    const struct CPU_State initial_cpu = {.pc=0x83c1, .a=0x71, .x=0xac, .y=0x01, .sp=0x3b, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x4c}, {.addr=0x83c1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x83c2, .a=0x71, .x=0xac, .y=0x01, .sp=0x3b, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x71}, {.addr=0x83c1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x83c1, .value=0xc6, .type=IO_READ},
        {.addr=0x83c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x4c, .type=IO_READ},
        {.addr=0x00ac, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_032A) {
    const struct CPU_State initial_cpu = {.pc=0xd04e, .a=0x67, .x=0xd9, .y=0x8d, .sp=0xf9, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x35}, {.addr=0xd04e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd04f, .a=0x67, .x=0xd9, .y=0x8d, .sp=0xf9, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x67}, {.addr=0xd04e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd04e, .value=0xc6, .type=IO_READ},
        {.addr=0xd04f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x35, .type=IO_READ},
        {.addr=0x01d9, .value=0x67, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_032B) {
    const struct CPU_State initial_cpu = {.pc=0x4464, .a=0xbc, .x=0x31, .y=0x89, .sp=0x66, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0xcf}, {.addr=0x4464, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4465, .a=0xbc, .x=0x31, .y=0x89, .sp=0x66, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xbc}, {.addr=0x4464, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4464, .value=0xc6, .type=IO_READ},
        {.addr=0x4465, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0xcf, .type=IO_READ},
        {.addr=0x0031, .value=0xbc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_032C) {
    const struct CPU_State initial_cpu = {.pc=0xcdf1, .a=0x26, .x=0x5c, .y=0xe8, .sp=0x34, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x84}, {.addr=0xcdf1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcdf2, .a=0x26, .x=0x5c, .y=0xe8, .sp=0x34, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x26}, {.addr=0xcdf1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcdf1, .value=0xc6, .type=IO_READ},
        {.addr=0xcdf2, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x84, .type=IO_READ},
        {.addr=0x015c, .value=0x26, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_032D) {
    const struct CPU_State initial_cpu = {.pc=0xccc6, .a=0xae, .x=0x22, .y=0xb2, .sp=0xd3, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0xe7}, {.addr=0xccc6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xccc7, .a=0xae, .x=0x22, .y=0xb2, .sp=0xd3, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0xae}, {.addr=0xccc6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xccc6, .value=0xc6, .type=IO_READ},
        {.addr=0xccc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0022, .value=0xe7, .type=IO_READ},
        {.addr=0x0022, .value=0xae, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_032F) {
    const struct CPU_State initial_cpu = {.pc=0xdc9d, .a=0xc3, .x=0x67, .y=0x90, .sp=0xaa, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x40}, {.addr=0xdc9d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdc9e, .a=0xc3, .x=0x67, .y=0x90, .sp=0xaa, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0xc3}, {.addr=0xdc9d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdc9d, .value=0xc6, .type=IO_READ},
        {.addr=0xdc9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0x40, .type=IO_READ},
        {.addr=0x0067, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0330) {
    const struct CPU_State initial_cpu = {.pc=0xb379, .a=0x74, .x=0x9d, .y=0x2a, .sp=0x1b, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x44}, {.addr=0xb379, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb37a, .a=0x74, .x=0x9d, .y=0x2a, .sp=0x1b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x74}, {.addr=0xb379, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb379, .value=0xc6, .type=IO_READ},
        {.addr=0xb37a, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x44, .type=IO_READ},
        {.addr=0x019d, .value=0x74, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0331) {
    const struct CPU_State initial_cpu = {.pc=0x9037, .a=0x2a, .x=0xc2, .y=0x30, .sp=0x92, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xd4}, {.addr=0x9037, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9038, .a=0x2a, .x=0xc2, .y=0x30, .sp=0x92, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x2a}, {.addr=0x9037, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9037, .value=0xc6, .type=IO_READ},
        {.addr=0x9038, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xd4, .type=IO_READ},
        {.addr=0x01c2, .value=0x2a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0332) {
    const struct CPU_State initial_cpu = {.pc=0x4c8c, .a=0xdd, .x=0x2f, .y=0x02, .sp=0xc2, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x4d}, {.addr=0x4c8c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4c8d, .a=0xdd, .x=0x2f, .y=0x02, .sp=0xc2, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xdd}, {.addr=0x4c8c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4c8c, .value=0xc6, .type=IO_READ},
        {.addr=0x4c8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x4d, .type=IO_READ},
        {.addr=0x012f, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0333) {
    const struct CPU_State initial_cpu = {.pc=0xaeba, .a=0xbd, .x=0x26, .y=0x94, .sp=0x27, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xc9}, {.addr=0xaeba, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xaebb, .a=0xbd, .x=0x26, .y=0x94, .sp=0x27, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xbd}, {.addr=0xaeba, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xaeba, .value=0xc6, .type=IO_READ},
        {.addr=0xaebb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xc9, .type=IO_READ},
        {.addr=0x0126, .value=0xbd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0335) {
    const struct CPU_State initial_cpu = {.pc=0xbb35, .a=0x9e, .x=0xd7, .y=0x3e, .sp=0x47, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xef}, {.addr=0xbb35, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbb36, .a=0x9e, .x=0xd7, .y=0x3e, .sp=0x47, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x9e}, {.addr=0xbb35, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbb35, .value=0xc6, .type=IO_READ},
        {.addr=0xbb36, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xef, .type=IO_READ},
        {.addr=0x01d7, .value=0x9e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0336) {
    const struct CPU_State initial_cpu = {.pc=0xe810, .a=0x32, .x=0x9e, .y=0xb7, .sp=0xd9, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x35}, {.addr=0xe810, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe811, .a=0x32, .x=0x9e, .y=0xb7, .sp=0xd9, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x32}, {.addr=0xe810, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe810, .value=0xc6, .type=IO_READ},
        {.addr=0xe811, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x35, .type=IO_READ},
        {.addr=0x019e, .value=0x32, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0337) {
    const struct CPU_State initial_cpu = {.pc=0x9b59, .a=0xd4, .x=0x2a, .y=0x7e, .sp=0xa8, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0xe5}, {.addr=0x9b59, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9b5a, .a=0xd4, .x=0x2a, .y=0x7e, .sp=0xa8, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0xd4}, {.addr=0x9b59, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9b59, .value=0xc6, .type=IO_READ},
        {.addr=0x9b5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0xe5, .type=IO_READ},
        {.addr=0x002a, .value=0xd4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0338) {
    const struct CPU_State initial_cpu = {.pc=0xa995, .a=0x11, .x=0xb7, .y=0x45, .sp=0x9b, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x20}, {.addr=0xa995, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa996, .a=0x11, .x=0xb7, .y=0x45, .sp=0x9b, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x11}, {.addr=0xa995, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa995, .value=0xc6, .type=IO_READ},
        {.addr=0xa996, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x20, .type=IO_READ},
        {.addr=0x00b7, .value=0x11, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0339) {
    const struct CPU_State initial_cpu = {.pc=0x7932, .a=0x56, .x=0x04, .y=0x95, .sp=0x81, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0xcb}, {.addr=0x7932, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7933, .a=0x56, .x=0x04, .y=0x95, .sp=0x81, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x56}, {.addr=0x7932, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7932, .value=0xc6, .type=IO_READ},
        {.addr=0x7933, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xcb, .type=IO_READ},
        {.addr=0x0104, .value=0x56, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_033A) {
    const struct CPU_State initial_cpu = {.pc=0x7c14, .a=0xd7, .x=0x2d, .y=0x41, .sp=0x73, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x5e}, {.addr=0x7c14, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7c15, .a=0xd7, .x=0x2d, .y=0x41, .sp=0x73, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xd7}, {.addr=0x7c14, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7c14, .value=0xc6, .type=IO_READ},
        {.addr=0x7c15, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x5e, .type=IO_READ},
        {.addr=0x012d, .value=0xd7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_033B) {
    const struct CPU_State initial_cpu = {.pc=0x3de0, .a=0x21, .x=0xf4, .y=0x78, .sp=0x86, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x94}, {.addr=0x3de0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3de1, .a=0x21, .x=0xf4, .y=0x78, .sp=0x86, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x21}, {.addr=0x3de0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3de0, .value=0xc6, .type=IO_READ},
        {.addr=0x3de1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x94, .type=IO_READ},
        {.addr=0x01f4, .value=0x21, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_033C) {
    const struct CPU_State initial_cpu = {.pc=0x8706, .a=0x3a, .x=0xcc, .y=0x86, .sp=0x8c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x70}, {.addr=0x8706, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8707, .a=0x3a, .x=0xcc, .y=0x86, .sp=0x8c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x3a}, {.addr=0x8706, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8706, .value=0xc6, .type=IO_READ},
        {.addr=0x8707, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x70, .type=IO_READ},
        {.addr=0x01cc, .value=0x3a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_033D) {
    const struct CPU_State initial_cpu = {.pc=0x5793, .a=0x26, .x=0x4a, .y=0x40, .sp=0x1d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0xeb}, {.addr=0x5793, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5794, .a=0x26, .x=0x4a, .y=0x40, .sp=0x1d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x26}, {.addr=0x5793, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5793, .value=0xc6, .type=IO_READ},
        {.addr=0x5794, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0xeb, .type=IO_READ},
        {.addr=0x004a, .value=0x26, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_033E) {
    const struct CPU_State initial_cpu = {.pc=0xf367, .a=0x5f, .x=0x4a, .y=0xe9, .sp=0x9b, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x18}, {.addr=0xf367, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf368, .a=0x5f, .x=0x4a, .y=0xe9, .sp=0x9b, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x5f}, {.addr=0xf367, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf367, .value=0xc6, .type=IO_READ},
        {.addr=0xf368, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x18, .type=IO_READ},
        {.addr=0x014a, .value=0x5f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_033F) {
    const struct CPU_State initial_cpu = {.pc=0x91ea, .a=0x72, .x=0xe2, .y=0xe8, .sp=0x2b, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x12}, {.addr=0x91ea, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x91eb, .a=0x72, .x=0xe2, .y=0xe8, .sp=0x2b, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x72}, {.addr=0x91ea, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x91ea, .value=0xc6, .type=IO_READ},
        {.addr=0x91eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x12, .type=IO_READ},
        {.addr=0x01e2, .value=0x72, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0340) {
    const struct CPU_State initial_cpu = {.pc=0xaa7c, .a=0xd8, .x=0xea, .y=0xdd, .sp=0x5d, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x3b}, {.addr=0xaa7c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xaa7d, .a=0xd8, .x=0xea, .y=0xdd, .sp=0x5d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xd8}, {.addr=0xaa7c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xaa7c, .value=0xc6, .type=IO_READ},
        {.addr=0xaa7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x3b, .type=IO_READ},
        {.addr=0x01ea, .value=0xd8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0341) {
    const struct CPU_State initial_cpu = {.pc=0xb297, .a=0x2b, .x=0x5b, .y=0x38, .sp=0x0d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0xc4}, {.addr=0xb297, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb298, .a=0x2b, .x=0x5b, .y=0x38, .sp=0x0d, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x2b}, {.addr=0xb297, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb297, .value=0xc6, .type=IO_READ},
        {.addr=0xb298, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0xc4, .type=IO_READ},
        {.addr=0x005b, .value=0x2b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0342) {
    const struct CPU_State initial_cpu = {.pc=0xcc76, .a=0x84, .x=0x76, .y=0x8e, .sp=0xa3, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x9b}, {.addr=0xcc76, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcc77, .a=0x84, .x=0x76, .y=0x8e, .sp=0xa3, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x84}, {.addr=0xcc76, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcc76, .value=0xc6, .type=IO_READ},
        {.addr=0xcc77, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x9b, .type=IO_READ},
        {.addr=0x0076, .value=0x84, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0343) {
    const struct CPU_State initial_cpu = {.pc=0x09c5, .a=0x78, .x=0x98, .y=0xad, .sp=0x30, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x06}, {.addr=0x09c5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x09c6, .a=0x78, .x=0x98, .y=0xad, .sp=0x30, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x78}, {.addr=0x09c5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x09c5, .value=0xc6, .type=IO_READ},
        {.addr=0x09c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x06, .type=IO_READ},
        {.addr=0x0098, .value=0x78, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0344) {
    const struct CPU_State initial_cpu = {.pc=0x751b, .a=0xb9, .x=0x23, .y=0x57, .sp=0x79, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0xc4}, {.addr=0x751b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x751c, .a=0xb9, .x=0x23, .y=0x57, .sp=0x79, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0xb9}, {.addr=0x751b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x751b, .value=0xc6, .type=IO_READ},
        {.addr=0x751c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0xc4, .type=IO_READ},
        {.addr=0x0023, .value=0xb9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0345) {
    const struct CPU_State initial_cpu = {.pc=0xd6c5, .a=0x5e, .x=0xd0, .y=0x61, .sp=0x55, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x80}, {.addr=0xd6c5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd6c6, .a=0x5e, .x=0xd0, .y=0x61, .sp=0x55, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x5e}, {.addr=0xd6c5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd6c5, .value=0xc6, .type=IO_READ},
        {.addr=0xd6c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x80, .type=IO_READ},
        {.addr=0x01d0, .value=0x5e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0346) {
    const struct CPU_State initial_cpu = {.pc=0x5eac, .a=0xaa, .x=0xbd, .y=0x26, .sp=0x5d, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xaf}, {.addr=0x5eac, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5ead, .a=0xaa, .x=0xbd, .y=0x26, .sp=0x5d, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xaa}, {.addr=0x5eac, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5eac, .value=0xc6, .type=IO_READ},
        {.addr=0x5ead, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xaf, .type=IO_READ},
        {.addr=0x01bd, .value=0xaa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0347) {
    const struct CPU_State initial_cpu = {.pc=0x13d4, .a=0xaa, .x=0x07, .y=0xb7, .sp=0x1f, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x64}, {.addr=0x13d4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x13d5, .a=0xaa, .x=0x07, .y=0xb7, .sp=0x1f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0xaa}, {.addr=0x13d4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x13d4, .value=0xc6, .type=IO_READ},
        {.addr=0x13d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x64, .type=IO_READ},
        {.addr=0x0007, .value=0xaa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0348) {
    const struct CPU_State initial_cpu = {.pc=0xc646, .a=0x1b, .x=0xd4, .y=0x36, .sp=0xbb, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0xf3}, {.addr=0xc646, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc647, .a=0x1b, .x=0xd4, .y=0x36, .sp=0xbb, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x1b}, {.addr=0xc646, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc646, .value=0xc6, .type=IO_READ},
        {.addr=0xc647, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0xf3, .type=IO_READ},
        {.addr=0x00d4, .value=0x1b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0349) {
    const struct CPU_State initial_cpu = {.pc=0x3460, .a=0xb0, .x=0xfc, .y=0x1e, .sp=0xed, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xac}, {.addr=0x3460, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3461, .a=0xb0, .x=0xfc, .y=0x1e, .sp=0xed, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xb0}, {.addr=0x3460, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3460, .value=0xc6, .type=IO_READ},
        {.addr=0x3461, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xac, .type=IO_READ},
        {.addr=0x01fc, .value=0xb0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_034B) {
    const struct CPU_State initial_cpu = {.pc=0x8edb, .a=0xb3, .x=0x60, .y=0xb1, .sp=0xb3, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x95}, {.addr=0x8edb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8edc, .a=0xb3, .x=0x60, .y=0xb1, .sp=0xb3, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xb3}, {.addr=0x8edb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8edb, .value=0xc6, .type=IO_READ},
        {.addr=0x8edc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x95, .type=IO_READ},
        {.addr=0x0160, .value=0xb3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_034C) {
    const struct CPU_State initial_cpu = {.pc=0x7122, .a=0xde, .x=0xed, .y=0x33, .sp=0xa5, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x6b}, {.addr=0x7122, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7123, .a=0xde, .x=0xed, .y=0x33, .sp=0xa5, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0xde}, {.addr=0x7122, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7122, .value=0xc6, .type=IO_READ},
        {.addr=0x7123, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x6b, .type=IO_READ},
        {.addr=0x00ed, .value=0xde, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_034D) {
    const struct CPU_State initial_cpu = {.pc=0x46c7, .a=0xf5, .x=0x25, .y=0x6c, .sp=0xe9, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x58}, {.addr=0x46c7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x46c8, .a=0xf5, .x=0x25, .y=0x6c, .sp=0xe9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xf5}, {.addr=0x46c7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x46c7, .value=0xc6, .type=IO_READ},
        {.addr=0x46c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x58, .type=IO_READ},
        {.addr=0x0025, .value=0xf5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_034E) {
    const struct CPU_State initial_cpu = {.pc=0xea33, .a=0x89, .x=0x81, .y=0xe4, .sp=0xb9, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x15}, {.addr=0xea33, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xea34, .a=0x89, .x=0x81, .y=0xe4, .sp=0xb9, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x89}, {.addr=0xea33, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xea33, .value=0xc6, .type=IO_READ},
        {.addr=0xea34, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x15, .type=IO_READ},
        {.addr=0x0081, .value=0x89, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_034F) {
    const struct CPU_State initial_cpu = {.pc=0x898a, .a=0xb9, .x=0x07, .y=0x79, .sp=0xe5, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x38}, {.addr=0x898a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x898b, .a=0xb9, .x=0x07, .y=0x79, .sp=0xe5, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0xb9}, {.addr=0x898a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x898a, .value=0xc6, .type=IO_READ},
        {.addr=0x898b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x38, .type=IO_READ},
        {.addr=0x0007, .value=0xb9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0350) {
    const struct CPU_State initial_cpu = {.pc=0xb976, .a=0xe4, .x=0x1a, .y=0xa6, .sp=0x89, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0xb8}, {.addr=0xb976, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb977, .a=0xe4, .x=0x1a, .y=0xa6, .sp=0x89, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0xe4}, {.addr=0xb976, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb976, .value=0xc6, .type=IO_READ},
        {.addr=0xb977, .value=DUMMY, .type=IO_READ},
        {.addr=0x001a, .value=0xb8, .type=IO_READ},
        {.addr=0x001a, .value=0xe4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0351) {
    const struct CPU_State initial_cpu = {.pc=0x6f3d, .a=0x61, .x=0xdf, .y=0x2e, .sp=0x40, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xdb}, {.addr=0x6f3d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6f3e, .a=0x61, .x=0xdf, .y=0x2e, .sp=0x40, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x61}, {.addr=0x6f3d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6f3d, .value=0xc6, .type=IO_READ},
        {.addr=0x6f3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xdb, .type=IO_READ},
        {.addr=0x01df, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0352) {
    const struct CPU_State initial_cpu = {.pc=0x85b2, .a=0x58, .x=0xd0, .y=0x6a, .sp=0x6f, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0x59}, {.addr=0x85b2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x85b3, .a=0x58, .x=0xd0, .y=0x6a, .sp=0x6f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0x58}, {.addr=0x85b2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x85b2, .value=0xc6, .type=IO_READ},
        {.addr=0x85b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0x59, .type=IO_READ},
        {.addr=0x00d0, .value=0x58, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0353) {
    const struct CPU_State initial_cpu = {.pc=0x1a47, .a=0x9e, .x=0xc0, .y=0x87, .sp=0xbc, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x2e}, {.addr=0x1a47, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1a48, .a=0x9e, .x=0xc0, .y=0x87, .sp=0xbc, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x9e}, {.addr=0x1a47, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1a47, .value=0xc6, .type=IO_READ},
        {.addr=0x1a48, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x2e, .type=IO_READ},
        {.addr=0x00c0, .value=0x9e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0354) {
    const struct CPU_State initial_cpu = {.pc=0x278f, .a=0xa0, .x=0xd9, .y=0x0d, .sp=0x77, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x8e}, {.addr=0x278f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2790, .a=0xa0, .x=0xd9, .y=0x0d, .sp=0x77, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0xa0}, {.addr=0x278f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x278f, .value=0xc6, .type=IO_READ},
        {.addr=0x2790, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0x8e, .type=IO_READ},
        {.addr=0x00d9, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0355) {
    const struct CPU_State initial_cpu = {.pc=0x46ea, .a=0x98, .x=0x6c, .y=0x46, .sp=0x1f, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x4b}, {.addr=0x46ea, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x46eb, .a=0x98, .x=0x6c, .y=0x46, .sp=0x1f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0x98}, {.addr=0x46ea, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x46ea, .value=0xc6, .type=IO_READ},
        {.addr=0x46eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0x4b, .type=IO_READ},
        {.addr=0x006c, .value=0x98, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0356) {
    const struct CPU_State initial_cpu = {.pc=0xfd1a, .a=0x59, .x=0x3a, .y=0xa5, .sp=0xb4, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x43}, {.addr=0xfd1a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfd1b, .a=0x59, .x=0x3a, .y=0xa5, .sp=0xb4, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x59}, {.addr=0xfd1a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfd1a, .value=0xc6, .type=IO_READ},
        {.addr=0xfd1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x43, .type=IO_READ},
        {.addr=0x013a, .value=0x59, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0358) {
    const struct CPU_State initial_cpu = {.pc=0x4f08, .a=0xd4, .x=0x17, .y=0x39, .sp=0x67, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x53}, {.addr=0x4f08, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4f09, .a=0xd4, .x=0x17, .y=0x39, .sp=0x67, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xd4}, {.addr=0x4f08, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4f08, .value=0xc6, .type=IO_READ},
        {.addr=0x4f09, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x53, .type=IO_READ},
        {.addr=0x0017, .value=0xd4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0359) {
    const struct CPU_State initial_cpu = {.pc=0x752b, .a=0xee, .x=0xcf, .y=0x60, .sp=0xa2, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x29}, {.addr=0x752b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x752c, .a=0xee, .x=0xcf, .y=0x60, .sp=0xa2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0xee}, {.addr=0x752b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x752b, .value=0xc6, .type=IO_READ},
        {.addr=0x752c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x29, .type=IO_READ},
        {.addr=0x00cf, .value=0xee, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_035A) {
    const struct CPU_State initial_cpu = {.pc=0xa0ec, .a=0xc3, .x=0x17, .y=0xd7, .sp=0x2d, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x8d}, {.addr=0xa0ec, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa0ed, .a=0xc3, .x=0x17, .y=0xd7, .sp=0x2d, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xc3}, {.addr=0xa0ec, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa0ec, .value=0xc6, .type=IO_READ},
        {.addr=0xa0ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x8d, .type=IO_READ},
        {.addr=0x0017, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_035B) {
    const struct CPU_State initial_cpu = {.pc=0x2dfd, .a=0x4c, .x=0x02, .y=0x4c, .sp=0x63, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x7c}, {.addr=0x2dfd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2dfe, .a=0x4c, .x=0x02, .y=0x4c, .sp=0x63, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x4c}, {.addr=0x2dfd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2dfd, .value=0xc6, .type=IO_READ},
        {.addr=0x2dfe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x7c, .type=IO_READ},
        {.addr=0x0102, .value=0x4c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_035C) {
    const struct CPU_State initial_cpu = {.pc=0xdc18, .a=0x08, .x=0xcb, .y=0x2f, .sp=0x72, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x62}, {.addr=0xdc18, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdc19, .a=0x08, .x=0xcb, .y=0x2f, .sp=0x72, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x08}, {.addr=0xdc18, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdc18, .value=0xc6, .type=IO_READ},
        {.addr=0xdc19, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x62, .type=IO_READ},
        {.addr=0x01cb, .value=0x08, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_035D) {
    const struct CPU_State initial_cpu = {.pc=0x6efa, .a=0xa9, .x=0xbe, .y=0x43, .sp=0x78, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0x77}, {.addr=0x6efa, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6efb, .a=0xa9, .x=0xbe, .y=0x43, .sp=0x78, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0xa9}, {.addr=0x6efa, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6efa, .value=0xc6, .type=IO_READ},
        {.addr=0x6efb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00be, .value=0x77, .type=IO_READ},
        {.addr=0x00be, .value=0xa9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_035E) {
    const struct CPU_State initial_cpu = {.pc=0x9deb, .a=0x8c, .x=0xf7, .y=0x89, .sp=0x48, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x8f}, {.addr=0x9deb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9dec, .a=0x8c, .x=0xf7, .y=0x89, .sp=0x48, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x8c}, {.addr=0x9deb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9deb, .value=0xc6, .type=IO_READ},
        {.addr=0x9dec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x8f, .type=IO_READ},
        {.addr=0x01f7, .value=0x8c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_035F) {
    const struct CPU_State initial_cpu = {.pc=0x27f0, .a=0xa4, .x=0xbc, .y=0x0a, .sp=0xc8, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0xad}, {.addr=0x27f0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x27f1, .a=0xa4, .x=0xbc, .y=0x0a, .sp=0xc8, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xa4}, {.addr=0x27f0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x27f0, .value=0xc6, .type=IO_READ},
        {.addr=0x27f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0xad, .type=IO_READ},
        {.addr=0x01bc, .value=0xa4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0360) {
    const struct CPU_State initial_cpu = {.pc=0x2bab, .a=0x31, .x=0x1c, .y=0x8e, .sp=0x73, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0xd6}, {.addr=0x2bab, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2bac, .a=0x31, .x=0x1c, .y=0x8e, .sp=0x73, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x31}, {.addr=0x2bab, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2bab, .value=0xc6, .type=IO_READ},
        {.addr=0x2bac, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xd6, .type=IO_READ},
        {.addr=0x011c, .value=0x31, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0361) {
    const struct CPU_State initial_cpu = {.pc=0xc0b3, .a=0x48, .x=0x34, .y=0x4d, .sp=0x1a, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x38}, {.addr=0xc0b3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc0b4, .a=0x48, .x=0x34, .y=0x4d, .sp=0x1a, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x48}, {.addr=0xc0b3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc0b3, .value=0xc6, .type=IO_READ},
        {.addr=0xc0b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x38, .type=IO_READ},
        {.addr=0x0134, .value=0x48, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0362) {
    const struct CPU_State initial_cpu = {.pc=0xe54f, .a=0x10, .x=0x13, .y=0x3e, .sp=0x27, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x33}, {.addr=0xe54f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe550, .a=0x10, .x=0x13, .y=0x3e, .sp=0x27, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x10}, {.addr=0xe54f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe54f, .value=0xc6, .type=IO_READ},
        {.addr=0xe550, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x33, .type=IO_READ},
        {.addr=0x0113, .value=0x10, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0363) {
    const struct CPU_State initial_cpu = {.pc=0xd41b, .a=0x28, .x=0xa1, .y=0x87, .sp=0x4f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0xb2}, {.addr=0xd41b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd41c, .a=0x28, .x=0xa1, .y=0x87, .sp=0x4f, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x28}, {.addr=0xd41b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd41b, .value=0xc6, .type=IO_READ},
        {.addr=0xd41c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0xb2, .type=IO_READ},
        {.addr=0x00a1, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0364) {
    const struct CPU_State initial_cpu = {.pc=0x116e, .a=0x25, .x=0x17, .y=0x1f, .sp=0xc6, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0xc6}, {.addr=0x116e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x116f, .a=0x25, .x=0x17, .y=0x1f, .sp=0xc6, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x25}, {.addr=0x116e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x116e, .value=0xc6, .type=IO_READ},
        {.addr=0x116f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0xc6, .type=IO_READ},
        {.addr=0x0017, .value=0x25, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0365) {
    const struct CPU_State initial_cpu = {.pc=0xddaf, .a=0x27, .x=0x8d, .y=0xc8, .sp=0xd4, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x83}, {.addr=0xddaf, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xddb0, .a=0x27, .x=0x8d, .y=0xc8, .sp=0xd4, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x27}, {.addr=0xddaf, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xddaf, .value=0xc6, .type=IO_READ},
        {.addr=0xddb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x83, .type=IO_READ},
        {.addr=0x018d, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0366) {
    const struct CPU_State initial_cpu = {.pc=0x681a, .a=0xde, .x=0x41, .y=0x3d, .sp=0xa3, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0xcb}, {.addr=0x681a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x681b, .a=0xde, .x=0x41, .y=0x3d, .sp=0xa3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0xde}, {.addr=0x681a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x681a, .value=0xc6, .type=IO_READ},
        {.addr=0x681b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0xcb, .type=IO_READ},
        {.addr=0x0041, .value=0xde, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0367) {
    const struct CPU_State initial_cpu = {.pc=0x582d, .a=0x35, .x=0xeb, .y=0xae, .sp=0x89, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x34}, {.addr=0x582d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x582e, .a=0x35, .x=0xeb, .y=0xae, .sp=0x89, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x35}, {.addr=0x582d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x582d, .value=0xc6, .type=IO_READ},
        {.addr=0x582e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x34, .type=IO_READ},
        {.addr=0x01eb, .value=0x35, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0368) {
    const struct CPU_State initial_cpu = {.pc=0x265c, .a=0x9a, .x=0xe6, .y=0x92, .sp=0xd8, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x60}, {.addr=0x265c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x265d, .a=0x9a, .x=0xe6, .y=0x92, .sp=0xd8, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x9a}, {.addr=0x265c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x265c, .value=0xc6, .type=IO_READ},
        {.addr=0x265d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x60, .type=IO_READ},
        {.addr=0x01e6, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0369) {
    const struct CPU_State initial_cpu = {.pc=0x8cab, .a=0xe6, .x=0xb5, .y=0xe3, .sp=0x01, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x70}, {.addr=0x8cab, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8cac, .a=0xe6, .x=0xb5, .y=0xe3, .sp=0x01, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xe6}, {.addr=0x8cab, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8cab, .value=0xc6, .type=IO_READ},
        {.addr=0x8cac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x70, .type=IO_READ},
        {.addr=0x01b5, .value=0xe6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_036A) {
    const struct CPU_State initial_cpu = {.pc=0x64dd, .a=0xde, .x=0xe8, .y=0xd3, .sp=0x23, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x17}, {.addr=0x64dd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x64de, .a=0xde, .x=0xe8, .y=0xd3, .sp=0x23, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xde}, {.addr=0x64dd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x64dd, .value=0xc6, .type=IO_READ},
        {.addr=0x64de, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x17, .type=IO_READ},
        {.addr=0x01e8, .value=0xde, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_036B) {
    const struct CPU_State initial_cpu = {.pc=0x7717, .a=0x22, .x=0x85, .y=0x98, .sp=0xd3, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xab}, {.addr=0x7717, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7718, .a=0x22, .x=0x85, .y=0x98, .sp=0xd3, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x22}, {.addr=0x7717, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7717, .value=0xc6, .type=IO_READ},
        {.addr=0x7718, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xab, .type=IO_READ},
        {.addr=0x0185, .value=0x22, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_036C) {
    const struct CPU_State initial_cpu = {.pc=0xec7e, .a=0x45, .x=0x35, .y=0xcb, .sp=0xae, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x1f}, {.addr=0xec7e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xec7f, .a=0x45, .x=0x35, .y=0xcb, .sp=0xae, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x45}, {.addr=0xec7e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xec7e, .value=0xc6, .type=IO_READ},
        {.addr=0xec7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x1f, .type=IO_READ},
        {.addr=0x0135, .value=0x45, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_036D) {
    const struct CPU_State initial_cpu = {.pc=0xa576, .a=0xa8, .x=0x97, .y=0xad, .sp=0x0b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0xd5}, {.addr=0xa576, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa577, .a=0xa8, .x=0x97, .y=0xad, .sp=0x0b, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0xa8}, {.addr=0xa576, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa576, .value=0xc6, .type=IO_READ},
        {.addr=0xa577, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0xd5, .type=IO_READ},
        {.addr=0x0097, .value=0xa8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_036E) {
    const struct CPU_State initial_cpu = {.pc=0xef94, .a=0xe5, .x=0x96, .y=0xc2, .sp=0xb2, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0xae}, {.addr=0xef94, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xef95, .a=0xe5, .x=0x96, .y=0xc2, .sp=0xb2, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0xe5}, {.addr=0xef94, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xef94, .value=0xc6, .type=IO_READ},
        {.addr=0xef95, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0xae, .type=IO_READ},
        {.addr=0x0096, .value=0xe5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_036F) {
    const struct CPU_State initial_cpu = {.pc=0x0e41, .a=0x7f, .x=0xe5, .y=0x96, .sp=0x03, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0xc2}, {.addr=0x0e41, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0e42, .a=0x7f, .x=0xe5, .y=0x96, .sp=0x03, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x7f}, {.addr=0x0e41, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0e41, .value=0xc6, .type=IO_READ},
        {.addr=0x0e42, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0xc2, .type=IO_READ},
        {.addr=0x00e5, .value=0x7f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0370) {
    const struct CPU_State initial_cpu = {.pc=0x1d4b, .a=0xe0, .x=0x39, .y=0x33, .sp=0xef, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x0b}, {.addr=0x1d4b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1d4c, .a=0xe0, .x=0x39, .y=0x33, .sp=0xef, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0xe0}, {.addr=0x1d4b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1d4b, .value=0xc6, .type=IO_READ},
        {.addr=0x1d4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x0b, .type=IO_READ},
        {.addr=0x0039, .value=0xe0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0371) {
    const struct CPU_State initial_cpu = {.pc=0xa777, .a=0x6d, .x=0xaf, .y=0x60, .sp=0x24, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x3b}, {.addr=0xa777, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa778, .a=0x6d, .x=0xaf, .y=0x60, .sp=0x24, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x6d}, {.addr=0xa777, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa777, .value=0xc6, .type=IO_READ},
        {.addr=0xa778, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x3b, .type=IO_READ},
        {.addr=0x00af, .value=0x6d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0372) {
    const struct CPU_State initial_cpu = {.pc=0x0f86, .a=0x1f, .x=0x9f, .y=0xec, .sp=0xf3, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x10}, {.addr=0x0f86, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0f87, .a=0x1f, .x=0x9f, .y=0xec, .sp=0xf3, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x1f}, {.addr=0x0f86, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0f86, .value=0xc6, .type=IO_READ},
        {.addr=0x0f87, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x10, .type=IO_READ},
        {.addr=0x019f, .value=0x1f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0373) {
    const struct CPU_State initial_cpu = {.pc=0x407d, .a=0x63, .x=0x77, .y=0xa8, .sp=0x46, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x52}, {.addr=0x407d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x407e, .a=0x63, .x=0x77, .y=0xa8, .sp=0x46, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x63}, {.addr=0x407d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x407d, .value=0xc6, .type=IO_READ},
        {.addr=0x407e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x52, .type=IO_READ},
        {.addr=0x0077, .value=0x63, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0374) {
    const struct CPU_State initial_cpu = {.pc=0x8b90, .a=0x4c, .x=0xec, .y=0x12, .sp=0xcb, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0xf6}, {.addr=0x8b90, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8b91, .a=0x4c, .x=0xec, .y=0x12, .sp=0xcb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x4c}, {.addr=0x8b90, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8b90, .value=0xc6, .type=IO_READ},
        {.addr=0x8b91, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0xf6, .type=IO_READ},
        {.addr=0x01ec, .value=0x4c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0375) {
    const struct CPU_State initial_cpu = {.pc=0x43c5, .a=0xcd, .x=0xb1, .y=0x9c, .sp=0xc0, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0xf3}, {.addr=0x43c5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x43c6, .a=0xcd, .x=0xb1, .y=0x9c, .sp=0xc0, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0xcd}, {.addr=0x43c5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x43c5, .value=0xc6, .type=IO_READ},
        {.addr=0x43c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0xf3, .type=IO_READ},
        {.addr=0x00b1, .value=0xcd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0376) {
    const struct CPU_State initial_cpu = {.pc=0xcea9, .a=0x0f, .x=0xa7, .y=0x79, .sp=0x39, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x66}, {.addr=0xcea9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xceaa, .a=0x0f, .x=0xa7, .y=0x79, .sp=0x39, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x0f}, {.addr=0xcea9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcea9, .value=0xc6, .type=IO_READ},
        {.addr=0xceaa, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0x66, .type=IO_READ},
        {.addr=0x00a7, .value=0x0f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0377) {
    const struct CPU_State initial_cpu = {.pc=0x9a79, .a=0xc4, .x=0xaf, .y=0x12, .sp=0xe7, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x14}, {.addr=0x9a79, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9a7a, .a=0xc4, .x=0xaf, .y=0x12, .sp=0xe7, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xc4}, {.addr=0x9a79, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9a79, .value=0xc6, .type=IO_READ},
        {.addr=0x9a7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x14, .type=IO_READ},
        {.addr=0x01af, .value=0xc4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0378) {
    const struct CPU_State initial_cpu = {.pc=0xa794, .a=0xa4, .x=0xae, .y=0xcc, .sp=0x64, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x7b}, {.addr=0xa794, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa795, .a=0xa4, .x=0xae, .y=0xcc, .sp=0x64, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xa4}, {.addr=0xa794, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa794, .value=0xc6, .type=IO_READ},
        {.addr=0xa795, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x7b, .type=IO_READ},
        {.addr=0x01ae, .value=0xa4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0379) {
    const struct CPU_State initial_cpu = {.pc=0xfbcf, .a=0xa3, .x=0x85, .y=0x0b, .sp=0x73, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xb9}, {.addr=0xfbcf, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfbd0, .a=0xa3, .x=0x85, .y=0x0b, .sp=0x73, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xa3}, {.addr=0xfbcf, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfbcf, .value=0xc6, .type=IO_READ},
        {.addr=0xfbd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xb9, .type=IO_READ},
        {.addr=0x0185, .value=0xa3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_037A) {
    const struct CPU_State initial_cpu = {.pc=0x0fbe, .a=0xe1, .x=0x20, .y=0xcb, .sp=0x29, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x25}, {.addr=0x0fbe, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0fbf, .a=0xe1, .x=0x20, .y=0xcb, .sp=0x29, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xe1}, {.addr=0x0fbe, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0fbe, .value=0xc6, .type=IO_READ},
        {.addr=0x0fbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x25, .type=IO_READ},
        {.addr=0x0120, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_037B) {
    const struct CPU_State initial_cpu = {.pc=0x1877, .a=0x71, .x=0x41, .y=0x3d, .sp=0xd2, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x17}, {.addr=0x1877, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1878, .a=0x71, .x=0x41, .y=0x3d, .sp=0xd2, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x71}, {.addr=0x1877, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1877, .value=0xc6, .type=IO_READ},
        {.addr=0x1878, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x17, .type=IO_READ},
        {.addr=0x0141, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_037C) {
    const struct CPU_State initial_cpu = {.pc=0xb901, .a=0xaf, .x=0xa2, .y=0xeb, .sp=0x96, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xf4}, {.addr=0xb901, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb902, .a=0xaf, .x=0xa2, .y=0xeb, .sp=0x96, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xaf}, {.addr=0xb901, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb901, .value=0xc6, .type=IO_READ},
        {.addr=0xb902, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0xf4, .type=IO_READ},
        {.addr=0x01a2, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_037D) {
    const struct CPU_State initial_cpu = {.pc=0x3488, .a=0x58, .x=0x38, .y=0xa7, .sp=0x0a, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0xe3}, {.addr=0x3488, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3489, .a=0x58, .x=0x38, .y=0xa7, .sp=0x0a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x58}, {.addr=0x3488, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3488, .value=0xc6, .type=IO_READ},
        {.addr=0x3489, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0xe3, .type=IO_READ},
        {.addr=0x0038, .value=0x58, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_037E) {
    const struct CPU_State initial_cpu = {.pc=0xadbe, .a=0x3e, .x=0x1f, .y=0x53, .sp=0x8a, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xc1}, {.addr=0xadbe, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xadbf, .a=0x3e, .x=0x1f, .y=0x53, .sp=0x8a, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x3e}, {.addr=0xadbe, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xadbe, .value=0xc6, .type=IO_READ},
        {.addr=0xadbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xc1, .type=IO_READ},
        {.addr=0x011f, .value=0x3e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_037F) {
    const struct CPU_State initial_cpu = {.pc=0x01eb, .a=0x18, .x=0x64, .y=0x4a, .sp=0x3d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x01}, {.addr=0x01eb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x01ec, .a=0x18, .x=0x64, .y=0x4a, .sp=0x3d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x18}, {.addr=0x01eb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x01eb, .value=0xc6, .type=IO_READ},
        {.addr=0x01ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0x01, .type=IO_READ},
        {.addr=0x0064, .value=0x18, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0380) {
    const struct CPU_State initial_cpu = {.pc=0xc2cd, .a=0xdf, .x=0xcb, .y=0x16, .sp=0xf5, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0xae}, {.addr=0xc2cd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc2ce, .a=0xdf, .x=0xcb, .y=0x16, .sp=0xf5, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xdf}, {.addr=0xc2cd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc2cd, .value=0xc6, .type=IO_READ},
        {.addr=0xc2ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0xae, .type=IO_READ},
        {.addr=0x01cb, .value=0xdf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0381) {
    const struct CPU_State initial_cpu = {.pc=0xf2fe, .a=0x7c, .x=0x97, .y=0x23, .sp=0xbe, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0xa7}, {.addr=0xf2fe, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf2ff, .a=0x7c, .x=0x97, .y=0x23, .sp=0xbe, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x7c}, {.addr=0xf2fe, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf2fe, .value=0xc6, .type=IO_READ},
        {.addr=0xf2ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0xa7, .type=IO_READ},
        {.addr=0x0097, .value=0x7c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0382) {
    const struct CPU_State initial_cpu = {.pc=0x8330, .a=0x34, .x=0x37, .y=0x03, .sp=0x55, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x0f}, {.addr=0x8330, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8331, .a=0x34, .x=0x37, .y=0x03, .sp=0x55, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x34}, {.addr=0x8330, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8330, .value=0xc6, .type=IO_READ},
        {.addr=0x8331, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x0f, .type=IO_READ},
        {.addr=0x0137, .value=0x34, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0383) {
    const struct CPU_State initial_cpu = {.pc=0xea2c, .a=0xb2, .x=0x26, .y=0x6f, .sp=0xa5, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0x6b}, {.addr=0xea2c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xea2d, .a=0xb2, .x=0x26, .y=0x6f, .sp=0xa5, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0xb2}, {.addr=0xea2c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xea2c, .value=0xc6, .type=IO_READ},
        {.addr=0xea2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0x6b, .type=IO_READ},
        {.addr=0x0026, .value=0xb2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0384) {
    const struct CPU_State initial_cpu = {.pc=0x7cc6, .a=0xd2, .x=0xb0, .y=0x15, .sp=0xf2, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x49}, {.addr=0x7cc6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7cc7, .a=0xd2, .x=0xb0, .y=0x15, .sp=0xf2, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xd2}, {.addr=0x7cc6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7cc6, .value=0xc6, .type=IO_READ},
        {.addr=0x7cc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x49, .type=IO_READ},
        {.addr=0x01b0, .value=0xd2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0385) {
    const struct CPU_State initial_cpu = {.pc=0x2fa0, .a=0x11, .x=0x5d, .y=0x5f, .sp=0x77, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0xdf}, {.addr=0x2fa0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2fa1, .a=0x11, .x=0x5d, .y=0x5f, .sp=0x77, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x11}, {.addr=0x2fa0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2fa0, .value=0xc6, .type=IO_READ},
        {.addr=0x2fa1, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0xdf, .type=IO_READ},
        {.addr=0x005d, .value=0x11, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0386) {
    const struct CPU_State initial_cpu = {.pc=0xcffc, .a=0xef, .x=0x56, .y=0x88, .sp=0xfe, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x97}, {.addr=0xcffc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xcffd, .a=0xef, .x=0x56, .y=0x88, .sp=0xfe, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xef}, {.addr=0xcffc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xcffc, .value=0xc6, .type=IO_READ},
        {.addr=0xcffd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x97, .type=IO_READ},
        {.addr=0x0156, .value=0xef, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0387) {
    const struct CPU_State initial_cpu = {.pc=0xdfbb, .a=0x6a, .x=0x97, .y=0x02, .sp=0xc6, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x42}, {.addr=0xdfbb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xdfbc, .a=0x6a, .x=0x97, .y=0x02, .sp=0xc6, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x6a}, {.addr=0xdfbb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xdfbb, .value=0xc6, .type=IO_READ},
        {.addr=0xdfbc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x42, .type=IO_READ},
        {.addr=0x0197, .value=0x6a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0388) {
    const struct CPU_State initial_cpu = {.pc=0x5b9d, .a=0x06, .x=0x55, .y=0xcc, .sp=0xa2, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0xd3}, {.addr=0x5b9d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5b9e, .a=0x06, .x=0x55, .y=0xcc, .sp=0xa2, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0x06}, {.addr=0x5b9d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5b9d, .value=0xc6, .type=IO_READ},
        {.addr=0x5b9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0xd3, .type=IO_READ},
        {.addr=0x0055, .value=0x06, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0389) {
    const struct CPU_State initial_cpu = {.pc=0x83a3, .a=0x48, .x=0x05, .y=0xaa, .sp=0x20, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x43}, {.addr=0x83a3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x83a4, .a=0x48, .x=0x05, .y=0xaa, .sp=0x20, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x48}, {.addr=0x83a3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x83a3, .value=0xc6, .type=IO_READ},
        {.addr=0x83a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0x43, .type=IO_READ},
        {.addr=0x0005, .value=0x48, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_038A) {
    const struct CPU_State initial_cpu = {.pc=0x4c42, .a=0x81, .x=0x8f, .y=0x81, .sp=0xe0, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x1d}, {.addr=0x4c42, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4c43, .a=0x81, .x=0x8f, .y=0x81, .sp=0xe0, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x81}, {.addr=0x4c42, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4c42, .value=0xc6, .type=IO_READ},
        {.addr=0x4c43, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x1d, .type=IO_READ},
        {.addr=0x008f, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_038B) {
    const struct CPU_State initial_cpu = {.pc=0x7b4d, .a=0x1b, .x=0xc5, .y=0xf3, .sp=0x41, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xf4}, {.addr=0x7b4d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7b4e, .a=0x1b, .x=0xc5, .y=0xf3, .sp=0x41, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x1b}, {.addr=0x7b4d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7b4d, .value=0xc6, .type=IO_READ},
        {.addr=0x7b4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xf4, .type=IO_READ},
        {.addr=0x01c5, .value=0x1b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_038C) {
    const struct CPU_State initial_cpu = {.pc=0x122f, .a=0xf1, .x=0x5a, .y=0x48, .sp=0xaf, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x18}, {.addr=0x122f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1230, .a=0xf1, .x=0x5a, .y=0x48, .sp=0xaf, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xf1}, {.addr=0x122f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x122f, .value=0xc6, .type=IO_READ},
        {.addr=0x1230, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x18, .type=IO_READ},
        {.addr=0x015a, .value=0xf1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_038D) {
    const struct CPU_State initial_cpu = {.pc=0xb944, .a=0x56, .x=0x56, .y=0x49, .sp=0xa0, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x22}, {.addr=0xb944, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb945, .a=0x56, .x=0x56, .y=0x49, .sp=0xa0, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x56}, {.addr=0xb944, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb944, .value=0xc6, .type=IO_READ},
        {.addr=0xb945, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x22, .type=IO_READ},
        {.addr=0x0056, .value=0x56, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_038E) {
    const struct CPU_State initial_cpu = {.pc=0xbf48, .a=0xb8, .x=0x00, .y=0x55, .sp=0xab, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xaa}, {.addr=0xbf48, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbf49, .a=0xb8, .x=0x00, .y=0x55, .sp=0xab, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xb8}, {.addr=0xbf48, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbf48, .value=0xc6, .type=IO_READ},
        {.addr=0xbf49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xaa, .type=IO_READ},
        {.addr=0x0100, .value=0xb8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_038F) {
    const struct CPU_State initial_cpu = {.pc=0x0c0f, .a=0x96, .x=0x41, .y=0xc6, .sp=0x36, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0x8b}, {.addr=0x0c0f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0c10, .a=0x96, .x=0x41, .y=0xc6, .sp=0x36, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0x96}, {.addr=0x0c0f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0c0f, .value=0xc6, .type=IO_READ},
        {.addr=0x0c10, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0x8b, .type=IO_READ},
        {.addr=0x0041, .value=0x96, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0390) {
    const struct CPU_State initial_cpu = {.pc=0x6022, .a=0x75, .x=0x47, .y=0x39, .sp=0x05, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x31}, {.addr=0x6022, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6023, .a=0x75, .x=0x47, .y=0x39, .sp=0x05, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x75}, {.addr=0x6022, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6022, .value=0xc6, .type=IO_READ},
        {.addr=0x6023, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0x31, .type=IO_READ},
        {.addr=0x0047, .value=0x75, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0391) {
    const struct CPU_State initial_cpu = {.pc=0x39cf, .a=0x87, .x=0x6a, .y=0x08, .sp=0x21, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0xa6}, {.addr=0x39cf, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x39d0, .a=0x87, .x=0x6a, .y=0x08, .sp=0x21, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0x87}, {.addr=0x39cf, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x39cf, .value=0xc6, .type=IO_READ},
        {.addr=0x39d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0xa6, .type=IO_READ},
        {.addr=0x006a, .value=0x87, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0392) {
    const struct CPU_State initial_cpu = {.pc=0xd738, .a=0x6d, .x=0x42, .y=0x1a, .sp=0xf2, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0xa0}, {.addr=0xd738, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd739, .a=0x6d, .x=0x42, .y=0x1a, .sp=0xf2, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x6d}, {.addr=0xd738, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd738, .value=0xc6, .type=IO_READ},
        {.addr=0xd739, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0xa0, .type=IO_READ},
        {.addr=0x0042, .value=0x6d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0393) {
    const struct CPU_State initial_cpu = {.pc=0x061a, .a=0xe4, .x=0x90, .y=0x60, .sp=0xda, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0xe6}, {.addr=0x061a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x061b, .a=0xe4, .x=0x90, .y=0x60, .sp=0xda, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0xe4}, {.addr=0x061a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x061a, .value=0xc6, .type=IO_READ},
        {.addr=0x061b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0xe6, .type=IO_READ},
        {.addr=0x0090, .value=0xe4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0394) {
    const struct CPU_State initial_cpu = {.pc=0x32b4, .a=0xc9, .x=0x8c, .y=0x8e, .sp=0x08, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xab}, {.addr=0x32b4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x32b5, .a=0xc9, .x=0x8c, .y=0x8e, .sp=0x08, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xc9}, {.addr=0x32b4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x32b4, .value=0xc6, .type=IO_READ},
        {.addr=0x32b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xab, .type=IO_READ},
        {.addr=0x018c, .value=0xc9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0395) {
    const struct CPU_State initial_cpu = {.pc=0x013d, .a=0x95, .x=0x6f, .y=0x22, .sp=0xce, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x3c}, {.addr=0x013d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x013e, .a=0x95, .x=0x6f, .y=0x22, .sp=0xce, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x95}, {.addr=0x013d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x013d, .value=0xc6, .type=IO_READ},
        {.addr=0x013e, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x3c, .type=IO_READ},
        {.addr=0x006f, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0396) {
    const struct CPU_State initial_cpu = {.pc=0x6b04, .a=0x47, .x=0x5e, .y=0x62, .sp=0xda, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0x90}, {.addr=0x6b04, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6b05, .a=0x47, .x=0x5e, .y=0x62, .sp=0xda, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0x47}, {.addr=0x6b04, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6b04, .value=0xc6, .type=IO_READ},
        {.addr=0x6b05, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0x90, .type=IO_READ},
        {.addr=0x005e, .value=0x47, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0397) {
    const struct CPU_State initial_cpu = {.pc=0x7439, .a=0xe2, .x=0xe3, .y=0x87, .sp=0xc5, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x6f}, {.addr=0x7439, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x743a, .a=0xe2, .x=0xe3, .y=0x87, .sp=0xc5, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xe2}, {.addr=0x7439, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7439, .value=0xc6, .type=IO_READ},
        {.addr=0x743a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x6f, .type=IO_READ},
        {.addr=0x01e3, .value=0xe2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0398) {
    const struct CPU_State initial_cpu = {.pc=0x2957, .a=0xae, .x=0x96, .y=0x8a, .sp=0x19, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0xba}, {.addr=0x2957, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2958, .a=0xae, .x=0x96, .y=0x8a, .sp=0x19, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xae}, {.addr=0x2957, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2957, .value=0xc6, .type=IO_READ},
        {.addr=0x2958, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xba, .type=IO_READ},
        {.addr=0x0196, .value=0xae, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_0399) {
    const struct CPU_State initial_cpu = {.pc=0xbabf, .a=0x77, .x=0xcf, .y=0xbc, .sp=0xe8, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x31}, {.addr=0xbabf, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbac0, .a=0x77, .x=0xcf, .y=0xbc, .sp=0xe8, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x77}, {.addr=0xbabf, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbabf, .value=0xc6, .type=IO_READ},
        {.addr=0xbac0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x31, .type=IO_READ},
        {.addr=0x00cf, .value=0x77, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_039B) {
    const struct CPU_State initial_cpu = {.pc=0x5b5a, .a=0xa3, .x=0x33, .y=0x4e, .sp=0xf7, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xfd}, {.addr=0x5b5a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5b5b, .a=0xa3, .x=0x33, .y=0x4e, .sp=0xf7, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xa3}, {.addr=0x5b5a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5b5a, .value=0xc6, .type=IO_READ},
        {.addr=0x5b5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0xfd, .type=IO_READ},
        {.addr=0x0133, .value=0xa3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_039D) {
    const struct CPU_State initial_cpu = {.pc=0x1324, .a=0x27, .x=0x40, .y=0x4c, .sp=0xf7, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x82}, {.addr=0x1324, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1325, .a=0x27, .x=0x40, .y=0x4c, .sp=0xf7, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x27}, {.addr=0x1324, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1324, .value=0xc6, .type=IO_READ},
        {.addr=0x1325, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x82, .type=IO_READ},
        {.addr=0x0140, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_039E) {
    const struct CPU_State initial_cpu = {.pc=0x61b9, .a=0x3d, .x=0x2a, .y=0xb7, .sp=0x6f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x92}, {.addr=0x61b9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x61ba, .a=0x3d, .x=0x2a, .y=0xb7, .sp=0x6f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x3d}, {.addr=0x61b9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x61b9, .value=0xc6, .type=IO_READ},
        {.addr=0x61ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x92, .type=IO_READ},
        {.addr=0x002a, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_039F) {
    const struct CPU_State initial_cpu = {.pc=0x98a2, .a=0xa0, .x=0x9a, .y=0xe3, .sp=0x9a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0xc3}, {.addr=0x98a2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x98a3, .a=0xa0, .x=0x9a, .y=0xe3, .sp=0x9a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xa0}, {.addr=0x98a2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x98a2, .value=0xc6, .type=IO_READ},
        {.addr=0x98a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xc3, .type=IO_READ},
        {.addr=0x019a, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xbb19, .a=0xff, .x=0x80, .y=0xe9, .sp=0x05, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0xfb}, {.addr=0xbb19, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xbb1a, .a=0xff, .x=0x80, .y=0xe9, .sp=0x05, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0xff}, {.addr=0xbb19, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xbb19, .value=0xc6, .type=IO_READ},
        {.addr=0xbb1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0xfb, .type=IO_READ},
        {.addr=0x0080, .value=0xff, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x7b2a, .a=0x1c, .x=0x36, .y=0xa2, .sp=0x72, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x36}, {.addr=0x7b2a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7b2b, .a=0x1c, .x=0x36, .y=0xa2, .sp=0x72, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x1c}, {.addr=0x7b2a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7b2a, .value=0xc6, .type=IO_READ},
        {.addr=0x7b2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x1c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x3739, .a=0xcb, .x=0x44, .y=0x31, .sp=0xfd, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xcf}, {.addr=0x3739, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x373a, .a=0xcb, .x=0x44, .y=0x31, .sp=0xfd, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xcb}, {.addr=0x3739, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3739, .value=0xc6, .type=IO_READ},
        {.addr=0x373a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xcf, .type=IO_READ},
        {.addr=0x0144, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x8579, .a=0xa5, .x=0x4d, .y=0x81, .sp=0x2d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x96}, {.addr=0x8579, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x857a, .a=0xa5, .x=0x4d, .y=0x81, .sp=0x2d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xa5}, {.addr=0x8579, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8579, .value=0xc6, .type=IO_READ},
        {.addr=0x857a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x96, .type=IO_READ},
        {.addr=0x014d, .value=0xa5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x0b29, .a=0x97, .x=0xdf, .y=0xc6, .sp=0xea, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x06}, {.addr=0x0b29, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0b2a, .a=0x97, .x=0xdf, .y=0xc6, .sp=0xea, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x97}, {.addr=0x0b29, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0b29, .value=0xc6, .type=IO_READ},
        {.addr=0x0b2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x06, .type=IO_READ},
        {.addr=0x00df, .value=0x97, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xd744, .a=0xc4, .x=0x99, .y=0x35, .sp=0x75, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xe7}, {.addr=0xd744, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xd745, .a=0xc4, .x=0x99, .y=0x35, .sp=0x75, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xc4}, {.addr=0xd744, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xd744, .value=0xc6, .type=IO_READ},
        {.addr=0xd745, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xe7, .type=IO_READ},
        {.addr=0x0199, .value=0xc4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xc96b, .a=0x5a, .x=0xe7, .y=0x7c, .sp=0xf1, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x97}, {.addr=0xc96b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc96c, .a=0x5a, .x=0xe7, .y=0x7c, .sp=0xf1, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x5a}, {.addr=0xc96b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc96b, .value=0xc6, .type=IO_READ},
        {.addr=0xc96c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x97, .type=IO_READ},
        {.addr=0x01e7, .value=0x5a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x725d, .a=0x8f, .x=0x2e, .y=0x05, .sp=0x9f, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x85}, {.addr=0x725d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x725e, .a=0x8f, .x=0x2e, .y=0x05, .sp=0x9f, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x8f}, {.addr=0x725d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x725d, .value=0xc6, .type=IO_READ},
        {.addr=0x725e, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x85, .type=IO_READ},
        {.addr=0x012e, .value=0x8f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xf5e9, .a=0xf0, .x=0x1f, .y=0xe4, .sp=0x56, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0xcb}, {.addr=0xf5e9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf5ea, .a=0xf0, .x=0x1f, .y=0xe4, .sp=0x56, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0xf0}, {.addr=0xf5e9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf5e9, .value=0xc6, .type=IO_READ},
        {.addr=0xf5ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0xcb, .type=IO_READ},
        {.addr=0x001f, .value=0xf0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xc211, .a=0x4f, .x=0xe1, .y=0x23, .sp=0x5b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x9b}, {.addr=0xc211, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc212, .a=0x4f, .x=0xe1, .y=0x23, .sp=0x5b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x4f}, {.addr=0xc211, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc211, .value=0xc6, .type=IO_READ},
        {.addr=0xc212, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x9b, .type=IO_READ},
        {.addr=0x01e1, .value=0x4f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x5fe7, .a=0x72, .x=0xa5, .y=0x23, .sp=0x86, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x38}, {.addr=0x5fe7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5fe8, .a=0x72, .x=0xa5, .y=0x23, .sp=0x86, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x72}, {.addr=0x5fe7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5fe7, .value=0xc6, .type=IO_READ},
        {.addr=0x5fe8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x38, .type=IO_READ},
        {.addr=0x01a5, .value=0x72, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x39a1, .a=0x2d, .x=0xc0, .y=0xcb, .sp=0x0e, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x5a}, {.addr=0x39a1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x39a2, .a=0x2d, .x=0xc0, .y=0xcb, .sp=0x0e, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x2d}, {.addr=0x39a1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x39a1, .value=0xc6, .type=IO_READ},
        {.addr=0x39a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x5a, .type=IO_READ},
        {.addr=0x00c0, .value=0x2d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x6d03, .a=0x2e, .x=0x3b, .y=0x3f, .sp=0xc4, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x66}, {.addr=0x6d03, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x6d04, .a=0x2e, .x=0x3b, .y=0x3f, .sp=0xc4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x2e}, {.addr=0x6d03, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x6d03, .value=0xc6, .type=IO_READ},
        {.addr=0x6d04, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x66, .type=IO_READ},
        {.addr=0x013b, .value=0x2e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x289b, .a=0x3d, .x=0xd2, .y=0xcd, .sp=0x7f, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0xde}, {.addr=0x289b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x289c, .a=0x3d, .x=0xd2, .y=0xcd, .sp=0x7f, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x3d}, {.addr=0x289b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x289b, .value=0xc6, .type=IO_READ},
        {.addr=0x289c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xde, .type=IO_READ},
        {.addr=0x01d2, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x3330, .a=0x86, .x=0x4b, .y=0x47, .sp=0xd6, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0xe2}, {.addr=0x3330, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3331, .a=0x86, .x=0x4b, .y=0x47, .sp=0xd6, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x86}, {.addr=0x3330, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3330, .value=0xc6, .type=IO_READ},
        {.addr=0x3331, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0xe2, .type=IO_READ},
        {.addr=0x004b, .value=0x86, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xc2d8, .a=0xba, .x=0xdc, .y=0x4d, .sp=0xa4, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xc7}, {.addr=0xc2d8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc2d9, .a=0xba, .x=0xdc, .y=0x4d, .sp=0xa4, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xba}, {.addr=0xc2d8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc2d8, .value=0xc6, .type=IO_READ},
        {.addr=0xc2d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0xc7, .type=IO_READ},
        {.addr=0x01dc, .value=0xba, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xb43b, .a=0xad, .x=0x55, .y=0x62, .sp=0xf1, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x7f}, {.addr=0xb43b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xb43c, .a=0xad, .x=0x55, .y=0x62, .sp=0xf1, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xad}, {.addr=0xb43b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xb43b, .value=0xc6, .type=IO_READ},
        {.addr=0xb43c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x7f, .type=IO_READ},
        {.addr=0x0155, .value=0xad, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x417b, .a=0xa9, .x=0xff, .y=0x97, .sp=0x5a, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x95}, {.addr=0x417b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x417c, .a=0xa9, .x=0xff, .y=0x97, .sp=0x5a, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xa9}, {.addr=0x417b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x417b, .value=0xc6, .type=IO_READ},
        {.addr=0x417c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x95, .type=IO_READ},
        {.addr=0x01ff, .value=0xa9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xca91, .a=0xad, .x=0xa9, .y=0xd9, .sp=0xef, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0xb3}, {.addr=0xca91, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xca92, .a=0xad, .x=0xa9, .y=0xd9, .sp=0xef, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0xad}, {.addr=0xca91, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xca91, .value=0xc6, .type=IO_READ},
        {.addr=0xca92, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0xb3, .type=IO_READ},
        {.addr=0x00a9, .value=0xad, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x01be, .a=0x98, .x=0x8f, .y=0xa6, .sp=0xcd, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x42}, {.addr=0x01be, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x01bf, .a=0x98, .x=0x8f, .y=0xa6, .sp=0xcd, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x98}, {.addr=0x01be, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x01be, .value=0xc6, .type=IO_READ},
        {.addr=0x01bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x42, .type=IO_READ},
        {.addr=0x008f, .value=0x98, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x876e, .a=0x94, .x=0x89, .y=0x09, .sp=0x20, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0x47}, {.addr=0x876e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x876f, .a=0x94, .x=0x89, .y=0x09, .sp=0x20, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0x94}, {.addr=0x876e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x876e, .value=0xc6, .type=IO_READ},
        {.addr=0x876f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0x47, .type=IO_READ},
        {.addr=0x0089, .value=0x94, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x46cf, .a=0xb1, .x=0x67, .y=0xb4, .sp=0x7c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xd8}, {.addr=0x46cf, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x46d0, .a=0xb1, .x=0x67, .y=0xb4, .sp=0x7c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xb1}, {.addr=0x46cf, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x46cf, .value=0xc6, .type=IO_READ},
        {.addr=0x46d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xd8, .type=IO_READ},
        {.addr=0x0167, .value=0xb1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x8ef5, .a=0x17, .x=0x83, .y=0xcc, .sp=0x97, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x67}, {.addr=0x8ef5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8ef6, .a=0x17, .x=0x83, .y=0xcc, .sp=0x97, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x17}, {.addr=0x8ef5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8ef5, .value=0xc6, .type=IO_READ},
        {.addr=0x8ef6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x67, .type=IO_READ},
        {.addr=0x0083, .value=0x17, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x0cf9, .a=0x89, .x=0x70, .y=0x0a, .sp=0x20, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0xaa}, {.addr=0x0cf9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0cfa, .a=0x89, .x=0x70, .y=0x0a, .sp=0x20, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x89}, {.addr=0x0cf9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0cf9, .value=0xc6, .type=IO_READ},
        {.addr=0x0cfa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0xaa, .type=IO_READ},
        {.addr=0x0070, .value=0x89, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xacf4, .a=0xe3, .x=0xd7, .y=0xe0, .sp=0x85, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x82}, {.addr=0xacf4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xacf5, .a=0xe3, .x=0xd7, .y=0xe0, .sp=0x85, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0xe3}, {.addr=0xacf4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xacf4, .value=0xc6, .type=IO_READ},
        {.addr=0xacf5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x82, .type=IO_READ},
        {.addr=0x00d7, .value=0xe3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x0265, .a=0x98, .x=0x93, .y=0x4b, .sp=0x9c, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x6a}, {.addr=0x0265, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0266, .a=0x98, .x=0x93, .y=0x4b, .sp=0x9c, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x98}, {.addr=0x0265, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0265, .value=0xc6, .type=IO_READ},
        {.addr=0x0266, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x6a, .type=IO_READ},
        {.addr=0x0093, .value=0x98, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x12f2, .a=0x3d, .x=0xe5, .y=0x3a, .sp=0x9b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0xe8}, {.addr=0x12f2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x12f3, .a=0x3d, .x=0xe5, .y=0x3a, .sp=0x9b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x3d}, {.addr=0x12f2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x12f2, .value=0xc6, .type=IO_READ},
        {.addr=0x12f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0xe8, .type=IO_READ},
        {.addr=0x00e5, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x2321, .a=0x5f, .x=0xd1, .y=0x47, .sp=0xfd, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x97}, {.addr=0x2321, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2322, .a=0x5f, .x=0xd1, .y=0x47, .sp=0xfd, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x5f}, {.addr=0x2321, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2321, .value=0xc6, .type=IO_READ},
        {.addr=0x2322, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x97, .type=IO_READ},
        {.addr=0x00d1, .value=0x5f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xe422, .a=0x70, .x=0xcb, .y=0x83, .sp=0xb4, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x54}, {.addr=0xe422, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe423, .a=0x70, .x=0xcb, .y=0x83, .sp=0xb4, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0x70}, {.addr=0xe422, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe422, .value=0xc6, .type=IO_READ},
        {.addr=0xe423, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0x54, .type=IO_READ},
        {.addr=0x00cb, .value=0x70, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xe203, .a=0x12, .x=0xc5, .y=0x8e, .sp=0x06, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xbb}, {.addr=0xe203, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe204, .a=0x12, .x=0xc5, .y=0x8e, .sp=0x06, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x12}, {.addr=0xe203, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe203, .value=0xc6, .type=IO_READ},
        {.addr=0xe204, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xbb, .type=IO_READ},
        {.addr=0x01c5, .value=0x12, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xc656, .a=0x65, .x=0x86, .y=0x0d, .sp=0x2d, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x5c}, {.addr=0xc656, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc657, .a=0x65, .x=0x86, .y=0x0d, .sp=0x2d, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x65}, {.addr=0xc656, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc656, .value=0xc6, .type=IO_READ},
        {.addr=0xc657, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x5c, .type=IO_READ},
        {.addr=0x0186, .value=0x65, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x892f, .a=0xf1, .x=0xc1, .y=0x65, .sp=0x36, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x78}, {.addr=0x892f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x8930, .a=0xf1, .x=0xc1, .y=0x65, .sp=0x36, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xf1}, {.addr=0x892f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x892f, .value=0xc6, .type=IO_READ},
        {.addr=0x8930, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x78, .type=IO_READ},
        {.addr=0x01c1, .value=0xf1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x401b, .a=0x04, .x=0xe9, .y=0xf3, .sp=0x1a, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0xea}, {.addr=0x401b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x401c, .a=0x04, .x=0xe9, .y=0xf3, .sp=0x1a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x04}, {.addr=0x401b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x401b, .value=0xc6, .type=IO_READ},
        {.addr=0x401c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0xea, .type=IO_READ},
        {.addr=0x00e9, .value=0x04, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xea16, .a=0xb1, .x=0xbf, .y=0x8f, .sp=0x57, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x43}, {.addr=0xea16, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xea17, .a=0xb1, .x=0xbf, .y=0x8f, .sp=0x57, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xb1}, {.addr=0xea16, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xea16, .value=0xc6, .type=IO_READ},
        {.addr=0xea17, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x43, .type=IO_READ},
        {.addr=0x01bf, .value=0xb1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x62d4, .a=0x78, .x=0x26, .y=0xbd, .sp=0x59, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x40}, {.addr=0x62d4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x62d5, .a=0x78, .x=0x26, .y=0xbd, .sp=0x59, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x78}, {.addr=0x62d4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x62d4, .value=0xc6, .type=IO_READ},
        {.addr=0x62d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x40, .type=IO_READ},
        {.addr=0x0126, .value=0x78, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x7934, .a=0x07, .x=0xdd, .y=0x52, .sp=0x82, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0xce}, {.addr=0x7934, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7935, .a=0x07, .x=0xdd, .y=0x52, .sp=0x82, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x07}, {.addr=0x7934, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7934, .value=0xc6, .type=IO_READ},
        {.addr=0x7935, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xce, .type=IO_READ},
        {.addr=0x01dd, .value=0x07, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xf201, .a=0x9c, .x=0x0c, .y=0x0b, .sp=0x1a, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x7b}, {.addr=0xf201, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf202, .a=0x9c, .x=0x0c, .y=0x0b, .sp=0x1a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x9c}, {.addr=0xf201, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf201, .value=0xc6, .type=IO_READ},
        {.addr=0xf202, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x7b, .type=IO_READ},
        {.addr=0x010c, .value=0x9c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x4439, .a=0x6f, .x=0x47, .y=0x0b, .sp=0x96, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x14}, {.addr=0x4439, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x443a, .a=0x6f, .x=0x47, .y=0x0b, .sp=0x96, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x6f}, {.addr=0x4439, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4439, .value=0xc6, .type=IO_READ},
        {.addr=0x443a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0x14, .type=IO_READ},
        {.addr=0x0047, .value=0x6f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xce49, .a=0x84, .x=0xbb, .y=0x7a, .sp=0x50, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0xda}, {.addr=0xce49, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xce4a, .a=0x84, .x=0xbb, .y=0x7a, .sp=0x50, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x84}, {.addr=0xce49, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xce49, .value=0xc6, .type=IO_READ},
        {.addr=0xce4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0xda, .type=IO_READ},
        {.addr=0x00bb, .value=0x84, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xa791, .a=0x7e, .x=0x47, .y=0x4f, .sp=0xd5, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0xe3}, {.addr=0xa791, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa792, .a=0x7e, .x=0x47, .y=0x4f, .sp=0xd5, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x7e}, {.addr=0xa791, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa791, .value=0xc6, .type=IO_READ},
        {.addr=0xa792, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0xe3, .type=IO_READ},
        {.addr=0x0047, .value=0x7e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x3ff7, .a=0x58, .x=0x5a, .y=0x54, .sp=0x6b, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x7f}, {.addr=0x3ff7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3ff8, .a=0x58, .x=0x5a, .y=0x54, .sp=0x6b, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x58}, {.addr=0x3ff7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3ff7, .value=0xc6, .type=IO_READ},
        {.addr=0x3ff8, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x7f, .type=IO_READ},
        {.addr=0x015a, .value=0x58, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x095b, .a=0x18, .x=0x9d, .y=0xba, .sp=0xbf, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x37}, {.addr=0x095b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x095c, .a=0x18, .x=0x9d, .y=0xba, .sp=0xbf, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x18}, {.addr=0x095b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x095b, .value=0xc6, .type=IO_READ},
        {.addr=0x095c, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x37, .type=IO_READ},
        {.addr=0x019d, .value=0x18, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x77d1, .a=0x56, .x=0x83, .y=0xc6, .sp=0x78, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xa1}, {.addr=0x77d1, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x77d2, .a=0x56, .x=0x83, .y=0xc6, .sp=0x78, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x56}, {.addr=0x77d1, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x77d1, .value=0xc6, .type=IO_READ},
        {.addr=0x77d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xa1, .type=IO_READ},
        {.addr=0x0183, .value=0x56, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x9de2, .a=0x19, .x=0x2b, .y=0x89, .sp=0x6e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x2a}, {.addr=0x9de2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9de3, .a=0x19, .x=0x2b, .y=0x89, .sp=0x6e, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x19}, {.addr=0x9de2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9de2, .value=0xc6, .type=IO_READ},
        {.addr=0x9de3, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x2a, .type=IO_READ},
        {.addr=0x002b, .value=0x19, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xf4b2, .a=0x0b, .x=0xbb, .y=0xb6, .sp=0xdc, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0xf2}, {.addr=0xf4b2, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf4b3, .a=0x0b, .x=0xbb, .y=0xb6, .sp=0xdc, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x0b}, {.addr=0xf4b2, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf4b2, .value=0xc6, .type=IO_READ},
        {.addr=0xf4b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0xf2, .type=IO_READ},
        {.addr=0x00bb, .value=0x0b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x15a8, .a=0x37, .x=0xbe, .y=0xb8, .sp=0x09, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0xa0}, {.addr=0x15a8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x15a9, .a=0x37, .x=0xbe, .y=0xb8, .sp=0x09, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0x37}, {.addr=0x15a8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x15a8, .value=0xc6, .type=IO_READ},
        {.addr=0x15a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00be, .value=0xa0, .type=IO_READ},
        {.addr=0x00be, .value=0x37, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x61f4, .a=0xeb, .x=0x86, .y=0x03, .sp=0xb6, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x64}, {.addr=0x61f4, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x61f5, .a=0xeb, .x=0x86, .y=0x03, .sp=0xb6, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xeb}, {.addr=0x61f4, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x61f4, .value=0xc6, .type=IO_READ},
        {.addr=0x61f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x64, .type=IO_READ},
        {.addr=0x0086, .value=0xeb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x295a, .a=0x14, .x=0x10, .y=0x88, .sp=0x3a, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0xcd}, {.addr=0x295a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x295b, .a=0x14, .x=0x10, .y=0x88, .sp=0x3a, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x14}, {.addr=0x295a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x295a, .value=0xc6, .type=IO_READ},
        {.addr=0x295b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xcd, .type=IO_READ},
        {.addr=0x0110, .value=0x14, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x1c26, .a=0xbc, .x=0x12, .y=0xef, .sp=0xea, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x9a}, {.addr=0x1c26, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1c27, .a=0xbc, .x=0x12, .y=0xef, .sp=0xea, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xbc}, {.addr=0x1c26, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1c26, .value=0xc6, .type=IO_READ},
        {.addr=0x1c27, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x9a, .type=IO_READ},
        {.addr=0x0112, .value=0xbc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xa0a5, .a=0x6a, .x=0xa4, .y=0x2e, .sp=0x7d, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x18}, {.addr=0xa0a5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa0a6, .a=0x6a, .x=0xa4, .y=0x2e, .sp=0x7d, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x6a}, {.addr=0xa0a5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa0a5, .value=0xc6, .type=IO_READ},
        {.addr=0xa0a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x18, .type=IO_READ},
        {.addr=0x00a4, .value=0x6a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xa1ea, .a=0xa7, .x=0x95, .y=0xd8, .sp=0x83, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x62}, {.addr=0xa1ea, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xa1eb, .a=0xa7, .x=0x95, .y=0xd8, .sp=0x83, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xa7}, {.addr=0xa1ea, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xa1ea, .value=0xc6, .type=IO_READ},
        {.addr=0xa1eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x62, .type=IO_READ},
        {.addr=0x0195, .value=0xa7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xf8e8, .a=0xd3, .x=0x0d, .y=0x89, .sp=0x7e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0xc8}, {.addr=0xf8e8, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf8e9, .a=0xd3, .x=0x0d, .y=0x89, .sp=0x7e, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0xd3}, {.addr=0xf8e8, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf8e8, .value=0xc6, .type=IO_READ},
        {.addr=0xf8e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0xc8, .type=IO_READ},
        {.addr=0x000d, .value=0xd3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x3f69, .a=0x4a, .x=0x97, .y=0xff, .sp=0xb5, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x29}, {.addr=0x3f69, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3f6a, .a=0x4a, .x=0x97, .y=0xff, .sp=0xb5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x4a}, {.addr=0x3f69, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3f69, .value=0xc6, .type=IO_READ},
        {.addr=0x3f6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x29, .type=IO_READ},
        {.addr=0x0097, .value=0x4a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xf4f0, .a=0x0e, .x=0x35, .y=0xda, .sp=0x43, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0xc3}, {.addr=0xf4f0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf4f1, .a=0x0e, .x=0x35, .y=0xda, .sp=0x43, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x0e}, {.addr=0xf4f0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf4f0, .value=0xc6, .type=IO_READ},
        {.addr=0xf4f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0xc3, .type=IO_READ},
        {.addr=0x0035, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x5547, .a=0x9a, .x=0xc8, .y=0x93, .sp=0x19, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x03}, {.addr=0x5547, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5548, .a=0x9a, .x=0xc8, .y=0x93, .sp=0x19, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x9a}, {.addr=0x5547, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5547, .value=0xc6, .type=IO_READ},
        {.addr=0x5548, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0x03, .type=IO_READ},
        {.addr=0x00c8, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xf28d, .a=0xbd, .x=0x1c, .y=0xb1, .sp=0x68, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x37}, {.addr=0xf28d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf28e, .a=0xbd, .x=0x1c, .y=0xb1, .sp=0x68, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xbd}, {.addr=0xf28d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf28d, .value=0xc6, .type=IO_READ},
        {.addr=0xf28e, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x37, .type=IO_READ},
        {.addr=0x011c, .value=0xbd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x1ab0, .a=0xb9, .x=0x76, .y=0x4c, .sp=0x11, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0xc0}, {.addr=0x1ab0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1ab1, .a=0xb9, .x=0x76, .y=0x4c, .sp=0x11, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xb9}, {.addr=0x1ab0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1ab0, .value=0xc6, .type=IO_READ},
        {.addr=0x1ab1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0xc0, .type=IO_READ},
        {.addr=0x0076, .value=0xb9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xf7fe, .a=0x7b, .x=0x73, .y=0x2d, .sp=0xa0, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x1f}, {.addr=0xf7fe, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf7ff, .a=0x7b, .x=0x73, .y=0x2d, .sp=0xa0, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x7b}, {.addr=0xf7fe, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf7fe, .value=0xc6, .type=IO_READ},
        {.addr=0xf7ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x1f, .type=IO_READ},
        {.addr=0x0073, .value=0x7b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x820d, .a=0xc2, .x=0x44, .y=0x23, .sp=0xd2, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x86}, {.addr=0x820d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x820e, .a=0xc2, .x=0x44, .y=0x23, .sp=0xd2, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xc2}, {.addr=0x820d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x820d, .value=0xc6, .type=IO_READ},
        {.addr=0x820e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x86, .type=IO_READ},
        {.addr=0x0144, .value=0xc2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x5330, .a=0xc7, .x=0xe5, .y=0xe9, .sp=0xaf, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x6e}, {.addr=0x5330, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5331, .a=0xc7, .x=0xe5, .y=0xe9, .sp=0xaf, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0xc7}, {.addr=0x5330, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5330, .value=0xc6, .type=IO_READ},
        {.addr=0x5331, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0x6e, .type=IO_READ},
        {.addr=0x00e5, .value=0xc7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x724c, .a=0x6b, .x=0xe9, .y=0xef, .sp=0xae, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x27}, {.addr=0x724c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x724d, .a=0x6b, .x=0xe9, .y=0xef, .sp=0xae, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x6b}, {.addr=0x724c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x724c, .value=0xc6, .type=IO_READ},
        {.addr=0x724d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0x27, .type=IO_READ},
        {.addr=0x00e9, .value=0x6b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x75ee, .a=0x91, .x=0xe1, .y=0x09, .sp=0x50, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0xa2}, {.addr=0x75ee, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x75ef, .a=0x91, .x=0xe1, .y=0x09, .sp=0x50, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x91}, {.addr=0x75ee, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x75ee, .value=0xc6, .type=IO_READ},
        {.addr=0x75ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0xa2, .type=IO_READ},
        {.addr=0x00e1, .value=0x91, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xef1e, .a=0x74, .x=0x43, .y=0xe7, .sp=0xda, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x88}, {.addr=0xef1e, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xef1f, .a=0x74, .x=0x43, .y=0xe7, .sp=0xda, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x74}, {.addr=0xef1e, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xef1e, .value=0xc6, .type=IO_READ},
        {.addr=0xef1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x88, .type=IO_READ},
        {.addr=0x0143, .value=0x74, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x43fa, .a=0x1e, .x=0x48, .y=0x0d, .sp=0x9f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0xc8}, {.addr=0x43fa, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x43fb, .a=0x1e, .x=0x48, .y=0x0d, .sp=0x9f, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x1e}, {.addr=0x43fa, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x43fa, .value=0xc6, .type=IO_READ},
        {.addr=0x43fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0xc8, .type=IO_READ},
        {.addr=0x0148, .value=0x1e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xeae7, .a=0xd2, .x=0xe4, .y=0x40, .sp=0x84, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x2c}, {.addr=0xeae7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xeae8, .a=0xd2, .x=0xe4, .y=0x40, .sp=0x84, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0xd2}, {.addr=0xeae7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xeae7, .value=0xc6, .type=IO_READ},
        {.addr=0xeae8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x2c, .type=IO_READ},
        {.addr=0x00e4, .value=0xd2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x50dc, .a=0x39, .x=0x25, .y=0xab, .sp=0x76, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0xbe}, {.addr=0x50dc, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x50dd, .a=0x39, .x=0x25, .y=0xab, .sp=0x76, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x39}, {.addr=0x50dc, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x50dc, .value=0xc6, .type=IO_READ},
        {.addr=0x50dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xbe, .type=IO_READ},
        {.addr=0x0125, .value=0x39, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x0967, .a=0xe1, .x=0x1c, .y=0x44, .sp=0xdd, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0xab}, {.addr=0x0967, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0968, .a=0xe1, .x=0x1c, .y=0x44, .sp=0xdd, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0xe1}, {.addr=0x0967, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0967, .value=0xc6, .type=IO_READ},
        {.addr=0x0968, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0xab, .type=IO_READ},
        {.addr=0x001c, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x725d, .a=0x32, .x=0x12, .y=0x1b, .sp=0x05, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0xcc}, {.addr=0x725d, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x725e, .a=0x32, .x=0x12, .y=0x1b, .sp=0x05, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0x32}, {.addr=0x725d, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x725d, .value=0xc6, .type=IO_READ},
        {.addr=0x725e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0xcc, .type=IO_READ},
        {.addr=0x0012, .value=0x32, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x46b6, .a=0xe3, .x=0x17, .y=0xdc, .sp=0x3a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x9c}, {.addr=0x46b6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x46b7, .a=0xe3, .x=0x17, .y=0xdc, .sp=0x3a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xe3}, {.addr=0x46b6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x46b6, .value=0xc6, .type=IO_READ},
        {.addr=0x46b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x9c, .type=IO_READ},
        {.addr=0x0017, .value=0xe3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x4133, .a=0x44, .x=0x7f, .y=0x3a, .sp=0x3b, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x0d}, {.addr=0x4133, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x4134, .a=0x44, .x=0x7f, .y=0x3a, .sp=0x3b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x44}, {.addr=0x4133, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x4133, .value=0xc6, .type=IO_READ},
        {.addr=0x4134, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x0d, .type=IO_READ},
        {.addr=0x007f, .value=0x44, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C6, _C6_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xfc52, .a=0xa9, .x=0xcc, .y=0xa4, .sp=0x0f, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x70}, {.addr=0xfc52, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfc53, .a=0xa9, .x=0xcc, .y=0xa4, .sp=0x0f, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0xa9}, {.addr=0xfc52, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfc52, .value=0xc6, .type=IO_READ},
        {.addr=0xfc53, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0x70, .type=IO_READ},
        {.addr=0x00cc, .value=0xa9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C6 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
